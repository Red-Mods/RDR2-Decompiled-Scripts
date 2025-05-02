//Decompiled with MagicRDR v1.0
//Function Count : 126
//Statics Count : 122
//Natives Count : 224
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
	var uLocal_26 = 0;
	bool bLocal_27 = false;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<2> Local_37 = { 0, 0 } ;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	struct<2> Local_53 = { 0, 0 } ;
	var uLocal_55 = 0;
	struct<2> Local_56 = { 0, 0 } ;
	var uLocal_58 = 0;
	bool bLocal_59 = false;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var9;
	var uVar11;
	var uVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18[1];
	var uVar20[2];
	var uVar23;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	bool bVar36;
	var uVar37;
	bool bVar39;
	float fVar40;
	var uVar41;
	var uVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	bool bVar46;
	bool bVar47;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iVar0 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 0;
	uVar23 = 4;
	iVar32 = 0;
	bVar33 = false;
	iVar34 = 0;
	iVar35 = 0;
	bVar36 = false;
	fVar40 = 0.0f;
	iVar44 = 0;
	if (IS_POPSET_VALID(&(Global_46972[0])) && Function_125(64))
	{
		uVar20[0] = Function_123(&(Global_46972[0]), 1, 2, 1);
		uVar20[1] = Function_113(64, 1, 0, 23, 1);
		if (uVar20[0] != 4294967295 || uVar20[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_112(&uVar23, uVar20[0], 3, 0);
			Function_112(&uVar23, uVar20[1], 3, 0);
			iVar43 = Function_111(2);
			if (iVar43 == 0)
			{
				Function_109(&uVar23, "mourn_loop", 1, 0);
				uVar42 = "$/content/scripting/gringo/simplegringo/Mourn_loop";
			}
			else
			{
				Function_109(&uVar23, "stand_holy_water", 1, 0);
				uVar42 = "assets/content/scripting/gringo/SimpleGringo/stand_holy_water";
			}
			iVar43 = (RAND_INT_RANGE(false, 15999) / 4000);
			if (iVar43 <= 1)
			{
				Local_53 = Vector(-1777,166f, 24,136f, 2848,964f);
				Local_56 = Vector(0.0f, 281,591f, 0.0f);
			}
			else if (iVar43 <= 2)
			{
				Local_53 = Vector(-1788,964f, 24,063f, 2870,469f);
				Local_56 = Vector(0.0f, 207,629f, 0.0f);
			}
			else if (iVar43 <= 3)
			{
				Local_53 = Vector(-1777,442f, 24,091f, 2871,124f);
				Local_56 = Vector(0.0f, 197,947f, 0.0f);
			}
			else
			{
				Local_53 = Vector(-1767,579f, 24,048f, 2847,278f);
				Local_56 = Vector(0.0f, 185,652f, 0.0f);
			}
			Function_108(uVar20[0]);
			uLocal_43 = CREATE_LAYOUT(Function_107());
			uVar1 = GET_ART_GRINGO_LAYOUT();
			if (!IS_LAYOUTREF_VALID(&uLocal_43))
			{
				iVar0 = 6;
			}
			else if (!IS_LAYOUTREF_VALID(&uVar1))
			{
				iVar0 = 6;
			}
			else
			{
				Function_106(&uVar1, "horseHitch1", &bLocal_27, 1, "p_gen_locatordummy02x");
				Var9 = Function_106(&uVar1, "horseHitch1", &bLocal_27, 1, "p_gen_locatordummy02x");
			}
		}
	}
	else
	{
		iVar0 = 5;
	}
	iVar45 = 0;
	bVar46 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar47 = 500;
		Function_105(&Global_54076, &uLocal_30);
		if (Function_104(&bVar46, &iVar0, &iVar45, &bVar47, bVar33))
		{
			if (bVar46)
			{
				Function_103(&uVar18, 4294967295);
				Function_102(&iLocal_35);
			}
			else
			{
				Function_101(&uVar18, 4294967295);
				Function_100(&iLocal_35);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_94(&uVar23))
				{
					iVar0 = 1;
					bVar47 = false;
				}
				break;
			
			case 0x00000001:
				if (Function_91(&Var9, &bLocal_27, &uVar18, &iLocal_35))
				{
					if (Function_89(StackVal, Var9))
					{
						if (Function_87(&Var9, &ScriptParam_0 + 60, 0, ScriptParam_0.f_40))
						{
							if (!Function_85(ScriptParam_0.f_64, 0.0f, 1, 0, ScriptParam_0.f_40))
							{
								iVar0 = 5;
								bVar47 = false;
								break;
							}
							GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&bLocal_27), 0);
							uLocal_45 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_107(), 3, Var9, Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, 20.0f, ScriptParam_0.f_60));
							DECOR_SET_INT(&uLocal_45, "script", GET_THIS_SCRIPT_ID());
							Function_78(&uLocal_45, ScriptParam_0.f_40);
							if (ScriptParam_0.f_40 == 1)
							{
								HUD_CLEAR_SMALL_TEXT_QUEUE();
								Global_6642 = 0;
								Function_75("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
							}
							bVar47 = false;
							iVar0 = 2;
						}
						else
						{
							iVar0 = 5;
						}
					}
					else
					{
						if (ScriptParam_0.f_40 == 1)
						{
							if (iVar16 == 0)
							{
								Function_75("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
							}
						}
						if (iVar16 >= 60)
						{
							if (ScriptParam_0.f_40 == 1)
							{
								HUD_CLEAR_SMALL_TEXT_QUEUE();
							}
							iVar0 = 5;
						}
						iVar16++;
					}
				}
				else
				{
					if (ScriptParam_0.f_40 == 1)
					{
						if (iVar16 == 0)
						{
							Function_75("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
						}
					}
					if (iVar16 >= 60)
					{
						if (ScriptParam_0.f_40 == 1)
						{
							HUD_CLEAR_SMALL_TEXT_QUEUE();
						}
						iVar0 = 5;
					}
					iVar16++;
					Function_106(&uVar1, "horseHitch1", &bLocal_27, 1, "p_gen_locatordummy02x");
					Var9 = Function_106(&uVar1, "horseHitch1", &bLocal_27, 1, "p_gen_locatordummy02x");
				}
				break;
			
			case 0x00000002:
				bVar47 = false;
				uLocal_33 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_43, Function_107()));
				if (!Function_74(&Var9, 30.0f, &Var3, &uVar5, &uVar14))
				{
					iVar0 = 5;
				}
				Function_73(StackVal, StackVal, Var9, Var3);
				Function_73(StackVal, StackVal, Var9, Var3);
				Function_73(uVar20[1], Var3, Var9, Var3);
				uVar18[0] = Function_71(StackVal, StackVal, StackVal, StackVal, &uLocal_43, Function_107(), uVar20[0], Function_107(), Function_73(uVar20[1], Var3, Var9, Var3));
				SQUAD_JOIN(&(uVar18[0]), &uLocal_33);
				SET_ACTOR_CAN_PLAY_GESTURES(&(uVar18[0]), false);
				iLocal_35 = GET_MOUNT(&(uVar18[0]));
				GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&bLocal_27), "UseCase1", &uVar37);
				SNAP_ACTOR_TO_GRINGO(&iLocal_35, &bLocal_27, "UseCase1", false, 0, 0);
				TASK_STAND_STILL(&iLocal_35, -1.0f, 0, 0);
				TASK_STAND_STILL(&(uVar18[0]), -1.0f, 0, 0);
				TASK_USE_GRINGO(&iLocal_35, GET_GRINGO_FROM_OBJECT(&bLocal_27), "UseCase1", 4294967295, 1);
				if (Global_43789 == Global_46760[4])
				{
					DEEQUIP_ACCESSORY(&(uVar18[0]), 0);
					uVar41 = CREATE_GRINGO_IN_LAYOUT(&(uVar18[0]), Function_107(), &uVar42, Local_53, Local_56);
					SNAP_OBJECT_TO_GROUND(&uVar41, 1,5f, false, 1092616192);
				}
				TASK_PRIORITY_SET(&iLocal_35, true);
				iVar0 = 3;
				break;
			
			case 0x00000003:
				Function_70();
				Function_56(StackVal, Function_70(), &bVar33, ScriptParam_0.f_64, Function_69(&uLocal_33), 0, 80.0f, 0);
				if (bVar33 && !bVar36)
				{
					Function_40(36);
					bVar36 = true;
				}
				if (!Function_33(ScriptParam_0.f_64, Function_69(&uLocal_33), &iVar34, &iVar35, 0, 1, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (!SQUAD_IS_VALID(&uLocal_33))
				{
					bVar47 = false;
					iVar0 = 5;
					break;
				}
				else if (!Function_32(&uLocal_33))
				{
					bVar47 = false;
					iVar0 = 5;
					break;
				}
				else if (!Function_30(&uLocal_33, GET_PLAYER_ACTOR(0), 180.0f, 1))
				{
					bVar47 = false;
					iVar0 = 5;
					break;
				}
				if (Function_26(&(uVar18[0]), &iVar2, &fVar40, 0, 0, 0x40400000))
				{
					switch (iVar2)
					{
						case 0x00000001:
							Function_25(&(uVar18[0]));
							RESET_ANIM_SET_FOR_ACTOR(&(uVar18[0]), 1);
							bVar39 = TASK_SEQUENCE_OPEN();
							TASK_MOUNT(false, &iLocal_35, 1, 1, 4, 2147483647);
							TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&(uVar18[0]), bVar39);
							TASK_SEQUENCE_RELEASE(bVar39, 1);
							break;
						
						case 0x00000002:
							Function_25(&(uVar18[0]));
							RESET_ANIM_SET_FOR_ACTOR(&(uVar18[0]), 1);
							bVar39 = TASK_SEQUENCE_OPEN();
							TASK_MOUNT(false, &iLocal_35, 1, 1, 4, 2147483647);
							TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&(uVar18[0]), bVar39);
							TASK_SEQUENCE_RELEASE(bVar39, 1);
							break;
						
						case 0x00000004:
							Function_25(&(uVar18[0]));
							TASK_FLEE_ACTOR(&(uVar18[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(&(uVar18[0]), 1);
							break;
						
						case 0x00000008:
							Function_24(&(uVar18[0]), &Global_54076);
							break;
						
						case 0x00000010:
							Function_25(&(uVar18[0]));
							TASK_FLEE_ACTOR(&(uVar18[0]), &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(&(uVar18[0]), 1);
							break;
					}
					iVar44 = 1;
					iVar0 = 5;
					bVar47 = false;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					GET_POSITION(Function_69(&uLocal_33), &uVar11);
					bVar47 = false;
				}
				if (Function_7(&iVar32, &uVar18, &uVar41))
				{
					iVar44 = 1;
					iVar0 = 5;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar47 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar47 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar47);
		}
	}
	Function_101(&uVar18, 4294967295);
	Function_100(&iLocal_35);
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar33)
	{
		Function_85(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	Function_6(uVar20[0]);
	if (iVar44 == 0)
	{
		if (IS_OBJECT_VALID(&uLocal_47))
		{
			LEASH_BREAK(&uLocal_47, 1056964608);
			DESTROY_OBJECT(&uLocal_47);
		}
		Function_5(&(uVar18[0]));
	}
	if (IS_OBJECT_VALID(&bLocal_27))
	{
		GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&bLocal_27), 1);
	}
	if (bVar33 == 0)
	{
		if (IS_OBJECT_VALID(&uLocal_47))
		{
			LEASH_BREAK(&uLocal_47, 1056964608);
			DESTROY_OBJECT(&uLocal_47);
		}
		Function_5(&(uVar18[0]));
		if (IS_LAYOUTREF_VALID(&uLocal_43))
		{
			UNK_0xA936E73B(&uLocal_43, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uLocal_43, 1);
		}
	}
	Function_1(&uVar23);
	if (IS_ITERATOR_VALID(&ScriptParam_0 + 8))
	{
		DESTROY_ITERATOR(&ScriptParam_0 + 8);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_43))
	{
		RELEASE_LAYOUT_REF(&uLocal_43);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x99A / 2458
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x9C2 / 2498
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

void Function_3(struct<13> Param0) //Position: 0xB0D / 2829
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xB2A / 2858
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0xB48 / 2888
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&iParam0, false);
	}
	return;
}

