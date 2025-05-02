//Decompiled with MagicRDR v1.0
//Function Count : 25
//Statics Count : 2
//Natives Count : 76
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	var uVar8;
	
	uScriptParam_0 = &uScriptParam_0;
	bVar0 = 1;
	while (IS_GRINGO_ACTIVE())
	{
		GRINGO_HAS_PENDING_MESSAGE();
		fVar3 = Function_24("nTimeStart", -1.0f, &uScriptParam_0);
		bVar4 = Function_24("TimeEnd", -1.0f, &uScriptParam_0);
		fVar5 = Function_24("ChanceToSpawn", 100.0f, &uScriptParam_0);
		fVar6 = (RAND_FLOAT_RANGE(0.0f, 10000.0f) / 100.0f);
		if (Function_23(2048))
		{
			if (fVar6 > fVar5)
			{
				if (Function_21())
				{
					if (fVar3 < -1.0f && bVar4 < -1.0f)
					{
						uVar7 = Function_20(fVar3);
						uVar8 = Function_20(bVar4);
						if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), &uVar7, &uVar8))
						{
							if (Function_5(&uScriptParam_0, &bVar0))
							{
								DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
							}
						}
					}
					else if (Function_5(&uScriptParam_0, &bVar0))
					{
						DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
					}
				}
				else
				{
					DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
				}
			}
			else
			{
				DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
			}
		}
		else
		{
			DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
		}
		GRINGO_WAIT(1000);
	}
	Function_1(&bVar0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x102 / 258
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (bParam0 - 1))
	{
		Function_2(&bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x12A / 298
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

void Function_3(struct<13> Param0) //Position: 0x275 / 629
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x292 / 658
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(var uParam0, struct<2>[] Param1) //Position: 0x2B0 / 688
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<2> Var5;
	struct<2> Var7;
	float fVar9;
	var uVar10;
	
	if (!Function_4(&(Param1[02]), 4))
	{
		bVar1 = RAND_INT_RANGE(false, 100);
		bVar1 = (bVar1 % Function_19(&uParam0));
		uVar2 = Function_18(bVar1, &uParam0);
		bVar0 = GET_ACTORENUM_FROM_STRING(&uVar2);
		Function_17(&Param1, bVar0, 2, 0);
	}
	else
	{
		uVar3 = &Param1[02];
		bVar0 = uVar3;
	}
	if (Function_16(bVar0))
	{
		uVar4 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var5);
		fVar9 = GET_OBJECT_HEADING(GRINGO_GET_MY_OBJECT_REF());
		Var7 = Vector(0.0f, fVar9, 0.0f);
		if (WOULD_ACTOR_BE_VISIBLE(bVar0, &Var5, 3212836864))
		{
			return 0;
		}
		if (!Function_11(&Param1))
		{
			return 0;
		}
		uVar10 = Function_6(StackVal, StackVal, GET_LAYOUT_FROM_OBJECT(&uVar4), Function_10(), bVar0, 976, Var5, Var7, 1, 976, 976, 976, 4);
		Function_1(&Param1);
		if (IS_ACTOR_VALID(&uVar10))
		{
			if (IS_ACTOR_VEHICLE(&uVar10))
			{
				return 1;
			}
			LOG_ERROR("Attempting to spawn something that is not a vehicle!");
		}
		else
		{
			LOG_ERROR("Failed to spawn a valid vehicle!");
		}
	}
	else
	{
		LOG_ERROR("SpawnVehicle in VehicleList is missing or invalid!");
	}
	return 0;
}

