//Decompiled with MagicRDR v1.0
//Function Count : 26
//Statics Count : 36
//Natives Count : 90
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 6;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	
	uScriptParam_0 = &uScriptParam_0;
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

void Function_2(struct<7> Param0) //Position: 0xE0 / 224
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	return;
}

void Function_3() //Position: 0xF0 / 240
{
	Function_4();
	return;
}

void Function_4() //Position: 0xF9 / 249
{
	Function_5(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_5(int iParam0) //Position: 0x10C / 268
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

void Function_6(struct<2>[] Param0, int iParam1) //Position: 0x134 / 308
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

void Function_7(struct<13> Param0) //Position: 0x27F / 639
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_8(struct<13> Param0) //Position: 0x29C / 668
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x2BA / 698
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

var Function_10(int iParam0, var uParam1, bool bParam2, var uParam3, float fParam4) //Position: 0x308 / 776
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
				if (Function_25(32768))
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

void Function_11(struct<7> Param0) //Position: 0x543 / 1347
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	return;
}

bool Function_12(int iParam0, int iParam1) //Position: 0x553 / 1363
{
	if (Function_13(&iParam1))
	{
		*(&iParam0 + 8) = &iLocal_0;
		return 1;
	}
	return 0;
}

bool Function_13(var uParam0) //Position: 0x56E / 1390
{
	var uVar0;
	
	Function_23(3, 2);
	uVar0 = &uVar0;
	Function_21(&iLocal_0 + 8, "p_gen_crate17x", 0, 0);
	Function_21(&iLocal_0 + 8, "p_gen_crateBreak02x", 0, 0);
	Function_21(&iLocal_0 + 8, "p_gen_barrelHalf01x", 0, 0);
	Function_21(&iLocal_0 + 8, "p_gen_crateBreak01x", 0, 0);
	Function_21(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/train_climb_right", 1, 0);
	Function_21(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	if (!Function_16(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_15()));
	*(&iLocal_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "TrainCarBoxcar1_pop", 2,802597E-45f, Vector(0.0f, 2,137213f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2,645767f, 2,393137f, 9,50048f));
	*(&iLocal_0 + 120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "train_climb_right", "train_climb_right", Vector(1,489169f, 0,9831709f, -0,08519259f), Vector(0.0f, -89,70499f, 0.0f));
	DECOR_SET_INT(&iLocal_0 + 120, "trainAttach", true);
	*(&iLocal_0 + 128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "train_climb_left", "train_climb_left", Vector(-1,53174f, 1,039f, -0,01724231f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_INT(&iLocal_0 + 128, "trainAttach", false);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ncrate17x0", "p_gen_crate17x", Vector(0,1042351f, 0,9678443f, 4,426863f), Vector(0.0f, 0.0f, 0.0f), true);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "crateBreak02x0", "p_gen_crateBreak02x", Vector(-1,28819f, 0,9809255f, -3,614353f), Vector(0.0f, 0.0f, 0.0f), true);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "barrelHalf01x0", "p_gen_barrelHalf01x", Vector(0,8878729f, 0,979241f, -2,881202f), Vector(0.0f, 0.0f, 0.0f), true);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "crateBreak01x0", "p_gen_crateBreak01x", Vector(-0,9227604f, 0,9911879f, 2,820202f), Vector(0.0f, 90.0f, 0.0f), true);
	Function_14(&iLocal_0, &uParam0);
	return 1;
}

void Function_14(bool bParam0, int iParam1) //Position: 0x8B0 / 2224
{
	var uVar0;
	
	if (IS_LAYOUTREF_VALID(&bParam0))
	{
		if (GET_OBJECT_TYPE(&bParam0) == 13)
		{
			uVar0 = ATTACH_OBJECTS(StackVal, StackVal, &bParam0, &iParam1, Function_15(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&uVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&bParam0));
			}
		}
	}
	return;
}

var Function_15() //Position: 0x8FB / 2299
{
	int iVar0;
	
	return &iVar0;
}

bool Function_16(struct<2>[] Param0) //Position: 0x904 / 2308
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_20();
	iVar1 = 0;
	if (!Function_8(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_19(&(Param0[iVar02]), 8);
		}
		else if (Function_18())
		{
			iVar1 = 1;
			Function_19(&(Param0[iVar02]), 8);
		}
		Function_19(&(Param0[iVar02]), 16);
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
				Function_19(&(Param0[iVar02]), 1);
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
							Function_19(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_19(&(Param0[iVar02]), 2);
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
							Function_19(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_19(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_19(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_19(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_19(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_19(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_19(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_19(&(Param0[iVar02]), 2);
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

void Function_17() //Position: 0xCC6 / 3270
{
	if (!Function_25(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_18() //Position: 0xD06 / 3334
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

void Function_19(struct<13> Param0) //Position: 0xD34 / 3380
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_20() //Position: 0xD47 / 3399
{
	if (!Function_25(128))
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

var Function_21(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xD89 / 3465
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_22(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_19(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_22(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xDC7 / 3527
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_8(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_19(&(Param0[iVar02]), 4);
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

void Function_23(int iParam0, int iParam1) //Position: 0xE96 / 3734
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

void Function_24(var uParam0, int iParam1) //Position: 0xEE0 / 3808
{
	iParam1 = &iParam1;
	uParam0 = 0;
	return;
}

bool Function_25(int iParam0) //Position: 0xEF1 / 3825
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