void Function_6(bool bParam0) //Position: 0xB78 / 2936
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

bool Function_7(var uParam0, int[] iParam1, int iParam2) //Position: 0xB83 / 2947
{
	switch (uParam0)
	{
		case 0x00000000:
			uParam0 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&(iParam1[0])))
			{
				if (IS_OBJECT_VALID(&bLocal_27))
				{
				}
				uParam0 = 2;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&(iParam1[0])))
			{
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&bLocal_27)))
				{
					Function_19(&(iParam1[0]), &iLocal_29);
					Local_37 = { StackVal, StackVal, Function_19(&(iParam1[0]), &iLocal_29) };
					uParam0 = 3;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&(iParam1[0])))
			{
				if (Function_18(&(iParam1[0]), 0x3f800000, 0x42960000, 1, 1, 0))
				{
					if (Function_13(&uLocal_49, 3.0f))
					{
						if (Global_43789 == Global_46760[4])
						{
							bLocal_59 = TASK_SEQUENCE_OPEN();
							TASK_DISMOUNT(false, 1);
							TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(&iParam2), "UseCase1", 4294967295, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&(iParam1[0]), bLocal_59);
							TASK_SEQUENCE_RELEASE(bLocal_59, 1);
							TASK_PRIORITY_SET(&(iParam1[0]), 2);
							uParam0 = 8;
						}
						else
						{
							Function_19(&(iParam1[0]), &iLocal_29);
							Local_37 = { StackVal, StackVal, Function_19(&(iParam1[0]), &iLocal_29) };
							Function_11(&(iParam1[0]));
							if ((StackVal || Function_12(iLocal_29 > 1, Local_37)) || VDIST(Function_11(&(iParam1[0])), Local_37) < 75.0f)
							{
								bLocal_59 = TASK_SEQUENCE_OPEN();
								TASK_DISMOUNT(false, 1);
								TASK_WANDER(false, 3212836864);
								TASK_SEQUENCE_CLOSE();
							}
							else
							{
								bLocal_59 = TASK_SEQUENCE_OPEN();
								TASK_DISMOUNT(false, 1);
								TASK_GO_NEAR_COORD(false, &Local_37, 2.0f, 1);
								TASK_WANDER(false, 3212836864);
								TASK_SEQUENCE_CLOSE();
							}
							TASK_SEQUENCE_PERFORM(&(iParam1[0]), bLocal_59);
							TASK_SEQUENCE_RELEASE(bLocal_59, 1);
							TASK_PRIORITY_SET(&(iParam1[0]), 2);
							Function_8(&uLocal_49, 0.0f);
							uParam0 = 7;
						}
					}
				}
				else
				{
					Function_8(&uLocal_49, 0.0f);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000007:
			if (GET_NTH_TASK_STATUS(&(iParam1[0]), 1) == 4)
			{
				TASK_CLEAR(&(iParam1[0]));
				TASK_WANDER(&(iParam1[0]), 3212836864);
				uParam0 = 8;
			}
			else if (GET_NTH_TASK_STATUS(&(iParam1[0]), 1) == 1)
			{
				uParam0 = 8;
			}
			else
			{
				Function_13(&uLocal_49, 7.0f);
				uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			return 1;
			break;
	}
	return 0;
}

