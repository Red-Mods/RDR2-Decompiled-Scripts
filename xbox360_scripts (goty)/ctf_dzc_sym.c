//Decompiled with MagicRDR v1.0
//Function Count : 187
//Statics Count : 391
//Natives Count : 195
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
	int iLocal_10 = 0;
	float fLocal_11 = 0.0f;
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_166 = 10;
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
	var uLocal_232 = 25;
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
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 5;
	var uLocal_364 = -1;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = -1;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = -1;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = -1;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = -1;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	bool bLocal_390 = false;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_176();
	if (Function_175())
	{
		Function_174();
	}
	else
	{
		if (Function_136())
		{
			Function_135(1);
		}
		else
		{
			Function_134(1);
		}
		while (!Function_133() && !IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
		NET_OBJECT_REPLICATION_MODE_START(15, 4);
		NET_OBJECT_REPLICATION_MODE_END(15);
		vVar0 = { -608.713f, 12.917f, 3831.282f };
		STREAMING_LOAD_BOUNDS(vVar0, 100.0f, 1);
		bVar3 = CREATE_WORLD_SECTOR(Local_51, "casaMadrugada");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar3))
		{
			WAIT(0);
		}
		iVar4 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_132(64))
			{
				iVar4 = (iVar4 - 1);
				if (iVar4 <= 0)
				{
					Function_131(64, 0);
					Function_129();
					iVar4 = 10;
				}
			}
			Function_113(&iLocal_361, 0.1f, 0.7f, 12, 0.0f, 1.0f, 0.0f, 1.0f);
			Function_100(&uLocal_229);
			Function_24();
			WAIT(0);
		}
		Function_22(512);
		Function_18();
		Function_17(Global_83864.f_1284, 0, 1);
	}
	Function_15(&uLocal_229);
	STREAMING_UNLOAD_BOUNDS();
	DISABLE_CHILD_SECTOR("mp_cas_base01x");
	SET_DUST_LEVEL(1);
	SET_DUST_LEVEL_MID(1);
	SET_DUST_LEVEL_FAR(1);
	Function_6();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x131 / 305
{
	Function_2(&Local_51 + 4);
	RELEASE_LAYOUT_REF(Local_51);
	return;
}

void Function_2(int iParam0) //Position: 0x143 / 323
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x169 / 361
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x297 / 663
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x2B1 / 689
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x2CE / 718
{
	Function_14();
	Function_2(&bLocal_39);
	Function_7();
	return;
}

void Function_7() //Position: 0x2DF / 735
{
	Function_8();
	return;
}

