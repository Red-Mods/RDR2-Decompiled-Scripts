//Decompiled with MagicRDR v1.0
//Function Count : 34
//Statics Count : 57
//Natives Count : 113
//Parameters Count : 1

#region Local Var
	struct<141> Local_0 = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[32];
	bool bVar15;
	bool bVar16;
	
	bLocal_54 = true;
	iLocal_55 = 0;
	uScriptParam_0 = uScriptParam_0;
	iVar1 = 0;
	bVar2 = false;
	if (Function_33(16384))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_32(&Local_37, 1);
	}
	Function_31(&iLocal_44, 201, 3, 0);
	while (IS_GRINGO_ACTIVE() && !IS_EXITFLAG_SET())
	{
		if (Function_27(&iLocal_44))
		{
			if (bVar0)
			{
				Function_13(&Local_37, GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()), 1, "ped_traveller", 0x43160000);
			}
			if (bVar0)
			{
				if (IS_LAYOUTREF_VALID(StackVal))
				{
					if (!Function_12(StackVal, Local_37.f_16))
					{
						iLocal_55++;
						if (iLocal_55 > 10)
						{
							iLocal_55 = 0;
						}
						if (!bVar2 && iLocal_55 != 0)
						{
							bVar15 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
							if (DECOR_CHECK_EXIST(bVar15, "EngieAllowed"))
							{
								bLocal_54 = DECOR_GET_BOOL(bVar15, "EngieAllowed");
							}
							if (bLocal_54)
							{
								if (!IS_ACTOR_VALID(bLocal_36))
								{
									strcpy(&cVar3, "AMB_ENG", 32);
									cVar3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(&cVar3) };
									bLocal_36 = CREATE_ACTOR_IN_LAYOUT(StackVal, &cVar3, 201, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
									if (IS_ACTOR_VALID(bLocal_36))
									{
										bVar2 = true;
										SET_ACTOR_FACTION(bLocal_36, 21);
										TASK_STAND_STILL(bLocal_36, -1.0f, 0, 0);
										TASK_PRIORITY_SET(bLocal_36, 1);
										DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bLocal_36), "CanBeLasso", false);
										if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_0.f_140)))
										{
											SNAP_ACTOR_TO_GRINGO(bLocal_36, Local_0.f_140, "UseCase1", 1, 0, 0);
											TASK_USE_GRINGO(bLocal_36, GET_GRINGO_FROM_OBJECT(Local_0.f_140), "UseCase1", 4294967295, 1);
											TASK_PRIORITY_SET(bLocal_36, 1);
										}
									}
									else
									{
										bVar2 = false;
									}
								}
							}
						}
						else if ((bVar2 && !Global_3380) && iLocal_55 != 0)
						{
							bVar16 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
							if (DECOR_CHECK_EXIST(bVar16, "EngieAllowed"))
							{
								bLocal_54 = DECOR_GET_BOOL(bVar16, "EngieAllowed");
							}
							if (bLocal_54)
							{
								if (IS_ACTOR_VALID(bLocal_36))
								{
									if (IS_ACTOR_ALIVE(bLocal_36))
									{
										if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_0.f_140)))
										{
											SNAP_ACTOR_TO_GRINGO(bLocal_36, Local_0.f_140, "UseCase1", 1, 0, 0);
											TASK_USE_GRINGO(bLocal_36, GET_GRINGO_FROM_OBJECT(Local_0.f_140), "UseCase1", 4294967295, 1);
											TASK_PRIORITY_SET(bLocal_36, 1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		GRINGO_WAIT(250);
	}
	if (IS_ACTOR_VALID(bLocal_36))
	{
		TASK_CLEAR(bLocal_36);
		DESTROY_ACTOR(bLocal_36);
	}
	if (bVar0)
	{
		Function_5(&Local_37, 1);
	}
	Function_1(&iLocal_44);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x266 / 614
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

void Function_2(var uParam0, int iParam1) //Position: 0x28C / 652
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

void Function_3(var uParam0, int iParam1) //Position: 0x3BA / 954
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x3D4 / 980
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0, int iParam1) //Position: 0x3F1 / 1009
{
	iParam1 = iParam1;
	if (IS_ZONE_VALID(iParam0->f_20))
	{
		DESTROY_ZONE(iParam0->f_20);
	}
	if (IS_ITERATOR_VALID(StackVal))
	{
		DESTROY_ITERATOR(StackVal);
	}
	if (IS_VOLUME_VALID(iParam0->f_16))
	{
		DESTROY_VOLUME(iParam0->f_16);
	}
	if (SQUAD_IS_VALID(iParam0->f_24))
	{
		Function_9(iParam0 + 24);
	}
	Function_7();
	RELEASE_LAYOUT_REF(StackVal);
	Function_6(iParam0);
	return;
}

void Function_6(var uParam0) //Position: 0x44E / 1102
{
	if (IS_VOLUME_VALID(uParam0->f_16))
	{
		DESTROY_VOLUME(uParam0->f_16);
	}
	if (IS_LAYOUTREF_VALID(StackVal))
	{
		RELEASE_LAYOUT_REF(StackVal);
	}
	return;
}

void Function_7() //Position: 0x476 / 1142
{
	Function_8();
	return;
}

void Function_8() //Position: 0x47F / 1151
{
	Function_1(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_9(int iParam0) //Position: 0x491 / 1169
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

struct<32> Function_10(bool bParam0) //Position: 0x4D8 / 1240
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11("0", &cVar8, ""), 4);
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

struct<32> Function_11(char* cParam0, char* cParam1, char* cParam2) //Position: 0x542 / 1346
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_12(bool bParam0, bool bParam1) //Position: 0x561 / 1377
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (IS_VOLUME_VALID(bParam1))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
			ITERATE_IN_VOLUME(bVar0, bParam1);
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_OBJECT_NAME(bVar1);
				if (STRING_CONTAINS_STRING(bVar2, "amb_eng"))
				{
					DESTROY_ITERATOR(bVar0);
					return 1;
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			if (IS_ITERATOR_VALID(bVar0))
			{
				DESTROY_ITERATOR(bVar0);
			}
		}
	}
	return 0;
}