var Function_6(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x431 / 1073
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			uVar15 = "";
			if (Function_9(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_8(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_7(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (bVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, bVar18, 0);
			bVar18++;
		}
	}
	return &uVar0;
}

bool Function_7(int iParam0, bool[] bParam1) //Position: 0x684 / 1668
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_8(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x6B8 / 1720
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_9(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x6D4 / 1748
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

var Function_10() //Position: 0x700 / 1792
{
	int iVar0;
	
	return &iVar0;
}

bool Function_11(struct<2>[] Param0) //Position: 0x709 / 1801
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_15();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_14(&(Param0[iVar02]), 8);
		}
		else if (Function_13())
		{
			iVar1 = 1;
			Function_14(&(Param0[iVar02]), 8);
		}
		Function_14(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_4(&(Param0[02]), 8) || iVar1));
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
				Function_14(&(Param0[iVar02]), 1);
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
							Function_14(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_14(&(Param0[iVar02]), 2);
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
							Function_14(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_14(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_14(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_14(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_14(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_14(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_14(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_14(&(Param0[iVar02]), 2);
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
	Function_12();
	return 1;
}

void Function_12() //Position: 0xACB / 2763
{
	if (!Function_23(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_13() //Position: 0xB0B / 2827
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

void Function_14(struct<13> Param0) //Position: 0xB39 / 2873
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_15() //Position: 0xB4C / 2892
{
	if (!Function_23(128))
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

bool Function_16(int iParam0) //Position: 0xB8E / 2958
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_17(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0xBA5 / 2981
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_14(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_14(&(Param0[iVar02]), 8);
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

var Function_18(bool bParam0, var uParam1) //Position: 0xC81 / 3201
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("VehicleList", 0, &uParam1);
	iVar1 = GRINGO_GET_ATTRIBUTE_COUNT(&uVar0);
	if (iVar1 < 0)
	{
		return "NULL";
	}
	if (bParam0 > iVar1)
	{
		bParam0 = iVar1;
	}
	iVar2 = GRINGO_GET_ATTRIBUTE(&uVar0, bParam0);
	return GRINGO_GET_STRING_ATTR_BY_HANDLE(&iVar2, &bParam0);
}

int Function_19(var uParam0) //Position: 0xCD3 / 3283
{
	int iVar0;
	
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("VehicleList", 0, &uParam0);
	return GRINGO_GET_ATTRIBUTE_COUNT(&iVar0);
}

var Function_20(bool bParam0) //Position: 0xCF7 / 3319
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	
	bVar0 = FLOOR(bParam0);
	fVar1 = (bParam0 - TO_FLOAT(bVar0));
	bVar2 = FLOOR(FABS((fVar1 * 100.0f)));
	return MAKE_TIME_OF_DAY(bVar0, bVar2, false);
}

bool Function_21() //Position: 0xD26 / 3366
{
	struct<2> Var0;
	var uVar2;
	
	GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &Var0);
	return Function_22(StackVal, Var0, 1.0f, &uVar2, 1);
}

int Function_22(vector3 vParam0) //Position: 0xD40 / 3392
{
	struct<9> Var0;
	
	bVar4 = 1.0f;
	if (bParam4)
	{
		vParam0 = Vector(vParam0, StackVal, StackVal) + Vector(0,5f, 0,5f, 0,5f);
	}
	while (bVar4 >= 360.0f)
	{
		UNK_0x44986367(&vVar0, bVar4);
		VSCALE(&vVar0, bParam2);
		vVar0 = (vVar0.x + vParam0.x);
		vVar0.f_4 = (vVar0.y + vParam0.y);
		vVar0.f_8 = (vVar0.z + vParam0.z);
		if (FIND_INTERSECTION(&vParam0, &vVar0, &uParam3, &uVar2, 0, 4294967295, 4194304))
		{
			return 0;
		}
		vVar0.f_4 = (vVar0.y + bParam2);
		if (FIND_INTERSECTION(&vParam0, &vVar0, &uParam3, &uVar2, 0, 4294967295, 4194304))
		{
			return 0;
		}
		bVar4 = (bVar4 + 45.0f);
	}
	return 1;
}

bool Function_23(int iParam0) //Position: 0xDE3 / 3555
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_24(var uParam0, float fParam1, var uParam2) //Position: 0xDFF / 3583
{
	var uVar0;
	var uVar1;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("VehicleGenerator", 0, &uParam2);
	if (GET_GRINGO_FLOAT_ATTR(&uVar1, &uParam0, &uVar0))
	{
		return uVar1;
	}
	return fParam1;
}

