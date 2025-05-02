//Decompiled with MagicRDR v1.0
//Function Count : 77
//Statics Count : 424
//Natives Count : 108
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	vector3 vLocal_4 = { 0.0f, 0.0f, 0.0f };
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	struct<2> Local_10[16];
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
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
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 6;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	struct<81> Local_102 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 5;
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
	var uLocal_288 = 3;
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
	var uLocal_304 = 2;
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
	var uLocal_320 = 5;
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
	var uLocal_362 = 2;
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
#endregion

void main() //Position: 0x0 / 0
{
	Function_75();
	Function_6(&iLocal_264);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x16 / 22
{
	Function_2(&iLocal_264 + 8);
	RELEASE_LAYOUT_REF(&iLocal_264);
	return;
}

void Function_2(int iParam0) //Position: 0x2B / 43
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x53 / 83
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
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
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0x19E / 414
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x1BB / 443
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(var uParam0) //Position: 0x1D9 / 473
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 1;
	Function_74();
	while (!IS_EXITFLAG_SET() && iVar0)
	{
		switch (iVar3)
		{
			case 0x00000000:
				bVar4 = GET_LOCAL_SLOT();
				if (bVar4 <= 0 && bVar4 > 16)
				{
					Local_10[GET_LOCAL_SLOT()2] = Global_120007;
					REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_10, 66);
					Function_72(1);
					Function_69(Function_71());
					iVar3 = 6;
				}
				break;
			
			case 0x00000006:
				if (_IS_CLIENT_DATA_VALID_FOR_SLOT_2(&Local_10, 1))
				{
					Function_55(&uParam0);
					iVar3 = 7;
				}
				break;
			
			case 0x00000007:
				Function_52();
				bVar1 = Function_45();
				bVar2 = Function_42(Global_124175.f_68);
				if (!bVar1)
				{
				}
				if (!bVar2)
				{
				}
				if (bVar1 && bVar2)
				{
					iVar3 = 8;
				}
				break;
			
			case 0x00000008:
				Function_52();
				if (Function_27(7, 1, 0x3f800000))
				{
					Function_25(&uParam0);
					Function_15();
					uLocal_260 = LAUNCH_NEW_SCRIPT_WITH_ARGS(Function_14(), &Local_102, 48, 0);
					iVar3 = 9;
				}
				break;
			
			case 0x00000009:
				if (IS_SCRIPT_VALID(&uLocal_260))
				{
					iVar3 = 10;
				}
				break;
			
			case 0x0000000A:
				if (!IS_SCRIPT_VALID(&uLocal_260))
				{
					iVar0 = 0;
				}
				break;
		}
		WAIT(false);
	}
	NET_LOG(true, GET_SHORT_SCRIPT_NAME(), "Minigame instance script complete. Shutting down.", 0, 0, 0, 0);
	iVar5 = 0;
	while (iVar5 <= 6)
	{
		if (vLocal_150[iVar59].y > 0)
		{
			NET_GAMER_SET_ACTOR_OVERRIDE(vLocal_150[iVar59].y, 0);
		}
		iVar5++;
	}
	Function_11();
	Function_7();
	Function_2(&uLocal_76);
	EQUIP_ACCESSORY(Function_71(), 1, 1);
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	return;
}

void Function_7() //Position: 0x36B / 875
{
	Function_8(1024, 0, 1);
	Function_8(1, 0, 0);
	return;
}

void Function_8(int iParam0, bool bParam1, int iParam2) //Position: 0x37F / 895
{
	iParam2 = &iParam2;
	if (bParam1)
	{
		Function_10(&Global_120031 + 260, iParam0);
	}
	else
	{
		Function_9(&Global_120031 + 260, iParam0);
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x3AB / 939
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x3C1 / 961
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_11() //Position: 0x3D2 / 978
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_71(), true);
	Function_13(1);
	if (!Function_12())
	{
		SET_POP_DENSITY_MULTIPLIER(1.0f);
	}
	SET_TIME_ACCELERATION(Global_99471);
	RESET_FACTIONS();
	HUD_ENABLE(1);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	return;
}

bool Function_12() //Position: 0x426 / 1062
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_13(var uParam0) //Position: 0x42F / 1071
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

var Function_14() //Position: 0x442 / 1090
{
	return "$/content/Mini_Games/LiarsDice/LiarsDice";
}

void Function_15() //Position: 0x473 / 1139
{
	struct<17> Var0;
	
	Function_17();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_16(&Var0);
	return;
}

