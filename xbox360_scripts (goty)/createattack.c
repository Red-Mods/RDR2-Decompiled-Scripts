//Decompiled with MagicRDR v1.0
//Function Count : 110
//Statics Count : 107
//Natives Count : 250
//Parameters Count : 56

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
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<8> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<221> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	struct<15> Var1;
	struct<11> Var16;
	int iVar33;
	int iVar35;
	
	bVar0 = false;
	iVar33 = 0;
	Function_109(&ScriptParam_0);
	if (Function_108(StackVal, StackVal, *(&ScriptParam_0 + 184)))
	{
		bVar0 = 5;
	}
	else if (ScriptParam_0.f_40 >= 0 || ScriptParam_0.f_40 < 6)
	{
		bVar0 = 5;
	}
	while (!IS_EXITFLAG_SET())
	{
		iVar33 = 0;
		if (!IS_ACTOR_VALID(Global_34573) || !IS_ACTOR_ALIVE(Global_34573))
		{
			bVar0 = 6;
		}
		Function_107(&ScriptParam_0, 0);
		switch (bVar0)
		{
			case 0x00000000:
				if (ScriptParam_0.f_172 != 0 || IS_LAYOUTREF_VALID(ScriptParam_0) != 0)
				{
					LOG_ERROR("Tried to run without calling CREATEATTACK_INIT");
					bVar0 = 5;
				}
				else if (Function_93(&ScriptParam_0))
				{
					if (Function_87(&uLocal_0))
					{
						if (Function_108(StackVal, StackVal, *(&ScriptParam_0 + 184)))
						{
							Function_86(&Var1, 4294967295, 5.0f, 0, 4294967295);
							Function_85(&Var1, 10.0f);
							Function_84(StackVal, StackVal, &Var16, 0, *(&ScriptParam_0 + 196), 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
							Function_76(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var16, Var1, 1);
							*(&ScriptParam_0 + 184) = { StackVal, StackVal, Function_76(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var16, Var1, 1) };
							if (!Function_108(StackVal, StackVal, *(&ScriptParam_0 + 184)))
							{
								iVar35 = 1;
							}
						}
						else
						{
							iVar35 = 1;
						}
					}
					if (iVar35 == 1)
					{
						bVar0 = 2;
					}
				}
				ScriptParam_0.f_220 = 0;
				break;
			
			case 0x00000002:
				if (ScriptParam_0.f_40 >= 0 || ScriptParam_0.f_40 < 6)
				{
					bVar0 = 5;
					ScriptParam_0.f_220 = 0;
					break;
				}
				if (!Function_65(&ScriptParam_0))
				{
					bVar0 = 5;
					ScriptParam_0.f_220 = 0;
					break;
				}
				if (ScriptParam_0.f_216 == 1)
				{
					if (!Function_55(&ScriptParam_0))
					{
						bVar0 = 5;
						ScriptParam_0.f_220 = 0;
						break;
					}
					ScriptParam_0.f_216 = 0;
				}
				Function_54(&ScriptParam_0 + 92, 2);
				Function_52(&uLocal_37);
				bVar0 = 3;
				ScriptParam_0.f_220 = 0;
				Function_52(&iLocal_40);
				break;
			
			case 0x00000003:
				Function_44(&ScriptParam_0);
				if (Function_43(ScriptParam_0.f_92, 128))
				{
					Function_42(&ScriptParam_0 + 92, 128);
					if (Function_43(ScriptParam_0.f_92, 4))
					{
						if (ScriptParam_0.f_88 == 4294967295)
						{
							Function_41(ScriptParam_0.f_60, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						else
						{
							Function_41(ScriptParam_0.f_60, ScriptParam_0.f_88, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						Function_40(ScriptParam_0.f_60, 1);
					}
					else
					{
						Function_40(ScriptParam_0.f_60, 0);
					}
				}
				if (!Function_39(ScriptParam_0.f_60))
				{
					if (ScriptParam_0.f_176 == 1)
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
					if (ScriptParam_0.f_216 == 1)
					{
						if (!Function_55(&ScriptParam_0))
						{
							bVar0 = 5;
							break;
						}
						ScriptParam_0.f_216 = 0;
					}
					if (Function_38(ScriptParam_0.f_52) != 0 && ScriptParam_0.f_180 != 1)
					{
						bVar0 = 6;
					}
					else if (ScriptParam_0.f_44 == Function_38(ScriptParam_0.f_52) && Function_38(ScriptParam_0.f_52) < 0)
					{
						if (Function_55(&ScriptParam_0))
						{
						}
						else
						{
							bVar0 = 5;
							break;
						}
					}
					if (ScriptParam_0.f_164 == 1)
					{
						Function_37(ScriptParam_0.f_60, ScriptParam_0.f_208, 2, 0);
						ScriptParam_0.f_164 = 0;
					}
				}
				break;
			
			case 0x00000005:
				if (ScriptParam_0.f_176 == 0)
				{
					bVar0 = 6;
				}
				ScriptParam_0.f_220 = 500;
				break;
			
			case 0x00000006:
				ScriptParam_0.f_220 = 0;
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		ScriptParam_0.f_220 = 0;
		Function_35(&ScriptParam_0, 0);
		WAIT(ScriptParam_0.f_220);
	}
	Function_33(0);
	Function_107(&ScriptParam_0, 0);
	ScriptParam_0.f_172 = 0;
	Function_35(&ScriptParam_0, 0);
	Function_5(&ScriptParam_0);
	Function_1(&uLocal_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x333 / 819
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

void Function_2(var uParam0, int iParam1) //Position: 0x359 / 857
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

void Function_3(var uParam0, int iParam1) //Position: 0x487 / 1159
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x4A1 / 1185
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x4BE / 1214
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ITERATOR_VALID(StackVal))
	{
		DESTROY_ITERATOR(StackVal);
	}
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(iParam0->f_52) - 1))
		{
			GET_ACTOR_FROM_ACTORSET(iParam0->f_52, bVar2);
			bVar2++;
		}
		DESTROY_ACTORSET(iParam0->f_52);
	}
	if (SQUAD_IS_VALID(iParam0->f_60))
	{
		bVar2 = false;
		while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_60) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_60, bVar2);
			CLEAR_ACTOR_MAX_SPEED(bVar0);
			if (iParam0->f_160 == 0)
			{
				Function_19(iParam0, bVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(iParam0->f_60));
	}
	if (IS_ACTORSET_VALID(iParam0->f_64))
	{
		if (iParam0->f_160 == 0)
		{
			Function_10(iParam0->f_64, 2, 0, 2);
		}
		else
		{
			Function_8(iParam0->f_64);
		}
		DESTROY_ACTORSET(iParam0->f_64);
	}
	if (!Function_43(iParam0->f_92, 16))
	{
		RELEASE_LAYOUT_OBJECTS(*iParam0);
		DESTROY_LAYOUT(*iParam0);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_96))
	{
		Function_7(iParam0->f_96);
		DESTROY_OBJECTSET(iParam0->f_96);
	}
	bVar1 = Function_6(iParam0);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

var Function_6(int iParam0) //Position: 0x5CF / 1487
{
	bool bVar0;
	
	if (!IS_ITERATOR_VALID(StackVal))
	{
		return "";
	}
	bVar0 = START_OBJECT_ITERATOR(StackVal);
	return bVar0;
}

void Function_7(bool bParam0) //Position: 0x5EE / 1518
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
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_8(int iParam0) //Position: 0x633 / 1587
{
	bool bVar0;
	
	Function_9(&iParam0);
	if (IS_ACTORSET_VALID(iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(iParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_9(int iParam0) //Position: 0x67B / 1659
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*iParam0, GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_10(int iParam0, int iParam1, var uParam2, var uParam3) //Position: 0x6D4 / 1748
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(iParam0))
	{
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(iParam0) - 1))
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(iParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_11(bVar0, iParam1, uParam2, uParam3, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar0));
			}
			bVar1++;
		}
		DISBAND_ACTORSET(iParam0);
		return 1;
	}
	return 0;
}

