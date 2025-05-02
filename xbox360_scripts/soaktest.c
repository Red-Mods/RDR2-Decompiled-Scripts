//Decompiled with MagicRDR v1.0
//Function Count : 43
//Statics Count : 444
//Natives Count : 108
//Parameters Count : 0

#region Local Var
	vector3 vLocal_0 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_3 = false;
	bool bLocal_4 = false;
	int iLocal_5 = 0;
	float fLocal_6 = 0.0f;
	int iLocal_7 = 0;
	bool bLocal_8 = false;
	int iLocal_9 = 0;
	bool bLocal_10 = false;
	bool bLocal_11 = false;
	bool bLocal_12 = false;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	bool bLocal_17 = false;
	bool bLocal_18 = false;
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	int iLocal_22[146] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_169 = 0.0f;
	bool bLocal_170 = false;
	float fLocal_171 = 0.0f;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = false;
	vector3 vLocal_175 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_178 = false;
	bool bLocal_179 = false;
	int iLocal_180 = 0;
	float fLocal_181 = 0.0f;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = false;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	bool bLocal_189 = false;
	int iLocal_190 = 0;
	bool bLocal_191 = false;
	bool bLocal_192 = false;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	struct<21> Local_196 = { 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_217 = 0;
	var uLocal_218 = 15;
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
	struct<21> Local_234 = { 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_255 = 0;
	var uLocal_256 = 15;
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
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	struct<41> Local_274 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_443 = false;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	int iVar24;
	vector3 vVar25;
	int iVar28;
	struct<10> Var29;
	vector3 vVar39;
	int iVar42;
	int iVar43;
	bool bVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	bool bVar49;
	bool bVar50;
	int iVar51;
	int iVar52;
	bool bVar53;
	vector3 vVar54;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	float fVar62;
	vector3 vVar63;
	bool bVar66;
	struct<9> Var67;
	
	bLocal_10 = true;
	bLocal_12 = false;
	iLocal_13 = 0;
	iLocal_14 = 1;
	bLocal_15 = false;
	bLocal_16 = false;
	bLocal_17 = false;
	bLocal_20 = 976;
	bLocal_21 = 96;
	fLocal_169 = 10000.0f;
	bLocal_170 = 300.0f;
	fLocal_171 = 0.0f;
	iLocal_173 = 150;
	iLocal_180 = 4294967295;
	fLocal_181 = 100.0f;
	iLocal_182 = 100;
	iLocal_183 = 0;
	iLocal_184 = 0;
	iLocal_185 = 0;
	bLocal_186 = true;
	iLocal_187 = 0;
	iLocal_188 = 1;
	bLocal_189 = true;
	iLocal_190 = 1;
	bLocal_191 = true;
	bLocal_192 = true;
	iLocal_193 = 0;
	iLocal_194 = 1;
	iLocal_195 = 15;
	iLocal_272 = 4;
	iLocal_273 = 3;
	bVar0 = Function_42();
	Function_40(4096);
	PRINT_BIG("Use the widget bank scripts/loadtest to control this script", 1084227584, 0, 2, 0);
	SET_ACTOR_INVULNERABILITY(bVar0, true);
	SET_WEAPONENUM_LOCKED(24, 0);
	SET_WEAPONENUM_LOCKED(23, 0);
	SET_WEAPONENUM_LOCKED(40, 0);
	_SET_ACTOR_INFINITE_AMMO_FLAG(bVar0, 6, true);
	SET_DEBUG_DRAW(1);
	GET_POSITION(bVar0, &vLocal_0);
	iVar1 = 6;
	uLocal_436[0] = "$/fragments/p_gen_potclay01x";
	uLocal_436[3] = "$/fragments/p_crd_chips004x";
	uLocal_436[2] = "$/fragments/p_gen_gatlingMaxim02x";
	uLocal_436[1] = "p_gen_bottle01x";
	uLocal_436[4] = "p_gen_sackcorn02x";
	uLocal_436[5] = "p_gen_barrel01x";
	iVar2 = 0;
	uVar3[iVar2] = "CannonballExplosion";
	iVar2++;
	uVar3[iVar2] = "LargeFireExplosion";
	iVar2++;
	uVar3[iVar2] = "DynamiteExplosion";
	iVar2++;
	uVar3[iVar2] = "FireBottleExplosion";
	iVar2++;
	uVar3[iVar2] = "ExplosionSmall";
	iVar2++;
	uVar3[iVar2] = "ExplosionMedium";
	iVar2++;
	uVar3[iVar2] = "GrenadeExplosion";
	iVar2++;
	uVar3[iVar2] = "ExplosionLarge";
	iVar2++;
	Function_39(bLocal_20);
	Function_39(bLocal_21);
	iVar24 = 0;
	vVar25 = { 0.0f, 0.0f, 0.0f };
	iVar28 = 0;
	while (iVar28 <= Global_29008)
	{
		Var29 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_29155[iVar2810] };
		if (StackVal && (StackVal || (StackVal || (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4) != 6) != 5))
		{
			Function_38(iVar28);
			vVar39 = { StackVal, StackVal, Function_38(iVar28) };
			if (Function_37(&vVar39, &vVar25) < 100.0f)
			{
				PRINTSTRING("Adding wander dest:");
				PRINTVECTOR(vVar39);
				PRINTSTRING(" ");
				PRINTSTRING(GET_OBJECT_NAME(StackVal));
				PRINTNL();
				iLocal_22[iVar24] = iVar28;
				iVar24++;
			}
		}
		iVar28++;
	}
	if (Function_36("soakrandomdest"))
	{
		iVar42 = Function_35("soakrandomdest");
		if (iVar42 <= 0 && iVar42 > 3)
		{
			iLocal_194 = iVar42;
		}
		else
		{
			LOG_ERROR("The -soakrandomdest= specified a number that isn't supported. Check TTY for details.");
		}
	}
	switch (iLocal_194)
	{
		case 0x00000000:
			iLocal_179 = 0;
			break;
		
		case 0x00000001:
			iVar43 = 0;
			iVar43 = 0;
			while (iVar43 <= 730)
			{
				bVar44 = RAND_INT_RANGE(false, (iVar24 - 1));
				iVar45 = RAND_INT_RANGE_DIFFERENT(bVar44, false, (iVar24 - 1));
				iVar46 = iLocal_22[bVar44];
				iLocal_22[bVar44] = iLocal_22[iVar45];
				iLocal_22[iVar45] = iVar46;
				iVar43++;
			}
			break;
		
		case 0x00000002:
			bLocal_179 = RAND_INT_RANGE_DIFFERENT(iLocal_179, false, (iVar24 - 1));
			break;
	}
	iVar47 = 0;
	iVar48 = 0;
	while (iVar47 <= iVar1)
	{
		bVar49 = GET_ASSET_ID(uLocal_436[iVar47], 0);
		STREAMING_REQUEST_PROP(bVar49, false);
		while (!STREAMING_IS_PROP_LOADED(bVar49))
		{
			WAIT(false);
		}
		iVar47++;
	}
	bVar50 = CREATE_LAYOUT("PhysicsLoadTest");
	Function_34(&Local_196, 976, 369, 325);
	Function_34(&Local_234, 976, 397, 322);
	fLocal_4 = 40.0f;
	fLocal_3 = 20.0f;
	iLocal_5 = 0;
	fLocal_6 = 37.0f;
	iLocal_7 = 20;
	bLocal_8 = true;
	if (Function_36("soakexplosion"))
	{
		iLocal_9 = Function_35("soakexplosion");
		if (iLocal_9 == 0)
		{
			bLocal_8 = false;
		}
	}
	else
	{
		iLocal_9 = 50;
	}
	if (Function_36("soaksquadsize"))
	{
		iLocal_272 = Function_35("soaksquadsize");
		iLocal_273 = iLocal_272;
	}
	if (Function_36("soakwalkabouttimeout"))
	{
		bLocal_170 = TO_FLOAT(Function_35("soakwalkabouttimeout"));
	}
	if (Function_36("soakflee"))
	{
		bLocal_16 = true;
		iLocal_187 = 0;
		iLocal_188 = 0;
		bLocal_17 = true;
		iLocal_182 = 25;
	}
	bLocal_10 = true;
	iVar52 = 0;
	bLocal_11 = false;
	bVar53 = false;
	iVar57 = 0;
	iVar58 = 200;
	fVar59 = 0.0f;
	fVar60 = 360.0f;
	Local_274.f_20 = iVar57;
	iVar61 = 0;
	iVar51 = iLocal_7;
	Local_274 = CREATE_LAYOUT(Function_33());
	fVar62 = GET_CURRENT_GAME_TIME();
	while (!IS_EXITFLAG_SET())
	{
		Function_31(&Local_274);
		if (iLocal_13)
		{
			vVar63 = { -822,6f, 92,4f, 2376,9f };
			TELEPORT_ACTOR(bVar0, &vVar63, 1, 1, 1);
			SET_ACTOR_INVULNERABILITY(bVar0, true);
			bLocal_10 = true;
			bLocal_8 = true;
			Local_274.f_4 = 0;
			iLocal_9 = 50;
			iLocal_7 = 1;
			fLocal_6 = 15.0f;
			fLocal_3 = 15.0f;
			fLocal_4 = 15.0f;
			iLocal_13 = 0;
		}
		if (iLocal_172)
		{
			iLocal_172 = 0;
			fLocal_3 = 2.0f;
			fLocal_4 = 2.0f;
			Local_274.f_4 = 1;
			Local_274.f_32 = 4;
			Local_274.f_24 = 20;
			Local_274.f_20 = 2;
			Local_274.f_36 = -1.0f;
			Local_274.f_40 = 1.0f;
			fLocal_6 = 37.0f;
		}
		if (iLocal_14 != bLocal_15)
		{
			bLocal_15 = iLocal_14;
			if (bLocal_15)
			{
				fVar62 = GET_CURRENT_GAME_TIME();
				bLocal_19 = CREATE_LAYOUT(Function_33());
				Function_30();
				vLocal_175 = { StackVal, StackVal, Function_30() };
				Function_27();
				AI_GLOBAL_SET_PERMANENT_DANGER(Function_42(), 1);
			}
			else
			{
				if (IS_BLIP_VALID(bLocal_443))
				{
					REMOVE_BLIP(bLocal_443);
				}
				DESTROY_LAYOUT(bLocal_19);
				TASK_CLEAR(Function_42());
				AI_GLOBAL_SET_PERMANENT_DANGER(Function_42(), 0);
			}
		}
		if (bLocal_186)
		{
			Global_28842.f_80 = 4;
		}
		else
		{
			Global_28842.f_80 = 0;
		}
		Function_21(&Local_196, iLocal_272);
		Function_21(&Local_234, iLocal_273);
		if (bLocal_15)
		{
			bVar66 = bLocal_18;
		}
		else
		{
			bVar66 = bVar0;
		}
		if (iLocal_272 >= 0)
		{
			if (iLocal_187 && iLocal_273 < 0)
			{
				Function_19(Local_196.f_20, Local_234.f_20, 0);
			}
			else if (bLocal_16)
			{
				Function_18(Local_196.f_20, Function_42(), -1.0f, -1.0f, 0, 1);
			}
			else
			{
				Function_17(Local_196.f_20, GET_OBJECT_FROM_ACTOR(bVar66), 15.0f, 3, 1);
			}
		}
		if (iLocal_273 >= 0)
		{
			if (iLocal_188 && iLocal_272 < 0)
			{
				Function_19(Local_234.f_20, Local_196.f_20, 0);
			}
			else if (bLocal_16)
			{
				Function_18(Local_234.f_20, Function_42(), -1.0f, -1.0f, 1, 1);
			}
			else
			{
				Function_17(Local_234.f_20, GET_OBJECT_FROM_ACTOR(bVar66), 13.0f, 3, 1);
			}
		}
		if (bLocal_15)
		{
			fLocal_171 = (GET_CURRENT_GAME_TIME() - fVar62);
			Function_30();
			vVar67 = { StackVal, StackVal, Function_30() };
			vVar70 = { 0.0f, 0.0f, 0.0f };
			GET_POSITION(Function_42(), &vVar70);
			fVar73 = Function_16(StackVal, StackVal, StackVal, StackVal, vVar67, vVar70);
			if ((bLocal_170 > fLocal_169 && fLocal_171 < bLocal_170) || IS_BUTTON_RELEASED(Function_15(), 4, 1, false))
			{
				PRINTSTRING("Forcing teleport to destination: ");
				PRINTVECTOR(vVar67);
				PRINTNL();
				TELEPORT_ACTOR(Function_42(), &vVar67, 1, 1, 1);
				WAIT(50);
				vVar67.f_8 = (vVar67.z + 5.0f);
				TELEPORT_ACTOR(bLocal_18, &vVar67, 1, 1, 1);
				fVar62 = GET_CURRENT_GAME_TIME();
				fLocal_171 = 0.0f;
				while (fLocal_171 > bLocal_170 && !STREAMING_IS_WORLD_LOADED_PRIORITY(1))
				{
					fLocal_171 = (GET_CURRENT_GAME_TIME() - fVar62);
					WAIT(true);
				}
				WAIT(20);
				SNAP_OBJECT_TO_GROUND(Function_42(), 1000.0f, false, 1092616192);
				SNAP_OBJECT_TO_GROUND(bLocal_18, 1000.0f, false, 1092616192);
				fVar73 = 0.0f;
			}
			if (fVar73 > 25.0f || IS_BUTTON_RELEASED(Function_15(), 7, 1, false))
			{
				DESTROY_ACTOR(bLocal_18);
				DESTROY_ACTOR(bLocal_174);
				switch (iLocal_194)
				{
					case 0x00000000:
					case 0x00000001:
						bLocal_179++;
						break;
					
					case 0x00000002:
						bLocal_179 = RAND_INT_RANGE_DIFFERENT(bLocal_179, false, (iVar24 - 1));
						break;
				}
				if (bLocal_179 > iVar24)
				{
					bLocal_179 = false;
				}
				Function_30();
				vLocal_175 = { StackVal, StackVal, Function_30() };
				Function_27();
			}
			Function_9();
		}
		Function_5(iLocal_185);
		if (IS_BUTTON_PRESSED(GET_DEBUG_PADINDEX(), 4, 1, false))
		{
			bLocal_11 = !bLocal_11;
			DESTROY_LAYOUT(bVar50);
			bVar50 = CREATE_LAYOUT("PhysicsLoadTest");
			Function_4("Reset & Toggle Spawn");
		}
		if (iLocal_9 == 0)
		{
			bLocal_8 = false;
		}
		else
		{
			bLocal_8 = true;
		}
		if (bLocal_8)
		{
			iVar52 = (iVar52 - 1);
			if (iVar52 <= 1)
			{
				Function_3(bVar53, fLocal_6, &vVar54);
				vVar54 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vLocal_0, vVar54, StackVal) + Vector(0.0f, 1.0f, 0.0f), StackVal, StackVal) };
				Function_2(&vVar54, uVar3[bVar53], 0, 1);
				bVar53++;
				if (bVar53 >= iVar2)
				{
					bVar53 = false;
				}
				iVar52 = iLocal_9;
			}
		}
		if (bLocal_10)
		{
			GET_POSITION(bVar0, &vLocal_0);
		}
		WAIT(true);
	}
	DESTROY_LAYOUT(Local_274);
	DESTROY_LAYOUT(bLocal_19);
	Function_1(&Local_196);
	Function_1(&Local_234);
	DESTROY_LAYOUT(bVar50);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x9F4 / 2548
{
	STREAMING_EVICT_ACTOR(iParam0->f_12, 4294967295);
	STREAMING_EVICT_ACTOR(iParam0->f_16, 4294967295);
	DESTROY_LAYOUT(*iParam0);
	return;
}

