//Decompiled with MagicRDR v1.0
//Function Count : 125
//Statics Count : 98
//Natives Count : 224
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
	bool bLocal_21 = false;
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	vector3 vLocal_28 = { 0.0f, 0.0f, 0.0f };
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	vector3 vLocal_40 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_43 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_46 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	vector3 vVar12;
	var uVar15;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	var uVar23[1];
	var uVar25[2];
	bool bVar28;
	int iVar41;
	bool bVar42;
	int iVar43;
	int iVar44;
	bool bVar45;
	var uVar46;
	bool bVar49;
	float fVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	bool bVar57;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iVar0 = 0;
	iVar20 = 0;
	iVar21 = 0;
	iVar22 = 0;
	bVar28 = 4;
	iVar41 = 0;
	bVar42 = false;
	iVar43 = 0;
	iVar44 = 0;
	bVar45 = false;
	fVar50 = 0.0f;
	iVar54 = 0;
	if (IS_POPSET_VALID(Global_30750[0]) && Function_124(64))
	{
		uVar25[0] = Function_122(Global_30750[0], 1, 2, 1);
		uVar25[1] = Function_112(64, 1, 0, 23, 1);
		if (uVar25[0] != 4294967295 || uVar25[1] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_111(&bVar28, uVar25[0], 3, 0);
			Function_111(&bVar28, uVar25[1], 3, 0);
			iVar53 = Function_110(2);
			if (iVar53 == 0)
			{
				Function_108(&bVar28, "mourn_loop", 1, 0);
				bVar52 = "$/content/scripting/gringo/simplegringo/Mourn_loop";
			}
			else
			{
				Function_108(&bVar28, "stand_holy_water", 1, 0);
				bVar52 = "assets/content/scripting/gringo/SimpleGringo/stand_holy_water";
			}
			iVar53 = (RAND_INT_RANGE(false, 15999) / 4000);
			if (iVar53 <= 1)
			{
				vLocal_40 = { -1777.166f, 24.136f, 2848.964f };
				vLocal_43 = { 0.0f, 281.591f, 0.0f };
			}
			else if (iVar53 <= 2)
			{
				vLocal_40 = { -1788.964f, 24.063f, 2870.469f };
				vLocal_43 = { 0.0f, 207.629f, 0.0f };
			}
			else if (iVar53 <= 3)
			{
				vLocal_40 = { -1777.442f, 24.091f, 2871.124f };
				vLocal_43 = { 0.0f, 197.947f, 0.0f };
			}
			else
			{
				vLocal_40 = { -1767.579f, 24.048f, 2847.278f };
				vLocal_43 = { 0.0f, 185.652f, 0.0f };
			}
			Function_107(uVar25[0]);
			bLocal_34 = CREATE_LAYOUT(Function_106());
			bVar1 = GET_ART_GRINGO_LAYOUT();
			if (!IS_LAYOUTREF_VALID(bLocal_34))
			{
				iVar0 = 6;
			}
			else if (!IS_LAYOUTREF_VALID(bVar1))
			{
				iVar0 = 6;
			}
			else
			{
				Function_105(bVar1, "horseHitch1", &bLocal_21, 1, "p_gen_locatordummy02x");
				vVar12 = { StackVal, StackVal, Function_105(bVar1, "horseHitch1", &bLocal_21, 1, "p_gen_locatordummy02x") };
			}
		}
	}
	else
	{
		iVar0 = 5;
	}
	iVar55 = 0;
	bVar56 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar57 = 500;
		Function_104(Global_34573, &uLocal_23);
		if (Function_103(&bVar56, &iVar0, &iVar55, &bVar57, bVar42))
		{
			if (bVar56)
			{
				Function_102(&uVar23, 4294967295);
				Function_101(&bLocal_27);
			}
			else
			{
				Function_100(&uVar23, 4294967295);
				Function_99(&bLocal_27);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_93(&bVar28))
				{
					iVar0 = 1;
					bVar57 = false;
				}
				break;
			
			case 0x00000001:
				if (Function_90(&vVar12, bLocal_21, &uVar23, &bLocal_27))
				{
					if (Function_88(StackVal, StackVal, vVar12))
					{
						if (Function_86(&vVar12, &ScriptParam_0 + 52, 0, ScriptParam_0.f_32))
						{
							if (!Function_84(ScriptParam_0.f_56, 0.0f, 1, 0, ScriptParam_0.f_32))
							{
								iVar0 = 5;
								bVar57 = false;
								break;
							}
							GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bLocal_21), 0);
							bLocal_35 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_106(), 3, vVar12, 0.0f, 0.0f, 0.0f, ScriptParam_0.f_52, 20.0f, ScriptParam_0.f_52);
							DECOR_SET_INT(bLocal_35, "script", GET_THIS_SCRIPT_ID());
							Function_77(&bLocal_35, ScriptParam_0.f_32);
							if (ScriptParam_0.f_32 == 1)
							{
								HUD_CLEAR_SMALL_TEXT_QUEUE();
								Global_3399 = 0;
								Function_74("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
							}
							bVar57 = false;
							iVar0 = 2;
						}
						else
						{
							iVar0 = 5;
						}
					}
					else
					{
						if (ScriptParam_0.f_32 == 1)
						{
							if (iVar21 == 0)
							{
								Function_74("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
							}
						}
						if (iVar21 >= 60)
						{
							if (ScriptParam_0.f_32 == 1)
							{
								HUD_CLEAR_SMALL_TEXT_QUEUE();
							}
							iVar0 = 5;
						}
						iVar21++;
					}
				}
				else
				{
					if (ScriptParam_0.f_32 == 1)
					{
						if (iVar21 == 0)
						{
							Function_74("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
						}
					}
					if (iVar21 >= 60)
					{
						if (ScriptParam_0.f_32 == 1)
						{
							HUD_CLEAR_SMALL_TEXT_QUEUE();
						}
						iVar0 = 5;
					}
					iVar21++;
					Function_105(bVar1, "horseHitch1", &bLocal_21, 1, "p_gen_locatordummy02x");
					vVar12 = { StackVal, StackVal, Function_105(bVar1, "horseHitch1", &bLocal_21, 1, "p_gen_locatordummy02x") };
				}
				break;
			
			case 0x00000002:
				bVar57 = false;
				bLocal_26 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_34, Function_106()));
				if (!Function_73(&vVar12, 30.0f, &vVar3, &uVar6, &uVar19))
				{
					iVar0 = 5;
				}
				Function_72(StackVal, StackVal, StackVal, StackVal, vVar12, vVar3);
				Function_72(StackVal, StackVal, StackVal, StackVal, vVar12, vVar3);
				Function_72(uVar25[0], Function_106(), uVar25[1], vVar3, vVar12, vVar3);
				uVar23[0] = Function_70(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bLocal_34, Function_106(), Function_72(uVar25[0], Function_106(), uVar25[1], vVar3, vVar12, vVar3));
				SQUAD_JOIN(uVar23[0], bLocal_26);
				SET_ACTOR_CAN_PLAY_GESTURES(uVar23[0], false);
				bLocal_27 = GET_MOUNT(uVar23[0]);
				GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", &uVar46);
				SNAP_ACTOR_TO_GRINGO(bLocal_27, bLocal_21, "UseCase1", 0, 0, 0);
				TASK_STAND_STILL(bLocal_27, -1.0f, 0, 0);
				TASK_STAND_STILL(uVar23[0], -1.0f, 0, 0);
				TASK_USE_GRINGO(bLocal_27, GET_GRINGO_FROM_OBJECT(bLocal_21), "UseCase1", 4294967295, 1);
				if (Global_29006 == Global_30640[4])
				{
					DEEQUIP_ACCESSORY(uVar23[0], 0);
					bVar51 = CREATE_GRINGO_IN_LAYOUT(uVar23[0], Function_106(), bVar52, vLocal_40, vLocal_43);
					SNAP_OBJECT_TO_GROUND(bVar51, 1.5f, false, 1092616192);
				}
				TASK_PRIORITY_SET(bLocal_27, 1);
				iVar0 = 3;
				break;
			
			case 0x00000003:
				Function_69();
				Function_55(StackVal, StackVal, Function_69(), &bVar42, ScriptParam_0.f_56, Function_68(bLocal_26), 0, 80.0f, 0);
				if (bVar42 && !bVar45)
				{
					Function_40(36);
					bVar45 = true;
				}
				if (!Function_33(ScriptParam_0.f_56, Function_68(bLocal_26), &iVar43, &iVar44, 0, 1, 1, 1))
				{
					iVar0 = 5;
					break;
				}
				if (!SQUAD_IS_VALID(bLocal_26))
				{
					bVar57 = false;
					iVar0 = 5;
					break;
				}
				else if (!Function_32(bLocal_26))
				{
					bVar57 = false;
					iVar0 = 5;
					break;
				}
				else if (!Function_30(bLocal_26, GET_PLAYER_ACTOR(0), 180.0f, 1))
				{
					bVar57 = false;
					iVar0 = 5;
					break;
				}
				if (Function_26(uVar23[0], &iVar2, &fVar50, 0, 0, 0x40400000))
				{
					switch (iVar2)
					{
						case 0x00000001:
							Function_25(uVar23[0]);
							RESET_ANIM_SET_FOR_ACTOR(uVar23[0], 1);
							bVar49 = TASK_SEQUENCE_OPEN();
							TASK_MOUNT(false, bLocal_27, 1, 1, 4, 2147483647);
							TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(uVar23[0], bVar49);
							TASK_SEQUENCE_RELEASE(bVar49, 1);
							break;
						
						case 0x00000002:
							Function_25(uVar23[0]);
							RESET_ANIM_SET_FOR_ACTOR(uVar23[0], 1);
							bVar49 = TASK_SEQUENCE_OPEN();
							TASK_MOUNT(false, bLocal_27, 1, 1, 4, 2147483647);
							TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(uVar23[0], bVar49);
							TASK_SEQUENCE_RELEASE(bVar49, 1);
							break;
						
						case 0x00000004:
							Function_25(uVar23[0]);
							TASK_FLEE_ACTOR(uVar23[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(uVar23[0], 1);
							break;
						
						case 0x00000008:
							Function_24(uVar23[0], &Global_34573);
							break;
						
						case 0x00000010:
							Function_25(uVar23[0]);
							TASK_FLEE_ACTOR(uVar23[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							RESET_ANIM_SET_FOR_ACTOR(uVar23[0], 1);
							break;
					}
					iVar54 = 1;
					iVar0 = 5;
					bVar57 = false;
					break;
				}
				if (GET_DEBUG_DRAW_STATE())
				{
					GET_POSITION(Function_68(bLocal_26), &uVar15);
					bVar57 = false;
				}
				if (Function_7(&iVar41, &uVar23, bVar51))
				{
					iVar54 = 1;
					iVar0 = 5;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar57 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar57 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar57);
		}
	}
	Function_100(&uVar23, 4294967295);
	Function_99(&bLocal_27);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar42)
	{
		Function_84(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	Function_6(uVar25[0]);
	if (iVar54 == 0)
	{
		if (IS_OBJECT_VALID(bLocal_36))
		{
			LEASH_BREAK(bLocal_36, 1056964608);
			DESTROY_OBJECT(bLocal_36);
		}
		Function_5(&(uVar23[0]));
	}
	if (IS_OBJECT_VALID(bLocal_21))
	{
		GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bLocal_21), 1);
	}
	if (bVar42 == 0)
	{
		if (IS_OBJECT_VALID(bLocal_36))
		{
			LEASH_BREAK(bLocal_36, 1056964608);
			DESTROY_OBJECT(bLocal_36);
		}
		Function_5(&(uVar23[0]));
		if (IS_LAYOUTREF_VALID(bLocal_34))
		{
			UNK_0xA936E73B(bLocal_34, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bLocal_34, 1);
		}
	}
	Function_1(&bVar28);
	if (IS_ITERATOR_VALID(StackVal))
	{
		DESTROY_ITERATOR(StackVal);
	}
	if (IS_LAYOUTREF_VALID(bLocal_34))
	{
		RELEASE_LAYOUT_REF(bLocal_34);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x94B / 2379
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x971 / 2417
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
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
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xA9F / 2719
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xAB9 / 2745
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0xAD6 / 2774
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

void Function_6(bool bParam0) //Position: 0xB01 / 2817
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

bool Function_7(var uParam0, int iParam1, bool bParam2) //Position: 0xB0C / 2828
{
	switch (*uParam0)
	{
		case 0x00000000:
			*uParam0 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID((*iParam1)[0]))
			{
				if (IS_OBJECT_VALID(bLocal_21))
				{
				}
				*uParam0 = 2;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID((*iParam1)[0]))
			{
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bLocal_21)))
				{
					vLocal_28 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19((*iParam1)[0], &iLocal_22) };
					*uParam0 = 3;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID((*iParam1)[0]))
			{
				if (Function_18((*iParam1)[0], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					if (Function_13(&uLocal_37, 3.0f))
					{
						if (Global_29006 == Global_30640[4])
						{
							bLocal_46 = TASK_SEQUENCE_OPEN();
							TASK_DISMOUNT(false, 1);
							TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(bParam2), "UseCase1", 4294967295, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM((*iParam1)[0], bLocal_46);
							TASK_SEQUENCE_RELEASE(bLocal_46, 1);
							TASK_PRIORITY_SET((*iParam1)[0], 2);
							*uParam0 = 8;
						}
						else
						{
							vLocal_28 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19((*iParam1)[0], &iLocal_22) };
							Function_11((*iParam1)[0]);
							if ((StackVal || Function_12(StackVal, iLocal_22 > 1, vLocal_28)) || VDIST(Function_11((*iParam1)[0]), vLocal_28) < 75.0f)
							{
								bLocal_46 = TASK_SEQUENCE_OPEN();
								TASK_DISMOUNT(false, 1);
								TASK_WANDER(false, 3212836864);
								TASK_SEQUENCE_CLOSE();
							}
							else
							{
								bLocal_46 = TASK_SEQUENCE_OPEN();
								TASK_DISMOUNT(false, 1);
								TASK_GO_NEAR_COORD(false, &vLocal_28, 2.0f, 1);
								TASK_WANDER(false, 3212836864);
								TASK_SEQUENCE_CLOSE();
							}
							TASK_SEQUENCE_PERFORM((*iParam1)[0], bLocal_46);
							TASK_SEQUENCE_RELEASE(bLocal_46, 1);
							TASK_PRIORITY_SET((*iParam1)[0], 2);
							Function_8(&uLocal_37, 0.0f);
							*uParam0 = 7;
						}
					}
				}
				else
				{
					Function_8(&uLocal_37, 0.0f);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000007:
			if (GET_NTH_TASK_STATUS((*iParam1)[0], true) == 4)
			{
				TASK_CLEAR((*iParam1)[0]);
				TASK_WANDER((*iParam1)[0], 3212836864);
				*uParam0 = 8;
			}
			else if (GET_NTH_TASK_STATUS((*iParam1)[0], true) == 1)
			{
				*uParam0 = 8;
			}
			else
			{
				Function_13(&uLocal_37, 7.0f);
				*uParam0 = 8;
			}
			break;
		
		case 0x00000008:
			return 1;
			break;
	}
	return 0;
}

