//Decompiled with MagicRDR v1.0
//Function Count : 109
//Statics Count : 158
//Natives Count : 247
//Parameters Count : 84

#region Local Var
	var uLocal_0 = 12;
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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
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
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	char* cLocal_58[32] = "";
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	struct<329> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	struct<8> Var1;
	struct<6> Var9;
	int iVar19;
	int iVar21;
	
	bVar0 = false;
	iVar19 = 0;
	Function_108(&ScriptParam_0);
	if (Function_107(StackVal, *(&ScriptParam_0 + 284)))
	{
		bVar0 = 5;
	}
	else if (ScriptParam_0.f_52 >= 0 || ScriptParam_0.f_52 < 6)
	{
		bVar0 = 5;
	}
	while (!IS_EXITFLAG_SET())
	{
		iVar19 = 0;
		if (!IS_ACTOR_VALID(&Global_54076) || !IS_ACTOR_ALIVE(&Global_54076))
		{
			bVar0 = 6;
		}
		Function_106(&ScriptParam_0, 0);
		switch (bVar0)
		{
			case 0x00000000:
				if (ScriptParam_0.f_272 != 0 || IS_LAYOUTREF_VALID(&ScriptParam_0) != 0)
				{
					LOG_ERROR("Tried to run without calling CREATEATTACK_INIT");
					bVar0 = 5;
				}
				else if (Function_92(&ScriptParam_0))
				{
					if (Function_86(&uLocal_0))
					{
						if (Function_107(StackVal, *(&ScriptParam_0 + 284)))
						{
							Function_85(&Var1, 4294967295, 5.0f, 0, 4294967295);
							Function_84(&Var1, 10.0f);
							Function_83(StackVal, &Var9, 0, *(&ScriptParam_0 + 296), 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
							Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var9, Var1, 1);
							*(&ScriptParam_0 + 284) = Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var9, Var1, 1);
							if (!Function_107(StackVal, *(&ScriptParam_0 + 284)))
							{
								iVar21 = 1;
							}
						}
						else
						{
							iVar21 = 1;
						}
					}
					if (iVar21 == 1)
					{
						bVar0 = 2;
					}
				}
				ScriptParam_0.f_328 = 0;
				break;
			
			case 0x00000002:
				if (ScriptParam_0.f_52 >= 0 || ScriptParam_0.f_52 < 6)
				{
					bVar0 = 5;
					ScriptParam_0.f_328 = 0;
					break;
				}
				if (!Function_64(&ScriptParam_0))
				{
					bVar0 = 5;
					ScriptParam_0.f_328 = 0;
					break;
				}
				if (ScriptParam_0.f_324 == 1)
				{
					if (!Function_54(&ScriptParam_0))
					{
						bVar0 = 5;
						ScriptParam_0.f_328 = 0;
						break;
					}
					ScriptParam_0.f_324 = 0;
				}
				Function_53(&ScriptParam_0 + 128, 2);
				Function_51(&uLocal_50);
				bVar0 = 3;
				ScriptParam_0.f_328 = 0;
				Function_51(&iLocal_54);
				break;
			
			case 0x00000003:
				Function_43(&ScriptParam_0);
				if (Function_42(ScriptParam_0.f_128, 128))
				{
					Function_41(&ScriptParam_0 + 128, 128);
					if (Function_42(ScriptParam_0.f_128, 4))
					{
						if (ScriptParam_0.f_124 == 4294967295)
						{
							Function_40(&ScriptParam_0 + 80, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						else
						{
							Function_40(&ScriptParam_0 + 80, ScriptParam_0.f_124, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						Function_39(&ScriptParam_0 + 80, 1);
					}
					else
					{
						Function_39(&ScriptParam_0 + 80, 0);
					}
				}
				if (!Function_38(&ScriptParam_0 + 80))
				{
					if (ScriptParam_0.f_276 == 1)
					{
						bVar0 = 5;
					}
					else
					{
						bVar0 = 6;
					}
				}
				else
				{
					if (ScriptParam_0.f_324 == 1)
					{
						if (!Function_54(&ScriptParam_0))
						{
							bVar0 = 5;
							break;
						}
						ScriptParam_0.f_324 = 0;
					}
					if (Function_37(&ScriptParam_0 + 64) != 0 && ScriptParam_0.f_280 != 1)
					{
						bVar0 = 6;
					}
					else if (ScriptParam_0.f_56 == Function_37(&ScriptParam_0 + 64) && Function_37(&ScriptParam_0 + 64) < 0)
					{
						if (Function_54(&ScriptParam_0))
						{
						}
						else
						{
							bVar0 = 5;
							break;
						}
					}
					if (ScriptParam_0.f_264 == 1)
					{
						Function_36(&ScriptParam_0 + 80, &ScriptParam_0 + 312, 2, 0);
						ScriptParam_0.f_264 = 0;
					}
				}
				break;
			
			case 0x00000005:
				if (ScriptParam_0.f_276 == 0)
				{
					bVar0 = 6;
				}
				ScriptParam_0.f_328 = 500;
				break;
			
			case 0x00000006:
				ScriptParam_0.f_328 = 0;
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		ScriptParam_0.f_328 = 0;
		Function_34(&ScriptParam_0, 0);
		WAIT(ScriptParam_0.f_328);
	}
	Function_32(0);
	Function_106(&ScriptParam_0, 0);
	ScriptParam_0.f_272 = 0;
	Function_34(&ScriptParam_0, 0);
	Function_5(&ScriptParam_0);
	Function_1(&uLocal_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x358 / 856
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x380 / 896
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

void Function_3(struct<13> Param0) //Position: 0x4CB / 1227
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x4E8 / 1256
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(struct<261> Param0) //Position: 0x506 / 1286
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_ITERATOR_VALID(&Param0 + 16))
	{
		DESTROY_ITERATOR(&Param0 + 16);
	}
	if (IS_ACTORSET_VALID(&Param0 + 64))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(&Param0 + 64) - 1))
		{
			GET_ACTOR_FROM_ACTORSET(&Param0 + 64, bVar2);
			bVar2++;
		}
		DESTROY_ACTORSET(&Param0 + 64);
	}
	if (SQUAD_IS_VALID(&Param0 + 80))
	{
		bVar2 = false;
		while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar2);
			CLEAR_ACTOR_MAX_SPEED(&uVar0);
			if (Param0.f_260 == 0)
			{
				Function_19(&Param0, &uVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&Param0 + 80));
	}
	if (IS_ACTORSET_VALID(&Param0 + 88))
	{
		if (Param0.f_260 == 0)
		{
			Function_10(&Param0 + 88, 2, 0, 2);
		}
		else
		{
			Function_8(&Param0 + 88);
		}
		DESTROY_ACTORSET(&Param0 + 88);
	}
	if (!Function_42(Param0.f_128, 16))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0);
		DESTROY_LAYOUT(&Param0);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 136))
	{
		Function_7(&Param0 + 136);
		DESTROY_OBJECTSET(&Param0 + 136);
	}
	iVar1 = Function_6(&Param0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

int Function_6(int iParam0) //Position: 0x648 / 1608
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(&iParam0 + 16);
	return &iVar0;
}