void Function_2(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0xA10 / 2576
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_3(bool bParam0, float fParam1, int iParam2) //Position: 0xA2C / 2604
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	bVar0 = (TO_FLOAT(bParam0) * fParam1);
	fVar1 = 0.0f;
	fVar2 = 0.0f;
	bVar3 = RAND_FLOAT_RANGE(fLocal_3, fLocal_4);
	*iParam2 = { ((bLocal_3 * SIN_DEGREE(bVar0)) + fVar1), 0.0f, (fVar2 + (bVar3 * COS_DEGREE(bVar0))) };
	return;
}

void Function_4(char* cParam0) //Position: 0xA66 / 2662
{
	if (bLocal_12)
	{
		HUD_CLEAR_SMALL_TEXT();
		PRINT_SMALL_B(cParam0, 4.0f, 0, 2, 1, 0, 0);
	}
	return;
}

void Function_5(bool bParam0) //Position: 0xA7F / 2687
{
	if (Global_3403 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_3403 = 1;
		if (!Global_27759)
		{
			if (IS_FACTION_VALID(Global_26361))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
			}
		}
		Global_13111 = 0;
	}
	else
	{
		Global_3403 = 0;
		Global_3405 = 0;
		Function_6();
		if (IS_FACTION_VALID(Global_26361))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			TERMINATE_SCRIPT(Global_26316.f_60);
		}
		if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
			TERMINATE_SCRIPT(Global_26316.f_64);
		}
		Global_13111 = 4294967295;
	}
	return;
}