int Function_11(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x73B / 1851
{
	char* cVar0[32];
	
	Function_18();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_17(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_16(bParam0, 0);
	Function_15(bParam0, iParam1);
	Function_14(bParam0, uParam2);
	Function_13(bParam0, uParam3);
	if (Function_12(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_12(bool bParam0) //Position: 0x989 / 2441
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_13(bool bParam0, bool bParam1) //Position: 0x9AC / 2476
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x9CF / 2511
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_15(bool bParam0, bool bParam1) //Position: 0x9F3 / 2547
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_16(bool bParam0, bool bParam1) //Position: 0xA19 / 2585
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_17(bool bParam0) //Position: 0xA3C / 2620
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_18() //Position: 0xA5A / 2650
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

int Function_19(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xAA4 / 2724
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (Function_32(bParam1, uParam0->f_60, 1))
	{
		SQUAD_LEAVE(bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam1)))
		{
			if (GET_MOUNT(bParam1) != Function_21(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (iParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(bParam1));
				}
				else
				{
					Function_20(GET_MOUNT(bParam1), iParam2, 0, 2);
				}
			}
		}
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_20(bParam1, iParam2, 0, 2);
		}
	}
	else if (IS_ACTOR_IN_ACTORSET(uParam0->f_64, bParam1))
	{
		REMOVE_ACTORSET_MEMBER(uParam0->f_64, bParam1);
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_20(bParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_20(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB50 / 2896
{
	int iVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(iVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_11(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_11(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_21(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4, bool bParam5, var uParam6, bool bParam7) //Position: 0xC30 / 3120
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_31(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_30())
		{
			return "";
		}
	}
	if (!Function_28())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_27();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_26(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_26(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_26(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_26(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_25(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_25(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_24() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_23(), bVar0, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_23(), 993, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { fParam2, fParam3, fParam4 };
				if (!Function_108(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_23(), bVar0, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_23(), 993, fParam2, fParam3, fParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_22(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_24() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_22(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xF86 / 3974
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_23() //Position: 0xFC3 / 4035
{
	bool bVar0;
	
	return bVar0;
}

var Function_24() //Position: 0xFCB / 4043
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_25(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xFD4 / 4052
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

vector3 Function_26(bool bParam0) //Position: 0x106F / 4207
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

void Function_27() //Position: 0x1096 / 4246
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

bool Function_28() //Position: 0x1108 / 4360
{
	if (Function_29() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_29() //Position: 0x111E / 4382
{
	return Global_12976.f_152;
}

bool Function_30() //Position: 0x1129 / 4393
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_31(var uParam0, bool bParam1, bool bParam2) //Position: 0x1149 / 4425
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_54(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_54(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_32(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1176 / 4470
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

void Function_33(int iParam0) //Position: 0x11B6 / 4534
{
	Global_12976 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976, 0, 0, (iParam0 + Function_34(90)), 0);
	return;
}

int Function_34(int iParam0) //Position: 0x11D3 / 4563
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

int Function_35(int iParam0, bool bParam1) //Position: 0x11E9 / 4585
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_6(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			DECOR_SET_BOOL(bParam1, "catk_bdi", iParam0->f_172);
			DECOR_SET_FLOAT(bParam1, "catk_spx", iParam0->f_184);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spz");
			DECOR_SET_FLOAT(bParam1, "catk_scx", iParam0->f_196);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scz");
			DECOR_SET_BOOL(bParam1, "catk_krd", iParam0->f_176);
			DECOR_SET_BOOL(bParam1, "catk_krt", iParam0->f_180);
			DECOR_SET_OBJECT(bParam1, "catk_atv", iParam0->f_208);
			DECOR_SET_INT(bParam1, "catk_ats", iParam0->f_212);
			DECOR_SET_BOOL(bParam1, "catk_bus", iParam0->f_216);
			DECOR_SET_OBJECT(bParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(iParam0->f_60));
			DECOR_SET_INT(bParam1, "catk_wtm", iParam0->f_220);
			DECOR_SET_BOOL(bParam1, "catk_ovr", iParam0->f_160);
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_36((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(bParam1, &cVar5, (*iParam0 + 100)[bVar0]);
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

bool Function_36(bool bParam0) //Position: 0x1425 / 5157
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_37(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x143C / 5180
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, iParam3);
			}
			bVar0++;
		}
	}
}

int Function_38(int iParam0) //Position: 0x148B / 5259
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = GET_ACTORSET_SIZE(iParam0);
	iVar3 = 0;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(iParam0, bVar2);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				iVar3++;
			}
		}
		bVar2++;
	}
	return iVar3;
}

bool Function_39(bool bParam0) //Position: 0x14D1 / 5329
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

void Function_40(bool bParam0, bool bParam1) //Position: 0x1528 / 5416
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(bVar0, bParam1);
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

void Function_41(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x15A5 / 5541
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(bVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, iParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_42(var uParam0, int iParam1) //Position: 0x168F / 5775
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_43(var uParam0, int iParam1) //Position: 0x16A2 / 5794
{
	return (uParam0 && iParam1) == 0;
}

int Function_44(int iParam0) //Position: 0x16AF / 5807
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	if (Function_48(&iLocal_40, 2.0f))
	{
		if (IS_ACTORSET_VALID(iParam0->f_64))
		{
			bVar9 = false;
			while (bVar9 < (GET_ACTORSET_SIZE(iParam0->f_64) - 1))
			{
				bVar0 = GET_ACTOR_FROM_ACTORSET(iParam0->f_64, bVar9);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (IS_ACTOR_DEAD(GET_MOST_RECENT_RIDER(bVar0)))
					{
						Function_19(iParam0, bVar0, 2, 0);
					}
				}
				bVar9++;
			}
		}
		bVar9 = false;
		while (bVar9 < (SQUAD_GET_SIZE(iParam0->f_60) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_60, bVar9);
			if (IS_ACTOR_VALID(bVar0))
			{
				GET_POSITION(bVar0, &vVar2);
				bVar10 = GET_BLIP_ON_ACTOR(bVar0);
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					if (VDIST(Global_34574, vVar2) < 42.0f)
					{
						Function_19(iParam0, bVar0, 2, 0);
					}
					if (IS_BLIP_VALID(bVar10))
					{
						REMOVE_BLIP(bVar10);
					}
				}
				else if (!IS_BLIP_VALID(bVar10))
				{
					if (!IS_ACTOR_CRIPPLED(bVar0, 5))
					{
						ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
					}
				}
				if (!Function_43(iParam0->f_92, 2048))
				{
					if (IS_ACTORSET_VALID(iParam0->f_52))
					{
						if (GET_ACTORSET_SIZE(iParam0->f_52) >= 0)
						{
							bVar1 = Function_45(bVar0, iParam0->f_52);
							if (IS_ACTOR_VALID(bVar1))
							{
								GET_POSITION(bVar1, &vVar5);
								bVar8 = VDIST(vVar5, vVar2);
								if ((bVar8 < 150.0f && Function_48(&uLocal_37, 10.0f)) && !WOULD_ACTOR_BE_VISIBLE(0, &vVar2, 150.0f))
								{
									Function_19(iParam0, bVar0, 2, 1);
								}
								else if (VDIST(Global_34574, vVar2) < 20.0f && IS_ACTOR_RIDING_AND_IN_SADDLE(bVar0))
								{
									SET_ACTOR_MAX_SPEED_ABSOLUTE(bVar0, 30.0f);
								}
								else if (bVar8 < 10.0f && IS_ACTOR_RIDING_AND_IN_SADDLE(bVar0))
								{
									SET_ACTOR_MAX_SPEED_ABSOLUTE(bVar0, 24.0f);
								}
								else if (!IS_ACTOR_RIDING_AND_IN_SADDLE(bVar0))
								{
									CLEAR_ACTOR_MAX_SPEED(bVar0);
									if (!Function_43(iParam0->f_92, 4096))
									{
										DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bVar0);
									}
								}
							}
						}
					}
				}
			}
			if (!IS_ACTOR_RIDING_AND_IN_SADDLE(bVar0))
			{
				CLEAR_ACTOR_MAX_SPEED(bVar0);
			}
			bVar9++;
		}
		Function_52(&iLocal_40);
	}
	return 1;
}

var Function_45(bool bParam0, int iParam1) //Position: 0x1891 / 6289
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(iParam1) - 1))
	{
		if (Function_46(GET_ACTOR_FROM_ACTORSET(iParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_46(GET_ACTOR_FROM_ACTORSET(iParam1, bVar0), bParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(iParam1, bVar1);
	}
	LOG_WARNING("\Couldn't find a closest actorset member from 'Them' to 'Me' in GET_CLOSEST_ACTORSET_MEMBER!");
	return "";
}

float Function_46(bool bParam0, bool bParam1) //Position: 0x1954 / 6484
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_47(&uVar0, &uVar3);
	return iVar6;
}

var Function_47(var uParam0, int iParam1) //Position: 0x1973 / 6515
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_48(var uParam0, float fParam1) //Position: 0x1991 / 6545
{
	if (Function_51(uParam0))
	{
		if (Function_49(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_49(int iParam0) //Position: 0x19AD / 6573
{
	if (Function_51(iParam0))
	{
		if (Function_50(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_50(int iParam0) //Position: 0x1A75 / 6773
{
	return Function_43(*iParam0, 2);
}

bool Function_51(int iParam0) //Position: 0x1A82 / 6786
{
	return Function_43(*iParam0, 1);
}

void Function_52(int iParam0) //Position: 0x1A8F / 6799
{
	Function_53(iParam0, 0.0f);
	return;
}

void Function_53(var uParam0, float fParam1) //Position: 0x1A9B / 6811
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_54(uParam0, 1);
	Function_42(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_54(var uParam0, int iParam1) //Position: 0x1ABC / 6844
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_55(bool bParam0) //Position: 0x1ACB / 6859
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!SQUAD_IS_VALID(bParam0->f_60))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0->f_60) - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0->f_60, bVar0);
		if (IS_ACTOR_ALIVE(bVar3))
		{
			if (IS_ACTORSET_VALID(bParam0->f_52))
			{
				Function_64(bVar3, bParam0->f_52, Function_43(bParam0->f_92, 8));
			}
			TASK_CLEAR(bVar3);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar3);
			Function_60(bParam0);
			if (IS_OBJECTSET_VALID(bParam0->f_96))
			{
				bVar1 = false;
				while (bVar1 < (GET_OBJECTSET_SIZE(bParam0->f_96) - 1))
				{
					bVar2 = GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0->f_96));
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar3, bVar2, 4, 0);
					bVar1++;
				}
			}
			switch (bParam0->f_212)
			{
				case 0x00000001:
					TASK_WANDER_IN_VOLUME(bVar3, bParam0->f_208, -1f);
					break;
				
				case 0x00000002:
					TASK_WANDER_IN_VOLUME(bVar3, bParam0->f_208, -1f);
					break;
				
				case 0x00000004:
					if (IS_ACTORSET_VALID(bParam0->f_52))
					{
						if (GET_ACTORSET_SIZE(bParam0->f_52) >= 0)
						{
							bVar1 = false;
							while (bVar1 < (GET_ACTORSET_SIZE(bParam0->f_52) - 1))
							{
								bVar4 = GET_ACTOR_FROM_ACTORSET(bParam0->f_52, bVar1);
								if (IS_ACTOR_ALIVE(bVar4))
								{
									MEMORY_CONSIDER_AS(bVar3, bVar4, 2);
								}
								bVar1++;
							}
							bVar4 = Function_58(Function_59(bParam0->f_60), bParam0->f_52);
							if (IS_ACTOR_VALID(bVar4))
							{
								TASK_FOLLOW_ACTOR(bVar3, bVar4);
								TASK_PRIORITY_SET(bVar3, 0);
							}
							else
							{
								LOG_ERROR("Attacker cannot follow actor");
							}
						}
					}
					break;
				
				case 0x00000003:
					if (IS_ACTORSET_VALID(bParam0->f_52))
					{
						if (GET_ACTORSET_SIZE(bParam0->f_52) >= 0)
						{
							bVar1 = false;
							while (bVar1 < (GET_ACTORSET_SIZE(bParam0->f_52) - 1))
							{
								bVar4 = GET_ACTOR_FROM_ACTORSET(bParam0->f_52, bVar1);
								if (IS_ACTOR_ALIVE(bVar4))
								{
									MEMORY_CONSIDER_AS(bVar3, bVar4, 4);
								}
								bVar1++;
							}
						}
						AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar3, 1);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 48, 5.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 49, 5.0f);
						SET_ACTOR_MAX_SPEED(bVar3, 3);
						TASK_OVERRIDE_SET_MOVETYPE(bVar3, 3);
						Function_56(bVar3, bParam0->f_52, 5.0f, 0.0f, 0.0f, -10.0f, 1, Function_43(bParam0->f_92, 256));
					}
					break;
				
				case 0x00000006:
					if (IS_ACTORSET_VALID(bParam0->f_52))
					{
						if (GET_ACTORSET_SIZE(bParam0->f_52) >= 0)
						{
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 28, 0.0f);
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 31, -1.0f);
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 37, 2.0f);
							COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 38, 0.5f);
							COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bVar3, 0);
							bVar4 = Function_58(bVar3, bParam0->f_52);
							TASK_CLEAR(bVar3);
							TASK_KILL_CHAR(bVar3, bVar4);
							TASK_PRIORITY_SET(bVar3, 0);
						}
					}
					break;
				
				case 0x00000005:
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 28, 0.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 31, -1.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 37, 2.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 38, 0.5f);
					if (IS_ACTORSET_VALID(bParam0->f_52))
					{
						if (GET_ACTORSET_SIZE(bParam0->f_52) >= 0)
						{
							bVar1 = false;
							while (bVar1 < (GET_ACTORSET_SIZE(bParam0->f_52) - 1))
							{
								bVar4 = GET_ACTOR_FROM_ACTORSET(bParam0->f_52, bVar1);
								if (IS_ACTOR_ALIVE(bVar4))
								{
									MEMORY_CONSIDER_AS(bVar3, bVar4, 4);
								}
								bVar1++;
							}
						}
						AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar3, 1);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 48, 5.0f);
						COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 49, 5.0f);
						SET_ACTOR_MAX_SPEED(bVar3, 3);
						TASK_OVERRIDE_SET_MOVETYPE(bVar3, 3);
						Function_56(bVar3, bParam0->f_52, 5.0f, 0.0f, 0.0f, -10.0f, 1, Function_43(bParam0->f_92, 256));
					}
					break;
				}
		}
		bVar0++;
	}
	if (IS_ACTORSET_VALID(bParam0->f_52))
	{
		bParam0->f_44 = Function_38(bParam0->f_52);
	}
	else
	{
		bParam0->f_44 = 0;
	}
	return 1;
}

int Function_56(bool bParam0, int iParam1, float fParam2, vector3 vParam3, int iParam6, bool bParam7) //Position: 0x1E11 / 7697
{
	bool bVar0;
	vector3 vVar1;
	
	if (!IS_ACTORSET_VALID(iParam1))
	{
		LOG_WARNING("FOLLOW_AND_ATTACK_NEAREST_ACTORSET_MEMBER got invalid ACTORSET");
		return 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!GET_TASK_STATUS(bParam0, 42) != 1)
		{
			if (IS_ACTORSET_VALID(iParam1))
			{
				if (GET_ACTORSET_SIZE(iParam1) >= 0)
				{
					bVar0 = Function_58(bParam0, iParam1);
					if (IS_ACTOR_VALID(bVar0))
					{
						vVar1 = { StackVal, StackVal, vParam3 };
						VNORMALIZE(&vVar1);
						if (bParam7 == 1)
						{
							ROTATE_VECTOR_XZ(&vVar1, RAND_FLOAT_RANGE(-60.0f, 60.0f), 0);
						}
						else
						{
							ROTATE_VECTOR_XZ(&vVar1, RAND_FLOAT_RANGE(0.0f, 359.0f), 0);
						}
						if (fParam2 > 12.0f)
						{
							fParam2 = 12.0f;
						}
						VSCALE(&vVar1, RAND_FLOAT_RANGE(fParam2, 15.0f));
						Function_57(bParam0, 110.0f, 1.0f, 1.0f);
						TASK_FOLLOW_AND_ATTACK_OBJECT(bParam0, GET_OBJECT_FROM_ACTOR(bVar0), &vVar1, 3.0f, 10.0f, 0.1f, 1.0f, 0, 1);
						TASK_PRIORITY_SET(bParam0, iParam6);
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

void Function_57(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x1F7A / 8058
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

bool Function_58(bool bParam0, int iParam1) //Position: 0x1FC1 / 8129
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (GET_ACTORSET_SIZE(iParam1) != 0 || !IS_ACTORSET_VALID(iParam1))
	{
		return "";
	}
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+20.0f;
	fVar3 = (fVar2 + 1.0f);
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(iParam1) - 1))
	{
		if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(iParam1, bVar0)))
		{
			fVar3 = Function_46(bParam0, GET_ACTOR_FROM_ACTORSET(iParam1, bVar0));
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
		return GET_ACTOR_FROM_ACTORSET(iParam1, bVar1);
	}
	return "";
}

var Function_59(bool bParam0) //Position: 0x2047 / 8263
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

int Function_60(int iParam0) //Position: 0x208D / 8333
{
	var uVar0;
	
	Function_63(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_96))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("navoidVols"), 4);
		iParam0->f_96 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, *iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(iParam0->f_96))
		{
			return 0;
		}
	}
	return 1;
}

struct<32> Function_61(bool bParam0) //Position: 0x20D5 / 8405
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("0", &cVar8, ""), 4);
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

struct<32> Function_62(char* cParam0, char* cParam1, char* cParam2) //Position: 0x213F / 8511
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_63(int iParam0) //Position: 0x215E / 8542
{
	char* cVar0[16];
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		strcpy(&cVar0, "catkslay", 16);
		memcpy(&cVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(&cVar0), 4);
		*iParam0 = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(*iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

void Function_64(bool bParam0, int iParam1, bool bParam2) //Position: 0x21CB / 8651
{
	int iVar0;
	bool bVar1;
	
	if (!IS_ACTORSET_VALID(iParam1))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (GET_ACTORSET_SIZE(iParam1) - 1))
	{
		bVar1 = GET_ACTOR_FROM_ACTORSET(iParam1, iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bParam0, bVar1);
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bParam0, bVar1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

bool Function_65(int iParam0) //Position: 0x222A / 8746
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	struct<2> Var17;
	var uVar19;
	struct<8> Var20;
	
	if (Function_108(StackVal, StackVal, *(iParam0 + 184)))
	{
		LOG_ERROR("CreateAttack: Invalid spawn pos.");
		return 0;
	}
	if (!SQUAD_IS_VALID(iParam0->f_60))
	{
		strcpy(&Local_43, "atkSquad", 32);
		Local_43 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(&Local_43) };
		iParam0->f_60 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam0, &Local_43));
		PRINTSTRING("CREATEATTACK SQUAD created:");
		PRINTINT(iParam0->f_60);
		PRINTNL();
	}
	if (!SQUAD_IS_VALID(iParam0->f_60))
	{
		LOG_ERROR("CreateAttack: Invalid attacker squad.");
		return 0;
	}
	Function_74(iParam0, iParam0->f_60);
	strcpy(&Local_43, "atkForm", 32);
	Local_43 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(&Local_43) };
	bVar4 = CREATE_POINT_IN_LAYOUT(*iParam0, &Local_43, *(iParam0 + 184), *(iParam0 + 12));
	if (!IS_OBJECT_VALID(bVar4))
	{
		LOG_ERROR("CreateAttack: Invalid object creation.");
		return 0;
	}
	Function_73(5.0f, 10);
	Var17 = { StackVal, Function_73(5.0f, 10) };
	if (!Function_72(&Var17))
	{
		LOG_ERROR("CreateAttack: Invalid formation.");
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (iParam0->f_40 - 1))
	{
		Function_71(&Var17, bVar0);
		GET_OBJECT_RELATIVE_POSITION(bVar4, Function_71(&Var17, bVar0), &vVar5);
		if (!Function_70(&vVar5, 50.0f, &vVar8, 10))
		{
			LOG_WARNING("Invalid results looking for a formation offset.");
			vVar8 = { StackVal, StackVal, vVar5 };
		}
		if (((StackVal && Function_108(StackVal, Function_108(StackVal, StackVal, vVar14), *(iParam0 + 12))) && SQUAD_IS_VALID(iParam0->f_60)) && GET_ACTORSET_SIZE(iParam0->f_52) < 0)
		{
			SQUAD_COMPUTE_CENTROID(iParam0->f_60, &vVar14);
			vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vVar14, StackVal) };
			*(iParam0 + 12) = { 0.0f, UNK_0x9C40E671(&vVar11), 0.0f };
		}
		if (STRINGS_ARE_EQUAL(iParam0 + 72, "") || !IS_STRING_VALID(iParam0 + 72))
		{
			Local_43 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("catk_gen") };
		}
		else
		{
			strcpy(&Local_43, "catk_", 32);
			stradd(&Local_43, iParam0 + 72, 32);
			stradd(&Local_43, "_", 32);
			Local_43 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(&Local_43) };
		}
		if (Function_43(iParam0->f_92, 1))
		{
			if (!IS_ACTORSET_VALID(iParam0->f_64))
			{
				Var20 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("cAtkHorseSet") };
				iParam0->f_64 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &Var20, 0);
			}
			if (STRINGS_ARE_EQUAL(iParam0 + 72, "") || !IS_STRING_VALID(iParam0 + 72))
			{
				Var20 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("catk_gho") };
			}
			else
			{
				strcpy(&Var20, "catkh_", 32);
				stradd(&Var20, iParam0 + 72, 32);
				stradd(&Var20, "_", 32);
				Var20 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(&Var20) };
			}
			if (!Function_43(iParam0->f_92, 32))
			{
				uVar19 = (*iParam0 + 100)[(bVar0 % iParam0->f_128)];
				bVar1 = Function_69(StackVal, StackVal, StackVal, StackVal, *iParam0, &Local_43, uVar19, &Var20, (*iParam0 + 132)[bVar0], vVar8, *(iParam0 + 12));
				Function_68(GET_OBJECT_FROM_ACTOR(bVar1));
				SET_ACTOR_FACTION(bVar1, 19);
				bVar2 = GET_MOUNT(bVar1);
				Function_68(GET_OBJECT_FROM_ACTOR(bVar2));
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bVar2), "bNoInjuryEjection", iParam0->f_84);
			}
			else if (SQUAD_GET_SIZE(iParam0->f_60) < 0)
			{
				LOG_ERROR("CREATEATTACK_CreateActors: Using custom attacker squad. Current squad is empty. Please add members.");
			}
			else
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_60, bVar0);
				Function_68(GET_OBJECT_FROM_ACTOR(bVar1));
			}
			if (Function_43(iParam0->f_92, 8192))
			{
				Function_67(GET_MOUNT(bVar1), Global_34573);
			}
			SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 359.0f);
			if (!Function_43(iParam0->f_92, 4096))
			{
				if (IS_ACTOR_VALID(iParam0->f_56))
				{
					uVar3 = iParam0->f_56;
				}
				else
				{
					uVar3 = Global_34573;
				}
				if (!ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bVar1, uVar3, 90.0f, 80.0f, 85.0f))
				{
					LOG_ERROR("CREATEATTACK: Unable to set emergency teleport for actor.");
				}
			}
			ADD_ACTORSET_MEMBER(iParam0->f_64, bVar2);
		}
		else if (!Function_43(iParam0->f_92, 32))
		{
			bVar1 = CREATE_ACTOR_IN_LAYOUT(*iParam0, &Local_43, (*iParam0 + 100)[(bVar0 % iParam0->f_128)], vVar8, *(iParam0 + 12));
			Function_68(GET_OBJECT_FROM_ACTOR(bVar1));
			SET_ACTOR_FACTION(bVar1, 19);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			LOG_ERROR("CreateAttack: Problem creating actor.");
		}
		else
		{
			if (!Function_43(iParam0->f_92, 32))
			{
				SQUAD_JOIN(bVar1, iParam0->f_60);
			}
			TASK_DRAW_HOLSTER_WEAPON(bVar1, 1);
			SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
			if (Function_43(iParam0->f_92, 512) == 1)
			{
				AI_ACTOR_FORCE_SPEED(bVar1, 3);
			}
		}
		Function_66(iParam0->f_60, 20.0f);
		bVar0++;
	}
	if (Function_43(iParam0->f_92, 128))
	{
		Function_42(iParam0 + 92, 128);
		if (Function_43(iParam0->f_92, 4))
		{
			if (iParam0->f_88 == 4294967295)
			{
				Function_41(iParam0->f_60, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			else
			{
				Function_41(iParam0->f_60, iParam0->f_88, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			Function_40(iParam0->f_60, 0);
		}
	}
	DESTROY_OBJECT(bVar4);
	return 1;
}

void Function_66(bool bParam0, float fParam1) //Position: 0x2820 / 10272
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				SET_ACTOR_MAX_HEALTH(bVar1, fParam1);
				SET_ACTOR_HEALTH(bVar1, fParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_67(bool bParam0, bool bParam1) //Position: 0x286F / 10351
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	GET_POSITION(bParam0, &vVar1);
	GET_POSITION(bParam1, &vVar4);
	vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar4, StackVal) };
	fVar0 = UNK_0x9C40E671(&vVar7);
	SET_ACTOR_HEADING(bParam0, fVar0, 1);
	return;
}

void Function_68(bool bParam0) //Position: 0x289F / 10399
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

var Function_69(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x28D3 / 10451
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_36(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_36(bParam4))
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

bool Function_70(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x29F8 / 10744
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
		if (!Function_108(StackVal, StackVal, *iParam2))
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
			if (!Function_108(StackVal, StackVal, *iParam2))
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

vector3 Function_71(int iParam0, int iParam1) //Position: 0x2B2A / 11050
{
	vector3 vVar0;
	
	if (!Function_72(iParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (iParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*iParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (iParam1 >= (GET_NUM_FORMATION_LOCATIONS(*iParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*iParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*iParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*iParam0, iParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_72(int iParam0) //Position: 0x2C6B / 11371
{
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(*iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_73(var uParam0, int iParam1) //Position: 0x2C8D / 11405
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

int Function_74(var uParam0, int iParam1) //Position: 0x2CA6 / 11430
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(*uParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		return 0;
	}
	Function_75(&bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	uParam0->f_60 = iParam1;
	if (!SQUAD_IS_VALID(uParam0->f_60))
	{
		return 0;
	}
	DECOR_SET_BOOL(GET_OBJECT_FROM_SQUAD(uParam0->f_60), "DECOR_ATTACKSQUAD", true);
	DESTROY_ITERATOR(bVar0);
	return 1;
}

int Function_75(Vector3 vParam0) //Position: 0x2D11 / 11537
{
	if (IS_ITERATOR_VALID(*vParam0.x))
	{
		ITERATE_EVERYWHERE(*vParam0.x);
		ITERATE_ON_PARTIAL_NAME(*vParam0.x, Function_23());
		ITERATE_ON_PARTIAL_MODEL_NAME(*vParam0.x, Function_23());
		ITERATE_ON_OBJECT_TYPE(*vParam0.x, 4294967295);
		return 1;
	}
	return 0;
}

vector3 Function_76(struct<41> Param0) //Position: 0x2D42 / 11586
{
	vector3 vVar0;
	
	if (bParam26)
	{
		AMBIENT_RESET_FILTER(0);
	}
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
	else if (!Function_108(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_83(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_81();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_80(Param0.f_20);
	Function_79(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_78(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param11.f_28 == 0.0f)
	{
		Param0.f_40 = Param11.f_28;
	}
	if (Param0.f_40 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_40, (-1.0f * Param0.f_40));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_77();
	return StackVal, StackVal, Function_77();
}

vector3 Function_77() //Position: 0x2E71 / 11889
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_78(struct<33> Param0) //Position: 0x2E7A / 11898
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

void Function_79(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x2FA6 / 12198
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

void Function_80(bool bParam0) //Position: 0x2FF7 / 12279
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

void Function_81() //Position: 0x30AA / 12458
{
	float fVar0;
	bool bVar1;
	
	Function_82(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_82(var uParam0, int iParam1) //Position: 0x30BE / 12478
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

void Function_83(bool bParam0) //Position: 0x3147 / 12615
{
	if (bParam0 < 0.1f)
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

void Function_84(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x318B / 12683
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

void Function_85(var uParam0, int iParam1) //Position: 0x31C7 / 12743
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_86(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x31D3 / 12755
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

bool Function_87(int iParam0) //Position: 0x31FC / 12796
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_92();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_91(iParam0[iVar03], 8);
		}
		else if (Function_90())
		{
			iVar1 = 1;
			Function_91(iParam0[iVar03], 8);
		}
		Function_91(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_91(iParam0[iVar03], 1);
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
							Function_91(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_91(iParam0[iVar03], 2);
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
							Function_91(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_91(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_91(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_91(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_91(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_91(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_91(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_91(iParam0[iVar03], 2);
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
	Function_88();
	return 1;
}

void Function_88() //Position: 0x3577 / 13687
{
	if (!Function_89(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_89(int iParam0) //Position: 0x35B7 / 13751
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_90() //Position: 0x35D3 / 13779
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

void Function_91(var uParam0, int iParam1) //Position: 0x35FE / 13822
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_92() //Position: 0x360F / 13839
{
	if (!Function_89(128))
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

bool Function_93(int iParam0) //Position: 0x3651 / 13905
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 4294967295;
	iVar3 = 0;
	if (iParam0->f_48 == 0)
	{
		iParam0->f_48 = 2;
	}
	if (iParam0->f_40 >= 0)
	{
		if (Function_43(iParam0->f_92, 64))
		{
			iVar3 = 0;
			while (iVar3 <= iParam0->f_128)
			{
				Function_106(&uLocal_0, (*iParam0 + 100)[iVar3], 3, 0);
				iVar3++;
			}
		}
		else
		{
			switch (iParam0->f_48)
			{
				case 0x00000001:
					iVar0 = 1065;
					bVar1 = 1065;
					iVar3 = 0;
					while (iVar3 < (iParam0->f_40 - 1))
					{
						iVar2 = RAND_INT_RANGE(iVar0, bVar1);
						(*iParam0 + 100)[iVar3] = iVar2;
						Function_106(&uLocal_0, iVar2, 3, 0);
						if ((*iParam0 + 100)[iVar3] != 4294967295 || (*iParam0 + 100)[iVar3] != 0)
						{
							LOG_ERROR("Invalid template for CreateAttack");
							return 0;
						}
						iVar3++;
					}
					break;
				
				case 0x00000002:
					if (!Function_104(8, 0, 4294967295, 0))
					{
						return 0;
					}
					iVar3 = 0;
					while (iVar3 < (iParam0->f_40 - 1))
					{
						iVar2 = Function_94(8, 1, 0, 4294967295, 0);
						(*iParam0 + 100)[iVar3] = iVar2;
						Function_106(&uLocal_0, iVar2, 3, 0);
						if ((*iParam0 + 100)[iVar3] == 4294967295)
						{
							LOG_ERROR("Invalid template for CreateAttack");
							return 0;
						}
						iVar3++;
					}
					break;
				
				case 0x00000004:
					if (!Function_104(4, 0, 4294967295, 0))
					{
						return 0;
					}
					iVar3 = 0;
					while (iVar3 < (iParam0->f_40 - 1))
					{
						iVar2 = Function_94(4, 1, 0, 4294967295, 0);
						(*iParam0 + 100)[iVar3] = iVar2;
						Function_106(&uLocal_0, iVar2, 3, 0);
						if ((*iParam0 + 100)[iVar3] == 4294967295)
						{
							LOG_ERROR("Invalid template for CreateAttack");
							return 0;
						}
						iVar3++;
					}
					break;
				
				case 0x00000003:
					if (!Function_104(2, 0, 4294967295, 0))
					{
						return 0;
					}
					iVar3 = 0;
					while (iVar3 < (iParam0->f_40 - 1))
					{
						iVar2 = Function_94(2, 1, 0, 4294967295, 0);
						(*iParam0 + 100)[iVar3] = iVar2;
						Function_106(&uLocal_0, iVar2, 3, 0);
						if ((*iParam0 + 100)[iVar3] == 4294967295)
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
		if (!Function_104(64, 0, 4294967295, 0))
		{
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < (iParam0->f_40 - 1))
		{
			if (iParam0->f_80 == 4294967295)
			{
				iVar2 = Function_94(64, 1, 0, 4294967295, 0);
			}
			else
			{
				iVar2 = iParam0->f_80;
			}
			(*iParam0 + 132)[iVar3] = iVar2;
			Function_106(&uLocal_0, iVar2, 3, 0);
			if ((*iParam0 + 100)[iVar3] == 4294967295)
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

int Function_94(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x39B5 / 14773
{
	return Function_95(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_95(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x39CE / 14798
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_98(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_98(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_98(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_98(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_98(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_98(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_98(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_98(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_98(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_98(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_98(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_98(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_98(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_98(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_96(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_96(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x3C23 / 15395
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_97(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_97(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_97(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_97(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_97(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_97(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_97(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_97(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_97(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_97(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_97(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_97(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_97(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_97(Global_30750[13], bVar0);
	}
	return Function_98(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_97(bool bParam0, bool bParam1) //Position: 0x3D74 / 15732
{
	int iVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_98(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x3E32 / 15922
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
		Function_103();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_36(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_102(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_102(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_101(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_36(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_101(bVar0))
				{
					Function_100();
				}
				Function_99(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_36(bVar1))
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

void Function_99(int iParam0) //Position: 0x4134 / 16692
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

void Function_100() //Position: 0x41E8 / 16872
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

bool Function_101(bool bParam0) //Position: 0x4222 / 16930
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

void Function_102(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x424F / 16975
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
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
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

void Function_103() //Position: 0x43A0 / 17312
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_100();
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
	Function_100();
	return;
}

bool Function_104(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x43EB / 17387
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_105(Global_30750[0], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_105(Global_30750[1], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_105(Global_30750[2], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_105(Global_30750[3], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_105(Global_30750[4], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_105(Global_30750[5], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_105(Global_30750[6], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_105(Global_30750[7], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_105(Global_30750[8], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_105(Global_30750[9], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_105(Global_30750[10], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_105(Global_30750[11], bParam1, bParam2, bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_105(Global_30750[12], bParam1, bParam2, bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_105(Global_30750[13], bParam1, bParam2, bParam3);
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

int Function_105(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x45B3 / 17843
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

var Function_106(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x45DA / 17882
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
			Function_91(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_91(uParam0[iVar03], 8);
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

int Function_107(int iParam0, bool bParam1) //Position: 0x46AA / 18090
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_63(iParam0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_6(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			iParam0->f_172 = DECOR_GET_BOOL(bParam1, "catk_bdi");
			iParam0->f_184 = DECOR_GET_FLOAT(bParam1, "catk_spx");
			(iParam0 + 184)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_spy");
			(iParam0 + 184)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_spz");
			iParam0->f_196 = DECOR_GET_FLOAT(bParam1, "catk_scx");
			(iParam0 + 196)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_scy");
			(iParam0 + 196)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_scz");
			iParam0->f_176 = DECOR_GET_BOOL(bParam1, "catk_krd");
			iParam0->f_180 = DECOR_GET_BOOL(bParam1, "catk_krt");
			iParam0->f_208 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_atv"));
			iParam0->f_212 = DECOR_GET_INT(bParam1, "catk_ats");
			iParam0->f_216 = DECOR_GET_BOOL(bParam1, "catk_bus");
			iParam0->f_60 = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_asq"));
			iParam0->f_220 = DECOR_GET_INT(bParam1, "catk_wtm");
			iParam0->f_160 = DECOR_GET_BOOL(bParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_36((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*iParam0 + 100)[bVar0] = DECOR_GET_INT(bParam1, &cVar5);
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

bool Function_108(vector3 vParam0) //Position: 0x48DB / 18651
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_109(int iParam0) //Position: 0x48F3 / 18675
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(iParam0->f_52))
	{
		Function_63(iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("ntargetSet"), 4);
		iParam0->f_52 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(iParam0->f_52))
		{
			return 0;
		}
	}
	return 1;
}

