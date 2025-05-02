//Decompiled with MagicRDR v1.0
//Function Count : 30
//Statics Count : 60
//Natives Count : 95
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 5;
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
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	
	uScriptParam_0 = &uScriptParam_0;
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

void Function_1(int iParam0, int iParam1) //Position: 0x6F / 111
{
	iParam1 = &iParam1;
	if (IS_ZONE_VALID(&iParam0 + 40))
	{
		DESTROY_ZONE(&iParam0 + 40);
	}
	if (IS_ITERATOR_VALID(&iParam0 + 16))
	{
		DESTROY_ITERATOR(&iParam0 + 16);
	}
	if (IS_VOLUME_VALID(&iParam0 + 32))
	{
		DESTROY_VOLUME(&iParam0 + 32);
	}
	if (SQUAD_IS_VALID(&iParam0 + 48))
	{
		Function_9(&iParam0 + 48);
	}
	Function_3();
	RELEASE_LAYOUT_REF(&iParam0 + 8);
	Function_2(&iParam0);
	return;
}

void Function_2(int iParam0) //Position: 0xE0 / 224
{
	if (IS_VOLUME_VALID(&iParam0 + 32))
	{
		DESTROY_VOLUME(&iParam0 + 32);
	}
	return;
}

void Function_3() //Position: 0xFB / 251
{
	Function_4();
	return;
}

