//Decompiled with MagicRDR v1.0
//Function Count : 15
//Statics Count : 3
//Natives Count : 52
//Parameters Count : 1

#region Local Var
	struct<5> Local_0 = { 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	var uVar1;
	
	uScriptParam_0 = uScriptParam_0;
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
		Function_5(iParam0 + 24);
	}
	Function_3();
	RELEASE_LAYOUT_REF(StackVal);
	Function_2(iParam0);
	return;
}

void Function_2(var uParam0) //Position: 0xCA / 202
{
	*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0 };
	return;
}

void Function_3() //Position: 0xD8 / 216
{
	Function_4();
	return;
}

void Function_4() //Position: 0xE1 / 225
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_5(int iParam0) //Position: 0xEC / 236
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

var Function_6(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4) //Position: 0x133 / 307
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
				if (Function_8(uParam0, bParam1))
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
				if (Function_14(32768))
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
		Function_7(uParam0);
	}
	return iVar5;
}

void Function_7(int iParam0) //Position: 0x32A / 810
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

bool Function_8(var uParam0, int iParam1) //Position: 0x338 / 824
{
	if (Function_9(iParam1))
	{
		uParam0->f_4 = Local_0;
		return 1;
	}
	return 0;
}

bool Function_9(int iParam0) //Position: 0x34F / 847
{
	var uVar0;
	
	Function_12(3, 2);
	uVar0 = uVar0;
	Local_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_11()));
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "TrainCarWood_pop", 2, 0.0f, 2.208645f, -1.638802f, 0.0f, 0.0f, 0.0f, 1.86887f, 2.213032f, 2.110524f);
	Function_10(Local_0, iParam0);
	return 1;
}

void Function_10(bool bParam0, bool bParam1) //Position: 0x3AB / 939
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_11(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

var Function_11() //Position: 0x3ED / 1005
{
	int iVar0;
	
	return iVar0;
}

void Function_12(int iParam0, int iParam1) //Position: 0x3F5 / 1013
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

void Function_13(var uParam0, int iParam1) //Position: 0x43E / 1086
{
	iParam1 = iParam1;
	*uParam0 = 0;
	return;
}

bool Function_14(int iParam0) //Position: 0x44C / 1100
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