void Function_6() //Position: 0xB0A / 2826
{
	int iVar0;
	
	Global_26960 = Function_7(StackVal);
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

int Function_7(int iParam0) //Position: 0xB58 / 2904
{
	if (!Function_8(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_8(int iParam0) //Position: 0xB70 / 2928
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_9() //Position: 0xB85 / 2949
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	vector3 vVar13;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_ACTOR_VALID(bLocal_18))
	{
		Function_14(Function_42());
		vVar3 = { StackVal, StackVal, Function_14(Function_42()) };
		vVar3.x = (vVar3.x + 2.0f);
		bLocal_18 = CREATE_ACTOR_IN_LAYOUT(bLocal_19, Function_33(), bLocal_20, vVar3, vVar0);
		SET_ACTOR_INVULNERABILITY(bLocal_18, true);
	}
	if (!IS_ACTOR_VALID(bLocal_174))
	{
		Function_14(Function_42());
		vVar6 = { StackVal, StackVal, Function_14(Function_42()) };
		vVar6.x = (vVar6.x + 3.0f);
		bLocal_174 = CREATE_ACTOR_IN_LAYOUT(bLocal_19, Function_33(), bLocal_21, vVar6, vVar0);
		SET_ACTOR_INVULNERABILITY(bLocal_174, true);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_174, false);
		_SET_ACTOR_INFINITE_AMMO_FLAG(bLocal_174, 6, true);
		TASK_FOLLOW_OBJECT_AT_DISTANCE(Function_42(), bLocal_174, 8.0f, 3);
		SET_ACTOR_UPDATE_PRIORITY(Function_42(), false);
		if (IS_BLIP_VALID(bLocal_443))
		{
			REMOVE_BLIP(bLocal_443);
		}
		bLocal_443 = ADD_BLIP_FOR_ACTOR(bLocal_174, 330, 0, 2, 0);
	}
	if (bLocal_179 != iLocal_180)
	{
		Function_12(StackVal, StackVal, bLocal_174, vLocal_175, 0, 4, 2, 1);
		iLocal_180 = bLocal_179;
	}
	if (!IS_ACTOR_MOUNTED(bLocal_18))
	{
		ACTOR_MOUNT_ACTOR(bLocal_174, bLocal_18);
	}
	if (!IS_ACTOR_VALID(bLocal_178))
	{
		Function_14(Function_42());
		vVar9 = { StackVal, StackVal, Function_14(Function_42()) };
		vVar9.x = (vVar9.x - 2.0f);
		bLocal_178 = CREATE_ACTOR_IN_LAYOUT(bLocal_19, Function_33(), bLocal_20, vVar9, vVar0);
	}
	if (!IS_ACTOR_MOUNTED(bLocal_178))
	{
		ACTOR_MOUNT_ACTOR(Function_42(), bLocal_178);
	}
	fVar12 = Function_11(bLocal_178, bLocal_18);
	if (fVar12 < fLocal_181)
	{
		Function_10(bLocal_18);
		vVar13 = { StackVal, StackVal, Function_10(bLocal_18) };
		vVar13.x = (vVar13.x + 2.0f);
		TELEPORT_ACTOR(bLocal_178, &vVar13, 1, 1, 1);
		TASK_FOLLOW_OBJECT_AT_DISTANCE(Function_42(), bLocal_174, 8.0f, 3);
	}
	return;
}

vector3 Function_10(bool bParam0) //Position: 0xCD7 / 3287
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_11(bool bParam0, bool bParam1) //Position: 0xCE8 / 3304
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

void Function_12(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xDD9 / 3545
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
	if (!Function_13(StackVal, StackVal, vParam1))
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
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
}

bool Function_13(vector3 vParam0) //Position: 0xEE1 / 3809
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_14(bool bParam0) //Position: 0xEF9 / 3833
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

int Function_15() //Position: 0xF63 / 3939
{
	bool bVar0;
	
	bVar0 = Function_42();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_16(vector3 vParam0, vector3 vParam3) //Position: 0xF7D / 3965
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_17(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF9A / 3994
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar1, bParam1, bParam2, bParam3);
			TASK_PRIORITY_SET(bVar1, bParam4);
		}
		bVar0++;
	}
}

