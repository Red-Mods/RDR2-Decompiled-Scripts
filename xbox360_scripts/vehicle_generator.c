//Decompiled with MagicRDR v1.0
//Function Count : 25
//Statics Count : 1
//Natives Count : 76
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	float fVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	
	bScriptParam_0 = bScriptParam_0;
	iVar0 = 1;
	while (IS_GRINGO_ACTIVE())
	{
		GRINGO_HAS_PENDING_MESSAGE();
		fVar4 = Function_24("nTimeStart", -1.0f, bScriptParam_0);
		bVar5 = Function_24("TimeEnd", -1.0f, bScriptParam_0);
		fVar6 = Function_24("ChanceToSpawn", 100.0f, bScriptParam_0);
		fVar7 = (RAND_FLOAT_RANGE(0.0f, 10000.0f) / 100.0f);
		if (Function_23(2048))
		{
			if (fVar7 > fVar6)
			{
				if (Function_21())
				{
					if (fVar4 < -1.0f && bVar5 < -1.0f)
					{
						bVar8 = Function_20(fVar4);
						bVar9 = Function_20(bVar5);
						if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), bVar8, bVar9))
						{
							if (Function_5(&bScriptParam_0, &iVar0))
							{
								DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
							}
						}
					}
					else if (Function_5(&bScriptParam_0, &iVar0))
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
	Function_1(&iVar0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xF9 / 249
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

void Function_2(var uParam0, int iParam1) //Position: 0x11F / 287
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

void Function_3(var uParam0, int iParam1) //Position: 0x24D / 589
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x267 / 615
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(bool bParam0, float fParam1) //Position: 0x284 / 644
{
	bool bVar0;
	bool bVar1;
	char* cVar2;
	var uVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	
	if (!Function_4(fParam1[03], 4))
	{
		bVar1 = RAND_INT_RANGE(false, 100);
		bVar1 = (bVar1 % Function_19(*bParam0));
		cVar2 = Function_18(bVar1, *bParam0);
		bVar0 = GET_ACTORENUM_FROM_STRING(cVar2);
		Function_17(fParam1, bVar0, 2, 0);
	}
	else
	{
		uVar3 = (*fParam1)[03];
		bVar0 = uVar3;
	}
	if (Function_16(bVar0))
	{
		bVar4 = GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
		GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar5);
		bVar11 = GET_OBJECT_HEADING(GRINGO_GET_MY_OBJECT_REF());
		vVar8 = { 0.0f, bVar11, 0.0f };
		if (WOULD_ACTOR_BE_VISIBLE(bVar0, &vVar5, 3212836864))
		{
			return 0;
		}
		if (!Function_11(fParam1))
		{
			return 0;
		}
		bVar12 = Function_6(StackVal, StackVal, StackVal, StackVal, GET_LAYOUT_FROM_OBJECT(bVar4), Function_10(), bVar0, 976, vVar5, vVar8, 1, 976, 976, 976, 4);
		Function_1(fParam1);
		if (IS_ACTOR_VALID(bVar12))
		{
			if (IS_ACTOR_VEHICLE(bVar12))
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

var Function_6(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x3F6 / 1014
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			bVar15 = "";
			if (Function_9(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_8(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_7(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (bVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x62A / 1578
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_8(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x65C / 1628
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_9(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x674 / 1652
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

var Function_10() //Position: 0x69B / 1691
{
	int iVar0;
	
	return iVar0;
}

bool Function_11(int iParam0) //Position: 0x6A3 / 1699
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_15();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_14(iParam0[iVar03], 8);
		}
		else if (Function_13())
		{
			iVar1 = 1;
			Function_14(iParam0[iVar03], 8);
		}
		Function_14(iParam0[iVar03], 16);
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
				Function_14(iParam0[iVar03], 1);
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
							Function_14(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_14(iParam0[iVar03], 2);
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
							Function_14(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_14(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_14(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_14(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_14(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_14(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_14(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_14(iParam0[iVar03], 2);
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

void Function_12() //Position: 0xA1E / 2590
{
	if (!Function_23(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_13() //Position: 0xA5E / 2654
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

void Function_14(var uParam0, int iParam1) //Position: 0xA89 / 2697
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_15() //Position: 0xA9A / 2714
{
	if (!Function_23(128))
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

bool Function_16(int iParam0) //Position: 0xADC / 2780
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

var Function_17(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xAF3 / 2803
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
			Function_14(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_14(uParam0[iVar03], 8);
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

var Function_18(bool bParam0, bool bParam1) //Position: 0xBC3 / 3011
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("VehicleList", 0, bParam1);
	iVar1 = GRINGO_GET_ATTRIBUTE_COUNT(bVar0);
	if (iVar1 < 0)
	{
		return "NULL";
	}
	if (bParam0 > iVar1)
	{
		bParam0 = iVar1;
	}
	bVar2 = GRINGO_GET_ATTRIBUTE(bVar0, bParam0);
	return GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar2, &bParam0);
}

int Function_19(bool bParam0) //Position: 0xC0F / 3087
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("VehicleList", 0, bParam0);
	return GRINGO_GET_ATTRIBUTE_COUNT(bVar0);
}

var Function_20(bool bParam0) //Position: 0xC30 / 3120
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	
	bVar0 = FLOOR(bParam0);
	fVar1 = (bParam0 - TO_FLOAT(bVar0));
	bVar2 = FLOOR(FABS((fVar1 * 100.0f)));
	return MAKE_TIME_OF_DAY(bVar0, bVar2, false);
}

bool Function_21() //Position: 0xC5F / 3167
{
	vector3 vVar0;
	var uVar3;
	
	GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar0);
	return Function_22(StackVal, StackVal, vVar0, 1.0f, &uVar3, 1);
}

bool Function_22(vector3 vParam0) //Position: 0xC79 / 3193
{
	struct<9> Var0;
	
	bVar6 = 1.0f;
	if (bParam5)
	{
		vParam0 = { StackVal, StackVal, Vector(vParam0, StackVal, StackVal) + Vector(0,5f, 0,5f, 0,5f) };
	}
	while (bVar6 >= 360.0f)
	{
		UNK_0x44986367(&vVar0, bVar6);
		VSCALE(&vVar0, bParam3);
		vVar0 = (vVar0.x + vParam0.x);
		vVar0.f_4 = (vVar0.y + vParam0.y);
		vVar0.f_8 = (vVar0.z + vParam0.z);
		if (FIND_INTERSECTION(&vParam0, &vVar0, uParam4, &uVar3, 0, 4294967295, 4194304))
		{
			return 0;
		}
		vVar0.f_4 = (vVar0.y + bParam3);
		if (FIND_INTERSECTION(&vParam0, &vVar0, uParam4, &uVar3, 0, 4294967295, 4194304))
		{
			return 0;
		}
		bVar6 = (bVar6 + 45.0f);
	}
	return 1;
}

bool Function_23(int iParam0) //Position: 0xD1B / 3355
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_24(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD37 / 3383
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("VehicleGenerator", 0, bParam2);
	if (GET_GRINGO_FLOAT_ATTR(&uVar1, bParam0, bVar0))
	{
		return uVar1;
	}
	return bParam1;
}

