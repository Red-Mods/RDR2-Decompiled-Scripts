//Decompiled with MagicRDR v1.0
//Function Count : 289
//Statics Count : 371
//Natives Count : 258
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
	var uLocal_145 = 10;
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
	var uLocal_212 = 25;
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
	int iLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 5;
	var uLocal_344 = -1;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = -1;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = -1;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = -1;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = -1;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	bool bLocal_370 = false;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_278();
	if (Function_277())
	{
		Function_275();
	}
	else
	{
		if (Function_141())
		{
			Function_140(1);
		}
		else
		{
			Function_139(1);
		}
		while (!Function_138() && !IS_EXITFLAG_SET())
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
		Function_137(0, 4);
		iVar4 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_136(64))
			{
				iVar4 = (iVar4 - 1);
				if (iVar4 <= 0)
				{
					Function_135(64, 0);
					Function_133();
					iVar4 = 10;
				}
			}
			Function_117(&iLocal_341, 0.1f, 0.7f, 12, 0.0f, 1.0f, 0.0f, 1.0f);
			Function_103(&uLocal_209);
			Function_27();
			Function_24();
			WAIT(0);
		}
		Function_22(512);
		Function_18();
		Function_17(Global_83864.f_1284, 0, 1);
	}
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_cas_base01x", 0);
	STREAMING_UNLOAD_BOUNDS();
	DISABLE_CHILD_SECTOR("mp_cas_base01x");
	SET_DUST_LEVEL(1);
	SET_DUST_LEVEL_MID(1);
	SET_DUST_LEVEL_FAR(1);
	Function_8();
	Function_3();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x14C / 332
{
	Function_2(uLocal_208);
	return;
}

int Function_2(bool bParam0) //Position: 0x158 / 344
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x16E / 366
{
	Function_4(&Local_51 + 4);
	RELEASE_LAYOUT_REF(Local_51);
	return;
}