void Function_18(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0xFF3 / 4083
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
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, bParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_19(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1061 / 4193
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		bVar1 = bVar0;
		while (bVar1 > SQUAD_GET_SIZE(bParam1))
		{
			bVar1 = (bVar1 - SQUAD_GET_SIZE(bParam1));
		}
		bVar3 = Function_20(bParam1);
		TASK_KILL_CHAR(bVar2, bVar3);
		TASK_PRIORITY_SET(bVar2, bParam2);
		bVar0++;
	}
	return;
}

var Function_20(bool bParam0) //Position: 0x10CC / 4300
{
	if (SQUAD_GET_SIZE(bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(bParam0) - 1)));
	}
	return "";
}

void Function_21(int iParam0, int iParam1) //Position: 0x10EE / 4334
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	struct<9> Var14;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	iParam0->f_8 = iParam1;
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		*iParam0 = CREATE_LAYOUT(Function_33());
	}
	if (!SQUAD_IS_VALID(iParam0->f_20))
	{
		iParam0->f_20 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam0, Function_33()));
	}
	iLocal_183++;
	bVar9 = (iLocal_183 - iLocal_184) < iLocal_182;
	iVar10 = 0;
	while (iVar10 < (iLocal_195 - 1))
	{
		bVar11 = IS_ACTOR_VALID((*iParam0 + 88)[iVar10]);
		bVar12 = IS_ACTOR_VALID((*iParam0 + 24)[iVar10]);
		if (StackVal <= iVar10)
		{
			if (iVar10 >= 1)
			{
				uVar13 = (*iParam0 + 88)[(iVar10 - 1)];
			}
			else
			{
				uVar13 = Function_42();
			}
			Function_14(uVar13);
			vVar14 = { StackVal, StackVal, Function_14(uVar13) };
			vVar14.f_4 = (vVar14.y + 10.0f);
			if (bLocal_192)
			{
				if (!bVar12)
				{
					vVar14.f_8 = (vVar14.z + 10.0f);
					FIND_GROUND_INTERSECTION(&vVar14, 100.0f, &vVar3, &uVar6);
					(*iParam0 + 24)[iVar10] = CREATE_ACTOR_IN_LAYOUT(*iParam0, Function_33(), iParam0->f_12, vVar3, vVar0);
					MEMORY_REPORT_POSITION_AUTO((*iParam0 + 24)[iVar10], Function_42(), true);
				}
			}
			else if (bVar12)
			{
				DESTROY_ACTOR((*iParam0 + 24)[iVar10]);
				(*iParam0 + 24)[iVar10] = "";
			}
			bVar12 = IS_ACTOR_VALID((*iParam0 + 24)[iVar10]);
			bVar17 = bVar12;
			if (bVar12)
			{
				bVar17 = IS_ACTOR_RIDEABLE((*iParam0 + 24)[iVar10]);
			}
			if ((bVar17 || !bLocal_192) && !bVar11)
			{
				vVar14.f_8 = (vVar14.z + 2.0f);
				FIND_GROUND_INTERSECTION(&vVar14, 100.0f, &vVar3, &uVar6);
				(*iParam0 + 88)[iVar10] = CREATE_ACTOR_IN_LAYOUT(*iParam0, Function_33(), iParam0->f_16, vVar3, vVar0);
				MEMORY_REPORT_POSITION_AUTO((*iParam0 + 88)[iVar10], Function_42(), true);
				Function_26(iParam0, (*iParam0 + 88)[iVar10]);
				if (bVar12)
				{
					ACTOR_MOUNT_ACTOR((*iParam0 + 88)[iVar10], (*iParam0 + 24)[iVar10]);
				}
			}
			else
			{
				if ((iLocal_193 && bVar17) && !IS_ACTOR_MOUNTED((*iParam0 + 24)[iVar10]))
				{
					ACTOR_MOUNT_ACTOR((*iParam0 + 88)[iVar10], (*iParam0 + 24)[iVar10]);
				}
				Function_23((*iParam0 + 88)[iVar10]);
			}
			if (bVar12)
			{
				bVar18 = (*iParam0 + 24)[iVar10];
			}
			else
			{
				bVar18 = (*iParam0 + 88)[iVar10];
			}
			if (bVar9 && IS_ACTOR_VALID(bVar18))
			{
				fVar19 = Function_11(uVar13, bVar18);
				if (fVar19 < fLocal_181)
				{
					bVar9 = false;
					iLocal_184 = iLocal_183;
					Function_10(uVar13);
					vVar20 = { StackVal, StackVal, Function_10(uVar13) };
					vVar20.f_8 = (vVar20.z + 5.0f);
					TASK_CLEAR(bVar18);
					if (((bVar17 && IS_ACTOR_VALID((*iParam0 + 88)[iVar10])) && IS_ACTOR_VALID((*iParam0 + 24)[iVar10])) && !IS_ACTOR_MOUNTED((*iParam0 + 24)[iVar10]))
					{
						ACTOR_MOUNT_ACTOR((*iParam0 + 88)[iVar10], (*iParam0 + 24)[iVar10]);
					}
					if (bLocal_17)
					{
						if (IS_ACTOR_VALID((*iParam0 + 88)[iVar10]))
						{
							DESTROY_ACTOR((*iParam0 + 88)[iVar10]);
						}
						if (IS_ACTOR_VALID((*iParam0 + 24)[iVar10]))
						{
							DESTROY_ACTOR((*iParam0 + 24)[iVar10]);
						}
					}
					else
					{
						TELEPORT_ACTOR(bVar18, &vVar20, 1, 1, 1);
					}
				}
			}
		}
		else
		{
			if (bVar11)
			{
				Function_22((*iParam0 + 88)[iVar10]);
				DESTROY_ACTOR((*iParam0 + 88)[iVar10]);
				(*iParam0 + 88)[iVar10] = "";
			}
			if (bVar12)
			{
				DESTROY_ACTOR((*iParam0 + 24)[iVar10]);
				(*iParam0 + 24)[iVar10] = "";
			}
		}
		iVar10++;
	}
	return;
}