void Function_7(var uParam0) //Position: 0x66D / 1645
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

void Function_8(int iParam0) //Position: 0x6BC / 1724
{
	bool bVar0;
	
	Function_9(&iParam0);
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_9(int iParam0) //Position: 0x708 / 1800
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(&iParam0, GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_10(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x767 / 1895
{
	var uVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(&uParam0))
	{
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(&uParam0) - 1))
		{
			uVar0 = GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_11(&uVar0, &iParam1, &uParam2, &iParam3, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar0));
			}
			bVar1++;
		}
		DISBAND_ACTORSET(&uParam0);
		return 1;
	}
	return 0;
}

int Function_11(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x7DA / 2010
{
	char* cVar0[32];
	
	Function_18();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_17(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_16(&uParam0, 0);
	Function_15(&uParam0, iParam1);
	Function_14(&uParam0, &uParam2);
	Function_13(&uParam0, uParam3);
	if (Function_12(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_12(int iParam0) //Position: 0xA46 / 2630
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_13(var uParam0, bool bParam1) //Position: 0xA6A / 2666
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xA8E / 2702
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_15(var uParam0, bool bParam1) //Position: 0xAB4 / 2740
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_16(var uParam0, bool bParam1) //Position: 0xADB / 2779
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_17(bool bParam0) //Position: 0xAFF / 2815
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_18() //Position: 0xB1E / 2846
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

int Function_19(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0xB6D / 2925
{
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return 0;
	}
	if (Function_31(&uParam1, &iParam0 + 80, 1))
	{
		SQUAD_LEAVE(&uParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam1)))
		{
			if (GET_MOUNT(&uParam1) != Function_21(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (&iParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(&uParam1));
				}
				else
				{
					Function_20(GET_MOUNT(&uParam1), iParam2, 0, 2);
				}
			}
		}
		if (&iParam3 == 1)
		{
			DESTROY_ACTOR(&uParam1);
		}
		else
		{
			Function_20(&uParam1, iParam2, 0, 2);
		}
	}
	else if (IS_ACTOR_IN_ACTORSET(&iParam0 + 88, &uParam1))
	{
		REMOVE_ACTORSET_MEMBER(&iParam0 + 88, &uParam1);
		if (&iParam3 == 1)
		{
			DESTROY_ACTOR(&uParam1);
		}
		else
		{
			Function_20(&uParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_20(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xC2F / 3119
{
	int iVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(iVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_11(&uVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_11(&uParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_21(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7) //Position: 0xD1D / 3357
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_30(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_29())
		{
			return "";
		}
	}
	if (!Function_27())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_26();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_25(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_25(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_25(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_25(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_24(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_24(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_23(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_23(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&uParam2, &uParam3, &uParam4);
				if (!Function_107(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_23(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_23(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_22(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x107A / 4218
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

var Function_23() //Position: 0x10C4 / 4292
{
	int iVar0;
	
	return &iVar0;
}

var Function_24(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x10CD / 4301
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
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
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_25(bool bParam0) //Position: 0x116D / 4461
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_26() //Position: 0x1196 / 4502
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

bool Function_27() //Position: 0x120E / 4622
{
	if (Function_28() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_28() //Position: 0x1224 / 4644
{
	return Global_21369.f_244;
}

bool Function_29() //Position: 0x122F / 4655
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_30(var uParam0, bool bParam1, bool bParam2) //Position: 0x124F / 4687
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_53(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_53(&Global_21369 + 72 + 32, 64);
	}
	return;
}

bool Function_31(int iParam0, int iParam1, bool bParam2) //Position: 0x127E / 4734
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

void Function_32(int iParam0) //Position: 0x12C6 / 4806
{
	Global_21369 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369, 0, 0, (&iParam0 + Function_33(90)), 0);
	return;
}

int Function_33(int iParam0) //Position: 0x12E5 / 4837
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

int Function_34(struct<329> Param0) //Position: 0x12FC / 4860
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_6(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			DECOR_SET_BOOL(&iParam1, "catk_bdi", Param0.f_272);
			DECOR_SET_FLOAT(&iParam1, "catk_spx", Param0.f_284);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spz");
			DECOR_SET_FLOAT(&iParam1, "catk_scx", Param0.f_296);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scz");
			DECOR_SET_BOOL(&iParam1, "catk_krd", Param0.f_276);
			DECOR_SET_BOOL(&iParam1, "catk_krt", Param0.f_280);
			DECOR_SET_OBJECT(&iParam1, "catk_atv", &Param0 + 312);
			DECOR_SET_INT(&iParam1, "catk_ats", Param0.f_320);
			DECOR_SET_BOOL(&iParam1, "catk_bus", Param0.f_324);
			DECOR_SET_OBJECT(&iParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(&Param0 + 80));
			DECOR_SET_INT(&iParam1, "catk_wtm", Param0.f_328);
			DECOR_SET_BOOL(&iParam1, "catk_ovr", Param0.f_260);
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_35((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(&iParam1, &cVar5, (*&Param0 + 144)[bVar0]);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncWrite - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncWrite - invalid write attempted");
	}
	return 1;
}

bool Function_35(int iParam0) //Position: 0x1570 / 5488
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_36(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1587 / 5511
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&uParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &uParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

int Function_37(int iParam0) //Position: 0x15DF / 5599
{
	int iVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = GET_ACTORSET_SIZE(&iParam0);
	iVar3 = 0;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		uVar1 = GET_ACTOR_FROM_ACTORSET(&iParam0, bVar2);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				iVar3++;
			}
		}
		bVar2++;
	}
	return iVar3;
}

bool Function_38(var uParam0) //Position: 0x162A / 5674
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
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

void Function_39(var uParam0, bool bParam1) //Position: 0x1688 / 5768
{
	var uVar0;
	int iVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar1 = 0;
		while (iVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar1);
			if (IS_ACTOR_VALID(&uVar0))
			{
				HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(&uVar0, bParam1);
			}
			bVar1++;
		}
	}
	else
	{
		LOG_ERROR("HUD_SET_SHOOT_BLIP_ENABLED_FOR_SQUAD got invalid squad");
	}
	return;
}

void Function_40(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x170B / 5899
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_41(var uParam0, int iParam1) //Position: 0x181B / 6171
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_42(var uParam0, int iParam1) //Position: 0x1831 / 6193
{
	return (uParam0 && iParam1) == 0;
}

int Function_43(struct<129> Param0) //Position: 0x183E / 6206
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	bool bVar6;
	bool bVar7;
	var uVar8;
	
	if (Function_47(&iLocal_54, 2.0f))
	{
		if (IS_ACTORSET_VALID(&Param0 + 88))
		{
			bVar7 = false;
			while (bVar7 < (GET_ACTORSET_SIZE(&Param0 + 88) - 1))
			{
				uVar0 = GET_ACTOR_FROM_ACTORSET(&Param0 + 88, bVar7);
				if (IS_ACTOR_VALID(&uVar0))
				{
					if (IS_ACTOR_DEAD(GET_MOST_RECENT_RIDER(&uVar0)))
					{
						Function_19(&Param0, &uVar0, 2, 0);
					}
				}
				bVar7++;
			}
		}
		bVar7 = false;
		while (bVar7 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar7);
			if (IS_ACTOR_VALID(&uVar0))
			{
				GET_POSITION(&uVar0, &Var2);
				uVar8 = GET_BLIP_ON_ACTOR(&uVar0);
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					if (VDIST(Global_54078, Var2) < 42.0f)
					{
						Function_19(&Param0, &uVar0, 2, 0);
					}
					if (IS_BLIP_VALID(&uVar8))
					{
						REMOVE_BLIP(&uVar8);
					}
				}
				else if (!IS_BLIP_VALID(&uVar8))
				{
					if (!IS_ACTOR_CRIPPLED(&uVar0, 5))
					{
						ADD_BLIP_FOR_ACTOR(&uVar0, 322, 0, 2, 0);
					}
				}
				if (!Function_42(Param0.f_128, 2048))
				{
					if (IS_ACTORSET_VALID(&Param0 + 64))
					{
						if (GET_ACTORSET_SIZE(&Param0 + 64) >= 0)
						{
							uVar1 = Function_44(&uVar0, &Param0 + 64);
							if (IS_ACTOR_VALID(&uVar1))
							{
								GET_POSITION(&uVar1, &Var4);
								bVar6 = VDIST(Var4, Var2);
								if ((bVar6 < 150.0f && Function_47(&uLocal_50, 10.0f)) && !WOULD_ACTOR_BE_VISIBLE(0, &Var2, 150.0f))
								{
									Function_19(&Param0, &uVar0, 2, 1);
								}
								else if (VDIST(Global_54078, Var2) < 20.0f && IS_ACTOR_RIDING_AND_IN_SADDLE(&uVar0))
								{
									SET_ACTOR_MAX_SPEED_ABSOLUTE(&uVar0, 30.0f);
								}
								else if (bVar6 < 10.0f && IS_ACTOR_RIDING_AND_IN_SADDLE(&uVar0))
								{
									SET_ACTOR_MAX_SPEED_ABSOLUTE(&uVar0, 24.0f);
								}
								else if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&uVar0))
								{
									CLEAR_ACTOR_MAX_SPEED(&uVar0);
									if (!Function_42(Param0.f_128, 4096))
									{
										DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uVar0);
									}
								}
							}
						}
					}
				}
			}
			if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&uVar0))
			{
				CLEAR_ACTOR_MAX_SPEED(&uVar0);
			}
			bVar7++;
		}
		Function_51(&iLocal_54);
	}
	return 1;
}

var Function_44(int iParam0, int iParam1) //Position: 0x1A53 / 6739
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(&iParam1) - 1))
	{
		if (Function_45(GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_45(GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0), &iParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(&iParam1, bVar1);
	}
	LOG_WARNING("\Couldn't find a closest actorset member from 'Them' to 'Me' in GET_CLOSEST_ACTORSET_MEMBER!");
	return "";
}

float Function_45(int iParam0, int iParam1) //Position: 0x1B1C / 6940
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&iParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_46(&uVar0, &uVar2);
	return iVar4;
}

var Function_46(struct<2> Param0) //Position: 0x1B3D / 6973
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_47(var uParam0, float fParam1) //Position: 0x1B5C / 7004
{
	if (Function_50(&uParam0))
	{
		if (Function_48(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_48(vector3 vParam0) //Position: 0x1B7A / 7034
{
	if (Function_50(&vParam0))
	{
		if (Function_49(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_49(int iParam0) //Position: 0x1C47 / 7239
{
	return Function_42(iParam0, 2);
}

bool Function_50(int iParam0) //Position: 0x1C55 / 7253
{
	return Function_42(iParam0, 1);
}

void Function_51(int iParam0) //Position: 0x1C63 / 7267
{
	Function_52(&iParam0, 0.0f);
	return;
}

void Function_52(vector3 vParam0) //Position: 0x1C70 / 7280
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_53(&vParam0, 1);
	Function_41(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_53(var uParam0, int iParam1) //Position: 0x1C95 / 7317
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_54(struct<321> Param0) //Position: 0x1CA6 / 7334
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!SQUAD_IS_VALID(&Param0 + 80))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, iVar0);
		if (IS_ACTOR_ALIVE(&uVar3))
		{
			if (IS_ACTORSET_VALID(&Param0 + 64))
			{
				Function_63(&uVar3, &Param0 + 64, Function_42(Param0.f_128, 8));
			}
			TASK_CLEAR(&uVar3);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar3);
			Function_59(&Param0);
			if (IS_OBJECTSET_VALID(&Param0 + 136))
			{
				bVar1 = false;
				while (bVar1 < (GET_OBJECTSET_SIZE(&Param0 + 136) - 1))
				{
					uVar2 = GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &Param0 + 136));
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar3, &uVar2, 4, 0);
					bVar1++;
				}
			}
			switch (Param0.f_320)
			{
				case 0x00000001:
					TASK_WANDER_IN_VOLUME(&uVar3, &Param0 + 312, -1f);
					break;
				
				case 0x00000002:
					TASK_WANDER_IN_VOLUME(&uVar3, &Param0 + 312, -1f);
					break;
				
				case 0x00000004:
					if (IS_ACTORSET_VALID(&Param0 + 64))
					{
						if (GET_ACTORSET_SIZE(&Param0 + 64) >= 0)
						{
							bVar1 = false;
							while (bVar1 < (GET_ACTORSET_SIZE(&Param0 + 64) - 1))
							{
								uVar4 = GET_ACTOR_FROM_ACTORSET(&Param0 + 64, bVar1);
								if (IS_ACTOR_ALIVE(&uVar4))
								{
									MEMORY_CONSIDER_AS(&uVar3, &uVar4, 2);
								}
								bVar1++;
							}
							uVar4 = Function_57(Function_58(&Param0 + 80), &Param0 + 64);
							if (IS_ACTOR_VALID(&uVar4))
							{
								TASK_FOLLOW_ACTOR(&uVar3, &uVar4);
								TASK_PRIORITY_SET(&uVar3, false);
							}
							else
							{
								LOG_ERROR("Attacker cannot follow actor");
							}
						}
					}
					break;
				
				case 0x00000003:
					if (IS_ACTORSET_VALID(&Param0 + 64))
					{
						if (GET_ACTORSET_SIZE(&Param0 + 64) >= 0)
						{
							bVar1 = false;
							while (bVar1 < (GET_ACTORSET_SIZE(&Param0 + 64) - 1))
							{
								uVar4 = GET_ACTOR_FROM_ACTORSET(&Param0 + 64, bVar1);
								if (IS_ACTOR_ALIVE(&uVar4))
								{
									MEMORY_CONSIDER_AS(&uVar3, &uVar4, 4);
								}
								bVar1++;
							}
						}
						AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar3, 1);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 48, 5.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 49, 5.0f);
						SET_ACTOR_MAX_SPEED(&uVar3, 3);
						TASK_OVERRIDE_SET_MOVETYPE(&uVar3, 3);
						Function_55(StackVal, &uVar3, &Param0 + 64, 5.0f, Vector(0.0f, 0.0f, -10.0f), 1, Function_42(Param0.f_128, 256));
					}
					break;
				
				case 0x00000006:
					if (IS_ACTORSET_VALID(&Param0 + 64))
					{
						if (GET_ACTORSET_SIZE(&Param0 + 64) >= 0)
						{
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 28, 0.0f);
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 31, -1.0f);
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 37, 2.0f);
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 38, 0,5f);
							COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uVar3, 0);
							uVar4 = Function_57(&uVar3, &Param0 + 64);
							TASK_CLEAR(&uVar3);
							TASK_KILL_CHAR(&uVar3, &uVar4);
							TASK_PRIORITY_SET(&uVar3, false);
						}
					}
					break;
				
				case 0x00000005:
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 28, 0.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 31, -1.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 37, 2.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 38, 0,5f);
					if (IS_ACTORSET_VALID(&Param0 + 64))
					{
						if (GET_ACTORSET_SIZE(&Param0 + 64) >= 0)
						{
							bVar1 = false;
							while (bVar1 < (GET_ACTORSET_SIZE(&Param0 + 64) - 1))
							{
								uVar4 = GET_ACTOR_FROM_ACTORSET(&Param0 + 64, bVar1);
								if (IS_ACTOR_ALIVE(&uVar4))
								{
									MEMORY_CONSIDER_AS(&uVar3, &uVar4, 4);
								}
								bVar1++;
							}
						}
						AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar3, 1);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 48, 5.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar3, 49, 5.0f);
						SET_ACTOR_MAX_SPEED(&uVar3, 3);
						TASK_OVERRIDE_SET_MOVETYPE(&uVar3, 3);
						Function_55(StackVal, &uVar3, &Param0 + 64, 5.0f, Vector(0.0f, 0.0f, -10.0f), 1, Function_42(Param0.f_128, 256));
					}
					break;
				}
		}
		bVar0++;
	}
	if (IS_ACTORSET_VALID(&Param0 + 64))
	{
		Param0.f_56 = Function_37(&Param0 + 64);
	}
	else
	{
		Param0.f_56 = 0;
	}
	return 1;
}

int Function_55(var uParam0, int iParam1, float fParam2, struct<2> Param3, bool bParam5, bool bParam6) //Position: 0x206C / 8300
{
	var uVar0;
	var uVar1;
	
	if (!IS_ACTORSET_VALID(&iParam1))
	{
		LOG_WARNING("FOLLOW_AND_ATTACK_NEAREST_ACTORSET_MEMBER got invalid ACTORSET");
		return 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!GET_TASK_STATUS(&uParam0, 42) != 1)
		{
			if (IS_ACTORSET_VALID(&iParam1))
			{
				if (GET_ACTORSET_SIZE(&iParam1) >= 0)
				{
					uVar0 = Function_57(&uParam0, &iParam1);
					if (IS_ACTOR_VALID(&uVar0))
					{
						uVar1 = Param3;
						VNORMALIZE(&uVar1);
						if (bParam6 == 1)
						{
							ROTATE_VECTOR_XZ(&uVar1, RAND_FLOAT_RANGE(-60.0f, 60.0f), 0);
						}
						else
						{
							ROTATE_VECTOR_XZ(&uVar1, RAND_FLOAT_RANGE(0.0f, 359.0f), 0);
						}
						if (fParam2 > 12.0f)
						{
							fParam2 = 12.0f;
						}
						VSCALE(&uVar1, RAND_FLOAT_RANGE(fParam2, 15.0f));
						Function_56(&uParam0, 110.0f, 1.0f, 1.0f);
						TASK_FOLLOW_AND_ATTACK_OBJECT(&uParam0, GET_OBJECT_FROM_ACTOR(&uVar0), &uVar1, 3.0f, 10.0f, 0,1f, 1.0f, 0, 1);
						TASK_PRIORITY_SET(&uParam0, bParam5);
					}
					else
					{
						return 0;
					}
				}
			}
		}
	}
	LOG_WARNING("FOLLOW_AND_ATTACK_NEAREST_ACTORSET_MEMBER got invalid ACTORSET");
	return 0;
	return 0;
}

void Function_56(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x21E1 / 8673
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

var Function_57(var uParam0, int iParam1) //Position: 0x2232 / 8754
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (GET_ACTORSET_SIZE(&iParam1) != 0 || !IS_ACTORSET_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+20.0f;
	fVar3 = (fVar2 + 1.0f);
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(&iParam1) - 1))
	{
		if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0)))
		{
			fVar3 = Function_45(&uParam0, GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0));
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(&iParam1, bVar1);
	}
	return "";
}

