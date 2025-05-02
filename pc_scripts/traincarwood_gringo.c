//Decompiled with MagicRDR v1.0
//Function Count : 15
//Statics Count : 6
//Natives Count : 52
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	
	uScriptParam_0 = &uScriptParam_0;
	if (Function_14(16384) && Function_14(65536))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_13(&uVar1, 1);
	}
	while (IS_GRINGO_ACTIVE())
	{
		if (bVar0)
		{
			Function_6(&uVar1, GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()), RAND_INT_RANGE(2, 6), "ped_traveller", 0x43160000);
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
		Function_5(&iParam0 + 48);
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
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_5(int iParam0) //Position: 0x105 / 261
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

var Function_6(int iParam0, var uParam1, bool bParam2, var uParam3, float fParam4) //Position: 0x153 / 339
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
				if (Function_8(&iParam0, &uParam1))
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
				if (Function_14(32768))
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
		Function_7(&iParam0);
	}
	return iVar4;
}

void Function_7(struct<7> Param0) //Position: 0x38E / 910
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	return;
}

bool Function_8(int iParam0, int iParam1) //Position: 0x39E / 926
{
	if (Function_9(&iParam1))
	{
		*(&iParam0 + 8) = &iLocal_0;
		return 1;
	}
	return 0;
}

bool Function_9(var uParam0) //Position: 0x3B9 / 953
{
	var uVar0;
	
	Function_12(3, 2);
	uVar0 = &uVar0;
	iLocal_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_11()));
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "TrainCarWood_pop", 2,802597E-45f, Vector(0.0f, 2,208645f, -1,638802f), Vector(0.0f, 0.0f, 0.0f), Vector(1,86887f, 2,213032f, 2,110524f));
	Function_10(&iLocal_0, &uParam0);
	return 1;
}

void Function_10(bool bParam0, int iParam1) //Position: 0x41F / 1055
{
	var uVar0;
	
	if (IS_LAYOUTREF_VALID(&bParam0))
	{
		if (GET_OBJECT_TYPE(&bParam0) == 13)
		{
			uVar0 = ATTACH_OBJECTS(StackVal, StackVal, &bParam0, &iParam1, Function_11(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&uVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&bParam0));
			}
		}
	}
	return;
}

var Function_11() //Position: 0x46A / 1130
{
	int iVar0;
	
	return &iVar0;
}

void Function_12(int iParam0, int iParam1) //Position: 0x473 / 1139
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

void Function_13(var uParam0, int iParam1) //Position: 0x4BD / 1213
{
	iParam1 = &iParam1;
	uParam0 = 0;
	return;
}

bool Function_14(int iParam0) //Position: 0x4CE / 1230
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