void Function_16(vector3 vParam0) //Position: 0x495 / 1173
{
	vLocal_4 = { StackVal, StackVal, vParam0 };
	return;
}

void Function_17() //Position: 0x4A4 / 1188
{
	Function_18();
	return;
}

void Function_18() //Position: 0x4AD / 1197
{
	Function_19(4294967286);
	return;
}

void Function_19(bool bParam0) //Position: 0x4B9 / 1209
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_24(&uVar0);
		Function_23(&vVar1);
		vVar1.z = uVar0;
		Function_16(&vVar1);
	}
	Function_22(&uVar0, bParam0);
	Function_21(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_20(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_20(int iParam0, int iParam1) //Position: 0x4F6 / 1270
{
	*(&Local_10[iParam12] + 4) = &iParam0;
	return;
}

void Function_21(int iParam0) //Position: 0x509 / 1289
{
	*(&Local_10[GET_LOCAL_SLOT()2] + 4) = &iParam0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x51D / 1309
{
	uParam0 = iParam1;
	return;
}

void Function_23(vector3 vParam0) //Position: 0x529 / 1321
{
	vParam0 = { StackVal, StackVal, vLocal_4 };
	return;
}

void Function_24(int iParam0) //Position: 0x538 / 1336
{
	iParam0 = &Local_10[GET_LOCAL_SLOT()2] + 4;
	return;
}

void Function_25(int iParam0) //Position: 0x54C / 1356
{
	int iVar0;
	struct<2> Var1;
	
	iParam0 = &iParam0;
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (vLocal_150[iVar09].y != 4294967295)
		{
			Function_26(&Global_124175 + 56, (IntToFloat(iVar0) * 30.0f));
			Var1 = Function_26(&Global_124175 + 56, (IntToFloat(iVar0) * 30.0f));
			if (vLocal_150[iVar09].y == 4294967294)
			{
				*(&Local_102 + 4[iVar0]) = Function_71();
			}
			else
			{
				*(&Local_102 + 4[iVar0]) = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &vLocal_150[iVar09] + 8, vLocal_150[iVar09], Var1, Vector(0.0f, 0.0f, 0.0f));
				DECOR_SET_INT(&Local_102 + 4[iVar0], "FakeSlot", vLocal_150[iVar09].y);
				NET_GAMER_SET_ACTOR_OVERRIDE(vLocal_150[iVar09].y, &Local_102 + 4[iVar0]);
			}
			SET_ACTOR_UPDATE_PRIORITY(&Local_102 + 4[iVar0], false);
			DEEQUIP_ACCESSORY(&Local_102 + 4[iVar0], 0);
			DEEQUIP_ACCESSORY(&Local_102 + 4[iVar0], 1);
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

struct<8> Function_26(struct<2> Param0) //Position: 0x633 / 1587
{
	struct<2> Var0;
	
	Var0 = Param0;
	ROTATE_VECTOR_XZ(&Var0, bParam1, 0);
	return StackVal, Var0;
}

bool Function_27(bool bParam0, bool bParam1, float fParam2) //Position: 0x64D / 1613
{
	struct<17> Var0;
	
	if (&bParam1)
	{
		Function_41(bParam0);
	}
	Function_23(&Var0);
	fVar3 = NET_GET_NET_TIME();
	iVar4 = 0;
	if ((fVar3 - Var0.f_12) <= &fParam2)
	{
		Var0.f_12 = fVar3;
		iVar4 = 1;
		Function_16(&Var0);
	}
	if (Function_40(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_39(&Var0, 0);
		Function_16(&Var0);
		Function_18();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_38(bParam0, iVar4, &uVar5))
	{
		if (Function_37())
		{
			if (!Function_35(&Var0))
			{
				Var6 = bParam0;
				Var6.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var6, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var6)));
				Function_34(&Var0, 1);
				Function_16(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar3;
			Function_16(&Var0);
		}
		else
		{
			fVar7 = (fVar3 - Var0.f_16);
			if (fVar7 <= 60.0f || (uVar5 && fVar7 <= 25.0f))
			{
				if (Function_28(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
					Var8 = GET_LOCAL_SLOT();
					Var8.f_4 = fVar3;
					NET_SCRIPTMSG_SEND(1, 104, &Var8, 4, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_16(&Var0);
	}
	return 0;
}

bool Function_28(int iParam0) //Position: 0x8A2 / 2210
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_33(bVar0))
		{
			iVar1 = Function_29(bVar0);
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

int Function_29(bool bParam0) //Position: 0x8E5 / 2277
{
	int iVar0;
	
	Function_32(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_24(&iVar0);
	}
	else
	{
		Function_31(&iVar0, bParam0);
	}
	return Function_30(&iVar0);
}

int Function_30(int iParam0) //Position: 0x90C / 2316
{
	return iParam0;
}

void Function_31(int iParam0, int iParam1) //Position: 0x916 / 2326
{
	iParam0 = &Local_10[iParam12] + 4;
	return;
}

void Function_32(int iParam0) //Position: 0x929 / 2345
{
	Function_22(&iParam0, 4294967286);
	return;
}

bool Function_33(bool bParam0) //Position: 0x938 / 2360
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_10, bParam0);
}

void Function_34(var uParam0, bool bParam1) //Position: 0x945 / 2373
{
	if (bParam1)
	{
		Function_10(&uParam0, 2);
	}
	else
	{
		Function_9(&uParam0, 2);
	}
	return;
}

bool Function_35(int iParam0) //Position: 0x961 / 2401
{
	return Function_36(iParam0, 2);
}

bool Function_36(var uParam0, bool bParam1) //Position: 0x96F / 2415
{
	return (uParam0 && bParam1) == 0;
}

bool Function_37() //Position: 0x97C / 2428
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

bool Function_38(int iParam0, var uParam1, int iParam2) //Position: 0x99A / 2458
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
		if (Function_33(iVar0))
		{
			iVar1 = Function_29(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_39(int iParam0, bool bParam1) //Position: 0x9EC / 2540
{
	if (bParam1)
	{
		Function_10(&iParam0, 1);
	}
	else
	{
		Function_9(&iParam0, 1);
	}
	return;
}

bool Function_40(int iParam0) //Position: 0xA08 / 2568
{
	return Function_36(iParam0, 1);
}

void Function_41(int iParam0) //Position: 0xA16 / 2582
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar21;
	
	bVar0 = iParam0;
	Function_24(&iVar1);
	if (Function_30(&iVar1) != bVar0)
	{
		Function_23(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar5, "Next lockstep state same as last state (", 64);
			stradd(&cVar5, I2STR(bVar0), 64);
			stradd(&cVar5, "). May be fine.", 64);
			if (Function_36(Var2, 4))
			{
			}
		}
		bVar21 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar21), I2STR(bVar21), I2STR(bVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_19(bVar0);
		Function_34(&Var2, 0);
		Function_16(&Var2);
	}
	return;
}

int Function_42(int iParam0) //Position: 0xB13 / 2835
{
	if (!Function_44(iParam0))
	{
		return 1;
	}
	return Function_43(&(Global_43791[iParam0]), 4);
}

int Function_43(var uParam0, int iParam1) //Position: 0xB2F / 2863
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(int iParam0) //Position: 0xB4C / 2892
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_45() //Position: 0xB62 / 2914
{
	return Function_46(&uLocal_76);
}

int Function_46(struct<2>[] Param0) //Position: 0xB6D / 2925
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_51();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_50(&(Param0[iVar02]), 8);
		}
		else if (Function_49())
		{
			iVar1 = 1;
			Function_50(&(Param0[iVar02]), 8);
		}
		Function_50(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_5(&(Param0[02]), 8) || iVar1));
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
				Function_50(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
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
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
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
	Function_47();
	return 1;
}

void Function_47() //Position: 0xF2F / 3887
{
	if (!Function_48(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_48(int iParam0) //Position: 0xF6F / 3951
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_49() //Position: 0xF8B / 3979
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

void Function_50(struct<13> Param0) //Position: 0xFB9 / 4025
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_51() //Position: 0xFCC / 4044
{
	if (!Function_48(128))
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

void Function_52() //Position: 0x100E / 4110
{
	Function_53(4);
	return;
}

void Function_53(int iParam0) //Position: 0x1018 / 4120
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
			Function_54(iParam0);
		}
	}
	return;
}

void Function_54(int iParam0) //Position: 0x104A / 4170
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_55(int iParam0) //Position: 0x1059 / 4185
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	
	Function_65(&Local_102, &iParam0);
	Local_102.f_80 = 1;
	Local_102.f_76 = 2;
	iVar1 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 6)
	{
		(&Local_102 + 4[bVar0]) = "";
		vLocal_150[bVar09].f_4 = 4294967295;
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			iVar3 = Function_64(iVar1, 6);
			if (bVar0 != bVar2)
			{
				strcpy(&vLocal_150[iVar39] + 8, GET_SLOT_NAME(bVar0), 32);
				vLocal_150[iVar39] = Local_10[bVar02];
				Function_63(&uLocal_76, vLocal_150[iVar39], 3, 0);
				vLocal_150[iVar39].y = bVar0;
			}
			else
			{
				vLocal_150[iVar39].f_4 = 4294967294;
			}
			Function_62(&Local_102, iVar3);
			iVar1++;
		}
		bVar0++;
	}
	uVar4 = FIND_VOLUME_IN_LAYOUT(&iParam0, "StayOutVol");
	if (!IS_VOLUME_VALID(&uVar4))
	{
		uVar4 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, "StayOutVol", 2,802597E-45f, *(&Local_102 + 60), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	}
	RESET_PROPS_IN_VOLUME(&uVar4, 3);
	Function_60(0, 1);
	DEEQUIP_ACCESSORY(Function_71(), 1);
	Function_57();
	Function_56(1);
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	return;
}

void Function_56(int iParam0) //Position: 0x1185 / 4485
{
	int iVar0;
	
	if (Function_36(iParam0, 1) && Function_36(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_57() //Position: 0x11B9 / 4537
{
	Function_56(4);
	Function_58(1, 0);
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x11C8 / 4552
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
			Function_59(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_59(struct<113> Param0) //Position: 0x124F / 4687
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

void Function_60(bool bParam0, bool bParam1) //Position: 0x12AD / 4781
{
	var uVar0;
	
	SATCHEL_SET_ENABLED(0);
	uVar0 = Function_71();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&uVar0);
	Function_61(1);
	SET_ACTOR_POSTURE(&uVar0, 0);
	FIRE_STOP_ALL_FIRES();
	if (&bParam0)
	{
		ACTOR_START_FORCE_HOLSTER(&uVar0, 0, 0);
	}
	else
	{
		ACTOR_END_FORCE_HOLSTER(&uVar0);
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
		CANCEL_TIME_WARP(0);
	}
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
	if (&bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_61(int iParam0) //Position: 0x130C / 4876
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_62(struct<24> Param0) //Position: 0x1329 / 4905
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	iParam1 = iParam1;
	return;
}

var Function_63(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0x133F / 4927
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_50(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_50(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_64(int iParam0, int iParam1) //Position: 0x141B / 5147
{
	if ((NET_GET_SESSION_GAMER_COUNT() != 2 && iParam0 != 1) && (iParam1 % 2) != 0)
	{
		return (iParam1 / 2);
	}
	return ((iParam0 * 2 % iParam1) + ((iParam1 + 1 % 2) * (iParam0 * 2 / iParam1)));
}

void Function_65(struct<73> Param0) //Position: 0x1450 / 5200
{
	int iVar0;
	
	iParam1 = &iParam1;
	Function_68(Global_124175.f_68);
	*(&Param0 + 60) = Function_68(Global_124175.f_68);
	Param0.f_72 = Function_67(Global_124175.f_68);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Function_66(Global_124175.f_68, iVar0);
		*(&Param0 + 84[iVar02]) = Function_66(Global_124175.f_68, iVar0);
		iVar0++;
	}
	return;
}

struct<8> Function_66(int iParam0, int iParam1) //Position: 0x14A0 / 5280
{
	if (iParam0 == Global_46850[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-4288,696f, 26,72937f, 4381,383f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-4289,277f, 26,72937f, 4381,477f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-4289,651f, 26,72937f, 4381,039f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-4289,435f, 26,72937f, 4380,51f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-4288,878f, 26,72937f, 4380,39f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-4288,485f, 26,72937f, 4380,807f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(167,5964f, 73,74156f, 2222,775f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(167,958f, 73,74529f, 2222,327f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(168,5496f, 73,74591f, 2222,387f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(168,7889f, 73,74529f, 2222,935f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(168,4313f, 73,74976f, 2223,425f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(167,8298f, 73,74976f, 2223,35f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-788,6586f, 13,16462f, 3698,422f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-788,4316f, 13,16762f, 3698,957f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-788,7964f, 13,165f, 3699,425f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-789,389f, 13,165f, 3699,35f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-789,6095f, 13,165f, 3698,805f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-789,2333f, 13,165f, 3698,335f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(856,9058f, 77,51558f, 1278,093f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(856,6888f, 77,51558f, 1277,556f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(857,0518f, 77,51558f, 1277,099f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(857,629f, 77,51558f, 1277,148f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(857,8614f, 77,51558f, 1277,699f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(857,4864f, 77,51558f, 1278,173f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

var Function_67(int iParam0) //Position: 0x178D / 6029
{
	if (iParam0 == Global_46850[0])
	{
		return -147,9631f;
	}
	if (iParam0 == Global_46816[1])
	{
		return 72,52222f;
	}
	if (iParam0 == Global_46894[2])
	{
		return -47,22866f;
	}
	if (iParam0 == Global_46914[0])
	{
		return 136,712f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f;
}

struct<8> Function_68(int iParam0) //Position: 0x1803 / 6147
{
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4289,077f, 27,542f, 4380,94f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(168,1746f, 74,54424f, 2222,892f);
	}
	if (iParam0 == Global_46894[2])
	{
		return StackVal, Vector(-789,002f, 13,965f, 3698,875f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(857,259f, 78,3169f, 1277,636f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_69(int iParam0) //Position: 0x18A8 / 6312
{
	Function_70(128, 1);
	SET_ACTOR_INVULNERABILITY(&iParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(&iParam0), 0);
	AI_IGNORE_ACTOR(&iParam0);
	return;
}

void Function_70(int iParam0, bool bParam1) //Position: 0x18CC / 6348
{
	if (bParam1)
	{
		Function_10(&Global_122919 + 192, iParam0);
	}
	else
	{
		Function_9(&Global_122919 + 192, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_120101[GET_LOCAL_SLOT()88].f_192 = Global_122919.f_192;
	}
	return;
}

int Function_71() //Position: 0x1907 / 6407
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_72(bool bParam0) //Position: 0x191C / 6428
{
	struct<17> Var0;
	
	Function_23(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar3, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar3));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (&bParam0)
	{
		Function_10(&Var0, 4);
	}
	Function_16(&Var0);
	Function_17();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 6511);
	return;
}

void Function_73(int iParam0) //Position: 0x196F / 6511
{
	struct<5> Var0;
	bool bVar5;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_23(&Var1);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), 0, 0);
		return;
	}
	Function_24(&iVar4);
	if (Function_40(&Var1))
	{
	}
	bVar5 = Function_30(&iVar4);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar5), 0, 0);
	if (bVar5 < 4294967286 && bVar5 == Var0)
	{
	}
	Function_39(&Var1, 1);
	Function_16(&Var1);
	return;
}

void Function_74() //Position: 0x1A72 / 6770
{
	Function_8(1024, 1, 0);
	Function_8(1, 0, 0);
	return;
}

void Function_75() //Position: 0x1A86 / 6790
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	Function_76(4, 1);
	uVar0 = &uVar0;
	iLocal_264 = CREATE_LAYOUT("LiarsDice_ESC_layout");
	(&iLocal_264 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_264, "StayOutVol", 2,802597E-45f, Vector(-4289,116f, 26,87325f, 4380,855f), Vector(0.0f, 0.0f, 0.0f), Vector(4,628785f, 4,628785f, 4,628785f));
	*(&iLocal_264 + 216) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene_1Set", &iLocal_264, 8, 0);
	*(&iLocal_264 + 224[03]) = Vector(-4288,734f, 26,72937f, 4383,188f);
	*(&iLocal_264 + 224[03] + 12) = Vector(0.0f, 334,2308f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "PlayerPosition", Vector(-4288,734f, 26,72937f, 4383,188f), Vector(0.0f, 334,2308f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_264 + 216);
	*(&iLocal_264 + 224[13]) = Vector(-4290,303f, 26,72937f, 4383,188f);
	*(&iLocal_264 + 224[13] + 12) = Vector(0.0f, 340,6316f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "AI_0_Position", Vector(-4290,303f, 26,72937f, 4383,188f), Vector(0.0f, 340,6316f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_264 + 216);
	*(&iLocal_264 + 224[23]) = Vector(-4291,237f, 26,72937f, 4380,636f);
	*(&iLocal_264 + 224[23] + 12) = Vector(0.0f, -111,0241f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "AI_1_Position", Vector(-4291,237f, 26,72937f, 4380,636f), Vector(0.0f, -111,0241f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_264 + 216);
	*(&iLocal_264 + 224[33]) = Vector(-4291,237f, 26,72937f, 4382,301f);
	*(&iLocal_264 + 224[33] + 12) = Vector(0.0f, -62,80356f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "AI_2_Position", Vector(-4291,237f, 26,72937f, 4382,301f), Vector(0.0f, -62,80356f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_264 + 216);
	*(&iLocal_264 + 224[43]) = Vector(-4286,724f, 26,72937f, 4380,738f);
	*(&iLocal_264 + 224[43] + 12) = Vector(0.0f, 461,8926f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "AI_3_Position", Vector(-4286,724f, 26,72937f, 4380,738f), Vector(0.0f, 461,8926f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_264 + 216);
	*(&iLocal_264 + 352) = Vector(-4289,077f, 27,542f, 4380,94f);
	*(&iLocal_264 + 352 + 12) = Vector(0.0f, -147,9631f, 0.0f);
	*(&iLocal_264 + 376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "TableCenter", Vector(-4289,077f, 27,542f, 4380,94f), Vector(0.0f, -147,9631f, 0.0f));
	*(&iLocal_264 + 384) = CREATE_OBJECTSET_IN_LAYOUT("Waitress_PositionsSet", &iLocal_264, 8, 0);
	*(&iLocal_264 + 392[03]) = Vector(-4292,886f, 26,72937f, 4382,301f);
	*(&iLocal_264 + 392[03] + 12) = Vector(0.0f, -56,72712f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "Waitress_0_Pos", Vector(-4292,886f, 26,72937f, 4382,301f), Vector(0.0f, -56,72712f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_264 + 384);
	*(&iLocal_264 + 392[13]) = Vector(-4292,067f, 26,72937f, 4384,064f);
	*(&iLocal_264 + 392[13] + 12) = Vector(0.0f, 316,5581f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "Waitress_1_Pos", Vector(-4292,067f, 26,72937f, 4384,064f), Vector(0.0f, 316,5581f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_264 + 384);
	*(&iLocal_264 + 448) = Vector(-4288,696f, 26,72937f, 4381,383f);
	*(&iLocal_264 + 448 + 12) = Vector(0.0f, 19,32971f, 0.0f);
	*(&iLocal_264 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "Seat_0", Vector(-4288,696f, 26,72937f, 4381,383f), Vector(0.0f, 19,32971f, 0.0f));
	*(&iLocal_264 + 480) = Vector(-4289,277f, 26,72937f, 4381,477f);
	*(&iLocal_264 + 480 + 12) = Vector(0.0f, -42,02172f, 0.0f);
	*(&iLocal_264 + 504) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "Seat_1", Vector(-4289,277f, 26,72937f, 4381,477f), Vector(0.0f, -42,02172f, 0.0f));
	*(&iLocal_264 + 512) = Vector(-4289,651f, 26,72937f, 4381,039f);
	*(&iLocal_264 + 512 + 12) = Vector(0.0f, -100,0572f, 0.0f);
	*(&iLocal_264 + 536) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "Seat_2", Vector(-4289,651f, 26,72937f, 4381,039f), Vector(0.0f, -100,0572f, 0.0f));
	*(&iLocal_264 + 544) = Vector(-4289,435f, 26,72937f, 4380,51f);
	*(&iLocal_264 + 544 + 12) = Vector(0.0f, -159,2302f, 0.0f);
	*(&iLocal_264 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "Seat_3", Vector(-4289,435f, 26,72937f, 4380,51f), Vector(0.0f, -159,2302f, 0.0f));
	*(&iLocal_264 + 576) = Vector(-4288,878f, 26,72937f, 4380,39f);
	*(&iLocal_264 + 576 + 12) = Vector(0.0f, 140,1586f, 0.0f);
	*(&iLocal_264 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "Seat_4", Vector(-4288,878f, 26,72937f, 4380,39f), Vector(0.0f, 140,1586f, 0.0f));
	*(&iLocal_264 + 608) = Vector(-4288,485f, 26,72937f, 4380,807f);
	*(&iLocal_264 + 608 + 12) = Vector(0.0f, 78,3755f, 0.0f);
	*(&iLocal_264 + 632) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_264, "Seat_5", Vector(-4288,485f, 26,72937f, 4380,807f), Vector(0.0f, 78,3755f, 0.0f));
	return;
}

void Function_76(int iParam0, int iParam1) //Position: 0x2099 / 8345
{
	switch (&iParam1)
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

