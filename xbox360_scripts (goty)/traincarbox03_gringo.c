//Decompiled with MagicRDR v1.0
//Function Count : 26
//Statics Count : 26
//Natives Count : 92
//Parameters Count : 1

#region Local Var
	struct<97> Local_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	
	uScriptParam_0 = uScriptParam_0;
	if (Function_25(16384) && Function_25(65536))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_24(&uVar1, 1);
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (bVar0)
		{
			Function_10(&uVar1, GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()), RAND_INT_RANGE(true, 3), "ped_traveller", 0x43160000);
		}
		GRINGO_WAIT(250);
	}
	if (bVar0)
	{
		Function_1(&uVar1, 1);
	}
	return;
}

void Function_1(int iParam0, int iParam1) //Position: 0x6D / 109
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

void Function_2(var uParam0) //Position: 0xCA / 202
{
	if (IS_VOLUME_VALID(uParam0->f_16))
	{
		DESTROY_VOLUME(uParam0->f_16);
	}
	return;
}

void Function_3() //Position: 0xE1 / 225
{
	Function_4();
	return;
}

void Function_4() //Position: 0xEA / 234
{
	Function_5(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_5(int iParam0) //Position: 0xFC / 252
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

void Function_6(var uParam0, int iParam1) //Position: 0x122 / 290
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

void Function_7(var uParam0, int iParam1) //Position: 0x250 / 592
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_8(var uParam0, int iParam1) //Position: 0x26A / 618
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x287 / 647
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

var Function_10(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0x2CE / 718
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
				if (Function_25(32768))
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

void Function_11(int iParam0) //Position: 0x4C5 / 1221
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	if (Function_25(32768))
	{
		if (!IS_VOLUME_VALID(iParam0->f_16))
		{
			iParam0->f_16 = Local_0.f_68;
		}
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_0.f_72)))
		{
			GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_72), 1);
			GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_80), 1);
		}
	}
	else
	{
		if (IS_VOLUME_VALID(iParam0->f_16))
		{
			DESTROY_VOLUME(iParam0->f_16);
		}
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_0.f_72)))
		{
			GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_72), 0);
			GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_80), 0);
		}
	}
	return;
}

bool Function_12(var uParam0, int iParam1) //Position: 0x54E / 1358
{
	if (Function_13(iParam1))
	{
		uParam0->f_4 = Local_0;
		return 1;
	}
	return 0;
}

bool Function_13(int iParam0) //Position: 0x565 / 1381
{
	var uVar0;
	
	Function_23(3, 2);
	uVar0 = uVar0;
	Function_21(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_21(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_21(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_21(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_21(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	if (!Function_16(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_15()));
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "TrainCarBoxcar3_pop", 2, 0.0f, 2.090946f, 0.0f, 0.0f, 0.0f, 0.0f, 2.69351f, 2.303248f, 9.541062f);
	Local_0.f_72 = CREATE_GRINGO_IN_LAYOUT(Local_0, "Rand_Idle_NearWall", "Rand_Idle_NearWall", 0.6496333f, 0.9798797f, 1.296378f, 0.0f, 90.09578f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_72), 1);
	Local_0.f_76 = CREATE_GRINGO_IN_LAYOUT(Local_0, "look_out_window_L", "look_out_window_L", -0.3149849f, 0.981665f, -4.292036f, 0.0f, 0.0f, 0.0f);
	Local_0.f_80 = CREATE_GRINGO_IN_LAYOUT(Local_0, "rand_idle_stand", "Rand_Idle_Sit_Ground", -0.7036909f, 0.9794222f, 1.269479f, 0.0f, -90.22742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_80), 1);
	Local_0.f_84 = CREATE_GRINGO_IN_LAYOUT(Local_0, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", 0.6841315f, 0.9825688f, -3.616831f, 0.0f, 89.78111f, 0.0f);
	Local_0.f_88 = CREATE_GRINGO_IN_LAYOUT(Local_0, "look_out_window_R", "look_out_window_R", -0.3511463f, 0.9852048f, 4.196025f, 0.0f, 180.9666f, 0.0f);
	Local_0.f_92 = CREATE_GRINGO_IN_LAYOUT(Local_0, "train_climb_left", "train_climb_left", -1.285842f, 0.9795684f, -2.492694f, 0.0f, 89.41081f, 0.0f);
	DECOR_SET_INT(Local_0.f_92, "trainAttach", false);
	Local_0.f_96 = CREATE_GRINGO_IN_LAYOUT(Local_0, "train_climb_left1", "train_climb_left", -1.203854f, 0.9826367f, 2.461015f, 0.0f, 89.27229f, 0.0f);
	DECOR_SET_INT(Local_0.f_96, "trainAttach", true);
	Function_14(Local_0, iParam0);
	return 1;
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x967 / 2407
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_15(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

var Function_15() //Position: 0x9A9 / 2473
{
	int iVar0;
	
	return iVar0;
}

bool Function_16(int iParam0) //Position: 0x9B1 / 2481
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_20();
	iVar1 = 0;
	if (!Function_8(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_19(iParam0[iVar03], 8);
		}
		else if (Function_18())
		{
			iVar1 = 1;
			Function_19(iParam0[iVar03], 8);
		}
		Function_19(iParam0[iVar03], 16);
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
				Function_19(iParam0[iVar03], 1);
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
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_19(iParam0[iVar03], 2);
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
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_19(iParam0[iVar03], 2);
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
	Function_17();
	return 1;
}

void Function_17() //Position: 0xD2C / 3372
{
	if (!Function_25(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_18() //Position: 0xD6C / 3436
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

void Function_19(var uParam0, int iParam1) //Position: 0xD97 / 3479
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_20() //Position: 0xDA8 / 3496
{
	if (!Function_25(128))
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

var Function_21(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xDEA / 3562
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_22(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_19(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_22(var uParam0, int iParam1, int iParam2) //Position: 0xE22 / 3618
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_8(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_19(uParam0[iVar03], 4);
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

void Function_23(int iParam0, int iParam1) //Position: 0xEE6 / 3814
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

void Function_24(var uParam0, int iParam1) //Position: 0xF2F / 3887
{
	iParam1 = iParam1;
	*uParam0 = 0;
	return;
}

bool Function_25(int iParam0) //Position: 0xF3D / 3901
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