void Function_8(var uParam0, float fParam1) //Position: 0xD02 / 3330
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_10(uParam0, 1);
	Function_9(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0xD23 / 3363
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xD36 / 3382
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

vector3 Function_11(bool bParam0) //Position: 0xD45 / 3397
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_12(vector3 vParam0) //Position: 0xD56 / 3414
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_13(var uParam0, float fParam1) //Position: 0xD6E / 3438
{
	if (Function_17(uParam0))
	{
		if (Function_14(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_14(bool bParam0) //Position: 0xD8A / 3466
{
	if (Function_17(bParam0))
	{
		if (Function_15(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_15(int iParam0) //Position: 0xE52 / 3666
{
	return Function_16(*iParam0, 2);
}

bool Function_16(var uParam0, int iParam1) //Position: 0xE5F / 3679
{
	return (uParam0 && iParam1) == 0;
}

bool Function_17(bool bParam0) //Position: 0xE6C / 3692
{
	return Function_16(*bParam0, 1);
}

bool Function_18(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xE79 / 3705
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

struct<24> Function_19(bool bParam0, var uParam1) //Position: 0xE93 / 3731
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<6> Var3[3];
	bool bVar22;
	
	if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_23(2), Function_22(8)))
	{
		Function_11(bParam0);
		bVar2 = Function_21(StackVal, StackVal, Global_30616, "interiorPoint_store", Function_11(bParam0), 0);
	}
	Function_11(bParam0);
	bVar0 = Function_21(StackVal, StackVal, Global_30616, "interiorPoint_hotel", Function_11(bParam0), 0);
	Function_11(bParam0);
	bVar1 = Function_21(StackVal, StackVal, Global_30616, "interiorPoint_saloon", Function_11(bParam0), 0);
	if (IS_OBJECT_VALID(bVar2) && *uParam1 > Var3)
	{
		Var3[*uParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(bVar2) };
		*uParam1++;
	}
	if (IS_OBJECT_VALID(bVar0) && *uParam1 > Var3)
	{
		Var3[*uParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(bVar0) };
		*uParam1++;
	}
	if (IS_OBJECT_VALID(bVar1) && *uParam1 > Var3)
	{
		Var3[*uParam16] = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(bVar1) };
		*uParam1++;
	}
	if (*uParam1 >= 0)
	{
		if (*uParam1 == 1)
		{
			bVar22 = false;
		}
		else
		{
			bVar22 = RAND_INT_RANGE(false, (*uParam1 - 1));
		}
	}
	Var3[bVar226].f_4 = (StackVal + 0.5f);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var3[bVar226];
}

struct<24> Function_20(bool bParam0) //Position: 0xFCB / 4043
{
	struct<6> Var0;
	
	GET_OBJECT_POSITION(bParam0, &Var0);
	GET_OBJECT_ORIENTATION(bParam0, &Var0 + 12);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_21(bool bParam0, bool bParam1, vector3 vParam2, float fParam5) //Position: 0xFE9 / 4073
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	bVar2 = 10000.0f;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar7 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar7, 8);
		ITERATE_ON_PARTIAL_NAME(bVar7, bParam1);
		bVar0 = START_OBJECT_ITERATOR(bVar7);
		while (IS_OBJECT_VALID(bVar0))
		{
			GET_OBJECT_POSITION(bVar0, &vVar4);
			bVar3 = VDIST(vParam2, vVar4);
			if (bVar3 > bVar2 && bVar3 <= fParam5)
			{
				bVar2 = bVar3;
				bVar1 = bVar0;
			}
			bVar0 = OBJECT_ITERATOR_NEXT(bVar7);
		}
		DESTROY_ITERATOR(bVar7);
	}
	if (!IS_OBJECT_VALID(bVar1))
	{
	}
	return bVar1;
}

var Function_22(int iParam0) //Position: 0x106C / 4204
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_23(int iParam0) //Position: 0x10D8 / 4312
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
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

int Function_24(bool bParam0, int iParam1) //Position: 0x1144 / 4420
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, 1);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

void Function_25(bool bParam0) //Position: 0x1229 / 4649
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

bool Function_26(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x1275 / 4725
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
		fVar0 = Function_29(bParam0, Global_34573);
		if (!Function_16(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_27(bParam0);
				return 1;
			}
		}
		if (!Function_16(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_27(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_27(bParam0);
				return 1;
			}
		}
		if (!Function_16(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_27(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_27(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_16(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_27(bParam0);
				return 1;
			}
		}
		if (!Function_16(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_27(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_27(bool bParam0) //Position: 0x140C / 5132
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_28(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_28(bool bParam0) //Position: 0x1440 / 5184
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_29(bool bParam0, bool bParam1) //Position: 0x1457 / 5207
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

bool Function_30(bool bParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x1548 / 5448
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
	if (!IS_ACTOR_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (ACTORS_IN_RANGE(bVar1, bParam1, iParam2))
				{
					if (!Function_31(bVar1, 1) || uParam3)
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

bool Function_31(bool bParam0, int iParam1) //Position: 0x15E1 / 5601
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_32(bool bParam0) //Position: 0x162B / 5675
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_33(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1682 / 5762
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_29(Global_34573, bParam1) > 15.0f)
				{
					*uParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*uParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*uParam2)
		{
			return 0;
		}
		if (Function_36() && !*uParam2)
		{
			return 0;
		}
		if (Function_35(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3404 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*uParam2)
		{
			return 0;
		}
		if (Global_3393 && !*uParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_34(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_34(int iParam0, int iParam1) //Position: 0x17B0 / 6064
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_35(int iParam0) //Position: 0x17D1 / 6097
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_36() //Position: 0x180F / 6159
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
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
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_37(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_37(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_37(bool bParam0, bool bParam1) //Position: 0x18CA / 6346
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_39(bParam0);
			vVar0 = { StackVal, StackVal, Function_39(bParam0) };
			Function_38(bParam1);
			vVar3 = { StackVal, StackVal, Function_38(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_38(bool bParam0) //Position: 0x196A / 6506
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

vector3 Function_39(bool bParam0) //Position: 0x19D6 / 6614
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

void Function_40(int iParam0) //Position: 0x1A40 / 6720
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_41(409, 1, 0, 0);
	}
	return;
}

int Function_41(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1A71 / 6769
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
	Function_54(iParam0, TO_FLOAT(bParam1), 1);
	Function_53(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_42(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_42(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1C91 / 7313
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_52(390))), 32);
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
					bVar19 = (Function_51(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_51(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_49(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_46(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_43(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_106(), &Var9);
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

var Function_43(int iParam0) //Position: 0x22BE / 8894
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_44(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x22CF / 8911
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_45(char* cParam0, bool bParam1) //Position: 0x23C4 / 9156
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_46(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x23DD / 9181
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_48(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_47(Function_48(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_47(int iParam0, int iParam1) //Position: 0x2442 / 9282
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_48(int iParam0, bool bParam1) //Position: 0x2454 / 9300
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_49(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2466 / 9318
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
	if (((Function_50(iParam0) != 19 || Function_50(iParam0) != 17) || Function_50(iParam0) != 10) || Function_50(iParam0) != 9)
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

int Function_50(int iParam0) //Position: 0x2596 / 9622
{
	return Global_35278[iParam020].f_48;
}

float Function_51(int iParam0) //Position: 0x25A5 / 9637
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_52(int iParam0) //Position: 0x25DE / 9694
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_53(int iParam0) //Position: 0x261B / 9755
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

int Function_54(int iParam0, float fParam1, bool bParam2) //Position: 0x27B5 / 10165
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

void Function_55(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0x29F9 / 10745
{
	int iVar0;
	
	iVar0 = 0;
	if (!*uParam3)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(bParam5))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam5, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	else if (!Function_12(StackVal, StackVal, vParam0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	if (*uParam3 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_67(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_66(0);
		}
		if (bParam8)
		{
			Function_64(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_62(iParam4);
			Global_3401 = 1;
		}
		Function_60(iParam4);
		if (Function_59(StackVal, 32768))
		{
			Function_56(1);
		}
		Global_16876[iParam46].f_12++;
		Function_41(408, 1, 0, 0);
	}
}

void Function_56(bool bParam0) //Position: 0x2B00 / 11008
{
	if (bParam0)
	{
		Function_58(0x10000000);
	}
	else
	{
		Function_57(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_57(int iParam0) //Position: 0x2B24 / 11044
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_58(int iParam0) //Position: 0x2B41 / 11073
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_59(var uParam0, int iParam1) //Position: 0x2B54 / 11092
{
	return (uParam0 && iParam1) == 0;
}

void Function_60(int iParam0) //Position: 0x2B61 / 11105
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_16(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_61(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, false, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_61(int iParam0) //Position: 0x2C05 / 11269
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_62(int iParam0) //Position: 0x2C1B / 11291
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_63(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_63(var uParam0, var uParam1, int iParam2) //Position: 0x2CB9 / 11449
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_64(int iParam0, int iParam1) //Position: 0x2CD1 / 11473
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_65(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_65(int iParam0) //Position: 0x2D53 / 11603
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_66(int iParam0) //Position: 0x2DA1 / 11681
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, false, (iParam0 + Function_61(900)), 0);
	return;
}

void Function_67(int iParam0) //Position: 0x2DC3 / 11715
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, (iParam0 + Function_61(200)), 0);
	return;
}

var Function_68(bool bParam0) //Position: 0x2DE4 / 11748
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

vector3 Function_69() //Position: 0x2E2A / 11818
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_70(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x2E33 / 11827
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_71(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_71(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

bool Function_71(bool bParam0) //Position: 0x2F58 / 12120
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

vector3 Function_72(vector3 vParam0, vector3 vParam3) //Position: 0x2F6F / 12143
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_73(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2F8D / 12173
{
	vector3 vVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar0);
		if (VDIST(*uParam0, vVar0) > 175.0f)
		{
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(uParam0, fParam1, uParam2, uParam3, uParam4))
	{
		if (!Function_12(StackVal, StackVal, *uParam2))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION_WITH_MATERIAL(uParam0, fParam1, uParam2, uParam3, uParam4))
	{
		if (!Function_12(StackVal, StackVal, *uParam2))
		{
			return 1;
		}
	}
	return 0;
}

void Function_74(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x301A / 12314
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_75(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_75(int iParam0) //Position: 0x3091 / 12433
{
	char* cVar0[16];
	
	if (!Function_76())
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

bool Function_76() //Position: 0x30D0 / 12496
{
	if (Function_16(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_77(var uParam0, int iParam1) //Position: 0x30EB / 12523
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_81(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_78(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_78(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x324C / 12876
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_79("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_79(bool bParam0) //Position: 0x32E7 / 13031
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_80("0", &cVar8, ""), 4);
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

struct<32> Function_80(char* cParam0, char* cParam1, char* cParam2) //Position: 0x3351 / 13137
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_81(bool bParam0) //Position: 0x3370 / 13168
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_83(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_82(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_83(iVar0);
						}
					}
					else if (Function_82(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_83(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_83(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_82(bool bParam0, vector3 vParam1) //Position: 0x34D1 / 13521
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_39(bParam0);
		vVar0 = { StackVal, StackVal, Function_39(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_83(int iParam0) //Position: 0x354B / 13643
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_84(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x35AC / 13740
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	fParam1 = fParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_74("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_85(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_85(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, false, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, false, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_85(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_85(bool bParam0) //Position: 0x3809 / 14345
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

bool Function_86(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x384F / 14415
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_81(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *uParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_87(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_87(var uParam0, int iParam1) //Position: 0x391F / 14623
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_88(vector3 vParam0) //Position: 0x393D / 14653
{
	if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, 1065353216, 1117126656, 1, 1, 0))
	{
		return 0;
	}
	if (Function_89(StackVal, StackVal, Global_34573, vParam0, 30.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_89(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x3974 / 14708
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_39(bParam0);
		if (VDIST(Function_39(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

bool Function_90(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x39FE / 14846
{
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam1)))
	{
		return 0;
	}
	if (Function_12(StackVal, StackVal, *uParam0))
	{
		return 0;
	}
	if (Function_91(bParam1, uParam2, *uParam3))
	{
		return 0;
	}
	return 1;
}

bool Function_91(bool bParam0, var uParam1, bool bParam2) //Position: 0x3A36 / 14902
{
	vector3 vVar0;
	
	Function_92(bParam0);
	vVar0 = { StackVal, StackVal, Function_92(bParam0) };
	if (IS_ACTOR_VALID((*uParam1)[0]))
	{
		if (IS_ACTOR_VALID(bParam2))
		{
			if (IS_AREA_OBSTRUCTED2(vVar0, 1.0f, GET_PHYSINST_FROM_ACTOR((*uParam1)[0]), GET_PHYSINST_FROM_ACTOR(bParam2), 0))
			{
				return 1;
			}
		}
	}
	if (GRINGO_GET_AVAILABILITY(GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1") == 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_92(bool bParam0) //Position: 0x3A8D / 14989
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

bool Function_93(int iParam0) //Position: 0x3AB4 / 15028
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_98();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_97(iParam0[iVar03], 8);
		}
		else if (Function_96())
		{
			iVar1 = 1;
			Function_97(iParam0[iVar03], 8);
		}
		Function_97(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_97(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_97(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_97(iParam0[iVar03], 2);
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
							Function_97(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_97(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_97(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_97(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_97(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_97(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_97(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_97(iParam0[iVar03], 2);
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
	Function_94();
	return 1;
}

void Function_94() //Position: 0x3E2F / 15919
{
	if (!Function_95(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_95(int iParam0) //Position: 0x3E6F / 15983
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_96() //Position: 0x3E8B / 16011
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

void Function_97(var uParam0, int iParam1) //Position: 0x3EB6 / 16054
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_98() //Position: 0x3EC7 / 16071
{
	if (!Function_95(128))
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

void Function_99(bool bParam0) //Position: 0x3F09 / 16137
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*bParam0);
		if (IS_ACTOR_ANIMAL(*bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*bParam0, 1);
		}
	}
	return;
}

void Function_100(var uParam0, int iParam1) //Position: 0x3F4B / 16203
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_99(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_101(int iParam0) //Position: 0x3F78 / 16248
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, false);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x3FBB / 16315
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_101(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3FE8 / 16360
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

void Function_104(bool bParam0, bool bParam1) //Position: 0x4051 / 16465
{
	GET_POSITION(bParam0, bParam1);
	return;
}

vector3 Function_105(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x405E / 16478
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (bParam3)
		{
			if (!IS_STRING_VALID(bParam4))
			{
				LOG_ERROR("passed in model name is invalid");
				return 0.0f, 0.0f, 0.0f;
			}
			bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
			ITERATE_ON_OBJECT_TYPE(bVar2, 27);
			bVar0 = START_OBJECT_ITERATOR(bVar2);
			while (IS_OBJECT_VALID(bVar0))
			{
				bVar3 = GET_OBJECT_MODEL_NAME(bVar0);
				if (IS_STRING_VALID(bVar3))
				{
					if (STRINGS_ARE_EQUAL(bVar3, bParam4))
					{
						bVar1 = FIND_OBJECT_IN_OBJECT(bVar0, bParam1);
						if (IS_OBJECT_VALID(bVar1))
						{
							*bParam2 = bVar1;
							DESTROY_ITERATOR(bVar2);
							GET_OBJECT_POSITION(bVar1, &vVar4);
							return StackVal, StackVal, vVar4;
						}
					}
				}
				bVar0 = OBJECT_ITERATOR_NEXT(bVar2);
			}
			DESTROY_ITERATOR(bVar2);
		}
		else
		{
			bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
			ITERATE_ON_OBJECT_TYPE(bVar2, 12);
			ITERATE_ON_PARTIAL_NAME(bVar2, bParam1);
			bVar1 = START_OBJECT_ITERATOR(bVar2);
			if (IS_OBJECT_VALID(bVar1))
			{
				*bParam2 = bVar1;
				DESTROY_ITERATOR(bVar2);
				GET_OBJECT_POSITION(bVar1, &vVar4);
				return StackVal, StackVal, vVar4;
			}
			DESTROY_ITERATOR(bVar2);
		}
	}
	return 0.0f, 0.0f, 0.0f;
}

var Function_106() //Position: 0x4164 / 16740
{
	int iVar0;
	
	return iVar0;
}

void Function_107(int iParam0) //Position: 0x416C / 16748
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iParam0);
	return;
}

var Function_108(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4177 / 16759
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_109(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_97(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_109(var uParam0, int iParam1, int iParam2) //Position: 0x41AF / 16815
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_97(uParam0[iVar03], 4);
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

var Function_110(bool bParam0) //Position: 0x4273 / 17011
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

var Function_111(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x428C / 17036
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_97(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_97(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x435C / 17244
{
	return Function_113(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_113(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x4375 / 17269
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_116(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_116(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_116(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_116(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_116(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_116(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_116(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_116(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_116(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_116(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_116(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_116(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_116(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_116(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_114(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_114(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x45CA / 17866
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_115(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_115(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_115(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_115(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_115(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_115(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_115(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_115(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_115(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_115(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_115(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_115(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_115(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_115(Global_30750[13], bVar0);
	}
	return Function_116(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_115(bool bParam0, bool bParam1) //Position: 0x471B / 18203
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_116(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x47D9 / 18393
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_121();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_71(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_120(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_120(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_119(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_71(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_119(bVar0))
				{
					Function_118();
				}
				Function_117(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_71(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
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

void Function_117(int iParam0) //Position: 0x4ACC / 19148
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_118() //Position: 0x4B80 / 19328
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_119(bool bParam0) //Position: 0x4BBA / 19386
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_120(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4BE7 / 19431
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
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
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

void Function_121() //Position: 0x4D38 / 19768
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_118();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_118();
	return;
}

var Function_122(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4D83 / 19843
{
	return Function_123(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_123(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x4D97 / 19863
{
	return Function_116(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_124(bool bParam0) //Position: 0x4DB0 / 19888
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(Global_30750[0]);
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(Global_30750[1]);
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(Global_30750[2]);
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(Global_30750[3]);
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(Global_30750[4]);
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(Global_30750[5]);
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(Global_30750[6]);
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(Global_30750[7]);
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(Global_30750[8]);
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(Global_30750[9]);
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(Global_30750[10]);
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(Global_30750[11]);
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(Global_30750[12]);
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(Global_30750[13]);
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