void Function_4(int iParam0) //Position: 0x180 / 384
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_5(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x1A6 / 422
{
	if (Function_7(uParam0[iParam13], 4))
	{
		if (Function_7(uParam0[iParam13], 1))
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
			Function_6(uParam0[iParam13], 1);
			Function_6(uParam0[iParam13], 2);
			Function_6(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x2D4 / 724
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x2EE / 750
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x30B / 779
{
	Function_16();
	Function_4(&bLocal_39);
	Function_9();
	return;
}

void Function_9() //Position: 0x31C / 796
{
	Function_10();
	return;
}

void Function_10() //Position: 0x325 / 805
{
	if (Function_14(4194304))
	{
		Function_11(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_14(8388608))
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

void Function_11(int iParam0, bool bParam1, int iParam2) //Position: 0x42E / 1070
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

void Function_12(var uParam0, int iParam1) //Position: 0x456 / 1110
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x469 / 1129
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_14(bool bParam0) //Position: 0x478 / 1144
{
	return Function_15(Global_76905.f_132, bParam0);
}

bool Function_15(var uParam0, bool bParam1) //Position: 0x489 / 1161
{
	return (uParam0 && bParam1) == 0;
}

void Function_16() //Position: 0x496 / 1174
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_17(var uParam0, bool bParam1, bool bParam2) //Position: 0x4D5 / 1237
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_13(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_13(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_18() //Position: 0x502 / 1282
{
	Function_19(Function_21());
	return;
}

void Function_19(int iParam0) //Position: 0x50E / 1294
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

bool Function_20(int iParam0) //Position: 0x53B / 1339
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_21() //Position: 0x552 / 1362
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_22(int iParam0) //Position: 0x56C / 1388
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x5A5 / 1445
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_24() //Position: 0x5B2 / 1458
{
	Function_25(2);
	return;
}

void Function_25(int iParam0) //Position: 0x5BC / 1468
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
			Function_26(iParam0);
		}
	}
	return;
}

void Function_26(var uParam0) //Position: 0x5EE / 1518
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_27() //Position: 0x5FD / 1533
{
	Function_101();
	if (Function_100(1, 1))
	{
		Function_84(StackVal, StackVal, 7613, vLocal_48, 1, 7500);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_79(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_30(4901, 3738);
		Function_28();
	}
	return;
}

void Function_28() //Position: 0x648 / 1608
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_29(&Local_12);
	}
	return;
}

void Function_29(int iParam0) //Position: 0x664 / 1636
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

void Function_30(int iParam0, int iParam1) //Position: 0x68A / 1674
{
	Function_31(iParam0, iParam1, 3731);
	return;
}

void Function_31(var uParam0, var uParam1, int iParam2) //Position: 0x69B / 1691
{
	if (Function_14(0x4000000))
	{
		Function_40();
		Function_11(0x4000000, 0, 1);
	}
	if (Function_14(0x10000000))
	{
		Function_40();
		Function_11(0x10000000, 0, 1);
	}
	if (Function_14(2) != Function_14(0x2000000))
	{
		Function_40();
		Function_11(0x2000000, Function_14(2), 1);
	}
	if (Function_39())
	{
		Function_38(!Function_14(16));
	}
	if (Function_14(16))
	{
		Function_32(&uParam0, &uParam1, &iParam2);
		if (Function_14(8192))
		{
			if (!Function_14(4194304))
			{
				Function_11(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_14(8388608))
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
			Function_10();
		}
		Function_11(16384, 1, 1);
	}
	else if (!Function_14(32))
	{
		Function_10();
	}
	Function_11(32768, 0, 1);
	return;
}

void Function_32(var uParam0, var uParam1, int iParam2) //Position: 0x834 / 2100
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
	bVar2 = Function_14(0x40000000);
	bVar3 = !Function_14(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_37(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_35(bVar1, 2048, 1))
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
				if (Function_33(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_14(4))
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
			if (Function_33(bVar1, (4294966296 - bVar1), 1))
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

bool Function_33(bool bParam0, int iParam1, int iParam2) //Position: 0x9AC / 2476
{
	var uVar0;
	
	return Function_34(bParam0, iParam1, &uVar0, iParam2);
}

int Function_34(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x9BD / 2493
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

bool Function_35(bool bParam0, int iParam1, bool bParam2) //Position: 0xA22 / 2594
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_100(iParam1, bParam2);
	}
	if (!Function_37(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_36(iParam1), 64);
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

var Function_36(int iParam0) //Position: 0xAA3 / 2723
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

bool Function_37(bool bParam0) //Position: 0xDBC / 3516
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

void Function_38(bool bParam0) //Position: 0xE5D / 3677
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_11(16384, 0, 1);
	return;
}

bool Function_39() //Position: 0xE77 / 3703
{
	return Function_14(32768);
}

void Function_40() //Position: 0xE84 / 3716
{
	Function_11(32768, 1, 0);
	return;
}

int Function_41() //Position: 0xE93 / 3731
{
	return 1;
}

int Function_42(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xE9A / 3738
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_59(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_58(bParam0);
	bVar2 = Function_57(bParam0);
	bVar3 = Function_54(bParam0);
	iVar4 = Function_53(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_33(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_51(34, bParam0));
		bVar0++;
	}
	if (Function_48(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_14(4))
	{
		if (Function_45(bParam0, 1, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "<SWAG_Y_RET>");
		}
	}
	else
	{
		Function_44(bVar0, bParam0);
	}
	if (Function_39() && Function_43())
	{
	}
	return 0;
}

bool Function_43() //Position: 0xF71 / 3953
{
	return (Function_14(4096) || Function_14(4));
}

void Function_44(bool bParam0, bool bParam1) //Position: 0xF82 / 3970
{
	if (Function_14(4))
	{
		if (Function_35(bParam1, 1024, 1))
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

bool Function_45(bool bParam0, int iParam1, bool bParam2) //Position: 0xFB5 / 4021
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_47(iParam1, bParam2);
	}
	if (!Function_37(bParam0))
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

var Function_46(int iParam0) //Position: 0x1036 / 4150
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

var Function_47(int iParam0, bool bParam1) //Position: 0x1128 / 4392
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_48(bool bParam0) //Position: 0x1148 / 4424
{
	if (Function_50(bParam0, 1, 0) != 4294967295 && Function_49() != 4294967295)
	{
		return 0;
	}
	return Function_50(bParam0, 1, 0) != Function_49();
}

int Function_49() //Position: 0x1170 / 4464
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_50(GET_LOCAL_SLOT(), 1, 0);
}

int Function_50(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1187 / 4487
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_37(bParam0))
			{
				if (!Function_35(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_51(int iParam0, bool bParam1) //Position: 0x11CB / 4555
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_52(iParam0);
	}
	if (!Function_37(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_52(int iParam0) //Position: 0x1239 / 4665
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_53(int iParam0, int iParam1, int iParam2) //Position: 0x1252 / 4690
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_54(bool bParam0) //Position: 0x1267 / 4711
{
	return Function_55(0, bParam0);
}

int Function_55(int iParam0, bool bParam1) //Position: 0x1273 / 4723
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_56(iParam0);
	}
	if (!Function_37(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_56(int iParam0) //Position: 0x12DA / 4826
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_57(bool bParam0) //Position: 0x12EA / 4842
{
	return Function_51(12, bParam0);
}

int Function_58(int iParam0) //Position: 0x12F7 / 4855
{
	return Function_51(11, iParam0);
}

void Function_59(bool bParam0, int iParam1, char* cParam2) //Position: 0x1304 / 4868
{
	if (bParam0)
	{
		if (Function_39())
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

int Function_60() //Position: 0x1325 / 4901
{
	if (!Function_74(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_73();
	Function_61();
	return 1;
}

void Function_61() //Position: 0x13C1 / 5057
{
	if (Function_70())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_69())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_62(0, 0);
		Function_62(1, 0);
	}
	return;
}

void Function_62(bool bParam0, bool bParam1) //Position: 0x13EC / 5100
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_49())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_68(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_63(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_63(int iParam0, int iParam1, bool bParam2) //Position: 0x148B / 5259
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_39())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_64(iParam1, 0) };
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
		if (Function_43())
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

struct<16> Function_64(var uParam0, var uParam1) //Position: 0x157E / 5502
{
	return StackVal, StackVal, StackVal, Function_65(Function_66(uParam0), uParam1);
}

struct<16> Function_65(bool bParam0, bool bParam1) //Position: 0x1590 / 5520
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

int Function_66(int iParam0) //Position: 0x15C5 / 5573
{
	if (!Function_67())
	{
		return 0;
	}
	return StackVal;
}

bool Function_67() //Position: 0x15DE / 5598
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_68(int iParam0) //Position: 0x15EB / 5611
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_69() //Position: 0x1607 / 5639
{
	return Function_49() == 4294967295;
}

bool Function_70() //Position: 0x1612 / 5650
{
	return Function_71(2);
}

int Function_71(int iParam0) //Position: 0x161C / 5660
{
	return Function_72(&Global_79349, iParam0);
}

int Function_72(var uParam0, bool bParam1) //Position: 0x162B / 5675
{
	return Function_15(uParam0->f_44, bParam1);
}

void Function_73() //Position: 0x163A / 5690
{
	if (Function_14(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_11(8192, 1, 1);
	}
	else if (Function_14(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_11(8192, 1, 1);
	}
	else
	{
		Function_11(8192, 0, 1);
	}
	return;
}

bool Function_74(bool bParam0) //Position: 0x1677 / 5751
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_39() || Function_78(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_39())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_75(Function_39());
	return 1;
}

void Function_75(bool bParam0) //Position: 0x16F8 / 5880
{
	if (bParam0 || Function_14(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_14(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_14(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_14(1048576) || Function_14(4)) || Function_100(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_11(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_76(int iParam0) //Position: 0x1781 / 6017
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_77(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_77(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1795 / 6037
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

int Function_78(bool bParam0, bool bParam1) //Position: 0x17DA / 6106
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

void Function_79(vector3 vParam0, float fParam3) //Position: 0x180E / 6158
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_83(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_83(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_80(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_80(bool bParam0) //Position: 0x18C1 / 6337
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
	return Function_81(bVar0);
}

int Function_81(bool bParam0) //Position: 0x18FC / 6396
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
	Function_82(bVar0);
	return bVar0;
}

void Function_82(bool bParam0) //Position: 0x194A / 6474
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_83() //Position: 0x195D / 6493
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_84(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x198C / 6540
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_85(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7399, 1, 125, 0, 0, 0);
	Function_85(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_85(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1A0F / 6671
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_86(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_86(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1A5A / 6746
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
			Function_29(iParam0);
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
					Function_29(iParam0);
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
			fVar14 = Function_87(iParam0->f_36);
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

var Function_87(float fParam0) //Position: 0x1CD9 / 7385
{
	return (fParam0 * 57.29578f);
}

var Function_88(int iParam0, var uParam1) //Position: 0x1CE7 / 7399
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_89(int iParam0, var uParam1) //Position: 0x1D4C / 7500
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_one_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_90() //Position: 0x1DBD / 7613
{
	int iVar0;
	
	iVar0 = Function_96(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_91(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_91(bool bParam0, int iParam1) //Position: 0x1DEA / 7658
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_95(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_94((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_94((*iParam1)[iVar202], &iVar21))
		{
			if (Function_92((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_92(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1EF9 / 7929
{
	float fVar0;
	
	if (!Function_93(bParam0))
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

bool Function_93(int iParam0) //Position: 0x2020 / 8224
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_94(bool bParam0, int iParam1) //Position: 0x2032 / 8242
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

var Function_95() //Position: 0x208E / 8334
{
	int iVar0;
	
	return iVar0;
}

var Function_96(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2096 / 8342
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_98(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_94((*uParam3)[iVar12], &iVar2))
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
		if (Function_94((*uParam3)[iVar12], &iVar2))
		{
			if (Function_97((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_97(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2184 / 8580
{
	if (!Function_93(bParam0))
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

var Function_98(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2315 / 8981
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_99()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_99() //Position: 0x2381 / 9089
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_100(bool bParam0, bool bParam1) //Position: 0x23A8 / 9128
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_101() //Position: 0x23C8 / 9160
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
						Function_102("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_102("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_102("CTF_mul_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_16();
	}
	return;
}

void Function_102(char* cParam0, int iParam1) //Position: 0x245D / 9309
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

int Function_103(int iParam0) //Position: 0x24F4 / 9460
{
	int iVar0;
	
	if (!Function_115(*iParam0) || (Function_136(64) && Function_111()))
	{
		iParam0->f_4 = 0;
		Function_110(iParam0);
		if (!Function_115(*iParam0))
		{
		}
		if (Function_136(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_115(*iParam0))
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
						(iParam0 + 12[Function_107(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_15((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_12(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_15((iParam0 + 12[StackVal5])->f_16, 32))
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
					if (!Function_15((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_15((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_106((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_105((iParam0 + 12[StackVal5])->f_12, 1);
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
				Function_110(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_104(3, iParam0->f_516))
			{
				if (iParam0->f_516 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_516);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_15((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_15((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_13(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_15((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_15((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_15((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_104(int iParam0, bool bParam1) //Position: 0x287B / 10363
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_105(bool bParam0, bool bParam1) //Position: 0x288D / 10381
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

void Function_106(bool bParam0, bool bParam1) //Position: 0x28E1 / 10465
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

int Function_107(var uParam0, var uParam1, int iParam2) //Position: 0x2932 / 10546
{
	return Function_108(Global_29006, uParam0, uParam1, iParam2);
}

int Function_108(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2944 / 10564
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_109(iParam0))
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

bool Function_109(int iParam0) //Position: 0x29E0 / 10720
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_110(int iParam0) //Position: 0x29F6 / 10742
{
	if (iParam0->f_520 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_520, 0);
		iParam0->f_520 = "";
	}
	return;
}

var Function_111() //Position: 0x2A16 / 10774
{
	return !Function_112();
}

bool Function_112() //Position: 0x2A20 / 10784
{
	if (Function_114())
	{
		return (Function_113() != 1 || Function_113() != 0);
	}
	return 0;
}

int Function_113() //Position: 0x2A39 / 10809
{
	return Global_79349.f_16;
}

bool Function_114() //Position: 0x2A45 / 10821
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_115(int iParam0) //Position: 0x2A4E / 10830
{
	if (!Function_109(iParam0))
	{
		return 1;
	}
	return Function_116(&(Global_29008[iParam0]), 4);
}

int Function_116(var uParam0, bool bParam1) //Position: 0x2A6A / 10858
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_117(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2A86 / 10886
{
	float fVar0;
	
	if (Function_132())
	{
		if (Function_131(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_127(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_121((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_118((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_121((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_118((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_118(int iParam0, var uParam1, int iParam2) //Position: 0x2B29 / 11049
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_120(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_119(iParam2);
	}
	return;
}

void Function_119(int iParam0) //Position: 0x2B4E / 11086
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_120(int iParam0) //Position: 0x2B63 / 11107
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_121(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2B78 / 11128
{
	int iVar0;
	bool bVar1;
	
	Function_126(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_125(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_122(StackVal, bVar1, bParam4);
		}
	}
}

void Function_122(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BEA / 11242
{
	int iVar0;
	
	Function_126(iParam0);
	Function_124(bParam1);
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
	Function_123();
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

void Function_123() //Position: 0x2D63 / 11619
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_124(bool bParam0) //Position: 0x2D6F / 11631
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

void Function_125(int iParam0, int iParam1) //Position: 0x2DB5 / 11701
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_126(iParam0);
	Function_124(iVar0);
	PRINTNL();
	Function_122(iParam0, iVar0, iParam1);
	return;
}

void Function_126(int iParam0) //Position: 0x2DDA / 11738
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

float Function_127(int iParam0) //Position: 0x2E20 / 11808
{
	return -Function_128(iParam0);
}

float Function_128(int iParam0) //Position: 0x2E2C / 11820
{
	if (Function_131(iParam0))
	{
		if (Function_130(iParam0))
		{
			return StackVal;
		}
		Function_129();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_129() //Position: 0x2EFD / 12029
{
	if (!Function_132())
	{
	}
	return;
}

bool Function_130(int iParam0) //Position: 0x2F0A / 12042
{
	return Function_15(*iParam0, 2);
}

bool Function_131(int iParam0) //Position: 0x2F17 / 12055
{
	return Function_15(*iParam0, 1);
}

bool Function_132() //Position: 0x2F24 / 12068
{
	return NET_IS_IN_SESSION();
}

void Function_133() //Position: 0x2F2D / 12077
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_95());
	Function_134(bVar0, "gatling", Local_51.f_200);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_134(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2F53 / 12115
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_95(), bParam0, 4294967295, 1);
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

void Function_135(int iParam0, bool bParam1) //Position: 0x2FAC / 12204
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

bool Function_136(int iParam0) //Position: 0x2FD4 / 12244
{
	return Function_15(StackVal, iParam0);
}

void Function_137(int iParam0, var uParam1) //Position: 0x2FE7 / 12263
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = uParam1;
	return;
}

bool Function_138() //Position: 0x3008 / 12296
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bLocal_370))
	{
		bLocal_370 = CREATE_WORLD_SECTOR(Local_51, "elMatadero");
	}
	if (!IS_OBJECT_VALID(bLocal_370))
	{
		LOG_ERROR("Failed to create the elMatadera world sector");
		return 1;
	}
	if (!IS_WORLD_SECTOR_LOADED(bLocal_370))
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

void Function_139(bool bParam0) //Position: 0x30CA / 12490
{
	Function_135(16, bParam0);
	return;
}

void Function_140(var uParam0) //Position: 0x30D7 / 12503
{
	Function_135(8, uParam0);
	return;
}

bool Function_141() //Position: 0x30E4 / 12516
{
	Function_274(&iLocal_341, 0, 9, 30, 1, 1, 0);
	Function_274(&iLocal_341, 1, 9, 30, 2, 2, 2);
	Function_274(&iLocal_341, 2, 12, 0, 3, 3, 3);
	Function_274(&iLocal_341, 3, 12, 0, 0, 0, 1);
	Function_274(&iLocal_341, 4, 23, 0, 1, 0, 1);
	Function_271(&iLocal_341);
	Global_83591 = 5;
	SET_DUST_LEVEL(2);
	SET_DUST_LEVEL_MID(2);
	SET_DUST_LEVEL_FAR(2);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_269();
	ENABLE_CHILD_SECTOR("mp_cas_base01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_cas_base01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_268("MEX_SONG_06", "MEX_SONG_07", 0, 58, 58, 1);
	Function_267(512);
	Function_266(Global_83864.f_1284);
	Function_19(977);
	Function_17(Global_83864.f_1284, 0, 1);
	if (!Function_262(Local_51))
	{
		return 0;
	}
	Function_260(Local_51.f_620);
	Function_253(&Global_83591 + 276, 0);
	Function_251(&Global_83591, 1, 5, 10, 1);
	Function_251(&Global_83591, 2, 22, 1, 1);
	Function_251(&Global_83591, 3, 10, 10, 1);
	Function_251(&Global_83591, 4, 24, 4, 1);
	Function_246(&Global_83591, 1, 20, 5, 1);
	Function_245(&Global_83591);
	Function_244(&Global_83591 + 276, 4);
	Function_243(0, 8);
	Function_243(1, 1);
	if (!Function_239(&uLocal_209))
	{
		return 0;
	}
	Function_142();
	return 1;
}

void Function_142() //Position: 0x3248 / 12872
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 12981);
	uLocal_208 = Function_143("DLCPVP");
	return;
}

var Function_143(bool bParam0) //Position: 0x3265 / 12901
{
	bool bVar0;
	
	bVar0 = Function_144();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_144() //Position: 0x3279 / 12921
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_145(var uParam0) //Position: 0x32B5 / 12981
{
	struct<33> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 11);
	if (Var0.f_28)
	{
	}
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	bVar12 = GET_LOCAL_SLOT();
	switch (StackVal)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			bVar11 = Function_71(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_238())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_113())
							{
								case 0x00000002:
									break;
								
								case 0x00000011:
									break;
								
								case 0x00000009:
									break;
								
								case 0x00000007:
									break;
								
								case 0x00000008:
									break;
							}
							Function_235(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_231(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_148(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_112() || Function_146(4096))
						{
							if (Function_100(131072, 1))
							{
							}
							if (Function_35(Var0, 131072, 1))
							{
							}
						}
					}
				}
				else if (Var0.f_32 >= 0)
				{
					if (bVar11)
					{
					}
				}
			}
			else if (Var0 == bVar12)
			{
				Global_56092[231] = 0;
				if (bVar11)
				{
					if (IS_SLOT_VALID(StackVal))
					{
						Global_56352[231] = StackVal;
					}
				}
			}
			if (bVar11 && !Function_146(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_146(int iParam0) //Position: 0x3419 / 13337
{
	return Function_147(Global_79336, iParam0);
}

bool Function_147(var uParam0, bool bParam1) //Position: 0x3428 / 13352
{
	return (uParam0 && bParam1) == 0;
}

void Function_148(struct<29> Param0) //Position: 0x3435 / 13365
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_153(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_153(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_152(), 29, 1);
					Global_83823[29] = 1;
					Function_149(6002);
					Function_149(6005);
					Function_149(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_149(6001);
				Function_149(6004);
			}
			break;
	}
}

void Function_149(int iParam0) //Position: 0x3516 / 13590
{
	Function_150(iParam0, 1);
	return;
}

void Function_150(int iParam0, bool bParam1) //Position: 0x3522 / 13602
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_13(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_151((iVar0 % 32)));
	}
	else
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_151((iVar0 % 32)));
	}
	return;
}

int Function_151(bool bParam0) //Position: 0x3578 / 13688
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_152() //Position: 0x3584 / 13700
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_153(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x3599 / 13721
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_154(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_154(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x35C5 / 13765
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_230(uParam0, uParam2, uParam3);
			}
			Function_155(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_155(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_155(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_155(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x3642 / 13890
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_229(*uParam0);
	if (Global_83864.f_1264 > iParam1)
	{
		Global_50170[*uParam022].f_28++;
		bVar1 = Global_50170[*uParam022].f_28;
		if (bVar1 > bParam2)
		{
			bVar2 = false;
			if (iParam3 == 4294967295)
			{
				bVar2 = true;
			}
			else if (StackVal == 10)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				uParam0->f_4 = 2;
				if (iParam4 == 3)
				{
					Function_227(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_173(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_162(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_161(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_156(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_156(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3710 / 14096
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_160(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_159(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_160(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_158(iParam0, 4))
	{
		Function_157(Function_160(iParam0), 0);
	}
}

void Function_157(var uParam0, int iParam1) //Position: 0x37C7 / 14279
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

bool Function_158(int iParam0, bool bParam1) //Position: 0x37EC / 14316
{
	return Function_15(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_159(int iParam0) //Position: 0x3800 / 14336
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_160(int iParam0) //Position: 0x3834 / 14388
{
	return Global_50170[iParam022].f_24;
}

var Function_161(int iParam0, int iParam1) //Position: 0x3843 / 14403
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_162(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3856 / 14422
{
	Function_170(*uParam0);
	Function_163(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_160(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_160(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_163(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x38FB / 14587
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_169(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_160(iParam0));
	if ((bParam3 && Function_158(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_160(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_168(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_159(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_166(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_165(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_160(iParam0), &Var7, 0, 2, Function_158(iParam0, 4));
			if (!bParam3)
			{
				Function_164(iParam0, 4);
			}
		}
	}
}

void Function_164(int iParam0, int iParam1) //Position: 0x39B8 / 14776
{
	Function_13(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_165(int iParam0) //Position: 0x39CC / 14796
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_159(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_166(int iParam0) //Position: 0x39EC / 14828
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_167(int iParam0) //Position: 0x3A1A / 14874
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_168(int iParam0) //Position: 0x3A4A / 14922
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_169(int iParam0) //Position: 0x3A7B / 14971
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

void Function_170(int iParam0) //Position: 0x3BF9 / 15353
{
	Function_171(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_171(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3C0F / 15375
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_172();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_172() //Position: 0x3C84 / 15492
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_173(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3CD1 / 15569
{
	struct<4> Var0;
	
	Function_226(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_159(*uParam0) };
	Function_221(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_220(*uParam0, 4);
	Function_174();
}

void Function_174() //Position: 0x3D2F / 15663
{
	if (!Function_114())
	{
		if (!Function_219(1, 3, 1, 1))
		{
			Function_207(1);
			Function_206(1, 8);
		}
	}
	else
	{
		Function_175(0);
	}
	return;
}

void Function_175(bool bParam0) //Position: 0x3D58 / 15704
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_204(2);
	if (bParam0)
	{
		Function_204(1);
	}
	else
	{
		Function_203(1);
	}
	Function_176();
	return;
}

void Function_176() //Position: 0x3DE1 / 15841
{
	Function_201();
	Function_200();
	Function_200();
	Function_199();
	Function_199();
	Function_198();
	Function_198();
	Function_183(0);
	Function_183(0);
	if (!Function_114())
	{
		Function_181();
		Function_180();
		Function_179();
		Function_178();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_177();
	return;
}

void Function_177() //Position: 0x3E33 / 15923
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

void Function_178() //Position: 0x3F39 / 16185
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

void Function_179() //Position: 0x3F6C / 16236
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

void Function_180() //Position: 0x4150 / 16720
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

void Function_181() //Position: 0x4304 / 17156
{
	Function_182(&Global_28260, 1, 0);
	return;
}

void Function_182(int iParam0, bool bParam1, int iParam2) //Position: 0x4312 / 17170
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
	
	bVar0 = Function_152();
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

struct<8> Function_183(int iParam0) //Position: 0x4503 / 17667
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
					iVar2 = ((Function_197((50 + iVar4)) + Function_197((183 + iVar4))) + Function_197((90 + iVar4)));
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
	Function_184(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_184(int iParam0, bool bParam1, bool bParam2) //Position: 0x45A9 / 17833
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
		Function_196(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_195(iParam0);
	if (bParam2)
	{
		Function_185(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_185(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4844 / 18500
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_194(390))), 32);
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
					bVar19 = (Function_193(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_193(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_191(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_189(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_187(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_186(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_95(), &Var9);
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

var Function_186(int iParam0) //Position: 0x4E71 / 20081
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_187(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4E82 / 20098
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_188("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_188("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_188("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_188(char* cParam0, bool bParam1) //Position: 0x4F77 / 20343
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_189(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4F90 / 20368
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_104(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_190(Function_104(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_190(int iParam0, int iParam1) //Position: 0x4FF5 / 20469
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_191(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5007 / 20487
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
	if (((Function_192(iParam0) != 19 || Function_192(iParam0) != 17) || Function_192(iParam0) != 10) || Function_192(iParam0) != 9)
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

int Function_192(int iParam0) //Position: 0x5137 / 20791
{
	return Global_35278[iParam020].f_48;
}

float Function_193(int iParam0) //Position: 0x5146 / 20806
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_194(int iParam0) //Position: 0x517F / 20863
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_195(int iParam0) //Position: 0x51BC / 20924
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

int Function_196(int iParam0, bool bParam1, bool bParam2) //Position: 0x5356 / 21334
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

int Function_197(bool bParam0) //Position: 0x559A / 21914
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_198() //Position: 0x55DB / 21979
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
		iVar2 = ((Function_197((50 + iVar3) + 15) + Function_197((183 + iVar3) + 15)) + Function_197((90 + iVar3) + 15));
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
	Function_184(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_199() //Position: 0x5664 / 22116
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
			iVar2 = ((Function_197((50 + iVar3) + 8) + Function_197((183 + iVar3) + 8)) + Function_197((90 + iVar3) + 8));
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
	Function_184(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_200() //Position: 0x56FB / 22267
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
		iVar2 = ((Function_197((50 + iVar3)) + Function_197((183 + iVar3))) + Function_197((90 + iVar3)));
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
	Function_184(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_201() //Position: 0x577A / 22394
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_202(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_184(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_202(int iParam0, bool bParam1, int iParam2) //Position: 0x57B3 / 22451
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
	Function_196(iParam0, bParam1, 1);
	Function_195(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_185(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_203(int iParam0) //Position: 0x59BD / 22973
{
	Function_23(&Global_79338, iParam0);
	return;
}

void Function_204(int iParam0) //Position: 0x59CC / 22988
{
	Function_205(&Global_79338, iParam0);
	return;
}

void Function_205(var uParam0, int iParam1) //Position: 0x59DB / 23003
{
	Function_13(uParam0, iParam1);
	return;
}

void Function_206(var uParam0, int iParam1) //Position: 0x59E8 / 23016
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_114())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_207(bool bParam0) //Position: 0x5A2A / 23082
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_208();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_176();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_12(&Global_63095, 1);
		Function_12(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_208() //Position: 0x5A7B / 23163
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_218())
	{
		Function_215(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_215(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_210(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_210(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_209(StackVal, StackVal, vVar0))
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

bool Function_209(vector3 vParam0) //Position: 0x5B36 / 23350
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_210(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5B4E / 23374
{
	int iVar0;
	
	iVar0 = Function_213(uParam2, uParam3);
	if (Function_212(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_13(&Global_63095, 1);
			Function_12(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_13(&Global_63095, 2);
			Function_12(&Global_63095, 1);
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
		Function_13(&Global_63095, 2);
		Function_12(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_211();
	return StackVal, StackVal, Function_211();
}

vector3 Function_211() //Position: 0x5C35 / 23605
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_212(int iParam0) //Position: 0x5C3E / 23614
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_213(bool bParam0, bool bParam1) //Position: 0x5C54 / 23636
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
				fVar2 = Function_214(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_214(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_212(bVar0) && !bParam1)
	{
		bVar0 = Function_213(bParam0, 1);
	}
	return bVar0;
}

float Function_214(vector3 vParam0, vector3 vParam3) //Position: 0x5D1B / 23835
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_215(var uParam0, int iParam1) //Position: 0x5D38 / 23864
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_217(Global_34573, &vVar4);
	if (!Function_216(Global_30640[0]))
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
	if (!Function_216(Global_30640[2]))
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
	if (!Function_216(Global_30640[1]))
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
	if (!Function_216(Global_30658[1]))
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
	if (!Function_216(Global_30658[3]))
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
	if (!Function_216(Global_30658[2]))
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
	if (!Function_216(Global_30658[4]))
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
	if (!Function_216(Global_30668[0]))
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
	if (!Function_216(Global_30668[1]))
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
	if (!Function_216(Global_30668[2]))
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
	if (!Function_216(Global_30679[0]))
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
	if (!Function_216(Global_30685[0]))
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
	if (!Function_216(Global_30685[1]))
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
	if (!Function_216(Global_30685[2]))
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
	if (!Function_216(Global_30693[0]))
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
	if (!Function_216(Global_30693[1]))
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
	if (!Function_216(Global_30693[2]))
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
	if (!Function_216(Global_30707[2]))
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
	if (!Function_216(Global_30707[3]))
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
	if (!Function_216(Global_30707[0]))
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
	if (!Function_216(Global_30717[0]))
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
	if (!Function_216(Global_30723[2]))
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
	if (!Function_216(Global_30723[1]))
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
	if (!Function_216(Global_30723[0]))
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
	if (!Function_216(Global_30679[1]))
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
	if (!Function_216(Global_30707[1]))
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
	Function_13(&Global_63095, 2);
	Function_12(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_209(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_216(int iParam0) //Position: 0x655D / 25949
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_15(uVar0, 0x1000000) || Function_15(uVar0, 0x2000000)) || Function_15(uVar0, 0x4000000)) || !Function_15(uVar0, 0x10000000));
}

void Function_217(bool bParam0, int iParam1) //Position: 0x6598 / 26008
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_218() //Position: 0x65A5 / 26021
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_219(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x65C0 / 26048
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

void Function_220(int iParam0, int iParam1) //Position: 0x6664 / 26212
{
	Function_12(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_221(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6678 / 26232
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_83();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_225(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_224(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_223(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_222(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_225(), iVar1 + 1);
	return;
}

struct<16> Function_222(int iParam0) //Position: 0x66EA / 26346
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_223(int iParam0) //Position: 0x670B / 26379
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_224(int iParam0) //Position: 0x672C / 26412
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_225() //Position: 0x674D / 26445
{
	return "CQueue_Count";
}

void Function_226(bool bParam0, bool bParam1) //Position: 0x6762 / 26466
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_172();
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

void Function_227(var uParam0, bool bParam1, bool bParam2) //Position: 0x68AE / 26798
{
	Function_226(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_160(*uParam0), 1.0f, 0, 0);
	Function_228(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_221(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_174();
	return;
}

void Function_228(int iParam0, int iParam1) //Position: 0x6913 / 26899
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_169(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_160(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_168(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_159(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_165(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_160(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_160(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_160(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_229(int iParam0) //Position: 0x6995 / 27029
{
	return Global_50170[iParam022].f_12;
}

void Function_230(var uParam0, bool bParam1, bool bParam2) //Position: 0x69A4 / 27044
{
	Function_170(*uParam0);
	if (!Function_158(*uParam0, 2))
	{
		Function_163(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_164(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_160(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_231(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x69E1 / 27105
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_229(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_48(Param3) && Param3.f_12 != 29)
						{
							if (Function_147(Param3.f_40, 1048576))
							{
								Global_50170[23022].f_28++;
							}
						}
					}
				}
				bVar0 = Global_50170[23022].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_233(230, 150, Function_234(), 4294967295);
					Function_149(6007);
					Function_149(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_232(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_156(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_232(var uParam0, bool bParam1, int iParam2) //Position: 0x6AA3 / 27299
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_233(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6ABB / 27323
{
	Function_226(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_160(iParam0), 1.0f, 0, 0);
	Function_228(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_149(iParam3);
	}
	Function_221(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_174();
}

bool Function_234() //Position: 0x6B21 / 27425
{
	return "MP_TrickShot_Icon_128";
}

void Function_235(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x6B3F / 27455
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_229(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_236(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_237(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_149(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_232(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_156(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_229(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_233(231, 100, Function_237(), 4294967295);
					Function_149(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_232(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_156(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_236(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6C67 / 27751
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_159(uParam0) };
	Function_221(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_232(&uParam5, uParam8, uParam9);
	Function_156(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_163(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_149(iParam12);
	}
	Function_220(uParam0, 4);
	Function_174();
}

var Function_237() //Position: 0x6CDD / 27869
{
	return "MP_Revenge_Icon_128";
}

bool Function_238() //Position: 0x6CF9 / 27897
{
	if (Function_146(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_239(int iParam0) //Position: 0x6D23 / 27939
{
	if (!Function_242(iParam0, Global_30707[0]) && !Function_242(iParam0, Global_30707[2]))
	{
		return 0;
	}
	Function_240(iParam0, "elMatadero", "slaughterHouse01", 1);
	Function_240(iParam0, "elMatadero", "slaughterHouse01", 2);
	Function_240(iParam0, "elMatadero", "slaughterHouse01", 3);
	Function_240(iParam0, "elMatadero", "guardHouse01", 1);
	Function_240(iParam0, "elMatadero", "guardHouse01", 2);
	Function_240(iParam0, "elMatadero", "guardHouse01", 3);
	Function_240(iParam0, "elMatadero", "smokeHouse01", 1);
	Function_240(iParam0, "elMatadero", "residence01", 1);
	Function_240(iParam0, "elMatadero", "residence01", 2);
	Function_240(iParam0, "elMatadero", "residence01", 3);
	Function_240(iParam0, "casaMadrugada", "trainstation01", 1);
	Function_240(iParam0, "casaMadrugada", "ncantina01", 1);
	Function_240(iParam0, "casaMadrugada", "ncantina01", 2);
	Function_240(iParam0, "casaMadrugada", "ncantina01", 3);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 1);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 2);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 3);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 4);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 5);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 6);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 7);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 8);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 9);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 10);
	Function_240(iParam0, "casaMadrugada", "whorehouse01", 11);
	return 1;
}

int Function_240(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0x70E6 / 28902
{
	int iVar0;
	
	iVar0 = iParam0->f_516;
	if (!Function_241(iParam0, uParam1, iParam2, iParam3))
	{
		return 0;
	}
	Function_13(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_241(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7118 / 28952
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

bool Function_242(int iParam0, int iParam1) //Position: 0x7174 / 29044
{
	int iVar0;
	
	if (!Function_109(iParam1))
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

void Function_243(int iParam0, int iParam1) //Position: 0x71EA / 29162
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0x71F8 / 29176
{
	(iParam0 + 228)->f_220 = 0;
	Function_13(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_245(int iParam0) //Position: 0x7210 / 29200
{
	iParam0->f_844 = 0;
	return;
}

void Function_246(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x721C / 29212
{
	Function_247(iParam0 + 276, uParam1, uParam2, uParam3, uParam4);
}

void Function_247(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7234 / 29236
{
	Function_248(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_248(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x724B / 29259
{
	if (!Function_250(iParam1))
	{
		return;
	}
	Function_249(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_249(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x726E / 29294
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

bool Function_250(int iParam0) //Position: 0x7298 / 29336
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x72A8 / 29352
{
	Function_252(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x72C0 / 29376
{
	Function_248(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_253(int iParam0, bool bParam1) //Position: 0x72D5 / 29397
{
	Function_257(iParam0);
	Function_257(iParam0 + 228);
	if (bParam1)
	{
		Function_254(iParam0);
	}
	return;
}

void Function_254(int iParam0) //Position: 0x72F1 / 29425
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_255(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_255(var uParam0, int iParam1) //Position: 0x7311 / 29457
{
	Function_256(uParam0, iParam1, 0);
	return;
}

void Function_256(int iParam0, int iParam1, int iParam2) //Position: 0x731F / 29471
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_257(int iParam0) //Position: 0x7330 / 29488
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_259(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_258(iParam0, 0.0f);
	return;
}

void Function_258(var uParam0, int iParam1) //Position: 0x735D / 29533
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_259(int iParam0) //Position: 0x7369 / 29545
{
	Function_249(iParam0, 4294967295, 0, 1);
	return;
}

void Function_260(bool bParam0) //Position: 0x7377 / 29559
{
	DECOR_SET_OBJECT(Function_261(), "LobbyGringoSet", bParam0);
	return;
}

var Function_261() //Position: 0x7397 / 29591
{
	return Global_83591.f_140;
}

bool Function_262(int iParam0) //Position: 0x73A3 / 29603
{
	Function_265(iParam0);
	if (Function_264())
	{
		Function_244(&Global_83591 + 276, 2);
	}
	Function_263();
	vLocal_48 = { StackVal, StackVal, Function_263() };
	return 1;
}

vector3 Function_263() //Position: 0x73C7 / 29639
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_261();
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

bool Function_264() //Position: 0x740F / 29711
{
	return Function_15(Global_79962, 1024);
}

void Function_265(int iParam0) //Position: 0x741F / 29727
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_266(int iParam0) //Position: 0x742D / 29741
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

void Function_267(bool bParam0) //Position: 0x745C / 29788
{
	Function_205(&Global_79336, bParam0);
	if ((bParam0 && 512) != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_268(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x74B5 / 29877
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

void Function_269() //Position: 0x7545 / 30021
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
	
	Function_270(4, 1);
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
	Local_51.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B3", 3, -408.539f, 24.13407f, 3908.509f, 0.0f, -30.7862f, 0.0f, 0.5965249f, 0.5965249f, 0.5965249f);
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
	*(&Local_51 + 260) = { -500.4177f, 16.24098f, 3649.981f };
	*(&Local_51 + 260 + 12) = { -2.191121f, -31.89411f, 4.141885f };
	Local_51.f_284 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_0", -500.4177f, 16.24098f, 3649.981f, -2.191121f, -31.89411f, 4.141885f);
	*(&Local_51 + 288) = { -578.2761f, 14.35599f, 3771.649f };
	*(&Local_51 + 288 + 12) = { -2.444724f, -29.37021f, 4.975134f };
	Local_51.f_312 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_1", -578.2761f, 14.35599f, 3771.649f, -2.444724f, -29.37021f, 4.975134f);
	*(&Local_51 + 316) = { -661.2814f, 13.05098f, 3906.719f };
	*(&Local_51 + 316 + 12) = { 0.0f, -41.92562f, 0.0f };
	Local_51.f_340 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_2", -661.2814f, 13.05098f, 3906.719f, 0.0f, -41.92562f, 0.0f);
	*(&Local_51 + 344) = { -690.1592f, 11.83219f, 3972.0f };
	*(&Local_51 + 344 + 12) = { 0.0f, 147.6456f, 0.0f };
	Local_51.f_368 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_3", -690.1592f, 11.83219f, 3972.0f, 0.0f, 147.6456f, 0.0f);
	Local_51.f_372 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_51, 8, 0);
	*(&Local_51 + 376[06]) = { -782.5679f, 13.05098f, 3716.196f };
	*(&Local_51 + 376[06] + 12) = { 0.0f, 224.6577f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_D1", -782.5679f, 13.05098f, 3716.196f, 0.0f, 224.6577f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_51.f_372);
	*(&Local_51 + 376[16]) = { -464.3273f, 20.18413f, 3920.636f };
	*(&Local_51 + 376[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_51, "npickup_D2", -464.3273f, 20.18413f, 3920.636f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_51.f_372);
	*(&Local_51 + 376[26]) = { -465.1451f, 21.08236f, 3954.712f };
	*(&Local_51 + 376[26] + 12) = { 0.0f, -270.129f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S1", -465.1451f, 21.08236f, 3954.712f, 0.0f, -270.129f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_51.f_372);
	*(&Local_51 + 376[36]) = { -804.577f, 13.54638f, 3769.03f };
	*(&Local_51 + 376[36] + 12) = { 0.0f, 224.9707f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S2", -804.577f, 13.54638f, 3769.03f, 0.0f, 224.9707f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_51.f_372);
	*(&Local_51 + 376[46]) = { -428.1188f, 22.08628f, 3929.696f };
	*(&Local_51 + 376[46] + 12) = { 0.0f, -270.129f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S3", -428.1188f, 22.08628f, 3929.696f, 0.0f, -270.129f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_51.f_372);
	*(&Local_51 + 376[56]) = { -812.0f, 13.05098f, 3745.583f };
	*(&Local_51 + 376[56] + 12) = { 0.0f, 222.8897f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_S4", -812.0f, 13.05098f, 3745.583f, 0.0f, 222.8897f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_51.f_372);
	*(&Local_51 + 376[66]) = { -518.0001f, 17.44651f, 3887.917f };
	*(&Local_51 + 376[66] + 12) = { 8.078783f, -135.0755f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A1", -518.0001f, 17.44651f, 3887.917f, 8.078783f, -135.0755f, 0.0f);
	DECOR_SET_INT(bVar7, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_51.f_372);
	*(&Local_51 + 376[76]) = { -727.8762f, 12.04706f, 3779.129f };
	*(&Local_51 + 376[76] + 12) = { 0.0f, 98.5025f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A2", -727.8762f, 12.04706f, 3779.129f, 0.0f, 98.5025f, 0.0f);
	DECOR_SET_INT(bVar8, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_51.f_372);
	*(&Local_51 + 376[86]) = { -678.9176f, 12.49668f, 3900.816f };
	*(&Local_51 + 376[86] + 12) = { 186.4206f, -150.7948f, -175.5593f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A3", -678.9176f, 12.49668f, 3900.816f, 186.4206f, -150.7948f, -175.5593f);
	DECOR_SET_INT(bVar9, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_51.f_372);
	*(&Local_51 + 376[96]) = { -600.0768f, 13.04325f, 3744.488f };
	*(&Local_51 + 376[96] + 12) = { 4.415702f, -198.857f, 2.615783f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A4", -600.0768f, 13.04325f, 3744.488f, 4.415702f, -198.857f, 2.615783f);
	DECOR_SET_INT(bVar10, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_51.f_372);
	Local_51.f_620 = CREATE_OBJECTSET_IN_LAYOUT(Function_95(), Local_51, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "fiddle", "stand_fiddle_w_fiddle", -602.8398f, 12.80266f, 3735.799f, 0.0f, -104.3843f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "fiddle1", "stand_fiddle_w_fiddle", -595.5592f, 12.80847f, 3737.876f, 0.0f, 102.5061f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "fiddle2", "stand_fiddle_w_fiddle", -600.5227f, 12.80773f, 3739.735f, 0.0f, -23.70763f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "rowdydrink", "stand_drunk_rowdydrink", -596.49f, 12.82946f, 3743.874f, 0.0f, 0.0f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "rowdydrink1", "stand_drunk_rowdydrink", -599.3608f, 12.80364f, 3733.986f, 0.0f, -161.9575f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "rowdydrink2", "stand_drunk_rowdydrink", -605.3611f, 12.80098f, 3742.415f, 0.0f, 0.0f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "drunkdance", "stand_drunkdancing_e_any", -597.2822f, 12.80752f, 3738.681f, 0.0f, 0.0f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "drunkdance1", "stand_drunkdancing_e_any", -598.4981f, 12.80638f, 3737.806f, 0.0f, -102.671f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "drunkdance2", "stand_drunkdancing_e_any", -599.6803f, 12.80547f, 3737.591f, 0.0f, 58.99036f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "drunkdance3", "stand_drunkdancing_e_any", -600.3588f, 12.8044f, 3735.77f, 0.0f, 108.3344f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "drunkdance4", "stand_drunkdancing_e_any", -594.4688f, 12.81167f, 3739.695f, 0.0f, 67.75262f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "drunkdance5", "stand_drunkdancing_e_any", -603.4825f, 12.80408f, 3738.56f, 0.0f, -49.58071f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "drunkdance6", "stand_drunkdancing_e_any", -600.3724f, 12.80244f, 3732.476f, 0.0f, 138.1678f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smokestand", "smoking_stand", -595.2509f, 12.80336f, 3734.062f, 0.0f, 140.6372f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smokestand1", "smoking_stand", -602.8878f, 12.8013f, 3732.734f, 0.0f, -157.9678f, 0.0f), Local_51.f_620);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smokestand2", "smoking_stand", -593.5535f, 12.82946f, 3743.415f, 0.0f, 63.92785f, 0.0f), Local_51.f_620);
	Local_51.f_624 = CREATE_OBJECTSET_IN_LAYOUT(Function_95(), Local_51, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "gatlingGun01x0", "p_gen_gatlingGun01x", -608.0994f, 13.08056f, 3754.339f, 0.0f, 92.62475f, 0.0f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "gatlingGun01x1", "p_gen_gatlingGun01x", -596.3326f, 13.41128f, 3757.365f, -1.502471f, 230.7494f, 0.1384609f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x0", "p_gen_crateTnt01x", -604.0f, 13.24709f, 3752f, 0.0f, -39.3381f, 0.0f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x1", "p_gen_crateTnt01x", -598.2893f, 13.26501f, 3752.582f, 0.0f, 121.2567f, 0.0f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x2", "p_gen_crateTnt01x", -601.893f, 13.35344f, 3754.107f, 0.0f, 193.54f, 0.0f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "skullPost02x0", "p_gen_skullPost02x", -640.1327f, 25.55029f, 3883.983f, 0.0f, 0.0f, 0.0f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "skullPost02x1", "p_gen_skullPost02x", -641.5231f, 25.55029f, 3881.522f, 0.0f, -34.7461f, 0.0f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x3", "p_gen_crateTnt01x", -640.394f, 23.04599f, 3884.848f, 15.47376f, -39.01049f, -14.15389f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x4", "p_gen_crateTnt01x", -639.5186f, 23.1962f, 3883.845f, 19.69159f, -39.01049f, -14.15389f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x5", "p_gen_crateTnt01x", -642.4231f, 23.57226f, 3881.33f, 5.123865f, -42.73289f, 7.939429f, 1), Local_51.f_624);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_51, "crateTnt01x6", "p_gen_crateTnt01x", -643.2827f, 23.33461f, 3882.284f, 5.123865f, -42.73289f, 7.939429f, 1), Local_51.f_624);
	return;
}

void Function_270(int iParam0, int iParam1) //Position: 0x89D1 / 35281
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

void Function_271(int iParam0) //Position: 0x8A1A / 35354
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_273("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_272(StackVal, 0);
	return;
}

void Function_272(var uParam0, int iParam1) //Position: 0x8A8C / 35468
{
	Function_126(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_125(StackVal, iParam1);
	}
	return;
}

bool Function_273(char* cParam0) //Position: 0x8ABD / 35517
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8ADC / 35548
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_275() //Position: 0x8B1E / 35614
{
	while (!IS_EXITFLAG_SET())
	{
		Function_30(4901, 35644);
		WAIT(0);
	}
	return;
}

int Function_276(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x8B3C / 35644
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_59(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_58(bParam0);
	bVar2 = Function_57(bParam0);
	bVar3 = Function_54(bParam0);
	iVar4 = Function_53(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_33(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_51(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_14(4))
	{
		if (Function_45(bParam0, 1, 1))
		{
			if (Function_48(bParam0))
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
		Function_44(bVar0, bParam0);
	}
	if (Function_48(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_39() && Function_43())
	{
	}
	return 0;
}

bool Function_277() //Position: 0x8C3F / 35903
{
	return Function_136(2);
}

void Function_278() //Position: 0x8C49 / 35913
{
	if (Function_277())
	{
		return;
	}
	Function_288();
	Function_286(&bLocal_39, "MP_CTF", 10, 0);
	Function_286(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_280(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_101();
	Function_279();
	return;
}

void Function_279() //Position: 0x8CAD / 36013
{
	while (!Function_136(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_280(int iParam0) //Position: 0x8CC8 / 36040
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_285();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_284(iParam0[iVar03], 8);
		}
		else if (Function_283())
		{
			iVar1 = 1;
			Function_284(iParam0[iVar03], 8);
		}
		Function_284(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_7(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_7(iParam0[03], 8) || iVar1));
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
				Function_284(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
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
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
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
	Function_281();
	return 1;
}

void Function_281() //Position: 0x9043 / 36931
{
	if (!Function_282(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_282(int iParam0) //Position: 0x9083 / 36995
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_283() //Position: 0x909F / 37023
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

void Function_284(var uParam0, int iParam1) //Position: 0x90CA / 37066
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_285() //Position: 0x90DB / 37083
{
	if (!Function_282(128))
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

var Function_286(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x911D / 37149
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_287(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_284(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_287(var uParam0, int iParam1, int iParam2) //Position: 0x9155 / 37205
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_284(uParam0[iVar03], 4);
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

void Function_288() //Position: 0x9219 / 37401
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

