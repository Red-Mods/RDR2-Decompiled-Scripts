//Decompiled with MagicRDR v1.0
//Function Count : 512
//Statics Count : 25
//Natives Count : 560
//Parameters Count : 0

#region Local Var
	bool bLocal_0 = false;
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
	bool bLocal_13 = false;
	bool bLocal_14 = false;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	bool bLocal_22 = false;
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
	Function_511();
	Function_510(bLocal_23);
	iVar0 = 101277;
	NET_SCRIPTMSG_REGISTER_HANDLER(1, iVar0);
	iVar0 = 101231;
	NET_SCRIPTMSG_REGISTER_HANDLER(2, iVar0);
	while (!IS_EXITFLAG_SET())
	{
		Function_506(1);
		Function_475();
		Function_473();
		Function_451();
		Function_203();
		Function_179(&uLocal_15);
		Function_2();
		WAIT(false);
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
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	vector3 vVar21;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	struct<25> Var27;
	vector3 vVar53;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	struct<8> Var61;
	vector3 vVar69;
	bool bVar72;
	bool bVar73;
	int iVar74;
	bool bVar75;
	bool bVar76;
	int iVar77;
	bool bVar78;
	int iVar79;
	bool bVar80;
	bool bVar81;
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
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
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
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
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
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
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
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 0, false);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 1, true);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 2, true);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 3, false);
							ACTOR_ENABLE_VARIABLE_MESH(bVar24, 4, false);
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
										bVar39 = ADD_BLIP_FOR_OBJECT(bVar18, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar39, 0,5f);
										UNK_0x1E98AFEC(bVar39, 1);
										SET_BLIP_SCALE(bVar39, 0,6f);
										SET_BLIP_COLOR(bVar39, 0,35f, 0,35f, 0,35f, 0,65f);
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
										bVar41 = ADD_BLIP_FOR_OBJECT(bVar40, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar41, 0,5f);
										UNK_0x1E98AFEC(bVar41, 1);
										SET_BLIP_SCALE(bVar41, 0,6f);
										SET_BLIP_COLOR(bVar41, 0,35f, 0,35f, 0,35f, 0,65f);
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
										bVar57 = ADD_BLIP_FOR_OBJECT(bVar17, 456, 0.0f, 0, 0);
										SET_BLIP_MAX_DISTANCE(bVar57, 0,5f);
										UNK_0x1E98AFEC(bVar57, 1);
										SET_BLIP_SCALE(bVar57, 0,6f);
										SET_BLIP_COLOR(bVar57, 0,35f, 0,35f, 0,35f, 0,65f);
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
						bVar60 = GET_ACTOR_ENUM(bVar59);
						if (bVar60 <= 976 && bVar60 >= 1007)
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
									DECOR_SET_BOOL(Global_34573, "TriggerNewHorse", true);
								}
							}
						}
						if (bVar12 == GET_OBJECT_FROM_ACTOR(Global_34573) && bVar12 == GET_OBJECT_FROM_ACTOR(GET_MOUNT(Global_34573)))
						{
							if (IS_ACTOR_VALID(bVar58))
							{
								if (GET_ACTOR_ENUM(bVar58) <= 1155 && GET_ACTOR_ENUM(bVar58) >= 1176)
								{
									ADD_BLOOD_TO_ACTOR(bVar59, 0,1f, 1,1f, -0,1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, -0,1f, 1,1f, -0,1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1,3f, -0,1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1,2f, -0,1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, -0,1f, 1,25f, -0,1f, 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(bVar59, 0.0f, 1,1f, -0,1f, 0, 1, 0);
									if (DECOR_CHECK_EXIST(bVar12, "LastCarrierPlayer"))
									{
										if (!IS_ACTOR_MALE(bVar59))
										{
											if (CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bVar12, 1f, 1117126656, 1, 1, 0))
											{
												if (!HAS_ACHIEVEMENT_BEEN_PASSED(20))
												{
													AWARD_ACHIEVEMENT(20);
												}
											}
										}
									}
									if (Function_173(bVar58, 0) <= 7,25f)
									{
										Var61 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171("HitByTrain_FX") };
										Function_170(bVar12);
										vVar69 = { StackVal, StackVal, Function_170(bVar12) };
										if (!UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(Global_30616, &Var61, "script_train_squash_ped", vVar69), 0.0f, 0.0f, 0.0f))
										{
										}
										if (DECOR_CHECK_EXIST(bVar12, "CrimeHoldupBadguy"))
										{
											DECOR_SET_BOOL(Global_34573, "CHBadguy_Gone", true);
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
						DECOR_SET_BOOL(bVar12, "coplasso", true);
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
							if (!IS_SCRIPT_VALID(iLocal_0))
							{
								if (!Function_177() && !IS_DEBUGKEY_DOWN(50))
								{
									Var34.f_4 = GET_ACTOR_FROM_OBJECT(bVar12);
									Var34 = GET_ACTOR_FROM_OBJECT(bVar13);
									bLocal_0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &Var34, 2, 0);
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
										bVar73 = Function_149(8, 0, 5);
										iVar74 = Function_148(bVar73);
										bVar75 = Function_149(7, 0, 5);
										Function_144(bVar75, FLOOR(GET_CURRENT_GAME_TIME()));
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
							bVar76 = Function_149(7, 0, 5);
							iVar77 = Function_148(bVar76);
							iVar77 = (ROUND(GET_CURRENT_GAME_TIME()) - iVar77);
							bVar78 = Function_149(8, 0, 5);
							iVar79 = Function_148(bVar78);
							Function_144(bVar78, (iVar77 + iVar79));
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
							ENABLE_VEHICLE_SEAT(bVar10, false, 0);
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
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, bVar1, 0);
								bVar1++;
							}
							SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, false);
							bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
							if (IS_PHYSINST_VALID(bVar11))
							{
								GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
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
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, bVar1, 0);
								bVar1++;
							}
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, false);
								bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(bVar11))
								{
									GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
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
							bVar1 = 2;
							while (bVar1 < (GET_NUM_AVAILABLE_SEATS(bVar10) - 1))
							{
								ENABLE_VEHICLE_SEAT(bVar10, bVar1, 0);
								bVar1++;
							}
							NET_OBJECT_REPLICATION_MODE_START(17, 0);
							bVar12 = CREATE_PROP_IN_LAYOUT(bVar10, "gatlingGun", "$/fragments/p_gen_gatlinggun01x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
							NET_OBJECT_REPLICATION_MODE_END(17);
							if (IS_OBJECT_VALID(bVar12))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(bVar12, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(bVar12, bVar10, false);
								bVar11 = GET_PHYSINST_FROM_OBJECT(bVar10);
								if (IS_PHYSINST_VALID(bVar11))
								{
									GET_LOCATOR_OFFSETS(bVar11, "gattling_attach", &vVar3, &vVar6);
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
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(bVar12), false, 0);
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
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								ENABLE_VEHICLE_SEAT(bVar10, bVar1, 1);
								bVar1++;
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
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(bVar10))
							{
								bVar25 = GET_ACTOR_IN_VEHICLE_SEAT(bVar10, bVar1);
								if ((IS_ACTOR_VALID(bVar24) && bVar25 == bVar80) && bVar25 == bVar24)
								{
									TASK_VEHICLE_LEAVE(bVar25);
								}
								bVar1++;
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
								bVar20 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar12));
								bVar19 = bVar20;
								switch (bVar19)
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
						bVar81 = Function_149(6, 3, 5);
						bVar82 = Function_148(bVar81);
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
						Function_144(bVar81, bVar82);
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
				}
				break;
			
			case 0x0000003A:
				bVar11 = GET_EVENT_TARGET_AS_PHYSINST(bVar16);
				if (IS_PHYSINST_VALID(bVar11))
				{
					bVar12 = GET_OBJECT_FROM_PHYSINST(bVar11);
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

bool Function_3(bool bParam0, int iParam1) //Position: 0x31A4 / 12708
{
	return (bParam0 && iParam1) == 0;
}

void Function_4(bool bParam0, bool bParam1) //Position: 0x31B1 / 12721
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

var Function_5(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x31C0 / 12736
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

void Function_6(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x3244 / 12868
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_9(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_8(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_7(&bVar0, uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 0, 1, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 1, 1, 180f);
}

void Function_7(var uParam0, bool bParam1) //Position: 0x32C0 / 12992
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 4,240117f, 2,848692f, -3,453501f, -14,51869f, 120,8944f, -0,096658f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,705376f, 1,356211f, -0,494339f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_8(var uParam0, bool bParam1) //Position: 0x3343 / 13123
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,312839f, 2,04426f, -3,890313f, -11,40707f, -165,6106f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1,292647f, 1,248807f, -0,071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_9(var uParam0, bool bParam1) //Position: 0x33C2 / 13250
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3,382136f, 2,293721f, 0,74885f, -8,276146f, -68,90104f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,051506f, 1,75836f, -0,576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_10(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x3441 / 13377
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

void Function_11(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x34BA / 13498
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_14(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_13(&bVar0, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_12(&bVar0, uParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "CJAir", 4294967295, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 2, cParam1, "JackWagon_vehLoc", 4294967295, 0, 180f);
}

void Function_12(var uParam0, bool bParam1) //Position: 0x352F / 13615
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_174(), 5,056644f, 3,927511f, -3,112992f, 2,874524f, 1,177293f, 3,10158f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,88904f, 2,422013f, -0,671586f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_13(var uParam0, bool bParam1) //Position: 0x35C4 / 13764
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_174(), 0,312839f, 2,04426f, -3,890313f, 2,942502f, -0,251143f, -3,141593f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 1,292647f, 1,248807f, -0,071487f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_14(var uParam0, bool bParam1) //Position: 0x3659 / 13913
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_174(), -3,382136f, 2,293721f, 0,74885f, -0,144446f, -1,20255f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,051506f, 1,75836f, -0,576088f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_15(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x36EA / 14058
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

void Function_16(var uParam0, var uParam1, int iParam2) //Position: 0x376C / 14188
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_18(&bVar0, uParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_17(&bVar0, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,75f, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1,5f, 1);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(bVar1, 1000.0f, 0);
	return;
}

void Function_17(var uParam0, bool bParam1) //Position: 0x37C1 / 14273
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,577029f, 1,710976f, -3,825424f, -3,464217f, 169,0016f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -1,289642f, 1,484856f, -0,158455f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_18(var uParam0, bool bParam1) //Position: 0x3840 / 14400
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2,496739f, 1,711366f, -2,162416f, -5,032116f, 131,0492f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,087791f, 1,409592f, 0,088257f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_19(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x38BF / 14527
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

void Function_20(var uParam0, int iParam1) //Position: 0x3933 / 14643
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_22(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_21(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2.0f, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 2.0f, 0, 0);
	return;
}

void Function_21(var uParam0, bool bParam1) //Position: 0x397D / 14717
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3,366477f, 1,49934f, -2,612921f, 8,860391f, -121,5917f, 1,481497f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

void Function_22(var uParam0, bool bParam1) //Position: 0x39E5 / 14821
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,576806f, 2,573345f, -4,386736f, -12,39926f, 179,9947f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	return;
}

var Function_23(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3A49 / 14921
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

void Function_24(var uParam0, int iParam1) //Position: 0x3AC6 / 15046
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_26(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_25(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0,9f, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(bVar1, 1000.0f, 0);
	return;
}

void Function_25(var uParam0, bool bParam1) //Position: 0x3B27 / 15143
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2,547432f, 1,293245f, -3,496428f, -2,252641f, -148,9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,300987f, 1,122006f, 0,23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_26(var uParam0, bool bParam1) //Position: 0x3BA6 / 15270
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1,008554f, 1,956293f, -1,766058f, -4,570198f, -158,2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,208504f, 1,783894f, 0,236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_27(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3C25 / 15397
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

void Function_28(var uParam0, int iParam1) //Position: 0x3CA3 / 15523
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_30(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_29(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 0,9f, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(bVar1, 1000.0f, 0);
	return;
}

void Function_29(var uParam0, bool bParam1) //Position: 0x3D04 / 15620
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2,547f, 1,293245f, -3,496428f, -2,252641f, -148,9353f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,300987f, 1,122006f, 0,23275f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_30(var uParam0, bool bParam1) //Position: 0x3D83 / 15747
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,009f, 1,956293f, -1,766058f, -4,570198f, -158,2257f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,208504f, 1,783894f, 0,236752f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_31(bool bParam0, vector3 vParam1) //Position: 0x3E02 / 15874
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

var Function_32(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x3E40 / 15936
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

void Function_33(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3EBE / 16062
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_34(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 2,5f, 0);
}

void Function_34(var uParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x3EEF / 16111
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	vVar3 = { 0.0f, 0.0f, 0.0f };
	vVar6 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar3 = { 0.0f, 2,12f, -2,422f };
	UNK_0xF76F2BB3(&vVar3, bParam1, bParam1->f_24, 4);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar3, StackVal) };
	vVar6 = { 0.0f, -30,351f, -15,34f };
	UNK_0xF76F2BB3(&vVar6, bParam1, bParam1->f_24, 4);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar6, StackVal) };
	CAMERA_PROBE(&vVar0, vVar3, vVar6, uParam2, 23);
	vVar0.x = (vVar0.x + 0.0f);
	vVar0.f_4 = (vVar0.y + 1.0f);
	vVar0.f_8 = (vVar0.z + 0.0f);
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
}

var Function_35(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x3FDC / 16348
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

void Function_36(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4061 / 16481
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_37(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
}

void Function_37(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x409E / 16542
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 9,270768f, 7,965437f, 3,153887f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1,407577f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1,407577f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1,407577f, 0.0f, 1);
}

void Function_38(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x417F / 16767
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

void Function_39(char* cParam0, int iParam1) //Position: 0x41EB / 16875
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

bool Function_40(bool bParam0, var uParam1, int iParam2) //Position: 0x4222 / 16930
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

int Function_41(char* cParam0) //Position: 0x429A / 17050
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

int Function_42(int iParam0) //Position: 0x433B / 17211
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

void Function_43(int iParam0, int iParam1) //Position: 0x4378 / 17272
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_44(int iParam0, bool bParam1) //Position: 0x438B / 17291
{
	if ((iParam0 && bParam1) == bParam1)
	{
		return 1;
	}
	return 0;
}

var Function_45(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x439E / 17310
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

void Function_46(var uParam0, char* cParam1) //Position: 0x441D / 17437
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_47(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_47(var uParam0, bool bParam1) //Position: 0x446C / 17516
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2,077684f, 1,688702f, 0,09395f, -16,10126f, 77,37032f, 0,009626f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_48(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x44F8 / 17656
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

void Function_49(var uParam0, char* cParam1) //Position: 0x4575 / 17781
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_50(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_50(var uParam0, bool bParam1) //Position: 0x45C4 / 17860
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33,73909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,598154f, 1,524616f, -1,161397f, -8,163617f, -141,3147f, -16,12286f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_51(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x464C / 17996
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

void Function_52(var uParam0, char* cParam1) //Position: 0x46C9 / 18121
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_53(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_53(var uParam0, bool bParam1) //Position: 0x4718 / 18200
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30,6607f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,785012f, 1,737865f, -0,003387f, -16,92512f, 84,24278f, 11,77102f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_54(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x47A0 / 18336
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

void Function_55(var uParam0, char* cParam1) //Position: 0x481D / 18461
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_56(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_56(var uParam0, bool bParam1) //Position: 0x486C / 18540
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38,45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,033225f, 1,295071f, 0,859828f, 2,370899f, -21,91965f, 11,26406f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_57(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x48F4 / 18676
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

void Function_58(var uParam0, char* cParam1) //Position: 0x4971 / 18801
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_59(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_59(var uParam0, bool bParam1) //Position: 0x49C0 / 18880
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38,45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,15953f, 1,084327f, -1,321146f, 8,784932f, 138,2104f, -8,502293f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_60(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4A48 / 19016
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

void Function_61(var uParam0, char* cParam1) //Position: 0x4AC2 / 19138
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_62(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_62(var uParam0, bool bParam1) //Position: 0x4B11 / 19217
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39,86723f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,731022f, 1,207424f, -0,59499f, -0,219386f, 98,4201f, -6,49419f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_63(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4B99 / 19353
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

void Function_64(var uParam0, char* cParam1) //Position: 0x4C1A / 19482
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_65(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_65(var uParam0, bool bParam1) //Position: 0x4C69 / 19561
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44,73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2,427828f, 1,442699f, -0,021391f, -11,90606f, 72,94113f, 5,7E-05f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_66(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4CF5 / 19701
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

void Function_67(var uParam0, char* cParam1) //Position: 0x4D74 / 19828
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_68(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_68(var uParam0, bool bParam1) //Position: 0x4DC3 / 19907
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40,7396f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,154827f, 0,698168f, 0,196961f, 14,45704f, 46,70459f, -11,70381f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_69(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4E4F / 20047
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

void Function_70(var uParam0, char* cParam1) //Position: 0x4ECE / 20174
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_71(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_71(var uParam0, bool bParam1) //Position: 0x4F1D / 20253
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 39,61349f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,678964f, 0,992386f, -2,09693f, 13,04992f, 150,5624f, -0,189706f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_72(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x4FA9 / 20393
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

void Function_73(var uParam0, char* cParam1) //Position: 0x5028 / 20520
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_74(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_74(var uParam0, bool bParam1) //Position: 0x5077 / 20599
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1,17763f, 1,626893f, -1,877858f, -16,66625f, -132,0675f, -4,978086f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_75(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5103 / 20739
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

void Function_76(var uParam0, char* cParam1) //Position: 0x5182 / 20866
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_77(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_77(var uParam0, bool bParam1) //Position: 0x51D1 / 20945
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,23275f, 0,7751f, -1,966721f, 14,39797f, 133,8307f, 29,31653f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_78(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x525D / 21085
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

void Function_79(var uParam0, char* cParam1) //Position: 0x52D9 / 21209
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_80(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_80(var uParam0, bool bParam1) //Position: 0x5328 / 21288
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,650726f, 0,618574f, 0,427292f, 13,80886f, 47,58586f, -11,28612f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_81(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x53B4 / 21428
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

void Function_82(var uParam0, char* cParam1) //Position: 0x5436 / 21558
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_83(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_83(var uParam0, bool bParam1) //Position: 0x5485 / 21637
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44,73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2,381174f, 1,428986f, -0,436662f, -11,62205f, 89,08679f, -0,000115f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,795814f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_84(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5511 / 21777
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

void Function_85(var uParam0, char* cParam1) //Position: 0x5591 / 21905
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_86(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_86(var uParam0, bool bParam1) //Position: 0x55E0 / 21984
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,57505f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,18887f, 1,61792f, 0,534385f, -15,9202f, 45,06617f, 3,526383f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_87(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x566C / 22124
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

void Function_88(var uParam0, char* cParam1) //Position: 0x56EC / 22252
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_89(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_89(var uParam0, bool bParam1) //Position: 0x573B / 22331
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44,49909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,024016f, 0,554619f, 0,408258f, 30,14079f, 44,81871f, 3,92224f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_90(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x57C7 / 22471
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

void Function_91(var uParam0, char* cParam1) //Position: 0x5847 / 22599
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_92(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_92(var uParam0, bool bParam1) //Position: 0x5896 / 22678
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 44,18989f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1,108242f, 1,113226f, 0,091178f, 4,81359f, -74,79637f, -10,2132f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_93(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5922 / 22818
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

void Function_94(var uParam0, char* cParam1) //Position: 0x59A2 / 22946
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_95(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_95(var uParam0, bool bParam1) //Position: 0x59F1 / 23025
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43,08115f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,736095f, 0,952384f, -1,123448f, 10,26351f, 112,517f, 12,43874f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_96(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5A7D / 23165
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

void Function_97(var uParam0, char* cParam1) //Position: 0x5AFD / 23293
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_98(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_98(var uParam0, bool bParam1) //Position: 0x5B4C / 23372
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,68156f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,121333f, 0,883925f, 0,788724f, 13,18485f, 39,53941f, 6,69186f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_99(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5BD8 / 23512
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

void Function_100(var uParam0, char* cParam1) //Position: 0x5C55 / 23637
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_101(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_101(var uParam0, bool bParam1) //Position: 0x5CA4 / 23716
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 40,64627f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,833069f, 0,910306f, 0,392504f, 6,567528f, 60,56582f, 0,046868f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_102(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5D30 / 23856
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

void Function_103(var uParam0, char* cParam1) //Position: 0x5DB1 / 23985
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_104(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_104(var uParam0, bool bParam1) //Position: 0x5E00 / 24064
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35,79285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,367814f, 1,599156f, 1,072289f, -3,876976f, 19,19374f, 11,86928f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_105(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5E88 / 24200
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

void Function_106(var uParam0, char* cParam1) //Position: 0x5F09 / 24329
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_107(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_107(var uParam0, bool bParam1) //Position: 0x5F58 / 24408
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 34,38961f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,2005f, 0,639449f, -0,77461f, 28,96044f, 100,1754f, -21,46019f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_108(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x5FE0 / 24544
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

void Function_109(var uParam0, char* cParam1) //Position: 0x6061 / 24673
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_110(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_110(var uParam0, bool bParam1) //Position: 0x60B0 / 24752
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31,09979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,772715f, 0,601514f, 0,683062f, 27,82014f, 33,3886f, -21,21926f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_111(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6138 / 24888
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

void Function_112(var uParam0, char* cParam1) //Position: 0x61B9 / 25017
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_113(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_113(var uParam0, bool bParam1) //Position: 0x6208 / 25096
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31,67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,261779f, 1,408872f, 1,275128f, 0,737339f, 39,14373f, -9,138619f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_114(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6290 / 25232
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

void Function_115(var uParam0, char* cParam1) //Position: 0x6311 / 25361
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_116(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_116(var uParam0, bool bParam1) //Position: 0x6360 / 25440
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 23,34922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 2,193164f, -0,139685f, -0,718702f, 33,4145f, 100,2139f, 15,81386f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,101748f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_117(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x63EC / 25580
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

void Function_118(var uParam0, char* cParam1) //Position: 0x646A / 25706
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_119(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(iVar1, 100.0f, 1);
	return;
}

void Function_119(var uParam0, bool bParam1) //Position: 0x64B9 / 25785
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 31,67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1,158421f, 1,612226f, 0,177963f, -3,552166f, -69,33723f, -2,450368f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_120(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6541 / 25921
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

void Function_121(var uParam0, char* cParam1) //Position: 0x65B9 / 26041
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_122(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__EndChairSmash", 0, 1, 180f);
	return;
}

void Function_122(var uParam0, bool bParam1) //Position: 0x65F9 / 26105
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3,305018f, 1,08927f, 0,490524f, -4,4265f, -62,37619f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,451405f, 0,839948f, -1,002819f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_123(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x6678 / 26232
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

void Function_124(var uParam0, var uParam1, char* cParam2) //Position: 0x66EF / 26351
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_126(&bVar0, uParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_125(&bVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,2f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam2, "__EndWallPin", 2, 1, 180f);
	return;
}

void Function_125(var uParam0, bool bParam1) //Position: 0x675A / 26458
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2,000206f, 1,399983f, -0,499981f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0,970139f, 1E-06f, 0,242549f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

void Function_126(var uParam0, bool bParam1) //Position: 0x67F9 / 26617
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -2,004646f, 1,400002f, -0,423557f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0,999992f, 1E-06f, -0,004033f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	return;
}

vector3 Function_127(bool bParam0) //Position: 0x6898 / 26776
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

var Function_128(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x68BF / 26815
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

void Function_129(var uParam0, char* cParam1) //Position: 0x6939 / 26937
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_132(&bVar0, cParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_131(&bVar0, cParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_130(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,7f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 0,75f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "__EndGroundAttack", 2, 0, 7.0f);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 2, 2.0f, 3, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_130(var uParam0, bool bParam1) //Position: 0x69E1 / 27105
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4,069192f, 1,679383f, 1,090629f, -10,92779f, -67,95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,043306f, 0,840791f, -0,539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,5f, -0,5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_131(var uParam0, bool bParam1) //Position: 0x6A8F / 27279
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -1,651182f, 1,344121f, 0,315187f, -21,06256f, -60,6819f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,047794f, 0,635919f, -0,585258f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,5f, -0,5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_132(var uParam0, bool bParam1) //Position: 0x6B3D / 27453
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -4,069192f, 1,679383f, 1,090629f, -10,92779f, -67,95651f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,043306f, 0,840791f, -0,539488f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,5f, -0,5f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

var Function_133(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6BEB / 27627
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

void Function_134(var uParam0, char* cParam1) //Position: 0x6C69 / 27753
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_135(&bVar0, cParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill_R", 0, 1, 180f);
	return;
}

void Function_135(var uParam0, bool bParam1) //Position: 0x6CAA / 27818
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 33,936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1,938993f, 2,898682f, 0,045806f, -51,88138f, 61,50959f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,123694f, 0,266305f, -0,939428f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

void Function_136(var uParam0) //Position: 0x6D29 / 27945
{
	Function_137();
	Global_63118 = uParam0;
	return;
}

void Function_137() //Position: 0x6D37 / 27959
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

var Function_138(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6D4C / 27980
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

void Function_139(var uParam0, char* cParam1) //Position: 0x6DBC / 28092
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_140(&bVar0, cParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "BedStealthKill", 4294967295, 0, 180f);
	return;
}

void Function_140(var uParam0, bool bParam1) //Position: 0x6DFE / 28158
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_OBJECTS(*uParam0, bParam1, Function_174(), -1,97754f, 2,195687f, -0,487989f, -0,712222f, -1,448415f, 0.0f, 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,182648f, 0,316525f, -0,753682f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

bool Function_141(var uParam0, bool bParam1) //Position: 0x6E8F / 28303
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(bParam1, &vVar0);
	return Function_31(StackVal, StackVal, uParam0, vVar0);
}

void Function_142(int iParam0) //Position: 0x6EA6 / 28326
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

bool Function_143(int iParam0) //Position: 0x6EDA / 28378
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_144(bool bParam0, int iParam1) //Position: 0x6EF6 / 28406
{
	if (!Function_145(bParam0))
	{
		return;
	}
	Global_13172[bParam011].f_16 = iParam1;
	return;
}

bool Function_145(int iParam0) //Position: 0x6F11 / 28433
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

bool Function_146(int iParam0) //Position: 0x6F35 / 28469
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_147(int iParam0) //Position: 0x6F4A / 28490
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_148(bool bParam0) //Position: 0x6F61 / 28513
{
	if (!Function_145(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_16;
}

bool Function_149(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6F7B / 28539
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

int Function_150(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6FD9 / 28633
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

int Function_151(int iParam0) //Position: 0x712E / 28974
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

bool Function_152(int iParam0) //Position: 0x716C / 29036
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_153(int iParam0, int iParam1, int iParam2) //Position: 0x7181 / 29057
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_154(int iParam0, bool bParam1, bool bParam2) //Position: 0x71A1 / 29089
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

void Function_155(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x743C / 29756
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_164(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_164(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_162(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_159(bVar19, bParam2, &iVar17, &iVar18);
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

var Function_156(int iParam0) //Position: 0x7A69 / 31337
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_157(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x7A7A / 31354
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

struct<32> Function_158(char* cParam0, char* cParam1) //Position: 0x7B6F / 31599
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_159(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x7B88 / 31624
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_161(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_160(Function_161(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_160(int iParam0, int iParam1) //Position: 0x7BED / 31725
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_161(int iParam0, bool bParam1) //Position: 0x7BFF / 31743
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_162(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x7C11 / 31761
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

int Function_163(int iParam0) //Position: 0x7D41 / 32065
{
	return Global_35278[iParam020].f_48;
}

float Function_164(int iParam0) //Position: 0x7D50 / 32080
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_165(int iParam0) //Position: 0x7D89 / 32137
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_166(int iParam0) //Position: 0x7DC6 / 32198
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

int Function_167(int iParam0, bool bParam1, bool bParam2) //Position: 0x7F60 / 32608
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

int Function_168(bool bParam0) //Position: 0x819D / 33181
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

int Function_169() //Position: 0x81DE / 33246
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

vector3 Function_170(bool bParam0) //Position: 0x81F3 / 33267
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

struct<32> Function_171(bool bParam0) //Position: 0x821A / 33306
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

struct<32> Function_172(char* cParam0, char* cParam1, char* cParam2) //Position: 0x8284 / 33412
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_173(bool bParam0, bool bParam1) //Position: 0x82A3 / 33443
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_174() //Position: 0x82C2 / 33474
{
	int iVar0;
	
	return iVar0;
}

bool Function_175(int iParam0) //Position: 0x82CA / 33482
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_176(bool bParam0) //Position: 0x82E6 / 33510
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

bool Function_177() //Position: 0x83D7 / 33751
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_178(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x83E0 / 33760
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

int Function_179(int iParam0) //Position: 0x83FC / 33788
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

void Function_180() //Position: 0x8466 / 33894
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("Actors_Debug_Visualization");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar2 = CREATE_OBJECT_ITERATOR(bVar0);
		ITERATE_ON_OBJECT_TYPE(bVar2, 15);
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			REQUEST_ANIM_SET("range_of_motion", 0);
			REQUEST_ACTION_TREE("custom/range_of_motion");
			while ((!HAS_ANIM_SET_LOADED("range_of_motion") && !HAS_ACTION_TREE_LOADED("custom/range_of_motion")) && !IS_EXITFLAG_SET())
			{
				WAIT(false);
			}
			bVar1 = GET_ACTOR_FROM_OBJECT(START_OBJECT_ITERATOR(bVar2));
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
				bVar1 = GET_ACTOR_FROM_OBJECT(OBJECT_ITERATOR_NEXT(bVar2));
			}
		}
	}
	return;
}

void Function_181() //Position: 0x85FB / 34299
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

bool Function_182(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8672 / 34418
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
		WAIT(false);
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
				ANIMAL_ACTOR_SET_DOMESTICATION(bVar0, true);
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
			TASK_PRIORITY_SET(bVar0, true);
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

bool Function_183(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x88AD / 34989
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
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
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			bVar15 = "";
			if (Function_186(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_185(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_184(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (bVar9)
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
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_184(int iParam0, int iParam1) //Position: 0x8AE1 / 35553
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

var Function_185(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x8B13 / 35603
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8B2B / 35627
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

var Function_187(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, var uParam5) //Position: 0x8B52 / 35666
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
	DRAW_STRING_CURRENT_FONT(0,1f, 0,8f, "Click Left Stick: Select", 1.0f, 1.0f, 1.0f, 1.0f);
	if (Function_3(*iParam0, 32768))
	{
		DRAW_STRING_CURRENT_FONT(0,4f, 0,8f, "Click Right Stick: Drop as Wild", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,4f, 0,8f, "Click Right Stick: Make Player", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	DRAW_STRING_CURRENT_FONT(0,62f, 0,8f, "A: Select and Play All Audio", 1.0f, 1.0f, 1.0f, 1.0f);
	DRAW_STRING_CURRENT_FONT(0,1f, 0,85f, "B: Delete actors", 1.0f, 1.0f, 1.0f, 1.0f);
	DRAW_STRING_CURRENT_FONT(0,25f, 0,85f, "X: Pose actors", 1.0f, 1.0f, 1.0f, 1.0f);
	if (Function_3(*iParam0, 32768))
	{
		DRAW_STRING_CURRENT_FONT(0,4f, 0,85f, "Dpad UP: Remove Filter", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,4f, 0,85f, "Dpad UP: Filter ANIMAL", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	if (Function_3(*iParam0, 16384))
	{
		DRAW_STRING_CURRENT_FONT(0,62f, 0,85f, "Dpad DOWN: Remove Filter", 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,62f, 0,85f, "Dpad DOWN: Filter VEHICLE", 1.0f, 1.0f, 1.0f, 1.0f);
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
	fVar5 = 1,8f;
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
					Function_190(bVar1016, fVar0, fVar1, &Var1020, 0,5f, 0,5f, 0,5f, 1.0f, fVar5, 1);
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
						Function_190(bVar1016, fVar0, fVar1, &Var1036, 0,5f, 0,5f, 0,5f, 1.0f, fVar5, 1);
					}
					bVar1016++;
				}
				iVar7++;
				fVar1 = (fVar1 + ((375.0f / IntToFloat(iParam2)) * (fVar5 / 1,5f)));
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

void Function_188(bool bParam0) //Position: 0x90A9 / 37033
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

void Function_189(bool bParam0, int iParam1, bool bParam2) //Position: 0x90E3 / 37091
{
	bool bVar0;
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

void Function_190(bool bParam0, float fParam1, float fParam2, char* cParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x913F / 37183
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = fParam1;
		Var0.f_4 = fParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

void Function_191(var uParam0, int iParam1, int iParam2) //Position: 0x91ED / 37357
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

int Function_192(int iParam0) //Position: 0x9285 / 37509
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_169()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_3(*iParam0, 0x40000000))
		{
			Function_4(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_3(*iParam0, 0x40000000))
		{
			Function_4(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_43(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_169()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_3(*iParam0, 0x20000000))
		{
			Function_4(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
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

var Function_193(var uParam0, int iParam1) //Position: 0x93D0 / 37840
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

var Function_194(var uParam0, int iParam1, int iParam2) //Position: 0x951F / 38175
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	iVar1 = 0;
	iVar1 = 0;
	while ((iVar0 > 1204 && iVar1 > *uParam0) && iVar0 >= iParam2)
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

void Function_195(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x957E / 38270
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

bool Function_196() //Position: 0x9611 / 38417
{
	return Global_34580;
}

void Function_197(int iParam0, bool bParam1) //Position: 0x961A / 38426
{
	if (Function_196())
	{
		if (IS_BUTTON_PRESSED(iParam0, bParam1, 1, 0))
		{
			Function_201(14, 2);
		}
	}
	else if (IS_BUTTON_PRESSED(iParam0, bParam1, 1, 0) && !Function_200())
	{
		Function_198();
	}
	return;
}

void Function_198() //Position: 0x964F / 38479
{
	GRINGO_DEBUG_CHECK_SOUND(0);
	Function_199(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0,5f);
	SET_HUD_MAP_DRAW_ENABLED(0);
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Global_34580 = 1;
	return;
}

void Function_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0x9674 / 38516
{
	struct<13> Var0;
	char* cVar13[16];
	
	strcpy(&cVar13, "DB_MENU_OVERLAY", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar13);
	if (!GUI_WINDOW_VALID(bVar4))
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
		bVar4 = GUI_MAKE_OVERLAY(Global_13043, &Var0, &cVar13, &Var5, &Var9, 0);
	}
}

bool Function_200() //Position: 0x96FC / 38652
{
	return Global_30920;
}

void Function_201(var uParam0, int iParam1) //Position: 0x9705 / 38661
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	Function_202(uParam0, iParam1);
	SET_HUD_MAP_DRAW_ENABLED(1);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	Global_34580 = 0;
	return;
}

void Function_202(int iParam0, int iParam1) //Position: 0x9722 / 38690
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

void Function_203() //Position: 0x9859 / 39001
{
	bool bVar0;
	
	bVar0 = GET_LATEST_CONSOLE_COMMAND();
	if (!IS_STRING_VALID(bVar0))
	{
		return;
	}
	if (Function_450(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_448(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_447(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_446(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_445(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_443(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_440(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_434(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_433(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_431(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_429(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_424(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_423(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_422(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_419(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_409(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
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
	if (Function_402(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_401(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
	}
	if (Function_400(bVar0))
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
	if (Function_397(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_395(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_391(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_390(bVar0))
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
	if (Function_366(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_365(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_364(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_363(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_362(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_361(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_360(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_359(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_357(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_354(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_350(bVar0))
	{
		RESET_LATEST_CONSOLE_COMMAND();
		return;
	}
	if (Function_349(bVar0))
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

bool Function_204(bool bParam0) //Position: 0x9B25 / 39717
{
	if (STRING_CONTAINS_STRING(bParam0, "playermeds"))
	{
		Function_205(3, 0, 1);
		return 1;
	}
	return 0;
}

int Function_205(bool bParam0, bool bParam1, int iParam2) //Position: 0x9B4A / 39754
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

var Function_206(bool bParam0) //Position: 0x9B95 / 39829
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

bool Function_207(bool bParam0) //Position: 0x9C86 / 40070
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

bool Function_208(bool bParam0) //Position: 0x9CFD / 40189
{
	if (STRING_CONTAINS_STRING(bParam0, "makeswim"))
	{
		DECOR_SET_BOOL(Global_34573, "swimming", true);
		return 1;
	}
	return 0;
}

bool Function_209(bool bParam0) //Position: 0x9D2C / 40236
{
	if (STRING_CONTAINS_STRING(bParam0, "regions_reset"))
	{
		Function_210(1, 0, 1);
		return 1;
	}
	return 0;
}

void Function_210(var uParam0, bool bParam1, int iParam2) //Position: 0x9D53 / 40275
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

bool Function_211(var uParam0, int iParam1) //Position: 0x9E5E / 40542
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_212(int iParam0) //Position: 0x9E7A / 40570
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

bool Function_213() //Position: 0x9EF9 / 40697
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
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

void Function_214(var uParam0, int iParam1) //Position: 0x9F56 / 40790
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_215(var uParam0, int iParam1) //Position: 0x9F6D / 40813
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_216(int iParam0) //Position: 0x9F7C / 40828
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_217(bool bParam0) //Position: 0x9F92 / 40850
{
	if (STRING_CONTAINS_STRING(bParam0, "stand_hostage"))
	{
		REQUEST_ANIM_SET("stand_hostage", 0);
		REQUEST_ACTION_TREE("custom/stand_hostage");
		while (!HAS_ANIM_SET_LOADED("stand_hostage") || !HAS_ACTION_TREE_LOADED("custom/stand_hostage"))
		{
			WAIT(false);
		}
		SET_ANIM_SET_FOR_ACTOR(Global_34573, "stand_hostage", 0);
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "stand_hostage/walk_pose");
		SET_REACT_NODE_FOR_ACTOR(Global_34573, "stand_hostage/injury/");
		return 1;
	}
	return 0;
}

bool Function_218(bool bParam0) //Position: 0xA074 / 41076
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

bool Function_219(bool bParam0) //Position: 0xA121 / 41249
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addnotor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(bVar0);
			Function_220(3, bVar1);
		}
		return 1;
	}
	return 0;
}

int Function_220(int iParam0, bool bParam1) //Position: 0xA15E / 41310
{
	bool bVar0;
	int iVar1;
	
	Function_225(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
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

int Function_221() //Position: 0xA2EA / 41706
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

void Function_222() //Position: 0xA389 / 41865
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

void Function_223(int iParam0) //Position: 0xA438 / 42040
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

var Function_224(int iParam0, int iParam1) //Position: 0xA496 / 42134
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

int Function_225(int iParam0, bool bParam1, int iParam2) //Position: 0xA4D7 / 42199
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

bool Function_226(bool bParam0) //Position: 0xA6E1 / 42721
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "addhonor"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = STRING_TO_FLOAT(bVar0);
			Function_220(1, bVar1);
		}
		return 1;
	}
	return 0;
}

bool Function_227(bool bParam0) //Position: 0xA718 / 42776
{
	bool bVar0;
	bool bVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "killRC"))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_6289);
		ITERATE_ON_OBJECT_TYPE(bVar0, 24);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		while (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar1)))
		{
			DESTROY_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
		return 1;
	}
	return 0;
}

bool Function_228(bool bParam0) //Position: 0xA76A / 42858
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

void Function_229(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xAC02 / 44034
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_348(12);
	Function_346(2);
	Function_344((15 - Function_345(105)));
	if (Function_343(bParam0) == 1)
	{
		iVar2 = Function_342(bParam0);
		Function_336(&(Global_3422[iVar240]));
		Function_142(4194304);
		if (bParam3)
		{
			Function_293(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_287(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_293(iVar2, &uVar0, 0);
		}
		bVar1 = Function_286();
		if (bParam1)
		{
			Function_274(iVar2, bParam0, bVar1);
			Function_273();
		}
	}
	Function_235(bParam0, bParam1, iParam2, bVar1);
	if (Function_343(bParam0) == 1)
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
		if (Function_343(bParam0) == 1)
		{
			iVar2 = Function_342(bParam0);
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

void Function_230() //Position: 0xACEF / 44271
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

int Function_231(int iParam0, bool bParam1) //Position: 0xAD1F / 44319
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

int Function_232(int iParam0) //Position: 0xAD5C / 44380
{
	if (!Function_233(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_233(int iParam0) //Position: 0xAD76 / 44406
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_234(int iParam0, bool bParam1) //Position: 0xAD8C / 44428
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

void Function_235(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB083 / 45187
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_145(bParam0))
	{
		Function_271();
		return;
	}
	iVar0 = Function_343(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_342(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_270(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_269(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_265();
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
		Function_263("DEED_COMPLETE", bParam0);
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
			Function_258(bParam0);
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
						switch (Function_342(bParam0))
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
			Function_236(bParam0, &Var14);
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

void Function_236(int iParam0, int iParam1) //Position: 0xB295 / 45717
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_237(bool bParam0, int iParam1) //Position: 0xB2CF / 45775
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_238(bool bParam0) //Position: 0xB311 / 45841
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

void Function_239() //Position: 0xB362 / 45922
{
	Function_250();
	Function_249();
	Function_249();
	Function_248();
	Function_248();
	Function_247();
	Function_247();
	Function_246();
	Function_246();
	if (!Function_177())
	{
		Function_244();
		Function_243();
		Function_242();
		Function_241();
	}
	Function_240();
	return;
}

void Function_240() //Position: 0xB395 / 45973
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

void Function_241() //Position: 0xB49B / 46235
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

void Function_242() //Position: 0xB4CE / 46286
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

void Function_243() //Position: 0xB65C / 46684
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

void Function_244() //Position: 0xB810 / 47120
{
	Function_245(&Global_28260, 1, 0);
	return;
}

void Function_245(int iParam0, bool bParam1, var uParam2) //Position: 0xB81E / 47134
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_169();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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

struct<8> Function_246() //Position: 0xBA0F / 47631
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
				iVar2 = ((Function_168((50 + iVar4)) + Function_168((183 + iVar4))) + Function_168((90 + iVar4)));
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

struct<8> Function_247() //Position: 0xBAAA / 47786
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

struct<8> Function_248() //Position: 0xBB33 / 47923
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

struct<8> Function_249() //Position: 0xBBCA / 48074
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

void Function_250() //Position: 0xBC49 / 48201
{
	Function_225(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_154(8, (GET_DAY(false) - 2), 0);
	return;
}

void Function_251() //Position: 0xBC6F / 48239
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_253(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_253(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_252(StackVal, StackVal, vVar0))
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

bool Function_252(vector3 vParam0) //Position: 0xBD10 / 48400
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_253(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBD28 / 48424
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
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
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_254();
	return StackVal, StackVal, Function_254();
}

vector3 Function_254() //Position: 0xBE0F / 48655
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_255(int iParam0) //Position: 0xBE18 / 48664
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_256(bool bParam0, bool bParam1) //Position: 0xBE2E / 48686
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
		fVar2 = Function_257(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
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

float Function_257(vector3 vParam0, vector3 vParam3) //Position: 0xBEF5 / 48885
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_258(bool bParam0) //Position: 0xBF12 / 48914
{
	int iVar0;
	int iVar1;
	
	if (!Function_147(bParam0))
	{
		return;
	}
	switch (Function_343(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_342(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_262(12, 1, 0, 0);
				Function_261(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_262(13, 1, 0, 0);
				Function_261(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_262(14, 1, 0, 0);
				Function_261(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_262(15, 1, 0, 0);
				Function_261(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_262(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_342(bParam0))
			{
				case 0x00000000:
					if (Function_260(bParam0) == 1)
					{
						iVar0 = Function_259(bParam0);
						if (Function_216(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_261(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_261(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_261(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_261(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_261(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_261(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_261(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_261(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_261(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_261(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_261(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_261(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_261(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_261(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_261(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_261(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_261(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_261(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_261(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_261(4, 19);
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
								Function_262(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_262(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_262(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_259(bParam0) == 0)
			{
				if (Function_260(bParam0) == 1)
				{
					Function_262(458, 1, 0, 0);
					iVar0 = Function_342(bParam0);
					if (Function_216(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_261(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_261(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_261(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_261(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_261(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_261(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_261(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_261(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_260(bParam0) == 1)
			{
				Function_262(400, 1, 0, 0);
			}
			switch (Function_342(bParam0))
			{
				case 0x00000001:
					Function_262(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_261(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_261(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_261(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_262(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_261(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_261(6, 9);
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

int Function_259(bool bParam0) //Position: 0xC3EE / 50158
{
	if (!Function_147(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_260(bool bParam0) //Position: 0xC40D / 50189
{
	if (!Function_147(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_261(int iParam0, bool bParam1) //Position: 0xC427 / 50215
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

int Function_262(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC48E / 50318
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

void Function_263(char* cParam0, bool bParam1) //Position: 0xC6AE / 50862
{
	struct<4> Var0;
	
	if (!Function_145(bParam1))
	{
		return;
	}
	switch (Function_343(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_264(Function_342(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_343(bParam1), Function_342(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_343(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_343(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_343(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_343(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_343(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_264(int iParam0) //Position: 0xC7D2 / 51154
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_265() //Position: 0xC7F7 / 51191
{
	int iVar0;
	int iVar1;
	
	if (!Function_233(Global_6269))
	{
		return;
	}
	iVar0 = Function_168(24);
	iVar1 = Function_232(Global_6269);
	if (!Function_233(iVar0) && Function_268(iVar1) < 0)
	{
		Function_154(24, Global_6269, 0);
		Function_266(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_268(Function_232(iVar0)))
	{
		Function_154(24, Global_6269, 0);
		Function_266(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_266(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xC877 / 51319
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
		Function_267(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_267(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xCBC9 / 52169
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

int Function_268(int iParam0) //Position: 0xCC4C / 52300
{
	if (!Function_145(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_269(int iParam0) //Position: 0xCC66 / 52326
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_270(char* cParam0) //Position: 0xCC90 / 52368
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

void Function_271() //Position: 0xCEE6 / 52966
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
			Function_272(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_272(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD12D / 53549
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_273() //Position: 0xD156 / 53590
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

void Function_274(int iParam0, int iParam1, bool bParam2) //Position: 0xD184 / 53636
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
	
	if (!Function_233(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_285(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_264(iParam0) };
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
					cVar10 = { StackVal, StackVal, StackVal, Function_264(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_165(49)) - Global_34165.f_124);
				bVar3 = (Function_168(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_264(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_168(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_264(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_264(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_284(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_275(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_269(iParam0) };
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

void Function_275(int iParam0, bool bParam1, bool bParam2) //Position: 0xD420 / 54304
{
	int iVar0;
	bool bVar1;
	
	if (Function_283(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_168(3);
	Function_280();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_279(3, bVar1);
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
		Function_262(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_164(3));
	iVar0 = Function_168(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_277(4, Function_278(Global_12976.f_156), 1);
				Function_276(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_277(4, Function_278(Global_12976.f_156), 1);
				Function_276(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_277(4, Function_278(Global_12976.f_156), 1);
				Function_276(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_277(4, Function_278(Global_12976.f_156), 1);
				Function_276(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_277(4, Function_278(Global_12976.f_156), 1);
				Function_276(Global_12976.f_152, Global_12976.f_156);
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

void Function_276(int iParam0, int iParam1) //Position: 0xD5E3 / 54755
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

int Function_277(int iParam0, char* cParam1, bool bParam2) //Position: 0xD841 / 55361
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
	Function_266(iParam0, cParam1, 0, 1);
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

var Function_278(int iParam0) //Position: 0xD9C6 / 55750
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

int Function_279(int iParam0, bool bParam1) //Position: 0xDA55 / 55893
{
	bool bVar0;
	int iVar1;
	
	Function_262(iParam0, bParam1, 0, 0);
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

void Function_280() //Position: 0xDBF2 / 56306
{
	Function_282(3, 0.0f);
	Function_281(3, 10000.0f);
	return;
}

int Function_281(int iParam0, int iParam1) //Position: 0xDC08 / 56328
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_282(int iParam0, int iParam1) //Position: 0xDC48 / 56392
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_283(int iParam0) //Position: 0xDC88 / 56456
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_284(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0xDC97 / 56471
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

int Function_285(int iParam0) //Position: 0xDE5F / 56927
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

var Function_286() //Position: 0xDEF4 / 57076
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_287(int iParam0) //Position: 0xDF19 / 57113
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
			Function_275(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_275(25, 1, 0);
			Function_292(1, 1);
			break;
		
		case 0x00000015:
			Function_292(50, 1);
			Function_275(250, 1, 0);
			Function_288(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_275(75, 1, 0);
			Function_288(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_275(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_292(50, 1);
			Function_275(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_292(5, 1);
			Function_288(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_275(75, 1, 0);
			Function_288(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_292(5, 1);
			Function_275(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_275(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_288(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_292(25, 1);
			Function_275(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_292(10, 1);
			Function_275(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_275(50, 1, 0);
			Function_288(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_275(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_275(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_288(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_292(20, 1);
			Function_275(75, 1, 0);
			Function_288(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_292(25, 1);
			Function_275(150, 1, 0);
			Function_288(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_292(10, 1);
			Function_275(150, 1, 0);
			Function_288(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_275(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_288(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_288(100, 1, 0);
			Function_292(5, 1);
			break;
		
		case 0x0000000F:
			Function_292(3, 1);
			Function_275(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_288(125, 1, 0);
			Function_275(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_292(50, 1);
			Function_275(100, 1, 0);
			Function_288(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_292(50, 1);
			Function_275(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_292(75, 1);
			Function_275(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_275(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_275(75, 1, 0);
			Function_288(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_275(250, 1, 0);
			Function_288(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_275(75, 1, 0);
			Function_288(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_275(200, 1, 0);
			Function_288(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_275(75, 1, 0);
			Function_288(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_275(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_292(50, 1);
			Function_275(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_292(100, 1);
			Function_275(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_275(200, 1, 0);
			Function_288(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_275(300, 1, 0);
			Function_288(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_275(300, 1, 0);
			Function_288(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_275(300, 1, 0);
			Function_288(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_275(500, 1, 0);
			Function_288(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_275(150, 1, 0);
			Function_288(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_288(25, 1, 0);
			Function_292(100, 1);
			break;
		
		case 0x0000002A:
			Function_275(150, 1, 0);
			Function_288(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_288(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_288(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_288(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_288(150, 1, 0);
			Function_292(100, 1);
			break;
		
		case 0x00000035:
			Function_288(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_288(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_288(150, 1, 0);
			Function_292(100, 1);
			break;
		
		case 0x00000032:
			Function_288(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_288(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_288(int iParam0, bool bParam1, bool bParam2) //Position: 0xE3D4 / 58324
{
	int iVar0;
	bool bVar1;
	
	if (Function_283(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
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
			Function_279(1, bVar1);
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
			Function_291(1, (4294967295 * bVar1));
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
		Function_262(1, bVar1, 0, 0);
	}
	else
	{
		Function_290(1, (4294967295 * bVar1), 0);
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
				Function_277(2, Function_289(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_277(2, Function_289(Global_12976.f_152), 0);
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
				Function_277(2, Function_289(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_277(2, Function_289(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_277(2, Function_289(Global_12976.f_152), 1);
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
				Function_277(2, Function_289(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_277(2, Function_289(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_277(2, Function_289(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_277(2, Function_289(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_277(2, Function_289(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_277(2, Function_289(Global_12976.f_152), 1);
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
				Function_277(2, Function_289(Global_12976.f_152), 0);
			}
			break;
	}
	Function_276(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_289(int iParam0) //Position: 0xE6E9 / 59113
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

int Function_290(int iParam0, bool bParam1, int iParam2) //Position: 0xE78C / 59276
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

int Function_291(int iParam0, bool bParam1) //Position: 0xE987 / 59783
{
	bool bVar0;
	int iVar1;
	
	Function_290(iParam0, bParam1, 0);
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

int Function_292(bool bParam0, bool bParam1) //Position: 0xEB23 / 60195
{
	bool bVar0;
	
	bVar0 = Function_168(0);
	if ((Function_168(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_262(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_168(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_262(597, bParam0, 0, 0);
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

void Function_293(int iParam0, var uParam1, bool bParam2) //Position: 0xEBEE / 60398
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
			Function_334(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_332(Global_30640[0]);
			Function_332(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_330(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_332(Global_30668[0]);
			Function_322(0);
			Function_320(2, 1);
			Function_320(0, 1);
			Function_320(1, 1);
			break;
		
		case 0x00000003:
			Function_332(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_332(Global_30668[0]);
			Function_332(Global_30640[0]);
			Function_318(0, 1);
			Function_318(15, 1);
			Function_318(9, 1);
			Function_318(12, 1);
			Function_318(16, 1);
			Function_320(3, 1);
			break;
		
		case 0x00000005:
			Function_332(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_330(21, bParam2, 4);
			Function_332(Global_30668[0]);
			Function_320(39, 1);
			break;
		
		case 0x00000007:
			Function_332(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_332(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_317(4))
					{
						Function_308(4, 0, 0, 1);
					}
				}
			}
			Function_332(Global_30640[0]);
			Function_332(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_332(Global_30640[0]);
			Function_332(Global_30668[2]);
			Function_215(&(Global_29008[Global_30668[2]]), 32768);
			Function_214(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_330(9, bParam2, 4);
			Function_332(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_332(Global_30640[0]);
			Function_332(Global_30658[0]);
			Function_215(&(Global_29008[Global_30658[0]]), 32768);
			Function_214(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_332(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_332(Global_30640[0]);
			Function_332(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_332(Global_30640[1]);
			Function_332(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_332(Global_30679[0]);
			Function_332(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_332(Global_30658[5]);
			Function_332(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_330(21, bParam2, 4);
			Function_332(Global_30640[4]);
			Function_332(Global_30658[4]);
			Function_307(&Global_76847, 0x2000000);
			Function_307(&Global_76847, 0x4000000);
			Function_307(&Global_76847, 4096);
			Function_307(&Global_76847, 8);
			Function_307(&Global_76847, 8388608);
			Function_307(&Global_76847, 524288);
			Function_307(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_332(Global_30640[4]);
			Function_332(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_214(&(Global_29008[Global_30640[4]]), 256);
			Function_332(Global_30640[4]);
			Function_332(Global_30658[0]);
			Function_215(&(Global_29008[Global_30658[0]]), 32768);
			Function_214(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_332(Global_30640[0]);
			Function_332(Global_30640[5]);
			Function_330(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_332(Global_30658[3]);
			Function_215(&(Global_29008[Global_30658[3]]), 32768);
			Function_214(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_330(9, bParam2, 4);
			Function_332(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_215(&(Global_29008[Global_30679[1]]), 32768);
			Function_332(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_330(12, bParam2, 4);
			Function_214(&(Global_29008[Global_30679[1]]), 256);
			Function_332(Global_30668[3]);
			Function_332(Global_30693[0]);
			Function_332(Global_30685[0]);
			Function_322(4);
			Function_318(13, 1);
			Function_318(1, 1);
			Function_318(18, 1);
			Function_320(34, 1);
			Function_320(44, 1);
			Function_320(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_330(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_332(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_332(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_332(Global_30693[0]);
			Function_332(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_332(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_332(Global_30685[0]);
			Function_332(Global_30693[0]);
			Function_332(Global_30693[1]);
			Function_332(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_330(23, bParam2, 3);
			Function_318(23, 1);
			Function_332(Global_30685[0]);
			Function_332(Global_30685[2]);
			Function_215(&(Global_29008[Global_30685[2]]), 32768);
			Function_214(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_330(19, bParam2, 4);
			Function_332(Global_30685[0]);
			Function_332(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_330(24, bParam2, 3);
			Function_318(24, 1);
			Function_332(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_332(Global_30685[0]);
			Function_332(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_332(Global_30693[12]);
			Function_332(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_332(Global_30693[12]);
			Function_332(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_330(25, bParam2, 10);
			Function_332(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_332(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_332(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_330(13, bParam2, 4);
			Function_332(Global_30693[2]);
			Function_332(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_317(8))
				{
					Function_308(8, 0, 0, 1);
				}
			}
			Function_332(Global_30685[0]);
			Function_322(9);
			Function_318(7, 1);
			Function_318(11, 1);
			Function_318(3, 1);
			Function_318(20, 1);
			Function_320(57, 1);
			break;
		
		case 0x0000002A:
			Function_330(2, bParam2, 4);
			Function_332(Global_30717[0]);
			Function_332(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_332(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_332(Global_30717[0]);
			Function_332(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_332(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_332(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_332(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_330(17, bParam2, 4);
			Function_332(Global_30723[0]);
			Function_332(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_305(15))
				{
					Function_300(15, 0, 1);
				}
			}
			Function_214(&(Global_29008[Global_30717[1]]), 256);
			Function_322(11);
			Function_332(Global_30717[1]);
			Function_332(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_332(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_332(Global_30717[1]);
			Function_332(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_332(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_332(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_332(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_332(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_332(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_332(Global_30717[1]);
			Function_294(11);
			Function_322(12);
			Global_16537[1121].f_40 = 0;
			Function_320(56, 1);
			if (!bParam2)
			{
				if (!Function_317(9))
				{
					Function_308(9, 0, 0, 0);
				}
				if (!Function_317(10))
				{
					Function_308(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_264(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_294(int iParam0) //Position: 0xF4DE / 62686
{
	bool bVar0;
	
	if (!Function_255(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_299(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_299(Global_16537[iParam021].f_72, 0);
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
			Function_295(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_295(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xF64D / 63053
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
		Function_297(Function_298(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_297(Function_298(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_297(StackVal);
				vVar1 = { StackVal, StackVal, Function_297(StackVal) };
				if (Function_296(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_296(vector3 vParam0, vector3 vParam3) //Position: 0xF753 / 63315
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_297(int iParam0) //Position: 0xF780 / 63360
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

var Function_298(vector3 vParam0) //Position: 0xF7D7 / 63447
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

void Function_299(bool bParam0, bool bParam1) //Position: 0xF825 / 63525
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

void Function_300(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF879 / 63609
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_304(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_305(bParam0))
	{
		if (!Function_317(bParam0))
		{
			Function_308(bParam0, 1, 0, 0);
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
		Function_262(457, 1, 0, 0);
		Function_303(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_302(0, 0, 1, 1))
			{
				Function_238(1);
				Function_237(1, 0);
			}
			else
			{
				Function_301();
			}
		}
	}
	return;
}

void Function_301() //Position: 0xFA17 / 64023
{
	return;
}

bool Function_302(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xFA1D / 64029
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

void Function_303(bool bParam0, int iParam1) //Position: 0xFAC1 / 64193
{
	if (!Function_304(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_304(int iParam0) //Position: 0xFB16 / 64278
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_305(int iParam0) //Position: 0xFB2C / 64300
{
	if (!Function_304(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_306(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_306(int iParam0, int iParam1) //Position: 0xFB7D / 64381
{
	int iVar0;
	
	if (!Function_304(iParam0))
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

void Function_307(var uParam0, int iParam1) //Position: 0xFBAA / 64426
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_308(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xFBB9 / 64441
{
	struct<8> Var0;
	
	if (!Function_304(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_175(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_317(bParam0))
	{
		Function_262(456, 1, 0, 0);
		Function_303(bParam0, 2);
		if (bParam2)
		{
			if (!Function_302(0, 0, 1, 1))
			{
				Function_238(1);
				Function_237(1, 5);
			}
			else
			{
				Function_301();
			}
		}
		Function_311(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_310() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_310() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_309(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_44(Global_76846, 2))
		{
			Function_38(Global_34573, 2, 1, 0);
		}
	}
}

void Function_309(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFD03 / 64771
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

bool Function_310() //Position: 0xFD4E / 64846
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_311(bool bParam0) //Position: 0xFD7B / 64891
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
			if (Function_315(bParam0, Function_316(bVar24)))
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
			if (Function_315(bParam0, Function_316(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_314(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_313(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_312(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_312(int iParam0) //Position: 0xFF2B / 65323
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_304(iParam0))
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

void Function_313(bool bParam0, bool bParam1) //Position: 0xFF82 / 65410
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

var Function_314(int iParam0) //Position: 0xFFA7 / 65447
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_304(iParam0))
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

bool Function_315(bool bParam0, int iParam1) //Position: 0x10000 / 65536
{
	int iVar0;
	
	if (!Function_304(bParam0))
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

int Function_316(bool bParam0) //Position: 0x1005F / 65631
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_317(int iParam0) //Position: 0x1006B / 65643
{
	if (!Function_304(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_306(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_318(int iParam0, int iParam1) //Position: 0x100BD / 65725
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_319(iParam0, iParam1);
	Function_38(Global_34573, 1, 4, 1);
	return 1;
}

int Function_319(int iParam0, int iParam1) //Position: 0x10130 / 65840
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_320(int iParam0, int iParam1) //Position: 0x1018C / 65932
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_321(iParam0, iParam1);
	Function_38(Global_34573, 1, 4, 1);
	return 1;
}

int Function_321(int iParam0, int iParam1) //Position: 0x101FD / 66045
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_322(int iParam0) //Position: 0x10257 / 66135
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_255(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_329(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_329(Global_16537[iParam021].f_72, 0);
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
			Function_262(468, 1, 0, 0);
			Function_261(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_309("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_295(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_308(14, 1, 0, 0);
				Function_323(14, 1, 0, 0, 0);
			}
			if (!Function_302(0, 0, 1, 1))
			{
				Function_238(1);
				Function_237(1, 6);
			}
			else
			{
				Function_301();
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
			Function_309("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_262(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_261(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_323(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x10503 / 66819
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_304(bParam0))
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
	if (!Function_306(bParam0, 2))
	{
		Function_262(456, 1, 0, 0);
		Function_303(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_309(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_315(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_303(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_302(0, 0, 1, 1))
			{
				Function_238(1);
				Function_237(1, 0);
			}
			else
			{
				Function_301();
			}
		}
		Function_311(bParam0);
		if (StackVal && !Function_3(((((!Function_310() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_3((((Function_310() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_44(Global_76846, 2))
		{
			Function_38(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_325();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_324(3, bParam1);
				break;
			
			case 0x00000005:
				Function_324(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_324(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_324(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_324(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_324(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_261(2, 24);
				break;
			
			case 0x00000003:
				Function_261(2, 25);
				break;
			
			case 0x0000000F:
				Function_261(2, 26);
				break;
			
			case 0x0000000D:
				Function_261(2, 27);
				break;
			
			case 0x0000000E:
				Function_261(2, 28);
				break;
			}
	}
}

void Function_324(int iParam0, bool bParam1) //Position: 0x10792 / 67474
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

void Function_325() //Position: 0x107F1 / 67569
{
	if (Function_304(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_328(Global_28180);
			Global_28180.f_8 = Function_326(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_328(Global_28180);
			Global_28180.f_8 = Function_326(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_326(int iParam0, int iParam1) //Position: 0x1086C / 67692
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
					if (Function_327(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_231(5, 0))
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
					if (Function_327(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_327(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_327(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_327(23) && iVar17)
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
					if (Function_327(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_327(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_327(27) && iVar18)
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
					if (Function_327(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_327(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_327(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_327(49) && iVar15)
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
					if (Function_327(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_231(6, 0) && Function_327(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_327(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_231(9, 0) && Function_327(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_327(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
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
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_327(int iParam0) //Position: 0x1145D / 70749
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_328(int iParam0) //Position: 0x11472 / 70770
{
	int iVar0;
	int iVar1;
	
	if (!Function_304(iParam0))
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

void Function_329(bool bParam0, bool bParam1) //Position: 0x114C1 / 70849
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

void Function_330(bool bParam0, bool bParam1, int iParam2) //Position: 0x11512 / 70930
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_331(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_334(bParam0, 0, 0);
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

bool Function_331(int iParam0, int iParam1) //Position: 0x11580 / 71040
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_332(int iParam0) //Position: 0x11593 / 71059
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
		Function_262(473, 1, 0, 0);
		iVar0 = Function_333(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_262(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_262(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_262(476, 1, 0, 0);
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
		Function_261(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_261(7, 30);
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

int Function_333(int iParam0) //Position: 0x11692 / 71314
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

int Function_334(bool bParam0, bool bParam1, int iParam2) //Position: 0x116EA / 71402
{
	if (!Function_335(bParam0))
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

bool Function_335(int iParam0) //Position: 0x11741 / 71489
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_336(int iParam0) //Position: 0x11753 / 71507
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
			Function_337(4, 0, 0);
		}
	}
	return;
}

void Function_337(bool bParam0, bool bParam1, bool bParam2) //Position: 0x117BA / 71610
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
		Function_338(Global_16524, bVar0, 1);
	}
	return;
}

void Function_338(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11897 / 71831
{
	int iVar0;
	
	Function_341(bParam0);
	Function_340(bParam1);
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
	Function_339();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_339() //Position: 0x11A10 / 72208
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_340(bool bParam0) //Position: 0x11A1C / 72220
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

void Function_341(int iParam0) //Position: 0x11A62 / 72290
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

int Function_342(bool bParam0) //Position: 0x11AA8 / 72360
{
	if (!Function_147(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_343(bool bParam0) //Position: 0x11AC8 / 72392
{
	if (!Function_147(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_344(int iParam0) //Position: 0x11AE3 / 72419
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_345(105)), 0);
	return;
}

int Function_345(int iParam0) //Position: 0x11B04 / 72452
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_346(bool bParam0) //Position: 0x11B1A / 72474
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_340(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_340(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_340(Global_12976.f_24);
	PRINTNL();
	Function_347(bParam0);
	return;
}

void Function_347(int iParam0) //Position: 0x11BB6 / 72630
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_345(90)), 0);
	return;
}

void Function_348(bool bParam0) //Position: 0x11BD7 / 72663
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

bool Function_349(bool bParam0) //Position: 0x11BF2 / 72690
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

bool Function_350(bool bParam0) //Position: 0x11E66 / 73318
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
					Function_353();
					SAVE_SOFT_SAVE(0);
					PRINTSTRING("SAVED GAME TO SOFT SLOT 1 (index 0)");
					PRINTNL();
					LOG_ERROR("GAME SAVED!");
					return 1;
				}
				if (STRING_CONTAINS_STRING(&cVar1, "SOFT_SAVE2"))
				{
					Function_353();
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
		Function_353();
		if (Function_351(bVar0))
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

bool Function_351(bool bParam0) //Position: 0x12059 / 73817
{
	if (bParam0 != 4)
	{
		if (Function_352("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
	}
	Function_239();
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

bool Function_352(bool bParam0) //Position: 0x120A5 / 73893
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_353() //Position: 0x120C4 / 73924
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

bool Function_354(bool bParam0) //Position: 0x12157 / 74071
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
					Function_356();
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
		Function_355(bVar0);
		return 1;
	}
	return 0;
}

int Function_355(bool bParam0) //Position: 0x12271 / 74353
{
	if (bParam0 != 4)
	{
		if (Function_352("xmlsave"))
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

var Function_356() //Position: 0x122B4 / 74420
{
	NET_LOG(true, "SaveLoad", "Multiplayer Load Called", 0, 0, false, 0);
	return SAVE_MANAGER_HARD_LOAD(SS_GET_STRING(3, 5));
}

bool Function_357(int iParam0) //Position: 0x122EF / 74479
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
	bool bVar23;
	bool bVar24;
	bool bVar25;
	vector3 vVar26;
	vector3 vVar29;
	
	iParam0 = iParam0;
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_358(cVar0, "streamanddropactorlineup"))
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
			bVar23 = GET_ACTORENUM_FROM_STRING(cVar22);
			bVar24 = bVar23;
			if (bVar24 == 4294967295)
			{
				LOG_ERROR("Invalid actor enum given to streamanddropactorlineup");
				return 1;
			}
			STREAMING_REQUEST_ACTOR(bVar24, true, false);
			while (!STREAMING_IS_ACTOR_LOADED(bVar24, 4294967295))
			{
				WAIT(false);
			}
			bVar25 = GET_PLAYER_ACTOR(0);
			GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar25), &Var3);
			GET_POSITION(bVar25, &uVar6);
			vVar26 = { IntToFloat((iVar2 + (2 * (iVar1 - 1)))), 0.0f, 0.0f };
			vVar29 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar12, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar29, 80.0f, &vVar15, &uVar18);
			bVar21 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_174(), bVar23, vVar15, (0.0f + 180.0f), 0.0f);
			TASK_STAND_STILL(bVar21, -1.0f, 0, 0);
			STREAMING_EVICT_ACTOR(bVar24, 4294967295);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

bool Function_358(char* cParam0, char* cParam1) //Position: 0x12446 / 74822
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

bool Function_359(char* cParam0) //Position: 0x12471 / 74865
{
	char* cVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	bool bVar19;
	
	cVar0 = GET_CONSOLE_COMMAND_TOKEN(0);
	if (Function_358(cVar0, "streamanddropactor"))
	{
		cParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		bVar1 = GET_ACTORENUM_FROM_STRING(cParam0);
		bVar2 = bVar1;
		if (bVar2 == 4294967295)
		{
			LOG_ERROR("Invalid actor enum given to streamanddropactor");
			return 1;
		}
		STREAMING_REQUEST_ACTOR(bVar2, true, false);
		while (!STREAMING_IS_ACTOR_LOADED(bVar2, 4294967295))
		{
			WAIT(false);
		}
		bVar3 = GET_PLAYER_ACTOR(0);
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar3), &Var4);
		GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar7);
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar10);
		VSCALE(&vVar7, -7.0f);
		vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar7, vVar10, StackVal) };
		FIND_GROUND_INTERSECTION(&vVar10, 80.0f, &vVar13, &uVar16);
		bVar19 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_GC_LAYOUT(), Function_174(), bVar1, vVar13, (0.0f + 180.0f), 0.0f);
		TASK_STAND_STILL(bVar19, -1.0f, 0, 0);
		STREAMING_EVICT_ACTOR(bVar2, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_360(bool bParam0) //Position: 0x12574 / 75124
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

bool Function_361(bool bParam0) //Position: 0x125A1 / 75169
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

bool Function_362(bool bParam0) //Position: 0x125EB / 75243
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "decor"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (STRING_LENGTH(bVar0) >= 0)
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), bVar0, true);
		}
		return 1;
	}
	return 0;
}

bool Function_363(bool bParam0) //Position: 0x1261E / 75294
{
	if (STRING_CONTAINS_STRING(bParam0, "fudgeaa"))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("VHC_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TES_AA_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		else if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("TUM_FTE_Layout")))
		{
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "Player_FudgeAA", true);
		}
		return 1;
	}
	return 0;
}

bool Function_364(bool bParam0) //Position: 0x126D9 / 75481
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

bool Function_365(bool bParam0) //Position: 0x1273D / 75581
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

bool Function_366(bool bParam0) //Position: 0x127F4 / 75764
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
		CREATE_GRINGO_ON_OBJECT(bVar11, Function_174(), "$/content/scripting/gringo/SimpleGringo/Player_Lockpick_Footlocker", -0,3f, 0,1f, -0,3f, Function_254());
		return 1;
	}
	return 0;
}

bool Function_367(bool bParam0) //Position: 0x1290D / 76045
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
		SNAP_ACTOR_TO_GRINGO(bVar9, bVar12, "UseCase1", true, 0, 0);
		if (!IS_ACTOR_VALID(bVar9))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

bool Function_368(bool bParam0) //Position: 0x12A08 / 76296
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "bullriding"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_bullriding", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_369(bool bParam0) //Position: 0x12A5C / 76380
{
	char* cVar0[32];
	char* cVar8[24];
	
	if (STRING_CONTAINS_STRING(bParam0, "playsong"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			strcpy(&cVar0, GET_CONSOLE_COMMAND_TOKEN(1), 32);
			strcpy(&cVar8, GET_CONSOLE_COMMAND_TOKEN(2), 24);
			AUDIO_MUSIC_FORCE_TRACK(&cVar0, &cVar8, 0, 4294967295, 4294967295, 3212836864, 0);
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

bool Function_370(bool bParam0) //Position: 0x12B06 / 76550
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

bool Function_371(bool bParam0) //Position: 0x12B7B / 76667
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

bool Function_372(bool bParam0) //Position: 0x12C60 / 76896
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

bool Function_373(bool bParam0) //Position: 0x13025 / 77861
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
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, false, 1, 1);
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
							Function_375(&Global_26303, Function_388(), 4294967294, 0, 0, 1);
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
						GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), bVar68, false, 1, 1);
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
						Function_292(ABS(bVar75), 1);
					}
					else
					{
						Function_374(ABS(bVar75), 1);
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

int Function_374(bool bParam0, bool bParam1) //Position: 0x136D1 / 79569
{
	bool bVar0;
	
	bVar0 = Function_168(0);
	if ((Function_168(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_290(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_168(0));
	return 1;
}

int Function_375(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x13761 / 79713
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_387())
	{
		return 0;
	}
	uParam0->f_16 = Function_386(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_388();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_385(&Var96, iVar1) == 1)
		{
			if (Function_384(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 >= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_383(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_382(iVar1))
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
		if (Function_385(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_376(uParam0, iParam4, 80, 20000, uParam0->f_12);
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

var Function_376(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x139CB / 80331
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_377(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
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

var Function_377(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x13A56 / 80470
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
	bool bVar601;
	bool bVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	bVar303 = 1,001638E+07.0f;
	bVar601 = false;
	bVar602 = false;
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
	iVar295 = Function_384(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_381(StackVal);
		vVar296 = { StackVal, StackVal, Function_381(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_384(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_211(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
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
				iVar1[bVar601] = iVar598;
				bVar304[bVar601] = bVar302;
				bVar601++;
				if (Function_260(Function_149(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[bVar602] = iVar598;
					bVar451[bVar602] = bVar302;
					bVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (bVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_380(&iVar1, &bVar304, bVar601);
		Function_380(&iVar148, &bVar451, bVar602);
	}
	if (bVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_161(3, bVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_161(5, bVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_161(7, bVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_161(10, bVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_161(5, bVar602);
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
			iVar0 = Function_379();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_378(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_381(StackVal);
		vVar296 = { StackVal, StackVal, Function_381(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (bVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_161(3, bVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_161(5, bVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_161(7, bVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_161(10, bVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_161(5, bVar601);
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
			iVar0 = Function_379();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_378(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_381(StackVal);
		vVar296 = { StackVal, StackVal, Function_381(StackVal) };
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

struct<32> Function_378(int iParam0) //Position: 0x1412D / 82221
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

int Function_379() //Position: 0x141EA / 82410
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

void Function_380(int iParam0, bool bParam1, int iParam2) //Position: 0x14218 / 82456
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

vector3 Function_381(bool bParam0) //Position: 0x142A6 / 82598
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_382(bool bParam0) //Position: 0x142B7 / 82615
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

int Function_383(bool bParam0) //Position: 0x14309 / 82697
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam0);
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

int Function_384(int iParam0) //Position: 0x143B8 / 82872
{
	return Function_333(iParam0);
}

bool Function_385(var uParam0, int iParam1) //Position: 0x143C3 / 82883
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

var Function_386(int iParam0) //Position: 0x14B36 / 84790
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

bool Function_387() //Position: 0x14C04 / 84996
{
	return Function_3(StackVal, 1);
}

int Function_388() //Position: 0x14C13 / 85011
{
	int iVar0;
	
	iVar0 = Function_389(0);
	return iVar0;
}

var Function_389(int iParam0) //Position: 0x14C21 / 85025
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

bool Function_390(bool bParam0) //Position: 0x14CA5 / 85157
{
	var uVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "horsebreaking"))
	{
		LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/JobSystem/Job_HorseBreaking", &uVar0, 10, 0);
		return 1;
	}
	return 0;
}

bool Function_391(bool bParam0) //Position: 0x14CFF / 85247
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
		bVar15 = Function_392(StackVal, StackVal, StackVal, bVar18, Function_174(), 1118, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		bVar16 = Function_392(StackVal, StackVal, StackVal, bVar18, Function_174(), 1087, vVar12, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar17));
		if (!IS_ACTOR_VALID(bVar15) || !IS_ACTOR_VALID(bVar16))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		return 1;
	}
	return 0;
}

var Function_392(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x14DE2 / 85474
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_393(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

void Function_393(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x14E2D / 85549
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_394(&vVar0, uParam2))
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

bool Function_394(int iParam0, int iParam1) //Position: 0x14F55 / 85845
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_252(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_252(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_395(bool bParam0) //Position: 0x14FC0 / 85952
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (STRING_CONTAINS_STRING(bParam0, "nbattleset"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		REQUEST_ASSET(bParam0, 7);
		bVar0 = GET_ASSET_ID(bParam0, 7);
		STREAMING_REQUEST_PROPSET(bVar0);
		while (!STREAMING_IS_PROPSET_LOADED(bVar0))
		{
			WAIT(false);
		}
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar1);
		GET_ACTOR_AXIS(GET_PLAYER_ACTOR(0), &vVar7, 2);
		vVar10 = { StackVal, StackVal, vVar7 };
		VNORMALIZE(&vVar10);
		VSCALE(&vVar10, -20.0f);
		vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar10, vVar1, StackVal) };
		GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), &vVar4);
		Function_396(StackVal, StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_174(), bParam0, vVar1, vVar4, 4294967295);
		STREAMING_EVICT_PROPSET(bVar0);
		return 1;
	}
	return 0;
}

var Function_396(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x15066 / 86118
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, cParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
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
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), true);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

bool Function_397(bool bParam0) //Position: 0x151AF / 86447
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

bool Function_398(bool bParam0) //Position: 0x151EE / 86510
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

bool Function_399(bool bParam0) //Position: 0x15474 / 87156
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
		bVar12 = Function_392(StackVal, StackVal, StackVal, bVar25, &Var17, iVar15, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
		if (!IS_ACTOR_VALID(bVar12))
		{
			SCRIPT_BREAKPOINT("Invalid guy");
		}
		if (STRINGS_ARE_EQUAL(bVar16, "knife"))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(bVar12);
			GIVE_WEAPON_TO_ACTOR(bVar12, 22, false, 1, 1);
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
			bVar13 = Function_392(StackVal, StackVal, StackVal, bVar25, &Var17, 976, vVar9, (0.0f + 180.0f), 0.0f, GET_OBJECT_FROM_ACTOR(bVar14));
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

bool Function_400(int iParam0) //Position: 0x1560D / 87565
{
	iParam0 = iParam0;
	return 0;
}

bool Function_401(bool bParam0) //Position: 0x15618 / 87576
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
						Function_332(iVar2);
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
							Function_332(iVar2);
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

bool Function_402(bool bParam0) //Position: 0x156A7 / 87719
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (STRING_CONTAINS_STRING(bParam0, "updatestat"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			bVar1 = GET_CONSOLE_COMMAND_TOKEN(2);
			iVar3 = STRING_TO_INT(bVar0);
			bVar4 = STRING_TO_FLOAT(bVar1);
			if (iVar3 < 4294967295 && iVar3 >= 696)
			{
				if (bVar4 < 0.0f)
				{
					iVar2 = iVar3;
					Function_220(iVar2, bVar4);
				}
				else
				{
					iVar2 = iVar3;
					Function_403(iVar2, FABS(bVar4));
				}
			}
		}
		return 1;
	}
	return 0;
}

int Function_403(int iParam0, bool bParam1) //Position: 0x15719 / 87833
{
	bool bVar0;
	int iVar1;
	
	Function_404(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_DECREASE: fDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
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

int Function_404(int iParam0, bool bParam1, int iParam2) //Position: 0x158A5 / 88229
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
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_DECREASE_NOW: fDecreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
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

bool Function_405(bool bParam0) //Position: 0x15A90 / 88720
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

bool Function_406(bool bParam0) //Position: 0x15B16 / 88854
{
	if (STRING_CONTAINS_STRING(bParam0, "regiontest"))
	{
		Global_62479 = 1;
		return 1;
	}
	return 0;
}

bool Function_407(bool bParam0) //Position: 0x15B38 / 88888
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

bool Function_408(bool bParam0) //Position: 0x15B9F / 88991
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

bool Function_409(bool bParam0) //Position: 0x15C12 / 89106
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	if (STRING_CONTAINS_STRING(bParam0, "crime"))
	{
		bVar3 = Global_26118;
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 0)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			if (STRING_CONTAINS_STRING(bVar0, "new"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(bVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(bVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(bVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(bVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_410(1, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(bVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "report"))
			{
				bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(bVar1))
				{
					ITERATE_EVERYWHERE(bVar1);
					ITERATE_ON_OBJECT_TYPE(bVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(bVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (!GET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2)) != 3)
							{
								SET_CRIME_WITNESSED(GET_CRIME_FROM_OBJECT(bVar2), 3);
								DESTROY_ITERATOR(bVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
						}
					}
				}
				DESTROY_ITERATOR(bVar1);
			}
			else if (STRING_CONTAINS_STRING(bVar0, "upgrade"))
			{
				GET_POSITION(GET_PLAYER_ACTOR(0), &vVar4);
				ITERATE_IN_SPHERE(bVar3, vVar4, 15.0f);
				ITERATE_ON_OBJECT_TYPE(bVar3, 15);
				if (GET_NUM_ITERATOR_MATCHES(bVar3) < 0 && IS_LAYOUTREF_VALID(Global_26314))
				{
					bVar7 = START_OBJECT_ITERATOR(bVar3);
					if (IS_OBJECT_VALID(bVar7))
					{
						Function_410(2, 0, GET_PLAYER_ACTOR(0), bVar7, 0);
						GET_OBJECT_POSITION(bVar7, &vVar4);
						PRINTSTRING(GET_SHORT_SCRIPT_NAME());
						PRINTSTRING(": New Console Crime!");
						PRINTVECTOR(vVar4);
						PRINTNL();
					}
				}
				else if (GET_NUM_ITERATOR_MATCHES(bVar3) == 0)
				{
				}
				else if (!IS_LAYOUTREF_VALID(Global_26314))
				{
				}
			}
			else if (STRING_CONTAINS_STRING(bVar0, "finish"))
			{
				bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
				if (IS_ITERATOR_VALID(bVar1))
				{
					ITERATE_EVERYWHERE(bVar1);
					ITERATE_ON_OBJECT_TYPE(bVar1, 31);
					if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
					{
						bVar2 = START_OBJECT_ITERATOR(bVar1);
						while (IS_OBJECT_VALID(bVar2))
						{
							if (IS_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2)))
							{
								SET_CRIME_IN_PROGRESS(GET_CRIME_FROM_OBJECT(bVar2), 0);
								DESTROY_ITERATOR(bVar1);
								return 1;
							}
							bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
						}
					}
				}
				DESTROY_ITERATOR(bVar1);
			}
		}
		return 1;
	}
	return 0;
}

var Function_410(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x15E8B / 89739
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_418(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_417(iParam1))
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
	if (!Function_413(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_174(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_411();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_411() //Position: 0x1611B / 90395
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_412(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_412(bool bParam0, bool bParam1) //Position: 0x1617E / 90494
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_413(bool bParam0) //Position: 0x161AD / 90541
{
	if (Function_416(256))
	{
		return 0;
	}
	if (Function_416(262144))
	{
		return 0;
	}
	if (Function_415())
	{
		return 0;
	}
	if (!Function_416(1))
	{
		return 0;
	}
	if (!Function_416(4096))
	{
		return 0;
	}
	if (bParam0 && Function_414(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_416(2048))
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

int Function_414(int iParam0) //Position: 0x16223 / 90659
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_415() //Position: 0x16234 / 90676
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

bool Function_416(int iParam0) //Position: 0x1624D / 90701
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_417(int iParam0) //Position: 0x1626B / 90731
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_418(int iParam0) //Position: 0x16281 / 90753
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_419(bool bParam0) //Position: 0x16296 / 90774
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
			Function_420(iVar2, FLOOR(STRING_TO_FLOAT(bVar1)), 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void Function_420(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1634B / 90955
{
	int iVar0;
	bool bVar1;
	
	Function_341(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_421(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_338(StackVal, bVar1, bParam4);
		}
	}
}

void Function_421(int iParam0, int iParam1) //Position: 0x163BD / 91069
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_341(iParam0);
	Function_340(iVar0);
	PRINTNL();
	Function_338(iParam0, iVar0, iParam1);
	return;
}

bool Function_422(bool bParam0) //Position: 0x163E2 / 91106
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

bool Function_423(bool bParam0) //Position: 0x16446 / 91206
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

bool Function_424(bool bParam0) //Position: 0x16483 / 91267
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
			Function_428(1.0f, 0.0f, 1.0f);
			Function_426(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2));
		}
		else if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar3 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar4 = Function_425(bVar3);
			if (Function_216(iVar4))
			{
				GET_OBJECT_POSITION(StackVal, &vVar5);
				Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_378(iVar4) };
				Function_426(StackVal, StackVal, vVar5);
			}
		}
		return 1;
	}
	return 0;
}

var Function_425(bool bParam0) //Position: 0x16520 / 91424
{
	int iVar0;
	bool bVar1;
	bool bVar2;
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
		bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
		if (IS_ITERATOR_VALID(bVar2))
		{
			bVar3 = START_OBJECT_ITERATOR(bVar2);
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
				bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
			}
			DESTROY_ITERATOR(bVar2);
		}
	}
	return 4294967295;
}

void Function_426(vector3 vParam0) //Position: 0x165D9 / 91609
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
		Function_427(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_427(bool bParam0) //Position: 0x16660 / 91744
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

void Function_428(var uParam0, var uParam1, int iParam2) //Position: 0x166A0 / 91808
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = iParam2;
	return;
}

bool Function_429(bool bParam0) //Position: 0x166C1 / 91841
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
			Function_430(STRING_TO_FLOAT(bVar0), STRING_TO_FLOAT(bVar1), STRING_TO_FLOAT(bVar2), "TELEPORTING...", "", 1, 1);
		}
		return 1;
	}
	return 0;
}

void Function_430(vector3 vParam0, char* cParam3, char* cParam4, var uParam5, var uParam6) //Position: 0x16721 / 91937
{
	Global_13112.f_72 = 4294967295;
	Global_13112 = { StackVal, StackVal, vParam0 };
	strcpy(&Global_13112 + 24, cParam3, 24);
	strcpy(&Global_13112 + 48, cParam4, 24);
	Global_13112.f_76 = uParam5;
	Global_13112.f_80 = uParam6;
}

bool Function_431(bool bParam0) //Position: 0x16758 / 91992
{
	char* cVar0;
	int iVar1;
	var uVar2;
	
	if (STRING_CONTAINS_STRING(bParam0, "nvteleport"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			cVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
			iVar1 = Function_425(cVar0);
			if (Function_216(iVar1))
			{
				memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_378(iVar1), 4);
				Function_432(iVar1, "Teleporting to %s...", &uVar2, 1, 1);
			}
		}
		return 1;
	}
	return 0;
}

void Function_432(var uParam0, char* cParam1, char* cParam2, var uParam3, var uParam4) //Position: 0x167BF / 92095
{
	Global_13112.f_72 = uParam0;
	Global_13112 = { 0.0f, 0.0f, 0.0f };
	strcpy(&Global_13112 + 24, cParam1, 24);
	strcpy(&Global_13112 + 48, cParam2, 24);
	Global_13112.f_76 = uParam3;
	Global_13112.f_80 = uParam4;
}

bool Function_433(bool bParam0) //Position: 0x167F6 / 92150
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

bool Function_434(bool bParam0) //Position: 0x16855 / 92245
{
	bool bVar0;
	
	if (STRING_CONTAINS_STRING(bParam0, "toggle"))
	{
		bVar0 = GET_CONSOLE_COMMAND_TOKEN(1);
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 2)
		{
			if (STRINGS_ARE_EQUAL(bVar0, "channel"))
			{
				return Function_439();
			}
			if (STRINGS_ARE_EQUAL(bVar0, "flag"))
			{
				return Function_435();
			}
			return 0;
		}
	}
	return 0;
}

int Function_435() //Position: 0x168AE / 92334
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
			Function_438(4);
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
			Function_438(1);
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
			Function_438(32);
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
			Function_438(64);
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
			Function_438(128);
		}
	}
	else if (STRINGS_ARE_EQUAL(bVar0, "law"))
	{
		if (!Function_416(256))
		{
			Function_437(256);
		}
		else
		{
			Function_436(256);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_436(int iParam0) //Position: 0x16A0B / 92683
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_437(int iParam0) //Position: 0x16A28 / 92712
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_438(int iParam0) //Position: 0x16A3B / 92731
{
	if (Function_3(iParam0, 1) && !Function_3(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

int Function_439() //Position: 0x16A68 / 92776
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

bool Function_440(bool bParam0) //Position: 0x16BD5 / 93141
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
			bVar0 = Function_442(iVar1, bParam0);
			if (DOES_SCRIPT_EXIST(bVar0))
			{
				vVar56 = { 0.0f, 0.0f, -95.0f };
				bVar59 = GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0));
				GET_OBJECT_RELATIVE_POSITION(bVar59, vVar56, &vVar53);
				if (!Function_441(&vVar53, 50.0f, &iVar2 + 8, 4294967295))
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

bool Function_441(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x16D0B / 93451
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
		if (!Function_252(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0,01f);
		iParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_252(StackVal, StackVal, *iParam2))
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

var Function_442(char* cParam0, bool bParam1) //Position: 0x16E3D / 93757
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

bool Function_443(bool bParam0) //Position: 0x16E71 / 93809
{
	bool bVar0;
	int iVar1;
	
	if (STRING_CONTAINS_STRING(bParam0, "end"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_444(iVar1, bParam0);
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

var Function_444(char* cParam0, bool bParam1) //Position: 0x16F4B / 94027
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

bool Function_445(bool bParam0) //Position: 0x1705D / 94301
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	
	if (STRING_CONTAINS_STRING(bParam0, "start"))
	{
		bParam0 = GET_CONSOLE_COMMAND_TOKEN(1);
		while (iVar1 < 6)
		{
			bVar0 = Function_444(iVar1, bParam0);
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

bool Function_446(bool bParam0) //Position: 0x171ED / 94701
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
				bVar0 = Function_444(iVar1, bParam0);
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

bool Function_447(bool bParam0) //Position: 0x17394 / 95124
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
				bVar0 = Function_444(iVar2, bParam0);
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

bool Function_448(bool bParam0) //Position: 0x17634 / 95796
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (STRING_CONTAINS_STRING(bParam0, "switchentity"))
	{
		if (GET_NUM_CONSOLE_COMMAND_TOKENS() >= 1)
		{
			bVar0 = GET_CONSOLE_COMMAND_TOKEN(2);
			bVar1 = GET_ACTOR_ENUM_FROM_STRING(bVar0);
			if (Function_449(bVar1))
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
				if (bVar2 > GET_ACTOR_ENUM_VARIATION_COUNT(bVar1))
				{
					PRINTSTRING("variation ");
					PRINTINT(bVar2);
					PRINTSTRING("is out of range (");
					PRINTINT(GET_ACTOR_ENUM_VARIATION_COUNT(bVar1));
					PRINTSTRING(")");
					PRINTNL();
					bVar2 = 4294967295;
				}
				else
				{
					SWITCH_PLAYER_TO_ENUM(bVar1, bVar2);
				}
			}
		}
		return 1;
	}
	return 0;
}

bool Function_449(int iParam0) //Position: 0x176E2 / 95970
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_450(bool bParam0) //Position: 0x176F9 / 95993
{
	if (STRING_CONTAINS_STRING(bParam0, "givecontrolback"))
	{
		SET_PLAYER_CONTROL(0, 1, 1, 1);
		return 1;
	}
	return 0;
}

int Function_451() //Position: 0x17723 / 96035
{
	bool bVar0;
	bool bVar1;
	
	if (NET_IS_IN_SESSION() && !NET_IS_SESSION_HOST())
	{
		return 0;
	}
	while (IS_OBJECT_VALID(OBJECT_ITERATOR_CURRENT(bLocal_13)))
	{
		bVar0 = OBJECT_ITERATOR_CURRENT(bLocal_13);
		if (GET_OBJECT_TYPE(bVar0) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_PLAYER(bVar1))
				{
					Function_472(bVar1, bLocal_13);
				}
				else
				{
					Function_452(bVar1, bLocal_13);
				}
			}
		}
		OBJECT_ITERATOR_NEXT(bLocal_13);
		return 0;
	}
	CLEAN_OBJECTSET(Global_16515);
	START_OBJECT_ITERATOR(bLocal_13);
	return 0;
}

void Function_452(bool bParam0, bool bParam1) //Position: 0x17792 / 96146
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar0 = Function_471(bParam0);
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
				Function_470(bParam0, bVar7);
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
	bVar9 = Function_453(StackVal, StackVal, vVar1, 30.0f, bParam0, bParam1);
	if (IS_ACTOR_VALID(bVar9) && IS_ACTOR_VALID(bParam0))
	{
		Function_470(bParam0, bVar9);
		SET_MOST_RECENT_MOUNT(bParam0, bVar9);
	}
	return;
}

var Function_453(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4, bool bParam5) //Position: 0x178B0 / 96432
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar5;
	var uVar6;
	vector3 vVar9;
	
	bVar0 = Function_468(GET_GC_LAYOUT(), &uParam0, fParam3);
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
		bVar5 = Function_454(&uParam0, &vVar1, &uVar4);
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
				if (OBJECT_ITERATOR_CURRENT(bParam5) == GET_OBJECT_FROM_ACTOR(bParam4))
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

int Function_454(var uParam0, var uParam1, Vector3 vParam2) //Position: 0x17A43 / 96835
{
	var uVar0;
	struct<11> Var3;
	struct<15> Var14;
	
	Function_465(&uVar0);
	*vParam2.x = *vParam2.x;
	Function_464(StackVal, StackVal, &Var3, 0, *uParam0, 0.0f, 0.0f, 50.0f, 250.0f, 0x40a00000, 0);
	Function_463(&Var14, 1, 2,5f, 0, 512);
	Function_462(&Var14, 10.0f);
	Function_455(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3, Var14);
	*uParam1 = { StackVal, StackVal, Function_455(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3, Var14) };
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

vector3 Function_455(struct<37> Param0) //Position: 0x17AED / 97005
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
	Function_461(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_459();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_458(Param0.f_20);
	Function_457(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_456(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
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

void Function_456(struct<33> Param0) //Position: 0x17C1F / 97311
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
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_457(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x17D4B / 97611
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

void Function_458(bool bParam0) //Position: 0x17D9C / 97692
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

void Function_459() //Position: 0x17E4F / 97871
{
	float fVar0;
	bool bVar1;
	
	Function_460(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_460(var uParam0, int iParam1) //Position: 0x17E63 / 97891
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

void Function_461(bool bParam0) //Position: 0x17EEC / 98028
{
	if (bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
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

void Function_462(var uParam0, int iParam1) //Position: 0x17F30 / 98096
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_463(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x17F3C / 98108
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

void Function_464(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x17F65 / 98149
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

void Function_465(int iParam0) //Position: 0x17FA1 / 98209
{
	if (!Function_467(iParam0))
	{
		Function_466(iParam0, 0.0f);
	}
	return;
}

void Function_466(var uParam0, float fParam1) //Position: 0x17FB6 / 98230
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_4(uParam0, 1);
	Function_43(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_467(int iParam0) //Position: 0x17FD7 / 98263
{
	return Function_3(*iParam0, 1);
}

var Function_468(bool bParam0, var uParam1, int iParam2) //Position: 0x17FE4 / 98276
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "horse");
}

bool Function_469(bool bParam0) //Position: 0x18075 / 98421
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

void Function_470(bool bParam0, bool bParam1) //Position: 0x180C1 / 98497
{
	SET_ACTORS_HORSE(bParam0, bParam1);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, true);
	return;
}

var Function_471(bool bParam0) //Position: 0x180D6 / 98518
{
	return GET_ACTORS_HORSE(bParam0);
}

void Function_472(bool bParam0, var uParam1) //Position: 0x180E1 / 98529
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
	bVar7 = Function_453(StackVal, StackVal, vVar1, 30.0f, bParam0, uParam1);
	if (IS_ACTOR_VALID(bVar7))
	{
		SET_MOST_RECENT_MOUNT(bParam0, bVar7);
	}
	return;
}

void Function_473() //Position: 0x1817C / 98684
{
	char* cVar0[32];
	
	Function_474(GET_PLAYER_ACTOR(0));
	if (VDIST(Function_474(GET_PLAYER_ACTOR(0)), Global_76902) > 3.0f && !UNK_0x4417C9F2("$/content/multiplayer/deathmatch/basicdeathmatch"))
	{
		if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_22))
		{
			strcpy(&cVar0, "Launch Deathmatch", 32);
			bLocal_22 = ADD_SCRIPT_USE_CONTEXT(&cVar0, 30, 4, false, 0, 0, 0, 4294967295, 0);
		}
		if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bLocal_22))
		{
			LAUNCH_NEW_SCRIPT("$/content/multiplayer/deathmatch/basicdeathmatch", 0);
			NET_START_NEW_SCRIPT("$/content/multiplayer/deathmatch/basicdeathmatch", 0);
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_22);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_22))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_22);
	}
	return;
}

vector3 Function_474(bool bParam0) //Position: 0x1828D / 98957
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_475() //Position: 0x1829E / 98974
{
	if (Function_505())
	{
		if (IS_ACTOR_DEAD(bLocal_23) || !IS_ACTOR_VALID(bLocal_23))
		{
			Function_504(bLocal_23);
			if (!Function_476(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1))
			{
				PRINTSTRING("FAILED TO RESPAWN ");
				PRINTNL();
			}
			else
			{
				bLocal_23 = GET_PLAYER_ACTOR(0);
				Function_510(bLocal_23);
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

bool Function_476(vector3 vParam0, vector3 vParam3, bool bParam6, var uParam7) //Position: 0x18303 / 99075
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_169();
	Function_495();
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
	bVar8 = Function_493(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, true, 1);
	}
	else
	{
		bVar9 = Function_491(256);
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
		Function_483(bVar0, 0);
		Function_479();
		Function_478(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_477(StackVal, StackVal, vParam0, 0, 0, 1);
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

var Function_477(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1847A / 99450
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

void Function_478(char* cParam0, vector3 vParam1) //Position: 0x18515 / 99605
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_479() //Position: 0x18553 / 99667
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_482(iVar1))
		{
			uVar2 = Function_481(iVar1);
			Function_480(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_480(int iParam0, bool bParam1) //Position: 0x18585 / 99717
{
	if (!Function_482(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_290(222, Global_26401[iParam0], 0);
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
		Function_290((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_290(222, bParam1, 0);
	}
	return;
}

int Function_481(int iParam0) //Position: 0x1860E / 99854
{
	if (!Function_482(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_482(int iParam0) //Position: 0x18626 / 99878
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_483(bool bParam0, bool bParam1) //Position: 0x1863B / 99899
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_490(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_488(8192) && !Function_487(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_485())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	iVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(iVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(iVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_484())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_484() //Position: 0x1873B / 100155
{
	return Function_3(Global_79962, 2048);
}

bool Function_485() //Position: 0x1874B / 100171
{
	if (Function_177())
	{
		return (Function_486() != 1 || Function_486() != 0);
	}
	return 0;
}

int Function_486() //Position: 0x18764 / 100196
{
	return Global_79349.f_16;
}

bool Function_487(int iParam0, bool bParam1) //Position: 0x18770 / 100208
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_488(int iParam0) //Position: 0x18790 / 100240
{
	return Function_489(&Global_79349, iParam0);
}

int Function_489(var uParam0, int iParam1) //Position: 0x1879F / 100255
{
	return Function_3(uParam0->f_44, iParam1);
}

var Function_490(bool bParam0) //Position: 0x187AE / 100270
{
	int iVar0;
	
	iVar0 = "";
	if (((bParam0 > 837 && bParam0 < 971) && bParam0 > 972) && bParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(bParam0);
	return iVar0;
}

int Function_491(int iParam0) //Position: 0x187E3 / 100323
{
	return Function_492(Global_78617.f_52, iParam0);
}

int Function_492(var uParam0, int iParam1) //Position: 0x187F4 / 100340
{
	return (uParam0 && iParam1) == 0;
}

int Function_493(bool bParam0, int iParam1) //Position: 0x18801 / 100353
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_494(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_494(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_494(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_494(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_494(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_494(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_494(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_494(iParam1, 64))
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

bool Function_494(var uParam0, bool bParam1) //Position: 0x188DA / 100570
{
	return (uParam0 && bParam1) == 0;
}

void Function_495() //Position: 0x188E7 / 100583
{
	Function_503();
	Function_498();
	Function_496();
	return;
}

void Function_496() //Position: 0x188F6 / 100598
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_497();
	return;
}

void Function_497() //Position: 0x1892A / 100650
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_498() //Position: 0x1893B / 100667
{
	Function_499(&(Global_50170[522]));
	Function_499(&(Global_50170[622]));
	Function_499(&(Global_50170[722]));
	Function_499(&(Global_50170[822]));
	Function_499(&(Global_50170[922]));
	Function_499(&(Global_50170[1022]));
	Function_499(&(Global_50170[1122]));
	return;
}

void Function_499(bool bParam0) //Position: 0x18984 / 100740
{
	Global_56092[*bParam0] = 0;
	Function_500(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_500(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1899E / 100766
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_502(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_501(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_502(iParam0), &cVar0, 2, 2, true);
		Function_313(Function_502(iParam0), 0);
	}
}

struct<16> Function_501(int iParam0) //Position: 0x18A4C / 100940
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_502(int iParam0) //Position: 0x18A80 / 100992
{
	return Global_50170[iParam022].f_24;
}

void Function_503() //Position: 0x18A8F / 101007
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_504(bool bParam0) //Position: 0x18AA8 / 101032
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

bool Function_505() //Position: 0x18B24 / 101156
{
	return Function_491(1);
}

void Function_506(int iParam0) //Position: 0x18B2E / 101166
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
			Function_507(iParam0);
		}
	}
	return;
}

void Function_507(int iParam0) //Position: 0x18B60 / 101216
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_508(int iParam0) //Position: 0x18B6F / 101231
{
	var uVar0;
	
	PRINTSTRING("==== PONG! ====");
	PRINTNL();
	uVar0 = 2;
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 3);
	return;
}

void Function_509(int iParam0) //Position: 0x18B9D / 101277
{
	var uVar0;
	
	PRINTSTRING("==== PING! ====");
	PRINTNL();
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	return;
}

void Function_510(bool bParam0) //Position: 0x18BC4 / 101316
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

void Function_511() //Position: 0x18C33 / 101427
{
	bLocal_14 = CREATE_LAYOUT("HorseServer");
	Global_16515 = CREATE_OBJECTSET_IN_LAYOUT("HorseServerSet", bLocal_14, 15, 0);
	bLocal_13 = CREATE_OBJECT_ITERATOR(bLocal_14);
	ITERATE_IN_SET(bLocal_13, Global_16515);
	CLEAN_OBJECTSET(Global_16515);
	START_OBJECT_ITERATOR(bLocal_13);
	return;
}