void Function_22(bool bParam0) //Position: 0x1406 / 5126
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_23(bool bParam0) //Position: 0x1432 / 5170
{
	float fVar0;
	bool bVar1;
	
	if (!IS_ACTOR_RIDEABLE(bParam0))
	{
		fVar0 = ((_GET_AMMO_AMOUNT(bParam0, 6, 0) + _GET_AMMO_AMOUNT(bParam0, 5, 0)) + _GET_AMMO_AMOUNT(bParam0, 4, 0));
		bVar1 = fVar0 > 1.0f;
		Function_24(bParam0, iLocal_190, 40, 6, bVar1);
		Function_24(bParam0, bLocal_189, 24, 5, bVar1);
		Function_24(bParam0, bLocal_191, 23, 4, bVar1);
	}
	return;
}

void Function_24(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1484 / 5252
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (bParam1 >= 0)
	{
		bVar0 = Function_25(bParam2);
		if (!ACTOR_HAS_WEAPON(bParam0, bParam2))
		{
			GIVE_WEAPON_TO_ACTOR(bParam0, bParam2, false, 1, 1);
			if (bVar0)
			{
				_SET_ACTOR_AMMO_OF_TYPE(bParam0, bParam3, TO_FLOAT(bParam1), 1);
			}
		}
		else
		{
			if (bParam4 && bVar0)
			{
				_SET_ACTOR_AMMO_OF_TYPE(bParam0, bParam3, TO_FLOAT(bParam1), 1);
			}
			bVar1 = GET_WEAPON_IN_HAND(bParam0);
			if (bVar1 == 4294967295 && Function_25(bVar1))
			{
				fVar2 = ACTOR_GET_WEAPON_AMMO(bParam0, bVar1);
			}
			else
			{
				fVar2 = 1.0f;
			}
			if (bVar1 != bParam2 && fVar2 > 1.0f)
			{
				ACTOR_HOLSTER_WEAPON(bParam0, 1);
			}
			else if (bVar1 != 4294967295 && fVar2 < 0.0f)
			{
				ACTOR_PUT_WEAPON_IN_HAND(bParam0, bParam2, 1);
			}
		}
	}
	else
	{
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, bParam3, 0.0f, 1);
		DELETE_WEAPON_FROM_ACTOR(bParam0, bParam2);
	}
}