var Function_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0x5D3 / 1491
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	
	GET_OBJECT_POSITION(bParam1, &vVar2);
	iVar5 = 600;
	if (IS_OBJECT_VALID(bParam1))
	{
		switch (*uParam0)
		{
			case 0x00000000:
				*uParam0 = 1;
				iVar5 = 0;
				break;
			
			case 0x00000001:
				GET_POSITION(Global_34573, &Global_34574);
				if (VDIST(vVar2, Global_34574) > fParam4)
				{
					*uParam0 = 2;
					iVar5 = 0;
				}
				break;
			
			case 0x00000002:
				iVar5 = 250;
				if (Function_15(uParam0, bParam1))
				{
					DECOR_SET_INT(StackVal, bParam1, "mylayout");
					DECOR_SET_OBJECT(StackVal, bParam1, "myLayoutObj");
					*uParam0 = 4;
					iVar5 = 0;
				}
				break;
			
			case 0x00000003:
				break;
			
			case 0x00000004:
				if (Function_33(32768))
				{
					if (IS_VOLUME_VALID(uParam0->f_16))
					{
						if (!IS_POPSET_VALID(uParam0->f_12))
						{
							uParam0->f_12 = FIND_NAMED_POPULATION_SET(bParam3);
							if (IS_POPSET_VALID(uParam0->f_12))
							{
								if (IS_ZONE_VALID(uParam0->f_20))
								{
									DESTROY_ZONE(uParam0->f_20);
								}
							}
						}
						if (!IS_ZONE_VALID(uParam0->f_20) && IS_POPSET_VALID(uParam0->f_12))
						{
							uParam0->f_20 = CREATE_ZONE_VOLUME(uParam0->f_16);
							SET_ZONE_POPULATION_TYPE(uParam0->f_20, uParam0->f_12);
							SET_ZONE_POPULATION_COUNT(uParam0->f_20, bParam2);
							SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(uParam0->f_20, 0);
						}
						bVar1 = CREATE_OBJECT_ITERATOR(StackVal);
						ITERATE_IN_LAYOUT(bVar1, GET_AMBIENT_LAYOUT());
						ITERATE_ON_OBJECT_TYPE(bVar1, 15);
						ITERATE_IN_VOLUME(bVar1, GET_OBJECT_FROM_VOLUME(uParam0->f_16));
						bVar0 = START_OBJECT_ITERATOR(bVar1);
						while (IS_OBJECT_VALID(bVar0))
						{
							if (GET_ACTOR_FROM_OBJECT(bVar0) != GET_PLAYER_ACTOR(0))
							{
								if (!DECOR_CHECK_EXIST(bVar0, "nNO_TARGET"))
								{
									DECOR_SET_BOOL(bVar0, "nNO_TARGET", false);
									SET_ACTOR_CAN_BE_TARGETED(GET_ACTOR_FROM_OBJECT(bVar0), false);
								}
							}
							bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
						}
						if (IS_ITERATOR_VALID(bVar1))
						{
							DESTROY_ITERATOR(bVar1);
						}
					}
				}
				if (VDIST(vVar2, Global_34574) < (fParam4 + 30.0f))
				{
					*uParam0 = 5;
				}
				break;
			
			case 0x00000005:
				Function_7();
				*uParam0 = 1;
				iVar5 = 0;
				break;
		}
		Function_14(uParam0);
	}
	return iVar5;
}

void Function_14(int iParam0) //Position: 0x7CA / 1994
{
	if (IS_LAYOUTREF_VALID(StackVal))
	{
		if (Function_33(32768))
		{
			if (!IS_VOLUME_VALID(iParam0->f_16))
			{
				iParam0->f_16 = Local_0.f_20;
			}
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_0.f_140)))
			{
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_140), 0);
			}
		}
		else
		{
			if (IS_VOLUME_VALID(iParam0->f_16))
			{
				DESTROY_VOLUME(iParam0->f_16);
			}
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_0.f_140)))
			{
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_140), 0);
			}
		}
	}
	return;
}

