//Decompiled with MagicRDR v1.0
//Function Count : 332
//Statics Count : 342
//Natives Count : 417
//Parameters Count : 19

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	float fLocal_7 = 0.0f;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	float fLocal_17 = 0.0f;
	float fLocal_18 = 0.0f;
	float fLocal_19 = 0.0f;
	float fLocal_20 = 0.0f;
	bool bLocal_21 = false;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	float fLocal_27 = 0.0f;
	float fLocal_28 = 0.0f;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	float fLocal_33 = 0.0f;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	float fLocal_37 = 0.0f;
	float fLocal_38 = 0.0f;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0.0f;
	bool bLocal_49 = false;
	int iLocal_50 = 0;
	float fLocal_51 = 0.0f;
	bool bLocal_52 = false;
	float fLocal_53 = 0.0f;
	float fLocal_54 = 0.0f;
	float fLocal_55 = 0.0f;
	bool bLocal_56 = false;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<19> Local_59 = { 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<74> Local_78 = { 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_177 = 2;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 2;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 2;
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
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 2;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 2;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 2;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	bool bLocal_271 = false;
	float fLocal_272 = 0.0f;
	bool bLocal_273 = false;
	vector3 vLocal_274 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_277 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_280 = false;
	float fLocal_281 = 0.0f;
	bool bLocal_282 = false;
	bool bLocal_283 = false;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	struct<6> Local_287 = { 2, 0, 0, 2, 0, 0 } ;
	float fLocal_293 = 0.0f;
	float fLocal_294 = 0.0f;
	float fLocal_295 = 0.0f;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	bool bLocal_298 = false;
	bool bLocal_299 = false;
	int iLocal_300 = 0;
	bool bLocal_301 = false;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	bool bLocal_307 = true;
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
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	struct<19> ScriptParam_0 = { 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[64];
	
	iLocal_4 = 31;
	iLocal_5 = 33;
	iLocal_6 = 1;
	fLocal_7 = 2.0f;
	bLocal_21 = 0,65f;
	bLocal_22 = 0,78f;
	bLocal_23 = -0,3f;
	bLocal_24 = 0,3f;
	bLocal_25 = -0,75f;
	bLocal_26 = 0,75f;
	fLocal_27 = 5.0f;
	fLocal_28 = 1.0f;
	bLocal_29 = 0.0f;
	bLocal_30 = 0,15f;
	bLocal_31 = -1.0f;
	bLocal_32 = -1.0f;
	fLocal_33 = bLocal_22;
	bLocal_34 = false;
	fLocal_48 = 0,2f;
	iLocal_57 = 0;
	iLocal_58 = 9;
	iLocal_284 = 4294967295;
	iLocal_285 = 0;
	fLocal_293 = 2,5f;
	fLocal_294 = 0,5f;
	iLocal_296 = 0;
	iLocal_297 = 0;
	Local_59 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bVar0 = false;
	while (bVar0 <= 4)
	{
		strcpy(&cVar2, "Seat ", 64);
		stradd(&cVar2, I2STR(bVar0), 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": isOccupied", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iPlayerIndex", 64);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 2)
	{
		strcpy(&cVar2, "Player ", 64);
		stradd(&cVar2, I2STR(bVar0), 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, "n: iSeatId", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iNumWins", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iCurrentHorseShoeId", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iScore", 64);
		cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
		stradd(&cVar18, ": iPreviousScore", 64);
		stradd(&cVar2, ".Shoe[", 64);
		bVar1 = false;
		while (bVar1 <= 2)
		{
			cVar18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar2 };
			stradd(&cVar18, I2STR(bVar1), 64);
			stradd(&cVar18, "].Distance", 64);
			bVar1++;
		}
		bVar0++;
	}
	Function_306();
	while (Function_209())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_59 };
		Function_185();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x219 / 537
{
	int iVar0;
	
	if (!IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED() || HUD_IS_FADING())
		{
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	SET_GLOBAL_DISABLE_SPU_COLLIDER_UPDATE(0);
	GRINGO_ALLOW_ACTIVATION(Local_59.f_68, true);
	GRINGO_ALLOW_ACTIVATION(Local_59.f_72, true);
	ALLOW_TUMBLEWEEDS(1);
	SET_AUTO_CONVERSATION_LOOK(GET_PLAYER_ACTOR(0), 1);
	if (IS_ACTOR_VALID((*&Local_59 + 4)[0]))
	{
		AI_RESET_NAV_SUBGRID_CELL_SIZE((*&Local_59 + 4)[0]);
		SET_ACTOR_UPDATE_PRIORITY((*&Local_59 + 4)[0], bLocal_15);
		SET_AUTO_CONVERSATION_LOOK((*&Local_59 + 4)[0], 1);
		DEREFERENCE_ACTOR((*&Local_59 + 4)[0]);
		REMOVE_ALL_OBJECT_ATTACHMENTS((*&Local_59 + 4)[0]);
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_59 + 4)[0]);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (IS_OBJECT_VALID((*&Local_78[074] + 96)[iVar0]))
			{
				ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT((*&Local_78[074] + 96)[iVar0]));
			}
			iVar0++;
		}
	}
	AI_RESET_NAV_SUBGRID_CELL_SIZE(Function_184());
	Function_183(Function_184());
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_59.f_44);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_59.f_44);
	RESET_TREE_TYPE_CLEARING();
	SET_ANIMATION_OVERRIDE_SCALE(Function_184(), 1.0f);
	Function_182();
	UI_EXIT("HorseShoes");
	UI_EXIT("Scorebox");
	UI_EXIT("Scorebox_Cash");
	UI_EXIT("Scorebox_Bet");
	Function_180();
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	RESET_ANIM_SET_FOR_ACTOR(GET_PLAYER_ACTOR(0), 0);
	CANCEL_TIME_WARP(0);
	ENABLE_PIP(0, 0, 0);
	Function_176();
	HUD_ENABLE(true);
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_DISMOUNT_NOW(GET_PLAYER_ACTOR(0));
	Function_171();
	Function_170();
	RELEASE_LAYOUT_REF(bLocal_36);
	if (!Function_169())
	{
		SET_ACTOR_ALLOW_BUMP_REACTIONS(GET_PLAYER_ACTOR(0), 1);
		Function_167(1);
		Function_166(1);
		Function_166(4);
		if (bLocal_2)
		{
			Function_24(Local_59, 1, 1, 1, 0);
		}
		else if (bLocal_3)
		{
			Function_20(Local_59);
		}
		else
		{
			Function_2(Local_59);
		}
	}
	TASK_CLEAR(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x3CC / 972
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x3ED / 1005
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x408 / 1032
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x429 / 1065
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x43F / 1087
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Function_7(bParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x4DB / 1243
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x4FC / 1276
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

void Function_9() //Position: 0x542 / 1346
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x55B / 1371
{
	int iVar0;
	
	if (!Function_18(bParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, bool bParam1) //Position: 0x5AE / 1454
{
	struct<4> Var0;
	
	if (!Function_18(bParam1))
	{
		return;
	}
	switch (Function_15(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_13(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_15(bParam1), Function_13(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x6D2 / 1746
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x6F7 / 1783
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x717 / 1815
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x72E / 1838
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x749 / 1865
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_17(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x990 / 2448
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x9B9 / 2489
{
	if (!Function_14(iParam0))
	{
		return 0;
	}
	if (!Function_19(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_19(int iParam0) //Position: 0x9DD / 2525
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x9F2 / 2546
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0xA10 / 2576
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_18(bParam0))
	{
		return;
	}
	iVar0 = Function_15(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_22(int iParam0) //Position: 0xAB6 / 2742
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0xAE0 / 2784
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xD36 / 3382
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_15(bParam0) == 1)
	{
		iVar2 = Function_13(bParam0);
		Function_161(&(Global_3422[iVar240]));
		Function_160(4194304);
		if (bParam3)
		{
			Function_112(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_106(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_112(iVar2, &uVar0, 0);
		}
		bVar1 = Function_105();
		if (bParam1)
		{
			Function_89(iVar2, bParam0, bVar1);
			Function_88();
		}
	}
	Function_37(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_29(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_15(bParam0) == 1)
		{
			iVar2 = Function_13(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_25();
}

void Function_25() //Position: 0xE23 / 3619
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_26(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_26(int iParam0, bool bParam1) //Position: 0xE53 / 3667
{
	int iVar0;
	
	iVar0 = Function_27(iParam0);
	if (!Function_14(iVar0))
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

int Function_27(int iParam0) //Position: 0xE90 / 3728
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xEAA / 3754
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xEC0 / 3776
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_29(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_29(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_29(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_29(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_29(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_29(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11B7 / 4535
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_32(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_31(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_31(char* cParam0, int iParam1) //Position: 0x1223 / 4643
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x125A / 4698
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
		if (Function_35(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_34(uVar0))
		{
			case 0x00000002:
				if (!Function_33(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_33(var uParam0, int iParam1) //Position: 0x12D2 / 4818
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x12E5 / 4837
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

int Function_35(int iParam0) //Position: 0x1386 / 4998
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&iVar1, 2147483648);
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

void Function_36(int iParam0, int iParam1) //Position: 0x13C3 / 5059
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13D6 / 5078
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_18(bParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_13(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_84();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_78(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_13(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_40(1);
			Function_39(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_38(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_38(int iParam0, int iParam1) //Position: 0x15E8 / 5608
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x1622 / 5666
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_169())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_40(bool bParam0) //Position: 0x1664 / 5732
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_70();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_41();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_36(&Global_63095, 1);
		Function_36(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_41() //Position: 0x16B5 / 5813
{
	Function_68();
	Function_67();
	Function_67();
	Function_66();
	Function_66();
	Function_65();
	Function_65();
	Function_48();
	Function_48();
	if (!Function_169())
	{
		Function_46();
		Function_45();
		Function_44();
		Function_43();
	}
	Function_42();
	return;
}

void Function_42() //Position: 0x16E8 / 5864
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

void Function_43() //Position: 0x17EE / 6126
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

void Function_44() //Position: 0x1821 / 6177
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

void Function_45() //Position: 0x19AF / 6575
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

void Function_46() //Position: 0x1B63 / 7011
{
	Function_47(&Global_28260, 1, 0);
	return;
}

void Function_47(int iParam0, bool bParam1, var uParam2) //Position: 0x1B71 / 7025
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
	void fVar13;
	
	bVar0 = Function_184();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

struct<8> Function_48() //Position: 0x1D62 / 7522
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
				iVar2 = ((Function_64((50 + iVar4)) + Function_64((183 + iVar4))) + Function_64((90 + iVar4)));
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
	Function_49(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_49(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DFD / 7677
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
		Function_63(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_62(iParam0);
	if (bParam2)
	{
		Function_50(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_50(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2098 / 8344
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_61(390))), 32);
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
					bVar19 = (Function_60(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_60(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_58(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_55(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_52(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_51(), &Var9);
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

var Function_51() //Position: 0x26C5 / 9925
{
	int iVar0;
	
	return iVar0;
}

var Function_52(int iParam0) //Position: 0x26CD / 9933
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_53(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26DE / 9950
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_54(char* cParam0, char* cParam1) //Position: 0x27D3 / 10195
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_55(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27EC / 10220
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_57(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_56(Function_57(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_56(int iParam0, int iParam1) //Position: 0x2851 / 10321
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_57(int iParam0, bool bParam1) //Position: 0x2863 / 10339
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_58(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2875 / 10357
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
	if (((Function_59(iParam0) != 19 || Function_59(iParam0) != 17) || Function_59(iParam0) != 10) || Function_59(iParam0) != 9)
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

int Function_59(int iParam0) //Position: 0x29A5 / 10661
{
	return Global_35278[iParam020].f_48;
}

float Function_60(int iParam0) //Position: 0x29B4 / 10676
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_61(int iParam0) //Position: 0x29ED / 10733
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_62(int iParam0) //Position: 0x2A2A / 10794
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

int Function_63(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BC4 / 11204
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
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

int Function_64(bool bParam0) //Position: 0x2DDE / 11742
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_65() //Position: 0x2E1F / 11807
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
		iVar2 = ((Function_64((50 + iVar3) + 15) + Function_64((183 + iVar3) + 15)) + Function_64((90 + iVar3) + 15));
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
	Function_49(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_66() //Position: 0x2EA8 / 11944
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
			iVar2 = ((Function_64((50 + iVar3) + 8) + Function_64((183 + iVar3) + 8)) + Function_64((90 + iVar3) + 8));
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
	Function_49(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_67() //Position: 0x2F3F / 12095
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
		iVar2 = ((Function_64((50 + iVar3)) + Function_64((183 + iVar3))) + Function_64((90 + iVar3)));
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
	Function_49(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_68() //Position: 0x2FBE / 12222
{
	Function_69(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_49(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_69(int iParam0, bool bParam1, int iParam2) //Position: 0x2FE4 / 12260
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
	Function_63(iParam0, bParam1, 1);
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_50(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_70() //Position: 0x31EE / 12782
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_72(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_72(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_71(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
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

bool Function_71(vector3 vParam0) //Position: 0x328F / 12943
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_72(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x32A7 / 12967
{
	int iVar0;
	
	iVar0 = Function_76(uParam2, uParam3);
	if (Function_75(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_74(&Global_63095, 1);
			Function_36(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_74(&Global_63095, 2);
			Function_36(&Global_63095, 1);
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_74(&Global_63095, 2);
		Function_36(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_73();
	return StackVal, StackVal, Function_73();
}

vector3 Function_73() //Position: 0x338E / 13198
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_74(int iParam0, int iParam1) //Position: 0x3397 / 13207
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_75(int iParam0) //Position: 0x33A6 / 13222
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_76(bool bParam0, bool bParam1) //Position: 0x33BC / 13244
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
				fVar2 = Function_77(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_77(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_75(bVar0) && !bParam1)
	{
		bVar0 = Function_76(bParam0, 1);
	}
	return bVar0;
}

float Function_77(vector3 vParam0, vector3 vParam3) //Position: 0x3483 / 13443
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_78(bool bParam0) //Position: 0x34A0 / 13472
{
	int iVar0;
	int iVar1;
	
	if (!Function_14(bParam0))
	{
		return;
	}
	switch (Function_15(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_13(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_83(12, 1, 0, 0);
				Function_82(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_83(13, 1, 0, 0);
				Function_82(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_83(14, 1, 0, 0);
				Function_82(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_83(15, 1, 0, 0);
				Function_82(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_83(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_81(bParam0) == 1)
					{
						iVar0 = Function_80(bParam0);
						if (Function_79(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_82(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_82(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_82(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_82(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_82(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_82(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_82(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_82(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_82(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_82(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_82(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_82(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_82(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_82(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_82(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_82(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_82(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_82(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_82(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_82(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_83(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_83(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_83(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_80(bParam0) == 0)
			{
				if (Function_81(bParam0) == 1)
				{
					Function_83(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_79(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_82(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_82(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_82(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_82(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_82(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_82(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_82(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_82(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_81(bParam0) == 1)
			{
				Function_83(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_83(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_82(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_82(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_82(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_83(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_82(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_82(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

bool Function_79(int iParam0) //Position: 0x397C / 14716
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_80(bool bParam0) //Position: 0x3992 / 14738
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_81(bool bParam0) //Position: 0x39B1 / 14769
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_82(int iParam0, bool bParam1) //Position: 0x39CB / 14795
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_83(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3A32 / 14898
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
	Function_63(iParam0, TO_FLOAT(bParam1), 1);
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_50(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_84() //Position: 0x3C52 / 15442
{
	int iVar0;
	int iVar1;
	
	if (!Function_28(Global_6269))
	{
		return;
	}
	iVar0 = Function_64(24);
	iVar1 = Function_27(Global_6269);
	if (!Function_28(iVar0) && Function_87(iVar1) < 0)
	{
		Function_49(24, Global_6269, 0);
		Function_85(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_87(Function_27(iVar0)))
	{
		Function_49(24, Global_6269, 0);
		Function_85(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_85(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3CD2 / 15570
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_86(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_86(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4026 / 16422
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_87(int iParam0) //Position: 0x40A9 / 16553
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_88() //Position: 0x40C3 / 16579
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_89(int iParam0, int iParam1, bool bParam2) //Position: 0x40F1 / 16625
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_28(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_104(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_64(42) - Global_34165.f_116);
				bVar1 = (Function_64(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_61(49)) - Global_34165.f_124);
				bVar3 = (Function_64(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_64(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_103(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_90(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_22(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_90(int iParam0, bool bParam1, bool bParam2) //Position: 0x438D / 17293
{
	int iVar0;
	bool bVar1;
	
	if (Function_102(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_64(3);
	Function_99();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_97(3, bVar1);
		if (!bParam2)
		{
			if (!Function_33(Global_76848, 4))
			{
				Function_30(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_83(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_60(3));
	iVar0 = Function_64(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_92(4, Function_96(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_92(4, Function_96(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_92(4, Function_96(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_92(4, Function_96(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_92(4, Function_96(Global_12976.f_156), 1);
				Function_91(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
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

void Function_91(int iParam0, int iParam1) //Position: 0x4550 / 17744
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_92(int iParam0, char* cParam1, bool bParam2) //Position: 0x47AE / 18350
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_85(iParam0, cParam1, 0, 1);
	iVar1 = Function_93();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_93() //Position: 0x4933 / 18739
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_94();
	return 0;
}

void Function_94() //Position: 0x49D2 / 18898
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_95(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_95(int iParam0) //Position: 0x4A81 / 19073
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_96(int iParam0) //Position: 0x4ADF / 19167
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

int Function_97(int iParam0, bool bParam1) //Position: 0x4B6E / 19310
{
	bool bVar0;
	int iVar1;
	
	Function_83(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_98(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_93();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_98(int iParam0, int iParam1) //Position: 0x4D0B / 19723
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_99() //Position: 0x4D4C / 19788
{
	Function_101(3, 0.0f);
	Function_100(3, 10000.0f);
	return;
}

int Function_100(int iParam0, int iParam1) //Position: 0x4D62 / 19810
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_101(int iParam0, int iParam1) //Position: 0x4DA2 / 19874
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_102(int iParam0) //Position: 0x4DE2 / 19938
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_103(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4DF1 / 19953
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_104(int iParam0) //Position: 0x4FB9 / 20409
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_105() //Position: 0x504E / 20558
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_106(int iParam0) //Position: 0x5073 / 20595
{
	if (!Function_28(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_90(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_90(25, 1, 0);
			Function_111(1, 1);
			break;
		
		case 0x00000015:
			Function_111(50, 1);
			Function_90(250, 1, 0);
			Function_107(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_90(75, 1, 0);
			Function_107(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_90(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_111(50, 1);
			Function_90(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_111(5, 1);
			Function_107(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_90(75, 1, 0);
			Function_107(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_111(5, 1);
			Function_90(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_90(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_107(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_111(25, 1);
			Function_90(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_111(10, 1);
			Function_90(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_90(50, 1, 0);
			Function_107(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_90(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_90(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_107(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_111(20, 1);
			Function_90(75, 1, 0);
			Function_107(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_111(25, 1);
			Function_90(150, 1, 0);
			Function_107(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_111(10, 1);
			Function_90(150, 1, 0);
			Function_107(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_90(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_107(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_107(100, 1, 0);
			Function_111(5, 1);
			break;
		
		case 0x0000000F:
			Function_111(3, 1);
			Function_90(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_107(125, 1, 0);
			Function_90(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_111(50, 1);
			Function_90(100, 1, 0);
			Function_107(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_111(50, 1);
			Function_90(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_111(75, 1);
			Function_90(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_90(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_90(75, 1, 0);
			Function_107(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_90(250, 1, 0);
			Function_107(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_90(75, 1, 0);
			Function_107(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_90(200, 1, 0);
			Function_107(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_90(75, 1, 0);
			Function_107(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_90(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_111(50, 1);
			Function_90(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_111(100, 1);
			Function_90(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_90(200, 1, 0);
			Function_107(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_90(300, 1, 0);
			Function_107(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_90(300, 1, 0);
			Function_107(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_90(300, 1, 0);
			Function_107(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_90(500, 1, 0);
			Function_107(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_90(150, 1, 0);
			Function_107(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_107(25, 1, 0);
			Function_111(100, 1);
			break;
		
		case 0x0000002A:
			Function_90(150, 1, 0);
			Function_107(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_107(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_107(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_107(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_107(150, 1, 0);
			Function_111(100, 1);
			break;
		
		case 0x00000035:
			Function_107(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_107(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_107(150, 1, 0);
			Function_111(100, 1);
			break;
		
		case 0x00000032:
			Function_107(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_107(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_107(int iParam0, bool bParam1, bool bParam2) //Position: 0x552E / 21806
{
	int iVar0;
	bool bVar1;
	
	if (Function_102(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_64(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_97(1, bVar1);
			if (!bParam2)
			{
				if (!Function_33(Global_76848, 1))
				{
					Function_30(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_110(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_33(Global_76848, 2))
				{
					Function_30(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_83(1, bVar1, 0, 0);
	}
	else
	{
		Function_109(1, (4294967295 * bVar1), 0);
	}
	if (Function_64(1) <= 4294962296)
	{
		Function_49(1, 4294962296, 0);
	}
	else if (Function_64(1) >= 5000)
	{
		Function_49(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_60(1));
	iVar0 = Function_64(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_92(2, Function_108(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_92(2, Function_108(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_92(2, Function_108(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_92(2, Function_108(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_92(2, Function_108(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_92(2, Function_108(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_92(2, Function_108(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_92(2, Function_108(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_92(2, Function_108(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_92(2, Function_108(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_92(2, Function_108(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
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
				Global_12976.f_152 = 5;
				Function_92(2, Function_108(Global_12976.f_152), 0);
			}
			break;
	}
	Function_91(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_108(int iParam0) //Position: 0x5843 / 22595
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

int Function_109(int iParam0, bool bParam1, int iParam2) //Position: 0x58E6 / 22758
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
	Function_62(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_50(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_110(int iParam0, bool bParam1) //Position: 0x5AE1 / 23265
{
	bool bVar0;
	int iVar1;
	
	Function_109(iParam0, bParam1, 0);
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
	iVar1 = Function_98(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_93();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_111(bool bParam0, bool bParam1) //Position: 0x5C7D / 23677
{
	bool bVar0;
	
	bVar0 = Function_64(0);
	if ((Function_64(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_83(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_64(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_83(597, bParam0, 0, 0);
	}
	if ((Function_64(597) + Function_64(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_112(int iParam0, var uParam1, bool bParam2) //Position: 0x5D48 / 23880
{
	struct<4> Var0;
	
	if (!Function_28(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_158(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_155(Global_30640[0]);
			Function_155(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_153(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_155(Global_30668[0]);
			Function_144(0);
			Function_142(2, 1);
			Function_142(0, 1);
			Function_142(1, 1);
			break;
		
		case 0x00000003:
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_155(Global_30668[0]);
			Function_155(Global_30640[0]);
			Function_140(0, 1);
			Function_140(15, 1);
			Function_140(9, 1);
			Function_140(12, 1);
			Function_140(16, 1);
			Function_142(3, 1);
			break;
		
		case 0x00000005:
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_153(21, bParam2, 4);
			Function_155(Global_30668[0]);
			Function_142(39, 1);
			break;
		
		case 0x00000007:
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_139(4))
					{
						Function_129(4, 0, 0, 1);
					}
				}
			}
			Function_155(Global_30640[0]);
			Function_155(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_155(Global_30640[0]);
			Function_155(Global_30668[2]);
			Function_128(&(Global_29008[Global_30668[2]]), 32768);
			Function_127(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_153(9, bParam2, 4);
			Function_155(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_155(Global_30640[0]);
			Function_155(Global_30658[0]);
			Function_128(&(Global_29008[Global_30658[0]]), 32768);
			Function_127(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_155(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_155(Global_30640[0]);
			Function_155(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_155(Global_30640[1]);
			Function_155(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_155(Global_30679[0]);
			Function_155(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_155(Global_30658[5]);
			Function_155(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_153(21, bParam2, 4);
			Function_155(Global_30640[4]);
			Function_155(Global_30658[4]);
			Function_126(&Global_76847, 0x2000000);
			Function_126(&Global_76847, 0x4000000);
			Function_126(&Global_76847, 4096);
			Function_126(&Global_76847, 8);
			Function_126(&Global_76847, 8388608);
			Function_126(&Global_76847, 524288);
			Function_126(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_155(Global_30640[4]);
			Function_155(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_127(&(Global_29008[Global_30640[4]]), 256);
			Function_155(Global_30640[4]);
			Function_155(Global_30658[0]);
			Function_128(&(Global_29008[Global_30658[0]]), 32768);
			Function_127(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_155(Global_30640[0]);
			Function_155(Global_30640[5]);
			Function_153(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_155(Global_30658[3]);
			Function_128(&(Global_29008[Global_30658[3]]), 32768);
			Function_127(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_153(9, bParam2, 4);
			Function_155(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_128(&(Global_29008[Global_30679[1]]), 32768);
			Function_155(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_153(12, bParam2, 4);
			Function_127(&(Global_29008[Global_30679[1]]), 256);
			Function_155(Global_30668[3]);
			Function_155(Global_30693[0]);
			Function_155(Global_30685[0]);
			Function_144(4);
			Function_140(13, 1);
			Function_140(1, 1);
			Function_140(18, 1);
			Function_142(34, 1);
			Function_142(44, 1);
			Function_142(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_153(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_155(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_155(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_155(Global_30693[0]);
			Function_155(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_155(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_155(Global_30685[0]);
			Function_155(Global_30693[0]);
			Function_155(Global_30693[1]);
			Function_155(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_153(23, bParam2, 3);
			Function_140(23, 1);
			Function_155(Global_30685[0]);
			Function_155(Global_30685[2]);
			Function_128(&(Global_29008[Global_30685[2]]), 32768);
			Function_127(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_153(19, bParam2, 4);
			Function_155(Global_30685[0]);
			Function_155(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_153(24, bParam2, 3);
			Function_140(24, 1);
			Function_155(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_155(Global_30685[0]);
			Function_155(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_155(Global_30693[12]);
			Function_155(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_155(Global_30693[12]);
			Function_155(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_153(25, bParam2, 10);
			Function_155(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_155(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_155(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_153(13, bParam2, 4);
			Function_155(Global_30693[2]);
			Function_155(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_139(8))
				{
					Function_129(8, 0, 0, 1);
				}
			}
			Function_155(Global_30685[0]);
			Function_144(9);
			Function_140(7, 1);
			Function_140(11, 1);
			Function_140(3, 1);
			Function_140(20, 1);
			Function_142(57, 1);
			break;
		
		case 0x0000002A:
			Function_153(2, bParam2, 4);
			Function_155(Global_30717[0]);
			Function_155(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_155(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_155(Global_30717[0]);
			Function_155(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_155(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_155(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_155(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_153(17, bParam2, 4);
			Function_155(Global_30723[0]);
			Function_155(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_124(15))
				{
					Function_119(15, 0, 1);
				}
			}
			Function_127(&(Global_29008[Global_30717[1]]), 256);
			Function_144(11);
			Function_155(Global_30717[1]);
			Function_155(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_155(Global_30717[1]);
			Function_155(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_155(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_155(Global_30717[1]);
			Function_113(11);
			Function_144(12);
			Global_16537[1121].f_40 = 0;
			Function_142(56, 1);
			if (!bParam2)
			{
				if (!Function_139(9))
				{
					Function_129(9, 0, 0, 0);
				}
				if (!Function_139(10))
				{
					Function_129(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_113(int iParam0) //Position: 0x6638 / 26168
{
	bool bVar0;
	
	if (!Function_75(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_118(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_118(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_114(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_114(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x67A7 / 26535
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_116(Function_117(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_116(Function_117(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_116(StackVal);
				vVar1 = { StackVal, StackVal, Function_116(StackVal) };
				if (Function_115(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_115(vector3 vParam0, vector3 vParam3) //Position: 0x68AD / 26797
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_116(int iParam0) //Position: 0x68DA / 26842
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_117(vector3 vParam0) //Position: 0x6931 / 26929
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

void Function_118(bool bParam0, bool bParam1) //Position: 0x697F / 27007
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_119(bool bParam0, bool bParam1, bool bParam2) //Position: 0x69D3 / 27091
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_123(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_124(bParam0))
	{
		if (!Function_139(bParam0))
		{
			Function_129(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_83(457, 1, 0, 0);
		Function_122(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_121(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 0);
			}
			else
			{
				Function_120();
			}
		}
	}
	return;
}

void Function_120() //Position: 0x6B71 / 27505
{
	return;
}

bool Function_121(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6B77 / 27511
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_122(bool bParam0, int iParam1) //Position: 0x6C1B / 27675
{
	if (!Function_123(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_123(int iParam0) //Position: 0x6C70 / 27760
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_124(int iParam0) //Position: 0x6C86 / 27782
{
	if (!Function_123(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_125(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_125(int iParam0, int iParam1) //Position: 0x6CD7 / 27863
{
	int iVar0;
	
	if (!Function_123(iParam0))
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

void Function_126(var uParam0, int iParam1) //Position: 0x6D04 / 27908
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_127(var uParam0, int iParam1) //Position: 0x6D13 / 27923
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_128(var uParam0, int iParam1) //Position: 0x6D2A / 27946
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6D39 / 27961
{
	struct<8> Var0;
	
	if (!Function_123(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_138(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_139(bParam0))
	{
		Function_83(456, 1, 0, 0);
		Function_122(bParam0, 2);
		if (bParam2)
		{
			if (!Function_121(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 5);
			}
			else
			{
				Function_120();
			}
		}
		Function_132(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_131() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_131() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_130(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_130(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6E83 / 28291
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

bool Function_131() //Position: 0x6ECE / 28366
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_132(bool bParam0) //Position: 0x6EFB / 28411
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_136(bParam0, Function_137(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_136(bParam0, Function_137(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_135(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_134(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_133(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_133(int iParam0) //Position: 0x70AB / 28843
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_123(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

void Function_134(bool bParam0, bool bParam1) //Position: 0x7102 / 28930
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

var Function_135(int iParam0) //Position: 0x7127 / 28967
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_123(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

bool Function_136(bool bParam0, int iParam1) //Position: 0x717D / 29053
{
	int iVar0;
	
	if (!Function_123(bParam0))
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

int Function_137(bool bParam0) //Position: 0x71DC / 29148
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_138(int iParam0) //Position: 0x71E8 / 29160
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_139(int iParam0) //Position: 0x7204 / 29188
{
	if (!Function_123(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_125(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_140(int iParam0, int iParam1) //Position: 0x7256 / 29270
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_141(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_141(int iParam0, int iParam1) //Position: 0x72C9 / 29385
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_142(int iParam0, int iParam1) //Position: 0x7325 / 29477
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_143(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x7396 / 29590
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_144(int iParam0) //Position: 0x73F0 / 29680
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_75(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_152(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_152(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_83(468, 1, 0, 0);
			Function_82(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_130("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_114(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_129(14, 1, 0, 0);
				Function_145(14, 1, 0, 0, 0);
			}
			if (!Function_121(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 6);
			}
			else
			{
				Function_120();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_130("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_83(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_82(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_145(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x769C / 30364
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_123(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_138(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_125(bParam0, 2))
	{
		Function_83(456, 1, 0, 0);
		Function_122(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_130(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_136(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_122(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_121(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 0);
			}
			else
			{
				Function_120();
			}
		}
		Function_132(bParam0);
		if (StackVal && !Function_151(((((!Function_131() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_151((((Function_131() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_147();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_146(3, bParam1);
				break;
			
			case 0x00000005:
				Function_146(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_146(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_146(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_146(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_146(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_82(2, 24);
				break;
			
			case 0x00000003:
				Function_82(2, 25);
				break;
			
			case 0x0000000F:
				Function_82(2, 26);
				break;
			
			case 0x0000000D:
				Function_82(2, 27);
				break;
			
			case 0x0000000E:
				Function_82(2, 28);
				break;
			}
	}
}

void Function_146(int iParam0, bool bParam1) //Position: 0x792B / 31019
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_147() //Position: 0x798A / 31114
{
	if (Function_123(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_150(Global_28180);
			Global_28180.f_8 = Function_148(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_150(Global_28180);
			Global_28180.f_8 = Function_148(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_148(int iParam0, int iParam1) //Position: 0x7A05 / 31237
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_26(6, 0) || Function_26(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_149(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_26(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_149(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_26(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_149(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_149(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_149(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_149(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_26(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_149(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_149(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_149(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_149(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_149(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_26(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_71(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_71(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_71(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_149(int iParam0) //Position: 0x85F9 / 34297
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_150(int iParam0) //Position: 0x860E / 34318
{
	int iVar0;
	int iVar1;
	
	if (!Function_123(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
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

bool Function_151(bool bParam0, int iParam1) //Position: 0x865D / 34397
{
	return (bParam0 && iParam1) == 0;
}

void Function_152(bool bParam0, bool bParam1) //Position: 0x866A / 34410
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_153(bool bParam0, bool bParam1, int iParam2) //Position: 0x86BB / 34491
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_154(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_158(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_154(int iParam0, int iParam1) //Position: 0x8729 / 34601
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_155(int iParam0) //Position: 0x873C / 34620
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_157(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_128(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_83(473, 1, 0, 0);
		iVar0 = Function_156(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_83(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_83(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_83(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_82(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_82(7, 30);
	}
	if (Function_60(473) <= Function_61(473))
	{
		if (!Function_169())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_156(int iParam0) //Position: 0x883B / 34875
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_79(iParam0))
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

bool Function_157(var uParam0, int iParam1) //Position: 0x8893 / 34963
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_158(bool bParam0, bool bParam1, int iParam2) //Position: 0x88AF / 34991
{
	if (!Function_159(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_184(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_184(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_184(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_159(int iParam0) //Position: 0x8906 / 35078
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_160(int iParam0) //Position: 0x8918 / 35096
{
	int iVar0;
	
	if (Function_151(iParam0, 1) && Function_151(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_161(int iParam0) //Position: 0x894C / 35148
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_162(4, 0, 0);
		}
	}
	return;
}

void Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0x89B3 / 35251
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
		Function_163(Global_16524, bVar0, 1);
	}
	return;
}

void Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A90 / 35472
{
	int iVar0;
	
	Function_165(bParam0);
	Function_8(bParam1);
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
	Function_164();
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

void Function_164() //Position: 0x8C09 / 35849
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_165(int iParam0) //Position: 0x8C15 / 35861
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

void Function_166(int iParam0) //Position: 0x8C5B / 35931
{
	if (Function_151(iParam0, 1) && !Function_151(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_167(int iParam0) //Position: 0x8C88 / 35976
{
	Function_168(&Global_28842, iParam0);
	return;
}

void Function_168(var uParam0, var uParam1) //Position: 0x8C96 / 35990
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

bool Function_169() //Position: 0x8CB1 / 36017
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_170() //Position: 0x8CBA / 36026
{
	return;
}

void Function_171() //Position: 0x8CC0 / 36032
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_172(&bLocal_307);
	REMOVE_ANIM_SET("horseshoe_gped");
	return;
}

void Function_172(int iParam0) //Position: 0x8CE3 / 36067
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_173(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_173(var uParam0, int iParam1) //Position: 0x8D09 / 36105
{
	if (Function_175(uParam0[iParam13], 4))
	{
		if (Function_175(uParam0[iParam13], 1))
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
			Function_174(uParam0[iParam13], 1);
			Function_174(uParam0[iParam13], 2);
			Function_174(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_174(var uParam0, int iParam1) //Position: 0x8E37 / 36407
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_175(int iParam0, int iParam1) //Position: 0x8E51 / 36433
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_176() //Position: 0x8E6E / 36462
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_184(), true);
	Function_179(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_184()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_178();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(true);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	Function_177();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_177() //Position: 0x8EF0 / 36592
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_178() //Position: 0x8F05 / 36613
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_179(var uParam0) //Position: 0x8F19 / 36633
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_180() //Position: 0x8F2C / 36652
{
	Function_181(0);
	Function_181(1);
	Function_181(2);
	Function_181(3);
	Function_181(4);
	Function_181(5);
	Function_181(6);
	Function_181(7);
	return;
}

int Function_181(bool bParam0) //Position: 0x8F5A / 36698
{
	UI_HIDE_PROMPT(bParam0);
	return 1;
}

void Function_182() //Position: 0x8F66 / 36710
{
	if (VMAG(*(&Global_63098 + 44)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_63098.f_16 < 0.0f)
	{
		Global_63098.f_4 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, StackVal, Global_63098, Global_63098.f_16);
		Global_63098.f_16 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(Global_63098));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(Global_63098) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
		}
	}
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 4;
	return;
}

void Function_183(bool bParam0) //Position: 0x9080 / 36992
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 0);
		iVar0++;
	}
	return;
}

int Function_184() //Position: 0x90A5 / 37029
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_185() //Position: 0x90BA / 37050
{
	int iVar0[3];
	int iVar4;
	
	if (Function_207(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_193(&uLocal_8, &iVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_186();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_16 = 0;
		}
		else if (iVar4 == 1)
		{
			Function_186();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_16 = 1;
		}
		else if (iVar4 == 2)
		{
			Function_186();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_16 = 2;
		}
	}
	return;
}

void Function_186() //Position: 0x914E / 37198
{
	Function_188();
	Function_187(10, 3);
	return;
}

void Function_187(int iParam0, int iParam1) //Position: 0x915D / 37213
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_188() //Position: 0x9294 / 37524
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_192())
	{
		Function_191(10, 3);
	}
	else
	{
		Function_189();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_184(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_184());
	UI_POP("nDebugMenu");
	return;
}

void Function_189() //Position: 0x92DF / 37599
{
	Function_190(25, 2);
	return;
}

void Function_190(int iParam0, int iParam1) //Position: 0x92EB / 37611
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_191(int iParam0, int iParam1) //Position: 0x94E9 / 38121
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_192() //Position: 0x9620 / 38432
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_151(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9687 / 38535
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_206(&Var15, &Var0);
	uVar20 = Function_205(*uParam1, &Var15);
	Function_204(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_203(uParam0, uVar20);
	Function_201(StackVal, uParam0, Var15.f_12);
	Function_199(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_198(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_195(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_194(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_194(int iParam0, int iParam1, int iParam2) //Position: 0x974E / 38734
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_SET_TEXT(bVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_195(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x97AA / 38826
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_197(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_197(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1,5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_194(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_196(bParam1->f_32);
	}
	else
	{
		Function_196(bParam1->f_32);
	}
	return 0;
}

void Function_196(bool bParam0) //Position: 0x9930 / 39216
{
	bool bVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_SET_TEXT(bVar0, " ");
	}
	return;
}

void Function_197(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x996A / 39274
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

var Function_198(int iParam0, var uParam1, int iParam2) //Position: 0x9A18 / 39448
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_199(var uParam0, int iParam1, int iParam2) //Position: 0x9A3C / 39484
{
	switch (Function_200())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_200() //Position: 0x9AD8 / 39640
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_201(var uParam0, int iParam1, int iParam2) //Position: 0x9B14 / 39700
{
	switch (Function_202(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_202(int iParam0) //Position: 0x9BAC / 39852
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_184()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_151(*iParam0, 0x40000000))
		{
			Function_74(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_151(*iParam0, 0x40000000))
		{
			Function_74(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_184()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_151(*iParam0, 0x20000000))
		{
			Function_74(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_151(*iParam0, 0x20000000))
		{
			Function_74(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(iParam0, 0x20000000);
	return 0;
}

var Function_203(var uParam0, int iParam1) //Position: 0x9CF7 / 40183
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_204(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9E46 / 40518
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(bVar4, bParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_205(int iParam0, int iParam1) //Position: 0x9ED9 / 40665
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_206(var uParam0, int iParam1) //Position: 0x9EF3 / 40691
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1,6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_207(int iParam0) //Position: 0x9F41 / 40769
{
	if (!Function_208(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_208(int iParam0) //Position: 0x9F55 / 40789
{
	if (iParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

bool Function_209() //Position: 0x9F79 / 40825
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (Function_305())
	{
		Function_303(3);
		Function_302();
	}
	if (IS_VOLUME_VALID(Local_59.f_44))
	{
		if (IS_OBJECTSET_VALID(bLocal_49))
		{
			Function_301(bLocal_49);
		}
		else
		{
			bLocal_49 = CREATE_OBJECTSET_IN_LAYOUT(Function_51(), bLocal_36, 15, 1);
		}
		iLocal_50 = LOCATE_ACTORS_IN_VOLUME(Local_59.f_44, bLocal_49, 0, 1);
		bVar0 = false;
		while (bVar0 <= iLocal_50)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_49));
			if (!IS_ACTOR_PLAYER(bVar1) && bVar1 == (*&Local_59 + 4)[0])
			{
				AI_SET_NAV_ACTOR_WIDTH(bVar1, 0,5f);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar1, Local_59.f_44, 4, 1);
			}
			bVar0++;
		}
	}
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_300();
		return 0;
	}
	if (Function_305() && GET_NUM_PLAYERS() > 2)
	{
		Function_298();
		return 0;
	}
	bLocal_271 = (GET_CURRENT_GAME_TIME() - fLocal_272);
	if (bLocal_271 < 0,033333f)
	{
		bLocal_271 = 0,0333333f;
	}
	fLocal_272 = GET_CURRENT_GAME_TIME();
	Function_69(436, bLocal_271, 0);
	if (IS_EXITFLAG_SET())
	{
		Function_300();
		return 0;
	}
	if (IS_ACTOR_RIDING(Function_184()))
	{
		Function_300();
		return 0;
	}
	iVar2 = 0;
	while (StackVal <= iVar2)
	{
		if (IS_ACTOR_VALID((*&Local_59 + 4)[iVar2]))
		{
			if (GET_LAST_ATTACKER((*&Local_59 + 4)[iVar2]) == Function_184())
			{
				Function_300();
				return 0;
			}
		}
		Function_300();
		return 0;
		iVar2++;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			Function_293();
			break;
		
		case 0x00000001:
			Function_215();
			break;
		
		case 0x00000003:
			Function_210();
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000065:
			bLocal_2 = true;
			break;
		
		default:
			return 0;
	}
	if (bLocal_2)
	{
		Function_298();
		return 0;
	}
	if (bLocal_3)
	{
		Function_300();
		return 0;
	}
	return 1;
}

void Function_210() //Position: 0xA117 / 41239
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (iLocal_16 == 0)
			{
				if (!Function_213(Function_15(Local_59), Function_13(Local_59)))
				{
					Function_83(410, 1, 0, 0);
					Function_82(6, 12);
				}
			}
			iLocal_1 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_78 + 596)[Local_78.f_7046])
			{
				Function_212(StackVal, &Local_78);
			}
			TASK_CLEAR(Local_78[074]);
			MAKE_ACTOR_READY_FOR_ACTION(Local_78[074], 1);
			iLocal_1 = 7;
			break;
		
		case 0x00000007:
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Local_78[074])))
			{
				GRINGO_ALLOW_ACTIVATION(Local_59.f_68, true);
				GRINGO_ALLOW_ACTIVATION(Local_59.f_72, true);
				Function_211(GET_OBJECT_FROM_GRINGO(Local_59.f_68));
				Function_211(GET_OBJECT_FROM_GRINGO(Local_59.f_72));
				if (VDIST(Global_34574, Function_211(GET_OBJECT_FROM_GRINGO(Local_59.f_68))) > VDIST(Global_34574, Function_211(GET_OBJECT_FROM_GRINGO(Local_59.f_72))))
				{
					TASK_USE_GRINGO(Local_78[074], Local_59.f_68, "UseCase1", true, 1);
				}
				else
				{
					TASK_USE_GRINGO(Local_78[074], Local_59.f_72, "UseCase1", true, 1);
				}
				TASK_PRIORITY_SET(Local_78[074], 2);
				iLocal_1 = 8;
			}
			break;
		
		case 0x00000008:
			if (GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0)) == "")
			{
				if (iLocal_16 == 0)
				{
					bLocal_2 = true;
				}
				else if (iLocal_16 == 1)
				{
					bLocal_3 = true;
				}
				else if (iLocal_16 == 2)
				{
					Function_1();
				}
			}
			break;
	}
	return;
}

vector3 Function_211(bool bParam0) //Position: 0xA25F / 41567
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

void Function_212(int iParam0, int iParam1) //Position: 0xA286 / 41606
{
	int iVar0;
	
	(*iParam0 + 596)[iParam0[iParam174]->f_686] = 0;
	(iParam0 + 596[iParam0[iParam174]->f_686])->f_4 = 4294967295;
	TASK_CLEAR((*iParam0)[iParam174]);
	GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(StackVal));
	MAKE_ACTOR_READY_FOR_ACTION((*iParam0)[iParam174], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*iParam0)[iParam174], 1);
	REMOVE_ALL_OBJECT_ATTACHMENTS(GET_OBJECT_FROM_ACTOR((*iParam0)[iParam174]));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (IS_OBJECT_VALID((*iParam0[iParam174] + 96)[iVar0]))
		{
			ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT((*iParam0[iParam174] + 96)[iVar0]));
		}
		iVar0++;
	}
	ACTOR_END_FORCE_HOLSTER((*iParam0)[iParam174]);
	(*iParam0)[iParam174] = "";
	iParam0[iParam174]->f_68 = 4294967295;
	strcpy(iParam0[iParam174] + 4, "", 64);
	iParam0->f_700 = (iParam0->f_700 - 1);
	return;
}

bool Function_213(int iParam0, int iParam1) //Position: 0xA35A / 41818
{
	int iVar0;
	
	if (!Function_214(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_15(iVar0) != iParam0 && Function_13(iVar0) != iParam1)
		{
			if (Function_81(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_214(int iParam0) //Position: 0xA39F / 41887
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_215() //Position: 0xA3B4 / 41908
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	vector3 vVar11;
	char* cVar14[16];
	bool bVar18;
	vector3 vVar19;
	bool bVar25;
	bool bVar26;
	float fVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	struct<9> Var32;
	int iVar42;
	bool bVar43;
	struct<5> Var44;
	int iVar49;
	bool bVar50;
	int iVar51;
	bool bVar52;
	
	bVar1 = (!Function_305() || Function_292(&Local_78));
	if ((!Local_59.f_52 && !iLocal_321 != 6) && !HUD_IS_FADING())
	{
		if (Local_78[074].f_68 > Local_78[174].f_68 || !Function_305())
		{
			UI_LABEL_SET_TEXT("Scorebox_Player1", &Local_78[074] + 4);
			UI_LABEL_SET_TEXT("Scorebox_Player2", &Local_78[174] + 4);
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_78[074].f_280);
			UI_LABEL_SET_VALUE("Scorebox_Player2", Local_78[174].f_280);
			UI_LABEL_SET_VALUE_B("Scorebox_Player1", 11);
			UI_LABEL_SET_VALUE_B("Scorebox_Player2", 11);
		}
		else
		{
			UI_LABEL_SET_TEXT("Scorebox_Player1", &Local_78[174] + 4);
			UI_LABEL_SET_TEXT("Scorebox_Player2", &Local_78[074] + 4);
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_78[174].f_280);
			UI_LABEL_SET_VALUE("Scorebox_Player2", Local_78[074].f_280);
			UI_LABEL_SET_VALUE_B("Scorebox_Player1", 11);
			UI_LABEL_SET_VALUE_B("Scorebox_Player2", 11);
		}
	}
	if (!Function_305() && !iLocal_321 != 35)
	{
		if (!Local_59.f_52)
		{
			if ((((((((!Function_292(&Local_78) && !Function_291(32)) && ((((((iLocal_321 != 17 || iLocal_321 != 9) || iLocal_321 != 10) || iLocal_321 != 13) || iLocal_321 != 14) || iLocal_321 != 15) || iLocal_321 != 16)) && !Function_291(64)) && !HUD_IS_FADING()) && !HUD_IS_FADED()) && !HUD_IS_SHOWING_HELP_TEXT()) && !IS_BUTTON_DOWN(Function_290(), 7, 1, false)) || (((((Function_292(&Local_78) && !Function_291(32)) && (((iLocal_321 != 8 || iLocal_321 != 17) || iLocal_321 != 9) || iLocal_321 != 10)) && Local_78[Local_78.f_69674].f_92 != 0) && !HUD_IS_FADED()) && !HUD_IS_FADING()))
			{
				if (IS_BUTTON_PRESSED(Function_290(), 6, 1, 0))
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
					iLocal_300 = iLocal_321;
					Function_289(27, 0);
					Function_288(32, 1);
				}
			}
			else if (HUD_IS_SHOWING_HELP_TEXT() && IS_BUTTON_PRESSED(Function_290(), 6, 1, 0))
			{
				HUD_CLEAR_HELP();
			}
		}
		else if (!HUD_IS_FADING() && !HUD_IS_FADED())
		{
			if (IS_BUTTON_PRESSED(Function_290(), 6, 1, 0))
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_300 = 3;
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				Function_289(27, 0);
			}
		}
	}
	switch (iLocal_321)
	{
		case 0x00000000:
			if (Function_305())
			{
				Local_78.f_696 = StackVal;
			}
			else
			{
				Local_78.f_696 = 0;
			}
			if (Local_59.f_64 == 0)
			{
				Local_78.f_768 = 1;
			}
			else
			{
				Local_78.f_768 = 0;
			}
			Local_78.f_708 = 1;
			if (Function_291(128))
			{
				Local_78.f_696 = Function_287(&Local_78);
			}
			if (Local_59.f_52)
			{
				Function_289(1, 0);
			}
			else
			{
				Function_289(6, 0);
			}
			iLocal_286 = 0;
			if (Local_78[174].f_68 != 1 || Local_78[174].f_68 != 3)
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_78[174], "horseshoe/look");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_78[174], "horseshoe/look_right");
			}
			break;
		
		case 0x00000001:
			iLocal_58 = 0;
			if (Local_78.f_696 == 0)
			{
				if (Local_78[Local_78.f_69674].f_92 == 0)
				{
					Function_286();
					Function_130("HorseShoes_Tutorial_0", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_285();
					Function_130("HorseShoes_Tutorial_1", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else if (Local_78[Local_78.f_69674].f_92 == 0)
			{
				Function_130("HorseShoes_Tutorial_2", 0x41200000, 1, 0, 2, 1, 0);
			}
			Function_289(2, 0);
			break;
		
		case 0x00000002:
			iLocal_58 = 0;
			Function_289(8, 0);
			break;
		
		case 0x00000006:
			iLocal_58 = 2;
			iVar8 = Local_78.f_708;
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[074], "horseshoe/look/mid") && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[074], "horseshoe/look_right/mid"))
			{
				if (Local_78[074].f_68 != 1 || Local_78[074].f_68 != 3)
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/look/mid");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/look_right/mid");
				}
			}
			if ((GET_STICK_Y(Function_290(), 0, 1) > -0,3f || IS_BUTTON_PRESSED(Function_290(), 12, 1, 0)) || IS_BUTTON_DOWN(Function_290(), 12, 1, false))
			{
				if (Function_284(&iLocal_304) < fLocal_48)
				{
					Local_78.f_708++;
					Local_78.f_708 = Function_283(Local_78.f_708);
					Function_281(&iLocal_304);
				}
				fLocal_48 = (fLocal_48 - 0,008f);
			}
			else if ((GET_STICK_Y(Function_290(), 0, 1) < 0,3f || IS_BUTTON_PRESSED(Function_290(), 14, 1, 0)) || IS_BUTTON_DOWN(Function_290(), 14, 1, false))
			{
				if (Function_284(&iLocal_304) < fLocal_48)
				{
					Local_78.f_708 = (Local_78.f_708 - 1);
					Local_78.f_708 = Function_283(Local_78.f_708);
					Function_281(&iLocal_304);
				}
				fLocal_48 = (fLocal_48 - 0,008f);
			}
			else
			{
				fLocal_48 = 0,2f;
			}
			iVar8 = (iVar8 - Local_78.f_708);
			if (iVar8 != 0)
			{
				PLAY_SOUND_FRONTEND("RAISE_LOWER_BET_MASTER");
			}
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_280("HorseShoes_EnterBetObjective", -1.0f, 1, 2, 0, 0, 0);
			}
			UI_ENTER("Scorebox");
			UI_ENTER("Scorebox_Bet");
			UI_ENTER("Scorebox_Cash");
			UI_ENTER("Scorebox_Player1");
			UI_ENTER("Scorebox_Player2");
			UI_LABEL_SET_VALUE("Scorebox_Player1", false);
			UI_LABEL_SET_VALUE("Scorebox_Player2", false);
			UI_LABEL_SET_TEXT("Scorebox_Cash", "Horseshoes_CashLabel");
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_279());
			UI_REFRESH("Scorebox_Cash");
			UI_LABEL_SET_TEXT("Scorebox_Bet", "HorseShoes_Bet");
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_78.f_708);
			UI_REFRESH("Scorebox_Bet");
			if (IS_BUTTON_PRESSED(Function_290(), 6, 1, 0))
			{
				Function_278(Local_78.f_708, 0);
				UI_LABEL_SET_TEXT("Scorebox_Cash", "Horseshoes_CashLabel");
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_279());
				UI_REFRESH("Scorebox_Cash");
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				DECOR_SET_INT(Local_78[074], "iAdditionalMoney", Local_78.f_708);
				Function_289(7, 1);
				fVar9 = (TO_FLOAT(Local_78.f_708) / TO_FLOAT(Local_59.f_56));
				Function_277(fVar9);
				if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[074], "horseshoe/look/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/look/pst");
				}
				else if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[074], "horseshoe/look_right/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/look_right/pst");
				}
			}
			break;
		
		case 0x00000007:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[074], "horseshoe/look_right/pst") && !IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[074], "horseshoe/look/pst"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/idle");
				Function_289(8, 0);
			}
			break;
		
		case 0x00000008:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				iLocal_58 = 4;
			}
			else
			{
				iLocal_58 = 3;
			}
			if (Local_59.f_52)
			{
				if (Local_78.f_696 != 1 && !Function_291(8))
				{
					Function_288(8, 1);
					Function_280("HorseShoes_Tutorial_Objective", 0x40f00000, 1, 2, 0, 0, 0);
				}
			}
			if ((IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/idle") || Function_291(32)) || (Function_305() && !Function_292(&Local_78)))
			{
				if (!Local_59.f_52)
				{
					Function_177();
				}
				Function_281(&iLocal_39);
				if (bVar1)
				{
					if (Function_291(32))
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/grab2");
					}
					else if (!SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/grab"))
					{
					}
				}
				Function_281(&iLocal_39);
				if (!IS_BUTTON_DOWN(Function_290(), 7, 1, false))
				{
					Function_275(StackVal, StackVal, -Local_78[&Local_7874].f_80, 0);
				}
				Function_289(9, 0);
			}
			else
			{
				Function_274(&Local_78, 8);
				if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[Local_78.f_69674], "horseshoe/look/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/look/pst");
				}
				else if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[Local_78.f_69674], "horseshoe/look_right/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/look_right/pst");
				}
			}
			break;
		
		case 0x00000009:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				if (Local_78[Local_78.f_69674].f_92 == 0)
				{
					iLocal_58 = 4;
				}
				else
				{
					iLocal_58 = 5;
				}
			}
			else
			{
				iLocal_58 = 3;
			}
			if (Local_78[Local_78.f_69674].f_92 == 1)
			{
				if (Function_292(&Local_78))
				{
					if (!Function_291(2))
					{
						if (Function_273(&Local_78, Local_78.f_696, 0))
						{
							if (Function_272())
							{
								SAY_SINGLE_LINE_CONTEXT(Local_78[074], 272, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(Local_78[174], 470, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							Function_288(2, 1);
							Function_130("HorseShoes_LongThrowHelp", 12.0f, 1, 0, 2, 1, 0);
						}
					}
					if (!Function_291(4))
					{
						if (Function_271(&Local_78, Local_78.f_696, 0))
						{
							Function_288(4, 1);
							if (Function_272())
							{
								SAY_SINGLE_LINE_CONTEXT(Local_78[074], 272, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (fLocal_38 < fLocal_33)
							{
								Function_130("HorseShoes_ShortThrowLateReleaseHelp", 12.0f, 1, 0, 2, 1, 0);
								SAY_SINGLE_LINE_CONTEXT(Local_78[174], 470, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (fLocal_37 > 2,5f)
							{
								Function_130("HorseShoes_ShortThrowLowVelocityHelp", 12.0f, 1, 0, 2, 1, 0);
								SAY_SINGLE_LINE_CONTEXT(Local_78[174], 471, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if ((Function_268(1, 1, &Local_78) > Function_268(0, 1, &Local_78) && Function_268(1, 1, &Local_78) > Function_268(0, 0, &Local_78)) || (Function_268(1, 0, &Local_78) > Function_268(0, 1, &Local_78) && Function_268(1, 0, &Local_78) > Function_268(0, 0, &Local_78)))
					{
						iVar10 = 1;
					}
					if ((!Function_271(&Local_78, Local_78.f_696, 0) && !Function_273(&Local_78, Local_78.f_696, 0)) && iVar10)
					{
						if (Function_272())
						{
							SAY_SINGLE_LINE_CONTEXT(Local_78[074], 271, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(Local_78[174], 472, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_78[074], 272, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (Function_273(&Local_78, Local_78.f_696, 0) || Function_271(&Local_78, Local_78.f_696, 0))
				{
					SAY_SINGLE_LINE_CONTEXT(Local_78[174], 473, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else if (Function_268(Local_78.f_696, 0, &Local_78) > 1.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(Local_78[174], 474, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			if (!Function_291(16) && !Local_59.f_52)
			{
				Function_288(16, 1);
				Function_280("HorseShoes_Objective", 0x40f00000, 1, 2, 0, 0, 0);
				Function_281(&iLocal_42);
			}
			if ((IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/grab2") || Function_291(32)) || (Function_305() && !Function_292(&Local_78)))
			{
				if (StackVal == Local_78.f_696)
				{
					Local_78[Local_78.f_69674].f_80 = RAND_FLOAT_RANGE(-0,5f, 0,5f);
					Local_78[Local_78.f_69674].f_88 = -Local_78[Local_78.f_69674].f_80;
				}
				else
				{
					Local_78[Local_78.f_69674].f_88 = 0.0f;
				}
				if ((!HUD_IS_FADED() && (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_35) || CAMERA_GET_CURRENT_TRANSITION_TYPE(bLocal_35) != 1)) && !IS_BUTTON_DOWN(Function_290(), 7, 1, false))
				{
					Function_275(StackVal, StackVal, -Local_78[&Local_7874].f_80, 0);
				}
				if (!IS_OBJECT_VALID((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92]))
				{
					strcpy(&cVar14, "hsh", 16);
					if (NET_IS_IN_SESSION())
					{
						stradd(&cVar14, I2STR(GET_ACTOR_SLOT(Local_78[Local_78.f_69674])), 16);
					}
					else
					{
						stradd(&cVar14, I2STR(Local_78.f_696), 16);
					}
					stradd(&cVar14, I2STR(Local_78[Local_78.f_69674].f_92), 16);
					GET_OBJECT_POSITION(StackVal, &vVar11);
					NET_OBJECT_REPLICATION_MODE_START(17, 1);
					if (Function_305())
					{
						if (Function_292(&Local_78))
						{
							if (GET_LOCAL_SLOT() <= Function_267())
							{
								bVar18 = "$/fragments/p_gen_horseshoe03x";
							}
							else
							{
								bVar18 = "$/fragments/p_gen_horseshoe04x";
							}
						}
						else if (Function_267() <= GET_LOCAL_SLOT())
						{
							bVar18 = "$/fragments/p_gen_horseshoe03x";
						}
						else
						{
							bVar18 = "$/fragments/p_gen_horseshoe04x";
						}
						(*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92] = CREATE_PROP_IN_LAYOUT(bLocal_36, &cVar14, bVar18, vVar11, 0.0f, 0.0f, 0.0f, 0);
						if (Function_292(&Local_78))
						{
							if (!NET_REQUEST_OBJECT((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92]))
							{
								NET_LOG(true, "Horseshoes Net Prop", "Somehow failed to send ownership of my Players[%s] own horseshoe[%s]", I2STR(Local_78.f_696), I2STR(Local_78[Local_78.f_69674].f_92), 0, 0);
							}
							else
							{
								NET_LOG(true, "Horseshoes Net Prop", "Requested ownership of my Players[%s] own horseshoe[%s]", I2STR(Local_78.f_696), I2STR(Local_78[Local_78.f_69674].f_92), 0, 0);
							}
						}
						else
						{
							NET_LOG(true, "Horseshoes Net Prop", "Didn't need to request ownership of Players[%s]'s horseshoe[%s]", I2STR(Local_78.f_696), I2STR(Local_78[Local_78.f_69674].f_92), 0, 0);
						}
					}
					else if (Function_292(&Local_78))
					{
						(*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92] = CREATE_PROP_IN_LAYOUT(bLocal_36, &cVar14, "$/fragments/p_gen_horseshoe04x", vVar11, 0.0f, 0.0f, 0.0f, 0);
					}
					else
					{
						(*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92] = CREATE_PROP_IN_LAYOUT(bLocal_36, &cVar14, "$/fragments/p_gen_horseshoe03x", vVar11, 0.0f, 0.0f, 0.0f, 0);
					}
					NET_OBJECT_REPLICATION_MODE_END(17);
					(*&Local_78[Local_78.f_69674] + 108)[Local_78[Local_78.f_69674].f_92] = CREATE_VOLUME_IN_LAYOUT(bLocal_36, Function_51(), 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0,11f, 0,01f, 0,14f);
					ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME((*&Local_78[Local_78.f_69674] + 108)[Local_78[Local_78.f_69674].f_92]), (*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92], Function_51(), 0.0f, 0,002f, -0,093f, 0.0f, 0.0f, 0.0f, 4294967295);
				}
				SET_PROP_COLLIDE_WITH_MOVABLES((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92], 0);
				ATTACH_OBJECTS_USING_LOCATOR((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92], GET_OBJECT_FROM_ACTOR(Local_78[Local_78.f_69674]), "wrist_r_attachment", "grab", 4294967295);
				Function_288(4, 0);
				if (Function_305() && !Function_292(&Local_78))
				{
					Function_289(30, 0);
				}
				else
				{
					Function_289(10, 0);
				}
			}
			else
			{
				Function_274(&Local_78, 9);
			}
			break;
		
		case 0x0000000A:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				if (Local_78[Local_78.f_69674].f_92 == 0)
				{
					iLocal_58 = 4;
				}
				else
				{
					iLocal_58 = 5;
				}
			}
			else
			{
				iLocal_58 = 3;
			}
			if (IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/pre") || Function_291(32))
			{
				if (!IS_BUTTON_DOWN(Function_290(), 7, 1, false))
				{
					Function_275(StackVal, StackVal, -Local_78[&Local_7874].f_80, 0);
				}
				Function_281(&iLocal_39);
				if (Function_292(&Local_78))
				{
					fLocal_55 = 0,112f;
					fLocal_53 = 0,5f;
				}
				else
				{
					fLocal_55 = 0.0f;
					fLocal_53 = -1,5f;
				}
				Local_78[Local_78.f_69674].f_76 = ((fLocal_55 / 2.0f) + 0,5f);
				Local_78[Local_78.f_69674].f_84 = 0.0f;
				if (Function_292(&Local_78))
				{
					Function_289(11, 0);
				}
				else
				{
					Function_289(13, 0);
				}
			}
			else
			{
				Function_274(&Local_78, 10);
			}
			break;
		
		case 0x0000000B:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				if (Local_78[Local_78.f_69674].f_92 == 0)
				{
					iLocal_58 = 4;
				}
				else
				{
					iLocal_58 = 5;
				}
			}
			else
			{
				iLocal_58 = 3;
			}
			if (IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/Sweep"))
			{
				Function_281(&iLocal_45);
				Function_266(&iLocal_45);
				if (Function_291(32) && Local_78[Local_78.f_69674] != GET_PLAYER_ACTOR(0))
				{
					GET_OBJECT_POSITION(StackVal, &vVar19);
					bVar25 = GET_OBJECT_HEADING(StackVal);
					TELEPORT_ACTOR_WITH_HEADING(Local_78[Local_78.f_69674], vVar19, bVar25, 0, true, 1);
					HUD_FADE_IN(1.0f, 1065353216);
					iLocal_300 = 12;
					Function_289(28, 0);
				}
				else
				{
					Function_289(12, 0);
				}
				Local_78[Local_78.f_69674].f_76 = 0,5f;
				SET_PANIM_PARAMS(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_80, 0.0f);
				SET_PANIM_PHASE(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_76);
			}
			else
			{
				SET_PANIM_PARAMS(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_80, 0.0f);
				Function_274(&Local_78, 11);
			}
			break;
		
		case 0x0000000C:
			iLocal_58 = 5;
			if (IS_BUTTON_DOWN(Function_290(), 0, 1, false) || IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				UI_EXIT("HorseShoes");
			}
			else
			{
				UI_ENTER("HorseShoes");
				UI_ENTER("HorseShoes_target");
				UI_ENTER("HorseShoes_target_offset");
				UI_LABEL_SET_VALUE("HorseShoes_target", ROUND((0,65f * 100.0f)));
				UI_LABEL_SET_VALUE("HorseShoes_target_offset", ROUND(((0,78f - 0,65f) * 100.0f)));
			}
			UI_LABEL_SET_TEXT("HorseShoes", "Horseshoes_ArmSpeedandPositionLabel");
			UI_ENTER("HorseShoes_X");
			UI_ENTER("HorseShoes_Y");
			if (IS_DISPLAY_WIDESCREEN())
			{
				if (IS_PS3())
				{
					UI_LABEL_SET_VALUE("HorseShoes_X", 4294966826);
				}
				else
				{
					UI_LABEL_SET_VALUE("HorseShoes_X", 4294966796);
				}
			}
			else if (IS_PS3())
			{
				UI_LABEL_SET_VALUE("HorseShoes_X", 4294966961);
			}
			else
			{
				UI_LABEL_SET_VALUE("HorseShoes_X", 4294966946);
			}
			UI_LABEL_SET_VALUE("HorseShoes_Y", 530);
			if (fLocal_52 > 2,5f)
			{
				bVar26 = (100 - FLOOR(((fLocal_52 / 2,5f) * 50.0f)));
			}
			else
			{
				fVar27 = ((fLocal_52 - 2,5f) / (3,16f - 2,5f));
				bVar26 = (100 - FLOOR(((fVar27 * 50.0f) + 50.0f)));
			}
			if (bVar26 >= 100)
			{
				bVar26 = 100;
			}
			else if (bVar26 <= 0)
			{
				bVar26 = false;
			}
			bVar28 = FLOOR((Local_78[Local_78.f_69674].f_76 * 100.0f));
			if (bVar28 >= 100)
			{
				bVar28 = 100;
			}
			else if (bVar28 <= 0)
			{
				bVar28 = false;
			}
			UI_LABEL_SET_VALUE("HorseShoes", bVar28);
			UI_LABEL_SET_VALUE_B("HorseShoes", bVar26);
			if (IS_BUTTON_DOWN(Function_290(), 0, 1, false))
			{
				fVar2 = ((2.0f * 3.0f) * (((0,85f - 0,5f) * 2.0f) - fLocal_55));
			}
			else
			{
				fVar2 = (-2.0f * fLocal_55);
			}
			if (IS_BUTTON_DOWN(Function_290(), 0, 1, false) || IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				fVar3 = 0.0f;
			}
			else
			{
				fVar3 = (1,4f * -GET_STICK_Y(Function_290(), 1, 1));
			}
			if (fVar3 >= (0,2f * 1,4f) && fVar3 <= (-0,2f * 1,4f))
			{
				fVar3 = 0.0f;
			}
			fLocal_51 = (fVar2 + fVar3);
			fVar4 = 0.0f;
			if (IS_BUTTON_DOWN(Function_290(), 0, 1, false))
			{
				fVar5 = (((-fLocal_53 * 1.0f) * 5.0f) * bLocal_271);
			}
			else
			{
				fVar5 = ((-fLocal_53 * 1.0f) * bLocal_271);
			}
			fLocal_52 = (((fLocal_53 + (fLocal_51 / 10.0f)) + fVar5) + fVar4);
			fLocal_54 = (fLocal_55 + (fLocal_52 * bLocal_271));
			if (fLocal_54 > -1.0f)
			{
				fLocal_52 = 0.0f;
				fLocal_54 = -1.0f;
			}
			else if (fLocal_54 < 1.0f)
			{
				fLocal_52 = 0.0f;
				fLocal_54 = 1.0f;
			}
			Local_78[Local_78.f_69674].f_76 = ((fLocal_54 / 2.0f) + 0,5f);
			SET_PANIM_PHASE(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_76);
			fLocal_53 = fLocal_52;
			fLocal_55 = fLocal_54;
			Local_78[Local_78.f_69674].f_80 = -Function_265(&Local_78, GET_STICK_X(Function_290(), 0, 1), Local_78.f_696);
			SET_PANIM_PARAMS(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_80, 0.0f);
			Function_262(&Local_78);
			if (((IS_BUTTON_PRESSED(Function_290(), true, 1, 0) && fLocal_52 < 0.0f) && !IS_BUTTON_DOWN(Function_290(), 0, 1, false)) && !IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				Function_289(15, 0);
			}
			if (((((fVar3 != 0.0f && Local_78[Local_78.f_69674].f_84 != 0.0f) && FABS(fLocal_52) > 0,5f) && Local_78[Local_78.f_69674].f_76 < 0,3f) && Local_78[Local_78.f_69674].f_76 > 0,7f) && !IS_BUTTON_PRESSED(Function_290(), false, 1, 0))
			{
				if (Function_261(&iLocal_45))
				{
					Function_259(&iLocal_45);
				}
				if (Function_284(&iLocal_45) < 5.0f)
				{
					if (IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/sweep"))
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/sweep_idle");
					}
				}
			}
			else
			{
				Function_281(&iLocal_45);
				Function_266(&iLocal_45);
				if (IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/sweep_idle"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/sweep");
				}
			}
			break;
		
		case 0x0000000D:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else
			{
				iLocal_58 = 3;
			}
			if (IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/Sweep") || Function_291(32))
			{
				if (Function_291(32))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Sweep");
				}
				SET_PANIM_PARAMS(Local_78[Local_78.f_69674], 0.0f, 0.0f);
				SET_PANIM_PHASE(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_76);
				iLocal_284 = 0;
				fLocal_281 = fLocal_28;
				bLocal_283 = RAND_FLOAT_RANGE(bLocal_29, bLocal_30);
				bLocal_282 = RAND_FLOAT_RANGE(bLocal_21, bLocal_22);
				bVar29 = RAND_FLOAT_RANGE(0.0f, 100.0f);
				if (bVar29 > fLocal_27)
				{
					bLocal_280 = 0.0f;
					bVar30 = RAND_INT_RANGE(false, true);
					if (bVar30 == 0)
					{
						bLocal_282 = 0,65f;
						bLocal_283 = 0,09f;
					}
					else if (bVar30 == 1)
					{
						bLocal_282 = 0,75f;
						bLocal_283 = 0,04f;
					}
				}
				else if (Function_272())
				{
					bLocal_280 = RAND_FLOAT_RANGE(bLocal_23, bLocal_24);
				}
				else
				{
					bLocal_280 = RAND_FLOAT_RANGE(-bLocal_24, -bLocal_23);
				}
				iLocal_285 = 0;
				PRINTSTRING("fRandXForce = ");
				PRINTFLOAT(bLocal_280);
				PRINTNL();
				PRINTSTRING("fRandReleasePoint = ");
				PRINTFLOAT(bLocal_282);
				PRINTNL();
				PRINTSTRING("fRandBackTossDone = ");
				PRINTFLOAT(bLocal_283);
				PRINTNL();
				Function_289(14, 0);
			}
			else
			{
				Function_274(&Local_78, 13);
			}
			break;
		
		case 0x0000000E:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else
			{
				iLocal_58 = 3;
			}
			if (Local_78[Local_78.f_69674].f_92 == 1)
			{
				if (Local_78.f_696 == 0)
				{
					iVar31 = 1;
				}
				else
				{
					iVar31 = 0;
				}
				if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[iVar3174], "horseshoe/look/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[iVar3174], "horseshoe/look/pst");
				}
				else if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_78[iVar3174], "horseshoe/look_right/mid"))
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[iVar3174], "horseshoe/look_right/pst");
				}
			}
			if (Local_78[Local_78.f_69674].f_76 >= bLocal_283 && fLocal_281 < 0.0f)
			{
				fLocal_281 = RAND_FLOAT_RANGE(bLocal_31, bLocal_32);
			}
			else if (Local_78[Local_78.f_69674].f_76 <= bLocal_282)
			{
				if (iLocal_285 <= iLocal_284)
				{
					fLocal_281 = fLocal_28;
					iLocal_285++;
				}
				else if (fLocal_281 >= bLocal_32)
				{
					Function_289(15, 0);
				}
			}
			fVar2 = (-2.0f * fLocal_55);
			fVar3 = (1,4f * -fLocal_281);
			fLocal_51 = (fVar2 + fVar3);
			fVar4 = 0.0f;
			fVar5 = ((-fLocal_53 * 1.0f) * bLocal_271);
			bLocal_52 = (((fLocal_53 + (fLocal_51 / 10.0f)) + fVar5) + fVar4);
			fLocal_54 = (fLocal_55 + (bLocal_52 * bLocal_271));
			if (fLocal_54 > -1.0f)
			{
				fLocal_54 = -1.0f;
			}
			else if (fLocal_54 < 1.0f)
			{
				fLocal_54 = 1.0f;
			}
			Local_78[Local_78.f_69674].f_76 = ((fLocal_54 / 2.0f) + 0,5f);
			SET_PANIM_PHASE(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_76);
			fLocal_53 = bLocal_52;
			fLocal_55 = fLocal_54;
			Local_78[Local_78.f_69674].f_80 = -Function_265(&Local_78, bLocal_280, Local_78.f_696);
			SET_PANIM_PARAMS(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_80, 0.0f);
			if (Function_291(32))
			{
				Function_289(15, 0);
			}
			Function_274(&Local_78, 14);
			break;
		
		case 0x0000001E:
			if (Function_292(&Local_78))
			{
				iLocal_58 = 5;
			}
			else
			{
				iLocal_58 = 3;
			}
			Function_274(&Local_78, 30);
			if (iLocal_286 != 0)
			{
				switch (iLocal_286)
				{
					case 0x00000002:
						vLocal_277 = { 0.0f, 0.0f, 0.0f };
						Function_258("Player just dropped the damned thing", 0x40800000, 0, 2, 1, 0);
					
					case 0x00000001:
						Function_289(15, 0);
						iLocal_286 = 0;
						break;
					
					case 0x00000003:
						bLocal_2 = true;
						break;
					}
			}
			break;
		
		case 0x0000000F:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				iLocal_58 = 5;
			}
			else
			{
				iLocal_58 = 3;
			}
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			fLocal_37 = bLocal_52;
			fLocal_38 = Local_78[Local_78.f_69674].f_76;
			PLAY_SOUND_FROM_ACTOR(Local_78[Local_78.f_69674], "HORSESHOES_RELEASE_MASTER", 0);
			REMOVE_ALL_OBJECT_ATTACHMENTS(GET_OBJECT_FROM_ACTOR(Local_78[Local_78.f_69674]));
			if (!Function_305() || Function_292(&Local_78))
			{
				if (IS_LOCAL_PLAYER(Local_78[Local_78.f_69674]))
				{
					Function_257(&Local_78, Local_78.f_696, -Local_78[Local_78.f_69674].f_80, bLocal_52);
					vLocal_277 = { StackVal, StackVal, Function_257(&Local_78, Local_78.f_696, -Local_78[Local_78.f_69674].f_80, bLocal_52) };
				}
				else
				{
					Function_257(&Local_78, Local_78.f_696, -Local_78[Local_78.f_69674].f_80, bLocal_52);
					vLocal_277 = { StackVal, StackVal, Function_257(&Local_78, Local_78.f_696, -Local_78[Local_78.f_69674].f_80, bLocal_52) };
				}
			}
			if (Function_256(Local_78.f_696, Local_78[Local_78.f_69674].f_92, "in HSH_RELEASE_SHOE!", &Local_78))
			{
				SET_PROP_COLLIDE_WITH_MOVABLES((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92], 1);
				if (Function_291(32))
				{
					GET_VOLUME_CENTER((*&Local_78 + 716)[Local_78.f_768], &vVar32);
					bVar35 = RAND_FLOAT_RANGE(0.0f, 100.0f);
					if (bVar35 >= fLocal_27)
					{
						vVar36 = { (vVar32.x + RAND_FLOAT_RANGE(-0,1f, 0.0f)), vVar32.y, (vVar32.z + RAND_FLOAT_RANGE(-0,1f, 0.0f)) };
						vVar39 = { 0.0f, IntToFloat(RAND_INT_RANGE(260, 280)), 0.0f };
					}
					else
					{
						vVar36 = { (vVar32.x + RAND_FLOAT_RANGE(bLocal_25, bLocal_26)), vVar32.y, (vVar32.z + RAND_FLOAT_RANGE(bLocal_25, bLocal_26)) };
						vVar39 = { RAND_FLOAT_RANGE(0.0f, 360.0f), RAND_FLOAT_RANGE(0.0f, 360.0f), RAND_FLOAT_RANGE(0.0f, 360.0f) };
					}
					SET_OBJECT_POSITION((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92], vVar36);
					SET_OBJECT_ORIENTATION((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92], vVar39);
					ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92]));
				}
				else
				{
					SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92]), &vLocal_277);
					if (!Function_305() || Function_292(&Local_78))
					{
						if (Local_78[Local_78.f_69674].f_80 < 0.0f)
						{
							vLocal_274 = { (RAND_FLOAT_RANGE(-Local_78[Local_78.f_69674].f_80, Local_78[Local_78.f_69674].f_80) * 1.0f), (RAND_FLOAT_RANGE(-Local_78[Local_78.f_69674].f_80, Local_78[Local_78.f_69674].f_80) * 1.0f), (RAND_FLOAT_RANGE(Local_78[Local_78.f_69674].f_80, Local_78[Local_78.f_69674].f_80) * 1.0f) };
						}
						else
						{
							vLocal_274 = { (RAND_FLOAT_RANGE(Local_78[Local_78.f_69674].f_80, -Local_78[Local_78.f_69674].f_80) * 1.0f), (RAND_FLOAT_RANGE(Local_78[Local_78.f_69674].f_80, -Local_78[Local_78.f_69674].f_80) * 1.0f), (RAND_FLOAT_RANGE(Local_78[Local_78.f_69674].f_80, -Local_78[Local_78.f_69674].f_80) * 1.0f) };
						}
						Function_255(1, &vLocal_277, &vLocal_274);
						if (!NET_REQUEST_OBJECT((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92]))
						{
							NET_LOG(true, "Horseshoes Net Prop", "Somehow failed to send ownership of my Players[%s] own horseshoe[%s]", I2STR(Local_78.f_696), I2STR(Local_78[Local_78.f_69674].f_92), 0, 0);
						}
						else
						{
							NET_LOG(true, "Horseshoes Net Prop", "Requested ownership of my Players[%s] own horseshoe[%s]", I2STR(Local_78.f_696), I2STR(Local_78[Local_78.f_69674].f_92), 0, 0);
						}
					}
					SET_PROP_ANGULAR_VELOCITY_DEGS(GET_PHYSINST_FROM_OBJECT((*&Local_78[Local_78.f_69674] + 96)[Local_78[Local_78.f_69674].f_92]), &vLocal_274);
				}
			}
			Function_281(&iLocal_39);
			Function_180();
			fLocal_295 = 0.0f;
			Function_289(16, 0);
			break;
		
		case 0x00000010:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				iLocal_58 = 5;
			}
			else
			{
				iLocal_58 = 3;
			}
			if ((Function_284(&iLocal_39) < 2.0f || IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/grab2")) || Function_291(32))
			{
				if (!Function_291(64) || Function_291(32))
				{
					if (IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/Sweep") || IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/sweep_idle"))
					{
						if (((Local_78[Local_78.f_69674].f_92 != 0 || Function_291(128)) || Function_291(256)) && (!Local_59.f_52 || Local_78.f_696 != 1))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/Low/Straight");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Low/Straight");
						}
					}
					Function_275(StackVal, StackVal, -Local_78[&Local_7874].f_80, 0);
					Function_289(17, 1);
				}
			}
			if (IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/Sweep"))
			{
				if (Local_78[Local_78.f_69674].f_76 < 0,99f && Local_78[Local_78.f_69674].f_76 >= 1.0f)
				{
					if (((Local_78[Local_78.f_69674].f_92 != 0 || Function_291(128)) || Function_291(256)) && (!Local_59.f_52 || Local_78.f_696 != 1))
					{
						if (Local_78[Local_78.f_69674].f_80 < (0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/High/Left");
						}
						else if (Local_78[Local_78.f_69674].f_80 > (-0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/High/Right");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/High/Straight");
						}
					}
					else if (Local_78[Local_78.f_69674].f_80 < (0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/High/Left");
					}
					else if (Local_78[Local_78.f_69674].f_80 > (-0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/High/Right");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/High/Straight");
					}
				}
				else if ((Local_78[Local_78.f_69674].f_76 <= 0,7f && Local_78[Local_78.f_69674].f_76 > 0,75f) && FABS((fLocal_38 - 0,7f)) < 0,05f)
				{
					if (((Local_78[Local_78.f_69674].f_92 != 0 || Function_291(128)) || Function_291(256)) && (!Local_59.f_52 || Local_78.f_696 != 1))
					{
						if (Local_78[Local_78.f_69674].f_80 < (0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/Middle/Left");
						}
						else if (Local_78[Local_78.f_69674].f_80 > (-0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/Middle/Right");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/Middle/Straight");
						}
					}
					else if (Local_78[Local_78.f_69674].f_80 < (0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Middle/Left");
					}
					else if (Local_78[Local_78.f_69674].f_80 > (-0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Middle/Right");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Middle/Straight");
					}
				}
				else if ((Local_78[Local_78.f_69674].f_76 <= 0,55f && Local_78[Local_78.f_69674].f_76 > 0,6f) && FABS((fLocal_38 - 0,55f)) < 0,05f)
				{
					if (((Local_78[Local_78.f_69674].f_92 != 0 || Function_291(128)) || Function_291(256)) && (!Local_59.f_52 || Local_78.f_696 != 1))
					{
						if (Local_78[Local_78.f_69674].f_80 < (0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/Low/Left");
						}
						else if (Local_78[Local_78.f_69674].f_80 > (-0,5f / 2.0f))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/Low/Right");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Pickup/Low/Straight");
						}
					}
					else if (Local_78[Local_78.f_69674].f_80 < (0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Low/Left");
					}
					else if (Local_78[Local_78.f_69674].f_80 > (-0,5f / 2.0f))
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Low/Right");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_78[Local_78.f_69674], "horseshoe/Pst/Low/Straight");
					}
				}
				else
				{
					fLocal_51 = fLocal_51;
					fVar4 = 0.0f;
					fVar5 = ((-fLocal_53 * 1.0f) * bLocal_271);
					bLocal_52 = (((fLocal_53 + (fLocal_51 / 10.0f)) + fVar5) + fVar4);
					fLocal_54 = (fLocal_55 + (bLocal_52 * bLocal_271));
					if (fLocal_54 > -1.0f)
					{
						fLocal_54 = -1.0f;
					}
					else if (fLocal_54 < 1.0f)
					{
						fLocal_54 = 1.0f;
					}
					Local_78[Local_78.f_69674].f_76 = ((fLocal_54 / 2.0f) + 0,5f);
					SET_PANIM_PHASE(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_76);
					fLocal_53 = bLocal_52;
					fLocal_55 = fLocal_54;
				}
			}
			if (!bLocal_34)
			{
				Function_253(&Local_78, Function_287(&Local_78), Local_78.f_696, -Local_78[Function_287(&Local_78)74].f_80);
			}
			Function_274(&Local_78, 16);
			break;
		
		case 0x00000011:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				iLocal_58 = 4;
			}
			else
			{
				iLocal_58 = 3;
			}
			if (Local_78[Local_78.f_69674].f_92 == 1)
			{
				if (Function_292(&Local_78))
				{
					if (!Function_291(2))
					{
						if (Function_273(&Local_78, Local_78.f_696, 1))
						{
							if (Function_272())
							{
								SAY_SINGLE_LINE_CONTEXT(Local_78[074], 272, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else
							{
								SAY_SINGLE_LINE_CONTEXT(Local_78[174], 470, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							Function_288(2, 1);
							Function_130("HorseShoes_LongThrowHelp", 12.0f, 1, 0, 2, 1, 0);
						}
					}
					if (!Function_291(4))
					{
						if (Function_271(&Local_78, Local_78.f_696, 1))
						{
							if (Function_272())
							{
								SAY_SINGLE_LINE_CONTEXT(Local_78[074], 272, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (fLocal_38 < fLocal_33)
							{
								Function_130("HorseShoes_ShortThrowLateReleaseHelp", 12.0f, 1, 0, 2, 1, 0);
								SAY_SINGLE_LINE_CONTEXT(Local_78[174], 470, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
							else if (fLocal_37 > 2,5f)
							{
								Function_130("HorseShoes_ShortThrowLowVelocityHelp", 12.0f, 1, 0, 2, 1, 0);
								SAY_SINGLE_LINE_CONTEXT(Local_78[174], 471, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							}
						}
					}
					if ((Function_268(1, 1, &Local_78) > Function_268(0, 1, &Local_78) && Function_268(1, 1, &Local_78) > Function_268(0, 0, &Local_78)) || (Function_268(1, 0, &Local_78) > Function_268(0, 1, &Local_78) && Function_268(1, 0, &Local_78) > Function_268(0, 0, &Local_78)))
					{
						iVar42 = 1;
					}
					if ((!Function_271(&Local_78, Local_78.f_696, 1) && !Function_273(&Local_78, Local_78.f_696, 1)) && iVar42)
					{
						if (Function_272())
						{
							SAY_SINGLE_LINE_CONTEXT(Local_78[074], 271, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(Local_78[174], 472, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_78[074], 272, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (Function_273(&Local_78, Local_78.f_696, 0) || Function_271(&Local_78, Local_78.f_696, 0))
				{
					SAY_SINGLE_LINE_CONTEXT(Local_78[174], 473, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				else if (Function_268(Local_78.f_696, 1, &Local_78) > 1.0f)
				{
					SAY_SINGLE_LINE_CONTEXT(Local_78[174], 474, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			if ((Function_284(&iLocal_39) < 0.0f || (!Function_305() && IS_BUTTON_PRESSED(Function_290(), 6, 1, 0))) || Function_291(32))
			{
				Local_78[Local_78.f_69674].f_92++;
				if (Local_78[Local_78.f_69674].f_92 <= 2 && !Function_291(128))
				{
					if (Local_78.f_696 == 0)
					{
						if (Local_78[074].f_68 != 1 || Local_78[074].f_68 != 3)
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/look");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/look_right");
						}
					}
					Local_78.f_696 = (Local_78.f_696 + 1 % 2);
					if (Local_78[Local_78.f_69674].f_92 == 2)
					{
						iVar0 = 0;
						while (iVar0 <= 2)
						{
							Local_78[iVar074].f_92 = 0;
							iVar0++;
						}
						if (Local_59.f_52)
						{
							Function_289(3, 0);
						}
						else
						{
							Function_289(29, 1);
						}
					}
					else if (Local_59.f_52)
					{
						Function_289(1, 0);
					}
					else
					{
						Function_289(8, 1);
					}
				}
				else if (Local_59.f_52 && Local_78.f_696 != 0)
				{
					Function_289(1, 0);
				}
				else
				{
					Function_289(9, 0);
				}
			}
			break;
		
		case 0x00000003:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				iLocal_58 = 5;
			}
			else
			{
				iLocal_58 = 3;
			}
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_180();
				Function_277(0,5f);
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					Local_78[iVar074].f_92 = 0;
					iVar0++;
				}
				Local_78.f_696 = 0;
				Function_289(20, 0);
			}
			else
			{
				Function_274(&Local_78, 3);
			}
			break;
		
		case 0x0000001D:
			if (Function_292(&Local_78))
			{
				iLocal_58 = 5;
			}
			else
			{
				iLocal_58 = 3;
			}
			UI_EXIT("HorseShoes");
			if (Function_305())
			{
				bVar43 = Function_287(&Local_78);
			}
			else
			{
				bVar43 = (Local_78.f_696 + 1 % 2);
			}
			if (!Function_256(bVar43, (Local_78[bVar4374].f_92 + 1 % 2), "in HSH_PRE_DETERMINE_WINNER!", &Local_78))
			{
			}
			else if (!Function_252((*&Local_78[bVar4374] + 96)[(Local_78[bVar4374].f_92 + 1 % 2)]) || Function_251(&Local_78, (*&Local_78[bVar4374] + 96)[(Local_78[bVar4374].f_92 + 1 % 2)]))
			{
				if (!Function_291(1))
				{
					Function_288(1, 1);
					Function_130("HorseShoes_ScoreHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
				bVar6 = false;
				while (bVar6 <= 2)
				{
					bVar7 = false;
					while (bVar7 <= 2)
					{
						if (!Function_305() || bVar6 != bVar43)
						{
							if (Function_256(bVar6, bVar7, "while scoring in HSH_PRE_DETERMINE_WINNER", &Local_78))
							{
								Function_250((*&Local_78[bVar674] + 96)[bVar7]);
								Var44 = { StackVal, StackVal, Function_250((*&Local_78[bVar674] + 96)[bVar7]) };
								Var44.f_4 = StackVal;
								fVar47 = Function_268(bVar6, bVar7, &Local_78);
								(*&Local_78[bVar674] + 120)[bVar719] = Function_249(fVar47);
							}
							else
							{
								(*&Local_78[bVar674] + 120)[bVar719] = 100.0f;
							}
							(&Local_78[bVar674] + 120[bVar719])->f_4 = FLOOR((*&Local_78[bVar674] + 120)[bVar719]);
							if (FLOOR((*&Local_78[bVar674] + 120)[bVar719]) == 1)
							{
								strcpy(&Local_78[bVar674] + 120[bVar719] + 12, "HorseShoes_Foot", 32);
							}
							else
							{
								strcpy(&Local_78[bVar674] + 120[bVar719] + 12, "HorseShoes_Feet", 32);
							}
							(&Local_78[bVar674] + 120[bVar719])->f_8 = FLOOR((((*&Local_78[bVar674] + 120)[bVar719] - IntToFloat(FLOOR((*&Local_78[bVar674] + 120)[bVar719]))) * 12.0f));
							if (FLOOR((((*&Local_78[bVar674] + 120)[bVar719] - IntToFloat(FLOOR((*&Local_78[bVar674] + 120)[bVar719]))) * 12.0f)) == 1)
							{
								strcpy(&Local_78[bVar674] + 120[bVar719] + 44, "HorseShoes_Inch", 32);
							}
							else
							{
								strcpy(&Local_78[bVar674] + 120[bVar719] + 44, "HorseShoes_Inches", 32);
							}
							if (Global_30842[2])
							{
								PRINTSTRING("Did the math for player ");
								PRINTINT(bVar6);
								PRINTSTRING("'s ");
								PRINTINT(bVar7);
								PRINTSTRING("th horseshoe (");
								PRINTFLOAT((*&Local_78[bVar674] + 120)[bVar719]);
								PRINTSTRING(")");
								PRINTNL();
							}
						}
						bVar7++;
					}
					bVar6++;
				}
				if (Function_305())
				{
					Function_247((*&Local_78[Function_287(&Local_78)74] + 120)[019], (*&Local_78[Function_287(&Local_78)74] + 120)[119], Function_248(Function_287(&Local_78), 0, &Local_78), Function_248(Function_287(&Local_78), 1, &Local_78));
					Function_289(33, 0);
				}
				else
				{
					Function_289(18, 0);
				}
			}
			break;
		
		case 0x00000021:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				iLocal_58 = 5;
			}
			else
			{
				iLocal_58 = 3;
			}
			if (Function_291(1024))
			{
				Function_288(1024, 0);
				bVar7 = false;
				while (bVar7 < 1)
				{
					(*&Local_78[Function_246(&Local_78)74] + 120)[bVar719] = (*&Local_287 + 12)[bVar7];
					(&Local_78[Function_246(&Local_78)74] + 120[bVar719])->f_4 = FLOOR((*&Local_287 + 12)[bVar7]);
					(&Local_78[Function_246(&Local_78)74] + 120[bVar719])->f_8 = FLOOR((((*&Local_287 + 12)[bVar7] - IntToFloat(FLOOR((*&Local_287 + 12)[bVar7]))) * 12.0f));
					bVar7++;
				}
				Function_289(18, 1);
			}
			break;
		
		case 0x00000012:
			if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
			{
				iLocal_58 = 7;
			}
			else if (Function_292(&Local_78))
			{
				iLocal_58 = 5;
			}
			else
			{
				iLocal_58 = 3;
			}
			if (!Function_291(1))
			{
				Function_288(1, 1);
				Function_130("HorseShoes_ScoreHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				Local_78[iVar074].f_276 = Local_78[iVar074].f_280;
				Local_78[iVar074].f_288 = 0;
				iVar48 = 0;
				while (iVar48 <= 2)
				{
					if (Function_248(iVar0, iVar48, &Local_78))
					{
						Local_78[iVar074].f_288++;
						Local_78[iVar074].f_280 += 3;
						(*&Local_78[iVar074] + 120)[iVar4819] = 9999.0f;
					}
					iVar48++;
				}
				iVar0++;
			}
			while (Local_78[074].f_288 < 0 && Local_78[174].f_288 < 0)
			{
				Local_78[074].f_280 = (Local_78[074].f_280 - 3);
				Local_78[074].f_288 = (Local_78[074].f_288 - 1);
				Local_78[174].f_288 = (Local_78[174].f_288 - 1);
				Local_78[174].f_280 = (Local_78[174].f_280 - 3);
			}
			if (Local_78[174].f_288 > 1)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(11))
				{
					AWARD_ACHIEVEMENT(11);
				}
			}
			Local_78[074].f_292 = (Local_78[074].f_292 + Local_78[074].f_288);
			Local_78[174].f_292 = (Local_78[174].f_292 + Local_78[174].f_288);
			if (IntToFloat(Local_78[174].f_292) < Function_60(435))
			{
				Function_49(435, Local_78[174].f_292, 0);
			}
			Function_83(434, Local_78[174].f_288, 0, 0);
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (iVar0 == 0)
				{
					iVar49 = 1;
				}
				else if (iVar0 == 1)
				{
					iVar49 = 0;
				}
				if (Function_248(iVar0, 0, &Local_78))
				{
				}
				else if (((*&Local_78[iVar074] + 120)[019] > (*&Local_78[iVar4974] + 120)[019] && (*&Local_78[iVar074] + 120)[019] > (*&Local_78[iVar4974] + 120)[119]) && Local_78[iVar4974].f_288 != 0)
				{
					iLocal_303 = 0;
					Local_78[iVar074].f_280++;
				}
				if (Function_248(iVar0, 1, &Local_78))
				{
				}
				else if (((*&Local_78[iVar074] + 120)[119] > (*&Local_78[iVar4974] + 120)[019] && (*&Local_78[iVar074] + 120)[119] > (*&Local_78[iVar4974] + 120)[119]) && Local_78[iVar4974].f_288 != 0)
				{
					iLocal_303 = 1;
					Local_78[iVar074].f_280++;
				}
				iVar0++;
			}
			if (Local_78[074].f_280 >= Local_78[074].f_276)
			{
				iLocal_302 = 0;
				bLocal_301 = (Local_78[074].f_280 - Local_78[074].f_276);
				if (bLocal_301 > 3)
				{
					SAY_SINGLE_LINE_CONTEXT(Local_78[174], 475, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			else if (Local_78[174].f_280 >= Local_78[174].f_276)
			{
				iLocal_302 = 1;
				bLocal_301 = (Local_78[174].f_280 - Local_78[174].f_276);
				if (bLocal_301 > 3)
				{
					if (Function_272())
					{
						SAY_SINGLE_LINE_CONTEXT(Local_78[074], 269, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_78[174], 476, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			else
			{
				iLocal_302 = 4294967295;
			}
			Function_281(&iLocal_39);
			Function_289(19, 1);
			break;
		
		case 0x00000013:
			iLocal_58 = 8;
			if (!HUD_IS_SHOWING_HELP_TEXT() || IS_BUTTON_PRESSED(Function_290(), 6, 1, 0))
			{
				Function_245(&Local_78);
				if (iLocal_302 == 4294967295)
				{
					Function_280("HorseShoes_NoWinner", 0x40f00000, 1, 2, 0, 0, 0);
				}
				else
				{
					UI_SET_STRING("GENERIC_DBUFFER64_0", UI_GET_STRING(&Local_78[iLocal_30274] + 4));
					UI_SET_STRING(StackVal, I2STR("GENERIC_DBUFFER10_0"));
					UI_SET_STRING("GENERIC_DBUFFER10_1", UI_GET_STRING(&Local_78[iLocal_30274] + 120[iLocal_30319] + 12));
					UI_SET_STRING(StackVal, I2STR("GENERIC_DBUFFER10_2"));
					UI_SET_STRING("GENERIC_DBUFFER10_3", UI_GET_STRING(&Local_78[iLocal_30274] + 120[iLocal_30319] + 44));
					if (StackVal == 0)
					{
						bVar50 = false;
					}
					else
					{
						bVar50 = true;
					}
					if (bLocal_301 == 2)
					{
						if (iLocal_303 == 0)
						{
							iVar51 = 1;
						}
						else
						{
							iVar51 = 0;
						}
						UI_SET_STRING(StackVal, I2STR("GENERIC_DBUFFER32_0"));
						UI_SET_STRING("GENERIC_DBUFFER32_1", UI_GET_STRING(&Local_78[iLocal_30274] + 120[iVar5119] + 12));
						UI_SET_STRING(StackVal, I2STR("GENERIC_DBUFFER32_2"));
						UI_SET_STRING("GENERIC_DBUFFER32_3", UI_GET_STRING(&Local_78[iLocal_30274] + 120[iVar5119] + 44));
					}
					if (StackVal == 0)
					{
						bVar52 = false;
					}
					else
					{
						bVar52 = true;
					}
					if (iLocal_302 == Function_287(&Local_78))
					{
						switch (bLocal_301)
						{
							case 0x00000001:
								if (bVar50)
								{
									Function_280("HorseShoes_OnePoint_Self", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else
								{
									Function_280("HorseShoes_OnePoint_Self_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								break;
							
							case 0x00000002:
								if (bVar50 && bVar52)
								{
									Function_280("HorseShoes_TwoPoint_Self", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else if (!bVar50 && bVar52)
								{
									Function_280("HorseShoes_TwoPoint_Self_First_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else if (bVar50 && !bVar52)
								{
									Function_280("HorseShoes_TwoPoint_Self_Second_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else
								{
									Function_280("HorseShoes_TwoPoint_Self_Both_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								break;
							
							case 0x00000003:
								Function_280("HorseShoes_ThreePoint_Self", 0x40f00000, 1, 2, 0, 0, 0);
								break;
							
							case 0x00000004:
								if (bVar50)
								{
									Function_280("HorseShoes_FourPoint_Self", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else
								{
									Function_280("HorseShoes_FourPoint_Self_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								break;
							
							case 0x00000006:
								Function_280("HorseShoes_SixPoint_Self", 0x40f00000, 1, 2, 0, 0, 0);
								break;
						}
					}
					else
					{
						switch (bLocal_301)
						{
							case 0x00000001:
								if (bVar50)
								{
									Function_280("HorseShoes_OnePoint", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else
								{
									Function_280("HorseShoes_OnePoint_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								break;
							
							case 0x00000002:
								if (bVar50 && bVar52)
								{
									Function_280("HorseShoes_TwoPoint", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else if (!bVar50 && bVar52)
								{
									Function_280("HorseShoes_TwoPoint_First_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else if (bVar50 && !bVar52)
								{
									Function_280("HorseShoes_TwoPoint_Second_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else
								{
									Function_280("HorseShoes_TwoPoint_Both_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								break;
							
							case 0x00000003:
								Function_280("HorseShoes_ThreePoint", 0x40f00000, 1, 2, 0, 0, 0);
								break;
							
							case 0x00000004:
								if (bVar50)
								{
									Function_280("HorseShoes_FourPoint", 0x40f00000, 1, 2, 0, 0, 0);
								}
								else
								{
									Function_280("HorseShoes_FourPoint_No_Feet", 0x40f00000, 1, 2, 0, 0, 0);
								}
								break;
							
							case 0x00000006:
								Function_280("HorseShoes_SixPoint", 0x40f00000, 1, 2, 0, 0, 0);
								break;
							}
						}
				}
				SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/idle");
				SET_ACTION_NODE_FOR_ACTOR(Local_78[174], "horseshoe/idle");
				Function_180();
				Function_281(&iLocal_39);
				if (Local_78[174].f_280 <= 11 && (Local_78[174].f_280 - Local_78[074].f_280) <= 2)
				{
					Function_281(&iLocal_39);
					Function_289(24, 0);
				}
				else if (Local_78[074].f_280 <= 11 && (Local_78[074].f_280 - Local_78[174].f_280) <= 2)
				{
					Function_281(&iLocal_39);
					Function_289(24, 0);
				}
				else
				{
					Function_289(20, 1);
				}
			}
			else
			{
				Function_274(&Local_78, 19);
			}
			break;
		
		case 0x00000014:
			if ((!HUD_IS_SHOWING_OBJECTIVE() && Function_284(&iLocal_39) < (4.0f * 2.0f)) || IS_BUTTON_PRESSED(Function_290(), 6, 1, 0))
			{
				iLocal_58 = 9;
				HUD_CLEAR_OBJECTIVE();
				Function_275(StackVal, StackVal, -Local_78[&Local_7874].f_80, 1);
				Local_78.f_768++;
				if (Local_78.f_768 > 2)
				{
					Local_78.f_768 = 0;
				}
				if (Function_305())
				{
					switch (Local_78[074].f_68)
					{
						case 0x00000000:
							Function_244(&Local_78, 0, 3);
							break;
						
						case 0x00000003:
							Function_244(&Local_78, 0, 0);
							break;
						
						case 0x00000001:
							Function_244(&Local_78, 0, 2);
							break;
						
						case 0x00000002:
							Function_244(&Local_78, 0, 1);
							break;
					}
					switch (Local_78[174].f_68)
					{
						case 0x00000000:
							Function_244(&Local_78, 1, 3);
							break;
						
						case 0x00000003:
							Function_244(&Local_78, 1, 0);
							break;
						
						case 0x00000001:
							Function_244(&Local_78, 1, 2);
							break;
						
						case 0x00000002:
							Function_244(&Local_78, 1, 1);
							break;
					}
				}
				else
				{
					switch (Local_78.f_768)
					{
						case 0x00000000:
							Function_244(&Local_78, 0, 3);
							Function_244(&Local_78, 1, 2);
							break;
						
						case 0x00000001:
							Function_244(&Local_78, 0, 0);
							Function_244(&Local_78, 1, 1);
							break;
						}
				}
				Function_281(&iLocal_39);
				iLocal_57++;
				if ((iLocal_57 % 4) == 0)
				{
					AUDIO_RESET_SPEECH_HISTORY();
				}
				Function_289(21, 0);
			}
			break;
		
		case 0x00000015:
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			if (Function_284(&iLocal_39) < 1.0f)
			{
				if (!HUD_IS_FADED())
				{
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				Local_59.f_52 = 0;
				Function_289(22, 0);
			}
			break;
		
		case 0x00000016:
			if (HUD_IS_FADED())
			{
				bVar6 = false;
				while (bVar6 <= 2)
				{
					bVar7 = false;
					while (bVar7 <= 2)
					{
						if (Function_256(bVar6, bVar7, "in HSH_WAIT_FOR_FADE", &Local_78))
						{
							DESTROY_OBJECT((*&Local_78[bVar674] + 96)[bVar7]);
						}
						if (Function_243(bVar6, bVar7, "in HSH_WAIT_FOR_FADE", &Local_78))
						{
							DESTROY_VOLUME((*&Local_78[bVar674] + 108)[bVar7]);
						}
						bVar7++;
					}
					bVar6++;
				}
				UI_EXIT("HorseShoes");
				TASK_CLEAR(Local_78[074]);
				TASK_CLEAR(Local_78[174]);
				if (Function_305())
				{
					SNAP_ACTOR_TO_GRINGO(StackVal, Local_78[Function_287(&Local_78)74], "UseCase1", true, 0, 0);
				}
				else
				{
					SNAP_ACTOR_TO_GRINGO(StackVal, Local_78[074], "UseCase1", false, 0, 0);
					SNAP_ACTOR_TO_GRINGO(StackVal, Local_78[174], "UseCase1", false, 0, 0);
				}
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(Local_78[074]), "UseCase1", true, 1);
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(Local_78[174]), "UseCase1", true, 1);
				Function_289(23, 1);
			}
			break;
		
		case 0x00000017:
			if ((Function_305() || (IS_ACTION_NODE_PLAYING(Local_78[074], "horseshoe/idle") && IS_ACTION_NODE_PLAYING(Local_78[174], "horseshoe/idle"))) && !HUD_IS_FADING())
			{
				TELEPORT_ACTOR(Local_78[174], &Local_78 + 596[Local_78[174].f_686] + 12, 1, 1, 1);
				if (Local_78[174].f_68 != 1 || Local_78[174].f_68 != 3)
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[174], "horseshoe/look/mid");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_78[174], "horseshoe/look_right/mid");
				}
				HUD_FADE_IN(1.0f, 1065353216);
				Function_275(StackVal, StackVal, -Local_78[&Local_7874].f_80, 1);
				Local_78[RAND_FLOAT_RANGE(-0,5f, 0,5f)74].f_80 = StackVal;
				if (Local_78[074].f_280 != 0 && Local_78[174].f_280 != 0)
				{
					Function_289(6, 1);
				}
				else
				{
					Function_289(8, 1);
				}
			}
			break;
		
		case 0x0000001F:
			Function_242(iLocal_320);
			Function_289(32, 0);
			break;
		
		case 0x00000020:
			if (Function_220(iLocal_320, 0, 0x3f800000))
			{
				Function_289(iLocal_320, 0);
			}
			break;
		
		case 0x00000018:
			if ((!HUD_IS_SHOWING_OBJECTIVE() && Function_284(&iLocal_39) < (4.0f * 2.0f)) || IS_BUTTON_PRESSED(Function_290(), 6, 1, 0))
			{
				if (Local_78[174].f_280 <= 11 && (Local_78[174].f_280 - Local_78[074].f_280) <= 2)
				{
					Function_275(StackVal, StackVal, -Local_78[&Local_7874].f_80, 1);
					if (Function_272() || IS_AMBIENT_SPEECH_PLAYING(Local_78[174]))
					{
						SAY_SINGLE_LINE_CONTEXT(Local_78[074], 273, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_78[174], 477, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					UI_EXIT("Scorebox");
					UI_EXIT("HorseShoes");
					Function_111(Local_78.f_708 * 2, 1);
					PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
					DECOR_SET_INT(Local_78[074], "iAdditionalMoney", false);
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "HorseShoes_Win_Self", &Local_78[174] + 4, "", "", "", 0, 2, 0, 0, 0);
					Function_83(433, Local_78.f_708, 0, 0);
					Function_83(450, Local_78.f_708, 0, 0);
					if ((Function_64(597) + Function_64(450)) >= 10000)
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
						{
							AWARD_ACHIEVEMENT(24);
						}
					}
					Function_281(&iLocal_39);
					Function_289(25, 0);
				}
				else if (Local_78[074].f_280 <= 11 && (Local_78[074].f_280 - Local_78[174].f_280) <= 2)
				{
					Function_275(StackVal, StackVal, -Local_78[&Local_7874].f_80, 1);
					if (Function_272())
					{
						SAY_SINGLE_LINE_CONTEXT(Local_78[074], 270, Local_78[174], 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else
					{
						SAY_SINGLE_LINE_CONTEXT(Local_78[174], 478, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_FORMAT(4.0f, "HorseShoes_Win", &Local_78[074] + 4, "", "", "", 0, 2, 0, 0, 0);
					Function_109(433, Local_78.f_708, 0);
					Function_109(450, Local_78.f_708, 0);
					Function_281(&iLocal_39);
					Function_289(26, 0);
				}
			}
			break;
		
		case 0x00000019:
			if ((!IS_AMBIENT_SPEECH_PLAYING(Local_78[074]) && !IS_AMBIENT_SPEECH_PLAYING(Local_78[174])) || Function_284(&iLocal_39) < 5.0f)
			{
				Function_180();
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_16 = 0;
			}
			break;
		
		case 0x0000001A:
			if ((!IS_AMBIENT_SPEECH_PLAYING(Local_78[074]) && !IS_AMBIENT_SPEECH_PLAYING(Local_78[174])) || Function_284(&iLocal_39) < 5.0f)
			{
				if (Global_29004 == 0)
				{
					AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_29004 == 1)
				{
					AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_29004 == 2)
				{
					AUDIO_MUSIC_ONE_SHOT("NRT_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				Function_180();
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_16 = 1;
			}
			break;
		
		case 0x0000001B:
			if (HUD_IS_FADED())
			{
				Function_177();
				Function_289(iLocal_300, 0);
			}
			break;
		
		case 0x0000001C:
			if (!HUD_IS_FADING())
			{
				Function_288(32, 0);
				Function_289(iLocal_300, 0);
			}
			else if (IS_ACTION_NODE_PLAYING(Local_78[Local_78.f_69674], "horseshoe/sweep"))
			{
				SET_PANIM_PHASE(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_76);
				SET_PANIM_PARAMS(Local_78[Local_78.f_69674], Local_78[Local_78.f_69674].f_80, 0.0f);
			}
			break;
		
		case 0x00000023:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_184()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_184()), "bQuitMinigame"))
				{
					Function_180();
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_16 = 2;
				}
				else
				{
					Function_289(iLocal_300, 0);
				}
				UI_EXIT("Horseshoes_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_184()), "bQuitMinigame");
			}
			break;
	}
	if (((!Function_305() && !HUD_IS_FADING()) && !HUD_IS_FADED()) && !iLocal_321 != 35)
	{
		if (IS_BUTTON_RELEASED(Function_290(), 5, 1, true))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_184()), "bQuitMinigame"))
			{
				UI_ENTER("Horseshoes_Quit_Confirmation_Popup");
			}
			iLocal_300 = iLocal_321;
			Function_289(35, 0);
		}
	}
	Function_180();
	if (!HUD_IS_FADED() && !HUD_IS_FADING())
	{
		switch (iLocal_58)
		{
			case 0x00000000:
				Function_216(5, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(3, 1, "HorseShoes_Skip", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				Function_216(5, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(3, 1, "HorseShoes_Skip", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				Function_216(5, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(1, 12, "HorseShoes_ChangeBet", 1, 0, 0, 0, 0);
				Function_216(0, 1, "HorseShoes_EnterBet", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000003:
				Function_216(5, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(4, 3, "HorseShoes_Zoom", 1, 0, 0, 0, 0);
				Function_216(3, 1, "HorseShoes_Skip", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000004:
				Function_216(6, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(5, 3, "HorseShoes_Zoom", 1, 0, 0, 0, 0);
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_216(0, 1, "HorseShoes_Skip", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000005:
				Function_216(6, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(5, 3, "HorseShoes_Zoom", 1, 0, 0, 0, 0);
				Function_216(4, 7, "HorseShoes_AimCamera", 1, 0, 0, 0, 0);
				Function_216(3, 13, "HorseShoes_Aim", 1, 0, 0, 0, 0);
				Function_216(2, 16, "HorseShoes_Swing", 1, 0, 0, 0, 0);
				Function_216(1, 8, "HorseShoes_Release", 1, 0, 0, 0, 0);
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_216(0, 1, "HorseShoes_Skip", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000006:
				Function_216(5, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(4, 3, "HorseShoes_Zoom", 1, 0, 0, 0, 0);
				Function_216(2, 13, "HorseShoes_Aim", 1, 0, 0, 0, 0);
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_216(0, 1, "HorseShoes_Skip", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000007:
				Function_216(5, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(3, 11, "HorseShoes_LookAround", 1, 0, 0, 0, 0);
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_216(0, 1, "HorseShoes_Skip", 1, 0, 0, 0, 0);
				}
				break;
			
			case 0x00000008:
				Function_216(5, 2, "HorseShoes_Quit", 1, 0, 0, 0, 0);
				Function_216(3, 1, "HorseShoes_Skip", 1, 0, 0, 0, 0);
				break;
			
			case 0x00000009:
				break;
			}
	}
	return;
}

int Function_216(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xEEBF / 61119
{
	if (!Function_219(uParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_218(uParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_217(uParam0, iParam2);
}

int Function_217(var uParam0, int iParam1) //Position: 0xEEF9 / 61177
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xEF07 / 61191
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_219(var uParam0, int iParam1) //Position: 0xEF41 / 61249
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

bool Function_220(bool bParam0, bool bParam1, float fParam2) //Position: 0xEF4F / 61263
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_242(bParam0);
	}
	Function_241(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_240(&Var0);
	}
	if (Function_239(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_238(&Var0, 0);
		Function_240(&Var0);
		Function_234();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_233(bParam0, iVar6, &uVar7))
	{
		if (Function_232())
		{
			if (!Function_231(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_230(&Var0, 1);
				Function_240(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_240(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_221(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
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
		Function_240(&Var0);
	}
	return 0;
}

bool Function_221(int iParam0) //Position: 0xF1A2 / 61858
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_228(iVar0))
		{
			iVar1 = Function_222(iVar0);
			if (iVar1 == iParam0)
			{
				if (iVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_222(int iParam0) //Position: 0xF1E5 / 61925
{
	int iVar0;
	
	Function_226(&iVar0);
	if (iParam0 == GET_LOCAL_SLOT())
	{
		Function_225(&iVar0);
	}
	else
	{
		Function_224(&iVar0, iParam0);
	}
	return Function_223(&iVar0);
}

int Function_223(int iParam0) //Position: 0xF20C / 61964
{
	return *iParam0;
}

void Function_224(var uParam0, int iParam1) //Position: 0xF215 / 61973
{
	*uParam0 = Global_76943[iParam196].f_120;
	return;
}

void Function_225(int iParam0) //Position: 0xF228 / 61992
{
	*iParam0 = Global_78480.f_120;
	return;
}

void Function_226(int iParam0) //Position: 0xF237 / 62007
{
	Function_227(iParam0, 4294967286);
	return;
}

void Function_227(var uParam0, int iParam1) //Position: 0xF245 / 62021
{
	*uParam0 = iParam1;
	return;
}

bool Function_228(int iParam0) //Position: 0xF250 / 62032
{
	return Function_229(iParam0);
}

int Function_229(bool bParam0) //Position: 0xF25B / 62043
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

void Function_230(int iParam0, bool bParam1) //Position: 0xF2FC / 62204
{
	if (bParam1)
	{
		Function_74(iParam0, 2);
	}
	else
	{
		Function_36(iParam0, 2);
	}
	return;
}

bool Function_231(bool bParam0) //Position: 0xF316 / 62230
{
	return Function_151(*bParam0, 2);
}

bool Function_232() //Position: 0xF323 / 62243
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

bool Function_233(int iParam0, var uParam1, bool bParam2) //Position: 0xF341 / 62273
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
		if (Function_228(iVar0))
		{
			iVar1 = Function_222(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					*bParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_234() //Position: 0xF392 / 62354
{
	Function_235(4294967286);
	return;
}

void Function_235(bool bParam0) //Position: 0xF39E / 62366
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_225(&uVar0);
		Function_241(&vVar1);
		vVar1.z = uVar0;
		Function_240(&vVar1);
	}
	Function_227(&uVar0, bParam0);
	Function_237(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_236(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_236(var uParam0, int iParam1) //Position: 0xF3DB / 62427
{
	Global_76943[iParam196].f_120 = *uParam0;
	return;
}

void Function_237(int iParam0) //Position: 0xF3EE / 62446
{
	Global_78480.f_120 = *iParam0;
	return;
}

void Function_238(int iParam0, bool bParam1) //Position: 0xF3FD / 62461
{
	if (bParam1)
	{
		Function_74(iParam0, 1);
	}
	else
	{
		Function_36(iParam0, 1);
	}
	return;
}

bool Function_239(int iParam0) //Position: 0xF417 / 62487
{
	return Function_151(*iParam0, 1);
}

void Function_240(int iParam0) //Position: 0xF424 / 62500
{
	Global_78617 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_241(int iParam0) //Position: 0xF434 / 62516
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Global_78617 };
	return;
}

void Function_242(int iParam0) //Position: 0xF444 / 62532
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_225(&iVar1);
	if (Function_223(&iVar1) != bVar0)
	{
		Function_241(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_151(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_235(bVar0);
		Function_230(&Var2, 0);
		Function_240(&Var2);
	}
	return;
}

bool Function_243(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xF541 / 62785
{
	if (!IS_OBJECT_VALID((*iParam3[bParam074] + 108)[bParam1]))
	{
		NET_LOG(true, "Horseshoes Net Prop Error", "ERROR: Horseshoe volume %s for player %s is invalid %s", I2STR(bParam1), I2STR(bParam0), bParam2, 0);
		return 0;
	}
	return 1;
}

void Function_244(int iParam0, int iParam1, int iParam2) //Position: 0xF5C7 / 62919
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0[iParam174]->f_68;
	iParam0[iParam174]->f_68 = iParam2;
	(*iParam0 + 596)[iVar06] = 0;
	(*iParam0 + 596)[iParam26] = 1;
	(iParam0 + 596[iParam26])->f_4 = iParam1;
	if (IS_ACTOR_LOCAL_PLAYER((*iParam0)[iParam174]))
	{
		iParam0->f_704 = iParam2;
	}
	if (!Function_305() || IS_ACTOR_LOCAL_PLAYER((*iParam0)[iParam174]))
	{
		GET_OBJECT_POSITION(StackVal, &uVar1);
		TASK_GO_TO_COORD((*iParam0)[iParam174], &uVar1, 1);
		TASK_PRIORITY_SET((*iParam0)[iParam174], true);
	}
	return;
}

void Function_245(bool bParam0) //Position: 0xF64D / 63053
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	var uVar15;
	vector3 vVar18;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	
	iLocal_296 = 0;
	iLocal_297 = 1;
	if (Local_78.f_768 == 0)
	{
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 740[03]), *(bParam0 + 740[13]), StackVal) };
	}
	else
	{
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(bParam0 + 740[13]), *(bParam0 + 740[03]), StackVal) };
	}
	vVar3 = { StackVal, StackVal, vVar0 };
	VSCALE(&vVar0, 0,2f);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(&Local_78 + 740[bParam0->f_7683]), StackVal) };
	vVar6.f_4 = (vVar6.y + 3.0f);
	vVar9 = { StackVal, StackVal, *(&Local_78 + 740[bParam0->f_7683]) };
	VSCALE(&vVar3, -0,025f);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar9, StackVal) };
	FIND_GROUND_INTERSECTION(&Local_78 + 740[bParam0->f_7683], 10.0f, &uVar12, &uVar15);
	VNORMALIZE(&vVar0);
	VNORMALIZE(&uVar15);
	VCROSS(&uVar15, &vVar0, &vVar18);
	VNORMALIZE(&vVar18);
	VSCALE(&vVar18, 0,5f);
	fVar21 = GET_STICK_X(Function_290(), 0, 1);
	if (fVar21 < -0,2f && fVar21 > 0,2f)
	{
		fVar21 = 0.0f;
	}
	fVar22 = GET_STICK_Y(Function_290(), 0, 1);
	if (fVar22 < -0,2f && fVar22 > 0,2f)
	{
		fVar22 = 0.0f;
	}
	fVar23 = (fVar21 * 1.0f);
	fVar24 = (fVar22 * 1.0f);
	fVar25 = (-0,5f * fLocal_19);
	fVar26 = (fVar25 + fVar23);
	fVar27 = (-0,5f * fLocal_20);
	fVar28 = (fVar27 + fVar24);
	fVar29 = ((-fLocal_17 * 5.0f) * bLocal_271);
	fVar30 = ((-fLocal_18 * 5.0f) * bLocal_271);
	fVar31 = ((fLocal_17 + (fVar26 / 1.0f)) + fVar29);
	fVar32 = ((fLocal_18 + (fVar28 / 1.0f)) + fVar30);
	fVar33 = (fLocal_19 + (fVar31 * bLocal_271));
	fVar34 = (fLocal_20 + (fVar32 * bLocal_271));
	if (fVar33 > -1.0f)
	{
		fVar31 = 0.0f;
		fVar33 = -1.0f;
	}
	else if (fVar33 < 1.0f)
	{
		fVar31 = 0.0f;
		fVar33 = 1.0f;
	}
	if (fVar34 > -1.0f)
	{
		fVar32 = 0.0f;
		fVar34 = -1.0f;
	}
	else if (fVar34 < 1.0f)
	{
		fVar32 = 0.0f;
		fVar34 = 1.0f;
	}
	fLocal_17 = fVar31;
	fLocal_19 = fVar33;
	fLocal_18 = fVar32;
	fLocal_20 = fVar34;
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar18, vVar9, StackVal) * Vector(fVar33, fVar33, fVar33), StackVal, StackVal) };
	if (GET_LOOKSTICK_INVERT_Y())
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar0, vVar9, StackVal) * Vector(fVar34, fVar34, fVar34), StackVal, StackVal) };
	}
	else
	{
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar0, vVar9, StackVal) * Vector(fVar34, fVar34, fVar34), StackVal, StackVal) };
	}
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_35) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_35);
	}
	SET_CAMERA_POSITION(bLocal_35, vVar6);
	SET_CAMERA_TARGET_POSITION(bLocal_35, vVar9, 0);
	SET_CAMERA_FOV(bLocal_35, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_35, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_35, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

int Function_246(bool bParam0) //Position: 0xF8BC / 63676
{
	return StackVal;
}

void Function_247(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0xF8D4 / 63700
{
	int iVar0[2];
	
	if (!Function_305())
	{
		return;
	}
	*(&iVar0 + 12) = 2;
	iVar0[0] = iParam2;
	iVar0[1] = iParam3;
	(*&iVar0 + 12)[0] = uParam0;
	(*&iVar0 + 12)[1] = uParam1;
	NET_SCRIPTMSG_SEND(3, 26, &iVar0, 6, 0);
}

bool Function_248(int iParam0, int iParam1, bool bParam2) //Position: 0xF91E / 63774
{
	struct<5> Var0;
	float fVar6;
	struct<5> Var7;
	bool bVar13;
	float fVar14;
	float fVar15;
	bool bVar16;
	
	if (!Function_243(iParam0, iParam1, "in IS_RINGER", bParam2))
	{
		return 0;
	}
	if (Function_305() && iParam0 == Function_287(bParam2))
	{
		return Local_287[iParam1];
	}
	Var0 = { StackVal, StackVal, *(&Local_59 + 16[bParam2->f_7683]) };
	GET_VOLUME_SCALE((*bParam2 + 716)[bParam2->f_768], &uVar3);
	fVar6 = uVar3;
	Var0.f_4 = 0.0f;
	if (!GET_OBJECT_AXIS((*bParam2[iParam074] + 96)[iParam1], &Var7, 2))
	{
		LOG_ERROR("Couldn't retireve z-axis for horshoe. Unable to perform ringer detection.");
		return 0;
	}
	Var7.f_4 = 0.0f;
	VNORMALIZE(&Var7);
	bVar13 = CREATE_OBJECT_LOCATOR((*bParam2[iParam074] + 96)[iParam1], "tip01wrapper");
	if (!IS_OBJECT_VALID(bVar13))
	{
		LOG_ERROR("Failed to create object wrapper for 'tip01' locator. Cancelling ringer detection.");
		return 0;
	}
	if (!OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar13, (*bParam2[iParam074] + 96)[iParam1], "tip01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Failed to attach 'rTip01Wrapper' to fragment locator. Cancelling ringer detection.");
		DESTROY_OBJECT(bVar13);
		return 0;
	}
	if (!GET_OBJECT_POSITION(bVar13, &Var10))
	{
		LOG_ERROR("Could not get locator offsets for locator 'tip01' on the horseshoe. Cancelling ringer detection.");
		DESTROY_OBJECT(bVar13);
		return 0;
	}
	Var10.f_4 = 0.0f;
	fVar14 = VDOT(&Var10, &Var7);
	fVar15 = (VDOT(&Var7, &Var0) - fVar14);
	if (fVar15 > fVar6)
	{
		DESTROY_OBJECT(bVar13);
		return 0;
	}
	if (!GET_OBJECT_AXIS(bVar13, &Var7, 0))
	{
		LOG_ERROR("Couldn't retireve x-axis for rTip01Wrapper. Unable to perform ringer detection.");
		DESTROY_OBJECT(bVar13);
		return 0;
	}
	DESTROY_OBJECT(bVar13);
	Var7.f_4 = 0.0f;
	VNORMALIZE(&Var7);
	fVar14 = VDOT(&Var10, &Var7);
	fVar15 = (VDOT(&Var7, &Var0) - fVar14);
	if (fVar15 > fVar6)
	{
		PRINTSTRING("Failed right plane detection");
		PRINTNL();
		return 0;
	}
	if (!GET_OBJECT_AXIS((*bParam2[iParam074] + 96)[iParam1], &Var7, 2))
	{
		LOG_ERROR("Couldn't retireve z-axis for horshoe. Unable to perform ringer detection.");
		return 0;
	}
	VSCALE(&Var7, -1.0f);
	Var7.f_4 = 0.0f;
	VNORMALIZE(&Var7);
	if (!GET_OBJECT_POSITION((*bParam2[iParam074] + 96)[iParam1], &Var10))
	{
		LOG_ERROR("Could not retrieve position of horshoe. This is a problem. Ringer detection aborted.");
		return 0;
	}
	Var10.f_4 = 0.0f;
	fVar14 = VDOT(&Var10, &Var7);
	fVar15 = (VDOT(&Var7, &Var0) - fVar14);
	if (fVar15 > fVar6)
	{
		return 0;
	}
	bVar16 = CREATE_OBJECT_LOCATOR((*bParam2[iParam074] + 96)[iParam1], "tip02wrapper");
	if (!IS_OBJECT_VALID(bVar16))
	{
		LOG_ERROR("Failed to create object wrapper for 'tip02' locator. Cancelling ringer detection.");
		return 0;
	}
	if (!OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar16, (*bParam2[iParam074] + 96)[iParam1], "tip02", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Failed to attach 'rTip02Wrapper' to fragment locator. Cancelling ringer detection.");
		DESTROY_OBJECT(bVar16);
		return 0;
	}
	if (!GET_OBJECT_POSITION(bVar16, &Var10))
	{
		LOG_ERROR("Could not get locator offsets for locator 'tip02' on the horseshoe. Cancelling ringer detection.");
		return 0;
	}
	if (!GET_OBJECT_AXIS(bVar16, &Var7, 0))
	{
		LOG_ERROR("Couldn't retireve x-axis for horshoe. Unable to perform ringer detection.");
		DESTROY_OBJECT(bVar16);
		return 0;
	}
	DESTROY_OBJECT(bVar16);
	VSCALE(&Var7, -1.0f);
	Var7.f_4 = 0.0f;
	VNORMALIZE(&Var7);
	Var10.f_4 = 0.0f;
	fVar14 = VDOT(&Var10, &Var7);
	fVar15 = (VDOT(&Var7, &Var0) - fVar14);
	if (fVar15 > fVar6)
	{
		return 0;
	}
	return 1;
}

var Function_249(float fParam0) //Position: 0xFF77 / 65399
{
	return (fParam0 * 3,28084f);
}

vector3 Function_250(bool bParam0) //Position: 0xFF85 / 65413
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

int Function_251(var uParam0, bool bParam1) //Position: 0xFFF1 / 65521
{
	struct<5> Var0;
	
	GET_POSITION((*uParam0)[174], &Var0);
	GET_OBJECT_POSITION(bParam1, &Var3);
	if (StackVal > (StackVal - 10.0f))
	{
		LOG_ERROR("Horseshoe fell through world. It is at least 10 meters below player");
		return 1;
	}
	return 0;
}

bool Function_252(bool bParam0) //Position: 0x1006D / 65645
{
	struct<9> Var0;
	
	GET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bParam0), &vVar0);
	return (((vVar0.x * vVar0.x) < 0,001f || (vVar0.z * vVar0.z) < 0,001f) || (vVar0.y * vVar0.y) < 0,001f);
}

void Function_253(var uParam0, int iParam1, int iParam2, float fParam3) //Position: 0x100A9 / 65705
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	struct<5> Var16;
	struct<5> Var22;
	
	bVar0 = StackVal;
	GET_OBJECT_POSITION(bVar0, &vVar1);
	GET_OBJECT_AXIS(bVar0, &vVar4, 2);
	vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar1, StackVal) * Vector(4.0f, 4.0f, 4.0f), StackVal, StackVal) };
	vVar7.f_4 = (vVar7.y + 2,5f);
	GET_OBJECT_AXIS(bVar0, &vVar10, 0);
	if (uParam0[iParam174]->f_68 != 1 || uParam0[iParam174]->f_68 != 3)
	{
		vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar10, vVar7, StackVal) * Vector(0,8f, 0,8f, 0,8f), StackVal, StackVal) };
	}
	else
	{
		vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar10, vVar7, StackVal) * Vector(0,8f, 0,8f, 0,8f), StackVal, StackVal) };
	}
	Function_254(StackVal, StackVal, StackVal, StackVal, *(&Local_78 + 740[13]), *(&Local_78 + 740[03]));
	vVar13 = { StackVal, StackVal, Function_254(StackVal, StackVal, StackVal, StackVal, *(&Local_78 + 740[13]), *(&Local_78 + 740[03])) };
	vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar10, vVar13, StackVal) * Vector(fParam3, fParam3, fParam3), StackVal, StackVal) };
	Function_211((*uParam0[iParam274] + 96)[uParam0[iParam274]->f_92]);
	Var16 = { StackVal, StackVal, Function_211((*uParam0[iParam274] + 96)[uParam0[iParam274]->f_92]) };
	Var19 = { StackVal, StackVal, *(&Local_78 + 740[Local_78.f_7683]) };
	if (StackVal < (StackVal + 1,1f))
	{
		bVar25 = GET_PHYSINST_FROM_OBJECT((*uParam0[iParam274] + 96)[uParam0[iParam274]->f_92]);
		GET_PHYSINST_VELOCITY(bVar25, &Var22);
		if (StackVal < (StackVal + fLocal_293))
		{
			Var16.f_4 = (StackVal + fLocal_293);
		}
		if (StackVal < fLocal_295)
		{
			fLocal_295 = StackVal;
		}
		if (StackVal >= 0.0f)
		{
			Var16.f_4 = fLocal_295;
		}
		if (Function_284(&iLocal_39) > fLocal_294)
		{
			vVar13.f_4 = (StackVal + (((StackVal - (vVar13.y + 1,1f)) * Function_284(&iLocal_39)) / fLocal_294));
		}
		else
		{
			vVar13.f_4 = (StackVal + (StackVal - (vVar13.y + 1,1f)));
		}
		iLocal_296 = 0;
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_35) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_35);
		}
		SET_CAMERA_POSITION(bLocal_35, vVar7);
		SET_CAMERA_TARGET_POSITION(bLocal_35, vVar13, 0);
		SET_CAMERA_FOV(bLocal_35, 31.0f);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_35, false))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_35, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
		}
	}
}

vector3 Function_254(vector3 vParam0, vector3 vParam3) //Position: 0x102A4 / 66212
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam3, vParam0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f) };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam3, vVar0, StackVal) };
	return StackVal, StackVal, vVar0;
}

void Function_255(var uParam0, var uParam1, int iParam2) //Position: 0x102D9 / 66265
{
	int iVar0;
	
	if (!Function_305())
	{
		return;
	}
	iVar0 = uParam0;
	*(&iVar0 + 4) = { StackVal, StackVal, *uParam1 };
	*(&iVar0 + 16) = { StackVal, StackVal, *iParam2 };
	NET_SCRIPTMSG_SEND(3, 25, &iVar0, 7, 0);
	return;
}

bool Function_256(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1030A / 66314
{
	if (!IS_OBJECT_VALID((*iParam3[bParam074] + 96)[bParam1]))
	{
		NET_LOG(true, "Horseshoes Net Prop Error", "ERROR: Horseshoe %s for player %s is invalid %s", I2STR(bParam1), I2STR(bParam0), bParam2, 0);
		return 0;
	}
	return 1;
}

vector3 Function_257(int iParam0, int iParam1, float fParam2, float fParam3) //Position: 0x10389 / 66441
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	bool bVar16;
	
	vVar0 = { 0.0f, -1.0f, 0.0f };
	fVar3 = (10.0f + (Local_78[iParam174].f_76 * ((180.0f - 10.0f) - 10.0f)));
	vVar4 = { fVar3, 0.0f, 0.0f };
	UNK_0xF76F2BB3(&vVar0, &vVar4, 0, 4);
	GET_OBJECT_POSITION((*iParam0[iParam174] + 96)[iParam0[iParam174]->f_92], &vVar7);
	GET_VOLUME_CENTER((*iParam0 + 716)[iParam0->f_768], &vVar10);
	vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar7, vVar10, StackVal) };
	bVar16 = UNK_0x9C40E671(&vVar13);
	vVar4 = { 0.0f, (bVar16 + (-fParam2 * 20.0f)), 0.0f };
	UNK_0xF76F2BB3(&vVar0, &vVar4, 0, 4);
	VSCALE(&vVar0, (fParam3 * 3,5f));
	return StackVal, StackVal, vVar0;
}

void Function_258(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10434 / 66612
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_259(int iParam0) //Position: 0x1047B / 66683
{
	if (Function_260(iParam0))
	{
		if (Function_261(iParam0))
		{
			iParam0->f_4 = (StackVal - GET_CURRENT_GAME_TIME());
			iParam0->f_8 = 0.0f;
			Function_36(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_260(int iParam0) //Position: 0x10542 / 66882
{
	return Function_151(*iParam0, 1);
}

bool Function_261(int iParam0) //Position: 0x1054F / 66895
{
	return Function_151(*iParam0, 2);
}

void Function_262(bool bParam0) //Position: 0x1055C / 66908
{
	if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
	{
		Function_180();
		iLocal_58 = 7;
		Function_245(bParam0);
	}
	else if (IS_BUTTON_DOWN(Function_290(), 0, 1, false))
	{
		iLocal_58 = 6;
		Function_264();
		Function_263(StackVal, StackVal, -bParam0[Local_78[bParam074]74]->f_80);
	}
	else
	{
		Function_264();
		if (Function_292(bParam0))
		{
			iLocal_58 = 5;
		}
		else
		{
			iLocal_58 = 3;
		}
		Function_275(bParam0, Function_287(bParam0), -bParam0[Function_287(bParam0)74]->f_80, 1);
	}
	return;
}

void Function_263(int iParam0, bool bParam1, float fParam2) //Position: 0x105E8 / 67048
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	iLocal_296 = 0;
	GET_POSITION(bParam1, &vVar0);
	GET_ACTOR_AXIS(bParam1, &vVar3, 2);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(0,4f, 0,4f, 0,4f), StackVal, StackVal) };
	vVar6.f_4 = (vVar6.y + 1,55f);
	GET_ACTOR_AXIS(bParam1, &vVar9, 0);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar6, StackVal) * Vector(0,26f, 0,26f, 0,26f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, *(iParam0 + 740[iParam0->f_7683]) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar12, StackVal) * Vector(fParam2, fParam2, fParam2), StackVal, StackVal) };
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_35) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_35);
	}
	SET_CAMERA_POSITION(bLocal_35, vVar6);
	SET_CAMERA_TARGET_POSITION(bLocal_35, vVar12, 0);
	SET_CAMERA_FOV(bLocal_35, 31.0f);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_35, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_35, 0, 0,5f, 0,5f, 0, 0, 0, 0, 0, 0);
	}
	SET_CAMERASHOT_NEAR_CLIP_PLANE(bLocal_298, 0,1f);
	return;
}

void Function_264() //Position: 0x106C1 / 67265
{
	fLocal_17 = 0.0f;
	fLocal_18 = 0.0f;
	fLocal_19 = 0.0f;
	fLocal_20 = 0.0f;
	return;
}

float Function_265(bool bParam0, bool bParam1, int iParam2) //Position: 0x106D3 / 67283
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	fVar0 = 0.0f;
	if (iParam2 == Function_287(bParam0))
	{
		if (bParam1 < -0,2f && bParam1 > 0,2f)
		{
			bParam1 = 0.0f;
		}
	}
	fVar1 = (bParam1 * 2.0f);
	fVar2 = (fVar1 + fVar0);
	fVar3 = 0.0f;
	fVar4 = ((-bParam0[iParam274]->f_84 * 6.0f) * bLocal_271);
	fVar5 = (((bParam0[iParam274]->f_84 + (fVar2 / 10.0f)) + fVar4) + fVar3);
	iVar6 = (bParam0[iParam274]->f_88 + (fVar5 * bLocal_271));
	if (iVar6 > -0,5f)
	{
		fVar5 = 0.0f;
		iVar6 = -0,5f;
	}
	else if (iVar6 < 0,5f)
	{
		fVar5 = 0.0f;
		iVar6 = 0,5f;
	}
	bParam0[iParam274]->f_84 = fVar5;
	bParam0[iParam274]->f_88 = iVar6;
	return iVar6;
}

void Function_266(int iParam0) //Position: 0x1078B / 67467
{
	if (Function_260(iParam0))
	{
		if (!Function_261(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_74(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

int Function_267() //Position: 0x1084A / 67658
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 != GET_LOCAL_SLOT())
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	return 4294967295;
}

float Function_268(bool bParam0, int iParam1, bool bParam2) //Position: 0x10877 / 67703
{
	float fVar0;
	float fVar1;
	struct<9> Var2;
	
	GET_VOLUME_CENTER((*bParam2[bParam074] + 108)[iParam1], &vVar2);
	Function_270(StackVal, vVar2.x, vVar2.z, (*&Local_78 + 740)[Local_78.f_7683], vVar2.x, vVar2.z, 0,075f, &fVar0, &fVar1);
	iVar5 = Function_269(StackVal, fVar0, fVar1, (*&Local_78 + 740)[Local_78.f_7683]);
	vVar6 = { fVar0, vVar2.y, fVar1 };
	return iVar5;
}

float Function_269(float fParam0, float fParam1, float fParam2, float fParam3) //Position: 0x108F1 / 67825
{
	float fVar0;
	
	fVar0 = SQRT((((fParam2 - fParam0) * (fParam2 - fParam0)) + ((fParam3 - fParam1) * (fParam3 - fParam1))));
	return fVar0;
}

void Function_270(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8) //Position: 0x10917 / 67863
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	
	fVar0 = (fParam2 - fParam0);
	fVar1 = (fParam3 - fParam1);
	vVar2 = { fParam2, 92,45f, fParam3 };
	vVar2 = { fParam0, 92,45f, fParam1 };
	fVar10 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	fVar11 = (2.0f * ((fVar0 * (fParam0 - fParam4)) + (fVar1 * (fParam1 - fParam5))));
	fVar12 = ((((fParam0 - fParam4) * (fParam0 - fParam4)) + ((fParam1 - fParam5) * (fParam1 - fParam5))) - (fParam6 * fParam6));
	bVar13 = ((fVar11 * fVar11) - ((4.0f * fVar10) * fVar12));
	if (fVar10 >= 1E-07f || bVar13 > 0.0f)
	{
		*fParam7 = fParam2;
		*fParam8 = fParam3;
	}
	else if (bVar13 != 0.0f)
	{
		fVar5 = (-fVar11 / (2.0f * fVar10));
		*fParam7 = (fParam0 + (fVar5 * fVar0));
		*fParam8 = (fParam1 + (fVar5 * fVar1));
	}
	else
	{
		fVar5 = ((-fVar11 + SQRT(bVar13)) / (2.0f * fVar10));
		fVar6 = (fParam0 + (fVar5 * fVar0));
		fVar7 = (fParam1 + (fVar5 * fVar1));
		fVar5 = ((-fVar11 - SQRT(bVar13)) / (2.0f * fVar10));
		fVar8 = (fParam0 + (fVar5 * fVar0));
		fVar9 = (fParam1 + (fVar5 * fVar1));
		vVar2 = { fVar6, 92,45f, fVar7 };
		vVar2 = { fVar8, 92,45f, fVar9 };
		if (Function_269(fVar6, fVar7, fParam2, fParam3) > Function_269(fVar8, fVar9, fParam2, fParam3))
		{
			*fParam7 = fVar6;
			*fParam8 = fVar7;
		}
		else
		{
			*fParam7 = fVar8;
			*fParam8 = fVar9;
		}
	}
}

bool Function_271(bool bParam0, int iParam1, int iParam2) //Position: 0x10A71 / 68209
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	Function_211((*bParam0[iParam174] + 96)[iParam2]);
	vVar0 = { StackVal, StackVal, Function_211((*bParam0[iParam174] + 96)[iParam2]) };
	if (bParam0->f_768 == 1)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	bVar4 = VDIST(*(bParam0 + 740[iVar33]), vVar0);
	if (bVar4 > (bLocal_273 - 2.0f))
	{
		return 1;
	}
	return 0;
}

bool Function_272() //Position: 0x10AC1 / 68289
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
	return 0;
}

bool Function_273(bool bParam0, int iParam1, int iParam2) //Position: 0x10ADE / 68318
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	Function_211((*bParam0[iParam174] + 96)[iParam2]);
	vVar0 = { StackVal, StackVal, Function_211((*bParam0[iParam174] + 96)[iParam2]) };
	if (bParam0->f_768 == 1)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	bVar4 = VDIST(*(bParam0 + 740[iVar33]), vVar0);
	if (bVar4 < (bLocal_273 + 2.0f))
	{
		return 1;
	}
	return 0;
}

void Function_274(bool bParam0, int iParam1) //Position: 0x10B2E / 68398
{
	bool bVar0;
	
	if (IS_BUTTON_DOWN(Function_290(), 7, 1, false))
	{
		Function_180();
		iLocal_58 = 7;
		Function_245(bParam0);
	}
	else
	{
		Function_264();
		if (Function_292(bParam0))
		{
			if ((bParam0[174]->f_92 != 0 && !IS_ACTION_NODE_PLAYING(Local_78[174], "horseshoe/sweep")) && !IS_ACTION_NODE_PLAYING(Local_78[174], "horseshoe/sweep_idle"))
			{
				iLocal_58 = 4;
			}
			else
			{
				iLocal_58 = 5;
			}
		}
		else
		{
			iLocal_58 = 3;
		}
		if ((iParam1 == 12 && iParam1 == 16) && iParam1 == 17)
		{
			bVar0 = false;
			if (iLocal_297)
			{
				bVar0 = true;
			}
			iLocal_297 = 0;
			Function_275(bParam0, Function_287(bParam0), -bParam0[Function_287(bParam0)74]->f_80, bVar0);
		}
	}
	return;
}

void Function_275(bool bParam0, int iParam1, float fParam2, bool bParam3) //Position: 0x10BED / 68589
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	
	bVar0 = StackVal;
	GET_OBJECT_POSITION(bVar0, &vVar1);
	GET_OBJECT_AXIS(bVar0, &vVar4, 2);
	vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar4, vVar1, StackVal) * Vector(4.0f, 4.0f, 4.0f), StackVal, StackVal) };
	vVar7.f_4 = (vVar7.y + 2,5f);
	GET_OBJECT_AXIS(bVar0, &vVar10, 0);
	if (bParam0[iParam174]->f_68 != 1 || bParam0[iParam174]->f_68 != 3)
	{
		vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar10, vVar7, StackVal) * Vector(0,8f, 0,8f, 0,8f), StackVal, StackVal) };
	}
	else
	{
		vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar10, vVar7, StackVal) * Vector(0,8f, 0,8f, 0,8f), StackVal, StackVal) };
	}
	Function_254(StackVal, StackVal, StackVal, StackVal, *(&Local_78 + 740[13]), *(bParam0 + 740[03]));
	vVar13 = { StackVal, StackVal, Function_254(StackVal, StackVal, StackVal, StackVal, *(&Local_78 + 740[13]), *(bParam0 + 740[03])) };
	vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar10, vVar13, StackVal) * Vector(fParam2, fParam2, fParam2), StackVal, StackVal) };
	GET_CAMERA_POSITION(bLocal_35, &vVar16);
	GET_CAMERA_DIRECTION(bLocal_35, &vVar19);
	if (iLocal_296 && (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_35) || CAMERA_GET_CURRENT_TRANSITION_TYPE(bLocal_35) != 1))
	{
		iLocal_296 = 0;
	}
	if (!iLocal_296)
	{
		if (!IS_OBJECT_VALID(bLocal_298))
		{
			bLocal_298 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_36, "CameraShotA");
		}
		if (!IS_OBJECT_VALID(bLocal_299))
		{
			bLocal_299 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_36, "CameraShotB");
		}
		Function_276(bLocal_298);
		Function_276(bLocal_299);
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_35) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_35);
		}
		SET_CAMERASHOT_POSITION(bLocal_298, vVar16);
		SET_CAMERASHOT_DIRECTION(bLocal_298, vVar19, 0);
		SET_CAMERASHOT_FOV(bLocal_298, 31.0f);
		SET_CAMERASHOT_POSITION(bLocal_299, vVar7);
		SET_CAMERASHOT_TARGET_POSITION(bLocal_299, vVar13, 0);
		SET_CAMERASHOT_FOV(bLocal_299, 31.0f);
		if (bParam3)
		{
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(bLocal_35, bLocal_299, 4294967295);
			iLocal_296 = 0;
		}
		else
		{
			ADD_CAMERA_SHOT_TRANSITION_EASE_IN_OUT(bLocal_35, bLocal_298, bLocal_299, 0,75f, 4294967295, 0);
			ADD_CAMERA_SHOT_TRANSITION_INDEFINITE(bLocal_35, bLocal_299, 4294967295);
			iLocal_296 = 1;
		}
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_35, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_35, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
}

void Function_276(bool bParam0) //Position: 0x10DCD / 69069
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_277(bool bParam0) //Position: 0x10DDE / 69086
{
	PRINTFLOAT(bParam0);
	PRINTNL();
	bLocal_21 = (0,6f + (0,04f * bParam0));
	bLocal_22 = (0,78f - (0,04f * bParam0));
	bLocal_24 = (0,25f - (0,2f * bParam0));
	bLocal_23 = (0,15f - (0,15f * bParam0));
	bLocal_26 = (1.0f - (0,7f * bParam0));
	bLocal_25 = (0,4f - (0,4f * bParam0));
	fLocal_27 = (0.0f + (7.0f * bParam0));
	fLocal_28 = 1.0f;
	bLocal_29 = (0.0f + (0,08f * bParam0));
	bLocal_30 = (0,2f - (0,08f * bParam0));
	bLocal_31 = -1.0f;
	bLocal_32 = -1.0f;
	return;
}

int Function_278(bool bParam0, bool bParam1) //Position: 0x10E75 / 69237
{
	bool bVar0;
	
	bVar0 = Function_64(0);
	if ((Function_64(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_109(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_64(0));
	return 1;
}

int Function_279() //Position: 0x10F05 / 69381
{
	return Function_64(0);
}

void Function_280(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x10F0F / 69391
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_281(int iParam0) //Position: 0x10F62 / 69474
{
	Function_282(iParam0, 0.0f);
	return;
}

void Function_282(var uParam0, float fParam1) //Position: 0x10F6E / 69486
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_74(uParam0, 1);
	Function_36(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_283(int iParam0) //Position: 0x10F8F / 69519
{
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam0 > Local_59.f_56)
	{
		iParam0 = Local_59.f_56;
	}
	return iParam0;
}

float Function_284(int iParam0) //Position: 0x10FAF / 69551
{
	if (Function_260(iParam0))
	{
		if (Function_261(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_285() //Position: 0x11077 / 69751
{
	bLocal_21 = 0,65f;
	bLocal_22 = 0,65f;
	bLocal_23 = 0.0f;
	bLocal_24 = 0.0f;
	fLocal_28 = 1.0f;
	bLocal_29 = 0,15f;
	bLocal_30 = 0,15f;
	bLocal_31 = -1.0f;
	bLocal_32 = -1.0f;
	return;
}

void Function_286() //Position: 0x110A8 / 69800
{
	bLocal_21 = 0,65f;
	bLocal_22 = 0,65f;
	bLocal_23 = 0.0f;
	bLocal_24 = 0.0f;
	fLocal_28 = 1.0f;
	bLocal_29 = 0.0f;
	bLocal_30 = 0.0f;
	bLocal_31 = -1.0f;
	bLocal_32 = -1.0f;
	return;
}

int Function_287(bool bParam0) //Position: 0x110D1 / 69841
{
	return StackVal;
}

void Function_288(int iParam0, bool bParam1) //Position: 0x110E5 / 69861
{
	if (bParam1)
	{
		Function_74(&bLocal_56, iParam0);
	}
	else
	{
		Function_36(&bLocal_56, iParam0);
	}
	return;
}

void Function_289(int iParam0, int iParam1) //Position: 0x11101 / 69889
{
	if (Function_305() && iParam1)
	{
		iLocal_320 = iParam0;
		iLocal_321 = 31;
	}
	else
	{
		iLocal_321 = iParam0;
	}
	return;
}

int Function_290() //Position: 0x11122 / 69922
{
	bool bVar0;
	
	bVar0 = Function_184();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

bool Function_291(int iParam0) //Position: 0x1113C / 69948
{
	return Function_151(bLocal_56, iParam0);
}

bool Function_292(bool bParam0) //Position: 0x11149 / 69961
{
	return bParam0->f_696 != Function_287(bParam0);
}

void Function_293() //Position: 0x1115A / 69978
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_294())
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_78[074], "horseshoe/idle");
				SET_ACTION_NODE_FOR_ACTOR(Local_78[174], "horseshoe/idle");
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_281(&iLocal_39);
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Local_78.f_712 = 0;
				iLocal_0 = 1;
				Function_289(0, 0);
			}
			break;
	}
	return;
}

bool Function_294() //Position: 0x111E1 / 70113
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	switch (iLocal_322)
	{
		case 0x000003E8:
			iLocal_322 = 1005;
			if (IS_VOLUME_VALID(Local_59.f_44))
			{
				if (IS_OBJECTSET_VALID(bLocal_49))
				{
					Function_301(bLocal_49);
				}
				else
				{
					bLocal_49 = CREATE_OBJECTSET_IN_LAYOUT(Function_51(), bLocal_36, 15, 1);
				}
				iLocal_50 = LOCATE_ACTORS_IN_VOLUME(Local_59.f_44, bLocal_49, 0, 1);
				bVar1 = false;
				while (bVar1 <= iLocal_50)
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_49));
					if (!IS_ACTOR_PLAYER(bVar0) && bVar0 == (*&Local_59 + 4)[0])
					{
						if ((IS_ACTOR_HOGTIED(bVar0) || IS_ACTOR_CRIPPLED(bVar0, 5)) || IS_ACTOR_VEHICLE(bVar0))
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
							iLocal_322 = 1004;
						}
					}
					bVar1++;
				}
			}
			break;
		
		case 0x000003EC:
			if (HUD_IS_FADED())
			{
				if (IS_VOLUME_VALID(Local_59.f_44))
				{
					ADD_CORPSE_REMOVAL_VOLUME_OBJ(Local_59.f_44);
					if (IS_OBJECTSET_VALID(bLocal_49))
					{
						Function_301(bLocal_49);
					}
					else
					{
						bLocal_49 = CREATE_OBJECTSET_IN_LAYOUT(Function_51(), bLocal_36, 15, 1);
					}
					iLocal_50 = LOCATE_ACTORS_IN_VOLUME(Local_59.f_44, bLocal_49, 0, 1);
					bVar2 = false;
					while (bVar2 <= iLocal_50)
					{
						bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, bLocal_49));
						if (!IS_ACTOR_PLAYER(bVar0) && bVar0 == (*&Local_59 + 4)[0])
						{
							if ((IS_ACTOR_HOGTIED(bVar0) || IS_ACTOR_CRIPPLED(bVar0, 5)) || IS_ACTOR_VEHICLE(bVar0))
							{
								DESTROY_ACTOR(bVar0);
							}
						}
						bVar2++;
					}
				}
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_322 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (IS_ACTOR_VALID((*&Local_59 + 4)[0]))
			{
				bLocal_15 = GET_ACTOR_UPDATE_PRIORITY((*&Local_59 + 4)[0]);
				SET_ACTOR_UPDATE_PRIORITY((*&Local_59 + 4)[0], false);
				Function_296((*&Local_59 + 4)[0], &Local_78, Local_59.f_64, GET_ACTOR_ENUM_STRING((*&Local_59 + 4)[0]));
			}
			if (IS_ACTOR_VALID((*&Local_59 + 4)[1]))
			{
				Function_296((*&Local_59 + 4)[1], &Local_78, Local_59.f_60, GET_ACTOR_ENUM_STRING((*&Local_59 + 4)[1]));
			}
			Function_295(Function_184());
			UI_PUSH("Minigame");
			HUD_ENABLE(false);
			SET_HUD_MAP_DRAW_ENABLED(0);
			Function_275(&Local_78, 1, 0.0f, 1);
			GRINGO_ALLOW_ACTIVATION(Local_59.f_68, false);
			GRINGO_ALLOW_ACTIVATION(Local_59.f_72, false);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_59 + 4)[0]);
			Function_281(&iLocal_39);
			iLocal_322 = 1006;
			break;
		
		case 0x000003EE:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Function_184(), "horseshoe/Idle"))
			{
				return 1;
			}
			if (Function_284(&iLocal_39) < 12.0f)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_16 = 2;
			}
			break;
	}
	return 0;
}

void Function_295(bool bParam0) //Position: 0x11427 / 70695
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (7 - 1))
	{
		ACTOR_DISABLE_WEAPON_RENDER(bParam0, iVar0, 1);
		iVar0++;
	}
	return;
}

void Function_296(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1144C / 70732
{
	int iVar0;
	int iVar1;
	
	if (!bParam2 != 4294967295 && !(*iParam1 + 596)[bParam26])
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_700)
		{
			if ((*iParam1)[iVar074] == "")
			{
				iVar1 = iVar0;
			}
			iVar0++;
		}
		Function_297(iParam1[iVar174], bParam0, bParam2, iParam3);
		(*iParam1 + 596)[bParam26] = 1;
		(iParam1 + 596[bParam26])->f_4 = iVar1;
		iParam1->f_700++;
		if (bParam0 == GET_PLAYER_ACTOR(0))
		{
			if (Global_30842[2])
			{
				PRINTSTRING("--- ADDED A LOCAL HUMAN TO SEAT #");
				PRINTINT(bParam2);
				PRINTNL();
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), true);
			SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase1", false, 0, 0);
			TASK_PRIORITY_SET(bParam0, true);
			iParam1->f_704 = bParam2;
		}
		else if (!IS_ACTOR_PLAYER(bParam0))
		{
			if (Global_30842[2])
			{
				PRINTSTRING("--- ADDED AN AI TO SEAT #");
				PRINTINT(bParam2);
				PRINTNL();
			}
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), true);
			TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", true, 1);
			TASK_PRIORITY_SET(bParam0, true);
		}
		else if (Global_30842[2])
		{
			PRINTSTRING("--- ADDED A REMOTE HUMAN TO SEAT #");
			PRINTINT(bParam2);
			PRINTNL();
		}
		DECOR_SET_INT(StackVal, GET_OBJECT_FROM_ACTOR(bParam0), "PlayerIndex");
		PRINTSTRING("Setting PlayerIndex Decor to ");
		PRINTINT(DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "PlayerIndex"));
		PRINTNL();
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_297(int iParam0, char* cParam1, var uParam2, char* cParam3) //Position: 0x1168A / 71306
{
	AI_SET_NAV_SUBGRID_CELL_SIZE(cParam1, 0,4f);
	iParam0->f_72 = 0;
	iParam0->f_92 = 0;
	iParam0->f_280 = 0;
	iParam0->f_292 = 0;
	(*iParam0 + 120)[019] = -1.0f;
	(*iParam0 + 120)[119] = -1.0f;
	*iParam0 = cParam1;
	iParam0->f_68 = uParam2;
	if (cParam1 == GET_PLAYER_ACTOR(0))
	{
		if (Function_305())
		{
			strcpy(iParam0 + 4, GET_SLOT_NAME(GET_LOCAL_SLOT()), 64);
		}
		else
		{
			strcpy(iParam0 + 4, "Poker_Name_P", 64);
		}
		iParam0->f_80 = RAND_FLOAT_RANGE(-0,5f, 0,5f);
	}
	else
	{
		strcpy(iParam0 + 4, cParam3, 64);
	}
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
}

void Function_298() //Position: 0x11724 / 71460
{
	if (Global_29006 == Global_30668[0])
	{
		Function_299(5, Global_30668[0]);
	}
	bLocal_2 = true;
	Function_1();
	return;
}

void Function_299(int iParam0, int iParam1) //Position: 0x11746 / 71494
{
	if (!Function_138(3))
	{
		return;
	}
	if (Function_169())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3())
				{
					Function_145(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_145(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_145(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_145(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_145(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_145(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_145(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_139(2) && !Function_124(2))
				{
					Function_145(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_300() //Position: 0x11854 / 71764
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_301(bool bParam0) //Position: 0x11860 / 71776
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

void Function_302() //Position: 0x11898 / 71832
{
	Function_303(4);
	return;
}

void Function_303(int iParam0) //Position: 0x118A2 / 71842
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
			Function_304(iParam0);
		}
	}
	return;
}

void Function_304(int iParam0) //Position: 0x118D4 / 71892
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

bool Function_305() //Position: 0x118E3 / 71907
{
	return Local_59.f_48;
}

void Function_306() //Position: 0x118ED / 71917
{
	int iVar0;
	
	SET_GLOBAL_DISABLE_SPU_COLLIDER_UPDATE(1);
	HUD_SET_MINIGAME_TYPE_LAYOUT(6);
	Function_330(1);
	Function_160(1);
	Function_160(4);
	Function_328();
	bLocal_36 = CREATE_LAYOUT("HorseShoes_layout");
	Function_327();
	Function_318();
	Function_317(&iLocal_39);
	Function_317(&iLocal_42);
	Function_317(&iLocal_304);
	Function_317(&iLocal_45);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_59 + 4)[iVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS((*&Local_59 + 4)[iVar0], 1);
			CLEAR_LAST_HIT((*&Local_59 + 4)[iVar0]);
			REFERENCE_ACTOR((*&Local_59 + 4)[iVar0]);
		}
		iVar0++;
	}
	if (IS_VOLUME_VALID(Local_59.f_44))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_59.f_44);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_59.f_44);
	}
	fLocal_272 = GET_CURRENT_GAME_TIME();
	SET_AUTO_CONVERSATION_LOOK(GET_PLAYER_ACTOR(0), 0);
	if (IS_ACTOR_VALID((*&Local_59 + 4)[0]))
	{
		SET_AUTO_CONVERSATION_LOOK((*&Local_59 + 4)[0], 0);
	}
	iLocal_0 = 0;
	iLocal_322 = 1000;
	bLocal_273 = VDIST(*(&Local_59 + 16[03]), *(&Local_59 + 16[13]));
	if (Function_305())
	{
		Function_311();
		Function_309();
		Function_288(1, 1);
		Function_288(2, 1);
		Function_288(4, 1);
	}
	if (Function_213(4, 5))
	{
		Local_59.f_52 = 0;
		Function_288(16, 1);
	}
	Function_307(&Local_78);
	bLocal_35 = CREATE_CAMERA_IN_LAYOUT(bLocal_36, "HorseshoesCamera", 2);
	ALLOW_TUMBLEWEEDS(0);
	CLEAR_TUMBLEWEEDS();
	return;
}

void Function_307(int iParam0) //Position: 0x11A3F / 72255
{
	vector3 vVar0;
	
	iParam0->f_700 = 0;
	Function_308(iParam0 + 596, &Local_59 + 16);
	vVar0 = { StackVal, StackVal, *(&Local_59 + 16[03]) };
	vVar0.f_4 = (vVar0.y + 0,235f);
	(*iParam0 + 716)[0] = CREATE_VOLUME_IN_LAYOUT(bLocal_36, Function_51(), 3, vVar0, 0.0f, 0.0f, 0.0f, 0,012f, 0,22f, 0,012f);
	vVar0 = { StackVal, StackVal, *(&Local_59 + 16[13]) };
	vVar0.f_4 = (vVar0.y + 0,235f);
	(*iParam0 + 716)[1] = CREATE_VOLUME_IN_LAYOUT(bLocal_36, Function_51(), 3, vVar0, 0.0f, 0.0f, 0.0f, 0,012f, 0,22f, 0,012f);
	*(iParam0 + 740[03]) = { StackVal, StackVal, *(&Local_59 + 16[03]) };
	*(iParam0 + 740[13]) = { StackVal, StackVal, *(&Local_59 + 16[13]) };
	return;
}

void Function_308(var uParam0, var uParam1) //Position: 0x11B01 / 72449
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	vector3 vVar12;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam1[03], *uParam1[13], StackVal) };
	FIND_GROUND_INTERSECTION(uParam1[03], 10.0f, &vVar3, &uVar9);
	VNORMALIZE(&vVar0);
	VNORMALIZE(&uVar9);
	VCROSS(&uVar9, &vVar0, &vVar12);
	VNORMALIZE(&vVar12);
	VSCALE(&vVar12, 0,5f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, *uParam1[03], StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar9);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, *uParam1[13], StackVal) };
	vVar6 = { 0.0f, UNK_0x9C40E671(&vVar6), 0.0f };
	uParam0[06]->f_8 = CREATE_GRINGO_IN_LAYOUT(bLocal_36, Function_51(), "/content/scripting/gringo/SimpleGringo/horseshoe", vVar3, vVar6);
	VNORMALIZE(&vVar12);
	VSCALE(&vVar12, 1,508075f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, *uParam1[03], StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar9);
	*(uParam0[06] + 12) = { StackVal, StackVal, vVar3 };
	VCROSS(&vVar0, &uVar9, &vVar12);
	VNORMALIZE(&vVar12);
	VSCALE(&vVar12, 0,5f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, *uParam1[03], StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar9);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, *uParam1[13], StackVal) };
	vVar6 = { 0.0f, UNK_0x9C40E671(&vVar6), 0.0f };
	uParam0[16]->f_8 = CREATE_GRINGO_IN_LAYOUT(bLocal_36, Function_51(), "/content/scripting/gringo/SimpleGringo/horseshoe", vVar3, vVar6);
	VNORMALIZE(&vVar12);
	VSCALE(&vVar12, 1,508075f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, *uParam1[03], StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar9);
	*(uParam0[16] + 12) = { StackVal, StackVal, vVar3 };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam1[13], *uParam1[03], StackVal) };
	FIND_GROUND_INTERSECTION(uParam1[13], 10.0f, &vVar3, &uVar9);
	VNORMALIZE(&vVar0);
	VNORMALIZE(&uVar9);
	VCROSS(&uVar9, &vVar0, &vVar12);
	VNORMALIZE(&vVar12);
	VSCALE(&vVar12, 0,5f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, *uParam1[13], StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar9);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, *uParam1[03], StackVal) };
	vVar6 = { 0.0f, UNK_0x9C40E671(&vVar6), 0.0f };
	uParam0[26]->f_8 = CREATE_GRINGO_IN_LAYOUT(bLocal_36, Function_51(), "/content/scripting/gringo/SimpleGringo/horseshoe", vVar3, vVar6);
	VNORMALIZE(&vVar12);
	VSCALE(&vVar12, 1,508075f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, *uParam1[13], StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar9);
	*(uParam0[26] + 12) = { StackVal, StackVal, vVar3 };
	VCROSS(&vVar0, &uVar9, &vVar12);
	VNORMALIZE(&vVar12);
	VSCALE(&vVar12, 0,5f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, *uParam1[13], StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar9);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, *uParam1[03], StackVal) };
	vVar6 = { 0.0f, UNK_0x9C40E671(&vVar6), 0.0f };
	uParam0[36]->f_8 = CREATE_GRINGO_IN_LAYOUT(bLocal_36, Function_51(), "/content/scripting/gringo/SimpleGringo/horseshoe", vVar3, vVar6);
	VNORMALIZE(&vVar12);
	VSCALE(&vVar12, 1,508075f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar12, *uParam1[13], StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 50.0f, &vVar3, &uVar9);
	*(uParam0[36] + 12) = { StackVal, StackVal, vVar3 };
	return;
}

void Function_309() //Position: 0x11EC1 / 73409
{
	Function_310(1024, 1, 0);
	Function_310(1, 0, 0);
	return;
}

void Function_310(int iParam0, bool bParam1, int iParam2) //Position: 0x11ED5 / 73429
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_74(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_36(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_311() //Position: 0x11EFD / 73469
{
	Function_314(1);
	NET_SCRIPTMSG_REGISTER_HANDLER(25, 73665);
	NET_SCRIPTMSG_REGISTER_HANDLER(26, 73499);
	return;
}

void Function_312(int iParam0) //Position: 0x11F1B / 73499
{
	int iVar0;
	bool bVar6;
	
	iVar0 = 2;
	*(&iVar0 + 12) = 2;
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 6);
	Local_287 = { StackVal, StackVal, StackVal, StackVal, StackVal, iVar0 };
	Function_288(1024, 1);
	if (Global_30842[38])
	{
		bVar6 = false;
		while (bVar6 <= 2)
		{
			PRINTSTRING("ShoeId #");
			PRINTINT(bVar6);
			PRINTSTRING(": ");
			PRINTFLOAT((*&iVar0 + 12)[bVar6]);
			PRINTSTRING(": ");
			if (iVar0[bVar6])
			{
				PRINTSTRING("IS ringer!");
			}
			else
			{
				PRINTSTRING("NOT ringer.");
			}
			PRINTNL();
			bVar6++;
		}
	}
	return;
}

void Function_313(int iParam0) //Position: 0x11FC1 / 73665
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 7);
	vLocal_277 = { StackVal, StackVal, *(&iVar0 + 4) };
	vLocal_274 = { StackVal, StackVal, *(&iVar0 + 16) };
	iLocal_286 = iVar0;
	return;
}

void Function_314(bool bParam0) //Position: 0x11FEB / 73707
{
	struct<17> Var0;
	
	Function_241(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	if (bParam0)
	{
		Function_74(&Var0, 4);
	}
	Function_240(&Var0);
	Function_316();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 73782);
	return;
}

void Function_315(int iParam0) //Position: 0x12036 / 73782
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_241(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, 0);
		return;
	}
	Function_225(&iVar7);
	if (Function_239(&Var2))
	{
	}
	bVar8 = Function_223(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, 0);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_238(&Var2, 1);
	Function_240(&Var2);
	return;
}

void Function_316() //Position: 0x12139 / 74041
{
	Function_234();
	return;
}

void Function_317(var uParam0) //Position: 0x12142 / 74050
{
	if (!Function_260(uParam0))
	{
		Function_282(uParam0, 0.0f);
	}
	return;
}

void Function_318() //Position: 0x12157 / 74071
{
	Function_325(&bLocal_307, "$/fragments/p_gen_horseshoe03x", 0, 1);
	Function_325(&bLocal_307, "$/fragments/p_gen_horseshoe04x", 0, 1);
	Function_325(&bLocal_307, "nhorseshoe", 1, 0);
	Function_325(&bLocal_307, "nminigames", 10, 0);
	REQUEST_ANIM_SET("horseshoe_gped", 0);
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\HORSESHOES");
	while (((!Function_319(&bLocal_307) || !HAS_ANIM_SET_LOADED("horseshoe_gped")) || !REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\HORSESHOES")) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	return;
}

bool Function_319(int iParam0) //Position: 0x12268 / 74344
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_324();
	iVar1 = 0;
	if (!Function_175(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_323(iParam0[iVar03], 8);
		}
		else if (Function_322())
		{
			iVar1 = 1;
			Function_323(iParam0[iVar03], 8);
		}
		Function_323(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_175(iParam0[iVar03], 4))
		{
			if (!Function_175(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_175(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_175(iParam0[03], 8) || iVar1));
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
				Function_323(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_175(iParam0[iVar03], 4))
		{
			if (!Function_175(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
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
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_323(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_323(iParam0[iVar03], 2);
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
	Function_320();
	return 1;
}

void Function_320() //Position: 0x125E3 / 75235
{
	if (!Function_321(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_321(int iParam0) //Position: 0x12623 / 75299
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_322() //Position: 0x1263F / 75327
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

void Function_323(var uParam0, int iParam1) //Position: 0x1266A / 75370
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_324() //Position: 0x1267B / 75387
{
	if (!Function_321(128))
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

var Function_325(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x126BD / 75453
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_326(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_323(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_326(var uParam0, int iParam1, int iParam2) //Position: 0x126F5 / 75509
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_175(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_323(uParam0[iVar03], 4);
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

void Function_327() //Position: 0x127B9 / 75705
{
	return;
}

void Function_328() //Position: 0x127BF / 75711
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_177();
	Function_329();
	if (!Global_3384)
	{
		Global_3384 = 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_329() //Position: 0x127EF / 75759
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_330(int iParam0) //Position: 0x12803 / 75779
{
	Function_331(&Global_28842, iParam0);
	return;
}

void Function_331(var uParam0, var uParam1) //Position: 0x12811 / 75793
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