int Function_25(bool bParam0) //Position: 0x153A / 5434
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

void Function_26(var uParam0, bool bParam1) //Position: 0x1580 / 5504
{
	ADD_BLIP_FOR_ACTOR(StackVal, bParam1, 0, 2, 0);
	SQUAD_JOIN(bParam1, uParam0->f_20);
	return;
}

void Function_27() //Position: 0x159C / 5532
{
	PRINTSTRING("Walkabout destination= ");
	PRINTVECTOR(vLocal_175);
	PRINTNL();
	fLocal_171 = bLocal_170;
	Function_28();
	return;
}

void Function_28() //Position: 0x15D0 / 5584
{
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_OBJECTIVE();
	Function_29(UI_GET_STRING(GET_OBJECT_NAME(StackVal)), 0x40f00000, 1, 2, 0, 0, 0);
	return;
}

void Function_29(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x15FC / 5628
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

vector3 Function_30() //Position: 0x164F / 5711
{
	Function_38(iLocal_22[bLocal_179]);
	return StackVal, StackVal, Function_38(iLocal_22[bLocal_179]);
}

void Function_31(int iParam0) //Position: 0x165E / 5726
{
	if (bLocal_11)
	{
		iParam0->f_16 = (iParam0->f_16 - 1);
		if (iParam0->f_16 == 0)
		{
			Function_32(StackVal, iParam0, iLocal_5, fLocal_6, uLocal_436[iParam0->f_32]);
			iLocal_5++;
			iParam0->f_16 = iParam0->f_20;
		}
		iParam0->f_8 = StackVal + 1;
		if (StackVal > iParam0->f_24)
		{
			iParam0->f_8 = 0;
		}
	}
	if (iParam0->f_28 >= iParam0->f_24)
	{
		while (iParam0->f_28 >= iParam0->f_24)
		{
			iParam0->f_28 = (iParam0->f_28 - 1);
			if (IS_OBJECT_VALID((*iParam0 + 44)[iParam0->f_28]))
			{
				DESTROY_OBJECT((*iParam0 + 44)[iParam0->f_28]);
			}
		}
	}
	else
	{
		iParam0->f_28 = iParam0->f_24;
	}
	return;
}

void Function_32(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1704 / 5892
{
	char* cVar0[16];
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	
	if (IS_OBJECT_VALID((*iParam0 + 44)[bParam1]))
	{
		DESTROY_OBJECT((*iParam0 + 44)[bParam1]);
	}
	strcpy(&cVar0, "spawn", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = FIND_OBJECT_IN_LAYOUT(*iParam0, &cVar0);
	DESTROY_OBJECT(bVar4);
	Function_3(uParam2, uParam3, &vVar5);
	bVar8 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Vector(&cVar0, *iParam0, StackVal) + Vector(vVar5, vLocal_0, uParam4), StackVal, StackVal) + Vector(0.0f, iParam0->f_40, 0.0f), 0.0f, 0.0f, 0.0f, 0);
	bVar9 = GET_PHYSINST_FROM_OBJECT(bVar8);
	SET_PHYSINST_FROZEN(bVar9, false);
	vVar10 = { 0.0f, iParam0->f_36, 0.0f };
	SET_PROP_VELOCITY(bVar9, &vVar10);
	(*iParam0 + 44)[bParam1] = bVar8;
}

var Function_33() //Position: 0x179B / 6043
{
	int iVar0;
	
	return iVar0;
}

void Function_34(var uParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x17A3 / 6051
{
	uParam0->f_12 = bParam1;
	uParam0->f_16 = bParam2;
	uParam0->f_4 = iParam3;
	Function_39(bParam1);
	Function_39(bParam2);
}

int Function_35(bool bParam0) //Position: 0x17C7 / 6087
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return STRING_TO_INT(bVar0);
	}
	return 4294967295;
}

bool Function_36(bool bParam0) //Position: 0x17EA / 6122
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

float Function_37(var uParam0, int iParam1) //Position: 0x1809 / 6153
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

vector3 Function_38(int iParam0) //Position: 0x1827 / 6183
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = StackVal;
	GET_VOLUME_CENTER(bVar0, &vVar1);
	return StackVal, StackVal, vVar1;
}

void Function_39(bool bParam0) //Position: 0x1843 / 6211
{
	if (bParam0 != 4294967295)
	{
		STREAMING_REQUEST_ACTOR(bParam0, true, false);
		while (!STREAMING_IS_ACTOR_LOADED(bParam0, 4294967295))
		{
			WAIT(false);
		}
	}
	return;
}

void Function_40(int iParam0) //Position: 0x1867 / 6247
{
	int iVar0;
	
	if (Function_41(iParam0, 1) && Function_41(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_41(var uParam0, bool bParam1) //Position: 0x189B / 6299
{
	return (uParam0 && bParam1) == 0;
}

bool Function_42() //Position: 0x18A8 / 6312
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