void Function_4() //Position: 0x104 / 260
{
	Function_5(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_5(int iParam0) //Position: 0x117 / 279
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_6(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_6(struct<2>[] Param0, int iParam1) //Position: 0x13F / 319
{
	if (Function_8(&(Param0[iParam12]), 4))
	{
		if (Function_8(&(Param0[iParam12]), 1))
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
			Function_7(&(Param0[iParam12]), 1);
			Function_7(&(Param0[iParam12]), 2);
			Function_7(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_7(struct<13> Param0) //Position: 0x28A / 650
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_8(struct<13> Param0) //Position: 0x2A7 / 679
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x2C5 / 709
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

var Function_10(int iParam0, var uParam1, bool bParam2, var uParam3, float fParam4) //Position: 0x313 / 787
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	GET_OBJECT_POSITION(&uParam1, &Var2);
	iVar4 = 600;
	if (IS_OBJECT_VALID(&uParam1))
	{
		switch (iParam0)
		{
			case 0x00000000:
				iParam0 = 1;
				iVar4 = 0;
				break;
			
			case 0x00000001:
				GET_POSITION(&Global_54076, &Global_54078);
				if (VDIST(Var2, Global_54078) > &fParam4)
				{
					iParam0 = 2;
					iVar4 = 0;
				}
				break;
			
			case 0x00000002:
				iVar4 = 250;
				if (Function_12(&iParam0, &uParam1))
				{
					DECOR_SET_INT(&uParam1, "mylayout", &iParam0 + 8);
					DECOR_SET_OBJECT(&uParam1, "myLayoutObj", &iParam0 + 8);
					iParam0 = 4;
					iVar4 = 0;
				}
				break;
			
			case 0x00000003:
				break;
			
			case 0x00000004:
				if (Function_29(32768))
				{
					if (IS_VOLUME_VALID(&iParam0 + 32))
					{
						if (!IS_POPSET_VALID(&iParam0 + 24))
						{
							*(&iParam0 + 24) = FIND_NAMED_POPULATION_SET(&uParam3);
							if (IS_POPSET_VALID(&iParam0 + 24))
							{
								if (IS_ZONE_VALID(&iParam0 + 40))
								{
									DESTROY_ZONE(&iParam0 + 40);
								}
							}
						}
						if (!IS_ZONE_VALID(&iParam0 + 40) && IS_POPSET_VALID(&iParam0 + 24))
						{
							*(&iParam0 + 40) = CREATE_ZONE_VOLUME(&iParam0 + 32);
							SET_ZONE_POPULATION_TYPE(&iParam0 + 40, &iParam0 + 24);
							SET_ZONE_POPULATION_COUNT(&iParam0 + 40, bParam2);
							SET_ZONE_POPULATION_ANIMAL_DOMESTICATION(&iParam0 + 40, 0);
						}
						uVar1 = CREATE_OBJECT_ITERATOR(&iParam0 + 8);
						ITERATE_IN_LAYOUT(&uVar1, GET_AMBIENT_LAYOUT());
						ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
						ITERATE_IN_VOLUME(&uVar1, GET_OBJECT_FROM_VOLUME(&iParam0 + 32));
						uVar0 = START_OBJECT_ITERATOR(&uVar1);
						while (IS_OBJECT_VALID(&uVar0))
						{
							if (GET_ACTOR_FROM_OBJECT(&uVar0) != GET_PLAYER_ACTOR(0))
							{
								if (!DECOR_CHECK_EXIST(&uVar0, "nNO_TARGET"))
								{
									DECOR_SET_BOOL(&uVar0, "nNO_TARGET", false);
									SET_ACTOR_CAN_BE_TARGETED(GET_ACTOR_FROM_OBJECT(&uVar0), false);
								}
							}
							uVar0 = OBJECT_ITERATOR_NEXT(&uVar1);
						}
						if (IS_ITERATOR_VALID(&uVar1))
						{
							DESTROY_ITERATOR(&uVar1);
						}
					}
				}
				if (VDIST(Var2, Global_54078) < (&fParam4 + 30.0f))
				{
					iParam0 = 5;
				}
				break;
			
			case 0x00000005:
				Function_3();
				iParam0 = 1;
				iVar4 = 0;
				break;
		}
		Function_11(&iParam0);
	}
	return iVar4;
}

void Function_11(struct<7> Param0) //Position: 0x54E / 1358
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	if (Function_29(32768))
	{
		if (!IS_VOLUME_VALID(&Param0 + 32))
		{
			*(&Param0 + 32) = &iLocal_0 + 96;
		}
	}
	else if (IS_VOLUME_VALID(&Param0 + 32))
	{
		DESTROY_VOLUME(&Param0 + 32);
	}
	return;
}

bool Function_12(int iParam0, int iParam1) //Position: 0x598 / 1432
{
	if (Function_13(&iParam1))
	{
		*(&iParam0 + 8) = &iLocal_0;
		return 1;
	}
	return 0;
}

bool Function_13(var uParam0) //Position: 0x5B3 / 1459
{
	var uVar0;
	
	Function_27(3, 2);
	uVar0 = &uVar0;
	Function_25(&iLocal_0 + 8, "p_gen_crate01x", 0, 0);
	Function_25(&iLocal_0 + 8, "p_gen_crate02x", 0, 0);
	Function_25(&iLocal_0 + 8, "p_gen_trunk01x", 0, 0);
	Function_25(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	Function_25(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/train_climb_right", 1, 0);
	if (!Function_20(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_19()));
	*(&iLocal_0 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "TrainCarBaggage_pop", 2,802597E-45f, Vector(0.0f, 2,159278f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2,546067f, 2,484815f, 12,14949f));
	*(&iLocal_0 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_roof", 2,802597E-45f, Vector(0.0f, 4,320729f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3,489505f, 1,519827f, 12,51801f));
	*(&iLocal_0 + 112) = Vector(0,8193135f, 1,166096f, 3,335891f);
	*(&iLocal_0 + 112 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_15(&uParam0, &iLocal_0 + 112);
	*(&iLocal_0 + 136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_spawn", Vector(0,8193135f, 1,166096f, 3,335891f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 144) = Vector(-0,9441009f, 1,166096f, -3,126462f);
	*(&iLocal_0 + 144 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_15(&uParam0, &iLocal_0 + 144);
	*(&iLocal_0 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_spawn1", Vector(-0,9441009f, 1,166096f, -3,126462f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "train_climb_left", "train_climb_left", Vector(-1,463285f, 1,155001f, -3,187149f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_0 + 176, "trainAttach", 2);
	*(&iLocal_0 + 184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "train_climb_left1", "train_climb_left", Vector(-1,402914f, 1,081467f, 3,269876f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_0 + 184, "trainAttach", false);
	*(&iLocal_0 + 192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "train_climb_right", "train_climb_right", Vector(1,404918f, 1,13368f, -3,177248f), Vector(0.0f, -90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_0 + 192, "trainAttach", 3);
	*(&iLocal_0 + 200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "train_climb_right1", "train_climb_right", Vector(1,435628f, 1,13368f, 3,242557f), Vector(0.0f, -90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_0 + 200, "trainAttach", true);
	*(&iLocal_0 + 208) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ncrate01x0", "p_gen_crate01x", Vector(-0,5313191f, 1,039061f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
	*(&iLocal_0 + 216) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ncrate02x0", "p_gen_crate02x", Vector(0,1486674f, 1,032114f, 2,57437f), Vector(0.0f, 0.0f, 0.0f), true);
	*(&iLocal_0 + 224) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ntrunk01x0", "p_gen_trunk01x", Vector(0,7765777f, 1,037041f, -1,718897f), Vector(0.0f, -90.0f, 0.0f), true);
	Function_14(&iLocal_0, &uParam0);
	return 1;
}

void Function_14(int iParam0, var uParam1) //Position: 0xA1A / 2586
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &uParam1, Function_19(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0xA65 / 2661
{
	Function_16(&uParam0, 1, &iParam1, &iParam1 + 12);
	return;
}

void Function_16(var uParam0, bool bParam1, struct<2> Param2) //Position: 0xA7A / 2682
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_17(&Var0, &Param2))
			{
				Param2 = Var0;
			}
		}
		else
		{
			Param2 = Var0;
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&uParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_17(vector3 vParam0) //Position: 0xBA7 / 2983
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_18(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_18(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_18(vector3 vParam0) //Position: 0xC1D / 3101
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_19() //Position: 0xC35 / 3125
{
	int iVar0;
	
	return &iVar0;
}

bool Function_20(struct<2>[] Param0) //Position: 0xC3E / 3134
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_24();
	iVar1 = 0;
	if (!Function_8(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_23(&(Param0[iVar02]), 8);
		}
		else if (Function_22())
		{
			iVar1 = 1;
			Function_23(&(Param0[iVar02]), 8);
		}
		Function_23(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_8(&(Param0[iVar02]), 4))
		{
			if (!Function_8(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_8(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_8(&(Param0[02]), 8) || iVar1));
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
				Function_23(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_8(&(Param0[iVar02]), 4))
		{
			if (!Function_8(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_23(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_23(&(Param0[iVar02]), 2);
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
							Function_23(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_23(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_23(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_23(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_23(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_23(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_23(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_23(&(Param0[iVar02]), 2);
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

void Function_21() //Position: 0x1000 / 4096
{
	if (!Function_29(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_22() //Position: 0x1040 / 4160
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

void Function_23(struct<13> Param0) //Position: 0x106E / 4206
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_24() //Position: 0x1081 / 4225
{
	if (!Function_29(128))
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

var Function_25(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x10C3 / 4291
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_26(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_23(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_26(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1101 / 4353
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_8(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_23(&(Param0[iVar02]), 4);
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

void Function_27(int iParam0, int iParam1) //Position: 0x11D0 / 4560
{
	switch (&iParam1)
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

void Function_28(var uParam0, int iParam1) //Position: 0x121A / 4634
{
	iParam1 = &iParam1;
	uParam0 = 0;
	return;
}

bool Function_29(int iParam0) //Position: 0x122B / 4651
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

