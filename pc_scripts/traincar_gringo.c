//Decompiled with MagicRDR v1.0
//Function Count : 30
//Statics Count : 80
//Natives Count : 98
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
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
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
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

void Function_1(int iParam0, int iParam1) //Position: 0x6B / 107
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

void Function_2(int iParam0) //Position: 0xDC / 220
{
	if (IS_VOLUME_VALID(&iParam0 + 32))
	{
		DESTROY_VOLUME(&iParam0 + 32);
	}
	return;
}

void Function_3() //Position: 0xF7 / 247
{
	Function_4();
	return;
}

void Function_4() //Position: 0x100 / 256
{
	Function_5(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_5(int iParam0) //Position: 0x113 / 275
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

void Function_6(struct<2>[] Param0, int iParam1) //Position: 0x13B / 315
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

void Function_7(struct<13> Param0) //Position: 0x286 / 646
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_8(struct<13> Param0) //Position: 0x2A3 / 675
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x2C1 / 705
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

var Function_10(int iParam0, char* cParam1, bool bParam2, char* cParam3, float fParam4) //Position: 0x30F / 783
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	GET_OBJECT_POSITION(&cParam1, &Var2);
	iVar4 = 600;
	if (IS_OBJECT_VALID(&cParam1))
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
				if (Function_12(&iParam0, &cParam1))
				{
					DECOR_SET_INT(&cParam1, "mylayout", &iParam0 + 8);
					DECOR_SET_OBJECT(&cParam1, "myLayoutObj", &iParam0 + 8);
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
							*(&iParam0 + 24) = FIND_NAMED_POPULATION_SET(&cParam3);
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

void Function_11(int iParam0) //Position: 0x54A / 1354
{
	bool bVar0;
	float fVar1;
	
	if (Function_29(32768))
	{
		if (!IS_VOLUME_VALID(&iParam0 + 32))
		{
			*(&iParam0 + 32) = &iLocal_0 + 32;
		}
		if (IS_VOLUME_VALID(&iParam0 + 32))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(&iParam0 + 8);
			ITERATE_IN_VOLUME(&bVar0, &iParam0 + 32);
			ITERATE_ON_OBJECT_TYPE(&bVar0, 12);
			fVar1 = START_OBJECT_ITERATOR(&bVar0);
			while (IS_OBJECT_VALID(&fVar1))
			{
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&fVar1), 1);
				fVar1 = OBJECT_ITERATOR_NEXT(&bVar0);
			}
			DESTROY_ITERATOR(&bVar0);
		}
	}
	else
	{
		if (IS_VOLUME_VALID(&iParam0 + 32))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(&iParam0 + 8);
			ITERATE_IN_VOLUME(&bVar0, &iParam0 + 32);
			ITERATE_ON_OBJECT_TYPE(&bVar0, 12);
			fVar1 = START_OBJECT_ITERATOR(&bVar0);
			while (IS_OBJECT_VALID(&fVar1))
			{
				GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&fVar1), 0);
				fVar1 = OBJECT_ITERATOR_NEXT(&bVar0);
			}
			DESTROY_ITERATOR(&bVar0);
		}
		if (IS_VOLUME_VALID(&iParam0 + 32))
		{
			DESTROY_VOLUME(&iParam0 + 32);
		}
	}
	return;
}

bool Function_12(int iParam0, int iParam1) //Position: 0x640 / 1600
{
	if (Function_14(&iParam1))
	{
		*(&iParam0 + 8) = &iLocal_0;
		if (Function_29(32768))
		{
			*(&iParam0 + 32) = &iLocal_0 + 32;
			*(&iParam0 + 48) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_0, Function_13()));
		}
		return 1;
	}
	return 0;
}

var Function_13() //Position: 0x682 / 1666
{
	int iVar0;
	
	return &iVar0;
}

