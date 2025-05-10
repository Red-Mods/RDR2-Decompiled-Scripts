//Decompiled with MagicRDR v1.0
//Function Count : 30
//Statics Count : 53
//Natives Count : 98
//Parameters Count : 1

#region Local Var
	struct<205> Local_0 = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	
	uScriptParam_0 = uScriptParam_0;
	if (Function_29(16384) && Function_29(65536))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_28(&uVar1, 1);
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (bVar0)
		{
			Function_10(&uVar1, GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()), 3, "ped_traveller", 0x43160000);
		}
		GRINGO_WAIT(250);
	}
	if (bVar0)
	{
		Function_1(&uVar1, 1);
	}
	return;
}

void Function_1(int iParam0, int iParam1) //Position: 0x69 / 105
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
	Function_3();
	RELEASE_LAYOUT_REF(StackVal);
	Function_2(iParam0);
	return;
}

void Function_2(var uParam0) //Position: 0xC6 / 198
{
	if (IS_VOLUME_VALID(uParam0->f_16))
	{
		DESTROY_VOLUME(uParam0->f_16);
	}
	return;
}

void Function_3() //Position: 0xDD / 221
{
	Function_4();
	return;
}

void Function_4() //Position: 0xE6 / 230
{
	Function_5(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_5(int iParam0) //Position: 0xF8 / 248
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_6(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x11E / 286
{
	if (Function_8(uParam0[iParam13], 4))
	{
		if (Function_8(uParam0[iParam13], 1))
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
			Function_7(uParam0[iParam13], 1);
			Function_7(uParam0[iParam13], 2);
			Function_7(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x24C / 588
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(var uParam0, int iParam1) //Position: 0x266 / 614
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x283 / 643
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

var Function_10(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0x2CA / 714
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
				if (Function_12(uParam0, bParam1))
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
				if (Function_29(32768))
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
				Function_3();
				*uParam0 = 1;
				iVar5 = 0;
				break;
		}
		Function_11(uParam0);
	}
	return iVar5;
}

void Function_11(int iParam0) //Position: 0x4C1 / 1217
{
	bool bVar0;
	bool bVar1;
	
	if (Function_29(32768))
	{
		if (!IS_VOLUME_VALID(iParam0->f_16))
		{
			iParam0->f_16 = Local_0.f_20;
		}
		if (IS_VOLUME_VALID(iParam0->f_16))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(StackVal);
			ITERATE_IN_VOLUME(bVar0, iParam0->f_16);
			ITERATE_ON_OBJECT_TYPE(bVar0, 12);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar1), 1);
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			DESTROY_ITERATOR(bVar0);
		}
	}
	else
	{
		if (IS_VOLUME_VALID(iParam0->f_16))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(StackVal);
			ITERATE_IN_VOLUME(bVar0, iParam0->f_16);
			ITERATE_ON_OBJECT_TYPE(bVar0, 12);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar1), 0);
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			DESTROY_ITERATOR(bVar0);
		}
		if (IS_VOLUME_VALID(iParam0->f_16))
		{
			DESTROY_VOLUME(iParam0->f_16);
		}
	}
	return;
}

bool Function_12(int iParam0, int iParam1) //Position: 0x58E / 1422
{
	if (Function_14(iParam1))
	{
		iParam0->f_4 = Local_0;
		if (Function_29(32768))
		{
			iParam0->f_16 = Local_0.f_20;
			iParam0->f_24 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_0, Function_13()));
		}
		return 1;
	}
	return 0;
}

var Function_13() //Position: 0x5C6 / 1478
{
	int iVar0;
	
	return iVar0;
}