void Function_8(vector3 vParam0) //Position: 0xDA3 / 3491
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_10(&vParam0, 1);
	Function_9(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0xDC8 / 3528
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xDDE / 3550
{
	uParam0 = (uParam0 || iParam1);
	return;
}

struct<8> Function_11(int iParam0) //Position: 0xDEF / 3567
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_12(vector3 vParam0) //Position: 0xE01 / 3585
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_13(var uParam0, float fParam1) //Position: 0xE19 / 3609
{
	if (Function_17(&uParam0))
	{
		if (Function_14(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_14(vector3 vParam0) //Position: 0xE37 / 3639
{
	if (Function_17(&vParam0))
	{
		if (Function_15(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_15(int iParam0) //Position: 0xF04 / 3844
{
	return Function_16(iParam0, 2);
}

bool Function_16(var uParam0, int iParam1) //Position: 0xF12 / 3858
{
	return (uParam0 && iParam1) == 0;
}

bool Function_17(bool bParam0) //Position: 0xF1F / 3871
{
	return Function_16(bParam0, 1);
}

bool Function_18(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xF2D / 3885
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

vector3 Function_19(int iParam0, int iParam1) //Position: 0xF4D / 3917
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3[3];
	bool bVar13;
	
	if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_23(2), Function_22(8)))
	{
		Function_11(&iParam0);
		uVar2 = Function_21(StackVal, &Global_46715, "interiorPoint_store", Function_11(&iParam0), 0);
	}
	Function_11(&iParam0);
	iVar0 = Function_21(StackVal, &Global_46715, "interiorPoint_hotel", Function_11(&iParam0), 0);
	Function_11(&iParam0);
	iVar1 = Function_21(StackVal, &Global_46715, "interiorPoint_saloon", Function_11(&iParam0), 0);
	if (IS_OBJECT_VALID(&uVar2) && iParam1 > vVar3)
	{
		Function_20(&uVar2);
		vVar3[iParam13] = { StackVal, StackVal, Function_20(&uVar2) };
		iParam1++;
	}
	if (IS_OBJECT_VALID(&iVar0) && iParam1 > vVar3)
	{
		Function_20(&iVar0);
		vVar3[iParam13] = { StackVal, StackVal, Function_20(&iVar0) };
		iParam1++;
	}
	if (IS_OBJECT_VALID(&iVar1) && iParam1 > vVar3)
	{
		Function_20(&iVar1);
		vVar3[iParam13] = { StackVal, StackVal, Function_20(&iVar1) };
		iParam1++;
	}
	if (iParam1 >= 0)
	{
		if (iParam1 == 1)
		{
			bVar13 = false;
		}
		else
		{
			bVar13 = RAND_INT_RANGE(false, (iParam1 - 1));
		}
	}
	vVar3[bVar133].f_4 = (vVar3[bVar133].y + 0,5f);
	return StackVal, StackVal, vVar3[bVar133];
}

vector3 Function_20(int iParam0) //Position: 0x10A1 / 4257
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(&iParam0, &vVar0);
	GET_OBJECT_ORIENTATION(&iParam0, &vVar0 + 12);
	return StackVal, StackVal, vVar0;
}

var Function_21(var uParam0, var uParam1, struct<2> Param2, float fParam4) //Position: 0x10BF / 4287
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	var uVar6;
	
	bVar2 = 10000.0f;
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar6 = CREATE_OBJECT_ITERATOR(&uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar6, 8);
		ITERATE_ON_PARTIAL_NAME(&uVar6, &uParam1);
		fVar0 = START_OBJECT_ITERATOR(&uVar6);
		while (IS_OBJECT_VALID(&fVar0))
		{
			GET_OBJECT_POSITION(&fVar0, &Var4);
			bVar3 = VDIST(Param2, Var4);
			if (bVar3 > bVar2 && bVar3 <= &fParam4)
			{
				bVar2 = bVar3;
				uVar1 = &fVar0;
			}
			fVar0 = OBJECT_ITERATOR_NEXT(&uVar6);
		}
		DESTROY_ITERATOR(&uVar6);
	}
	if (!IS_OBJECT_VALID(&uVar1))
	{
	}
	return &uVar1;
}

var Function_22(int iParam0) //Position: 0x1154 / 4436
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_23(int iParam0) //Position: 0x11C0 / 4544
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 1)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

int Function_24(var uParam0, int iParam1) //Position: 0x122C / 4652
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
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, true);
	TASK_KILL_CHAR(&uParam0, &iParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

void Function_25(bool bParam0) //Position: 0x1322 / 4898
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "nnostickup"))
		{
			DECOR_REMOVE(&bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, true);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
		TASK_PRIORITY_SET(&bParam0, 2);
	}
	return;
}