void Function_8() //Position: 0x2E8 / 744
{
	if (Function_12(4194304))
	{
		Function_9(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_12(8388608))
	{
		Function_9(8388608, 0, 1);
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x3F1 / 1009
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_11(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_10(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x419 / 1049
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x42C / 1068
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(bool bParam0) //Position: 0x43B / 1083
{
	return Function_13(Global_76905.f_132, bParam0);
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x44C / 1100
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x459 / 1113
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15(int iParam0) //Position: 0x498 / 1176
{
	Function_131(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x4A9 / 1193
{
	if (iParam0->f_520 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_520, 0);
		iParam0->f_520 = "";
	}
	return;
}

void Function_17(var uParam0, bool bParam1, bool bParam2) //Position: 0x4C9 / 1225
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_11(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_11(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_18() //Position: 0x4F6 / 1270
{
	Function_19(Function_21());
	return;
}

void Function_19(int iParam0) //Position: 0x502 / 1282
{
	if (!Function_20(iParam0))
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

bool Function_20(int iParam0) //Position: 0x52F / 1327
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_21() //Position: 0x546 / 1350
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_22(int iParam0) //Position: 0x560 / 1376
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x599 / 1433
{
	Function_10(uParam0, iParam1);
	return;
}

void Function_24() //Position: 0x5A6 / 1446
{
	Function_98();
	if (Function_97(1, 1))
	{
		Function_81(StackVal, StackVal, 7570, vLocal_48, 1, 7457);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_76(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_27(4858, 3651);
		Function_25();
	}
	return;
}

void Function_25() //Position: 0x5F1 / 1521
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_26(&Local_12);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x60D / 1549
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	return;
}

void Function_27(int iParam0, int iParam1) //Position: 0x633 / 1587
{
	Function_28(iParam0, iParam1, 3644);
	return;
}

void Function_28(var uParam0, var uParam1, int iParam2) //Position: 0x644 / 1604
{
	if (Function_12(0x4000000))
	{
		Function_37();
		Function_9(0x4000000, 0, 1);
	}
	if (Function_12(0x10000000))
	{
		Function_37();
		Function_9(0x10000000, 0, 1);
	}
	if (Function_12(2) != Function_12(0x2000000))
	{
		Function_37();
		Function_9(0x2000000, Function_12(2), 1);
	}
	if (Function_36())
	{
		Function_35(!Function_12(16));
	}
	if (Function_12(16))
	{
		Function_29(&uParam0, &uParam1, &iParam2);
		if (Function_12(8192))
		{
			if (!Function_12(4194304))
			{
				Function_9(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_12(8388608))
			{
				Function_9(8388608, 1, 1);
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
			Function_8();
		}
		Function_9(16384, 1, 1);
	}
	else if (!Function_12(32))
	{
		Function_8();
	}
	Function_9(32768, 0, 1);
	return;
}

void Function_29(var uParam0, var uParam1, int iParam2) //Position: 0x7DD / 2013
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_9(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_12(0x40000000);
	bVar3 = !Function_12(131072);
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
				if (Function_30(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_12(4))
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
			if (Function_30(bVar1, (4294966296 - bVar1), 1))
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

bool Function_30(bool bParam0, int iParam1, int iParam2) //Position: 0x955 / 2389
{
	var uVar0;
	
	return Function_31(bParam0, iParam1, &uVar0, iParam2);
}

int Function_31(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x966 / 2406
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

bool Function_32(bool bParam0, int iParam1, bool bParam2) //Position: 0x9CB / 2507
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_97(iParam1, bParam2);
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

var Function_33(int iParam0) //Position: 0xA4C / 2636
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

bool Function_34(bool bParam0) //Position: 0xD65 / 3429
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

void Function_35(bool bParam0) //Position: 0xE06 / 3590
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_9(16384, 0, 1);
	return;
}

bool Function_36() //Position: 0xE20 / 3616
{
	return Function_12(32768);
}

void Function_37() //Position: 0xE2D / 3629
{
	Function_9(32768, 1, 0);
	return;
}

int Function_38() //Position: 0xE3C / 3644
{
	return 1;
}

int Function_39(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xE43 / 3651
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_56(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_55(bParam0);
	bVar2 = Function_54(bParam0);
	bVar3 = Function_51(bParam0);
	iVar4 = Function_50(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_30(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_48(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_12(4))
	{
		if (Function_45(bParam0, 1, 1))
		{
			if (Function_42(bParam0))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
				bVar5 = " <SWAG_R_RET>";
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
				bVar5 = " <SWAG_B_RET>";
			}
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, bVar5);
		}
	}
	else
	{
		Function_41(bVar0, bParam0);
	}
	if (Function_42(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_36() && Function_40())
	{
	}
	return 0;
}

bool Function_40() //Position: 0xF46 / 3910
{
	return (Function_12(4096) || Function_12(4));
}

void Function_41(bool bParam0, bool bParam1) //Position: 0xF57 / 3927
{
	if (Function_12(4))
	{
		if (Function_32(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

bool Function_42(bool bParam0) //Position: 0xF8A / 3978
{
	if (Function_44(bParam0, 1, 0) != 4294967295 && Function_43() != 4294967295)
	{
		return 0;
	}
	return Function_44(bParam0, 1, 0) != Function_43();
}

int Function_43() //Position: 0xFB2 / 4018
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_44(GET_LOCAL_SLOT(), 1, 0);
}

int Function_44(bool bParam0, bool bParam1, bool bParam2) //Position: 0xFC9 / 4041
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

bool Function_45(bool bParam0, int iParam1, bool bParam2) //Position: 0x100D / 4109
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_47(iParam1, bParam2);
	}
	if (!Function_34(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_46(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_128 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_46(int iParam0) //Position: 0x108E / 4238
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HAD_FLAG";
			break;
		
		case 0x00000002:
			return "nFRD_SPOON";
			break;
		
		case 0x00000004:
			return "FRD_IN_VOL";
			break;
		
		case 0x00000008:
			return "MP_TRANSIENT_BIT_FRD_IN_SPOONHOLDER_POSSE";
			break;
		
		case 0x00100000:
			return "IN_AIR";
			break;
		
		case 0x00200000:
			return "MOUNTED";
			break;
		
		case 0x00400000:
			return "KILLED BY BLINDFIRE";
			break;
		
		case 0x00800000:
			return "KILLED IN COVER";
			break;
	}
	return "UNKNOWN";
}

var Function_47(int iParam0, bool bParam1) //Position: 0x1180 / 4480
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_48(int iParam0, bool bParam1) //Position: 0x11A0 / 4512
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_49(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_49(int iParam0) //Position: 0x120E / 4622
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_50(int iParam0, int iParam1, int iParam2) //Position: 0x1227 / 4647
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_51(int iParam0) //Position: 0x123C / 4668
{
	return Function_52(0, iParam0);
}

int Function_52(int iParam0, bool bParam1) //Position: 0x1248 / 4680
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_53(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_53(int iParam0) //Position: 0x12AF / 4783
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_54(bool bParam0) //Position: 0x12BF / 4799
{
	return Function_48(12, bParam0);
}

int Function_55(int iParam0) //Position: 0x12CC / 4812
{
	return Function_48(11, iParam0);
}

void Function_56(bool bParam0, int iParam1, char* cParam2) //Position: 0x12D9 / 4825
{
	if (bParam0)
	{
		if (Function_36())
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

int Function_57() //Position: 0x12FA / 4858
{
	if (!Function_71(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_70();
	Function_58();
	return 1;
}

void Function_58() //Position: 0x1396 / 5014
{
	if (Function_67())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_66())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_59(0, 0);
		Function_59(1, 0);
	}
	return;
}

void Function_59(bool bParam0, bool bParam1) //Position: 0x13C1 / 5057
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_43())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_65(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_60(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_60(int iParam0, int iParam1, bool bParam2) //Position: 0x1460 / 5216
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_36())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_61(iParam1, 0) };
				break;
			
			default:
				break;
		}
		if (iParam0 == 2)
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&Var1), 5);
		}
		else
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&Var1), 2);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(iParam0);
		if (Function_40())
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			if (iParam0 == 1)
			{
			}
			else if (iParam0 == 2)
			{
			}
		}
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, bParam2);
	return;
}

struct<16> Function_61(var uParam0, var uParam1) //Position: 0x1553 / 5459
{
	return StackVal, StackVal, StackVal, Function_62(Function_63(uParam0), uParam1);
}

struct<16> Function_62(bool bParam0, bool bParam1) //Position: 0x1565 / 5477
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Team_", 16);
	if (bParam1)
	{
		strcpy(&cVar0, "TeamDef_", 16);
	}
	stradd(&cVar0, I2STR(bParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_63(int iParam0) //Position: 0x159A / 5530
{
	if (!Function_64())
	{
		return 0;
	}
	return StackVal;
}

bool Function_64() //Position: 0x15B3 / 5555
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_65(int iParam0) //Position: 0x15C0 / 5568
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_66() //Position: 0x15DC / 5596
{
	return Function_43() == 4294967295;
}

bool Function_67() //Position: 0x15E7 / 5607
{
	return Function_68(2);
}

int Function_68(int iParam0) //Position: 0x15F1 / 5617
{
	return Function_69(&Global_79349, iParam0);
}

int Function_69(var uParam0, bool bParam1) //Position: 0x1600 / 5632
{
	return Function_13(uParam0->f_44, bParam1);
}

void Function_70() //Position: 0x160F / 5647
{
	if (Function_12(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_9(8192, 1, 1);
	}
	else if (Function_12(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_9(8192, 1, 1);
	}
	else
	{
		Function_9(8192, 0, 1);
	}
	return;
}

bool Function_71(bool bParam0) //Position: 0x164C / 5708
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_36() || Function_75(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_36())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_72(Function_36());
	return 1;
}

void Function_72(bool bParam0) //Position: 0x16CD / 5837
{
	if (bParam0 || Function_12(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_12(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_12(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_12(1048576) || Function_12(4)) || Function_97(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_9(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_73(int iParam0) //Position: 0x1756 / 5974
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_74(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x176A / 5994
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

int Function_75(bool bParam0, bool bParam1) //Position: 0x17AF / 6063
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

void Function_76(vector3 vParam0, float fParam3) //Position: 0x17E3 / 6115
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_80(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_80(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_77(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_77(bool bParam0) //Position: 0x1896 / 6294
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(bParam0, "shootBabyShoot");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return "";
	}
	return Function_78(bVar0);
}

int Function_78(bool bParam0) //Position: 0x18D1 / 6353
{
	bool bVar0;
	
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (!IS_BLIP_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bParam0), "cannon"))
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 523, 0f, 2, 0);
		}
		else
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 524, 0f, 2, 0);
		}
	}
	Function_79(bVar0);
	return bVar0;
}

void Function_79(bool bParam0) //Position: 0x191F / 6431
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_80() //Position: 0x1932 / 6450
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_81(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1961 / 6497
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_82(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7356, 1, 125, 0, 0, 0);
	Function_82(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_82(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x19E4 / 6628
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_83(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_83(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1A2F / 6703
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0.01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2.25f || fVar4 <= 625.0f)
		{
			Function_26(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_11;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && uParam12)
		{
			fVar5 = 14.0f;
		}
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3.14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0.1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3.14159f * 0.5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3.14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_26(iParam0);
				}
			}
			else if ((iParam0->f_36 - fVar9) <= 0.0f)
			{
				iParam0->f_32 = 0;
				iParam0->f_44 = fParam4;
				if (iParam0->f_36 < fVar9)
				{
					bVar10 = true;
				}
			}
		}
		if (FABS((iParam0->f_36 - fVar9)) > 0.0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0.01f, -0.01f, -0.01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(uParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(uParam14);
			Call_Loc(uParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(uParam14);
				Call_Loc(uParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			fVar14 = Function_84(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, fVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, fVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_84(float fParam0) //Position: 0x1CAE / 7342
{
	return (fParam0 * 57.29578f);
}

var Function_85(int iParam0, var uParam1) //Position: 0x1CBC / 7356
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_86(int iParam0, var uParam1) //Position: 0x1D21 / 7457
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_sym_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_87() //Position: 0x1D92 / 7570
{
	int iVar0;
	
	iVar0 = Function_93(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_88(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_88(bool bParam0, int iParam1) //Position: 0x1DBF / 7615
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	GET_OBJECT_RELATIVE_POSITION(bParam0, 0.2f, 0.0f, 0.51f, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(bParam0, 0.0f, 0.0f, 0.0f, &vVar3);
	vVar9 = { StackVal, StackVal, vVar0 };
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, &vVar0, &uVar6))
	{
		vVar0 = { StackVal, StackVal, vVar9 };
	}
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_92(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_91((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_91((*iParam1)[iVar202], &iVar21))
		{
			if (Function_89((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
			{
				GET_OBJECT_RELATIVE_POSITION(bVar12, vVar13, &vVar0);
				GET_OBJECT_RELATIVE_ORIENTATION(bVar12, vVar16, &vVar3);
				CREATE_PROP_IN_LAYOUT(bVar12, "", GET_WEAPON_FRAGMENT_NAME((*iParam1)[iVar202]), vVar0, vVar3, 1);
				iVar22++;
			}
		}
		iVar20++;
	}
	return bVar12;
}

bool Function_89(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1ECE / 7886
{
	float fVar0;
	
	if (!Function_90(bParam0))
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		iParam4 = 3;
		bParam3 = true;
	}
	fVar0 = (((TO_FLOAT(bParam3) / TO_FLOAT((iParam4 - 1))) * (0.535f - -0.46f)) + -0.46f);
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
		case default:
			*uParam1 = { fVar0, 0.333f, -0.055f };
			*uParam2 = { (-30.0f + RAND_FLOAT_RANGE(-15.0f, 15.0f)), 0.0f, 90.0f };
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*uParam1 = { fVar0, 0.315f, 0.006f };
			*uParam2 = { (-10.0f + RAND_FLOAT_RANGE(-7.5f, 7.5f)), -68.0f, (90.0f + RAND_FLOAT_RANGE(-3.0f, 3.0f)) };
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*uParam1 = { fVar0, 0.333f, -0.055f };
			*uParam2 = { (-60.0f + RAND_FLOAT_RANGE(-10.0f, 10.0f)), 0.0f, -90.0f };
			return 1;
			break;
	}
	return 0;
}

bool Function_90(int iParam0) //Position: 0x1FF5 / 8181
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_91(bool bParam0, int iParam1) //Position: 0x2007 / 8199
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			*iParam1 = 0;
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*iParam1 = 1;
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*iParam1 = 2;
			return 1;
			break;
	}
	return 0;
}

var Function_92() //Position: 0x2063 / 8291
{
	int iVar0;
	
	return iVar0;
}

var Function_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x206B / 8299
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_95(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_91((*uParam3)[iVar12], &iVar2))
		{
			iVar10[iVar2]++;
			if (iVar10[iVar2] == 2)
			{
				iVar10[iVar2] = 3;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_91((*uParam3)[iVar12], &iVar2))
		{
			if (Function_94((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
			{
				bVar9 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar6, Vector("", bVar0, StackVal) + Vector(*uParam1, vVar3, GET_WEAPON_FRAGMENT_NAME((*uParam3)[iVar12])), StackVal) + Vector(0.0f, uParam2, 0.0f), 1);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar9, 0);
				if (IS_OBJECT_VALID(bVar9))
				{
					ATTACH_OBJECTS(bVar9, bVar0, "", vVar3, vVar6, 4294967295);
				}
				iVar10[iVar2] = (iVar10[iVar2] - 1);
			}
		}
		iVar1++;
	}
	return bVar0;
}

bool Function_94(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2159 / 8537
{
	if (!Function_90(bParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			if (iParam3 == 1)
			{
				*uParam1 = { 0.08916403f, 0.8989502f, 0.07509536f };
				*uParam2 = { -60.09727f, -101.49f, 47.60939f };
			}
			else
			{
				*uParam1 = { 0.02631292f, 0.8451666f, -0.1088216f };
				*uParam2 = { 81.3988f, -1.648355f, -169.4713f };
			}
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			if (iParam3 == 1)
			{
				*uParam1 = { 0.3568475f, 1.28952f, -0.22761f };
				*uParam2 = { -124.3062f, 85.737f, -40.141f };
			}
			else if (iParam3 == 2)
			{
				*uParam1 = { 0.06225565f, 1.28952f, -0.22761f };
				*uParam2 = { -219.3702f, -86.19345f, 135.0233f };
			}
			else
			{
				*uParam1 = { 0.3401467f, 1.258268f, -0.22761f };
				*uParam2 = { -91.1388f, 85.737f, -40.141f };
			}
			return 1;
			break;
		
		case 0x00000030:
			*uParam1 = { 0.4015671f, 0.9808789f, -0.01462308f };
			*uParam2 = { -122.852f, 27.893f, 5.454f };
			return 1;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0.3715671f, 0.8808789f, -0.1146231f };
			*uParam2 = { 57.148f, 27.893f, 5.454f };
			return 1;
			break;
	}
	return 0;
}

var Function_95(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x22EA / 8938
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar3 = { StackVal, StackVal, *iParam1 };
	if (bParam3)
	{
		if (!FIND_GROUND_INTERSECTION(&vVar3, 2.0f, iParam1, &uVar0))
		{
			*iParam1 = { StackVal, StackVal, vVar3 };
		}
	}
	else
	{
		*iParam1 = { StackVal, StackVal, vVar3 };
	}
	vVar6 = { 0.2f, 0.0f, -0.065f };
	ROTATE_VECTOR_XZ(&vVar6, bParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_96()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_96() //Position: 0x2356 / 9046
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_97(bool bParam0, bool bParam1) //Position: 0x237D / 9085
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_98() //Position: 0x239D / 9117
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_46)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000009:
						Function_99("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_99("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_99("CTF_mul_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_14();
	}
	return;
}

void Function_99(char* cParam0, int iParam1) //Position: 0x2432 / 9266
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

int Function_100(int iParam0) //Position: 0x24C9 / 9417
{
	int iVar0;
	
	if (!Function_111(*iParam0) || (Function_132(64) && Function_107()))
	{
		iParam0->f_4 = 0;
		Function_16(iParam0);
		if (!Function_111(*iParam0))
		{
		}
		if (Function_132(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_111(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 520);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_516)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_104(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_13((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_10(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_13((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_516)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_516)
				{
					if (!Function_13((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_13((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_103((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_102((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_516)
			{
				iParam0->f_524 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_524) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_16(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_101(3, iParam0->f_516))
			{
				if (iParam0->f_516 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_516);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_13((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_13((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_11(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_13((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_13((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_13((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
							}
						}
						else if (StackVal || !IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_OPENING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
						{
							CLOSE_DOOR((iParam0 + 12[StackVal5])->f_12, 1.0f);
						}
					}
				}
				iVar0++;
			}
			break;
	}
	return 1;
}

int Function_101(int iParam0, int iParam1) //Position: 0x2850 / 10320
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_102(bool bParam0, bool bParam1) //Position: 0x2862 / 10338
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

void Function_103(bool bParam0, bool bParam1) //Position: 0x28B6 / 10422
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

int Function_104(var uParam0, var uParam1, int iParam2) //Position: 0x2907 / 10503
{
	return Function_105(Global_29006, uParam0, uParam1, iParam2);
}

int Function_105(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2919 / 10521
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_106(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

bool Function_106(int iParam0) //Position: 0x29B5 / 10677
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_107() //Position: 0x29CB / 10699
{
	return !Function_108();
}

bool Function_108() //Position: 0x29D5 / 10709
{
	if (Function_110())
	{
		return (Function_109() != 1 || Function_109() != 0);
	}
	return 0;
}

int Function_109() //Position: 0x29EE / 10734
{
	return Global_79349.f_16;
}

bool Function_110() //Position: 0x29FA / 10746
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_111(int iParam0) //Position: 0x2A03 / 10755
{
	if (!Function_106(iParam0))
	{
		return 1;
	}
	return Function_112(&(Global_29008[iParam0]), 4);
}

int Function_112(var uParam0, bool bParam1) //Position: 0x2A1F / 10783
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_113(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2A3B / 10811
{
	float fVar0;
	
	if (Function_128())
	{
		if (Function_127(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_123(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_117((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_114((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_117((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_114((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_114(int iParam0, var uParam1, int iParam2) //Position: 0x2ADE / 10974
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_116(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_115(iParam2);
	}
	return;
}

void Function_115(int iParam0) //Position: 0x2B03 / 11011
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_116(int iParam0) //Position: 0x2B18 / 11032
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_117(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2B2D / 11053
{
	int iVar0;
	bool bVar1;
	
	Function_122(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_121(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_118(StackVal, bVar1, bParam4);
		}
	}
}

void Function_118(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B9F / 11167
{
	int iVar0;
	
	Function_122(iParam0);
	Function_120(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, bParam1);
	Function_119();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_119() //Position: 0x2D18 / 11544
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_120(bool bParam0) //Position: 0x2D24 / 11556
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

void Function_121(int iParam0, int iParam1) //Position: 0x2D6A / 11626
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_122(iParam0);
	Function_120(iVar0);
	PRINTNL();
	Function_118(iParam0, iVar0, iParam1);
	return;
}

void Function_122(int iParam0) //Position: 0x2D8F / 11663
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

float Function_123(int iParam0) //Position: 0x2DD5 / 11733
{
	return -Function_124(iParam0);
}

float Function_124(int iParam0) //Position: 0x2DE1 / 11745
{
	if (Function_127(iParam0))
	{
		if (Function_126(iParam0))
		{
			return StackVal;
		}
		Function_125();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_125() //Position: 0x2EB2 / 11954
{
	if (!Function_128())
	{
	}
	return;
}

bool Function_126(int iParam0) //Position: 0x2EBF / 11967
{
	return Function_13(*iParam0, 2);
}

bool Function_127(int iParam0) //Position: 0x2ECC / 11980
{
	return Function_13(*iParam0, 1);
}

bool Function_128() //Position: 0x2ED9 / 11993
{
	return NET_IS_IN_SESSION();
}

void Function_129() //Position: 0x2EE2 / 12002
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_92());
	Function_130(bVar0, "gatling", Local_51.f_200);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_130(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2F08 / 12040
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_92(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, bParam2, bParam1, 1);
	bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_OBJECTSET(bVar1);
	DESTROY_ITERATOR(bVar2);
	return;
}

void Function_131(int iParam0, bool bParam1) //Position: 0x2F61 / 12129
{
	if (bParam1)
	{
		Function_11(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_10(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_132(int iParam0) //Position: 0x2F89 / 12169
{
	return Function_13(StackVal, iParam0);
}

bool Function_133() //Position: 0x2F9C / 12188
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bLocal_390))
	{
		bLocal_390 = CREATE_WORLD_SECTOR(Local_51, "elMatadero");
	}
	if (!IS_OBJECT_VALID(bLocal_390))
	{
		LOG_ERROR("Failed to create the elMatadera world sector");
		return 1;
	}
	if (!IS_WORLD_SECTOR_LOADED(bLocal_390))
	{
		return 0;
	}
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-641.81f, 25.52f, 3883.93f, 10.0f, "cannon", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		DECOR_SET_FLOAT(GET_OBJECT_FROM_PHYSINST(bVar0), "fRestrictRotation", 250.0f);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_134(bool bParam0) //Position: 0x305E / 12382
{
	Function_131(16, bParam0);
	return;
}

void Function_135(var uParam0) //Position: 0x306B / 12395
{
	Function_131(8, uParam0);
	return;
}

bool Function_136() //Position: 0x3078 / 12408
{
	Function_173(&iLocal_361, 0, 9, 30, 1, 1, 0);
	Function_173(&iLocal_361, 1, 9, 30, 2, 2, 2);
	Function_173(&iLocal_361, 2, 12, 0, 3, 3, 3);
	Function_173(&iLocal_361, 3, 12, 0, 0, 0, 1);
	Function_173(&iLocal_361, 4, 23, 0, 1, 0, 1);
	Function_170(&iLocal_361);
	SET_DUST_LEVEL(2);
	SET_DUST_LEVEL_MID(2);
	SET_DUST_LEVEL_FAR(2);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	ENABLE_CHILD_SECTOR("mp_cas_base01x");
	Function_168();
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_167("MEX_SONG_06", "MEX_SONG_07", 0, 58, 58, 1);
	Function_165(512);
	Function_164(Global_83864.f_1284);
	Function_19(977);
	Function_17(Global_83864.f_1284, 0, 1);
	if (!Function_160(Local_51))
	{
		return 0;
	}
	Function_158(Local_51.f_704);
	Function_151(&Global_83591 + 276, 0);
	Function_149(&Global_83591, 1, 22, 1, 1);
	Function_149(&Global_83591, 2, 5, 10, 1);
	Function_149(&Global_83591, 3, 10, 10, 1);
	Function_149(&Global_83591, 4, 23, 4, 1);
	Function_144(&Global_83591, 1, 20, 5, 1);
	Function_143(&Global_83591);
	Function_142(&Global_83591 + 276, 4);
	Function_141(0, 8);
	Function_141(1, 1);
	if (!Function_137(&uLocal_229))
	{
		return 0;
	}
	return 1;
}

bool Function_137(int iParam0) //Position: 0x31BF / 12735
{
	if (!Function_140(iParam0, Global_30707[0]) && !Function_140(iParam0, Global_30707[2]))
	{
		return 0;
	}
	Function_138(iParam0, "elMatadero", "slaughterHouse01", 1);
	Function_138(iParam0, "elMatadero", "slaughterHouse01", 2);
	Function_138(iParam0, "elMatadero", "slaughterHouse01", 3);
	Function_138(iParam0, "elMatadero", "guardHouse01", 1);
	Function_138(iParam0, "elMatadero", "guardHouse01", 2);
	Function_138(iParam0, "elMatadero", "guardHouse01", 3);
	Function_138(iParam0, "elMatadero", "smokeHouse01", 1);
	Function_138(iParam0, "elMatadero", "residence01", 1);
	Function_138(iParam0, "elMatadero", "residence01", 2);
	Function_138(iParam0, "elMatadero", "residence01", 3);
	Function_138(iParam0, "casaMadrugada", "trainstation01", 1);
	Function_138(iParam0, "casaMadrugada", "ncantina01", 1);
	Function_138(iParam0, "casaMadrugada", "ncantina01", 2);
	Function_138(iParam0, "casaMadrugada", "ncantina01", 3);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 1);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 2);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 3);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 4);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 5);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 6);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 7);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 8);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 9);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 10);
	Function_138(iParam0, "casaMadrugada", "whorehouse01", 11);
	return 1;
}

int Function_138(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0x3582 / 13698
{
	int iVar0;
	
	iVar0 = iParam0->f_516;
	if (!Function_139(iParam0, uParam1, iParam2, iParam3))
	{
		return 0;
	}
	Function_11(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_139(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x35B4 / 13748
{
	if (iParam0->f_516 > 25)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_5165] = uParam1;
	(iParam0 + 12[iParam0->f_5165])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_5165])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_5165])->f_16 = 0;
	iParam0->f_516++;
	return 1;
}

bool Function_140(int iParam0, int iParam1) //Position: 0x3610 / 13840
{
	int iVar0;
	
	if (!Function_106(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_516 = 0;
	iParam0->f_4 = 0;
	iParam0->f_520 = "";
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		(*iParam0 + 12)[iVar05] = "";
		(iParam0 + 12[iVar05])->f_4 = "";
		(iParam0 + 12[iVar05])->f_8 = 0;
		(iParam0 + 12[iVar05])->f_16 = 0;
		(iParam0 + 12[iVar05])->f_12 = "";
		iVar0++;
	}
	return 1;
}

void Function_141(int iParam0, int iParam1) //Position: 0x3686 / 13958
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_142(int iParam0, int iParam1) //Position: 0x3694 / 13972
{
	(iParam0 + 228)->f_220 = 0;
	Function_11(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_143(int iParam0) //Position: 0x36AC / 13996
{
	iParam0->f_844 = 0;
	return;
}

void Function_144(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x36B8 / 14008
{
	Function_145(iParam0 + 276, uParam1, uParam2, uParam3, uParam4);
}

void Function_145(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x36D0 / 14032
{
	Function_146(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_146(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x36E7 / 14055
{
	if (!Function_148(iParam1))
	{
		return;
	}
	Function_147(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_147(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x370A / 14090
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

bool Function_148(int iParam0) //Position: 0x3734 / 14132
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3744 / 14148
{
	Function_150(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_150(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x375C / 14172
{
	Function_146(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_151(int iParam0, bool bParam1) //Position: 0x3771 / 14193
{
	Function_155(iParam0);
	Function_155(iParam0 + 228);
	if (bParam1)
	{
		Function_152(iParam0);
	}
	return;
}

void Function_152(int iParam0) //Position: 0x378D / 14221
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_153(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_153(var uParam0, int iParam1) //Position: 0x37AD / 14253
{
	Function_154(uParam0, iParam1, 0);
	return;
}

void Function_154(int iParam0, int iParam1, int iParam2) //Position: 0x37BB / 14267
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_155(int iParam0) //Position: 0x37CC / 14284
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_157(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_156(iParam0, 0.0f);
	return;
}

void Function_156(var uParam0, int iParam1) //Position: 0x37F9 / 14329
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_157(int iParam0) //Position: 0x3805 / 14341
{
	Function_147(iParam0, 4294967295, 0, 1);
	return;
}

void Function_158(bool bParam0) //Position: 0x3813 / 14355
{
	DECOR_SET_OBJECT(Function_159(), "LobbyGringoSet", bParam0);
	return;
}

var Function_159() //Position: 0x3833 / 14387
{
	return Global_83591.f_140;
}

bool Function_160(int iParam0) //Position: 0x383F / 14399
{
	Function_163(iParam0);
	if (Function_162())
	{
		Function_142(&Global_83591 + 276, 2);
	}
	Function_161();
	vLocal_48 = { StackVal, StackVal, Function_161() };
	return 1;
}

vector3 Function_161() //Position: 0x3863 / 14435
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_159();
	vVar1 = { StackVal, StackVal, *(&Global_79349 + 28) };
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(bVar0, "LobbyCenter");
		if (IS_OBJECT_VALID(bVar4))
		{
			GET_OBJECT_POSITION(bVar4, &vVar1);
		}
	}
	return StackVal, StackVal, vVar1;
}

bool Function_162() //Position: 0x38AB / 14507
{
	return Function_13(Global_79962, 1024);
}

void Function_163(int iParam0) //Position: 0x38BB / 14523
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_164(int iParam0) //Position: 0x38C9 / 14537
{
	if (!Function_20(iParam0))
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

void Function_165(int iParam0) //Position: 0x38F8 / 14584
{
	Function_166(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_166(var uParam0, bool bParam1) //Position: 0x3951 / 14673
{
	Function_11(uParam0, bParam1);
	return;
}

void Function_167(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x395E / 14686
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

void Function_168() //Position: 0x39EE / 14830
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	Function_169(4, 1);
	uVar0 = uVar0;
	Local_51 = CREATE_LAYOUT("CTF_DZC_layout");
	Local_51.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_51, "playablespace", 2, -617.5648f, 28.4573f, 3833.083f, 0.0f, -26.32331f, 0.0f, 611.0134f, 49.50933f, 592.3306f);
	Local_51.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_A", 3, -796.4401f, 12.80098f, 3747.994f, 0.0f, 44.09363f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_B", 3, -453.2567f, 21.33373f, 3941.652f, 0.0f, -101.6972f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A0", 3, -778.8234f, 13.05098f, 3704.0f, 0.2847055f, -44.6153f, 2.801429f, 1.0f, 1.0f, 1.0f);
	Local_51.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A1", 3, -824.0f, 13.05098f, 3753.754f, 0.0f, 134.1311f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A2", 3, -834.6607f, 13.11084f, 3716.937f, 0.0f, 43.9351f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A3", 3, -794.0973f, 13.05098f, 3761.903f, 0.0f, 120.3063f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A4", 3, -765.4582f, 13.05097f, 3713.458f, 0.0f, 5.039476f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A5", 3, -815.9636f, 13.06158f, 3796.285f, 0.0f, 44.94114f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A6", 3, -733.9186f, 18.22621f, 3717.919f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A7", 3, -806.2693f, 13.05098f, 3780.0f, 0.0f, 134.2373f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A8", 3, -560.0f, 14.0549f, 3708.0f, 0.0f, 2.672024f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A9", 3, -640.928f, 24.39342f, 3793.405f, 0.0f, 134.2373f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A10", 3, -659.1869f, 22.73811f, 3832.813f, 0.0f, 3.145478f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A11", 3, -652.408f, 16.65625f, 3883.739f, 0.0f, 170.6119f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B0", 3, -473.9818f, 20.83074f, 3925.982f, 0.0f, -116.9921f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B1", 3, -453.7659f, 21.64307f, 3885.766f, 0.0f, -82.3661f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B2", 3, -473.8809f, 20.68749f, 3966.119f, 0.0f, -131.74f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B3", 3, -406.3137f, 24.13407f, 3905.224f, 0.0f, -38.13572f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B4", 3, -429.8186f, 22.08627f, 3921.819f, 0.0f, -141.2841f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B5", 3, -437.7249f, 22.08627f, 3941.725f, 0.0f, -113.8501f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B6", 3, -416.0f, 24.09412f, 3950.689f, 0.0f, -121.0021f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B7", 3, -471.122f, 20.58556f, 3916.902f, 0.0f, -90.65293f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B8", 3, -611.8307f, 24.71564f, 3879.302f, 0.0f, -78.95173f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B9", 3, -572.7714f, 28.29581f, 3841.551f, 0.0f, -90.65293f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B10", 3, -560.9664f, 19.19948f, 3820.116f, 0.0f, -122.394f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B11", 3, -516.0032f, 16.26666f, 3790.276f, 0.0f, -90.65293f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_51, "Prop_Vol", 2, -441.1294f, 26.80824f, 3924.727f, 0.0f, -5.007931f, 0.0f, 2.144123f, 2.572505f, 5.068168f);
	*(&Local_51 + 204) = { -594.2969f, 13.43765f, 3711.846f };
	*(&Local_51 + 204 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_228 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_A", -594.2969f, 13.43765f, 3711.846f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 232) = { -587.3196f, 13.80424f, 3715.275f };
	*(&Local_51 + 232 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_256 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_B", -587.3196f, 13.80424f, 3715.275f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 260) = { -498.2234f, 162.1065f, 1625.776f };
	*(&Local_51 + 260 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_284 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_0", -498.2234f, 162.1065f, 1625.776f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 288) = { -475.0844f, 153.4405f, 1619.008f };
	*(&Local_51 + 288 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_312 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_1", -475.0844f, 153.4405f, 1619.008f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 316) = { -444.4221f, 152.6136f, 1610.244f };
	*(&Local_51 + 316 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_340 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_2", -444.4221f, 152.6136f, 1610.244f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 344) = { -404.3434f, 151.478f, 1598.59f };
	*(&Local_51 + 344 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_368 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_3", -404.3434f, 151.478f, 1598.59f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 372) = { -377.9672f, 147.5764f, 1593.967f };
	*(&Local_51 + 372 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_396 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_4", -377.9672f, 147.5764f, 1593.967f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 400) = { -342.158f, 143.6982f, 1584f };
	*(&Local_51 + 400 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_424 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_5", -342.158f, 143.6982f, 1584f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 428) = { -307.1738f, 137.7445f, 1572.826f };
	*(&Local_51 + 428 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_452 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_6", -307.1738f, 137.7445f, 1572.826f, 0.0f, 0.0f, 0.0f);
	Local_51.f_456 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_51, 8, 0);
	*(&Local_51 + 460[06]) = { -782.5679f, 13.05098f, 3716.196f };
	*(&Local_51 + 460[06] + 12) = { 0.0f, 224.6577f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_D1", -782.5679f, 13.05098f, 3716.196f, 0.0f, 224.6577f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_51.f_456);
	*(&Local_51 + 460[16]) = { -464.3273f, 20.18413f, 3920.636f };
	*(&Local_51 + 460[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_D2", -464.3273f, 20.18413f, 3920.636f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_51.f_456);
	*(&Local_51 + 460[26]) = { -465.1451f, 21.08236f, 3954.712f };
	*(&Local_51 + 460[26] + 12) = { 0.0f, -270.129f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S1", -465.1451f, 21.08236f, 3954.712f, 0.0f, -270.129f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_51.f_456);
	*(&Local_51 + 460[36]) = { -804.577f, 13.54638f, 3769.03f };
	*(&Local_51 + 460[36] + 12) = { 0.0f, 224.9707f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S2", -804.577f, 13.54638f, 3769.03f, 0.0f, 224.9707f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_51.f_456);
	*(&Local_51 + 460[46]) = { -428.1188f, 22.08628f, 3929.696f };
	*(&Local_51 + 460[46] + 12) = { 0.0f, -270.129f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S3", -428.1188f, 22.08628f, 3929.696f, 0.0f, -270.129f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_51.f_456);
	*(&Local_51 + 460[56]) = { -812.0f, 13.05098f, 3745.583f };
	*(&Local_51 + 460[56] + 12) = { 0.0f, 222.8897f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S4", -812.0f, 13.05098f, 3745.583f, 0.0f, 222.8897f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_51.f_456);
	*(&Local_51 + 460[66]) = { -518.0001f, 17.44651f, 3887.917f };
	*(&Local_51 + 460[66] + 12) = { 8.078783f, -135.0755f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A1", -518.0001f, 17.44651f, 3887.917f, 8.078783f, -135.0755f, 0.0f);
	DECOR_SET_INT(bVar7, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_51.f_456);
	*(&Local_51 + 460[76]) = { -727.8762f, 12.04706f, 3779.129f };
	*(&Local_51 + 460[76] + 12) = { 0.0f, 98.5025f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A2", -727.8762f, 12.04706f, 3779.129f, 0.0f, 98.5025f, 0.0f);
	DECOR_SET_INT(bVar8, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_51.f_456);
	*(&Local_51 + 460[86]) = { -678.9176f, 12.49668f, 3900.816f };
	*(&Local_51 + 460[86] + 12) = { 186.4206f, -150.7948f, -175.5593f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A3", -678.9176f, 12.49668f, 3900.816f, 186.4206f, -150.7948f, -175.5593f);
	DECOR_SET_INT(bVar9, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_51.f_456);
	*(&Local_51 + 460[96]) = { -600.0759f, 12.99863f, 3744.491f };
	*(&Local_51 + 460[96] + 12) = { 6.020181f, -198.4226f, 7.632861f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A4", -600.0759f, 12.99863f, 3744.491f, 6.020181f, -198.4226f, 7.632861f);
	DECOR_SET_INT(bVar10, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_51.f_456);
	Local_51.f_704 = CREATE_OBJECTSET_IN_LAYOUT(Function_92(), Local_51, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -602.8398f, 12.80266f, 3735.799f, 0.0f, -104.3843f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_fiddle_w_fiddle1", "stand_fiddle_w_fiddle", -595.5592f, 12.80847f, 3737.876f, 0.0f, 102.5061f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_fiddle_w_fiddle2", "stand_fiddle_w_fiddle", -600.5227f, 12.80773f, 3739.735f, 0.0f, -23.70763f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -596.49f, 12.82946f, 3743.874f, 0.0f, 0.0f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -599.3608f, 12.80364f, 3733.986f, 0.0f, -161.9575f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -605.3611f, 12.80098f, 3742.415f, 0.0f, 0.0f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -597.2822f, 12.80752f, 3738.681f, 0.0f, 0.0f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -598.4981f, 12.80638f, 3737.806f, 0.0f, -102.671f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", -599.6803f, 12.80547f, 3737.591f, 0.0f, 58.99036f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", -600.3588f, 12.8044f, 3735.77f, 0.0f, 108.3344f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunkdancing_e_any4", "stand_drunkdancing_e_any", -594.4688f, 12.81167f, 3739.695f, 0.0f, 67.75262f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunkdancing_e_any5", "stand_drunkdancing_e_any", -603.4825f, 12.80408f, 3738.56f, 0.0f, -49.58071f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_drunkdancing_e_any6", "stand_drunkdancing_e_any", -600.3724f, 12.80244f, 3732.476f, 0.0f, 138.1678f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand", "smoking_stand", -595.2509f, 12.80336f, 3734.062f, 0.0f, 140.6372f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand1", "smoking_stand", -602.8878f, 12.8013f, 3732.734f, 0.0f, -157.9678f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand2", "smoking_stand", -602.8878f, 12.8013f, 3732.734f, 0.0f, -157.9678f, 0.0f), Local_51.f_704);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand3", "smoking_stand", -593.5535f, 12.82946f, 3743.415f, 0.0f, 63.92785f, 0.0f), Local_51.f_704);
	Local_51.f_708 = CREATE_OBJECTSET_IN_LAYOUT(Function_92(), Local_51, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "gatlingGun01x0", "p_gen_gatlingGun01x", -608.0994f, 13.08056f, 3754.339f, 0.0f, 92.62475f, 0.0f, 1), Local_51.f_708);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "gatlingGun01x1", "p_gen_gatlingGun01x", -596.3326f, 13.41128f, 3757.365f, -1.502471f, 230.7494f, 0.1384609f, 1), Local_51.f_708);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x0", "p_gen_crateTnt01x", -604.0f, 13.24709f, 3752f, 0.0f, -39.3381f, 0.0f, 1), Local_51.f_708);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x1", "p_gen_crateTnt01x", -598.2893f, 13.26501f, 3752.582f, 0.0f, 121.2567f, 0.0f, 1), Local_51.f_708);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x2", "p_gen_crateTnt01x", -601.893f, 13.35344f, 3754.107f, 0.0f, 193.54f, 0.0f, 1), Local_51.f_708);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "skullPost02x0", "p_gen_skullPost02x", -640.1327f, 25.55029f, 3883.983f, 0.0f, 0.0f, 0.0f, 1), Local_51.f_708);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "skullPost02x1", "p_gen_skullPost02x", -641.5231f, 25.55029f, 3881.522f, 0.0f, -34.7461f, 0.0f, 1), Local_51.f_708);
	return;
}

void Function_169(int iParam0, int iParam1) //Position: 0x4ED1 / 20177
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

void Function_170(int iParam0) //Position: 0x4F1A / 20250
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_172("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_171(StackVal, 0);
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x4F8C / 20364
{
	Function_122(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_121(StackVal, iParam1);
	}
	return;
}

bool Function_172(char* cParam0) //Position: 0x4FBD / 20413
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_173(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x4FDC / 20444
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_174() //Position: 0x501E / 20510
{
	while (!IS_EXITFLAG_SET())
	{
		Function_27(4858, 3651);
		WAIT(0);
	}
	return;
}

bool Function_175() //Position: 0x503B / 20539
{
	return Function_132(2);
}

void Function_176() //Position: 0x5045 / 20549
{
	if (Function_175())
	{
		return;
	}
	Function_186();
	Function_184(&bLocal_39, "MP_CTF", 10, 0);
	Function_184(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_178(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_98();
	Function_177();
	return;
}

void Function_177() //Position: 0x50A9 / 20649
{
	while (!Function_132(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_178(int iParam0) //Position: 0x50C4 / 20676
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_183();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_182(iParam0[iVar03], 8);
		}
		else if (Function_181())
		{
			iVar1 = 1;
			Function_182(iParam0[iVar03], 8);
		}
		Function_182(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_182(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
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
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_182(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_182(iParam0[iVar03], 2);
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
	Function_179();
	return 1;
}

void Function_179() //Position: 0x543F / 21567
{
	if (!Function_180(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_180(int iParam0) //Position: 0x547F / 21631
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_181() //Position: 0x549B / 21659
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

void Function_182(var uParam0, int iParam1) //Position: 0x54C6 / 21702
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_183() //Position: 0x54D7 / 21719
{
	if (!Function_180(128))
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

var Function_184(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5519 / 21785
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_185(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_182(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_185(var uParam0, int iParam1, int iParam2) //Position: 0x5551 / 21841
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_182(uParam0[iVar03], 4);
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

void Function_186() //Position: 0x5615 / 22037
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