var Function_58(var uParam0) //Position: 0x22BF / 8895
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
		bVar1++;
	}
	return "";
}

int Function_59(int iParam0) //Position: 0x230C / 8972
{
	var uVar0;
	
	Function_62(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 136))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("navoidVols"), 4);
		(&iParam0 + 136) = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, &iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(&iParam0 + 136))
		{
			return 0;
		}
	}
	return 1;
}

struct<32> Function_60(char* cParam0) //Position: 0x235C / 9052
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("0", &cVar8, ""), 4);
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

struct<32> Function_61(char* cParam0) //Position: 0x23C8 / 9160
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(int iParam0) //Position: 0x23EA / 9194
{
	char* cVar0[16];
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		strcpy(&cVar0, "catkslay", 16);
		memcpy(&cVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(&cVar0), 4);
		iParam0 = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

void Function_63(var uParam0, var uParam1, bool bParam2) //Position: 0x245A / 9306
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTORSET_VALID(&uParam1))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(&uParam1) - 1))
	{
		uVar1 = GET_ACTOR_FROM_ACTORSET(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uParam0, &uVar1);
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uParam0, &uVar1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

bool Function_64(struct<201> Param0) //Position: 0x24C5 / 9413
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<2> Var5;
	struct<2> Var7;
	var uVar9;
	struct<2> Var11;
	struct<2> Var13;
	var uVar15;
	char* cVar16[32];
	
	if (Function_107(StackVal, *(&Param0 + 284)))
	{
		LOG_ERROR("CreateAttack: Invalid spawn pos.");
		return 0;
	}
	if (!SQUAD_IS_VALID(&Param0 + 80))
	{
		strcpy(&cLocal_58, "atkSquad", 32);
		cLocal_58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(&cLocal_58) };
		*(&Param0 + 80) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0, &cLocal_58));
		PRINTSTRING("CREATEATTACK SQUAD created:");
		PRINTINT(&Param0 + 80);
		PRINTNL();
	}
	if (!SQUAD_IS_VALID(&Param0 + 80))
	{
		LOG_ERROR("CreateAttack: Invalid attacker squad.");
		return 0;
	}
	Function_73(&Param0, &Param0 + 80);
	strcpy(&cLocal_58, "atkForm", 32);
	cLocal_58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(&cLocal_58) };
	uVar4 = CREATE_POINT_IN_LAYOUT(&Param0, &cLocal_58, *(&Param0 + 284), *(&Param0 + 24));
	if (!IS_OBJECT_VALID(&uVar4))
	{
		LOG_ERROR("CreateAttack: Invalid object creation.");
		return 0;
	}
	Function_72(5.0f, 10);
	Var13 = { StackVal, Function_72(5.0f, 10) };
	if (!Function_71(&Var13))
	{
		LOG_ERROR("CreateAttack: Invalid formation.");
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < (Param0.f_52 - 1))
	{
		Function_70(&Var13, iVar0);
		GET_OBJECT_RELATIVE_POSITION(&uVar4, Function_70(&Var13, iVar0), &Var5);
		if (!Function_69(&Var5, 50.0f, &Var7, 10))
		{
			LOG_WARNING("Invalid results looking for a formation offset.");
			Var7 = Var5;
		}
		if (((StackVal && Function_107(Function_107(StackVal, Var11), *(&Param0 + 24))) && SQUAD_IS_VALID(&Param0 + 80)) && GET_ACTORSET_SIZE(&Param0 + 64) < 0)
		{
			SQUAD_COMPUTE_CENTROID(&Param0 + 80, &Var11);
			uVar9 = Vector(StackVal, StackVal, StackVal) - Vector(Var7, Var11, StackVal);
			*(&Param0 + 24) = Vector(0.0f, UNK_0x9C40E671(&uVar9), 0.0f);
		}
		if (STRINGS_ARE_EQUAL(&Param0 + 100, "") || !IS_STRING_VALID(&Param0 + 100))
		{
			cLocal_58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("catk_gen") };
		}
		else
		{
			strcpy(&cLocal_58, "catk_", 32);
			stradd(&cLocal_58, &Param0 + 100, 32);
			stradd(&cLocal_58, "_", 32);
			cLocal_58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(&cLocal_58) };
		}
		if (Function_42(Param0.f_128, 1))
		{
			if (!IS_ACTORSET_VALID(&Param0 + 88))
			{
				cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("cAtkHorseSet") };
				*(&Param0 + 88) = CREATE_ACTORSET_IN_LAYOUT(&Param0, &cVar16, 0);
			}
			if (STRINGS_ARE_EQUAL(&Param0 + 100, "") || !IS_STRING_VALID(&Param0 + 100))
			{
				cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("catk_gho") };
			}
			else
			{
				strcpy(&cVar16, "catkh_", 32);
				stradd(&cVar16, &Param0 + 100, 32);
				stradd(&cVar16, "_", 32);
				cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(&cVar16) };
			}
			if (!Function_42(Param0.f_128, 32))
			{
				uVar15 = (*&Param0 + 144)[(iVar0 % Param0.f_200)];
				uVar1 = Function_68(StackVal, StackVal, &Param0, &cLocal_58, uVar15, &cVar16, (*&Param0 + 204)[iVar0], Var7, *(&Param0 + 24));
				Function_67(GET_OBJECT_FROM_ACTOR(&uVar1));
				SET_ACTOR_FACTION(&uVar1, 19);
				uVar2 = GET_MOUNT(&uVar1);
				Function_67(GET_OBJECT_FROM_ACTOR(&uVar2));
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uVar2), "bNoInjuryEjection", Param0.f_120);
			}
			else if (SQUAD_GET_SIZE(&Param0 + 80) < 0)
			{
				LOG_ERROR("CREATEATTACK_CreateActors: Using custom attacker squad. Current squad is empty. Please add members.");
			}
			else
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, iVar0);
				Function_67(GET_OBJECT_FROM_ACTOR(&uVar1));
			}
			if (Function_42(Param0.f_128, 8192))
			{
				Function_66(GET_MOUNT(&uVar1), &Global_54076);
			}
			SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, 359.0f);
			if (!Function_42(Param0.f_128, 4096))
			{
				if (IS_ACTOR_VALID(&Param0 + 72))
				{
					uVar3 = &Param0 + 72;
				}
				else
				{
					uVar3 = &Global_54076;
				}
				if (!ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uVar1, &uVar3, 90.0f, 80.0f, 85.0f))
				{
					LOG_ERROR("CREATEATTACK: Unable to set emergency teleport for actor.");
				}
			}
			ADD_ACTORSET_MEMBER(&Param0 + 88, &uVar2);
		}
		else if (!Function_42(Param0.f_128, 32))
		{
			uVar1 = CREATE_ACTOR_IN_LAYOUT(&Param0, &cLocal_58, (*&Param0 + 144)[(bVar0 % Param0.f_200)], Var7, *(&Param0 + 24));
			Function_67(GET_OBJECT_FROM_ACTOR(&uVar1));
			SET_ACTOR_FACTION(&uVar1, 19);
		}
		if (!IS_ACTOR_VALID(&uVar1))
		{
			LOG_ERROR("CreateAttack: Problem creating actor.");
		}
		else
		{
			if (!Function_42(Param0.f_128, 32))
			{
				SQUAD_JOIN(&uVar1, &Param0 + 80);
			}
			TASK_DRAW_HOLSTER_WEAPON(&uVar1, 1);
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, false);
			if (Function_42(Param0.f_128, 512) == 1)
			{
				AI_ACTOR_FORCE_SPEED(&uVar1, 3);
			}
		}
		Function_65(&Param0 + 80, 20.0f);
		bVar0++;
	}
	if (Function_42(Param0.f_128, 128))
	{
		Function_41(&Param0 + 128, 128);
		if (Function_42(Param0.f_128, 4))
		{
			if (Param0.f_124 == 4294967295)
			{
				Function_40(&Param0 + 80, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			else
			{
				Function_40(&Param0 + 80, Param0.f_124, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			Function_39(&Param0 + 80, 0);
		}
	}
	DESTROY_OBJECT(&uVar4);
	return 1;
}

void Function_65(var uParam0, float fParam1) //Position: 0x2B27 / 11047
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				SET_ACTOR_MAX_HEALTH(&uVar1, fParam1);
				SET_ACTOR_HEALTH(&uVar1, fParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_66(var uParam0, int iParam1) //Position: 0x2B7E / 11134
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	
	GET_POSITION(&uParam0, &Var1);
	GET_POSITION(&iParam1, &Var3);
	uVar5 = Vector(StackVal, StackVal, StackVal) - Vector(Var1, Var3, StackVal);
	fVar0 = UNK_0x9C40E671(&uVar5);
	SET_ACTOR_HEADING(&uParam0, fVar0, 1);
	return;
}

void Function_67(bool bParam0) //Position: 0x2BB0 / 11184
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

var Function_68(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x2BE7 / 11239
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_35(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_35(bParam4))
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

bool Function_69(struct<2> Param0, struct<5> Param2) //Position: 0x2D1F / 11551
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
		if (!Function_107(StackVal, Param2))
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
			if (!Function_107(StackVal, Param2))
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

struct<8> Function_70(vector3 vParam0) //Position: 0x2E62 / 11874
{
	struct<2> Var0;
	
	if (!Function_71(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (iParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (iParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, iParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_71(int iParam0) //Position: 0x2FAF / 12207
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_72(var uParam0, int iParam1) //Position: 0x2FD3 / 12243
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

int Function_73(int iParam0, int iParam1) //Position: 0x2FEE / 12270
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	if (!IS_ITERATOR_VALID(&uVar0))
	{
		return 0;
	}
	Function_74(&uVar0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 25);
	(&iParam0 + 80) = &iParam1;
	if (!SQUAD_IS_VALID(&iParam0 + 80))
	{
		return 0;
	}
	DECOR_SET_BOOL(GET_OBJECT_FROM_SQUAD(&iParam0 + 80), "DECOR_ATTACKSQUAD", 1);
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

int Function_74(float fParam0) //Position: 0x3066 / 12390
{
	if (IS_ITERATOR_VALID(&fParam0))
	{
		ITERATE_EVERYWHERE(&fParam0);
		ITERATE_ON_PARTIAL_NAME(&fParam0, Function_23());
		ITERATE_ON_PARTIAL_MODEL_NAME(&fParam0, Function_23());
		ITERATE_ON_OBJECT_TYPE(&fParam0, 4294967295);
		return 1;
	}
	return 0;
}

struct<8> Function_75(struct<45> Param0) //Position: 0x309C / 12444
{
	struct<2> Var0;
	
	if (&bParam14)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		GET_OBJECT_POSITION(&Param0, &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(&Param0));
	}
	else if (!Function_107(StackVal, *(&Param0 + 8)))
	{
		if (Global_47151[34])
		{
			PRINTVECTOR(*(&Param0 + 8));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 8));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_82(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_80();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_79(Param0.f_24);
	Function_78(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_77(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	if (Param6.f_28 == 0.0f)
	{
		Param0.f_44 = Param6.f_28;
	}
	if (Param0.f_44 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_44, (-1.0f * Param0.f_44));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x31CF / 12751
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(struct<33> Param0) //Position: 0x31D9 / 12761
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

void Function_78(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x3305 / 13061
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

void Function_79(bool bParam0) //Position: 0x3356 / 13142
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

void Function_80() //Position: 0x3409 / 13321
{
	float fVar0;
	bool bVar1;
	
	Function_81(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_81(var uParam0, int iParam1) //Position: 0x341D / 13341
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

void Function_82(bool bParam0) //Position: 0x34AE / 13486
{
	if (&bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &bParam0), &bParam0);
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

void Function_83(struct<45> Param0) //Position: 0x34F5 / 13557
{
	Param0.f_24 = uParam1;
	*(&Param0 + 8) = Param2;
	Param0.f_20 = uParam4;
	Param0.f_28 = uParam5;
	Param0.f_32 = uParam6;
	Param0.f_36 = &uParam9;
	Param0.f_40 = &uParam7;
	Param0.f_44 = &uParam8;
}

void Function_84(struct<21> Param0) //Position: 0x353B / 13627
{
	Param0.f_20 = iParam1;
	return;
}

void Function_85(struct<21> Param0) //Position: 0x3548 / 13640
{
	Param0 = uParam1;
	Param0.f_4 = uParam2;
	Param0.f_8 = uParam3;
	Param0.f_16 = uParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

bool Function_86(struct<2>[] Param0) //Position: 0x3577 / 13687
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_91();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_90(&(Param0[iVar02]), 8);
		}
		else if (Function_89())
		{
			iVar1 = 1;
			Function_90(&(Param0[iVar02]), 8);
		}
		Function_90(&(Param0[iVar02]), 16);
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
				Function_90(&(Param0[iVar02]), 1);
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
							Function_90(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_90(&(Param0[iVar02]), 2);
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
							Function_90(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_90(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_90(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_90(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_90(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_90(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_90(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_90(&(Param0[iVar02]), 2);
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
	Function_87();
	return 1;
}

void Function_87() //Position: 0x3939 / 14649
{
	if (!Function_88(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_88(int iParam0) //Position: 0x3979 / 14713
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_89() //Position: 0x3995 / 14741
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

void Function_90(struct<13> Param0) //Position: 0x39C3 / 14787
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_91() //Position: 0x39D6 / 14806
{
	if (!Function_88(128))
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

bool Function_92(struct<201> Param0) //Position: 0x3A18 / 14872
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 4294967295;
	iVar3 = 0;
	if (Param0.f_60 == 0)
	{
		Param0.f_60 = 2;
	}
	if (Param0.f_52 >= 0)
	{
		if (Function_42(Param0.f_128, 64))
		{
			iVar3 = 0;
			while (iVar3 <= Param0.f_200)
			{
				Function_105(&uLocal_0, (*&Param0 + 144)[iVar3], 3, 0);
				iVar3++;
			}
		}
		else
		{
			switch (Param0.f_60)
			{
				case 0x00000001:
					iVar0 = 1065;
					bVar1 = 1065;
					iVar3 = 0;
					while (iVar3 < (Param0.f_52 - 1))
					{
						iVar2 = RAND_INT_RANGE(iVar0, bVar1);
						(*&Param0 + 144)[iVar3] = iVar2;
						Function_105(&uLocal_0, iVar2, 3, 0);
						if ((*&Param0 + 144)[iVar3] != 4294967295 || (*&Param0 + 144)[iVar3] != 0)
						{
							LOG_ERROR("Invalid template for CreateAttack");
							return 0;
						}
						iVar3++;
					}
					break;
				
				case 0x00000002:
					if (!Function_103(8, 0, 4294967295, 0))
					{
						return 0;
					}
					iVar3 = 0;
					while (iVar3 < (Param0.f_52 - 1))
					{
						iVar2 = Function_93(8, 1, 0, 4294967295, 0);
						(*&Param0 + 144)[iVar3] = iVar2;
						Function_105(&uLocal_0, iVar2, 3, 0);
						if ((*&Param0 + 144)[iVar3] == 4294967295)
						{
							LOG_ERROR("Invalid template for CreateAttack");
							return 0;
						}
						iVar3++;
					}
					break;
				
				case 0x00000004:
					if (!Function_103(4, 0, 4294967295, 0))
					{
						return 0;
					}
					iVar3 = 0;
					while (iVar3 < (Param0.f_52 - 1))
					{
						iVar2 = Function_93(4, 1, 0, 4294967295, 0);
						(*&Param0 + 144)[iVar3] = iVar2;
						Function_105(&uLocal_0, iVar2, 3, 0);
						if ((*&Param0 + 144)[iVar3] == 4294967295)
						{
							LOG_ERROR("Invalid template for CreateAttack");
							return 0;
						}
						iVar3++;
					}
					break;
				
				case 0x00000003:
					if (!Function_103(2, 0, 4294967295, 0))
					{
						return 0;
					}
					iVar3 = 0;
					while (iVar3 < (Param0.f_52 - 1))
					{
						iVar2 = Function_93(2, 1, 0, 4294967295, 0);
						(*&Param0 + 144)[iVar3] = iVar2;
						Function_105(&uLocal_0, iVar2, 3, 0);
						if ((*&Param0 + 144)[iVar3] == 4294967295)
						{
							LOG_ERROR("Invalid template for CreateAttack");
							return 0;
						}
						iVar3++;
					}
					break;
				
				default:
					LOG_ERROR("CreateAttack - Invalid enemytype.");
					break;
				}
		}
		if (!Function_103(64, 0, 4294967295, 0))
		{
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < (Param0.f_52 - 1))
		{
			if (Param0.f_116 == 4294967295)
			{
				iVar2 = Function_93(64, 1, 0, 4294967295, 0);
			}
			else
			{
				iVar2 = Param0.f_116;
			}
			(*&Param0 + 204)[iVar3] = iVar2;
			Function_105(&uLocal_0, iVar2, 3, 0);
			if ((*&Param0 + 144)[iVar3] == 4294967295)
			{
				LOG_ERROR("Invalid template for CreateAttack");
				return 0;
			}
			iVar3++;
		}
	}
	else
	{
		LOG_ERROR("Check createattack, there are < 1 actors set to be streamed");
	}
	return 1;
}

int Function_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3D95 / 15765
{
	return Function_94(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_94(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x3DB2 / 15794
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_97(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_97(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_97(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_97(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_97(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_97(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_97(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_97(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_97(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_97(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_97(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_97(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_97(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_97(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_95(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_95(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x4015 / 16405
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_96(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_96(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_96(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_96(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_96(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_96(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_96(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_96(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_96(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_96(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_96(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_96(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_96(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_96(&(Global_46972[13]), &bVar0);
	}
	return Function_97(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_96(var uParam0, bool bParam1) //Position: 0x4184 / 16772
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_97(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x4248 / 16968
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_102();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_35(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_101(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_101(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_100(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_35(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_100(iVar0))
				{
					Function_99();
				}
				Function_98(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_35(iVar1))
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

void Function_98(int iParam0) //Position: 0x4541 / 17729
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

void Function_99() //Position: 0x45F5 / 17909
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

bool Function_100(int iParam0) //Position: 0x4630 / 17968
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

void Function_101(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x465D / 18013
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

void Function_102() //Position: 0x47B8 / 18360
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_99();
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
	Function_99();
	return;
}

bool Function_103(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4804 / 18436
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_104(&(Global_46972[0]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_104(&(Global_46972[1]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_104(&(Global_46972[2]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_104(&(Global_46972[3]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_104(&(Global_46972[4]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_104(&(Global_46972[5]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_104(&(Global_46972[6]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_104(&(Global_46972[7]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_104(&(Global_46972[8]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_104(&(Global_46972[9]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_104(&(Global_46972[10]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_104(&(Global_46972[11]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_104(&(Global_46972[12]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_104(&(Global_46972[13]), &iParam1, &iParam2, &bParam3);
			break;
		
		case 0x40000000:
			iVar0 = 0;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int Function_104(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x4A04 / 18948
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

var Function_105(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x4A30 / 18992
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
			Function_90(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_90(&(Param0[iVar02]), 8);
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

int Function_106(struct<329> Param0) //Position: 0x4B0C / 19212
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_62(&Param0);
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_6(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			Param0.f_272 = DECOR_GET_BOOL(&iParam1, "catk_bdi");
			Param0.f_284 = DECOR_GET_FLOAT(&iParam1, "catk_spx");
			(&Param0 + 284)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_spy");
			(&Param0 + 284)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_spz");
			Param0.f_296 = DECOR_GET_FLOAT(&iParam1, "catk_scx");
			(&Param0 + 296)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_scy");
			(&Param0 + 296)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_scz");
			Param0.f_276 = DECOR_GET_BOOL(&iParam1, "catk_krd");
			Param0.f_280 = DECOR_GET_BOOL(&iParam1, "catk_krt");
			(&Param0 + 312) = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_atv"));
			Param0.f_320 = DECOR_GET_INT(&iParam1, "catk_ats");
			Param0.f_324 = DECOR_GET_BOOL(&iParam1, "catk_bus");
			*(&Param0 + 80) = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_asq"));
			Param0.f_328 = DECOR_GET_INT(&iParam1, "catk_wtm");
			Param0.f_260 = DECOR_GET_BOOL(&iParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_35((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*&Param0 + 144)[bVar0] = DECOR_GET_INT(&iParam1, &cVar5);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncRead - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncRead - invalid read attempted");
	}
	return 1;
}

bool Function_107(vector3 vParam0) //Position: 0x4D76 / 19830
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_108(int iParam0) //Position: 0x4D8E / 19854
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(&iParam0 + 64))
	{
		Function_62(&iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("ntargetSet"), 4);
		*(&iParam0 + 64) = CREATE_ACTORSET_IN_LAYOUT(&iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(&iParam0 + 64))
		{
			return 0;
		}
	}
	return 1;
}