bool Function_14(int iParam0) //Position: 0x5CE / 1486
{
	var uVar0;
	
	Function_27(3, 2);
	uVar0 = uVar0;
	Function_25(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/jump_from_horse", 1, 0);
	if (!Function_20(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_13()));
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "TrainCarPassenger1_pop", 2, 0.0f, 2.193675f, 0.0f, 0.0f, 0.0f, 0.0f, 3.292302f, 2.472609f, 12.8515f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "vol_roof", 2, 0.0f, 4.296736f, 0.0f, 0.0f, 0.0f, 0.0f, 3.743959f, 1.604275f, 16.92944f);
	*(&Local_0 + 28) = { 0.0f, 1.094733f, 8.054148f };
	*(&Local_0 + 28 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_16(iParam0, &Local_0 + 28);
	Local_0.f_52 = CREATE_POINT_IN_LAYOUT(Local_0, "flag_spawn01", 0.0f, 1.094733f, 8.054148f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 56) = { 0.0f, 1.109271f, -8.013618f };
	*(&Local_0 + 56 + 12) = { 0.0f, 180.0f, 0.0f };
	Function_16(iParam0, &Local_0 + 56);
	Local_0.f_80 = CREATE_POINT_IN_LAYOUT(Local_0, "flag_spawn02", 0.0f, 1.109271f, -8.013618f, 0.0f, 180.0f, 0.0f);
	*(&Local_0 + 84) = { 0.0f, 1.146881f, 5.673518f };
	*(&Local_0 + 84 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_16(iParam0, &Local_0 + 84);
	Local_0.f_108 = CREATE_POINT_IN_LAYOUT(Local_0, "f_hostileBack", 0.0f, 1.146881f, 5.673518f, 0.0f, 0.0f, 0.0f);
	Local_0.f_112 = CREATE_POINT_IN_LAYOUT(Local_0, "f_hostileFront", 0.0f, 1.147f, -6.473069f, 0.0f, -180.0f, 0.0f);
	Local_0.f_116 = CREATE_POINT_IN_LAYOUT(Local_0, "f_victimFront", 0.0f, 1.147f, -5.696525f, 0.0f, -180.0f, 0.0f);
	Local_0.f_120 = CREATE_POINT_IN_LAYOUT(Local_0, "f_victimBack", 0.0f, 1.147f, 4.961267f, 0.0f, 0.0f, 0.0f);
	Local_0.f_124 = CREATE_POINT_IN_LAYOUT(Local_0, "f_playerStart", 0.0f, 1.147f, -0.08173175f, 0.0f, 0.0f, 0.0f);
	Local_0.f_128 = CREATE_POINT_IN_LAYOUT(Local_0, "f_cameraBack", -0.5275578f, 2.140265f, 2.565834f, 0.0f, 0.0f, 0.0f);
	Local_0.f_132 = CREATE_POINT_IN_LAYOUT(Local_0, "f_cameraFront", 0.6090299f, 2.140265f, -3.867013f, 0.0f, -192.4327f, 0.0f);
	Local_0.f_136 = CREATE_POINT_IN_LAYOUT(Local_0, "f_cameraOut", 0.8811418f, 2.578951f, -9.839849f, 0.0f, 0.0f, 0.0f);
	Local_0.f_140 = CREATE_POINT_IN_LAYOUT(Local_0, "f_cameraBandits", -0.004480795f, 8.0631f, 20.47454f, 0.0f, -168.2202f, 0.0f);
	Local_0.f_144 = CREATE_POINT_IN_LAYOUT(Local_0, "f_banditleft0", -4.208273f, 1.008175f, -2.417027f, 0.0f, 0.0f, 0.0f);
	Local_0.f_148 = CREATE_POINT_IN_LAYOUT(Local_0, "f_banditleft1", -2.959326f, 1.008175f, 1.598058f, 0.0f, 0.0f, 0.0f);
	Local_0.f_152 = CREATE_POINT_IN_LAYOUT(Local_0, "f_banditright0", 3.054057f, 1.008175f, -3.638125f, 0.0f, 0.0f, 0.0f);
	Local_0.f_156 = CREATE_POINT_IN_LAYOUT(Local_0, "f_banditright1", 2.731088f, 2.408042f, 13.7085f, 0.0f, 0.0f, 0.0f);
	Local_0.f_160 = CREATE_POINT_IN_LAYOUT(Local_0, "f_banditright2", 3.538544f, 1.008175f, -10.98625f, 0.0f, 0.0f, 0.0f);
	Local_0.f_164 = CREATE_POINT_IN_LAYOUT(Local_0, "f_banditleft2", -4.208273f, 1.008175f, 10.56378f, 0.0f, 0.0f, 0.0f);
	Local_0.f_168 = CREATE_POINT_IN_LAYOUT(Local_0, "f_jumpfront", 0.0f, 1.109271f, -9.150616f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 172) = { 0.0f, 1.109271f, 9.066972f };
	*(&Local_0 + 172 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_16(iParam0, &Local_0 + 172);
	Local_0.f_196 = CREATE_POINT_IN_LAYOUT(Local_0, "f_jumprear", 0.0f, 1.109271f, 9.066972f, 0.0f, 0.0f, 0.0f);
	Local_0.f_200 = CREATE_GRINGO_IN_LAYOUT(Local_0, "jump_from_horse", "jump_from_horse", 0.0f, 1.274038f, 9.054914f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(Local_0.f_200, "JUMPPOS", "REAR");
	Local_0.f_204 = CREATE_GRINGO_IN_LAYOUT(Local_0, "jump_from_horse1", "jump_from_horse", 0.0f, 1.274038f, -9.140799f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(Local_0.f_204, "JUMPPOS", "FRONT");
	Function_15(Local_0, iParam0);
	return 1;
}

void Function_15(bool bParam0, bool bParam1) //Position: 0xB09 / 2825
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_13(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xB4B / 2891
{
	Function_17(uParam0, 1, iParam1, iParam1 + 12);
	return;
}

void Function_17(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xB5D / 2909
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_18(&vVar0, uParam2))
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

bool Function_18(int iParam0, int iParam1) //Position: 0xC85 / 3205
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_19(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0.01f);
	iParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_19(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_19(vector3 vParam0) //Position: 0xCF0 / 3312
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_20(int iParam0) //Position: 0xD08 / 3336
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_24();
	iVar1 = 0;
	if (!Function_8(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_23(iParam0[iVar03], 8);
		}
		else if (Function_22())
		{
			iVar1 = 1;
			Function_23(iParam0[iVar03], 8);
		}
		Function_23(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_8(iParam0[iVar03], 4))
		{
			if (!Function_8(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_8(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_8(iParam0[03], 8) || iVar1));
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
				Function_23(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_8(iParam0[iVar03], 4))
		{
			if (!Function_8(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_23(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_23(iParam0[iVar03], 2);
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
							Function_23(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_23(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_23(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_23(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_23(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_23(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_23(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_23(iParam0[iVar03], 2);
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
	Function_21();
	return 1;
}

void Function_21() //Position: 0x1083 / 4227
{
	if (!Function_29(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_22() //Position: 0x10C3 / 4291
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

void Function_23(var uParam0, int iParam1) //Position: 0x10EE / 4334
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_24() //Position: 0x10FF / 4351
{
	if (!Function_29(128))
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

var Function_25(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1141 / 4417
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_26(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_23(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_26(var uParam0, int iParam1, int iParam2) //Position: 0x1179 / 4473
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_23(uParam0[iVar03], 4);
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

void Function_27(int iParam0, int iParam1) //Position: 0x123D / 4669
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

void Function_28(var uParam0, int iParam1) //Position: 0x1286 / 4742
{
	iParam1 = iParam1;
	*uParam0 = 0;
	return;
}

bool Function_29(int iParam0) //Position: 0x1294 / 4756
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