bool Function_14(var uParam0) //Position: 0x68B / 1675
{
	var uVar0;
	
	Function_27(3, 2);
	uVar0 = &uVar0;
	Function_25(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/jump_from_horse", 1, 0);
	if (!Function_20(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_13()));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "TrainCarPassenger1_pop", 2,802597E-45f, Vector(0.0f, 2,193675f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3,292302f, 2,472609f, 12,8515f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "vol_roof", 2,802597E-45f, Vector(0.0f, 4,296736f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3,743959f, 1,604275f, 16,92944f));
	*(&iLocal_0 + 48) = Vector(0.0f, 1,094733f, 8,054148f);
	*(&iLocal_0 + 48 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_16(&uParam0, &iLocal_0 + 48);
	*(&iLocal_0 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "flag_spawn01", Vector(0.0f, 1,094733f, 8,054148f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 80) = Vector(0.0f, 1,109271f, -8,013618f);
	*(&iLocal_0 + 80 + 12) = Vector(0.0f, 180.0f, 0.0f);
	Function_16(&uParam0, &iLocal_0 + 80);
	*(&iLocal_0 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "flag_spawn02", Vector(0.0f, 1,109271f, -8,013618f), Vector(0.0f, 180.0f, 0.0f));
	*(&iLocal_0 + 112) = Vector(0.0f, 1,146881f, 5,673518f);
	*(&iLocal_0 + 112 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_16(&uParam0, &iLocal_0 + 112);
	*(&iLocal_0 + 136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_hostileBack", Vector(0.0f, 1,146881f, 5,673518f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_hostileFront", Vector(0.0f, 1,147f, -6,473069f), Vector(0.0f, -180.0f, 0.0f));
	*(&iLocal_0 + 152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_victimFront", Vector(0.0f, 1,147f, -5,696525f), Vector(0.0f, -180.0f, 0.0f));
	*(&iLocal_0 + 160) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_victimBack", Vector(0.0f, 1,147f, 4,961267f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_playerStart", Vector(0.0f, 1,147f, -0,08173175f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_cameraBack", Vector(-0,5275578f, 2,140265f, 2,565834f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_cameraFront", Vector(0,6090299f, 2,140265f, -3,867013f), Vector(0.0f, -192,4327f, 0.0f));
	*(&iLocal_0 + 192) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_cameraOut", Vector(0,8811418f, 2,578951f, -9,839849f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_cameraBandits", Vector(-0,004480795f, 8,0631f, 20,47454f), Vector(0.0f, -168,2202f, 0.0f));
	*(&iLocal_0 + 208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_banditleft0", Vector(-4,208273f, 1,008175f, -2,417027f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_banditleft1", Vector(-2,959326f, 1,008175f, 1,598058f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 224) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_banditright0", Vector(3,054057f, 1,008175f, -3,638125f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_banditright1", Vector(2,731088f, 2,408042f, 13,7085f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_banditright2", Vector(3,538544f, 1,008175f, -10,98625f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_banditleft2", Vector(-4,208273f, 1,008175f, 10,56378f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 256) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_jumpfront", Vector(0.0f, 1,109271f, -9,150616f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 264) = Vector(0.0f, 1,109271f, 9,066972f);
	*(&iLocal_0 + 264 + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_16(&uParam0, &iLocal_0 + 264);
	*(&iLocal_0 + 288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_jumprear", Vector(0.0f, 1,109271f, 9,066972f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "jump_from_horse", "jump_from_horse", Vector(0.0f, 1,274038f, 9,054914f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&iLocal_0 + 296, "JUMPPOS", "REAR");
	*(&iLocal_0 + 304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "jump_from_horse1", "jump_from_horse", Vector(0.0f, 1,274038f, -9,140799f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&iLocal_0 + 304, "JUMPPOS", "FRONT");
	Function_15(&iLocal_0, &uParam0);
	return 1;
}

void Function_15(int iParam0, var uParam1) //Position: 0xC38 / 3128
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &uParam1, Function_13(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xC83 / 3203
{
	Function_17(&uParam0, 1, &iParam1, &iParam1 + 12);
	return;
}

void Function_17(var uParam0, bool bParam1, struct<2> Param2) //Position: 0xC98 / 3224
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_18(&Var0, &Param2))
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

bool Function_18(vector3 vParam0) //Position: 0xDC5 / 3525
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_19(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_19(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_19(vector3 vParam0) //Position: 0xE3B / 3643
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_20(struct<2>[] Param0) //Position: 0xE53 / 3667
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

void Function_21() //Position: 0x1215 / 4629
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

bool Function_22() //Position: 0x1255 / 4693
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

void Function_23(struct<13> Param0) //Position: 0x1283 / 4739
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_24() //Position: 0x1296 / 4758
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

var Function_25(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x12D8 / 4824
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

var Function_26(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1316 / 4886
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

void Function_27(int iParam0, int iParam1) //Position: 0x13E5 / 5093
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

void Function_28(var uParam0, int iParam1) //Position: 0x142F / 5167
{
	iParam1 = &iParam1;
	uParam0 = 0;
	return;
}

bool Function_29(int iParam0) //Position: 0x1440 / 5184
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

