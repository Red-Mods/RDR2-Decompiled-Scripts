//Decompiled with MagicRDR v1.0
//Function Count : 521
//Statics Count : 25
//Natives Count : 567
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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	bool bLocal_14 = false;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	bool bLocal_23 = false;
	int iLocal_24 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_12 = 0;
	bLocal_23 = "";
	iLocal_24 = 0;
	bLocal_23 = GET_PLAYER_ACTOR(0);
	Function_520();
	Function_519(bLocal_23);
	iVar0 = 104466;
	NET_SCRIPTMSG_REGISTER_HANDLER(1, iVar0);
	iVar0 = 104420;
	NET_SCRIPTMSG_REGISTER_HANDLER(2, iVar0);
	while (!IS_EXITFLAG_SET())
	{
		Function_515(1);
		Function_483();
		Function_481();
		Function_459();
		Function_203();
		Function_179(&uLocal_15);
		Function_2();
		WAIT(0);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x67 / 103
{
	DESTROY_LAYOUT(bLocal_14);
	return;
}

int Function_2() //Position: 0x72 / 114
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	struct<25> Var27;
	vector3 vVar53;
	bool bVar56;
	float fVar57;
	bool bVar58;
	bool bVar59;
	int iVar60;
	struct<8> Var61;
	vector3 vVar69;
	bool bVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	bool bVar80;
	int iVar81;
	bool bVar82;
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar2 = 0;
	while (iVar2 < (iVar0 - 1))
	{
		bVar16 = GET_EVENT_FOR_RESPONSE(iVar2);
		switch (GET_EVENT_RESPONSE_ID(iVar2))
		{
			case 0x00000001:
				uVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(uVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(uVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_178(&vVar3, "DynamiteExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_178(&vVar3, "DynamiteExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000002:
				uVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(uVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(uVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_178(&vVar3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_178(&vVar3, "FireBottleExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000003:
				uVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(uVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(uVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_178(&vVar3, "KeroseneLampExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_178(&vVar3, "KeroseneLampExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(bVar12, "nnoDestroy"))
					{
						DESTROY_OBJECT(bVar12);
					}
					else
					{
						SET_PROP_HEALTH(bVar12, 10.0f);
						DECOR_REMOVE(bVar12, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000004:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					DESTROY_OBJECT(bVar12);
				}
				break;
			
			case 0x00000005:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar26 = GET_EVENT_PERPETRATOR(bVar16);
					if (IS_OBJECT_VALID(bVar26))
					{
						Function_178(&vVar3, "GrenadeExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 1);
						Function_178(&vVar3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(bVar26), 1);
					}
					else
					{
						Function_178(&vVar3, "GrenadeExplosion", 0, 1);
						Function_178(&vVar3, "FireBottleExplosion", 0, 1);
					}
					DESTROY_OBJECT(bVar12);
				}
				break;
			
			case 0x00000006:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
				}
				break;
			
			case 0x00000007:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					vVar3 = { 0.0f, 0.0f, 0.0f };
					vVar6 = { 0.0f, 0.0f, 0.0f };
					CREATE_GRINGO_ON_OBJECT(bVar12, "sliding_gate_gringo", "$/content/scripting/gringo/simplegringo/sliding_gate", vVar3, vVar6);
				}
				break;
			
			case 0x00000036:
				bVar13 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar13))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						bVar24 = GET_ACTOR_FROM_OBJECT(bVar13);
						if (!IS_ACTOR_PLAYER(bVar24))
						{
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 0, 0);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 1, 1);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 2, 1);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 3, 0);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 4, 0);
						}
					}
				}
				break;
			
			case 0x00000008:
				if (!Function_177())
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 1.0f, 0.0f };
						bVar36 = false;
						if (DECOR_CHECK_EXIST(bVar12, "WasDrafted"))
						{
							bVar36 = DECOR_GET_BOOL(bVar12, "WasDrafted");
						}
						iVar37 = 1;
						if (DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
						{
							iVar37 = 0;
						}
						if (!bVar36 && iVar37)
						{
							iVar38 = Function_176(GET_CORPSE_ACTOR_ENUM(bVar12));
							if (iVar38 == 1)
							{
								bVar18 = CREATE_GRINGO_ON_OBJECT(bVar12, "Skin_Animal", "$/content/scripting/gringo/simplegringo/Skin_Animal", vVar3, vVar6);
							}
							else if (iVar38 == 2)
							{
								bVar18 = CREATE_GRINGO_ON_OBJECT(bVar12, "Pluck_Feather", "$/content/scripting/gringo/simplegringo/Pluck_Feather", vVar3, vVar6);
							}
							if (IS_OBJECT_VALID(bVar18))
							{
								if (DECOR_CHECK_EXIST(bVar12, "NonActiveGringo"))
								{
									DECOR_REMOVE(bVar12, "NonActiveGringo");
									GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bVar18), "UseCase", 0);
								}
								if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin1"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin1", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin2"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin2", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin3"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin3", bVar18);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "Home02_S1_Skin4"))
								{
									DECOR_SET_OBJECT(Global_34573, "Skin4", bVar18);
								}
								if (DECOR_CHECK_EXIST(bVar12, "Skinning_CreateBlip"))
								{
									ADD_BLIP_FOR_OBJECT(bVar18, 330, 0.0f, 3, 0);
									DECOR_REMOVE(bVar12, "Skinning_CreateBlip");
								}
								if (Function_175(6))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar18)))
									{
										fVar39 = ADD_BLIP_FOR_OBJECT(bVar18, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(fVar39, 0.5f);
										UNK_0x1E98AFEC(fVar39, 1);
										SET_BLIP_SCALE(fVar39, 0.6f);
										SET_BLIP_COLOR(fVar39, 0.35f, 0.35f, 0.35f, 0.65f);
									}
								}
								if (DECOR_CHECK_EXIST(bVar12, "skinning_objSet"))
								{
									ADD_OBJECT_TO_OBJECTSET(bVar18, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "skinning_objSet")));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000009:
				if (!Function_177())
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						if (!DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
						{
							vVar3 = { 0.0f, 0.0f, 0.0f };
							vVar6 = { 0.0f, 1.0f, 0.0f };
							if (Function_176(GET_CORPSE_ACTOR_ENUM(bVar12)) == 2)
							{
								bVar40 = CREATE_GRINGO_ON_OBJECT(bVar12, "Pluck_Feather", "$/content/scripting/gringo/simplegringo/Pluck_Feather", vVar3, vVar6);
								if (Function_175(6))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar40)))
									{
										fVar41 = ADD_BLIP_FOR_OBJECT(bVar40, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(fVar41, 0.5f);
										UNK_0x1E98AFEC(fVar41, 1);
										SET_BLIP_SCALE(fVar41, 0.6f);
										SET_BLIP_COLOR(fVar41, 0.35f, 0.35f, 0.35f, 0.65f);
									}
								}
							}
						}
						else
						{
							DECOR_REMOVE(bVar12, "nNoLooting");
						}
					}
				}
				break;
			
			case 0x0000000A:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (!Function_177())
				{
					if (IS_OBJECT_VALID(bVar12))
					{
						bVar42 = false;
						if (DECOR_CHECK_EXIST(bVar12, "corpse_loot_gringo"))
						{
							if (DECOR_GET_BOOL(bVar12, "corpse_loot_gringo") == 1)
							{
								bVar42 = true;
							}
							DECOR_REMOVE(bVar12, "corpse_loot_gringo");
						}
						else
						{
							bVar42 = true;
						}
						if (DECOR_CHECK_EXIST(bVar12, "ReturnCorpse"))
						{
							ADD_OBJECT_TO_OBJECTSET(bVar12, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "ReturnCorpse")));
						}
						if (bVar42)
						{
							vVar3 = { 0.0f, 0.0f, 0.0f };
							vVar6 = { 0.0f, 0.0f, 0.0f };
							iVar43 = 0;
							vVar44 = { 0.0f, 0.0f, 0.0f };
							vVar47 = { 0.0f, 0.0f, 0.0f };
							vVar50 = { 0.0f, 0.0f, 0.0f };
							vVar53 = { 0.0f, 0.0f, 0.0f };
							if (!DECOR_CHECK_EXIST(bVar12, "NoEating"))
							{
								if (DECOR_CHECK_EXIST(bVar12, "AddCoyoteEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddCoyoteEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									bVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_174(), "coyote_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddBearEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddBearEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									bVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_174(), "bear_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddWolfEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddWolfEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									bVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_174(), "wolf_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar56, "GringoTarg", bVar12);
								}
								else if (DECOR_CHECK_EXIST(bVar12, "AddCougarEatingToCorpse"))
								{
									DECOR_REMOVE(bVar12, "AddCougarEatingToCorpse");
									PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(bVar12, &iVar43, &vVar44, &vVar47, &vVar50, &vVar53);
									bVar56 = CREATE_GRINGO_ON_OBJECT(bVar12, Function_174(), "cougar_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									DECOR_SET_OBJECT(bVar56, "GringoTarg", bVar12);
								}
							}
							else
							{
								DECOR_REMOVE(bVar12, "NoEating");
							}
							if (Function_175(6))
							{
								if (!DECOR_CHECK_EXIST(bVar12, "nNoLooting"))
								{
									bVar17 = CREATE_GRINGO_IN_LAYOUT(Global_6289, Function_174(), "Loot_Corpse", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									ATTACH_OBJECTS(bVar17, bVar12, "pelvis", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
									GIVE_OBJECT_TO_LAYOUT(bVar17, bVar12);
									GRINGO_SET_TARGET_OBJECT(GET_GRINGO_FROM_OBJECT(bVar17), bVar12, 1);
									if (DECOR_CHECK_EXIST(bVar12, "LootCorpse_CreateBlip"))
									{
										if (!DECOR_CHECK_EXIST(bVar12, "LootCorpse_WhichBlip"))
										{
											ADD_BLIP_FOR_OBJECT(bVar17, 325, 0.0f, 2, 0);
										}
										else
										{
											ADD_BLIP_FOR_OBJECT(bVar17, DECOR_GET_INT(bVar12, "LootCorpse_WhichBlip"), 0.0f, 2, 0);
											DECOR_REMOVE(bVar12, "LootCorpse_WhichBlip");
										}
										DECOR_REMOVE(bVar12, "LootCorpse_CreateBlip");
									}
									else
									{
										fVar57 = ADD_BLIP_FOR_OBJECT(bVar17, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(fVar57, 0.5f);
										UNK_0x1E98AFEC(fVar57, 1);
										SET_BLIP_SCALE(fVar57, 0.6f);
										SET_BLIP_COLOR(fVar57, 0.35f, 0.35f, 0.35f, 0.65f);
									}
									if (DECOR_CHECK_EXIST(bVar12, "lootCorpse_objSet"))
									{
										ADD_OBJECT_TO_OBJECTSET(bVar17, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar12, "lootCorpse_objSet")));
									}
								}
								else
								{
									DECOR_REMOVE(bVar12, "nNoLooting");
								}
							}
						}
					}
				}
				break;
			
			case 0x00000038:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar58 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar16));
					bVar59 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (IS_ACTOR_VALID(bVar59))
					{
						iVar60 = GET_ACTOR_ENUM(bVar59);
						if (iVar60 <= 976 && iVar60 >= 1007)
						{
							if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
							{
								if (bVar12 == DECOR_GET_OBJECT(Global_34573, "HorseStolen"))
								{
									DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
								}
							}
							if (!(NET_IS_IN_SESSION() || Function_177()))
							{
								if (bVar59 == Global_12976.f_36)
								{
									DECOR_SET_BOOL(Global_34573, "TriggerNewHorse", 1);
								}
							}
						}
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_34573) && bVar12 == GET_OBJECT_FROM_ACTOR(GET_MOUNT(Global_34573)))
						{
							if (IS_ACTOR_VALID(bVar58))
							{
								if (GET_ACTOR_ENUM(bVar58) <= 1155 && GET_ACTOR_ENUM(bVar58) >= 1176)
								{
									ADD_BLOOD_TO_ACTOR(bVar59, 0.1f, 1.1f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, -0.1f, 1.1f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.3f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.2f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, -0.1f, 1.25f, -0.1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1.1f, -0.1f, 0, 1, 0);
									if (DECOR_CHECK_EXIST(bVar12, "LastCarrierPlayer"))
									{
										if (!IS_ACTOR_MALE(bVar59))
										{
											if (CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bVar12, 1065353216, 1117126656, 1, 1, 0))
											{
												if (!HAS_ACHIEVEMENT_BEEN_PASSED(20))
												{
													AWARD_ACHIEVEMENT(20);
												}
											}
										}
									}
									if (Function_173(bVar58, 0) <= 7.25f)
									{
										Var61 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171("HitByTrain_FX") };
										Function_170(bVar12);
										vVar69 = { StackVal, StackVal, Function_170(bVar12) };
										if (!UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_30616, &Var61, "script_train_squash_ped", vVar69), 0.0f, 0.0f, 0.0f))
										{
										}
										if (DECOR_CHECK_EXIST(bVar12, "CrimeHoldupBadguy"))
										{
											DECOR_SET_BOOL(Global_34573, "CHBadguy_Gone", 1);
										}
										DESTROY_OBJECT(bVar12);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000B:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
						bVar15 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						ATTACH_OBJECTS(bVar15, bVar12, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
				break;
			
			case 0x00000034:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
				if (IS_OBJECT_VALID(bVar12) && !Function_177())
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
					}
				}
				break;
			
			case 0x00000027:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (GET_OBJECT_TYPE(bVar12) == 15)
				{
					if (GET_ACTOR_FROM_OBJECT(bVar12) == Global_34573)
					{
						DECOR_SET_BOOL(bVar12, "coplasso", 1);
					}
				}
				break;
			
			case 0x0000000C:
				PRINTSTRING("Duong thinks this should happen");
				PRINTNL();
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						bVar72 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie_Pickup", "$/content/scripting/gringo/simplegringo/hogtie_pickup", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						DECOR_SET_OBJECT(bVar12, "HogtiedGringoAttached", bVar72);
					}
				}
				bVar26 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar26))
				{
					if (GET_ACTOR_FROM_OBJECT(bVar26) == Function_169())
					{
						Global_12976.f_136++;
						if (Global_12976.f_136 >= Function_168(262))
						{
							Function_154(262, Global_12976.f_136, 0);
						}
					}
				}
				break;
			
			case 0x0000000D:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (DECOR_CHECK_EXIST(bVar12, "lasso"))
					{
						DECOR_REMOVE(bVar12, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie"));
					}
				}
				break;
			
			case 0x00000010:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar12)) && ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(bVar12)) == 0)
					{
						if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (!IS_SCRIPT_VALID(uLocal_0))
							{
								if (!Function_177() && !IS_DEBUGKEY_DOWN(50))
								{
									Var34.f_4 = GET_ACTOR_FROM_OBJECT(bVar12);
									Var34 = GET_ACTOR_FROM_OBJECT(bVar13);
									uLocal_0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &Var34, 2, 0);
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(bVar12, "HorseLeash"))
					{
						DESTROY_OBJECT(DECOR_GET_OBJECT(bVar12, "HorseLeash"));
						DECOR_REMOVE(bVar12, "HorseLeash");
					}
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(bVar12)) || IS_ACTOR_MULE(GET_ACTOR_FROM_OBJECT(bVar12)))
					{
						if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(bVar12)) != 1)
						{
							ACCESSORIZE_HORSE(GET_ACTOR_FROM_OBJECT(bVar12), 2);
							if (!(Function_177() || NET_IS_IN_SESSION()))
							{
								if (bVar13 == GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)))
								{
									if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_12976.f_36))
									{
										iVar73 = Function_149(8, 0, 5);
										iVar74 = Function_148(iVar73);
										iVar75 = Function_149(7, 0, 5);
										Function_144(iVar75, FLOOR(GET_CURRENT_GAME_TIME()));
										if (Global_3381)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 100.0f);
										}
										else if (iVar74 > 3600)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 100.0f);
										}
										else if (iVar74 > 900)
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 85.0f);
										}
										else
										{
											SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 70.0f);
										}
									}
									else
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(bVar12), 70.0f);
									}
								}
							}
						}
					}
					if (bVar13 == GET_OBJECT_FROM_ACTOR(Global_34573))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar12)))
						{
							SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(bVar12), 1024, 0);
						}
					}
				}
				break;
			
			case 0x00000011:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (bVar13 == GET_OBJECT_FROM_ACTOR(Global_34573))
					{
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_12976.f_36))
						{
							iVar76 = Function_149(7, 0, 5);
							iVar77 = Function_148(iVar76);
							iVar77 = (ROUND(GET_CURRENT_GAME_TIME()) - iVar77);
							iVar78 = Function_149(8, 0, 5);
							iVar79 = Function_148(iVar78);
							Function_144(iVar78, (iVar77 + iVar79));
						}
						if (Function_143(0x8000000))
						{
							AUDIO_MUSIC_SUSPEND(6000);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_142(0x8000000);
						}
						if (Function_143(0x4000000))
						{
							AUDIO_MUSIC_SUSPEND(6000);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_142(0x4000000);
						}
					}
				}
				break;
			
			case 0x0000000F:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
					{
						if (GET_OBJECT_TYPE(bVar13) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
								{
									if (Function_141(bVar12, bVar13))
									{
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000031:
				break;
			
			case 0x0000002E:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__HogTie"))
								{
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "BedStealthKill"))
								{
									Function_136(Function_138(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "BedStealthKill_R"))
								{
									Function_136(Function_133(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__GroundAttack"))
								{
									Function_136(Function_128(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "n__WallPin"))
								{
									Function_170(bVar13);
									*(&Var27 + 12) = { StackVal, StackVal, Function_170(bVar13) };
									Function_127(bVar13);
									Var27 = { StackVal, StackVal, Function_127(bVar13) };
									Function_136(Function_123(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__ChairSmash"))
								{
									Function_136(Function_120(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 0, 0, 1));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknExecutionBack"))
								{
									switch (RAND_INT_RANGE(false, 5))
									{
										case 0x00000000:
											Function_136(Function_117(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_136(Function_114(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_136(Function_111(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_136(Function_108(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_136(Function_105(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_136(Function_102(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__pistolExecution"))
								{
									switch (RAND_INT_RANGE(false, 5))
									{
										case 0x00000000:
											Function_136(Function_99(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_136(Function_96(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_136(Function_93(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_136(Function_90(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_136(Function_87(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_136(Function_84(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__pistolKneelExecution"))
								{
									Function_136(Function_81(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__rifleExecution"))
								{
									switch (RAND_INT_RANGE(false, 4))
									{
										case 0x00000000:
											Function_136(Function_78(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_136(Function_75(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_136(Function_72(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_136(Function_69(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_136(Function_66(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__rifleKneelExecution"))
								{
									Function_136(Function_63(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknExecution"))
								{
									switch (RAND_INT_RANGE(false, 4))
									{
										case 0x00000000:
											Function_136(Function_60(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_136(Function_57(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_136(Function_54(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_136(Function_51(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_136(Function_48(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__tknKneelExecution"))
								{
									Function_136(Function_45(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(bVar16, "__LinkedAnimType", "__BottleSmash"))
								{
								}
							}
						}
					}
				}
				break;
			
			case 0x0000002F:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13) && IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
				{
					if (DECOR_CHECK_STRING(bVar16, "__HorseAgitated", "__BuckRider"))
					{
						PLAYER_RUMBLE("HorseBuckRumble", 4294967295, 0);
					}
					else
					{
						PLAYER_RUMBLE("HorseAgitatedRumble", 4294967295, 0);
						if (!Function_44(Global_76846, 128))
						{
							if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13))))
							{
								Function_38(bVar13, 128, 1, 0);
							}
						}
					}
				}
				break;
			
			case 0x00000032:
				if (!Function_177())
				{
					bVar13 = GET_EVENT_PERPETRATOR(bVar16);
					if (IS_OBJECT_VALID(bVar13))
					{
						if (GET_OBJECT_TYPE(bVar13) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								Function_170(bVar13);
								*(&Var27 + 12) = { StackVal, StackVal, Function_170(bVar13) };
								Function_127(bVar13);
								Var27 = { StackVal, StackVal, Function_127(bVar13) };
								Var27.f_24 = 0;
								Function_136(Function_35(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, GET_PLAYER_ACTOR(0), bVar13, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x00000033:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				if (IS_OBJECT_VALID(bVar13))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (!Function_177())
							{
								Function_170(bVar13);
								*(&Var27 + 12) = { StackVal, StackVal, Function_170(bVar13) };
								Function_127(bVar13);
								Var27 = { StackVal, StackVal, Function_127(bVar13) };
								Var27.f_24 = 0;
								Function_136(Function_32(FIND_NAMED_LAYOUT("Formations"), 0, &Var27, GET_PLAYER_ACTOR(0), bVar13, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x00000014:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							ENABLE_VEHICLE_SEAT(bVar10, 0, 0);
						}
					}
				}
				break;
			
			case 0x00000016:
				bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_OBJECT_VALID(bVar12))
						{
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
							uVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
							if (IS_PHYSINST_VALID(uVar11))
							{
								GET_LOCATOR_OFFSETS(uVar11, "gattling_attach", &vVar3, &vVar6);
								vVar6.f_4 = (vVar6.y + 180.0f);
								ATTACH_OBJECTS(bVar12, bVar10, Function_174(), vVar3, vVar6, 4294967295);
								bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
								if (IS_OBJECT_VALID(bVar15))
								{
									DESTROY_OBJECT(bVar15);
								}
								CREATE_GRINGO_ON_OBJECT(bVar12, "shootBabyShoot", "stagegat_attach", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							}
						}
					}
				}
				break;
			
			case 0x00000015:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
								uVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(uVar11))
								{
									GET_LOCATOR_OFFSETS(uVar11, "gattling_attach", &vVar3, &vVar6);
									vVar6.f_4 = (vVar6.y + 180.0f);
									ATTACH_OBJECTS(bVar12, bVar10, Function_174(), vVar3, vVar6, 4294967295);
									bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
									if (IS_OBJECT_VALID(bVar15))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "MaximShootTruck", 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000017:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							iVar1 = 2;
							while (iVar1 < (GET_NUM_AVAILABLE_SEATS(bVar10) - 1))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 0);
								iVar1++;
							}
							NET_OBJECT_REPLICATION_MODE_START(17, 0);
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "gatlingGun", "$/fragments/p_gen_gatlinggun01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							NET_OBJECT_REPLICATION_MODE_END(17);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, 0);
								uVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(uVar11))
								{
									GET_LOCATOR_OFFSETS(uVar11, "gattling_attach", &vVar3, &vVar6);
									vVar6.f_4 = (vVar6.y + 180.0f);
									ATTACH_OBJECTS(bVar12, bVar10, Function_174(), vVar3, vVar6, 4294967295);
									bVar15 = FIND_OBJECT_IN_OBJECT(bVar12, "shootBabyShoot");
									if (IS_OBJECT_VALID(bVar15))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootCoach", 1);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(bVar15), "GatlingShootTruck", 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 2, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 3, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 4, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 5, 0);
				break;
			
			case 0x00000019:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), 0, 0);
				break;
			
			case 0x0000001A:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarArmored", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001B:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarBaggage", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001C:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarBox01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001D:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarBox02", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001E:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarBox03", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x0000001F:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarBox04", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000020:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarBox05", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000021:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarCaboose", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000022:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarCattle", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000023:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarFlat", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000024:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCar01", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, iVar1, 1);
								iVar1++;
							}
						}
					}
				}
				break;
			
			case 0x00000025:
				if (Global_34208.f_1440)
				{
					bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
					if (IS_OBJECT_VALID(bVar12))
					{
						if (GET_OBJECT_TYPE(bVar12) == 15)
						{
							bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
							if (IS_ACTOR_VALID(bVar10))
							{
								bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarSteamer", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							}
						}
					}
				}
				else
				{
					Global_34208.f_1440 = 1;
				}
				break;
			
			case 0x00000026:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VALID(bVar10))
						{
							bVar15 = CREATE_GRINGO_ON_OBJECT(bVar10, Function_174(), "$/content/scripting/gringo/simplegringo/trainCarWood", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						}
					}
				}
				break;
			
			case 0x00000028:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				bVar24 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar16));
				bVar9 = DECOR_GET_VECTOR(bVar16, "__hjk_perp_position", &vVar21);
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								if (!bVar9)
								{
									GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bVar13), &vVar21);
								}
								if (Function_31(StackVal, StackVal, bVar12, vVar21))
								{
									Function_136(Function_27(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
								}
								else
								{
									Function_136(Function_23(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000029:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				bVar24 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar16));
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								Function_136(Function_19(FIND_NAMED_LAYOUT("Formations"), 0, bVar12, 1, 0, 0));
							}
						}
					}
					if (GET_OBJECT_TYPE(bVar12) == 15)
					{
						bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
						if (IS_ACTOR_VEHICLE(bVar10))
						{
							if (GET_OBJECT_TYPE(bVar13) == 15)
							{
								bVar80 = GET_ACTOR_FROM_OBJECT(bVar13);
							}
							iVar1 = 0;
							while (iVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								bVar25 = GET_ACTOR_IN_VEHICLE_SEAT(bVar10, iVar1);
								if ((IS_ACTOR_VALID(bVar24) && bVar25 == bVar80) && bVar25 == bVar24)
								{
									TASK_VEHICLE_LEAVE(bVar25);
								}
								iVar1++;
							}
						}
					}
				}
				break;
			
			case 0x0000002A:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13)));
								bVar14 = bVar14;
								Function_136(Function_15(FIND_NAMED_LAYOUT("Formations"), 0, bVar14, bVar12, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002B:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar13)));
								iVar20 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar12));
								iVar19 = iVar20;
								switch (iVar19)
								{
									case 0x000004AD:
										Function_136(Function_10(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
										break;
									
									default:
										Function_136(Function_5(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
										break;
									}
								}
						}
					}
					else
					{
						LOG_ERROR("Perp is not actor");
					}
				}
				else
				{
					LOG_ERROR("Perp or Target are invalid");
				}
				break;
			
			case 0x0000002C:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_animal");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar13)));
								Function_136(Function_5(FIND_NAMED_LAYOUT("Formations"), 0, bVar13, bVar12, bVar14, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002D:
				bVar13 = GET_EVENT_PERPETRATOR(bVar16);
				bVar12 = DECOR_GET_OBJECT(bVar16, "__hjk_vehicle");
				if (IS_OBJECT_VALID(bVar13) && IS_OBJECT_VALID(bVar12))
				{
					if (GET_OBJECT_TYPE(bVar13) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar13)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar13)))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar13)));
							}
						}
					}
				}
				break;
			
			case 0x00000037:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (GET_LAST_ATTACKER(bVar10) == Global_34573)
					{
						iVar81 = Function_149(6, 3, 5);
						bVar82 = Function_148(iVar81);
						if (Global_29006 == Global_30640[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "armv_saloon_set")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_ARMAddKO")))
							{
								Function_4(&bVar82, 1);
							}
						}
						else if (Global_29006 == Global_30658[1])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "ratv_saloon")))
							{
								Function_4(&bVar82, 2);
							}
						}
						else if (Global_29006 == Global_30668[1])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "thiv_saloon_set")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_THIAddKO")))
							{
								Function_4(&bVar82, 4);
							}
						}
						else if (Global_29006 == Global_30685[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "escv_cantina_set")))
							{
								Function_4(&bVar82, 8);
							}
						}
						else if (Global_29006 == Global_30693[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "chuv_knockout_set")))
							{
								Function_4(&bVar82, 16);
							}
						}
						else if (Global_29006 == Global_30707[2])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "casv_bar_set")))
							{
								Function_4(&bVar82, 32);
							}
						}
						else if (Global_29006 == Global_30717[0])
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "blkv_saloon_set")))
							{
								Function_4(&bVar82, 64);
							}
						}
						Function_144(iVar81, bVar82);
						if (bVar82 != (128 - 1) && !Function_3(bVar82, 128))
						{
							Function_4(&bVar82, 128);
							AWARD_ACHIEVEMENT(15);
						}
					}
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")) && !Function_177())
					{
						vVar3 = { 0.0f, 0.0f, 0.0f };
						vVar6 = { 0.0f, 0.0f, 0.0f };
						if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
						{
							AI_DONT_HARM_ACTOR(bVar10);
						}
						bVar15 = CREATE_GRINGO_ON_OBJECT(bVar12, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						ATTACH_OBJECTS(bVar15, bVar12, "spine00", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
				break;
			
			case 0x00000039:
				bVar12 = GET_EVENT_TARGET_AS_OBJECT(bVar16);
				if (IS_OBJECT_VALID(bVar12))
				{
					if (DECOR_CHECK_EXIST(bVar12, "lasso"))
					{
						DECOR_REMOVE(bVar12, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar12, "Hogtie"));
					}
					bVar10 = GET_ACTOR_FROM_OBJECT(bVar12);
					if (IS_ACTOR_VALID(bVar10) && IS_ACTOR_PLAYER(bVar10))
					{
						AI_CLEAR_DONT_HARM_ACTOR(bVar10);
					}
				}
				break;
			
			case 0x0000003A:
				uVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(uVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(uVar11);
					if (!DECOR_CHECK_EXIST(bVar12, "nnoExplode"))
					{
						GET_OBJECT_POSITION(bVar12, &vVar3);
						bVar26 = GET_EVENT_PERPETRATOR(bVar16);
						if (IS_OBJECT_VALID(bVar26))
						{
							Function_178(&vVar3, "DynamiteCrateExp", GET_ACTOR_FROM_OBJECT(bVar26), 0);
						}
						else
						{
							Function_178(&vVar3, "DynamiteCrateExp", 0, 0);
						}
					}
					DESTROY_OBJECT(bVar12);
				}
				break;
		}
		iVar2++;
	}
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 0;
}

bool Function_3(bool bParam0, int iParam1) //Position: 0x31BE / 12734
{
	return (bParam0 && iParam1) == 0;
}

void Function_4(bool bParam0, bool bParam1) //Position: 0x31CB / 12747
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

var Function_5(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x31DA / 12762
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToWagon", 3, 1);
	}
	Function_6(&bVar0, bParam2, bParam3, bParam4);
	if (iParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_6(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x325E / 12894
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_9(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_8(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_7(&uVar0, uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 0, 1, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 1, 1, 180f);
}

void Function_7(var uParam0, bool bParam1) //Position: 0x32DA / 13018
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 4.240117f, 2.848692f, -3.453501f, -14.51869f, 120.8944f, -0.096658f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.705376f, 1.356211f, -0.494339f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_8(var uParam0, bool bParam1) //Position: 0x335D / 13149
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.312839f, 2.04426f, -3.890313f, -11.40707f, -165.6106f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1.292647f, 1.248807f, -0.071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x33DC / 13276
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.382136f, 2.293721f, 0.74885f, -8.276146f, -68.90104f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051506f, 1.75836f, -0.576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_10(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x345B / 13403
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToPrison", 3, 1);
	}
	Function_11(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam6)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_11(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x34D4 / 13524
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_14(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_13(&uVar0, uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_12(&uVar0, uParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 4294967295, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 4294967295, 0, 180f);
}

void Function_12(var uParam0, bool bParam1) //Position: 0x3549 / 13641
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_174(), 5.056644f, 3.927511f, -3.112992f, 2.874524f, 1.177293f, 3.10158f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.88904f, 2.422013f, -0.671586f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_13(var uParam0, bool bParam1) //Position: 0x35DE / 13790
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_174(), 0.312839f, 2.04426f, -3.890313f, 2.942502f, -0.251143f, -3.141593f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1.292647f, 1.248807f, -0.071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_14(var uParam0, bool bParam1) //Position: 0x3673 / 13939
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_174(), -3.382136f, 2.293721f, 0.74885f, -0.144446f, -1.20255f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051506f, 1.75836f, -0.576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_15(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x3704 / 14084
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseToHorse", 2, 1);
	}
	Function_16(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_16(var uParam0, var uParam1, int iParam2) //Position: 0x3786 / 14214
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_18(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_17(&uVar0, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.75f, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.5f, 1);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_17(var uParam0, bool bParam1) //Position: 0x37DB / 14299
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.577029f, 1.710976f, -3.825424f, -3.464217f, 169.0016f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -1.289642f, 1.484856f, -0.158455f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_18(var uParam0, bool bParam1) //Position: 0x385A / 14426
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.496739f, 1.711366f, -2.162416f, -5.032116f, 131.0492f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.087791f, 1.409592f, 0.088257f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_19(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x38D9 / 14553
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Hijack", 2, 1);
	}
	Function_20(&bVar0, uParam2);
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

void Function_20(var uParam0, int iParam1) //Position: 0x394D / 14669
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_22(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_21(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.0f, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 2.0f, 0, 0f);
	return;
}

void Function_21(var uParam0, bool bParam1) //Position: 0x3997 / 14743
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -3.366477f, 1.49934f, -2.612921f, 8.860391f, -121.5917f, 1.481497f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

void Function_22(var uParam0, bool bParam1) //Position: 0x39FF / 14847
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.576806f, 2.573345f, -4.386736f, -12.39926f, 179.9947f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

var Function_23(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3A63 / 14947
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseLeft", 2, 1);
	}
	Function_24(&bVar0, uParam2);
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

void Function_24(var uParam0, int iParam1) //Position: 0x3AE0 / 15072
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_26(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_25(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0.9f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_25(var uParam0, bool bParam1) //Position: 0x3B41 / 15169
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.547432f, 1.293245f, -3.496428f, -2.252641f, -148.9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.300987f, 1.122006f, 0.23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_26(var uParam0, bool bParam1) //Position: 0x3BC0 / 15296
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.008554f, 1.956293f, -1.766058f, -4.570198f, -158.2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.208504f, 1.783894f, 0.236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_27(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3C3F / 15423
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HijackHorseRight", 2, 1);
	}
	Function_28(&bVar0, uParam2);
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

void Function_28(var uParam0, int iParam1) //Position: 0x3CBD / 15549
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_30(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_29(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0.9f, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(uVar1, 1000.0f, 0);
	return;
}

void Function_29(var uParam0, bool bParam1) //Position: 0x3D1E / 15646
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.547f, 1.293245f, -3.496428f, -2.252641f, -148.9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.300987f, 1.122006f, 0.23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_30(var uParam0, bool bParam1) //Position: 0x3D9D / 15773
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.009f, 1.956293f, -1.766058f, -4.570198f, -158.2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.208504f, 1.783894f, 0.236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_31(bool bParam0, vector3 vParam1) //Position: 0x3E1C / 15900
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

var Function_32(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x3E5A / 15962
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HorseFalling", 1, 1);
	}
	Function_33(&bVar0, uParam2, uParam3, uParam4);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_33(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3ED8 / 16088
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_34(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.5f, 0);
}

void Function_34(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x3F09 / 16137
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar3 = { 0.0f, 2.12f, -2.422f };
	UNK_0xF76F2BB3(&vVar3, iParam1, iParam1->f_24, 4);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar3, StackVal) };
	vVar6 = { 0.0f, -30.351f, -15.34f };
	UNK_0xF76F2BB3(&vVar6, iParam1, iParam1->f_24, 4);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar6, StackVal) };
	CAMERA_PROBE(&vVar0, vVar3, vVar6, uParam2, 23);
	vVar0.x = (vVar0.x + 0.0f);
	vVar0.f_4 = (vVar0.y + 1.0f);
	vVar0.f_8 = (vVar0.z + 0.0f);
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
}

var Function_35(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x3FF6 / 16374
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WagonCrash", 1, 1);
	}
	Function_36(&bVar0, uParam2, uParam3, uParam4);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return bVar0;
}

void Function_36(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4072 / 16498
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_37(&uVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
}

void Function_37(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x40AF / 16559
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 9.270768f, 7.965437f, 3.153887f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
}

void Function_38(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4190 / 16784
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_40(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_39(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_39(char* cParam0, int iParam1) //Position: 0x41FC / 16892
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

bool Function_40(bool bParam0, var uParam1, int iParam2) //Position: 0x4233 / 16947
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
		if (Function_42(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_41(uVar0))
		{
			case 0x00000002:
				if (!Function_44(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_41(char* cParam0) //Position: 0x42AB / 17067
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

int Function_42(int iParam0) //Position: 0x434C / 17228
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_43(&iVar1, 2147483648);
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

void Function_43(int iParam0, int iParam1) //Position: 0x4389 / 17289
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_44(int iParam0, bool bParam1) //Position: 0x439C / 17308
{
	if ((iParam0 && bParam1) == bParam1)
	{
		return 1;
	}
	return 0;
}

var Function_45(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x43AF / 17327
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknKneelExecution", 1, 1);
	}
	Function_46(&bVar0, uParam2);
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

void Function_46(var uParam0, char* cParam1) //Position: 0x442E / 17454
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_47(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_47(var uParam0, bool bParam1) //Position: 0x447D / 17533
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.077684f, 1.688702f, 0.09395f, -16.10126f, 77.37032f, 0.009626f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_48(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4509 / 17673
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_04", 1, 1);
	}
	Function_49(&bVar0, uParam2);
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

void Function_49(var uParam0, char* cParam1) //Position: 0x4586 / 17798
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_50(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_50(var uParam0, bool bParam1) //Position: 0x45D5 / 17877
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33.73909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.598154f, 1.524616f, -1.161397f, -8.163617f, -141.3147f, -16.12286f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_51(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x465D / 18013
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_03", 1, 1);
	}
	Function_52(&bVar0, uParam2);
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

void Function_52(var uParam0, char* cParam1) //Position: 0x46DA / 18138
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_53(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_53(var uParam0, bool bParam1) //Position: 0x4729 / 18217
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.6607f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.785012f, 1.737865f, -0.003387f, -16.92512f, 84.24278f, 11.77102f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_54(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x47B1 / 18353
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_02", 1, 1);
	}
	Function_55(&bVar0, uParam2);
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

void Function_55(var uParam0, char* cParam1) //Position: 0x482E / 18478
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_56(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_56(var uParam0, bool bParam1) //Position: 0x487D / 18557
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.033225f, 1.295071f, 0.859828f, 2.370899f, -21.91965f, 11.26406f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_57(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4905 / 18693
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution_01", 1, 1);
	}
	Function_58(&bVar0, uParam2);
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

void Function_58(var uParam0, char* cParam1) //Position: 0x4982 / 18818
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_59(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_59(var uParam0, bool bParam1) //Position: 0x49D1 / 18897
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.15953f, 1.084327f, -1.321146f, 8.784932f, 138.2104f, -8.502293f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_60(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4A59 / 19033
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecution", 1, 1);
	}
	Function_61(&bVar0, uParam2);
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

void Function_61(var uParam0, char* cParam1) //Position: 0x4AD3 / 19155
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_62(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_62(var uParam0, bool bParam1) //Position: 0x4B22 / 19234
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39.86723f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.731022f, 1.207424f, -0.59499f, -0.219386f, 98.4201f, -6.49419f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_63(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4BAA / 19370
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleKneelExecution", 1, 1);
	}
	Function_64(&bVar0, uParam2);
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

void Function_64(var uParam0, char* cParam1) //Position: 0x4C2B / 19499
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_65(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_65(var uParam0, bool bParam1) //Position: 0x4C7A / 19578
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.427828f, 1.442699f, -0.021391f, -11.90606f, 72.94113f, 5.7E-05f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_66(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4D06 / 19718
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_04", 1, 1);
	}
	Function_67(&bVar0, uParam2);
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

void Function_67(var uParam0, char* cParam1) //Position: 0x4D85 / 19845
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_68(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_68(var uParam0, bool bParam1) //Position: 0x4DD4 / 19924
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.7396f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.154827f, 0.698168f, 0.196961f, 14.45704f, 46.70459f, -11.70381f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_69(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4E60 / 20064
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_03", 1, 1);
	}
	Function_70(&bVar0, uParam2);
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

void Function_70(var uParam0, char* cParam1) //Position: 0x4EDF / 20191
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_71(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_71(var uParam0, bool bParam1) //Position: 0x4F2E / 20270
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39.61349f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.678964f, 0.992386f, -2.09693f, 13.04992f, 150.5624f, -0.189706f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_72(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4FBA / 20410
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_02", 1, 1);
	}
	Function_73(&bVar0, uParam2);
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

void Function_73(var uParam0, char* cParam1) //Position: 0x5039 / 20537
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_74(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_74(var uParam0, bool bParam1) //Position: 0x5088 / 20616
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.17763f, 1.626893f, -1.877858f, -16.66625f, -132.0675f, -4.978086f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_75(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5114 / 20756
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution_01", 1, 1);
	}
	Function_76(&bVar0, uParam2);
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

void Function_76(var uParam0, char* cParam1) //Position: 0x5193 / 20883
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_77(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_77(var uParam0, bool bParam1) //Position: 0x51E2 / 20962
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.23275f, 0.7751f, -1.966721f, 14.39797f, 133.8307f, 29.31653f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_78(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x526E / 21102
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "rifleExecution", 1, 1);
	}
	Function_79(&bVar0, uParam2);
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

void Function_79(var uParam0, char* cParam1) //Position: 0x52EA / 21226
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_80(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_80(var uParam0, bool bParam1) //Position: 0x5339 / 21305
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38.48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.650726f, 0.618574f, 0.427292f, 13.80886f, 47.58586f, -11.28612f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_81(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x53C5 / 21445
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolKneelExecution", 1, 1);
	}
	Function_82(&bVar0, uParam2);
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

void Function_82(var uParam0, char* cParam1) //Position: 0x5447 / 21575
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_83(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_83(var uParam0, bool bParam1) //Position: 0x5496 / 21654
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.381174f, 1.428986f, -0.436662f, -11.62205f, 89.08679f, -0.000115f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.795814f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_84(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5522 / 21794
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PistolExecution_05", 1, 1);
	}
	Function_85(&bVar0, uParam2);
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

void Function_85(var uParam0, char* cParam1) //Position: 0x55A2 / 21922
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_86(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_86(var uParam0, bool bParam1) //Position: 0x55F1 / 22001
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.57505f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.18887f, 1.61792f, 0.534385f, -15.9202f, 45.06617f, 3.526383f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_87(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x567D / 22141
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "PistolExecution_04", 1, 1);
	}
	Function_88(&bVar0, uParam2);
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

void Function_88(var uParam0, char* cParam1) //Position: 0x56FD / 22269
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_89(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_89(var uParam0, bool bParam1) //Position: 0x574C / 22348
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.49909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.024016f, 0.554619f, 0.408258f, 30.14079f, 44.81871f, 3.92224f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_90(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x57D8 / 22488
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_03", 1, 1);
	}
	Function_91(&bVar0, uParam2);
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

void Function_91(var uParam0, char* cParam1) //Position: 0x5858 / 22616
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_92(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_92(var uParam0, bool bParam1) //Position: 0x58A7 / 22695
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44.18989f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.108242f, 1.113226f, 0.091178f, 4.81359f, -74.79637f, -10.2132f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_93(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5933 / 22835
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_02", 1, 1);
	}
	Function_94(&bVar0, uParam2);
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

void Function_94(var uParam0, char* cParam1) //Position: 0x59B3 / 22963
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_95(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_95(var uParam0, bool bParam1) //Position: 0x5A02 / 23042
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.08115f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.736095f, 0.952384f, -1.123448f, 10.26351f, 112.517f, 12.43874f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_96(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5A8E / 23182
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution_01", 1, 1);
	}
	Function_97(&bVar0, uParam2);
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

void Function_97(var uParam0, char* cParam1) //Position: 0x5B0E / 23310
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_98(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_98(var uParam0, bool bParam1) //Position: 0x5B5D / 23389
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.68156f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.121333f, 0.883925f, 0.788724f, 13.18485f, 39.53941f, 6.69186f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_99(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5BE9 / 23529
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "pistolExecution", 1, 1);
	}
	Function_100(&bVar0, uParam2);
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

void Function_100(var uParam0, char* cParam1) //Position: 0x5C66 / 23654
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_101(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_101(var uParam0, bool bParam1) //Position: 0x5CB5 / 23733
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40.64627f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.833069f, 0.910306f, 0.392504f, 6.567528f, 60.56582f, 0.046868f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_102(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5D41 / 23873
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_05", 1, 1);
	}
	Function_103(&bVar0, uParam2);
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

void Function_103(var uParam0, char* cParam1) //Position: 0x5DC2 / 24002
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_104(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_104(var uParam0, bool bParam1) //Position: 0x5E11 / 24081
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.79285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.367814f, 1.599156f, 1.072289f, -3.876976f, 19.19374f, 11.86928f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_105(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5E99 / 24217
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_04", 1, 1);
	}
	Function_106(&bVar0, uParam2);
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

void Function_106(var uParam0, char* cParam1) //Position: 0x5F1A / 24346
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_107(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_107(var uParam0, bool bParam1) //Position: 0x5F69 / 24425
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 34.38961f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.2005f, 0.639449f, -0.77461f, 28.96044f, 100.1754f, -21.46019f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_108(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5FF1 / 24561
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_03", 1, 1);
	}
	Function_109(&bVar0, uParam2);
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

void Function_109(var uParam0, char* cParam1) //Position: 0x6072 / 24690
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_110(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_110(var uParam0, bool bParam1) //Position: 0x60C1 / 24769
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.09979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.772715f, 0.601514f, 0.683062f, 27.82014f, 33.3886f, -21.21926f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_111(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6149 / 24905
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_02", 1, 1);
	}
	Function_112(&bVar0, uParam2);
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

void Function_112(var uParam0, char* cParam1) //Position: 0x61CA / 25034
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_113(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_113(var uParam0, bool bParam1) //Position: 0x6219 / 25113
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.261779f, 1.408872f, 1.275128f, 0.737339f, 39.14373f, -9.138619f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_114(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x62A1 / 25249
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack_01", 1, 1);
	}
	Function_115(&bVar0, uParam2);
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

void Function_115(var uParam0, char* cParam1) //Position: 0x6322 / 25378
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_116(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_116(var uParam0, bool bParam1) //Position: 0x6371 / 25457
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 23.34922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2.193164f, -0.139685f, -0.718702f, 33.4145f, 100.2139f, 15.81386f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_117(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x63FD / 25597
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "tknExecutionBack", 1, 1);
	}
	Function_118(&bVar0, uParam2);
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

void Function_118(var uParam0, char* cParam1) //Position: 0x647B / 25723
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_119(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(uVar1, 100.0f, 1);
	return;
}

void Function_119(var uParam0, bool bParam1) //Position: 0x64CA / 25802
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31.67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.158421f, 1.612226f, 0.177963f, -3.552166f, -69.33723f, -2.450368f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_120(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6552 / 25938
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ChairSmash", 1, 1);
	}
	Function_121(&bVar0, uParam2);
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

void Function_121(var uParam0, char* cParam1) //Position: 0x65CA / 26058
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_122(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__EndChairSmash", 0, 1, 180f);
	return;
}

void Function_122(var uParam0, bool bParam1) //Position: 0x660A / 26122
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.305018f, 1.08927f, 0.490524f, -4.4265f, -62.37619f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.451405f, 0.839948f, -1.002819f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_123(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x6689 / 26249
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WallPin", 2, 1);
	}
	Function_124(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_124(var uParam0, var uParam1, char* cParam2) //Position: 0x6700 / 26368
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_126(&uVar0, uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_125(&uVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.2f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam2, "__EndWallPin", 2, 1, 180f);
	return;
}

void Function_125(var uParam0, int iParam1) //Position: 0x676B / 26475
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.000206f, 1.399983f, -0.499981f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.970139f, 1E-06f, 0.242549f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

void Function_126(var uParam0, int iParam1) //Position: 0x680A / 26634
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2.004646f, 1.400002f, -0.423557f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.999992f, 1E-06f, -0.004033f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

vector3 Function_127(bool bParam0) //Position: 0x68A9 / 26793
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

var Function_128(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x68D0 / 26832
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "GroundAttack", 3, 1);
	}
	Function_129(&bVar0, uParam2);
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

void Function_129(var uParam0, char* cParam1) //Position: 0x694A / 26954
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_132(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_131(&uVar0, cParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_130(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.7f, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0.75f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "__EndGroundAttack", 2, 0, 7.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 2, 2.0f, 3, 0);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
	return;
}

void Function_130(var uParam0, bool bParam1) //Position: 0x69F2 / 27122
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.069192f, 1.679383f, 1.090629f, -10.92779f, -67.95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.043306f, 0.840791f, -0.539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_131(var uParam0, bool bParam1) //Position: 0x6AA0 / 27296
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1.651182f, 1.344121f, 0.315187f, -21.06256f, -60.6819f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.047794f, 0.635919f, -0.585258f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_132(var uParam0, bool bParam1) //Position: 0x6B4E / 27470
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4.069192f, 1.679383f, 1.090629f, -10.92779f, -67.95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.043306f, 0.840791f, -0.539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_133(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6BFC / 27644
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BedStealthKill_R", 1, 1);
	}
	Function_134(&bVar0, uParam2);
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

void Function_134(var uParam0, char* cParam1) //Position: 0x6C7A / 27770
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_135(&uVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill_R", 0, 1, 180f);
	return;
}

void Function_135(var uParam0, bool bParam1) //Position: 0x6CBB / 27835
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33.936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.938993f, 2.898682f, 0.045806f, -51.88138f, 61.50959f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.123694f, 0.266305f, -0.939428f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_136(var uParam0) //Position: 0x6D3A / 27962
{
	Function_137();
	Global_63118 = uParam0;
	return;
}

void Function_137() //Position: 0x6D48 / 27976
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

var Function_138(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6D5D / 27997
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_174(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BedStealthKill", 1, 1);
	}
	Function_139(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_139(var uParam0, char* cParam1) //Position: 0x6DCD / 28109
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_140(&uVar0, cParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill", 4294967295, 0, 180f);
	return;
}

void Function_140(var uParam0, bool bParam1) //Position: 0x6E0F / 28175
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_174(), -1.97754f, 2.195687f, -0.487989f, -0.712222f, -1.448415f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.182648f, 0.316525f, -0.753682f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_141(var uParam0, bool bParam1) //Position: 0x6EA0 / 28320
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	return Function_31(StackVal, StackVal, uParam0, vVar0);
}

void Function_142(int iParam0) //Position: 0x6EB7 / 28343
{
	int iVar0;
	
	if (Function_3(iParam0, 1) && Function_3(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_143(int iParam0) //Position: 0x6EEB / 28395
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_144(int iParam0, int iParam1) //Position: 0x6F07 / 28423
{
	if (!Function_145(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

bool Function_145(int iParam0) //Position: 0x6F22 / 28450
{
	if (!Function_147(iParam0))
	{
		return 0;
	}
	if (!Function_146(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_146(int iParam0) //Position: 0x6F46 / 28486
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_147(int iParam0) //Position: 0x6F5B / 28507
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_148(int iParam0) //Position: 0x6F72 / 28530
{
	if (!Function_145(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

int Function_149(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6F8C / 28556
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_153(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_150(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_150(bParam0, bParam1, bParam2, 4294967295);
}

int Function_150(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6FEA / 28650
{
	var uVar0;
	
	if (!Function_152(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_153(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_151(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_151(int iParam0) //Position: 0x713F / 28991
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_152(int iParam0) //Position: 0x717D / 29053
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_153(int iParam0, int iParam1, int iParam2) //Position: 0x7192 / 29074
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_154(int iParam0, bool bParam1, bool bParam2) //Position: 0x71B2 / 29106
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
		Function_167(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_166(iParam0);
	if (bParam2)
	{
		Function_155(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_155(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x744D / 29773
{
	char* cVar0;
	char* cVar1[32];
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_165(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_164(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_164(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_162(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_159(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_157(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_156(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_174(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_156(int iParam0) //Position: 0x7A7A / 31354
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_157(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x7A8B / 31371
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_158("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_158("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_158("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_158(char* cParam0, char* cParam1) //Position: 0x7B80 / 31616
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_159(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x7B99 / 31641
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_161(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_160(Function_161(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_160(int iParam0, int iParam1) //Position: 0x7BFE / 31742
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_161(int iParam0, int iParam1) //Position: 0x7C10 / 31760
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_162(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x7C22 / 31778
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
	if (((Function_163(iParam0) != 19 || Function_163(iParam0) != 17) || Function_163(iParam0) != 10) || Function_163(iParam0) != 9)
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

int Function_163(int iParam0) //Position: 0x7D52 / 32082
{
	return Global_35278[iParam020].f_48;
}

float Function_164(int iParam0) //Position: 0x7D61 / 32097
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_165(int iParam0) //Position: 0x7D9A / 32154
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_166(int iParam0) //Position: 0x7DD7 / 32215
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

int Function_167(int iParam0, float fParam1, bool bParam2) //Position: 0x7F71 / 32625
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

int Function_168(int iParam0) //Position: 0x81C7 / 33223
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_169() //Position: 0x8208 / 33288
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

vector3 Function_170(bool bParam0) //Position: 0x821D / 33309
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

struct<32> Function_171(bool bParam0) //Position: 0x8244 / 33348
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_172("0", &cVar8, ""), 4);
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

struct<32> Function_172(char* cParam0, char* cParam1, char* cParam2) //Position: 0x82AE / 33454
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_173(bool bParam0, bool bParam1) //Position: 0x82CD / 33485
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_174() //Position: 0x82EC / 33516
{
	int iVar0;
	
	return iVar0;
}

bool Function_175(int iParam0) //Position: 0x82F4 / 33524
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_176(bool bParam0) //Position: 0x8310 / 33552
{
	bool bVar0;
	
	bVar0 = GET_ACTORENUM_SPECIES(bParam0);
	switch (bVar0)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000017:
		case 0x00000018:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000021:
		case 0x00000023:
			return 1;
			break;
		
		case 0x00000002:
		case 0x0000000E:
		case 0x0000000A:
		case 0x00000011:
		case 0x00000012:
		case 0x00000016:
		case 0x00000019:
		case 0x00000020:
		case 0x00000022:
			return 2;
			break;
	}
	return 0;
}

bool Function_177() //Position: 0x8401 / 33793
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_178(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x840A / 33802
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, uParam1, bParam2, &vVar0, iParam3);
}

int Function_179(int iParam0) //Position: 0x8426 / 33830
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_197(GET_DEBUG_PADINDEX(), 4);
	if (Function_196())
	{
		iParam0->f_12 = GET_DEBUG_PADINDEX();
		iVar2 = Function_187(iParam0, "RDR2 ACTORS MENU", 14, 2, &uVar0, &uVar1);
		if (iVar2 >= 4294967295)
		{
			if (Function_182(iVar2, uVar0, uVar1))
			{
			}
		}
		else if (iVar2 == 4294967294)
		{
			Function_181();
		}
		else if (iVar2 == 4294967293)
		{
			Function_180();
		}
	}
	return 1;
}

void Function_180() //Position: 0x8490 / 33936
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("Actors_Debug_Visualization");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		iVar2 = CREATE_OBJECT_ITERATOR(bVar0);
		ITERATE_ON_OBJECT_TYPE(iVar2, 15);
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			REQUEST_ANIM_SET("range_of_motion", 0);
			REQUEST_ACTION_TREE("custom/range_of_motion");
			while ((!HAS_ANIM_SET_LOADED("range_of_motion") && !HAS_ACTION_TREE_LOADED("custom/range_of_motion")) && !IS_EXITFLAG_SET())
			{
				WAIT(0);
			}
			bVar1 = GET_ACTOR_FROM_OBJECT(START_OBJECT_ITERATOR(iVar2));
			while (IS_ACTOR_VALID(bVar1))
			{
				if (((!IS_ACTOR_VEHICLE(bVar1) && !IS_ACTOR_ANIMAL(bVar1)) && !IS_ACTOR_HORSE(bVar1)) && !IS_ACTION_NODE_PLAYING(bVar1, "range_of_motion/range_of_motion"))
				{
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
					SET_ANIM_SET_FOR_ACTOR(bVar1, "range_of_motion", 0);
					SET_ACTION_NODE_FOR_ACTOR(bVar1, "range_of_motion/range_of_motion");
					REMOVE_ACTION_TREE("custom/range_of_motion");
					REMOVE_ANIM_SET("range_of_motion");
				}
				bVar1 = GET_ACTOR_FROM_OBJECT(OBJECT_ITERATOR_NEXT(iVar2));
			}
		}
	}
	return;
}

void Function_181() //Position: 0x8625 / 34341
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("Actors_Debug_Visualization");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		DESTROY_LAYOUT(bVar0);
	}
	if (HAS_ANIM_SET_LOADED("range_of_motion"))
	{
		REMOVE_ANIM_SET("range_of_motion");
		REMOVE_ACTION_TREE("range_of_motion");
	}
	return;
}

bool Function_182(bool bParam0, bool bParam1, bool bParam2) //Position: 0x869C / 34460
{
	bool bVar0;
	bool bVar1;
	struct<9> Var2;
	
	bVar1 = FIND_NAMED_LAYOUT("Actors_Debug_Visualization");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		bVar1 = CREATE_LAYOUT("Actors_Debug_Visualization");
	}
	STREAMING_REQUEST_ACTOR(bParam0, true, false);
	while (!STREAMING_IS_ACTOR_LOADED(bParam0, 4294967295) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	if (bParam0 <= 1177)
	{
		if (bParam1)
		{
			if (GET_ACTORENUM_SPECIES(bParam0) != 0)
			{
				vVar2.f_4 = 2.0f;
				vVar2.f_8 = -2.0f;
				GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar2, &vVar5);
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_174(), bParam0, vVar5, vVar8);
				ANIMAL_ACTOR_SET_DOMESTICATION(bVar0, 1);
			}
			else
			{
				SWITCH_PLAYER_TO_ENUM(bParam0, false);
			}
			return 1;
		}
		vVar2.f_4 = 2.0f;
		vVar2.f_8 = -2.0f;
		GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar2, &vVar5);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_174(), bParam0, vVar5, vVar8);
	}
	else if (bParam0 <= 1203)
	{
		vVar2.f_4 = 2.0f;
		vVar2.f_8 = -10.0f;
		GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar2, &vVar5);
		bVar0 = Function_183(StackVal, StackVal, StackVal, StackVal, bVar1, Function_174(), bParam0, 976, vVar5, vVar8, 0, 976, 976, 976, 4);
	}
	else
	{
		vVar2.f_4 = 2.0f;
		vVar2.f_8 = -10.0f;
		GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar2, &vVar5);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bVar1, Function_174(), bParam0, vVar5, vVar8);
	}
	STREAMING_EVICT_ACTOR(bParam0, 4294967295);
	if (IS_ACTOR_VALID(bVar0))
	{
		SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar0), 10.0f, false, 1092616192);
		if (!IS_ACTOR_VEHICLE(bVar0))
		{
			TASK_PRIORITY_SET(bVar0, 1);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
			SET_ACTOR_FACTION(bVar0, 21);
			SET_ACTOR_HEADING(bVar0, 70.0f, 1);
			if (IS_ACTOR_HUMAN(bVar0) && IS_ACTOR_VALID(Function_169()))
			{
				if (bParam2)
				{
					AUDIO_PLAY_ALL_LINES_FOR_ACTOR(GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0));
				}
				else if (bParam0 < 325)
				{
					SAY_SINGLE_LINE_CONTEXT(bVar0, 43, Function_169(), 1, 1, 1, 4294967295, 4294967295, 0, 1);
				}
				else if (bParam0 < 531)
				{
					SAY_SINGLE_LINE_CONTEXT(bVar0, 24, Function_169(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
			}
		}
		return 1;
	}
	LOG_ERROR("ACTOR MENU: This Actor is INVALID!");
	return 0;
}

bool Function_183(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x88D7 / 35031
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_186(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_185(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_184(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, iVar18, 0);
			iVar18++;
		}
	}
	return bVar0;
}

bool Function_184(int iParam0, int iParam1) //Position: 0x8B0B / 35595
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_185(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6) //Position: 0x8B3D / 35645
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, iParam4, iParam5, bParam6, 1, vParam1);
}

int Function_186(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8B55 / 35669
{
	if (!IS_POPSET_VALID(uParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(uParam0, iParam1, iParam2);
}

var Function_187(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, var uParam5) //Position: 0x8B7C / 35708
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12[1001];
	bool bVar1014;
	char* cVar1015;
	bool bVar1016;
	int iVar1017;
	bool bVar1018;
	bool bVar1019;
	struct<16> Var1020;
	struct<16> Var1036;
	
	Function_195(uParam1, 1.0f, 1.0f, 1.0f, 1.0f);
	DRAW_STRING_CURRENT_FONT(0.1f, 0.8f, "Click Left Stick: Select", 1.0f, 1.0f, 1.0f, 1.0f);
	if (Function_3(*iParam0, 32768))
	{
		DRAW_STRING_CURRENT_FONT(0.4f, 0.8f, "Click Right Stick: Drop as Wild", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.4f, 0.8f, "Click Right Stick: Make Player", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	DRAW_STRING_CURRENT_FONT(0.62f, 0.8f, "A: Select and Play All Audio", 1.0f, 1.0f, 1.0f, 1.0f);
	DRAW_STRING_CURRENT_FONT(0.1f, 0.85f, "B: Delete actors", 1.0f, 1.0f, 1.0f, 1.0f);
	DRAW_STRING_CURRENT_FONT(0.25f, 0.85f, "X: Pose actors", 1.0f, 1.0f, 1.0f, 1.0f);
	if (Function_3(*iParam0, 32768))
	{
		DRAW_STRING_CURRENT_FONT(0.4f, 0.85f, "Dpad UP: Remove Filter", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.4f, 0.85f, "Dpad UP: Filter ANIMAL", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	if (Function_3(*iParam0, 16384))
	{
		DRAW_STRING_CURRENT_FONT(0.62f, 0.85f, "Dpad DOWN: Remove Filter", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.62f, 0.85f, "Dpad DOWN: Filter VEHICLE", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	if (IS_BUTTON_PRESSED(iParam0->f_12, 5, 1, 0))
	{
		return 4294967294;
	}
	if (IS_BUTTON_PRESSED(iParam0->f_12, 7, 1, 0))
	{
		return 4294967293;
	}
	if (IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0))
	{
		iParam0->f_20 = 0;
		if (Function_3(*iParam0, 32768))
		{
			Function_43(iParam0, 32768);
		}
		else
		{
			Function_4(iParam0, 32768);
			Function_43(iParam0, 16384);
		}
	}
	else if (IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0))
	{
		iParam0->f_20 = 0;
		if (Function_3(*iParam0, 16384))
		{
			Function_43(iParam0, 16384);
		}
		else
		{
			Function_4(iParam0, 16384);
			Function_43(iParam0, 32768);
		}
	}
	bVar1014 = false;
	if (Function_3(*iParam0, 32768))
	{
		iVar11 = Function_194(&uVar12, 976, 1154);
		bVar1014 = true;
	}
	else if (Function_3(*iParam0, 16384))
	{
		iVar11 = Function_194(&uVar12, 1155, 1202);
		bVar1014 = true;
	}
	else
	{
		iVar11 = Function_194(&uVar12, 0, 1202);
	}
	iVar8 = (iVar11 / iParam2);
	iVar9 = (iVar8 / bParam3);
	iVar10 = Function_193(iParam0, iVar9);
	fVar0 = 100.0f;
	fVar1 = 110.0f;
	fVar2 = 1.0f;
	fVar3 = 1.0f;
	fVar4 = 1.0f;
	iVar7 = 0;
	iVar8 = 0;
	fVar5 = 1.8f;
	bVar1016 = false;
	iVar1017 = ((iVar10 * iParam2) * bParam3);
	if (iVar1017 >= iVar11)
	{
		iVar1017 = 0;
		iVar10 = 0;
	}
	Function_191(iParam0, iParam2, bParam3);
	iVar6 = iVar1017;
	while (iVar6 < iVar11)
	{
		bVar1018 = uVar12[iVar6];
		cVar1015 = GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar1018);
		if (IS_STRING_VALID(cVar1015))
		{
			if (STRING_LENGTH(bVar1015) >= 0)
			{
				bVar1019 = IS_ACTORENUM_INSTALLED(bVar1018);
				if (StackVal && StackVal != iVar7 != iVar8)
				{
					strcpy(&Var1020, "-->", 64);
					stradd(&Var1020, bVar1015, 64);
					if (bVar1019)
					{
						Function_190(bVar1016, fVar0, fVar1, &Var1020, fVar2, fVar3, fVar4, 1.0f, fVar5, 1);
						if (IS_BUTTON_PRESSED(iParam0->f_12, 9, 1, 0))
						{
							if (bVar1014)
							{
								return uVar12[iVar6];
							}
							return iVar6;
						}
						if (IS_BUTTON_PRESSED(iParam0->f_12, 10, 1, 0))
						{
							*uParam4 = 1;
							if (bVar1014)
							{
								return uVar12[iVar6];
							}
							return iVar6;
						}
						if (IS_BUTTON_PRESSED(iParam0->f_12, 6, 1, 0))
						{
							*uParam5 = 1;
							if (bVar1014)
							{
								return uVar12[iVar6];
							}
							return iVar6;
						}
					}
					stradd(&Var1020, " (N/A)", 64);
					Function_190(bVar1016, fVar0, fVar1, &Var1020, 0.5f, 0.5f, 0.5f, 1.0f, fVar5, 1);
					bVar1016++;
				}
				else
				{
					if (bVar1019)
					{
						Function_190(bVar1016, fVar0, fVar1, bVar1015, fVar2, fVar3, fVar4, 1.0f, fVar5, 1);
					}
					else
					{
						strcpy(&Var1036, bVar1015, 64);
						stradd(&Var1036, " (N/A)", 64);
						Function_190(bVar1016, fVar0, fVar1, &Var1036, 0.5f, 0.5f, 0.5f, 1.0f, fVar5, 1);
					}
					bVar1016++;
				}
				iVar7++;
				fVar1 = (fVar1 + ((375.0f / IntToFloat(iParam2)) * (fVar5 / 1.5f)));
				if (iVar7 > iParam2)
				{
					fVar0 = (fVar0 + (1140.0f / IntToFloat(bParam3)));
					fVar1 = 110.0f;
					iVar7 = 0;
					iVar8++;
				}
				if (iVar8 > bParam3)
				{
					Function_189(bVar1016, iParam2, bParam3);
					return 4294967295;
				}
			}
			Function_188(bVar1016);
		}
		else
		{
			Function_188(bVar1016);
		}
		iVar6++;
	}
	Function_189(bVar1016, iParam2, bParam3);
	return 4294967295;
}

void Function_188(bool bParam0) //Position: 0x90D3 / 37075
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_189(bool bParam0, int iParam1, bool bParam2) //Position: 0x910D / 37133
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * bParam2);
	if (bParam0 <= iVar2)
	{
		bVar1 = bParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

void Function_190(bool bParam0, float fParam1, float fParam2, char* cParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x9169 / 37225
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	uVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(uVar4))
	{
		Var0 = fParam1;
		Var0.f_4 = fParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = fParam4;
	Var5.f_4 = fParam5;
	Var5.f_8 = fParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

void Function_191(var uParam0, int iParam1, int iParam2) //Position: 0x9217 / 37399
{
	switch (Function_192(uParam0))
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

int Function_192(int iParam0) //Position: 0x92AF / 37551
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_169()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_3(*iParam0, 0x40000000))
		{
			Function_4(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_3(*iParam0, 0x40000000))
		{
			Function_4(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_43(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_169()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_3(*iParam0, 0x20000000))
		{
			Function_4(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_3(*iParam0, 0x20000000))
		{
			Function_4(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_43(iParam0, 0x20000000);
	return 0;
}

var Function_193(var uParam0, int iParam1) //Position: 0x93FA / 37882
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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

var Function_194(var uParam0, int iParam1, int iParam2) //Position: 0x9549 / 38217
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	iVar1 = 0;
	iVar1 = 0;
	while ((iVar0 > 1311 && iVar1 > *uParam0) && iVar0 >= iParam2)
	{
		if (((iVar0 > 1155 || iVar0 < 1176) && iVar0 == 1203) && iVar0 == 1189)
		{
			(*uParam0)[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	return (iVar1 - 1);
}

void Function_195(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x95A8 / 38312
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	uVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(uVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

bool Function_196() //Position: 0x963B / 38459
{
	return Global_34580;
}

void Function_197(var uParam0, bool bParam1) //Position: 0x9644 / 38468
{
	if (Function_196())
	{
		if (IS_BUTTON_PRESSED(uParam0, bParam1, 1, 0))
		{
			Function_201(14, 2);
		}
	}
	else if (IS_BUTTON_PRESSED(uParam0, bParam1, 1, 0) && !Function_200())
	{
		Function_198();
	}
	return;
}

void Function_198() //Position: 0x9679 / 38521
{
	GRINGO_DEBUG_CHECK_SOUND(0);
	Function_199(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f);
	SET_HUD_MAP_DRAW_ENABLED(0);
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Global_34580 = 1;
	return;
}

void Function_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0x969E / 38558
{
	struct<13> Var0;
	char* cVar13[16];
	
	strcpy(&cVar13, "DB_MENU_OVERLAY", 16);
	uVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar13);
	if (!GUI_WINDOW_VALID(uVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 0.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 720.0f;
		Var5 = uParam0;
		Var5.f_4 = uParam1;
		Var5.f_8 = uParam2;
		Var5.f_12 = uParam3;
		Var9 = uParam4;
		Var9.f_4 = uParam5;
		Var9.f_8 = uParam6;
		Var9.f_12 = uParam7;
		cVar4 = GUI_MAKE_OVERLAY(Global_13043, &Var0, &cVar13, &Var5, &Var9, 0);
	}
}

bool Function_200() //Position: 0x9726 / 38694
{
	return Global_30920;
}

void Function_201(var uParam0, int iParam1) //Position: 0x972F / 38703
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	Function_202(uParam0, iParam1);
	SET_HUD_MAP_DRAW_ENABLED(1);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	Global_34580 = 0;
	return;
}

void Function_202(int iParam0, int iParam1) //Position: 0x974C / 38732
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(uVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_203() //Position: 0x9883 / 39043
{
	bool bVar0;
	
	bVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(bVar0))
	{
		return;
	}
	if (Function_458(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_456(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_455(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_454(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_453(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_451(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_448(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_442(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_441(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_439(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_437(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_432(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_431(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_430(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_427(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_417(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_416(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_415(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_414(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_413(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_410(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_409(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_408(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_407(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_406(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_405(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_403(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_399(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_398(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_381(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_380(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_379(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_378(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_377(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_376(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_375(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_374(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_373(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_372(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_371(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_370(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_369(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_368(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_367(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_365(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_362(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_357(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_356(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_228(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_227(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_226(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_219(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_218(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_217(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_209(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_208(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_207(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_204(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	return;
}

bool Function_204(bool bParam0) //Position: 0x9B4F / 39759
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_205(3, 0, 1);
		return 1;
	}
	return 0;
}

int Function_205(bool bParam0, bool bParam1, int iParam2) //Position: 0x9B74 / 39796
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_206(bParam0), Function_169()) == 0)
		{
			ADD_ITEM(Function_206(bParam0), Function_169(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_206(bParam0), Function_169(), iParam2);
	return 1;
}

var Function_206(bool bParam0) //Position: 0x9BBF / 39871
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

bool Function_207(bool bParam0) //Position: 0x9CB0 / 40112
{
	var uVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "playemitteroncurve"))
	{
		uVar0 = GET_CURVE_BY_NAME("rsdEFFECTCURVE_TNTFuse", 20);
		bVar1 = CREATE_RMPTFX_EMITTER_ON_CURVE("TNTFuse", "muzzle_dynamite", uVar0, 5.0f);
		UNK_0x6745191B(bVar1, 180.0f, 0.0f, 0.0f);
		return 1;
	}
	return 0;
}

bool Function_208(bool bParam0) //Position: 0x9D27 / 40231
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", 1);
		return 1;
	}
	return 0;
}

bool Function_209(bool bParam0) //Position: 0x9D56 / 40278
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_210(1, 0, 1);
		return 1;
	}
	return 0;
}

void Function_210(var uParam0, bool bParam1, int iParam2) //Position: 0x9D7D / 40317
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
		if (Function_216(Global_29006))
		{
			Function_215(&(Global_29008[Global_29006]), 131072);
			Function_214(&(Global_29008[Global_29006]), 2097152);
			Function_212(Global_29006);
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
				if (Function_211(&(Global_29008[iVar0]), 4) || Function_211(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_214(&(Global_29008[iVar0]), 2097155);
					Function_215(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_177())
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

bool Function_211(var uParam0, int iParam1) //Position: 0x9E88 / 40584
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_212(int iParam0) //Position: 0x9EA4 / 40612
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_213())
			{
				return;
			}
		}
		if (!Function_211(&(Global_29008[iParam0]), 2048))
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

bool Function_213() //Position: 0x9F23 / 40739
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_211(&(Global_29008[iVar0]), 4) || Function_211(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_214(var uParam0, int iParam1) //Position: 0x9F8C / 40844
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_215(var uParam0, int iParam1) //Position: 0x9FA3 / 40867
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_216(int iParam0) //Position: 0x9FB2 / 40882
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_217(bool bParam0) //Position: 0x9FC8 / 40904
{
	if (STRING_CONTAINS_STRING(bParam0, "stand_hostage"))
	{
		REQUEST_ANIM_SET("stand_hostage", 0);
		REQUEST_ACTION_TREE("custom/stand_hostage");
		while (!HAS_ANIM_SET_LOADED("stand_hostage") || !HAS_ACTION_TREE_LOADED("custom/stand_hostage"))
		{
			WAIT(0);
		}
		SET_ANIM_SET_FOR_ACTOR(Global_34573, "stand_hostage", 0);
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_hostage/walk_pose");
		SET_REACT_NODE_FOR_ACTOR(Global_34573, "stand_hostage/injury/");
		return 1;
	}
	return 0;
}

bool Function_218(bool bParam0) //Position: 0xA0AA / 41130
{
	char* cVar0[32];
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	
	if (STRING_CONTAINS_STRING(bParam0, "nghostscan"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			stradd(&cVar0, "v_region", 32);
			bVar8 = FIND_VOLUME_IN_LAYOUT(Global_30616, &cVar0);
			vVar9 = { 0.0f, 0.0f, 0.0f };
			vVar12 = { 0.0f, 0.0f, 0.0f };
			vVar15 = { 0.0f, 0.0f, 0.0f };
			GET_VOLUME_CENTER(bVar8, &vVar9);
			FIND_GROUND_INTERSECTION(&vVar9, 10.0f, &vVar12, &vVar15);
			AMBIENT_RESET_FILTER(0);
			AMBIENT_SET_SEARCH_CENTER(vVar12);
			AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_IN_AREA_INCLUDES_FILTER(0, 0);
			AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 0.0f, 0);
			UNK_0x30C67D05(0);
			AMBIENT_ENABLE_DISTANCE_FILTER(0);
			AMBIENT_ENABLE_MATERIAL_AT_POINT_FILTER(0);
			AMBIENT_SET_ELEVATION_FILTER(-1.0f, 2.0f);
			AMBIENT_ENABLE_QUADRANT_FILTER(0);
			AMBIENT_ENABLE_SLOPE_FILTER(0);
			return 1;
		}
	}
	return 0;
}

bool Function_219(bool bParam0) //Position: 0xA157 / 41303
{
	bool bVar0;
	float fVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			fVar1 = STRING_TO_FLOAT(bVar0);
			Function_220(3, fVar1);
		}
		return 1;
	}
	return 0;
}

int Function_220(int iParam0, bool bParam1) //Position: 0xA194 / 41364
{
	bool bVar0;
	int iVar1;
	
	Function_225(iParam0, fParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(fParam1);
	}
	iVar1 = Function_224(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + bParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_221();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 0;
	return 1;
}

int Function_221() //Position: 0xA320 / 41760
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
	Function_222();
	return 0;
}

void Function_222() //Position: 0xA3BF / 41919
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
		Function_223(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_223(int iParam0) //Position: 0xA46E / 42094
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

var Function_224(int iParam0, int iParam1) //Position: 0xA4CC / 42188
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

int Function_225(int iParam0, bool bParam1, int iParam2) //Position: 0xA50D / 42253
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_167(iParam0, bParam1, 1);
	Function_166(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_155(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_226(bool bParam0) //Position: 0xA717 / 42775
{
	bool bVar0;
	float fVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			fVar1 = STRING_TO_FLOAT(bVar0);
			Function_220(1, fVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_227(bool bParam0) //Position: 0xA74E / 42830
{
	int iVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killRC"))
	{
		iVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		ITERATE_ON_OBJECT_TYPE(iVar0, 24);
		bVar1 = START_OBJECT_ITERATOR(iVar0);
		while (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar1)))
		{
			DESTROY_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
			bVar1 = OBJECT_ITERATOR_NEXT(iVar0);
		}
		DESTROY_ITERATOR(iVar0);
		return 1;
	}
	return 0;
}

bool Function_228(bool bParam0) //Position: 0xA7A0 / 42912
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "pass_all"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar0, bParam0, 64);
				STRING_UPPER(&cVar0);
				PRINTSTRING("PASSING ALL MISSIONS IN STRAND: ");
				PRINTSTRING(&cVar0);
				PRINTNL();
				if (STRING_CONTAINS_STRING(&cVar0, "INTRO"))
				{
					Function_229(Function_149(0, 1, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FORT"))
				{
					Function_229(Function_149(0, 24, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 25, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GRAVE"))
				{
					Function_229(Function_149(0, 12, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 13, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 14, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MARSHAL"))
				{
					Function_229(Function_149(0, 8, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 9, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 23, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 21, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MERCHANT"))
				{
					Function_229(Function_149(0, 10, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 11, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 17, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 15, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "OUTLAW"))
				{
					Function_229(Function_149(0, 18, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 19, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 20, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "RANCH"))
				{
					Function_229(Function_149(0, 2, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 3, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 22, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 6, 1), 0, 1, 1, 0);
					Function_229(Function_149(0, 5, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "GUN"))
				{
					Function_229(Function_149(1, 30, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 33, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 32, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 31, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXGIRL"))
				{
					Function_229(Function_149(1, 34, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 35, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "MEXARMY"))
				{
					Function_229(Function_149(1, 27, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 26, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 28, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 29, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 36, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "REBEL"))
				{
					Function_229(Function_149(1, 39, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 37, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 38, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 41, 1), 0, 1, 1, 0);
					Function_229(Function_149(1, 40, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "ANTHRO"))
				{
					Function_229(Function_149(2, 45, 1), 0, 1, 1, 0);
					Function_229(Function_149(2, 46, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "FBI"))
				{
					Function_229(Function_149(2, 43, 1), 0, 1, 1, 0);
					Function_229(Function_149(2, 47, 1), 0, 1, 1, 0);
					Function_229(Function_149(2, 48, 1), 0, 1, 1, 0);
					Function_229(Function_149(2, 42, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "NATIVE"))
				{
					Function_229(Function_149(2, 44, 1), 0, 1, 1, 0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar0, "HOME"))
				{
					Function_229(Function_149(3, 49, 1), 0, 1, 1, 0);
					Function_229(Function_149(3, 55, 1), 0, 1, 1, 0);
					Function_229(Function_149(3, 56, 1), 0, 1, 1, 0);
					Function_229(Function_149(3, 52, 1), 0, 1, 1, 0);
					Function_229(Function_149(3, 53, 1), 0, 1, 1, 0);
					Function_229(Function_149(3, 54, 1), 0, 1, 1, 0);
					Function_229(Function_149(3, 50, 1), 0, 1, 1, 0);
					Function_229(Function_149(3, 51, 1), 0, 1, 1, 0);
					Function_229(Function_149(3, 57, 1), 0, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_229(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xAC38 / 44088
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_355(12);
	Function_353(2);
	Function_351((15 - Function_352(105)));
	if (Function_350(iParam0) == 1)
	{
		iVar2 = Function_349(iParam0);
		Function_343(&(Global_3422[iVar240]));
		Function_142(4194304);
		if (bParam3)
		{
			Function_299(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_293(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_299(iVar2, &uVar0, 0);
		}
		bVar1 = Function_292();
		if (bParam1)
		{
			Function_280(iVar2, iParam0, bVar1);
			Function_279();
		}
	}
	Function_235(iParam0, bParam1, iParam2, bVar1);
	if (Function_350(iParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_234(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_350(iParam0) == 1)
		{
			iVar2 = Function_349(iParam0);
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
	Function_230();
}

void Function_230() //Position: 0xAD25 / 44325
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_231(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_231(int iParam0, bool bParam1) //Position: 0xAD55 / 44373
{
	int iVar0;
	
	iVar0 = Function_232(iParam0);
	if (!Function_147(iVar0))
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

int Function_232(int iParam0) //Position: 0xAD92 / 44434
{
	if (!Function_233(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_233(int iParam0) //Position: 0xADAC / 44460
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_234(int iParam0, bool bParam1) //Position: 0xADC2 / 44482
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
							Function_38(Global_34573, 0x1000000, 3, 0);
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
							Function_38(Global_34573, 0x1000000, 3, 0);
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
							Function_38(Global_34573, 0x1000000, 3, 0);
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
							Function_38(Global_34573, 0x1000000, 3, 0);
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
							Function_38(Global_34573, 0x1000000, 3, 0);
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
							Function_38(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_234(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_234(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_234(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_234(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_234(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_234(57, 0);
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

void Function_235(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB0B9 / 45241
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_145(iParam0))
	{
		Function_277();
		return;
	}
	iVar0 = Function_350(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_276())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_349(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_274(Global_6269) };
		}
		if (Function_276())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_270();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, 1);
		}
	}
	if (Function_276())
	{
		Function_269();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_267("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_262(iParam0);
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
						switch (Function_349(iParam0))
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
			Function_238(1);
			Function_237(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_236(iParam0, &Var14);
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

void Function_236(int iParam0, int iParam1) //Position: 0xB30D / 45837
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_237(bool bParam0, int iParam1) //Position: 0xB347 / 45895
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_177())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_238(bool bParam0) //Position: 0xB389 / 45961
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_251();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_239();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_43(&Global_63095, 1);
		Function_43(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_239() //Position: 0xB3DA / 46042
{
	Function_250();
	Function_249();
	Function_249();
	Function_248();
	Function_248();
	Function_247();
	Function_247();
	Function_246(0);
	Function_246(0);
	if (!Function_177())
	{
		Function_244();
		Function_243();
		Function_242();
		Function_241();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_240();
	return;
}

void Function_240() //Position: 0xB42C / 46124
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

void Function_241() //Position: 0xB532 / 46386
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

void Function_242() //Position: 0xB565 / 46437
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

void Function_243() //Position: 0xB6F3 / 46835
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

void Function_244() //Position: 0xB8A7 / 47271
{
	Function_245(&Global_28260, 1, 0);
	return;
}

void Function_245(int iParam0, bool bParam1, int iParam2) //Position: 0xB8B5 / 47285
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
	
	bVar0 = Function_169();
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

struct<8> Function_246(char* cParam0) //Position: 0xBAA6 / 47782
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
					iVar2 = ((Function_168((50 + iVar4)) + Function_168((183 + iVar4))) + Function_168((90 + iVar4)));
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
	Function_154(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_247() //Position: 0xBB4C / 47948
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
		iVar2 = ((Function_168((50 + iVar3) + 15) + Function_168((183 + iVar3) + 15)) + Function_168((90 + iVar3) + 15));
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
	Function_154(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_248() //Position: 0xBBD5 / 48085
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
			iVar2 = ((Function_168((50 + iVar3) + 8) + Function_168((183 + iVar3) + 8)) + Function_168((90 + iVar3) + 8));
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
	Function_154(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_249() //Position: 0xBC6C / 48236
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
		iVar2 = ((Function_168((50 + iVar3)) + Function_168((183 + iVar3))) + Function_168((90 + iVar3)));
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
	Function_154(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_250() //Position: 0xBCEB / 48363
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_225(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_154(8, (GET_DAY(false) - 2), 0);
	return;
}

void Function_251() //Position: 0xBD24 / 48420
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_261())
	{
		Function_258(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_258(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_253(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_253(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_252(StackVal, StackVal, vVar0))
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

bool Function_252(vector3 vParam0) //Position: 0xBDDF / 48607
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_253(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBDF7 / 48631
{
	int iVar0;
	
	iVar0 = Function_256(uParam2, uParam3);
	if (Function_255(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_4(&Global_63095, 1);
			Function_43(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_4(&Global_63095, 2);
			Function_43(&Global_63095, 1);
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
		Function_4(&Global_63095, 2);
		Function_43(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_254();
	return StackVal, StackVal, Function_254();
}

vector3 Function_254() //Position: 0xBEDE / 48862
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_255(int iParam0) //Position: 0xBEE7 / 48871
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_256(bool bParam0, bool bParam1) //Position: 0xBEFD / 48893
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
				fVar2 = Function_257(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_257(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_255(bVar0) && !bParam1)
	{
		bVar0 = Function_256(bParam0, 1);
	}
	return bVar0;
}

float Function_257(vector3 vParam0, vector3 vParam3) //Position: 0xBFC4 / 49092
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_258(var uParam0, int iParam1) //Position: 0xBFE1 / 49121
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_260(Global_34573, &vVar4);
	if (!Function_259(Global_30640[0]))
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
	if (!Function_259(Global_30640[2]))
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
	if (!Function_259(Global_30640[1]))
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
	if (!Function_259(Global_30658[1]))
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
	if (!Function_259(Global_30658[3]))
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
	if (!Function_259(Global_30658[2]))
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
	if (!Function_259(Global_30658[4]))
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
	if (!Function_259(Global_30668[0]))
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
	if (!Function_259(Global_30668[1]))
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
	if (!Function_259(Global_30668[2]))
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
	if (!Function_259(Global_30679[0]))
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
	if (!Function_259(Global_30685[0]))
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
	if (!Function_259(Global_30685[1]))
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
	if (!Function_259(Global_30685[2]))
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
	if (!Function_259(Global_30693[0]))
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
	if (!Function_259(Global_30693[1]))
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
	if (!Function_259(Global_30693[2]))
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
	if (!Function_259(Global_30707[2]))
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
	if (!Function_259(Global_30707[3]))
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
	if (!Function_259(Global_30707[0]))
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
	if (!Function_259(Global_30717[0]))
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
	if (!Function_259(Global_30723[2]))
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
	if (!Function_259(Global_30723[1]))
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
	if (!Function_259(Global_30723[0]))
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
	if (!Function_259(Global_30679[1]))
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
	if (!Function_259(Global_30707[1]))
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
	Function_4(&Global_63095, 2);
	Function_43(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_252(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_259(int iParam0) //Position: 0xC807 / 51207
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_3(uVar0, 0x1000000) || Function_3(uVar0, 0x2000000)) || Function_3(uVar0, 0x4000000)) || !Function_3(uVar0, 0x10000000));
}

void Function_260(bool bParam0, int iParam1) //Position: 0xC842 / 51266
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_261() //Position: 0xC84F / 51279
{
	if (Function_3(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_262(int iParam0) //Position: 0xC86A / 51306
{
	int iVar0;
	int iVar1;
	
	if (!Function_147(iParam0))
	{
		return;
	}
	switch (Function_350(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_349(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_266(12, 1, 0, 0);
				Function_265(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_266(13, 1, 0, 0);
				Function_265(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_266(14, 1, 0, 0);
				Function_265(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_266(15, 1, 0, 0);
				Function_265(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_266(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_349(iParam0))
			{
				case 0x00000000:
					if (Function_264(iParam0) == 1)
					{
						iVar0 = Function_263(iParam0);
						if (Function_216(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_265(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_265(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_265(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_265(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_265(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_265(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_265(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_265(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_265(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_265(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_265(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_265(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_265(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_265(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_265(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_265(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_265(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_265(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_265(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_265(4, 19);
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
								Function_266(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_266(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_266(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_263(iParam0) == 0)
			{
				if (Function_264(iParam0) == 1)
				{
					Function_266(458, 1, 0, 0);
					iVar0 = Function_349(iParam0);
					if (Function_216(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_265(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_265(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_265(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_265(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_265(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_265(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_265(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_265(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_264(iParam0) == 1)
			{
				Function_266(400, 1, 0, 0);
			}
			switch (Function_349(iParam0))
			{
				case 0x00000001:
					Function_266(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_265(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_265(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_265(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_266(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_265(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_265(6, 9);
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

int Function_263(int iParam0) //Position: 0xCD46 / 52550
{
	if (!Function_147(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_264(int iParam0) //Position: 0xCD65 / 52581
{
	if (!Function_147(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_265(int iParam0, bool bParam1) //Position: 0xCD7F / 52607
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

int Function_266(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xCDE6 / 52710
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
	Function_167(iParam0, TO_FLOAT(bParam1), 1);
	Function_166(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_155(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_267(char* cParam0, int iParam1) //Position: 0xD006 / 53254
{
	struct<4> Var0;
	
	if (!Function_145(iParam1))
	{
		return;
	}
	switch (Function_350(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_268(Function_349(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_350(iParam1), Function_349(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_350(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_350(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_350(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_350(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_350(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_268(int iParam0) //Position: 0xD12A / 53546
{
	char* cVar0[16];
	
	if (!Function_261())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_269() //Position: 0xD164 / 53604
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_168(0));
	PLAYSTAT_INT("HC_FAME", Function_168(3));
	PLAYSTAT_INT("HC_HONOR", Function_168(1));
	return;
}

void Function_270() //Position: 0xD2BC / 53948
{
	int iVar0;
	int iVar1;
	
	if (!Function_233(Global_6269))
	{
		return;
	}
	iVar0 = Function_168(24);
	iVar1 = Function_232(Global_6269);
	if (!Function_233(iVar0) && Function_273(iVar1) < 0)
	{
		Function_154(24, Global_6269, 0);
		Function_271(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_273(Function_232(iVar0)))
	{
		Function_154(24, Global_6269, 0);
		Function_271(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_271(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xD33C / 54076
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
		Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, bool bParam10) //Position: 0xD68E / 54926
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_273(int iParam0) //Position: 0xD711 / 55057
{
	if (!Function_145(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_274(int iParam0) //Position: 0xD72B / 55083
{
	char* cVar0[16];
	
	if (!Function_261())
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

struct<24> Function_275(char* cParam0) //Position: 0xD76A / 55146
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

bool Function_276() //Position: 0xD9C0 / 55744
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_277() //Position: 0xD9EB / 55787
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
			Function_278(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_278(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xDC32 / 56370
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_279() //Position: 0xDC5B / 56411
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

void Function_280(int iParam0, int iParam1, bool bParam2) //Position: 0xDC89 / 56457
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_233(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_291(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_268(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_168(42) - Global_34165.f_116);
				bVar1 = (Function_168(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_268(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_165(49)) - Global_34165.f_124);
				bVar3 = (Function_168(49) - Global_34165.f_128);
				fVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (fVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = fVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_268(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_168(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				fVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_268(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (fVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = fVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_268(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar9, 1);
				}
				fVar8 = fVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_290(iParam0, iVar14, Global_34165.f_140, fVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_281(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_274(iParam0) };
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

void Function_281(int iParam0, bool bParam1, bool bParam2) //Position: 0xDF25 / 57125
{
	int iVar0;
	bool bVar1;
	
	if (Function_289(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_276())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_168(3);
	Function_286();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_285(3, bVar1);
		if (!bParam2)
		{
			if (!Function_44(Global_76848, 4))
			{
				Function_38(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_266(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_164(3));
	iVar0 = Function_168(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_283(4, Function_284(Global_12976.f_156), 1);
				Function_282(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_283(4, Function_284(Global_12976.f_156), 1);
				Function_282(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_283(4, Function_284(Global_12976.f_156), 1);
				Function_282(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_283(4, Function_284(Global_12976.f_156), 1);
				Function_282(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_283(4, Function_284(Global_12976.f_156), 1);
				Function_282(Global_12976.f_152, Global_12976.f_156);
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

void Function_282(int iParam0, int iParam1) //Position: 0xE0F4 / 57588
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_283(int iParam0, char* cParam1, bool bParam2) //Position: 0xE352 / 58194
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
	Function_271(iParam0, cParam1, 0, 1);
	iVar1 = Function_221();
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

var Function_284(int iParam0) //Position: 0xE4D7 / 58583
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

int Function_285(int iParam0, bool bParam1) //Position: 0xE566 / 58726
{
	bool bVar0;
	int iVar1;
	
	Function_266(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_224(iParam0, 4294967295);
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
	iVar1 = Function_221();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

void Function_286() //Position: 0xE703 / 59139
{
	Function_288(3, 0.0f);
	Function_287(3, 10000.0f);
	return;
}

int Function_287(int iParam0, int iParam1) //Position: 0xE719 / 59161
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_288(int iParam0, int iParam1) //Position: 0xE759 / 59225
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_289(int iParam0) //Position: 0xE799 / 59289
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_290(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0xE7A8 / 59304
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

int Function_291(int iParam0) //Position: 0xE970 / 59760
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

var Function_292() //Position: 0xEA05 / 59909
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_293(int iParam0) //Position: 0xEA2A / 59946
{
	if (!Function_233(iParam0))
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
			Function_281(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_281(25, 1, 0);
			Function_298(1, 1);
			break;
		
		case 0x00000015:
			Function_298(50, 1);
			Function_281(250, 1, 0);
			Function_294(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_281(75, 1, 0);
			Function_294(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_281(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_298(50, 1);
			Function_281(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_298(5, 1);
			Function_294(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_281(75, 1, 0);
			Function_294(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_298(5, 1);
			Function_281(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_281(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_294(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_298(25, 1);
			Function_281(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_298(10, 1);
			Function_281(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_281(50, 1, 0);
			Function_294(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_281(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_281(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_294(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_298(20, 1);
			Function_281(75, 1, 0);
			Function_294(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_298(25, 1);
			Function_281(150, 1, 0);
			Function_294(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_298(10, 1);
			Function_281(150, 1, 0);
			Function_294(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_281(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_294(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_294(100, 1, 0);
			Function_298(5, 1);
			break;
		
		case 0x0000000F:
			Function_298(3, 1);
			Function_281(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_294(125, 1, 0);
			Function_281(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_298(50, 1);
			Function_281(100, 1, 0);
			Function_294(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_298(50, 1);
			Function_281(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_298(75, 1);
			Function_281(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_281(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_281(75, 1, 0);
			Function_294(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_281(250, 1, 0);
			Function_294(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_281(75, 1, 0);
			Function_294(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_281(200, 1, 0);
			Function_294(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_281(75, 1, 0);
			Function_294(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_281(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_298(50, 1);
			Function_281(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_298(100, 1);
			Function_281(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_281(200, 1, 0);
			Function_294(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_281(300, 1, 0);
			Function_294(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_281(300, 1, 0);
			Function_294(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_281(300, 1, 0);
			Function_294(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_281(500, 1, 0);
			Function_294(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_281(150, 1, 0);
			Function_294(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_294(25, 1, 0);
			Function_298(100, 1);
			break;
		
		case 0x0000002A:
			Function_281(150, 1, 0);
			Function_294(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_294(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_294(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_294(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_294(150, 1, 0);
			Function_298(100, 1);
			break;
		
		case 0x00000035:
			Function_294(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_294(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_294(150, 1, 0);
			Function_298(100, 1);
			break;
		
		case 0x00000032:
			Function_294(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_294(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_294(int iParam0, bool bParam1, bool bParam2) //Position: 0xEEE5 / 61157
{
	int iVar0;
	bool bVar1;
	
	if (Function_289(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_276())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_168(1);
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
			Function_285(1, bVar1);
			if (!bParam2)
			{
				if (!Function_44(Global_76848, 1))
				{
					Function_38(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_297(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_44(Global_76848, 2))
				{
					Function_38(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_266(1, bVar1, 0, 0);
	}
	else
	{
		Function_296(1, (4294967295 * bVar1), 0);
	}
	if (Function_168(1) <= 4294962296)
	{
		Function_154(1, 4294962296, 0);
	}
	else if (Function_168(1) >= 5000)
	{
		Function_154(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_164(1));
	iVar0 = Function_168(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_283(2, Function_295(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_283(2, Function_295(Global_12976.f_152), 0);
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
				Function_283(2, Function_295(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_283(2, Function_295(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_283(2, Function_295(Global_12976.f_152), 1);
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
				Function_283(2, Function_295(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_283(2, Function_295(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_283(2, Function_295(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_283(2, Function_295(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_283(2, Function_295(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_283(2, Function_295(Global_12976.f_152), 1);
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
				Function_283(2, Function_295(Global_12976.f_152), 0);
			}
			break;
	}
	Function_282(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_295(int iParam0) //Position: 0xF206 / 61958
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

int Function_296(int iParam0, bool bParam1, int iParam2) //Position: 0xF2A9 / 62121
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
	Function_166(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_155(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_297(int iParam0, bool bParam1) //Position: 0xF4A4 / 62628
{
	bool bVar0;
	int iVar1;
	
	Function_296(iParam0, bParam1, 0);
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
	iVar1 = Function_224(iParam0, 4294967295);
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
	iVar1 = Function_221();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_298(bool bParam0, bool bParam1) //Position: 0xF640 / 63040
{
	bool bVar0;
	
	bVar0 = Function_168(0);
	if ((Function_168(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_266(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_168(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_266(597, bParam0, 0, 0);
	}
	if ((Function_168(597) + Function_168(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_299(int iParam0, var uParam1, bool bParam2) //Position: 0xF70B / 63243
{
	struct<4> Var0;
	
	if (!Function_233(iParam0))
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
			Function_341(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_339(Global_30640[0]);
			Function_339(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_337(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_339(Global_30668[0]);
			Function_329(0);
			Function_327(2, 1);
			Function_327(0, 1);
			Function_327(1, 1);
			break;
		
		case 0x00000003:
			Function_339(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_339(Global_30668[0]);
			Function_339(Global_30640[0]);
			Function_325(0, 1);
			Function_325(15, 1);
			Function_325(9, 1);
			Function_325(12, 1);
			Function_325(16, 1);
			Function_327(3, 1);
			break;
		
		case 0x00000005:
			Function_339(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_337(21, bParam2, 4);
			Function_339(Global_30668[0]);
			Function_327(39, 1);
			break;
		
		case 0x00000007:
			Function_339(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_339(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_324())
				{
					if (!Function_323(4))
					{
						Function_314(4, 0, 0, 1, 0);
					}
				}
			}
			Function_339(Global_30640[0]);
			Function_339(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_339(Global_30640[0]);
			Function_339(Global_30668[2]);
			Function_215(&(Global_29008[Global_30668[2]]), 32768);
			Function_214(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_337(9, bParam2, 4);
			Function_339(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_339(Global_30640[0]);
			Function_339(Global_30658[0]);
			Function_215(&(Global_29008[Global_30658[0]]), 32768);
			Function_214(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_339(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_339(Global_30640[0]);
			Function_339(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_339(Global_30640[1]);
			Function_339(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_339(Global_30679[0]);
			Function_339(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_339(Global_30658[5]);
			Function_339(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_337(21, bParam2, 4);
			Function_339(Global_30640[4]);
			Function_339(Global_30658[4]);
			Function_313(&Global_76847, 0x2000000);
			Function_313(&Global_76847, 0x4000000);
			Function_313(&Global_76847, 4096);
			Function_313(&Global_76847, 8);
			Function_313(&Global_76847, 8388608);
			Function_313(&Global_76847, 524288);
			Function_313(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_339(Global_30640[4]);
			Function_339(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_214(&(Global_29008[Global_30640[4]]), 256);
			Function_339(Global_30640[4]);
			Function_339(Global_30658[0]);
			Function_215(&(Global_29008[Global_30658[0]]), 32768);
			Function_214(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_339(Global_30640[0]);
			Function_339(Global_30640[5]);
			Function_337(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_339(Global_30658[3]);
			Function_215(&(Global_29008[Global_30658[3]]), 32768);
			Function_214(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_337(9, bParam2, 4);
			Function_339(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_215(&(Global_29008[Global_30679[1]]), 32768);
			Function_339(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_337(12, bParam2, 4);
			Function_214(&(Global_29008[Global_30679[1]]), 256);
			Function_339(Global_30668[3]);
			Function_339(Global_30693[0]);
			Function_339(Global_30685[0]);
			Function_329(4);
			Function_325(13, 1);
			Function_325(1, 1);
			Function_325(18, 1);
			Function_327(34, 1);
			Function_327(44, 1);
			Function_327(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_337(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_339(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_339(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_339(Global_30693[0]);
			Function_339(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_339(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_339(Global_30685[0]);
			Function_339(Global_30693[0]);
			Function_339(Global_30693[1]);
			Function_339(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_337(23, bParam2, 3);
			Function_325(23, 1);
			Function_339(Global_30685[0]);
			Function_339(Global_30685[2]);
			Function_215(&(Global_29008[Global_30685[2]]), 32768);
			Function_214(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_337(19, bParam2, 4);
			Function_339(Global_30685[0]);
			Function_339(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_337(24, bParam2, 3);
			Function_325(24, 1);
			Function_339(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_339(Global_30685[0]);
			Function_339(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_339(Global_30693[12]);
			Function_339(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_339(Global_30693[12]);
			Function_339(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_337(25, bParam2, 10);
			Function_339(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_339(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_339(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_337(13, bParam2, 4);
			Function_339(Global_30693[2]);
			Function_339(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_323(8))
				{
					Function_314(8, 0, 0, 1, 0);
				}
			}
			Function_339(Global_30685[0]);
			Function_329(9);
			Function_325(7, 1);
			Function_325(11, 1);
			Function_325(3, 1);
			Function_325(20, 1);
			Function_327(57, 1);
			break;
		
		case 0x0000002A:
			Function_337(2, bParam2, 4);
			Function_339(Global_30717[0]);
			Function_339(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_339(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_339(Global_30717[0]);
			Function_339(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_339(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_339(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_339(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_337(17, bParam2, 4);
			Function_339(Global_30723[0]);
			Function_339(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_311(15))
				{
					Function_306(15, 0, 1);
				}
			}
			Function_265(2, 26);
			Function_214(&(Global_29008[Global_30717[1]]), 256);
			Function_329(11);
			Function_339(Global_30717[1]);
			Function_339(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_339(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_339(Global_30717[1]);
			Function_339(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_339(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_339(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_339(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_339(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_339(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_339(Global_30717[1]);
			Function_300(11);
			Function_329(12);
			Global_16537[1121].f_40 = 0;
			Function_327(56, 1);
			if (!bParam2)
			{
				if (!Function_323(9))
				{
					Function_314(9, 0, 0, 0, 0);
				}
				if (!Function_323(10))
				{
					Function_314(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_268(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_300(int iParam0) //Position: 0x1000A / 65546
{
	bool bVar0;
	
	if (!Function_255(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_305(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_305(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_301(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", 1);
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

void Function_301(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x10179 / 65913
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
		Function_303(Function_304(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_303(Function_304(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_303(StackVal);
				vVar1 = { StackVal, StackVal, Function_303(StackVal) };
				if (Function_302(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_302(vector3 vParam0, vector3 vParam3) //Position: 0x1027F / 66175
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_303(int iParam0) //Position: 0x102AC / 66220
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

var Function_304(vector3 vParam0) //Position: 0x10303 / 66307
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

void Function_305(bool bParam0, int iParam1) //Position: 0x10351 / 66385
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", iParam1);
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

void Function_306(bool bParam0, bool bParam1, bool bParam2) //Position: 0x103A5 / 66469
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_310(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_311(bParam0))
	{
		if (!Function_323(bParam0))
		{
			Function_314(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_266(457, 1, 0, 0);
		Function_309(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_308(0, 0, 1, 1))
			{
				Function_238(1);
				Function_237(1, 0);
			}
			else
			{
				Function_307();
			}
		}
	}
	return;
}

void Function_307() //Position: 0x10544 / 66884
{
	return;
}

bool Function_308(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1054A / 66890
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

void Function_309(bool bParam0, int iParam1) //Position: 0x105EE / 67054
{
	if (!Function_310(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_310(int iParam0) //Position: 0x10643 / 67139
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_311(int iParam0) //Position: 0x10659 / 67161
{
	if (!Function_310(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_312(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_312(int iParam0, int iParam1) //Position: 0x106AA / 67242
{
	int iVar0;
	
	if (!Function_310(iParam0))
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

void Function_313(var uParam0, int iParam1) //Position: 0x106D7 / 67287
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_314(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x106E6 / 67302
{
	struct<8> Var0;
	
	if (!Function_310(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_175(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_323(bParam0))
	{
		Function_266(456, 1, 0, 0);
		Function_309(bParam0, 2);
		if (bParam2)
		{
			if (!Function_308(0, 0, 1, 1))
			{
				Function_238(1);
				Function_237(1, 5);
			}
			else
			{
				Function_307();
			}
		}
		Function_317(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_316() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_316() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_315(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_261())
		{
			if (!Function_44(Global_76846, 2))
			{
				Function_38(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_315(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1083B / 67643
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_274(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

bool Function_316() //Position: 0x108B6 / 67766
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_317(bool bParam0) //Position: 0x108E3 / 67811
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
			if (Function_321(bParam0, Function_322(bVar24)))
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
			if (Function_321(bParam0, Function_322(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_320(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_319(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_318(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_318(int iParam0) //Position: 0x10A93 / 68243
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_310(iParam0))
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

void Function_319(int iParam0, int iParam1) //Position: 0x10AEA / 68330
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(iParam0);
	REMOVE_JOURNAL_ENTRY(iParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(iParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(iParam0);
	}
	return;
}

var Function_320(int iParam0) //Position: 0x10B0F / 68367
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_310(iParam0))
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

bool Function_321(bool bParam0, int iParam1) //Position: 0x10B65 / 68453
{
	int iVar0;
	
	if (!Function_310(bParam0))
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

int Function_322(bool bParam0) //Position: 0x10BC4 / 68548
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_323(int iParam0) //Position: 0x10BD0 / 68560
{
	if (!Function_310(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_312(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_324() //Position: 0x10C22 / 68642
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_3(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_325(int iParam0, int iParam1) //Position: 0x10C52 / 68690
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_326(iParam0, iParam1);
	Function_38(Global_34573, 1, 4, 1);
	return 1;
}

int Function_326(int iParam0, int iParam1) //Position: 0x10CC5 / 68805
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_327(int iParam0, int iParam1) //Position: 0x10D21 / 68897
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_328(iParam0, iParam1);
	Function_38(Global_34573, 1, 4, 1);
	return 1;
}

int Function_328(int iParam0, int iParam1) //Position: 0x10D92 / 69010
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_329(int iParam0) //Position: 0x10DEC / 69100
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_255(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_336(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_336(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), 1);
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
			Function_266(468, 1, 0, 0);
			Function_265(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_315("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_301(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_314(14, 1, 0, 0, 0);
				Function_330(14, 1, 0, 0, 0);
			}
			if (!Function_308(0, 0, 1, 1))
			{
				Function_238(1);
				Function_237(1, 6);
			}
			else
			{
				Function_307();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
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
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_315("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_266(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_265(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_330(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x11099 / 69785
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_310(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_175(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_312(bParam0, 2))
	{
		Function_266(456, 1, 0, 0);
		Function_309(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_315(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_321(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_309(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_308(0, 0, 1, 1))
			{
				Function_238(1);
				Function_237(1, 0);
			}
			else
			{
				Function_307();
			}
		}
		Function_317(bParam0);
		if (StackVal && !Function_3(((((!Function_316() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_3((((Function_316() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_261())
		{
			if (!Function_44(Global_76846, 2))
			{
				Function_38(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_332();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_331(3, bParam1);
				break;
			
			case 0x00000005:
				Function_331(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_331(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_331(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_331(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_331(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_265(2, 24);
				break;
			
			case 0x00000003:
				Function_265(2, 25);
				break;
			
			case 0x0000000F:
				Function_265(2, 26);
				break;
			
			case 0x0000000D:
				Function_265(2, 27);
				break;
			
			case 0x0000000E:
				Function_265(2, 28);
				break;
			}
	}
}

void Function_331(int iParam0, bool bParam1) //Position: 0x1132F / 70447
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_332() //Position: 0x1139A / 70554
{
	if (Function_310(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_335(Global_28180);
			Global_28180.f_8 = Function_333(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_335(Global_28180);
			Global_28180.f_8 = Function_333(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_333(int iParam0, int iParam1) //Position: 0x11415 / 70677
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	
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
					if (Function_231(6, 0) || Function_231(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_334(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_231(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_334(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_334(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_334(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_334(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_231(26, 0))
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
					if (Function_334(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_334(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_334(27) && iVar18)
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
					if (Function_334(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_334(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_334(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_334(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_231(17, 0) && iVar15)
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
					if (Function_334(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_231(6, 0) && Function_334(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_334(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_231(9, 0) && Function_334(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_334(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_231(8, 0) && iVar19)
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
	if (Function_252(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_252(StackVal, StackVal, vVar3))
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
	if (!Function_252(StackVal, StackVal, vVar3))
	{
		fVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(fVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(fVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(fVar20, 3);
		SET_BLIP_NAME(fVar20, &cVar7);
		return fVar20;
	}
	return "";
}

bool Function_334(int iParam0) //Position: 0x12006 / 73734
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_335(int iParam0) //Position: 0x1201B / 73755
{
	int iVar0;
	int iVar1;
	
	if (!Function_310(iParam0))
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

void Function_336(bool bParam0, int iParam1) //Position: 0x1206A / 73834
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", iParam1);
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

void Function_337(bool bParam0, bool bParam1, int iParam2) //Position: 0x120BB / 73915
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_338(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_341(bParam0, 0, 0);
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

bool Function_338(int iParam0, int iParam1) //Position: 0x12129 / 74025
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_339(int iParam0) //Position: 0x1213C / 74044
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_211(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_215(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_266(473, 1, 0, 0);
		iVar0 = Function_340(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_266(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_266(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_266(476, 1, 0, 0);
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
		Function_265(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_265(7, 30);
	}
	if (Function_164(473) <= Function_165(473))
	{
		if (!Function_177())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

int Function_340(int iParam0) //Position: 0x1223B / 74299
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_216(iParam0))
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

int Function_341(bool bParam0, bool bParam1, int iParam2) //Position: 0x12293 / 74387
{
	if (!Function_342(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_169(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_169(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_169(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_342(int iParam0) //Position: 0x122EA / 74474
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_343(int iParam0) //Position: 0x122FC / 74492
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_344(4, 0, 0);
		}
	}
	return;
}

void Function_344(bool bParam0, bool bParam1, int iParam2) //Position: 0x12363 / 74595
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
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
		Function_345(Global_16524, bVar0, 1);
	}
	return;
}

void Function_345(int iParam0, bool bParam1, bool bParam2) //Position: 0x12449 / 74825
{
	int iVar0;
	
	Function_348(iParam0);
	Function_347(bParam1);
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
	Function_346();
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

void Function_346() //Position: 0x125C2 / 75202
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_347(bool bParam0) //Position: 0x125CE / 75214
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

void Function_348(int iParam0) //Position: 0x12614 / 75284
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

int Function_349(int iParam0) //Position: 0x1265A / 75354
{
	if (!Function_147(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

int Function_350(int iParam0) //Position: 0x1267A / 75386
{
	if (!Function_147(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_351(int iParam0) //Position: 0x12695 / 75413
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_352(105)), 0);
	return;
}

int Function_352(int iParam0) //Position: 0x126B6 / 75446
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_353(int iParam0) //Position: 0x126CC / 75468
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_347(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_347(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_347(Global_12976.f_24);
	PRINTNL();
	Function_354(iParam0);
	return;
}

void Function_354(int iParam0) //Position: 0x12768 / 75624
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_352(90)), 0);
	return;
}

void Function_355(int iParam0) //Position: 0x12789 / 75657
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, iParam0, 0);
	return;
}

bool Function_356(bool bParam0) //Position: 0x127A4 / 75684
{
	if (STRING_CONTAINS_STRING(bParam0, "scantest"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "quad"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_quadrant", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "noffscreen"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_offscreen", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "nelevation"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_elevation", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "material"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_material", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "slope"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_slope", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "range"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_distance", 0);
		}
		else if (STRING_CONTAINS_STRING(bParam0, "all"))
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		else
		{
			LAUNCH_NEW_SCRIPT("$/content/Systemtest/AmbientScanner/test_scanner", 0);
		}
		return 1;
	}
	return 0;
}

bool Function_357(bool bParam0) //Position: 0x12A18 / 76312
{
	bool bVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "save"))
	{
		bVar0 = false;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "SAVE"))
		{
			return 0;
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar1, bParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					Function_361();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_361();
					SAVE_SOFT_SAVE(1);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 2 (index 1)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_237(0, 4294967295);
					PRINTSTRING("SAVED MULTIPLAYER GAME");
					PRINTNL();
					LOG_ERROR("MP GAME SAVED!");
					return 1;
				}
				bVar0 = STRING_TO_INT(&cVar1);
				if (bVar0 > 4)
				{
					LOG_ERROR("CANNOT SAVE - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		Function_361();
		if (Function_358(bVar0))
		{
			PRINTSTRING("SAVED GAME TO SLOT: ");
			PRINTINT(bVar0);
			PRINTNL();
			LOG_ERROR("GAME SAVED!");
		}
		else
		{
			LOG_ERROR("SAVE FAILED!");
		}
		return 1;
	}
	return 0;
}

bool Function_358(bool bParam0) //Position: 0x12C0B / 76811
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_360("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_261())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_359() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
		}
	}
	if (bParam0 != 4)
	{
		Function_239();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

struct<16> Function_359() //Position: 0x12C72 / 76914
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_334(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_74542[iVar010].f_32 < Global_74542[iVar110].f_32)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	if (Global_13172[Function_232(Global_6269)11].f_32 < Global_74542[iVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[iVar155] + 4);
}

bool Function_360(bool bParam0) //Position: 0x12D0E / 77070
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_361() //Position: 0x12D2D / 77101
{
	struct<5> Var0;
	
	if (Function_177())
	{
		Global_34165 = { StackVal, StackVal, Global_76888[03] };
		Global_34165.f_12 = StackVal;
	}
	else
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		Var0.f_4 = (StackVal + 1.0f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_34165, &uVar3);
		Global_34165.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	}
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_24 = Global_29005;
	if (Function_216(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_362(bool bParam0) //Position: 0x12DC0 / 77248
{
	bool bVar0;
	char* cVar1[64];
	
	if (STRING_CONTAINS_STRING(cParam0, "load"))
	{
		bVar0 = false;
		strcpy(&cVar1, GET_CONSOLE_COMMAND_TOKEN(0), 64);
		STRING_UPPER(&cVar1);
		if (!STRINGS_ARE_EQUAL(&cVar1, "LOAD"))
		{
			return 0;
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (IS_STRING_VALID(bParam0))
		{
			if (STRING_LENGTH(bParam0) >= 0)
			{
				strcpy(&cVar1, bParam0, 64);
				STRING_UPPER(&cVar1);
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE1"))
				{
					LOAD_SOFT_SAVE(0);
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					LOAD_SOFT_SAVE(1);
					return 1;
				}
				if (STRINGS_ARE_EQUAL(&cVar1, "MP"))
				{
					Function_364();
					return 1;
				}
				bVar0 = STRING_TO_INT(&cVar1);
				if (bVar0 > 4)
				{
					LOG_ERROR("CANNOT LOAD - INVALID HARD SLOT PASSED!");
					return 0;
				}
			}
		}
		PRINTSTRING("LOADING GAME FROM SLOT: ");
		PRINTINT(bVar0);
		PRINTNL();
		Function_363(bVar0);
		return 1;
	}
	return 0;
}

int Function_363(bool bParam0) //Position: 0x12EDA / 77530
{
	if (bParam0 != 4)
	{
		if (Function_360("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				if (DOES_FILE_EXIST(SS_GET_STRING(2, bParam0)))
				{
					return LOAD_GAME(SS_GET_STRING(2, bParam0));
				}
			}
		}
	}
	SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, bParam0));
	return 1;
}

var Function_364() //Position: 0x12F1D / 77597
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", 0, 0, 0, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_365(int iParam0) //Position: 0x12F58 / 77656
{
	char* cVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	var uVar18;
	bool bVar21;
	char* cVar22;
	float fVar23;
	bool bVar24;
	bool bVar25;
	vector3 vVar26;
	vector3 vVar29;
	
	iParam0 = iParam0;
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_366(cVar0, "streamanddropactorlineup"))
	{
		iVar2 = (4294967295 * (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1));
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar9);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar12);
		VSCALE(&vVar9, -7.0f);
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar12, StackVal) };
		iVar1 = 1;
		while (iVar1 < (GET_NUM_CONSOLE_COMMAND_TOKENS() - 1))
		{
			cVar22 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			fVar23 = GET_ACTORENUM_FROM_STRING(cVar22);
			bVar24 = fVar23;
			if (bVar24 == 4294967295)
			{
				LOG_ERROR("Invalid actor enum given to streamanddropactorlineup");
				return 1;
			}
			STREAMING_REQUEST_ACTOR(bVar24, true, false);
			while (!STREAMING_IS_ACTOR_LOADED(bVar24, 4294967295))
			{
				WAIT(0);
			}
			bVar25 = GET_PLAYER_ACTOR(0);
			GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar25), &Var3);
			GET_POSITION(bVar25, &uVar6);
			vVar26 = { IntToFloat((iVar2 + (2 * (iVar1 - 1)))), 0.0f, 0.0f };
			vVar29 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar12, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar29, 80.0f, &vVar15, &uVar18);
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_174(), fVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(bVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_366(char* cParam0, char* cParam1) //Position: 0x130AF / 77999
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

bool Function_367(char* cParam0) //Position: 0x130DA / 78042
{
	char* cVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	bool bVar19;
	
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_366(cVar0, "streamanddropactor"))
	{
		cParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		fVar1 = GET_ACTORENUM_FROM_STRING(cParam0);
		bVar2 = fVar1;
		if (bVar2 == 4294967295)
		{
			LOG_ERROR("Invalid actor enum given to streamanddropactor");
			return 1;
		}
		STREAMING_REQUEST_ACTOR(bVar2, true, false);
		while (!STREAMING_IS_ACTOR_LOADED(bVar2, 4294967295))
		{
			WAIT(0);
		}
		bVar3 = GET_PLAYER_ACTOR(0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar3), &Var4);
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar7);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar10);
		VSCALE(&vVar7, -7.0f);
		vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar7, vVar10, StackVal) };
		FIND_GROUND_INTERSECTION(&vVar10, 80.0f, &vVar13, &uVar16);
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_174(), fVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_368(bool bParam0) //Position: 0x131DD / 78301
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "suicide"))
	{
		bVar0 = Function_169();
		if (IS_ACTOR_VALID(bVar0))
		{
			KILL_ACTOR(bVar0);
		}
		return 1;
	}
	return 0;
}

bool Function_369(bool bParam0) //Position: 0x1320A / 78346
{
	if (STRING_CONTAINS_STRING(bParam0, "nframetime"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "false") || STRING_CONTAINS_STRING(bParam0, "off"))
		{
			PRINT_FRAME_TIME(0);
		}
		else
		{
			PRINT_FRAME_TIME(1);
		}
		return 1;
	}
	return 0;
}

bool Function_370(bool bParam0) //Position: 0x13254 / 78420
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "decor"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_LENGTH(bVar0) >= 0)
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), bVar0, 1);
		}
		return 1;
	}
	return 0;
}

bool Function_371(bool bParam0) //Position: 0x13287 / 78471
{
	if (STRING_CONTAINS_STRING(bParam0, "fudgeaa"))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("VHC_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TUM_FTE_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", 1);
		}
		return 1;
	}
	return 0;
}

bool Function_372(bool bParam0) //Position: 0x13342 / 78658
{
	int iVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "ncockfight"))
	{
		*(&iVar0 + 64 + 20) = 1;
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Mini_Games/Cockfighting/Cockfighting", &iVar0, 51, 0);
		return 1;
	}
	return 0;
}

bool Function_373(bool bParam0) //Position: 0x133A6 / 78758
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "pickdoor"))
	{
		bVar9 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar9, &vVar6, 2);
		GET_POSITION(bVar9, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar10 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar10))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		Function_254();
		CREATE_GRINGO_IN_LAYOUT(bVar10, Function_174(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Door", vVar3, Function_254());
		return 1;
	}
	return 0;
}

bool Function_374(bool bParam0) //Position: 0x1345D / 78941
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	
	if (STRING_CONTAINS_STRING(bParam0, "droplocker"))
	{
		bVar9 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar9, &vVar6, 2);
		GET_POSITION(bVar9, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar10 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar10))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar11 = CREATE_PROP_IN_LAYOUT(bVar10, Function_174(), "$/fragments/p_gen_footlocker01x", vVar3, 0.0f, 0.0f, 0.0f, 1);
		DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(bVar11, "stand_open_chest"));
		Function_254();
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_174(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0.3f, 0.1f, -0.3f, Function_254());
		return 1;
	}
	return 0;
}

bool Function_375(bool bParam0) //Position: 0x13576 / 79222
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	if (STRING_CONTAINS_STRING(bParam0, "nkillbunny"))
	{
		bVar10 = GET_PLAYER_ACTOR(0);
		GET_ACTOR_AXIS(bVar10, &vVar6, 2);
		GET_POSITION(bVar10, &vVar0);
		vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar0, StackVal) * Vector(-3.0f, -3.0f, -3.0f), StackVal, StackVal) };
		bVar11 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar11))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar12 = CREATE_GRINGO_IN_LAYOUT(bVar11, Function_174(), "$/content/scripting/gringo/SimpleGringo/mex_gutRabbit_link", vVar3, 0.0f, 0.0f, 0.0f);
		bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar11, Function_174(), 1078, vVar3, 0.0f, 0.0f, 0.0f);
		SNAP_ACTOR_TO_GRINGO(bVar9, bVar12, "UseCase1", 1, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_376(bool bParam0) //Position: 0x13671 / 79473
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_377(bool bParam0) //Position: 0x136C5 / 79557
{
	char* cVar0[32];
	char* cVar8[24];
	
	if (STRING_CONTAINS_STRING(bParam0, "playsong"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar8, GET_CONSOLE_COMMAND_TOKEN(2), 24);
			AUDIO_MUSIC_FORCE_TRACK(&cVar0, &cVar8, 0f, 4294967295, 4294967295, 3212836864, 0);
			PRINTSTRING("Playing ");
			PRINTSTRING(&cVar0);
			PRINTSTRING(" - ");
			PRINTSTRING(&cVar8);
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Please use in the following format: playsong songname mood");
		}
		return 1;
	}
	return 0;
}

bool Function_378(bool bParam0) //Position: 0x1376F / 79727
{
	bool bVar0;
	
	bVar0 = false;
	if (STRING_CONTAINS_STRING(bParam0, "show_locked_weapons"))
	{
		bVar0 = false;
		while (bVar0 < 39)
		{
			PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar0));
			if (IS_WEAPONENUM_LOCKED(bVar0))
			{
				PRINTSTRING(" - LOCKED!");
			}
			else
			{
				PRINTSTRING("  - unlocked");
			}
			PRINTNL();
			bVar0++;
		}
		return 1;
	}
	return 0;
}

bool Function_379(bool bParam0) //Position: 0x137E4 / 79844
{
	char* cVar0[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "ai_ignore_player"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			if (STRINGS_ARE_EQUAL(&cVar0, "1"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "0"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "on"))
			{
				AI_IGNORE_ACTOR(GET_PLAYER_ACTOR(0));
			}
			else if (STRINGS_ARE_EQUAL(&cVar0, "off"))
			{
				AI_STOP_IGNORING_ACTORS();
			}
			else
			{
				LOG_ERROR("Must provide 0 or 1 to toggle off or on");
			}
		}
		else
		{
			LOG_ERROR("Must provide 0 or 1 to toggle off or on");
		}
		return 1;
	}
	return 0;
}

bool Function_380(bool bParam0) //Position: 0x138C9 / 80073
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	char* cVar19[64];
	bool bVar35;
	int iVar36;
	bool bVar37;
	char* cVar38[64];
	bool bVar54;
	char* cVar55[64];
	bool bVar71;
	bool bVar72;
	int iVar73;
	
	if (STRING_CONTAINS_STRING(bParam0, "remove"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			bVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			bVar17 = false;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar18 = 39;
				bVar35 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar19, "WE_", 64);
					stradd(&cVar19, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar19);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar19))
					{
						bVar35 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar35));
						PRINTNL();
						DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), bVar35);
					}
					bVar17++;
				}
				if (bVar35 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				iVar36 = 17;
				bVar17 = false;
				bVar54 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar36)
				{
					strcpy(&cVar38, "AMMO_", 64);
					stradd(&cVar38, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar38);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar38))
					{
						bVar54 = bVar17;
						PRINTSTRING("removing from the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar54));
						bVar37 = STRING_TO_FLOAT(bVar16);
						bVar37 = (bVar37 * -1.0f);
						if (bVar37 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, bVar37, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(bVar37);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar54, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar54), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar54 == 4294967295)
				{
					PRINTSTRING("Could not remove from player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				bVar71 = 4294967295;
				iVar73 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar55, "ITEM_", 64);
					stradd(&cVar55, Function_206(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar55, &cVar0))
					{
						bVar71 = bVar17;
						PRINTSTRING("removing from player ");
						PRINTSTRING(&cVar55);
						PRINTSTRING(" - x");
						bVar72 = STRING_TO_INT(bVar16);
						if (bVar72 >= 0)
						{
							iVar73 = 1;
							while (iVar73 < bVar72)
							{
								iVar73++;
							}
							PRINTINT(bVar72);
						}
						else
						{
							PRINTINT(true);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not remove from the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				bVar17 = false;
				while (bVar17 < (8 - 1))
				{
					DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), GET_WEAPON_EQUIPPED(GET_PLAYER_ACTOR(0), bVar17));
					bVar17++;
				}
				DELETE_ALL_INVENTORY_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				PRINTSTRING("Took all the player's stuff away");
				PRINTNL();
			}
			else
			{
				LOG_ERROR("remove must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to remove from the player");
		}
		return 1;
	}
	return 0;
}

bool Function_381(bool bParam0) //Position: 0x13C8E / 81038
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	char* cVar20[64];
	char* cVar36[64];
	char* cVar52[64];
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	int iVar74;
	bool bVar75;
	
	if (STRING_CONTAINS_STRING(bParam0, "give"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 64);
			bVar16 = GET_CONSOLE_COMMAND_TOKEN(2);
			STRING_UPPER(&cVar0);
			bVar17 = false;
			iVar18 = 17;
			if (STRING_CONTAINS_STRING(&cVar0, "WE_"))
			{
				iVar19 = 39;
				bVar68 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar20))
					{
						bVar68 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68));
						PRINTNL();
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, 0f, 1, 1);
						if (STRING_CONTAINS_STRING(bParam0, "givewna"))
						{
							bVar69 = GET_AMMOENUM_FOR_WEAPONENUM(bVar68);
							if (bVar69 != 4294967295)
							{
								PRINTSTRING("Being nice and giving the player ");
								PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar69));
								PRINTNL();
								_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar69, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar69), 0, 1);
							}
							else
							{
								PRINTSTRING("Weapon doesn't have a valid ammo type, so not able to be nice.");
								PRINTNL();
							}
						}
					}
					bVar17++;
				}
				if (bVar68 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "AMMO_"))
			{
				bVar17 = false;
				bVar71 = 4294967295;
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					if (STRINGS_ARE_EQUAL(&cVar0, &cVar36))
					{
						bVar71 = bVar17;
						PRINTSTRING("Giving the player ");
						PRINTSTRING(GET_AMMO_ENUM_STRING_FROM_ENUM(bVar71));
						bVar70 = STRING_TO_FLOAT(bVar16);
						if (bVar70 < 0.0f)
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, bVar70, 0, 1);
							PRINTSTRING(" - x");
							PRINTFLOAT(bVar70);
						}
						else
						{
							_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar71, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar71), 0, 1);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar71 == 4294967295)
				{
					PRINTSTRING("Could not give player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "ITEM_"))
			{
				bVar72 = 4294967295;
				iVar74 = 0;
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_206(bVar17), 64);
					if (STRINGS_ARE_EQUAL(&cVar52, &cVar0))
					{
						bVar72 = bVar17;
						PRINTSTRING("Giving player ");
						PRINTSTRING(&cVar52);
						PRINTSTRING(" - x");
						if (bVar72 == 13)
						{
							Function_383(&Global_26303, Function_396(), 4294967294, 0, 0, 1);
						}
						bVar73 = STRING_TO_INT(bVar16);
						if (bVar73 >= 0)
						{
							iVar74 = 1;
							while (iVar74 < bVar73)
							{
								ADD_ITEM(Function_206(bVar72), GET_PLAYER_ACTOR(0), 1);
								iVar74++;
							}
							PRINTINT(bVar73);
						}
						else
						{
							ADD_ITEM(Function_206(bVar72), GET_PLAYER_ACTOR(0), 1);
							PRINTINT(true);
						}
						PRINTNL();
					}
					bVar17++;
				}
				if (bVar72 == 4294967295)
				{
					PRINTSTRING("Could not give the player ");
					PRINTSTRING(&cVar0);
					PRINTNL();
				}
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "LIST"))
			{
				iVar18 = 17;
				iVar19 = 39;
				PRINTSTRING("WEAPONS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar19)
				{
					strcpy(&cVar20, "WE_", 64);
					stradd(&cVar20, GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar20);
					PRINTSTRING(&cVar20);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("AMMO:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < iVar18)
				{
					strcpy(&cVar36, "AMMO_", 64);
					stradd(&cVar36, GET_AMMO_ENUM_STRING_FROM_ENUM(bVar17), 64);
					STRING_UPPER(&cVar36);
					PRINTSTRING(&cVar36);
					PRINTNL();
					bVar17++;
				}
				PRINTNL();
				PRINTSTRING("ITEMS:");
				PRINTNL();
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					strcpy(&cVar52, "ITEM_", 64);
					stradd(&cVar52, Function_206(bVar17), 64);
					PRINTSTRING(&cVar52);
					PRINTNL();
					bVar17++;
				}
			}
			else if ((STRING_CONTAINS_STRING(&cVar0, "all") || STRING_CONTAINS_STRING(&cVar0, "ALL")) || STRING_CONTAINS_STRING(&cVar0, "All"))
			{
				iVar18 = 17;
				iVar19 = 39;
				bVar17 = true;
				while (bVar17 < (iVar19 - 2))
				{
					bVar68 = bVar17;
					if ((((!STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DEFAULT") && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TURRET")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "CANNON")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "TEST")) && !STRING_CONTAINS_STRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(bVar68), "DUALPISTOL"))
					{
						SET_WEAPONENUM_LOCKED(bVar68, 0);
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, 0f, 1, 1);
					}
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (iVar18 - 1))
				{
					_ADD_AMMO_OF_TYPE(GET_PLAYER_ACTOR(0), bVar17, _GET_MAX_AMMO_AMOUNT(GET_PLAYER_ACTOR(0), bVar17), 0, 1);
					bVar17++;
				}
				bVar17 = false;
				while (bVar17 < (79 - 1))
				{
					ADD_ITEM(Function_206(bVar17), GET_PLAYER_ACTOR(0), 1);
					bVar17++;
				}
				PRINTSTRING("Gave the player friggin' everything.");
				PRINTNL();
			}
			else if (STRING_CONTAINS_STRING(&cVar0, "$"))
			{
				bVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
				STRING_CLEAR_TOKENIZER();
				SET_OWNERSHIP_STRAGGLER(bVar16, "$");
				if (STRING_NUM_TOKENS() >= 0)
				{
					bVar16 = STRING_GET_TOKEN(0);
					bVar75 = STRING_TO_INT(bVar16);
					if (bVar75 >= 0)
					{
						Function_298(ABS(bVar75), 1);
					}
					else
					{
						Function_382(ABS(bVar75), 1);
					}
				}
				else
				{
					LOG_ERROR("GIVE $ must be followed by a valid dollar amount");
				}
				STRING_CLEAR_TOKENIZER();
			}
			else
			{
				LOG_ERROR("GIVE must be followed by an item of type WE_ ITEM_ or AMMO_");
			}
		}
		else
		{
			LOG_ERROR("Must provide an item name to give to the player");
		}
		return 1;
	}
	return 0;
}

int Function_382(bool bParam0, bool bParam1) //Position: 0x1433D / 82749
{
	bool bVar0;
	
	bVar0 = Function_168(0);
	if ((Function_168(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_296(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_168(0));
	return 1;
}

int Function_383(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x143CD / 82893
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_395())
	{
		return 0;
	}
	uParam0->f_16 = Function_394(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_396();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_393(&Var96, iVar1) == 1)
		{
			if (Function_392(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 <= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_391(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_390(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_393(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_384(uParam0, iParam4, 80, 20000, uParam0->f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (iParam2 != 4294967294)
	{
		uParam0->f_24 = iParam2;
	}
	return iVar0;
}

var Function_384(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x14637 / 83511
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_385(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = uParam0->f_24;
	}
	return uVar1;
}

var Function_385(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x146C2 / 83650
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	int iVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	bVar303 = 1.001638E+07.0f;
	iVar601 = 0;
	iVar602 = 0;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_216(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_392(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_389(StackVal);
		vVar296 = { StackVal, StackVal, Function_389(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_392(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_211(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = iVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[iVar601] = iVar598;
				bVar304[iVar601] = bVar302;
				iVar601++;
				if (Function_264(Function_149(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar602] = iVar598;
					bVar451[iVar602] = bVar302;
					iVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_388(&iVar1, &bVar304, iVar601);
		Function_388(&iVar148, &bVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_161(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_161(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_161(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_161(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_161(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_216(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_387();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_386(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_389(StackVal);
		vVar296 = { StackVal, StackVal, Function_389(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (iVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_161(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_161(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_161(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_161(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_161(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_216(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_387();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_386(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_389(StackVal);
		vVar296 = { StackVal, StackVal, Function_389(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return iVar0;
}

struct<32> Function_386(int iParam0) //Position: 0x14D6B / 85355
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_216(iParam0))
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

int Function_387() //Position: 0x14E28 / 85544
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

void Function_388(int iParam0, bool bParam1, int iParam2) //Position: 0x14E56 / 85590
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*bParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		(*iParam0)[iVar1 + 1] = uVar2;
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

vector3 Function_389(bool bParam0) //Position: 0x14EE4 / 85732
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_390(bool bParam0) //Position: 0x14EF5 / 85749
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_26303 && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		if ((StackVal && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

int Function_391(int iParam0) //Position: 0x14F47 / 85831
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

int Function_392(int iParam0) //Position: 0x14FF6 / 86006
{
	return Function_340(iParam0);
}

bool Function_393(var uParam0, int iParam1) //Position: 0x15001 / 86017
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 3;
			uParam0->f_20 = 415;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 26;
			break;
		
		case 0x00000001:
			uParam0->f_12 = 3;
			uParam0->f_20 = 416;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 27;
			break;
		
		case 0x00000002:
			uParam0->f_12 = 5;
			uParam0->f_20 = 422;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 28;
			break;
		
		case 0x00000003:
			uParam0->f_12 = 5;
			uParam0->f_20 = 423;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 29;
			break;
		
		case 0x00000004:
			uParam0->f_12 = 4;
			uParam0->f_20 = 418;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 30;
			break;
		
		case 0x00000005:
			uParam0->f_12 = 4;
			uParam0->f_20 = 419;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 31;
			break;
		
		case 0x00000006:
			uParam0->f_12 = 2;
			uParam0->f_20 = 397;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			break;
		
		case 0x00000007:
			uParam0->f_12 = 4;
			uParam0->f_20 = 398;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 32;
			break;
		
		case 0x00000008:
			uParam0->f_12 = 5;
			uParam0->f_20 = 403;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 33;
			break;
		
		case 0x00000009:
			uParam0->f_12 = 5;
			uParam0->f_20 = 404;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 34;
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 4;
			uParam0->f_20 = 400;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 35;
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 5;
			uParam0->f_20 = 401;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 36;
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 496;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 497;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 4;
			uParam0->f_20 = 502;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 17;
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 4;
			uParam0->f_20 = 503;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			break;
		
		case 0x00000010:
			uParam0->f_12 = 3;
			uParam0->f_20 = 499;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 18;
			break;
		
		case 0x00000011:
			uParam0->f_12 = 3;
			uParam0->f_20 = 500;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 19;
			break;
		
		case 0x00000012:
			uParam0->f_12 = 1;
			uParam0->f_20 = 477;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			break;
		
		case 0x00000013:
			uParam0->f_12 = 1;
			uParam0->f_20 = 478;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 42;
			break;
		
		case 0x00000014:
			uParam0->f_12 = 3;
			uParam0->f_20 = 483;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 41;
			break;
		
		case 0x00000015:
			uParam0->f_12 = 3;
			uParam0->f_20 = 484;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			break;
		
		case 0x00000016:
			uParam0->f_12 = 2;
			uParam0->f_20 = 480;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			break;
		
		case 0x00000017:
			uParam0->f_12 = 2;
			uParam0->f_20 = 481;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			break;
		
		case 0x00000018:
			uParam0->f_12 = 1;
			uParam0->f_20 = 505;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 43;
			break;
		
		case 0x00000019:
			uParam0->f_12 = 1;
			uParam0->f_20 = 506;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 44;
			break;
		
		case 0x0000001A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 513;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			break;
		
		case 0x0000001B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 514;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			break;
		
		case 0x0000001C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 508;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			break;
		
		case 0x0000001D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 509;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			break;
		
		case 0x0000001E:
			uParam0->f_12 = 1;
			uParam0->f_20 = 486;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 45;
			break;
		
		case 0x0000001F:
			uParam0->f_12 = 1;
			uParam0->f_20 = 487;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 46;
			break;
		
		case 0x00000020:
			uParam0->f_12 = 3;
			uParam0->f_20 = 492;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			break;
		
		case 0x00000021:
			uParam0->f_12 = 3;
			uParam0->f_20 = 493;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			break;
		
		case 0x00000022:
			uParam0->f_12 = 2;
			uParam0->f_20 = 489;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			break;
		
		case 0x00000023:
			uParam0->f_12 = 2;
			uParam0->f_20 = 490;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			break;
		
		case 0x00000024:
			uParam0->f_12 = 3;
			uParam0->f_20 = 467;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 47;
			break;
		
		case 0x00000025:
			uParam0->f_12 = 3;
			uParam0->f_20 = 468;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 48;
			break;
		
		case 0x00000026:
			uParam0->f_12 = 2;
			uParam0->f_20 = 406;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 20;
			break;
		
		case 0x00000027:
			uParam0->f_12 = 3;
			uParam0->f_20 = 407;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 21;
			break;
		
		case 0x00000028:
			uParam0->f_12 = 4;
			uParam0->f_20 = 412;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 22;
			break;
		
		case 0x00000029:
			uParam0->f_12 = 4;
			uParam0->f_20 = 413;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 23;
			break;
		
		case 0x0000002A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 410;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 24;
			break;
		
		case 0x0000002B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 411;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 25;
			break;
		
		case 0x0000002C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 787;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_394(int iParam0) //Position: 0x15774 / 87924
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_395() //Position: 0x15842 / 88130
{
	return Function_3(StackVal, 1);
}

int Function_396() //Position: 0x15851 / 88145
{
	int iVar0;
	
	iVar0 = Function_397(0);
	return iVar0;
}

var Function_397(int iParam0) //Position: 0x1585F / 88159
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_168(358) + Function_168(359));
	if (iParam0 == 1)
	{
		iVar2 = Function_161(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_29004 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_29004 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

bool Function_398(bool bParam0) //Position: 0x158E3 / 88291
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_399(bool bParam0) //Position: 0x1593D / 88381
{
	var uVar0;
	struct<5> Var3;
	vector3 vVar9;
	vector3 vVar12;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	if (STRING_CONTAINS_STRING(bParam0, "dropcougar"))
	{
		bVar17 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar17, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar17), &Var3);
		vVar6 = { 0.0f, 0.0f, -3.0f };
		vVar9 = { StackVal, StackVal, vVar6 };
		vVar12 = { StackVal, StackVal, -Vector(vVar6, StackVal, StackVal) };
		ROTATE_VECTOR_XZ(StackVal, &vVar6, 0);
		bVar18 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar18))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		bVar15 = Function_400(StackVal, StackVal, StackVal, bVar18, Function_174(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_400(StackVal, StackVal, StackVal, bVar18, Function_174(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_400(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x15A20 / 88608
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_401(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_401(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x15A6B / 88683
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_402(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_402(var uParam0, int iParam1) //Position: 0x15B93 / 88979
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_252(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_252(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_403(bool bParam0) //Position: 0x15BFE / 89086
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "nbattleset"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		REQUEST_ASSET(bParam0, 7);
		uVar0 = GET_ASSET_ID(bParam0, 7);
		STREAMING_REQUEST_PROPSET(uVar0);
		while (!STREAMING_IS_PROPSET_LOADED(uVar0))
		{
			WAIT(0);
		}
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar1);
		GET_ACTOR_AXIS(GET_PLAYER_ACTOR(0), &vVar7, 2);
		vVar10 = { StackVal, StackVal, vVar7 };
		VNORMALIZE(&vVar10);
		VSCALE(&vVar10, -20.0f);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar10, vVar1, StackVal) };
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), &vVar4);
		Function_404(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_174(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(uVar0);
		return 1;
	}
	return 0;
}

var Function_404(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x15CA4 / 89252
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, uParam1, uParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	iVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(iVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(iVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_177())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(iVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(iVar2);
	return bVar0;
}

bool Function_405(bool bParam0) //Position: 0x15DED / 89581
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killvehicle"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar0 = GET_PLAYER_ACTOR(0);
		bVar1 = GET_VEHICLE(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			KILL_ACTOR(bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_406(bool bParam0) //Position: 0x15E2C / 89644
{
	bool bVar1;
	struct<5> Var2;
	
	if (STRING_CONTAINS_STRING(bParam0, "getmat"))
	{
		FIND_GROUND_INTERSECTION(&Global_34574, 2.0f, &Var2, &uVar5);
		Var2.f_4 = (StackVal + 1.0f);
		bVar1 = GET_MATERIAL_AT_VECTOR(&Var2);
		PRINTSTRING("Material flags ");
		PRINTINT(bVar1);
		PRINTSTRING(" found at player position: ");
		PRINTVECTOR(Global_34574);
		PRINTNL();
		if (bVar1 <= 0)
		{
			PRINTSTRING("   AIMATERIALFLAG_INVALID");
		}
		else
		{
			while (bVar1 > 0)
			{
				if (bVar1 > 512)
				{
					PRINTSTRING("   AIMATERIALFLAG_WATER");
					bVar1 = (bVar1 - 512);
				}
				else if (bVar1 > 256)
				{
					PRINTSTRING("   AIMATERIALFLAG_RESERVED");
					bVar1 = (bVar1 - 256);
				}
				else if (bVar1 > 128)
				{
					PRINTSTRING("   AIMATERIALFLAG_TRAINTRACKS");
					bVar1 = (bVar1 - 128);
				}
				else if (bVar1 > 64)
				{
					PRINTSTRING("   AIMATERIALFLAG_VEHICLEPATH");
					bVar1 = (bVar1 - 64);
				}
				else if (bVar1 > 32)
				{
					PRINTSTRING("   AIMATERIALFLAG_HORSEPATH");
					bVar1 = (bVar1 - 32);
				}
				else if (bVar1 > 16)
				{
					PRINTSTRING("   AIMATERIALFLAG_PEDPATH");
					bVar1 = (bVar1 - 16);
				}
				else if (bVar1 > 8)
				{
					PRINTSTRING("   AIMATERIALFLAG_GENERICSPAWN");
					bVar1 = (bVar1 - 8);
				}
				else if (bVar1 > 1)
				{
					PRINTSTRING("   AIMATERIALFLAG_TERRAIN");
					bVar1 = (bVar1 - 1);
				}
				else if (bVar1 == 0)
				{
					PRINTSTRING("   AIMATERIALFLAG_ANY");
					bVar1 = 4294967295;
				}
				PRINTNL();
			}
		}
		LOG_ERROR("Printed materials to output");
		return 1;
	}
	return 0;
}

bool Function_407(bool bParam0) //Position: 0x160B2 / 90290
{
	var uVar0;
	struct<5> Var3;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	struct<8> Var17;
	bool bVar25;
	
	if (STRING_CONTAINS_STRING(bParam0, "dropai"))
	{
		bVar16 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar14 = GET_PLAYER_ACTOR(0);
		GET_POSITION(bVar14, &uVar0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar14), &Var3);
		vVar6 = { 0.0f, 0.0f, -3.0f };
		ROTATE_VECTOR_XZ(StackVal, &vVar6, 0);
		strcpy(&Var17, "ndroppedAI", 32);
		Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171(&Var17) };
		bVar25 = GET_AMBIENT_LAYOUT();
		if (!IS_LAYOUTREF_VALID(bVar25))
		{
			SCRIPT_BREAKPOINT("Invalid layout");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "bigfist"))
		{
			iVar15 = 375;
		}
		else
		{
			iVar15 = 397;
		}
		bVar12 = Function_400(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
		if (!IS_ACTOR_VALID(bVar12))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "knife"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			GIVE_WEAPON_TO_ACTOR(bVar12, 22, 0f, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(bVar12, 22, 1);
			TASK_KILL_CHAR(bVar12, bVar14);
		}
		else if (STRINGS_ARE_EQUAL(bVar16, "bigfist"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			TASK_MELEE_ATTACK(bVar12, bVar14, -1.0f);
		}
		else if (STRINGS_ARE_EQUAL(bVar16, "horse"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			strcpy(&Var17, "droppedHorse", 32);
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171(&Var17) };
			bVar13 = Function_400(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
			ACTOR_MOUNT_ACTOR(bVar12, bVar13);
		}
		else
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
		}
		return 1;
	}
	return 0;
}

bool Function_408(int iParam0) //Position: 0x1624B / 90699
{
	iParam0 = iParam0;
	return 0;
}

bool Function_409(bool bParam0) //Position: 0x16256 / 90710
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "unlock"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "map"))
			{
				bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
				if (STRING_CONTAINS_STRING(bVar1, "all"))
				{
					iVar2 = 0;
					while (iVar2 <= Global_29008)
					{
						Function_339(iVar2);
						iVar2++;
					}
				}
				else
				{
					iVar2 = 0;
					while (iVar2 <= Global_29008)
					{
						if (STRING_CONTAINS_STRING(&Global_29155[iVar210] + 20, bVar1))
						{
							Function_339(iVar2);
						}
						iVar2++;
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_410(bool bParam0) //Position: 0x162E5 / 90853
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (STRING_CONTAINS_STRING(bParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(bVar0);
			fVar4 = STRING_TO_FLOAT(bVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (fVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_220(iVar2, fVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_411(iVar2, FABS(fVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_411(int iParam0, bool bParam1) //Position: 0x16357 / 90967
{
	bool bVar0;
	int iVar1;
	
	Function_412(iParam0, fParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("STAT_DECREASE: fDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(fParam1);
	}
	iVar1 = Function_224(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + bParam1);
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_221();
	Global_49199[iVar1] = bParam1;
	strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 2;
	return 1;
}

int Function_412(int iParam0, bool bParam1, int iParam2) //Position: 0x164E3 / 91363
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_DECREASE_NOW: fDecreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - bParam1);
	Function_166(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_155(iParam0, 0, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

bool Function_413(bool bParam0) //Position: 0x166CE / 91854
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "chartest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 0;
			while (iVar2 <= Global_29008)
			{
				if (STRINGS_ARE_EQUAL(&Global_29155[iVar210] + 20, bVar0))
				{
					Global_62481 = iVar2;
				}
				iVar2++;
			}
			Global_62483 = STRING_TO_INT(bVar1);
			if (Global_62481 <= 0)
			{
				Global_62481 = 0;
			}
			if (Global_62483 <= 0)
			{
				Global_62483 = 0;
			}
		}
		else
		{
			Global_62481 = 0;
			Global_62483 = 0;
		}
		Global_62480 = 1;
		return 1;
	}
	return 0;
}

bool Function_414(bool bParam0) //Position: 0x16754 / 91988
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_415(bool bParam0) //Position: 0x16776 / 92022
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "missiontest"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			Global_62481 = STRING_TO_INT(bVar0);
			Global_62482 = STRING_TO_INT(bVar1);
			if (Global_62481 <= 0)
			{
				Global_62481 = 0;
			}
			if (Global_62482 <= 0)
			{
				Global_62482 = 0;
			}
		}
		else
		{
			Global_62481 = 0;
			Global_62482 = 0;
		}
		Global_62478 = 1;
		return 1;
	}
	return 0;
}

bool Function_416(bool bParam0) //Position: 0x167DD / 92125
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "ppp"))
	{
		iVar0 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar1 = 0;
		PRINTSTRING("Console Print: ");
		iVar1 = 1;
		while (iVar1 < iVar0)
		{
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(iVar1);
			PRINTSTRING(bVar2);
			PRINTSTRING(" ");
			iVar1++;
		}
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() == 2)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			RESET_ANALOG_POSITIONS(0, STRING_TO_FLOAT(bVar3));
		}
		return 1;
	}
	return 0;
}

bool Function_417(bool bParam0) //Position: 0x16850 / 92240
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;
	
	if (STRING_CONTAINS_STRING(bParam0, "crime"))
	{
		iVar3 = Global_26118;
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "new"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(iVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(iVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(iVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(iVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_418(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(iVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "report"))
			{
				iVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(iVar1))
				{
					ITERATE_EVERYWHERE(iVar1);
					ITERATE_ON_OBJECT_TYPE(iVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(iVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(iVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (!GET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2)) != 3)
							{
								SET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2), 3);
								DESTROY_ITERATOR(iVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(iVar1);
						}
					}
				}
				DESTROY_ITERATOR(iVar1);
			}
			else if (STRING_CONTAINS_STRING(bVar0, "upgrade"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(iVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(iVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(iVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(iVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_418(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(iVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "finish"))
			{
				iVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(iVar1))
				{
					ITERATE_EVERYWHERE(iVar1);
					ITERATE_ON_OBJECT_TYPE(iVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(iVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(iVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (IS_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2)))
							{
								SET_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2), 0);
								DESTROY_ITERATOR(iVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(iVar1);
						}
					}
				}
				DESTROY_ITERATOR(iVar1);
			}
		}
		return 1;
	}
	return 0;
}

var Function_418(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x16AC9 / 92873
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	if (!Function_426(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_425(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_421(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		iVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_174(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, iVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_419();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_419() //Position: 0x16D59 / 93529
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	iVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_420(iVar0, uVar1);
	bVar2 = START_OBJECT_ITERATOR(iVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(iVar0);
	}
	DESTROY_ITERATOR(iVar0);
	return;
}

void Function_420(int iParam0, int iParam1) //Position: 0x16DBC / 93628
{
	ITERATE_EVERYWHERE(iParam0);
	ITERATE_ON_OBJECT_TYPE(iParam0, 31);
	if (!iParam1 != "")
	{
		ITERATE_IN_SET(iParam0, iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(iParam0, GET_ITERATOR_PARENT(iParam0));
	}
	return;
}

bool Function_421(bool bParam0) //Position: 0x16DEB / 93675
{
	if (Function_424(256))
	{
		return 0;
	}
	if (Function_424(262144))
	{
		return 0;
	}
	if (Function_423())
	{
		return 0;
	}
	if (!Function_424(1))
	{
		return 0;
	}
	if (!Function_424(4096))
	{
		return 0;
	}
	if (bParam0 && Function_422(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_424(2048))
	{
		return 0;
	}
	if (Function_177() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_422(int iParam0) //Position: 0x16E61 / 93793
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_423() //Position: 0x16E72 / 93810
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_424(int iParam0) //Position: 0x16E8B / 93835
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_425(int iParam0) //Position: 0x16EA9 / 93865
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_426(int iParam0) //Position: 0x16EBF / 93887
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_427(bool bParam0) //Position: 0x16ED4 / 93908
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setweather"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar2 = 1;
			if (STRINGS_ARE_EQUAL(bVar0, "fair"))
			{
				iVar2 = 1;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "rainy"))
			{
				iVar2 = 3;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "stormy"))
			{
				iVar2 = 4;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "snowy"))
			{
				iVar2 = 5;
			}
			else if (STRINGS_ARE_EQUAL(bVar0, "clear"))
			{
				iVar2 = 0;
			}
			Function_428(iVar2, FLOOR(STRING_TO_FLOAT(bVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_428(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x16F89 / 94089
{
	int iVar0;
	bool bVar1;
	
	Function_348(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_429(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, iParam3);
			Function_345(StackVal, bVar1, bParam4);
		}
	}
}

void Function_429(int iParam0, int iParam1) //Position: 0x16FFB / 94203
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_348(iParam0);
	Function_347(uVar0);
	PRINTNL();
	Function_345(iParam0, uVar0, iParam1);
	return;
}

bool Function_430(bool bParam0) //Position: 0x17020 / 94240
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "setwind"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			SET_WIND(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		return 1;
	}
	if (STRING_CONTAINS_STRING(bParam0, "autowind"))
	{
		SET_AUTO_WIND();
		return 1;
	}
	return 0;
}

bool Function_431(bool bParam0) //Position: 0x17084 / 94340
{
	if (STRING_CONTAINS_STRING(bParam0, "invert_y"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, "false"))
		{
			SET_LOOKSTICK_INVERT_Y(0);
		}
		else
		{
			SET_LOOKSTICK_INVERT_Y(1);
		}
		return 1;
	}
	return 0;
}

bool Function_432(bool bParam0) //Position: 0x170C1 / 94401
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	struct<8> Var8;
	
	if (STRING_CONTAINS_STRING(bParam0, "gps"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			vVar5 = { STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2) };
			Function_436(1.0f, 0.0f, 1.0f);
			Function_434(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar4 = Function_433(bVar3);
			if (Function_216(iVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_386(iVar4) };
				Function_434(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_433(bool bParam0) //Position: 0x1715E / 94558
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < (Global_29008 - 1))
	{
		if (STRING_CONTAINS_STRING(&Global_29155[iVar010] + 20, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	bVar1 = FIND_NAMED_LAYOUT("regions_layout");
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		iVar2 = CREATE_OBJECT_ITERATOR(bVar1);
		if (IS_ITERATOR_VALID(iVar2))
		{
			bVar3 = START_OBJECT_ITERATOR(iVar2);
			while (IS_OBJECT_VALID(bVar3))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar3), bParam0))
				{
					iVar0 = 0;
					while (iVar0 < (Global_29008 - 1))
					{
						if (StackVal == GET_VOLUME_FROM_OBJECT(bVar3))
						{
							return iVar0;
						}
						iVar0++;
					}
				}
				bVar3 = OBJECT_ITERATOR_NEXT(iVar2);
			}
			DESTROY_ITERATOR(iVar2);
		}
	}
	return 4294967295;
}

void Function_434(vector3 vParam0) //Position: 0x17217 / 94743
{
	*(&Global_28210 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28210 + 36) = { StackVal, StackVal, vParam0 };
	Global_28210 = 1;
	Global_28210.f_4 = 0;
	Global_28210.f_60 = 3;
	Global_28210.f_16 = 393264;
	if (!IS_OBJECTSET_VALID(Global_28210.f_12))
	{
		Global_28210.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "UserGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28210.f_12) >= 0)
	{
		Function_435(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_435(bool bParam0) //Position: 0x1729E / 94878
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

void Function_436(var uParam0, var uParam1, int iParam2) //Position: 0x172DE / 94942
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_437(bool bParam0) //Position: 0x172FF / 94975
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "teleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 3)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar2 = GET_CONSOLE_COMMAND_TOKEN(3);
			Function_438(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_438(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x1735F / 95071
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_439(bool bParam0) //Position: 0x17396 / 95126
{
	char* cVar0;
	int iVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar1 = Function_433(cVar0);
			if (Function_216(iVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_386(iVar1), 4);
				Function_440(iVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_440(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0x173FD / 95229
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_441(bool bParam0) //Position: 0x17434 / 95284
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "print"))
	{
		iVar1 = GET_NUM_CONSOLE_COMMAND_TOKENS();
		iVar2 = 0;
		PRINTSTRING("Console Print: ");
		iVar2 = 1;
		while (iVar2 < iVar1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(iVar2);
			PRINTSTRING(bVar0);
			PRINTSTRING(" ");
			iVar2++;
		}
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_442(bool bParam0) //Position: 0x17493 / 95379
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_447();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_443();
			}
			return 0;
		}
	}
	return 0;
}

int Function_443() //Position: 0x174EC / 95468
{
	bool bVar0;
	
	bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar0, "ambient"))
	{
		if (Function_143(4))
		{
			Function_142(4);
		}
		else
		{
			Function_446(4);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "missions"))
	{
		if (Global_3374 == 1)
		{
			Global_3374 = 0;
		}
		else
		{
			Global_3374 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "ntutorials"))
	{
		if (Global_3375 == 1)
		{
			Global_3375 = 0;
		}
		else
		{
			Global_3375 = 1;
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "ambientpop"))
	{
		if (Function_143(1))
		{
			Function_142(1);
		}
		else
		{
			Function_446(1);
		}
		ENABLE_AMBIENT_SPAWNING(Function_143(1));
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "locname"))
	{
		if (Function_143(32))
		{
			Function_142(32);
		}
		else
		{
			Function_446(32);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "clock"))
	{
		if (Function_143(64))
		{
			Function_142(64);
		}
		else
		{
			Function_446(64);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "adebug"))
	{
		if (Function_143(128))
		{
			Function_142(128);
		}
		else
		{
			Function_446(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_424(256))
		{
			Function_445(256);
		}
		else
		{
			Function_444(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_444(int iParam0) //Position: 0x17649 / 95817
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_445(int iParam0) //Position: 0x17666 / 95846
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_446(int iParam0) //Position: 0x17679 / 95865
{
	if (Function_3(iParam0, 1) && !Function_3(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

int Function_447() //Position: 0x176A6 / 95910
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
	if (STRINGS_ARE_EQUAL(bVar1, "ncallstack"))
	{
		iVar0 = 0;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "global"))
	{
		iVar0 = 7;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "ambient"))
	{
		iVar0 = 1;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "regional"))
	{
		iVar0 = 3;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "mission"))
	{
		iVar0 = 2;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "launcher"))
	{
		iVar0 = 5;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "gringo"))
	{
		iVar0 = 8;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "layout"))
	{
		iVar0 = 9;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "tutorial"))
	{
		iVar0 = 6;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "ncompanion"))
	{
		iVar0 = 10;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "law"))
	{
		iVar0 = 11;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "traffic"))
	{
		iVar0 = 12;
	}
	else if (STRINGS_ARE_EQUAL(bVar1, "weather"))
	{
		iVar0 = 14;
	}
	else
	{
		return 0;
	}
	if (Global_30842[iVar0])
	{
		Global_30842[iVar0] = 0;
	}
	else
	{
		Global_30842[iVar0] = 1;
	}
	return 1;
}

bool Function_448(bool bParam0) //Position: 0x17813 / 96275
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar53;
	vector3 vVar56;
	bool bVar59;
	
	if (STRING_CONTAINS_STRING(bParam0, "stamb"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		*(&iVar2 + 64 + 20) = 1;
		while (iVar1 < 6)
		{
			bVar0 = Function_450(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				bVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(bVar59, vVar56, &vVar53);
				if (!Function_449(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
				{
					*(&iVar2 + 8) = { StackVal, StackVal, vVar53 };
				}
				*(&iVar2 + 20) = { 0.0f, 0.0f, 0.0f };
				LAUNCH_NEW_SCRIPT_WITH_ARGS(bVar0, &iVar2, 51, 0);
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_449(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x17949 / 96585
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
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_252(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_252(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(0);
	}
	return 0;
}

var Function_450(char* cParam0, bool bParam1) //Position: 0x17A7B / 96891
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "AMBIENT", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(bParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_451(bool bParam0) //Position: 0x17AAF / 96943
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_452(iVar1, bParam0);
			if (UNK_0x4417C9F2(bVar0))
			{
				Global_30923 = 1;
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

var Function_452(char* cParam0, bool bParam1) //Position: 0x17B89 / 97161
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "Frontier/Missions", 64);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "Frontier/Mini_Games", 64);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "Mexico/Missions", 64);
			break;
		
		case 0x00000003:
			strcpy(&cVar0, "Mexico/Mini_Games", 64);
			break;
		
		case 0x00000004:
			strcpy(&cVar0, "North/Missions", 64);
			break;
		
		case 0x00000005:
			strcpy(&cVar0, "North/Mini_Games", 64);
			break;
		
		case 0x00000006:
			strcpy(&cVar0, "systemtest", 64);
			break;
		
		default:
			strcpy(&cVar0, "systemtest", 64);
			break;
	}
	FILE_START_PATH(&cVar0);
	FILE_ADD_TO_PATH(bParam1);
	FILE_ADD_TO_PATH(bParam1);
	FILE_END_PATH();
	return FILE_GET_CURRENT_PATH();
}

bool Function_453(bool bParam0) //Position: 0x17C9B / 97435
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_452(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				strcpy(&cVar2, "$/content/", 64);
				stradd(&cVar2, bVar0, 64);
				Global_30922 = GET_ASSET_ID(&cVar2, 4);
				if (Global_30922 == "")
				{
					Global_30922 = 4294967295;
					LOG_ERROR("Attempting to start a mission script that exists, but does not have a valid asset_ID. Please add the script to init/rdr2init_script.sc");
				}
				iVar1 = 6;
			}
			else if (iVar1 == 6)
			{
				LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bVar0);
				PRINTNL();
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_454(bool bParam0) //Position: 0x17E2B / 97835
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "nterminate"))
	{
		if (STRING_CONTAINS_STRING(bParam0, "\\") || STRING_CONTAINS_STRING(bParam0, "/"))
		{
			if (UNK_0x4417C9F2(bParam0))
			{
				UNK_0x05719022(bParam0);
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script is not running.");
				PRINTSTRING("ScriptConsole: This script is not running - ");
				PRINTSTRING(bParam0);
				PRINTNL();
				return 1;
			}
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If terminating a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			while (iVar1 < 6)
			{
				bVar0 = Function_452(iVar1, bParam0);
				if (UNK_0x4417C9F2(bVar0))
				{
					UNK_0x05719022(bVar0);
					iVar1 = 6;
				}
				else if (iVar1 == 6)
				{
					LOG_ERROR("ScriptConsole: The script is not running. Try to specify a path.");
				}
				iVar1++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_455(bool bParam0) //Position: 0x17FD2 / 98258
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (STRING_CONTAINS_STRING(bParam0, "run"))
	{
		if (STRING_CONTAINS_STRING(bParam0, "netrun"))
		{
			iVar1 = 1;
		}
		if (STRING_CONTAINS_STRING(bParam0, "\\") || STRING_CONTAINS_STRING(bParam0, "/"))
		{
			bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (DOES_SCRIPT_EXIST(bParam0))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(bParam0, 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(bParam0, 0);
				}
			}
			else
			{
				LOG_ERROR("ScriptConsole: This script file could not be found. Please check the path you typed.");
				PRINTSTRING("ScriptConsole: This script file could not be found - ");
				PRINTSTRING(bParam0);
				PRINTNL();
				return 1;
			}
		}
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_CONTAINS_STRING(bParam0, ".sc"))
		{
			LOG_ERROR("ScriptConsole: If running a mission, please do not specify .sc at the end of the script name.");
		}
		else
		{
			FILE_START_PATH("systemtest/GeneralTest");
			FILE_ADD_TO_PATH(bParam0);
			FILE_END_PATH();
			if (DOES_SCRIPT_EXIST(FILE_GET_CURRENT_PATH()))
			{
				if (iVar1 == 1)
				{
					NET_START_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				else
				{
					LAUNCH_NEW_SCRIPT(FILE_GET_CURRENT_PATH(), 0);
				}
				return 1;
			}
			while (iVar2 < 6)
			{
				bVar0 = Function_452(iVar2, bParam0);
				if (DOES_SCRIPT_EXIST(bVar0))
				{
					if (iVar1 == 1)
					{
						NET_START_NEW_SCRIPT(bVar0, 0);
					}
					else
					{
						LAUNCH_NEW_SCRIPT(bVar0, 0);
					}
					iVar2 = 6;
				}
				else if (iVar2 == 6)
				{
					LOG_ERROR("ScriptConsole: The script could not be found. Try to specify a path.");
					PRINTSTRING("ScriptConsole: This script file could not be found - ");
					PRINTSTRING(bVar0);
					PRINTNL();
				}
				iVar2++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_456(bool bParam0) //Position: 0x18274 / 98932
{
	char* cVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar1 = GET_ACTOR_ENUM_FROM_STRING(cVar0);
			if (Function_457(iVar1))
			{
				bVar2 = 4294967295;
				if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
				{
					bVar3 = GET_CONSOLE_COMMAND_TOKEN(3);
					bVar2 = STRING_TO_INT(bVar3);
				}
				else
				{
					bVar2 = false;
				}
				if (bVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(iVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(bVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(iVar1));
					PRINTSTRING(")");
					PRINTNL();
					bVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(iVar1, bVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_457(int iParam0) //Position: 0x18322 / 99106
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_458(bool bParam0) //Position: 0x18339 / 99129
{
	if (STRING_CONTAINS_STRING(bParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

int Function_459() //Position: 0x18363 / 99171
{
	bool bVar0;
	bool bVar1;
	
	if (NET_IS_IN_SESSION() && !NET_IS_SESSION_HOST())
	{
		return 0;
	}
	while (IS_OBJECT_VALID(OBJECT_ITERATOR_CURRENT(iLocal_13)))
	{
		bVar0 = OBJECT_ITERATOR_CURRENT(iLocal_13);
		if (GET_OBJECT_TYPE(bVar0) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_PLAYER(bVar1))
				{
					Function_480(bVar1, iLocal_13);
				}
				else
				{
					Function_460(bVar1, iLocal_13);
				}
			}
		}
		OBJECT_ITERATOR_NEXT(iLocal_13);
		return 0;
	}
	CLEAN_OBJECTSET(Global_16515);
	START_OBJECT_ITERATOR(iLocal_13);
	return 0;
}

void Function_460(bool bParam0, bool bParam1) //Position: 0x183D2 / 99282
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar0 = Function_479(bParam0);
	GET_POSITION(bParam0, &vVar1);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			GET_POSITION(bVar0, &vVar4);
			bVar7 = GET_MOUNT(bParam0);
			if (bVar7 == bVar0)
			{
				return;
			}
			if (IS_ACTOR_VALID(bVar7))
			{
				Function_478(bParam0, bVar7);
				if (Global_30900[3])
				{
					PRINTSTRING("HorseSim noterd that ");
					PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)));
					PRINTSTRING(" got on a new horse. They now consider it theirs");
					PRINTNL();
				}
				return;
			}
			bVar8 = GET_MOST_RECENT_RIDER(bVar0);
			if (IS_ACTOR_VALID(bVar8))
			{
				if (bVar8 == bParam0)
				{
					if (VDIST(vVar4, vVar1) > 50.0f)
					{
						return;
					}
				}
			}
		}
	}
	LOG_ERROR("get new horse");
	bVar9 = Function_461(StackVal, StackVal, vVar1, 30.0f, bParam0, bParam1);
	if (IS_ACTOR_VALID(bVar9) && IS_ACTOR_VALID(bParam0))
	{
		Function_478(bParam0, bVar9);
		SET_MOST_RECENT_MOUNT(bParam0, bVar9);
	}
	return;
}

var Function_461(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4, int iParam5) //Position: 0x184F0 / 99568
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar5;
	var uVar6;
	vector3 vVar9;
	
	bVar0 = Function_476(GET_GC_LAYOUT(), &uParam0, fParam3);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Global_30900[3])
		{
			PRINTSTRING("HorseSim is trying to find a place to spawn a horse");
			PRINTNL();
		}
	}
	else
	{
		if (Global_30900[3])
		{
			PRINTSTRING("HorseSim found a horse in the layout for ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam4)));
			PRINTNL();
		}
		bVar5 = Function_462(&uParam0, &vVar1, &uVar4);
		if (bVar5)
		{
			if (Global_30900[3])
			{
				PRINTSTRING("HorseSim spawned a horse in the layout for ");
				PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam4)));
				PRINTNL();
			}
			if (FIND_GROUND_INTERSECTION(&vVar1, 20.0f, &vVar1, &uVar6))
			{
				if (OBJECT_ITERATOR_CURRENT(iParam5) == GET_OBJECT_FROM_ACTOR(bParam4))
				{
					vVar9.y = uVar4;
					bVar0 = CREATE_ACTOR_IN_LAYOUT(GET_GC_LAYOUT(), Function_174(), 976, vVar1, vVar9);
				}
			}
		}
		else if (Global_30900[3])
		{
			PRINTSTRING("HorseSim failed to find a place to spawn a horse for ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam4)));
			PRINTNL();
		}
	}
	return bVar0;
}

int Function_462(var uParam0, var uParam1, Vector3 vParam2) //Position: 0x18683 / 99971
{
	var uVar0;
	struct<11> Var3;
	struct<15> Var14;
	
	Function_473(&uVar0);
	*vParam2.x = *vParam2.x;
	Function_472(StackVal, StackVal, &Var3, 0, *uParam0, 0.0f, 0.0f, 50.0f, 250.0f, 0x40a00000, 0);
	Function_471(&Var14, 1, 2.5f, 0, 512);
	Function_470(&Var14, 10.0f);
	Function_463(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3, Var14);
	*uParam1 = { StackVal, StackVal, Function_463(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3, Var14) };
	if (Global_30900[3])
	{
		PRINTSTRING("HorseSim found a SPAWN LOCATION:  ");
		PRINTVECTOR(*uParam1);
		PRINTNL();
	}
	if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(*uParam1, *uParam0, StackVal)) < 50.0f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_463(struct<37> Param0) //Position: 0x1872D / 100141
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(0);
	if (IS_OBJECT_VALID(Param0))
	{
		GET_OBJECT_POSITION(Param0, &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(Param0));
	}
	else if (!Function_252(StackVal, StackVal, *(&Param0 + 4)))
	{
		if (Global_30842[34])
		{
			PRINTVECTOR(*(&Param0 + 4));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 4));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_469(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_467();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_466(Param0.f_20);
	Function_465(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_464(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param0.f_32)
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	}
	if (Param11.f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, Param11.f_28);
	}
	if (Param11.f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER(Param11.f_36, Param11.f_40);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_254();
	return StackVal, StackVal, Function_254();
}

void Function_464(struct<33> Param0) //Position: 0x1885F / 100447
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
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
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_465(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x1898B / 100747
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

void Function_466(bool bParam0) //Position: 0x189DC / 100828
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

void Function_467() //Position: 0x18A8F / 101007
{
	float fVar0;
	float fVar1;
	
	Function_468(&fVar0, &fVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, fVar1);
	return;
}

void Function_468(var uParam0, int iParam1) //Position: 0x18AA3 / 101027
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

void Function_469(float fParam0) //Position: 0x18B2C / 101164
{
	if (fParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * fParam0), fParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_470(var uParam0, int iParam1) //Position: 0x18B70 / 101232
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_471(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x18B7C / 101244
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

void Function_472(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x18BA5 / 101285
{
	iParam0->f_20 = uParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = uParam5;
	iParam0->f_24 = uParam6;
	iParam0->f_28 = uParam7;
	iParam0->f_32 = uParam10;
	iParam0->f_36 = uParam8;
	iParam0->f_40 = uParam9;
}

void Function_473(int iParam0) //Position: 0x18BE1 / 101345
{
	if (!Function_475(iParam0))
	{
		Function_474(iParam0, 0.0f);
	}
	return;
}

void Function_474(var uParam0, float fParam1) //Position: 0x18BF6 / 101366
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_4(uParam0, 1);
	Function_43(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_475(int iParam0) //Position: 0x18C17 / 101399
{
	return Function_3(*iParam0, 1);
}

var Function_476(bool bParam0, var uParam1, float fParam2) //Position: 0x18C24 / 101412
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(iVar0, 15);
	ITERATE_ON_PARTIAL_MODEL_NAME(iVar0, "horse");
	ITERATE_IN_SPHERE(iVar0, *uParam1, fParam2);
	bVar2 = START_OBJECT_ITERATOR(iVar0);
	bVar3 = false;
	if (Function_477(bVar2))
	{
		bVar1 = bVar2;
		bVar3 = true;
	}
	while (IS_OBJECT_VALID(bVar2))
	{
		if (Function_477(bVar2))
		{
			bVar3++;
			if (bVar3 >= 1)
			{
				if (RAND_INT_RANGE(false, bVar3) == 1)
				{
					bVar1 = bVar2;
				}
			}
			else
			{
				bVar1 = bVar2;
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(iVar0);
	}
	DESTROY_ITERATOR(iVar0);
	return GET_ACTOR_FROM_OBJECT(bVar1);
}

bool Function_477(bool bParam0) //Position: 0x18CAE / 101550
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_RIDER(bVar0)))
	{
		return 0;
	}
	bVar1 = GET_MOST_RECENT_RIDER(bVar0);
	if (IS_ACTOR_VALID(bVar1))
	{
		if (GET_ACTORS_HORSE(bVar1) == bVar0)
		{
			return 0;
		}
	}
	return 1;
}

void Function_478(bool bParam0, bool bParam1) //Position: 0x18CFA / 101626
{
	SET_ACTORS_HORSE(bParam0, bParam1);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, 1);
	return;
}

var Function_479(bool bParam0) //Position: 0x18D0F / 101647
{
	return GET_ACTORS_HORSE(bParam0);
}

void Function_480(bool bParam0, var uParam1) //Position: 0x18D1A / 101658
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	
	bVar0 = GET_MOST_RECENT_MOUNT(bParam0);
	GET_POSITION(bParam0, &vVar1);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (GET_MOST_RECENT_RIDER(bVar0) == bParam0)
		{
			GET_POSITION(bVar0, &vVar4);
			if (VDIST(vVar4, vVar1) > 50.0f)
			{
				return;
			}
		}
	}
	if (Global_30900[3])
	{
		PRINTSTRING("HorseSim spawning new horse for player");
		PRINTNL();
	}
	bVar7 = Function_461(StackVal, StackVal, vVar1, 30.0f, bParam0, uParam1);
	if (IS_ACTOR_VALID(bVar7))
	{
		SET_MOST_RECENT_MOUNT(bParam0, bVar7);
	}
	return;
}

void Function_481() //Position: 0x18DB5 / 101813
{
	char* cVar0[32];
	
	Function_482(GET_PLAYER_ACTOR(0));
	if (VDIST(Function_482(GET_PLAYER_ACTOR(0)), Global_76902) > 3.0f && !UNK_0x4417C9F2("$/content/multiplayer/deathmatch/basicdeathmatch"))
	{
		if (!IS_SCRIPT_USE_CONTEXT_VALID(uLocal_22))
		{
			strcpy(&cVar0, "Launch Deathmatch", 32);
			uLocal_22 = ADD_SCRIPT_USE_CONTEXT(&cVar0, 30, 4, 0, 0, 0, 0, 4294967295, 0);
		}
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(uLocal_22))
		{
			LAUNCH_NEW_SCRIPT("$/content/multiplayer/deathmatch/basicdeathmatch", 0);
			NET_START_NEW_SCRIPT("$/content/multiplayer/deathmatch/basicdeathmatch", 0);
			RELEASE_SCRIPT_USE_CONTEXT(uLocal_22);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(uLocal_22))
	{
		RELEASE_SCRIPT_USE_CONTEXT(uLocal_22);
	}
	return;
}

vector3 Function_482(bool bParam0) //Position: 0x18EC6 / 102086
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_483() //Position: 0x18ED7 / 102103
{
	if (Function_514())
	{
		if (IS_ACTOR_DEAD(bLocal_23) || !IS_ACTOR_VALID(bLocal_23))
		{
			Function_513(bLocal_23);
			if (!Function_484(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1))
			{
				PRINTSTRING("FAILED TO RESPAWN ");
				PRINTNL();
			}
			else
			{
				bLocal_23 = GET_PLAYER_ACTOR(0);
				Function_519(bLocal_23);
			}
		}
		if (iLocal_24)
		{
			KILL_ACTOR(bLocal_23);
			iLocal_24 = 0;
		}
	}
	return;
}

bool Function_484(vector3 vParam0, vector3 vParam3, bool bParam6, var uParam7) //Position: 0x18F3C / 102204
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_169();
	Function_503();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_137();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_501(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, 1, 1);
	}
	else
	{
		bVar9 = Function_499(256);
		if (bVar9)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 3);
		}
		else if (!bParam6 && uParam7)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 0);
		}
		bVar0 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(bVar1, bVar0, "player", Global_76887, vParam0, vParam3, 0);
		if (bVar9 || (!bParam6 && uParam7))
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
		Function_491(bVar0, 0);
		Function_487();
		Function_486(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_485(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_216(uVar14))
			{
				Var10.f_4 = uVar14;
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

var Function_485(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x190B3 / 102579
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

void Function_486(char* cParam0, vector3 vParam1) //Position: 0x1914E / 102734
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_487() //Position: 0x1918C / 102796
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_490(iVar1))
		{
			uVar2 = Function_489(iVar1);
			Function_488(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_488(int iParam0, bool bParam1) //Position: 0x191BE / 102846
{
	if (!Function_490(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_296(222, Global_26401[iParam0], 0);
		if (Function_168(222) <= 0)
		{
			Function_154(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_154((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_296((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_296(222, bParam1, 0);
	}
	return;
}

int Function_489(int iParam0) //Position: 0x19247 / 102983
{
	if (!Function_490(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_490(int iParam0) //Position: 0x1925F / 103007
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_491(bool bParam0, bool bParam1) //Position: 0x19274 / 103028
{
	var uVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_498(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_496(8192) && !Function_495(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_493())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 13, 5.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	uVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(uVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(uVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_492())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_492() //Position: 0x1937C / 103292
{
	return Function_3(Global_79962, 2048);
}

bool Function_493() //Position: 0x1938C / 103308
{
	if (Function_177())
	{
		return (Function_494() != 1 || Function_494() != 0);
	}
	return 0;
}

int Function_494() //Position: 0x193A5 / 103333
{
	return Global_79349.f_16;
}

bool Function_495(int iParam0, bool bParam1) //Position: 0x193B1 / 103345
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_496(int iParam0) //Position: 0x193D1 / 103377
{
	return Function_497(&Global_79349, iParam0);
}

int Function_497(var uParam0, int iParam1) //Position: 0x193E0 / 103392
{
	return Function_3(uParam0->f_44, iParam1);
}

var Function_498(int iParam0) //Position: 0x193EF / 103407
{
	int iVar0;
	
	iVar0 = "";
	if (((iParam0 > 837 && iParam0 < 971) && iParam0 > 972) && iParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(iParam0);
	return iVar0;
}

int Function_499(int iParam0) //Position: 0x19424 / 103460
{
	return Function_500(Global_78617.f_52, iParam0);
}

int Function_500(var uParam0, int iParam1) //Position: 0x19435 / 103477
{
	return (uParam0 && iParam1) == 0;
}

int Function_501(bool bParam0, int iParam1) //Position: 0x19442 / 103490
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_502(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_502(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_502(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_502(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_502(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_502(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_502(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_502(iParam1, 64))
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

bool Function_502(var uParam0, bool bParam1) //Position: 0x1951B / 103707
{
	return (uParam0 && bParam1) == 0;
}

void Function_503() //Position: 0x19528 / 103720
{
	Function_512();
	Function_506();
	Function_504();
	return;
}

void Function_504() //Position: 0x19537 / 103735
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_505();
	return;
}

void Function_505() //Position: 0x1956B / 103787
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_506() //Position: 0x1957C / 103804
{
	if (Global_83864.f_1264 > 6)
	{
		Function_507(&(Global_50170[522]));
		Function_507(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_507(&(Global_50170[722]));
		Function_507(&(Global_50170[822]));
		Function_507(&(Global_50170[922]));
		Function_507(&(Global_50170[1022]));
		Function_507(&(Global_50170[1122]));
	}
	return;
}

void Function_507(bool bParam0) //Position: 0x195DC / 103900
{
	Global_56092[*bParam0] = 0;
	Function_508(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_508(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x195F6 / 103926
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_511(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_510(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_511(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_509(iParam0, 4))
	{
		Function_319(Function_511(iParam0), 0);
	}
}

bool Function_509(int iParam0, int iParam1) //Position: 0x196AD / 104109
{
	return Function_3(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_510(int iParam0) //Position: 0x196C1 / 104129
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_511(int iParam0) //Position: 0x196F5 / 104181
{
	return Global_50170[iParam022].f_24;
}

void Function_512() //Position: 0x19704 / 104196
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_513(bool bParam0) //Position: 0x1971D / 104221
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(bParam0);
	if (IS_OBJECTSET_VALID(Global_16515))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515);
		}
	}
	return;
}

bool Function_514() //Position: 0x19799 / 104345
{
	return Function_499(1);
}

void Function_515(int iParam0) //Position: 0x197A3 / 104355
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
			Function_516(iParam0);
		}
	}
	return;
}

void Function_516(int iParam0) //Position: 0x197D5 / 104405
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_517(int iParam0) //Position: 0x197E4 / 104420
{
	var uVar0;
	
	PRINTSTRING("==== PONG! ====");
	PRINTNL();
	uVar0 = 2;
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 3);
	return;
}

void Function_518(int iParam0) //Position: 0x19812 / 104466
{
	var uVar0;
	
	PRINTSTRING("==== PING! ====");
	PRINTNL();
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	return;
}

void Function_519(bool bParam0) //Position: 0x19839 / 104505
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Called ACTOR_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	if (IS_OBJECTSET_VALID(Global_16515))
	{
		if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515))
		{
			ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515);
		}
	}
	return;
}

void Function_520() //Position: 0x198A8 / 104616
{
	bLocal_14 = CREATE_LAYOUT("HorseServer");
	Global_16515 = CREATE_OBJECTSET_IN_LAYOUT("HorseServerSet", bLocal_14, 15, 0);
	iLocal_13 = CREATE_OBJECT_ITERATOR(bLocal_14);
	ITERATE_IN_SET(iLocal_13, Global_16515);
	CLEAN_OBJECTSET(Global_16515);
	START_OBJECT_ITERATOR(iLocal_13);
	return;
}