bool Function_15(var uParam0, int iParam1) //Position: 0x83D / 2109
{
	if (Function_16(iParam1))
	{
		uParam0->f_4 = Local_0;
		return 1;
	}
	return 0;
}

bool Function_16(int iParam0) //Position: 0x854 / 2132
{
	var uVar0;
	
	Function_26(3, 2);
	uVar0 = uVar0;
	Function_23(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_27(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_22()));
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "TrainCarSteamer_pop", 2, 0.0f, 2.07893f, 4.06201f, 0.0f, 0.0f, 0.0f, 1.751237f, 1.956251f, 2.196033f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_collision", 2, 0.0f, 0.7040083f, -4.30831f, 0.0f, 0.0f, 0.0f, 2.061226f, 1.0f, 1.432657f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_body", 3, 0.0f, 2.058589f, -0.6215568f, 90.0f, 0.0f, 0.0f, 0.8470065f, 3.11252f, 0.8470065f);
	*(&Local_0 + 32) = { 0.0f, 2.809686f, -0.540985f };
	*(&Local_0 + 32 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_18(iParam0, &Local_0 + 32);
	Local_0.f_56 = CREATE_POINT_IN_LAYOUT(Local_0, "f_explodeCenter", 0.0f, 2.809686f, -0.540985f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 60) = { 0.9049232f, 3.265046f, -2.436195f };
	*(&Local_0 + 60 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_18(iParam0, &Local_0 + 60);
	Local_0.f_84 = CREATE_POINT_IN_LAYOUT(Local_0, "f_frontcamerapos", 0.9049232f, 3.265046f, -2.436195f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 88) = { 0.0f, 0.323201f, -9.766208f };
	*(&Local_0 + 88 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_18(iParam0, &Local_0 + 88);
	*(&Local_0 + 112) = { -1.593886f, 3.654323f, -0.705147f };
	*(&Local_0 + 112 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_18(iParam0, &Local_0 + 112);
	Local_0.f_136 = CREATE_POINT_IN_LAYOUT(Local_0, "f_frontcamerapos1", -1.593886f, 3.654323f, -0.705147f, 0.0f, 0.0f, 0.0f);
	Local_0.f_140 = CREATE_GRINGO_IN_LAYOUT(Local_0, "train_engineer", "train_engineer", -0.374f, 1.143f, 3.992f, 0.0f, 0.0f, 0.0f);
	Function_17(Local_0, iParam0);
	return 1;
}

void Function_17(bool bParam0, bool bParam1) //Position: 0xAC7 / 2759
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_22(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

void Function_18(var uParam0, int iParam1) //Position: 0xB09 / 2825
{
	Function_19(uParam0, 1, iParam1, iParam1 + 12);
	return;
}

void Function_19(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xB1B / 2843
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_20(&vVar0, uParam2))
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

bool Function_20(int iParam0, int iParam1) //Position: 0xC43 / 3139
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_21(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_21(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_21(vector3 vParam0) //Position: 0xCAE / 3246
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_22() //Position: 0xCC6 / 3270
{
	int iVar0;
	
	return iVar0;
}

var Function_23(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xCCE / 3278
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_25(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_24(uParam0[iVar03], 8);
	}
	return iVar0;
}

void Function_24(var uParam0, int iParam1) //Position: 0xD06 / 3334
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

var Function_25(var uParam0, int iParam1, int iParam2) //Position: 0xD17 / 3351
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_24(uParam0[iVar03], 4);
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

void Function_26(int iParam0, int iParam1) //Position: 0xDDB / 3547
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

bool Function_27(int iParam0) //Position: 0xE24 / 3620
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_30();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_24(iParam0[iVar03], 8);
		}
		else if (Function_29())
		{
			iVar1 = 1;
			Function_24(iParam0[iVar03], 8);
		}
		Function_24(iParam0[iVar03], 16);
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
				Function_24(iParam0[iVar03], 1);
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
							Function_24(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_24(iParam0[iVar03], 2);
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
							Function_24(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_24(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_24(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_24(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_24(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_24(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_24(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_24(iParam0[iVar03], 2);
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
	Function_28();
	return 1;
}

void Function_28() //Position: 0x119F / 4511
{
	if (!Function_33(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_29() //Position: 0x11DF / 4575
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

void Function_30() //Position: 0x120A / 4618
{
	if (!Function_33(128))
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

var Function_31(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x124C / 4684
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_24(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_24(uParam0[iVar03], 8);
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

void Function_32(var uParam0, int iParam1) //Position: 0x131C / 4892
{
	iParam1 = iParam1;
	*uParam0 = 0;
	return;
}

bool Function_33(int iParam0) //Position: 0x132A / 4906
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