bool Function_26(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x1375 / 4981
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
		fVar0 = Function_29(&iParam0, &Global_54076);
		if (!Function_16(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_27(&iParam0);
				return 1;
			}
		}
		if (!Function_16(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_27(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_27(&iParam0);
				return 1;
			}
		}
		if (!Function_16(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_27(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_27(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_16(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_27(&iParam0);
				return 1;
			}
		}
		if (!Function_16(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_27(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_27(int iParam0) //Position: 0x153E / 5438
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_28(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_28(int iParam0) //Position: 0x157B / 5499
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_29(var uParam0, int iParam1) //Position: 0x1594 / 5524
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

bool Function_30(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x1689 / 5769
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (ACTORS_IN_RANGE(&uVar1, &uParam1, bParam2))
				{
					if (!Function_31(&uVar1, 1) || uParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_31(int iParam0, int iParam1) //Position: 0x172E / 5934
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

bool Function_32(bool bParam0) //Position: 0x1780 / 6016
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (!IS_ACTOR_DEAD(&iVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_33(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x17DE / 6110
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&uParam1))
			{
				if (Function_29(&Global_54076, &uParam1) > 15.0f)
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
		if (Function_36() && !uParam2)
		{
			return 0;
		}
		if (Function_35(iParam0) && !uParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
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
		if (!Function_34(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_34(int iParam0, int iParam1) //Position: 0x1921 / 6433
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

int Function_35(int iParam0) //Position: 0x1942 / 6466
{
	bool bVar0;
	
	if (StackVal & 64 == 64)
	{
		bVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (bVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_36() //Position: 0x1982 / 6530
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
						if (Function_37(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_37(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_37(int iParam0, var uParam1) //Position: 0x1A45 / 6725
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_39(&iParam0);
			Var0 = Function_39(&iParam0);
			Function_38(&uParam1);
			Var2 = Function_38(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_38(int iParam0) //Position: 0x1AE7 / 6887
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

struct<8> Function_39(int iParam0) //Position: 0x1B55 / 6997
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

void Function_40(int iParam0) //Position: 0x1BC1 / 7105
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_41(409, 1, 0, 0);
	}
	return;
}

int Function_41(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1BF2 / 7154
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
	Function_55(iParam0, TO_FLOAT(bParam1), 1);
	Function_54(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_43(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_42(iParam0);
	return 1;
}

void Function_42(bool bParam0) //Position: 0x1E1A / 7706
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

void Function_43(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1EB8 / 7864
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_53(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_52(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_52(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_50(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_47(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_44(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_107(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_44(int iParam0) //Position: 0x24F6 / 9462
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_45(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2507 / 9479
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_46(char* cParam0) //Position: 0x25FE / 9726
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_47(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2619 / 9753
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_49(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_48(Function_49(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_48(int iParam0, int iParam1) //Position: 0x2680 / 9856
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_49(int iParam0, bool bParam1) //Position: 0x2692 / 9874
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_50(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x26A4 / 9892
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
	if (((Function_51(iParam0) != 19 || Function_51(iParam0) != 17) || Function_51(iParam0) != 10) || Function_51(iParam0) != 9)
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

int Function_51(int iParam0) //Position: 0x27D8 / 10200
{
	return Global_55480[iParam016].f_96;
}

float Function_52(int iParam0) //Position: 0x27E7 / 10215
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_53(int iParam0) //Position: 0x2820 / 10272
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_54(int iParam0) //Position: 0x285D / 10333
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

int Function_55(int iParam0, float fParam1, bool bParam2) //Position: 0x29F7 / 10743
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

void Function_56(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x2C3B / 11323
{
	int iVar0;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	else if (!Function_12(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_68(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_67(0);
		}
		if (&bParam7)
		{
			Function_65(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_63(iParam3);
			Global_6644 = 1;
		}
		Function_61(iParam3);
		if (Function_60(StackVal, 32768))
		{
			Function_57(1);
		}
		Global_26652[iParam34].f_16++;
		Function_41(408, 1, 0, 0);
	}
}

void Function_57(bool bParam0) //Position: 0x2D50 / 11600
{
	if (bParam0)
	{
		Function_59(0x10000000);
	}
	else
	{
		Function_58(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_58(int iParam0) //Position: 0x2D75 / 11637
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_59(int iParam0) //Position: 0x2D92 / 11666
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_60(var uParam0, int iParam1) //Position: 0x2DA5 / 11685
{
	return (uParam0 && iParam1) == 0;
}

void Function_61(int iParam0) //Position: 0x2DB2 / 11698
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_16(StackVal, 524288))
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
			bVar1 = Function_62(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_62(int iParam0) //Position: 0x2E58 / 11864
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_63(int iParam0) //Position: 0x2E6F / 11887
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
	Function_64(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
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

void Function_64(vector3 vParam0) //Position: 0x2F0E / 12046
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_65(int iParam0, int iParam1) //Position: 0x2F2A / 12074
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
			Function_66(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_66(struct<113> Param0) //Position: 0x2FB1 / 12209
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

void Function_67(int iParam0) //Position: 0x300F / 12303
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_62(900)), 0);
	return;
}

void Function_68(int iParam0) //Position: 0x3033 / 12339
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_62(200)), 0);
	return;
}

var Function_69(var uParam0) //Position: 0x3056 / 12374
{
	var uVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar0) && IS_ACTOR_ALIVE(&uVar0))
		{
			return &uVar0;
		}
		bVar1++;
	}
	return "";
}

struct<8> Function_70() //Position: 0x30A3 / 12451
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

var Function_71(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x30AD / 12461
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_72(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_72(bParam4))
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

bool Function_72(bool bParam0) //Position: 0x31E5 / 12773
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_73(struct<2> Param0, struct<2> Param2) //Position: 0x31FC / 12796
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	return StackVal, Var0;
}

bool Function_74(vector3 vParam0) //Position: 0x3219 / 12825
{
	struct<2> Var0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var0);
		if (VDIST(vParam0, Var0) > 175.0f)
		{
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vParam0, fParam1, &Param2, &uParam3, &uParam4))
	{
		if (!Function_12(StackVal, Param2))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(&vParam0, fParam1, &Param2, &uParam3, &uParam4))
	{
		if (!Function_12(StackVal, Param2))
		{
			return 1;
		}
	}
	return 0;
}

void Function_75(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x32B6 / 12982
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_76(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_76(int iParam0) //Position: 0x333B / 13115
{
	char* cVar0[16];
	
	if (!Function_77())
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

bool Function_77() //Position: 0x337A / 13178
{
	if (Function_16(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_78(var uParam0, int iParam1) //Position: 0x3395 / 13205
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
	Function_82(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_79(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_79(int iParam0, var uParam1, struct<2> Param2) //Position: 0x34FF / 13567
{
	struct<8> Var0;
	
	(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_80("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 3, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_80(char* cParam0) //Position: 0x35A7 / 13735
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81("0", &cVar8, ""), 4);
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

struct<32> Function_81(char* cParam0) //Position: 0x3613 / 13843
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_82(bool bParam0) //Position: 0x3635 / 13877
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
						Function_84(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_83(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_84(iVar0);
						}
					}
					else if (Function_83(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_84(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&bParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_84(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_83(int iParam0, struct<2> Param1) //Position: 0x37A3 / 14243
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_39(&iParam0);
		Var0 = Function_39(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_84(int iParam0) //Position: 0x381A / 14362
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

bool Function_85(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3882 / 14466
{
	int iVar0;
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
		Function_75("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
		iVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_86(&iVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_86(&iVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&iVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&iVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_86(&iVar0);
		}
		*(&Global_27462[iParam052] + 376) = &iVar0;
		Global_26652[iParam04] = &iVar0;
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

void Function_86(int iParam0) //Position: 0x3AEE / 15086
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

bool Function_87(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x3B38 / 15160
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
	Function_82(4294967295);
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
			fVar4 = uParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_88(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_88(struct<2> Param0) //Position: 0x3C14 / 15380
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_89(struct<2> Param0) //Position: 0x3C33 / 15411
{
	if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1065353216, 1117126656, 1, 1, 0))
	{
		return 0;
	}
	if (Function_90(StackVal, &Global_54076, Param0, 30.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_90(var uParam0, struct<2> Param1, float fParam3) //Position: 0x3C6B / 15467
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_39(&uParam0);
		if (VDIST(Function_39(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

bool Function_91(struct<2> Param0, float fParam2, var uParam3) //Position: 0x3CF7 / 15607
{
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&fParam1)))
	{
		return 0;
	}
	if (Function_12(StackVal, Param0))
	{
		return 0;
	}
	if (Function_92(&fParam1, &fParam2, &uParam3))
	{
		return 0;
	}
	return 1;
}

bool Function_92(var uParam0, var[] uParam1, int iParam2) //Position: 0x3D34 / 15668
{
	struct<2> Var0;
	
	Function_93(&uParam0);
	Var0 = Function_93(&uParam0);
	if (IS_ACTOR_VALID(&(uParam1[0])))
	{
		if (IS_ACTOR_VALID(&iParam2))
		{
			if (IS_AREA_OBSTRUCTED2(Var0, 1.0f, GET_PHYSINST_FROM_ACTOR(&(uParam1[0])), GET_PHYSINST_FROM_ACTOR(&iParam2), 0))
			{
				return 1;
			}
		}
	}
	if (GRINGO_GET_AVAILABILITY(GET_GRINGO_FROM_OBJECT(&uParam0), "UseCase1") == 0)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_93(int iParam0) //Position: 0x3D92 / 15762
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_94(struct<2>[] Param0) //Position: 0x3DBB / 15803
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_99();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_98(&(Param0[iVar02]), 8);
		}
		else if (Function_97())
		{
			iVar1 = 1;
			Function_98(&(Param0[iVar02]), 8);
		}
		Function_98(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_98(&(Param0[iVar02]), 1);
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
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_98(&(Param0[iVar02]), 2);
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
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_98(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_98(&(Param0[iVar02]), 2);
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
	Function_95();
	return 1;
}

void Function_95() //Position: 0x417F / 16767
{
	if (!Function_96(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_96(int iParam0) //Position: 0x41BF / 16831
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_97() //Position: 0x41DB / 16859
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

void Function_98(struct<13> Param0) //Position: 0x4209 / 16905
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_99() //Position: 0x421C / 16924
{
	if (!Function_96(128))
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

void Function_100(int iParam0) //Position: 0x425E / 16990
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
			MEMORY_ALLOW_SHOOTING(&iParam0, true);
		}
	}
	return;
}

void Function_101(var[] uParam0, int iParam1) //Position: 0x42A7 / 17063
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_100(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

void Function_102(int iParam0) //Position: 0x42D9 / 17113
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
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
			MEMORY_ALLOW_SHOOTING(&iParam0, false);
		}
	}
	return;
}

void Function_103(var[] uParam0, int iParam1) //Position: 0x4323 / 17187
{
	int iVar0;
	
	if (&iParam1 == 4294967295)
	{
		iParam1 = uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= &iParam1)
	{
		Function_102(&(uParam0[iVar0]));
		iVar0++;
	}
	return;
}

bool Function_104(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x4355 / 17237
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

void Function_105(var uParam0, int iParam1) //Position: 0x43CD / 17357
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

struct<8> Function_106(var uParam0, char* cParam1, var uParam2, bool bParam3, float fParam4) //Position: 0x43DC / 17372
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	struct<2> Var4;
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		if (&bParam3)
		{
			if (!IS_STRING_VALID(&fParam4))
			{
				LOG_ERROR("passed in model name is invalid");
				return StackVal, Vector(0.0f, 0.0f, 0.0f);
			}
			uVar2 = CREATE_OBJECT_ITERATOR(&uParam0);
			ITERATE_ON_OBJECT_TYPE(&uVar2, 27);
			uVar0 = START_OBJECT_ITERATOR(&uVar2);
			while (IS_OBJECT_VALID(&uVar0))
			{
				uVar3 = GET_OBJECT_MODEL_NAME(&uVar0);
				if (IS_STRING_VALID(&uVar3))
				{
					if (STRINGS_ARE_EQUAL(&uVar3, &fParam4))
					{
						bVar1 = FIND_OBJECT_IN_OBJECT(&uVar0, &cParam1);
						if (IS_OBJECT_VALID(&bVar1))
						{
							uParam2 = &bVar1;
							DESTROY_ITERATOR(&uVar2);
							GET_OBJECT_POSITION(&bVar1, &Var4);
							return StackVal, Var4;
						}
					}
				}
				uVar0 = OBJECT_ITERATOR_NEXT(&uVar2);
			}
			DESTROY_ITERATOR(&uVar2);
		}
		else
		{
			uVar2 = CREATE_OBJECT_ITERATOR(&uParam0);
			ITERATE_ON_OBJECT_TYPE(&uVar2, 12);
			ITERATE_ON_PARTIAL_NAME(&uVar2, &cParam1);
			bVar1 = START_OBJECT_ITERATOR(&uVar2);
			if (IS_OBJECT_VALID(&bVar1))
			{
				uParam2 = &bVar1;
				DESTROY_ITERATOR(&uVar2);
				GET_OBJECT_POSITION(&bVar1, &Var4);
				return StackVal, Var4;
			}
			DESTROY_ITERATOR(&uVar2);
		}
	}
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

var Function_107() //Position: 0x450A / 17674
{
	int iVar0;
	
	return &iVar0;
}

void Function_108(bool bParam0) //Position: 0x4513 / 17683
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_109(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x451E / 17694
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_110(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_98(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_110(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x455C / 17756
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_98(&(Param0[iVar02]), 4);
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

var Function_111(bool bParam0) //Position: 0x462B / 17963
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

var Function_112(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x4644 / 17988
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_98(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_98(&(Param0[iVar02]), 8);
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

var Function_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x4720 / 18208
{
	return Function_114(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_114(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x473D / 18237
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_117(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_117(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_117(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_117(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_117(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_117(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_117(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_117(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_117(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_117(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_117(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_117(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_117(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_117(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_115(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_115(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x49A0 / 18848
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_116(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_116(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_116(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_116(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_116(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_116(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_116(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_116(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_116(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_116(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_116(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_116(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_116(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_116(&(Global_46972[13]), &bVar0);
	}
	return Function_117(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_116(var uParam0, bool bParam1) //Position: 0x4B0F / 19215
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_117(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x4BD3 / 19411
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_122();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_72(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_121(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_121(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_120(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_72(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_120(bVar0))
				{
					Function_119();
				}
				Function_118(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_72(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
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
	return bVar0;
}

void Function_118(int iParam0) //Position: 0x4ECC / 20172
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

void Function_119() //Position: 0x4F80 / 20352
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

bool Function_120(bool bParam0) //Position: 0x4FBB / 20411
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_121(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x4FE8 / 20456
{
	bool bVar0;
	
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
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

void Function_122() //Position: 0x5143 / 20803
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_119();
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
	Function_119();
	return;
}

var Function_123(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x518F / 20879
{
	return Function_124(&uParam0, uParam1, &uParam2, 4294967295, &uParam3);
}

var Function_124(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x51A6 / 20902
{
	return Function_117(StackVal, &uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_125(bool bParam0) //Position: 0x51C4 / 20932
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(&(Global_46972[0]));
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(&(Global_46972[1]));
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(&(Global_46972[2]));
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(&(Global_46972[3]));
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(&(Global_46972[4]));
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(&(Global_46972[5]));
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(&(Global_46972[6]));
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(&(Global_46972[7]));
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(&(Global_46972[8]));
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(&(Global_46972[9]));
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(&(Global_46972[10]));
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(&(Global_46972[11]));
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[12]));
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[13]));
			break;
		
		case 0x40000000:
			bVar0 = false;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			bVar0 = false;
			break;
	}
	return bVar0;
}

