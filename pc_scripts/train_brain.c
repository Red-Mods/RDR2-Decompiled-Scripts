//Decompiled with MagicRDR v1.0
//Function Count : 77
//Statics Count : 14
//Natives Count : 149
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	float fLocal_9 = 0.0f;
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	float fVar1;
	
	iLocal_0 = 1;
	iLocal_1 = 0;
	iLocal_2 = 1;
	iLocal_3 = 1;
	iLocal_4 = 0;
	iLocal_5 = 0;
	fLocal_9 = 0.0f;
	iLocal_10 = 0;
	bLocal_11 = false;
	*(&Global_53580 + 1944) = &uScriptParam_0;
	uVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if ((STRINGS_ARE_EQUAL(&uVar0, "train_brain_north") || STRINGS_ARE_EQUAL(&uVar0, "train_brain_mexico")) || STRINGS_ARE_EQUAL(&uVar0, "train_brain_frontier"))
	{
		TERMINATE_THIS_SCRIPT();
	}
	if (!IS_GRINGO_COMPONENT_VALID(&uScriptParam_0))
	{
		LOG_ERROR("AmbTrain: Attempting to attach a gringo brain that has no valid gringo base.");
		TERMINATE_THIS_SCRIPT();
	}
	fVar1 = 0.0f;
	while ((4294967295 != Global_53579 || 4294967295 != Global_53578) && !IS_EXITFLAG_SET())
	{
		Function_76();
	}
	Function_75(98304);
	iLocal_8 = 0;
	Function_74(&Global_53580 + 20);
	Function_74(&Global_53580 + 980);
	Global_53580 = 0;
	while ((IS_GRINGO_ACTIVE() && !IS_EXITFLAG_SET()) && !Global_53579 != 4294967295)
	{
		GRINGO_HAS_PENDING_MESSAGE();
		if ((!HUD_IS_FADED() || !(&Global_53580 + 20)->f_940) || (&Global_53580 + 20)->f_424)
		{
			Function_18(&Global_53580 + 20);
		}
		if ((!HUD_IS_FADED() || !(&Global_53580 + 980)->f_940) || (&Global_53580 + 980)->f_424)
		{
			Function_18(&Global_53580 + 980);
		}
		Function_76();
	}
	if (IS_VOLUME_VALID(&iLocal_6))
	{
		DESTROY_VOLUME(&iLocal_6);
	}
	if (IS_BLIP_VALID(&Global_53580 + 20 + 920))
	{
		REMOVE_BLIP(&Global_53580 + 20 + 920);
	}
	if (IS_BLIP_VALID(&Global_53580 + 980 + 920))
	{
		REMOVE_BLIP(&Global_53580 + 980 + 920);
	}
	Function_5(&Global_53580 + 20);
	Function_5(&Global_53580 + 980);
	Function_1(&Global_53580 + 20 + 152);
	Function_1(&Global_53580 + 980 + 152);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1FB / 507
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x223 / 547
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

void Function_3(struct<13> Param0) //Position: 0x36E / 878
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x38B / 907
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(struct<937> Param0) //Position: 0x3A9 / 937
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= 14)
	{
		if (IS_ACTOR_VALID(&Param0 + 456[bVar03] + 8))
		{
			TASK_CLEAR(&Param0 + 456[bVar03] + 8);
			if (4294967295 != Function_15(Param0, &Param0 + 456[bVar03] + 8))
			{
				RELEASE_ACTOR(&Param0 + 456[bVar03] + 8);
			}
			else
			{
				RELEASE_ACTOR_AS_AMBIENT(&Param0 + 456[bVar03] + 8);
			}
		}
		Function_14(&Param0, bVar0, 1);
		bVar0++;
	}
	if (IS_ACTOR_VALID(&Param0 + 824 + 8))
	{
		TASK_CLEAR(&Param0 + 824 + 8);
		if (4294967295 != Function_15(Param0, &Param0 + 824 + 8))
		{
			RELEASE_ACTOR(&Param0 + 824 + 8);
		}
		else
		{
			RELEASE_ACTOR_AS_AMBIENT(&Param0 + 824 + 8);
		}
	}
	Function_14(&Param0, 4294967295, 1);
	if (Param0 != 4294967295)
	{
		if (TRAIN_GET_NUM_CARS(Param0) >= 0)
		{
			Function_11(Param0);
		}
	}
	Param0.f_452 = 0;
	Param0.f_124 = 0;
	(&Param0 + 928) = "";
	if ((Param0 == 4294967295 && ((Param0 != Global_53578 && Function_7(41, 0)) || Param0 != Global_53579)) && !Param0.f_424)
	{
		TRAIN_SET_MAX_DECEL(Param0, -0,75f);
		TRAIN_SET_TARGET_SPEED(Param0, 10.0f);
		TRAIN_SET_PARTICLE_EFFECTS_ENABLED(Param0, 4294967295, 1);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 896))
	{
		RELEASE_LAYOUT_REF(&Param0 + 896);
	}
	Param0.f_128 = 0;
	Function_6(&Param0 + 108);
	Param0.f_936 = 0;
	return;
}

void Function_6(vector3 vParam0) //Position: 0x526 / 1318
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_7(int iParam0, bool bParam1) //Position: 0x53D / 1341
{
	int iVar0;
	
	iVar0 = Function_9(iParam0);
	if (!Function_8(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_8(int iParam0) //Position: 0x57B / 1403
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_9(int iParam0) //Position: 0x592 / 1426
{
	if (!Function_10(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_10(int iParam0) //Position: 0x5AC / 1452
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_11(bool bParam0) //Position: 0x5C2 / 1474
{
	var uVar0;
	var uVar1;
	var uVar2;
	char* cVar3[32];
	
	if (!TRAIN_GET_NUM_CARS(bParam0) < 0)
	{
		LOG_ERROR("Trying to create engineer and train cars don't exist");
		return "";
	}
	uVar1 = TRAIN_GET_CAR(bParam0, false);
	iVar4 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(&uVar1, "myLayoutObj"));
	if (IS_LAYOUTREF_VALID(&iVar4))
	{
		uVar2 = CREATE_OBJECT_ITERATOR(&iVar4);
		ITERATE_ON_OBJECT_TYPE(&uVar2, 12);
		cVar3 = START_OBJECT_ITERATOR(&uVar2);
		while (IS_OBJECT_VALID(&cVar3))
		{
			uVar6 = GET_OBJECT_NAME(&cVar3);
			if (STRING_CONTAINS_STRING(&uVar6, "train_engineer"))
			{
				uVar0 = GET_GRINGO_FROM_OBJECT(&cVar3);
			}
			cVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
		if (IS_ITERATOR_VALID(&uVar2))
		{
			DESTROY_ITERATOR(&uVar2);
		}
		if (!IS_GRINGO_VALID(&uVar0))
		{
			return "";
		}
		strcpy(&Var7, "AMB_ENG", 32);
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(&Var7) };
		iVar5 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iVar4, &Var7, 201, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		SET_ACTOR_FACTION(&iVar5, 21);
		TASK_STAND_STILL(&iVar5, -1.0f, 0, 0);
		TASK_PRIORITY_SET(&iVar5, true);
		SNAP_ACTOR_TO_GRINGO(&iVar5, GET_OBJECT_FROM_GRINGO(&uVar0), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&iVar5, &uVar0, "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET(&iVar5, true);
	}
	return &iVar5;
}

struct<32> Function_12(char* cParam0) //Position: 0x733 / 1843
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_13(char* cParam0) //Position: 0x79F / 1951
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_14(struct<825> Param0) //Position: 0x7C1 / 1985
{
	if (bParam1 == 4294967295)
	{
		if (!StackVal != 4294967295)
		{
			STREAMING_EVICT_ACTOR(StackVal, 4294967295);
			Param0.f_824 = 0;
		}
		if (iParam2 && IS_ACTOR_VALID(&Param0 + 824 + 8))
		{
			DESTROY_ACTOR(&Param0 + 824 + 8);
		}
		(&Param0 + 824)->f_4 = 4294967295;
		(&Param0 + 824 + 8) = "";
		(&Param0 + 824)->f_16 = 4294967295;
	}
	else
	{
		if (!StackVal != 4294967295)
		{
			STREAMING_EVICT_ACTOR(StackVal, 4294967295);
			(*&Param0 + 456)[bParam13] = 0;
		}
		if (iParam2 && IS_ACTOR_VALID(&Param0 + 456[bParam13] + 8))
		{
			DESTROY_ACTOR(&Param0 + 456[bParam13] + 8);
		}
		(&Param0 + 456[bParam13])->f_4 = 4294967295;
		(&Param0 + 456[bParam13] + 8) = "";
		(&Param0 + 456[bParam13])->f_16 = 4294967295;
	}
	return;
}

int Function_15(bool bParam0, int iParam1) //Position: 0x8AA / 2218
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	uVar2 = Function_16(bParam0);
	if (IS_ACTOR_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= 14)
		{
			iVar1 = GET_ACTOR_IN_VEHICLE_SEAT(&uVar2, bVar0);
			if (&iParam1 == &iVar1)
			{
				return bVar0;
			}
			bVar0++;
		}
	}
	return 4294967295;
}

int Function_16(bool bParam0) //Position: 0x8EF / 2287
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0 == 4294967295)
	{
		return "";
	}
	bVar0 = true;
	iVar1 = TRAIN_GET_NUM_CARS(bParam0);
	if (iVar1 > 1)
	{
		bVar0 = true;
		while (bVar0 < (iVar1 - 1))
		{
			iVar2 = TRAIN_GET_CAR(bParam0, bVar0);
			if (IS_OBJECT_VALID(&iVar2))
			{
				if (Function_17(&iVar2) != 1165 || Function_17(&iVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bParam0, bVar0));
				}
			}
			bVar0++;
		}
	}
	return "";
}

int Function_17(int iParam0) //Position: 0x95B / 2395
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

void Function_18(struct<941> Param0) //Position: 0x978 / 2424
{
	var uVar0;
	
	Param0.f_940 = 1;
	if (Param0.f_424)
	{
		if (!Function_73(Param0) != 4)
		{
			Function_72(Param0, 3);
		}
	}
	else if (Function_73(Param0) == 4)
	{
		Function_72(Param0, 5);
	}
	Function_69(&Param0);
	Function_52(&Param0);
	if (!Function_50(Param0))
	{
		if (TRAIN_GET_LOD_LEVEL(Param0) != 1 && TRAIN_GET_NUM_CARS(Param0) < 0)
		{
			Param0.f_880 = 0;
			if (!IS_ACTOR_VALID(&Param0 + 928))
			{
				if (!Param0.f_124 && IS_GRINGO_VALID(Function_49(Param0)))
				{
					uVar0 = Function_48(Param0);
					if (IS_ACTOR_VALID(&uVar0))
					{
						(&Param0 + 928) = &uVar0;
					}
				}
			}
		}
		else
		{
			Param0.f_880 = 5000;
		}
	}
	Function_20(&Param0);
	Function_19(&Param0, &iLocal_6);
	if (Param0.f_936)
	{
		Function_5(&Param0);
	}
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0xA56 / 2646
{
	if (Global_53580 == 0)
	{
		return;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return;
	}
	if ((Global_53579 != iParam0 && Global_53580 != 2) || (Global_53578 != iParam0 && Global_53580 != 1))
	{
		return;
	}
	if (IS_POINT_IN_VOLUME(*(&iParam0 + 4), &iParam1))
	{
		Global_53580 = 0;
		DESTROY_VOLUME(&iParam1);
	}
	return;
}

int Function_20(struct<881> Param0) //Position: 0xAAD / 2733
{
	int iVar0;
	
	Function_46(&Param0);
	TRAIN_GET_POSITION(Param0, &Param0 + 4);
	iVar0 = Function_73(Param0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_42(&Param0);
			break;
		
		case 0x00000001:
			Function_30(&Param0);
			break;
		
		case 0x00000002:
			Function_27(&Param0);
			break;
		
		case 0x00000003:
			Function_26(&Param0);
			break;
		
		case 0x00000004:
			Param0.f_880 = 0;
			break;
		
		case 0x00000005:
			Function_21(&Param0);
			break;
	}
	if (IS_BLIP_VALID(&Param0 + 920))
	{
		SET_BLIP_POS(&Param0 + 920, &Param0 + 4);
	}
	return 1;
}

void Function_21(struct<17> Param0) //Position: 0xB4D / 2893
{
	if (Param0 != Global_53578 && !Function_7(41, 0))
	{
		return;
	}
	Param0.f_16 = Function_25(&Param0);
	Function_22(&Param0);
	return;
}

void Function_22(struct<849> Param0) //Position: 0xB78 / 2936
{
	Param0.f_16++;
	if ((*&Param0 + 20)[Param0.f_16] == 4294967295)
	{
		Param0.f_16 = 0;
	}
	if (StackVal)
	{
		Function_23((*&Param0 + 20)[Param0.f_16], 0, &Param0 + 96);
	}
	else
	{
		Function_23((*&Param0 + 20)[Param0.f_16], 1, &Param0 + 96);
	}
	TRAIN_SET_TARGET_POS(Param0, &Param0 + 96);
	TRAIN_SET_TARGET_SPEED(Param0, 10.0f);
	Function_72(Param0, 2);
	TRAIN_PLAY_WHISTLE_SEQUENCE(Param0, 1);
	Param0.f_848 = 0;
	return;
}

void Function_23(bool bParam0, int iParam1, var uParam2) //Position: 0xC0D / 3085
{
	var uVar0;
	var uVar1;
	
	if (!IS_GRINGO_COMPONENT_VALID(&Global_53580 + 1944))
	{
		LOG_ERROR("gtAmbientTrainData.TrainBrainGringo is not valid. Train_Brain.sc probably did not execute.");
		return;
	}
	if ((bParam0 != 9 || bParam0 != 10) && (iParam1 == 0 && iParam1 == 1))
	{
		LOG_ERROR("Called TRNPRIVATE_GetStationVector() to get a board position with a junction as the station.");
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_NorthStopPos", 4, &Global_53580 + 1944);
			break;
		
		case 0x00000002:
			uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_NorthBoardingPos", 4, &Global_53580 + 1944);
			break;
		
		case 0x00000001:
			uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_SouthStopPos", 4, &Global_53580 + 1944);
			break;
		
		case 0x00000003:
			uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_SouthBoardingPos", 4, &Global_53580 + 1944);
			break;
		
		case 0x00000004:
			uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_PassengerSpawnPos1", 4, &Global_53580 + 1944);
			break;
		
		case 0x00000005:
			uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_PassengerSpawnPos2", 4, &Global_53580 + 1944);
			break;
		
		case 0x00000006:
			uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_PassengerSpawnPos3", 4, &Global_53580 + 1944);
			break;
	}
	uVar1 = GRINGO_GET_ATTRIBUTE(&uVar0, bParam0);
	if (!GRINGO_GET_VECTOR_ATTR_BY_HANDLE(&uVar1, &uParam2))
	{
		Function_24();
		uParam2 = Function_24();
	}
	return;
}

struct<8> Function_24() //Position: 0xE7F / 3711
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

var Function_25(int iParam0) //Position: 0xE89 / 3721
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 <= 8)
	{
		if (!4294967295 != (*&iParam0 + 20)[iVar2])
		{
			if (StackVal)
			{
				Function_23((*&iParam0 + 20)[iVar2], 0, &Var0);
			}
			else
			{
				Function_23((*&iParam0 + 20)[iVar2], 1, &Var0);
			}
			if (iVar2 == 0)
			{
				fVar4 = VDIST2(*(&iParam0 + 4), Var0);
			}
			else
			{
				fVar5 = VDIST2(*(&iParam0 + 4), Var0);
				if (fVar4 < fVar5)
				{
					fVar4 = fVar5;
					iVar3 = iVar2;
				}
			}
		}
		else
		{
			iVar2 = 8;
		}
		iVar2++;
	}
	return iVar3;
}

void Function_26(struct<881> Param0) //Position: 0xF28 / 3880
{
	if (Global_53580 != 0)
	{
		if ((Global_53579 != Param0 && Global_53580 != 1) || (Global_53578 != Param0 && Global_53580 != 2))
		{
			Global_53580 = 0;
		}
	}
	TRAIN_SET_TARGET_SPEED(Param0, 0.0f);
	Function_6(&Param0 + 108);
	Function_72(Param0, 4);
	Param0.f_880 = 0;
	return;
}

void Function_27(struct<957> Param0) //Position: 0xF78 / 3960
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = VDIST(*(&Param0 + 4), *(&Param0 + 96));
	if (TRAIN_GET_LOD_LEVEL(Param0) != 1 && TRAIN_GET_NUM_CARS(Param0) < 0)
	{
		if ((!Param0.f_124 && TRAIN_GET_VELOCITY(Param0) != 0.0f) && bVar1 >= 5.0f)
		{
			bVar0 = true;
		}
		if (bVar1 > 100.0f)
		{
			Function_29(&Param0);
		}
	}
	else if ((!Param0.f_124 && TRAIN_GET_VELOCITY(Param0) != 0.0f) && bVar1 >= (5.0f * 4.0f))
	{
		bVar0 = true;
		Function_28(&Param0, (*&Param0 + 20)[Param0.f_16]);
	}
	if (bVar0)
	{
		if (0 == Global_53580)
		{
			if ((*&Param0 + 20)[Param0.f_16] == 9)
			{
				Global_53580 = 1;
				iLocal_6 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_43578, "TrainMutexVolume_main", 0f, Vector(-1080,57f, 103,57f, 2102,64f), Vector(0.0f, 0.0f, 0.0f), Vector(75.0f, 75.0f, 75.0f));
				Function_22(&Param0);
				return;
			}
			if ((*&Param0 + 20)[Param0.f_16] == 10)
			{
				Global_53580 = 2;
				iLocal_6 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_43578, "TrainMutexVolume_north", 0f, Vector(-146,92f, 84,63f, 2527,99f), Vector(0.0f, 0.0f, 0.0f), Vector(75.0f, 75.0f, 75.0f));
				Function_22(&Param0);
				return;
			}
		}
		Function_72(Param0, 1);
	}
	if (Param0.f_956)
	{
		SET_DEBUG_DRAW(1);
	}
	return;
}

int Function_28(struct<17> Param0) //Position: 0x10F4 / 4340
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 7)
	{
		if ((*&Param0 + 20)[iVar4] == 4294967295)
		{
			return 0;
		}
		if ((*&Param0 + 20)[iVar4] == iParam1)
		{
			if (StackVal)
			{
				Function_23((*&Param0 + 20)[iVar4], 0, &uVar2);
			}
			else
			{
				Function_23((*&Param0 + 20)[iVar4], 1, &uVar2);
			}
			Param0.f_16 = iVar4;
			iVar4 = 7;
		}
		iVar4++;
	}
	if (StackVal)
	{
		UNK_0x44986367(&uVar0, 0.0f);
	}
	else
	{
		UNK_0x44986367(&uVar0, 180.0f);
	}
	TRAIN_SET_POSITION_DIRECTION(Param0, &uVar2, &uVar0);
	Function_72(Param0, 1);
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(Param0, 4294967295, 0);
	TRAIN_SET_TARGET_SPEED(Param0, 0.0f);
	return 1;
}

void Function_29(struct<849> Param0) //Position: 0x11B1 / 4529
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&Param0 + 824 + 8) || Param0.f_848)
	{
		return;
	}
	switch ((*&Param0 + 20)[Param0.f_16])
	{
		case 0xFFFFFFFF:
			LOG_ERROR("The current stop index station is TRNSTATION_INVALID when trying to TRNPRIVATE_ConductorShoutDestination");
			return;
		
		case 0x00000000:
			bVar0 = 326;
			break;
		
		case 0x00000001:
			bVar0 = 321;
			break;
		
		case 0x00000002:
			bVar0 = 322;
			break;
		
		case 0x00000006:
			bVar0 = 328;
			break;
		
		case 0x00000007:
			bVar0 = 329;
			break;
		
		case 0x00000008:
			bVar0 = 327;
			break;
		
		case 0x00000003:
			bVar0 = 323;
			break;
		
		case 0x00000004:
			bVar0 = 324;
			break;
		
		case 0x00000005:
			bVar0 = 325;
			break;
		
		case 0x00000009:
		case 0x0000000A:
			return;
	}
	SAY_SINGLE_LINE_CONTEXT(&Param0 + 824 + 8, bVar0, &Global_54076, 1, 0, 3, 4294967295, 4294967295, 0, 1);
	PLAY_SOUND_FROM_OBJECT(TRAIN_GET_CAR(Param0, false), "TRAIN_BELL_MASTER");
	TRAIN_PLAY_WHISTLE_SEQUENCE(Param0, 3);
	Param0.f_848 = 1;
	return;
}

void Function_30(struct<853> Param0) //Position: 0x1328 / 4904
{
	var uVar0;
	var uVar2;
	
	if (TRAIN_GET_VELOCITY(Param0) == 0.0f)
	{
		TRAIN_SET_TARGET_SPEED(Param0, 0.0f);
		if (StackVal)
		{
			Function_23((*&Param0 + 20)[Param0.f_16], 0, &uVar2);
			UNK_0x44986367(&uVar0, 0.0f);
		}
		else
		{
			Function_23((*&Param0 + 20)[Param0.f_16], 1, &uVar2);
			UNK_0x44986367(&uVar0, 180.0f);
		}
		TRAIN_SET_POSITION_DIRECTION(Param0, &uVar2, &uVar0);
	}
	if (Param0 == Global_53578)
	{
		if (!Function_7(41, 0))
		{
			return;
		}
		Param0.f_820 = 1;
	}
	if (Global_53580 != 0)
	{
		if (((Param0 != Global_53579 && (*&Param0 + 20)[Param0.f_16] != 9) && Global_53580 != 2) || ((Param0 != Global_53578 && (*&Param0 + 20)[Param0.f_16] != 10) && Global_53580 != 1))
		{
			return;
		}
	}
	if ((*&Param0 + 20)[Param0.f_16] != 5 && ((Function_7(26, 0) && !Function_7(29, 0)) || (((Function_7(29, 0) && Global_53579 == 0) && Global_53578 == 0) && TRAIN_IS_VALID(0))))
	{
		iLocal_8 = 1;
		return;
	}
	if ((*&Param0 + 20)[Param0.f_16] != 4 && (((Function_7(37, 0) && Global_53579 == 0) && Global_53578 == 0) && TRAIN_IS_VALID(0)))
	{
		iLocal_8 = 1;
		return;
	}
	iLocal_8 = 0;
	if ((7 != Param0.f_452 || 0 != Param0.f_452) || 2 != Param0.f_452)
	{
		if (!Function_41(&Param0 + 108))
		{
			Function_40(&Param0 + 108);
			Function_36(&Param0 + 108);
			if (TRAIN_GET_LOD_LEVEL(Param0) != 1 && TRAIN_GET_NUM_CARS(Param0) < 0)
			{
				PLAY_SOUND_FROM_OBJECT(TRAIN_GET_CAR(Param0, false), "TRAIN_BELL_ALL_A_BOARD_MASTER");
			}
			if (IS_ACTOR_VALID(&Param0 + 824 + 8))
			{
				SAY_SINGLE_LINE_CONTEXT(&Param0 + 824 + 8, 319, &Global_54076, 0, 0, 3, 4294967295, 4294967295, 0, 1);
			}
		}
		if (!Param0.f_852 && Function_33(&Param0 + 108) < 16.0f)
		{
			Param0.f_852 = 1;
			if (TRAIN_GET_LOD_LEVEL(Param0) != 1 && TRAIN_GET_NUM_CARS(Param0) < 0)
			{
				PLAY_SOUND_FROM_OBJECT(TRAIN_GET_CAR(Param0, false), "TRAIN_BELL_DEPART_MASTER");
			}
		}
		if (Function_31(&Param0 + 108, 18.0f))
		{
			Param0.f_852 = 0;
			Function_6(&Param0 + 108);
			Function_22(&Param0);
		}
	}
	return;
}

bool Function_31(int iParam0, int iParam1) //Position: 0x158B / 5515
{
	if (Function_32(&iParam0, iParam1))
	{
		Function_6(&iParam0);
		return 1;
	}
	return 0;
}

bool Function_32(int iParam0, float fParam1) //Position: 0x15A5 / 5541
{
	if (Function_41(&iParam0))
	{
		if (Function_33(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_33(vector3 vParam0) //Position: 0x15C3 / 5571
{
	if (Function_41(&vParam0))
	{
		if (Function_34(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_34(int iParam0) //Position: 0x1690 / 5776
{
	return Function_35(iParam0, 2);
}

bool Function_35(var uParam0, int iParam1) //Position: 0x169E / 5790
{
	return (uParam0 && iParam1) == 0;
}

void Function_36(int iParam0) //Position: 0x16AB / 5803
{
	if (!Function_41(&iParam0))
	{
		Function_37(&iParam0, 0.0f);
	}
	return;
}

void Function_37(vector3 vParam0) //Position: 0x16C2 / 5826
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_39(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x16E7 / 5863
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_39(var uParam0, int iParam1) //Position: 0x16FD / 5885
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_40(int iParam0) //Position: 0x170E / 5902
{
	Function_37(&iParam0, 0.0f);
	return;
}

bool Function_41(int iParam0) //Position: 0x171B / 5915
{
	return Function_35(iParam0, 1);
}

void Function_42(int iParam0) //Position: 0x1729 / 5929
{
	Function_44(&iParam0);
	Function_43(&iParam0);
	Function_40(&iParam0 + 108);
	Global_53580 = 0;
	return;
}

void Function_43(struct<17> Param0) //Position: 0x1747 / 5959
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	GET_POSITION(&Global_54076, &Var0);
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 7)
	{
		if ((*&Param0 + 20)[iVar4] == 4294967295)
		{
			LOG_ERROR("Could not find an appropriate station to warp train to");
			Param0.f_16 = 0;
			iVar4 = 7;
		}
		else if (!(*&Param0 + 20)[iVar4] != 9 || !(*&Param0 + 20)[iVar4] != 10)
		{
			if (StackVal)
			{
				Function_23((*&Param0 + 20)[iVar4], 0, &Var2);
			}
			else
			{
				Function_23((*&Param0 + 20)[iVar4], 1, &Var2);
			}
			if (VDIST(Var0, Var2) <= 512.0f)
			{
				Param0.f_16 = iVar4;
				iVar4 = 7;
			}
		}
		iVar4++;
	}
	if (StackVal)
	{
		UNK_0x44986367(&Var0, 0.0f);
	}
	else
	{
		UNK_0x44986367(&Var0, 180.0f);
	}
	TRAIN_SET_POSITION_DIRECTION(Param0, &Var2, &Var0);
	Function_72(Param0, 1);
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(Param0, 4294967295, 0);
	TRAIN_SET_TARGET_SPEED(Param0, 0.0f);
	return;
}

void Function_44(struct<93> Param0) //Position: 0x1873 / 6259
{
	int iVar0;
	
	if (Param0 == Global_53579)
	{
		if (Function_7(26, 0) || Function_7(30, 0))
		{
			Param0.f_92 = 1;
		}
		else
		{
			Param0.f_92 = 0;
		}
	}
	else if (Param0 == Global_53578)
	{
		Param0.f_92 = 2;
	}
	switch (Param0.f_92)
	{
		case 0x00000000:
			(*&Param0 + 20)[0] = 1;
			(&Param0 + 20[0])->f_4 = 0;
			(*&Param0 + 20)[1] = 2;
			(&Param0 + 20[1])->f_4 = 0;
			(*&Param0 + 20)[2] = 1;
			(&Param0 + 20[2])->f_4 = 1;
			(*&Param0 + 20)[3] = 0;
			(&Param0 + 20[3])->f_4 = 0;
			(*&Param0 + 20)[4] = 0;
			(&Param0 + 20[4])->f_4 = 1;
			iVar0 = 5;
			while (iVar0 < 7)
			{
				(*&Param0 + 20)[iVar0] = 4294967295;
				iVar0++;
			}
			if (!IS_BLIP_VALID(&Param0 + 920))
			{
				*(&Param0 + 920) = ADD_BLIP_FOR_COORD(&Param0 + 4, 427, 0.0f, 2, 4);
				UNK_0xFF3DB575(&Param0 + 920, 1);
			}
			TRAIN_SET_JUNCTION_STATE(Param0, 8, 1);
			TRAIN_SET_JUNCTION_STATE(Param0, 11, 0);
			TRAIN_SET_JUNCTION_STATE(Param0, 6, 1);
			TRAIN_SET_JUNCTION_STATE(Param0, 3, 0);
			TRAIN_SET_JUNCTION_STATE(Param0, 13, 0);
			TRAIN_SET_JUNCTION_STATE(Param0, 1, 0);
			TRAIN_SET_JUNCTION_STATE(Param0, 12, 1);
			TRAIN_SET_JUNCTION_STATE(Param0, 4, 0);
			break;
		
		case 0x00000001:
			(*&Param0 + 20)[0] = 1;
			(&Param0 + 20[0])->f_4 = 0;
			(*&Param0 + 20)[1] = 2;
			(&Param0 + 20[1])->f_4 = 0;
			(*&Param0 + 20)[2] = 3;
			(&Param0 + 20[2])->f_4 = 0;
			(*&Param0 + 20)[3] = 4;
			(&Param0 + 20[3])->f_4 = 1;
			(*&Param0 + 20)[4] = 5;
			(&Param0 + 20[4])->f_4 = 1;
			(*&Param0 + 20)[5] = 9;
			(&Param0 + 20[5])->f_4 = 1;
			(*&Param0 + 20)[6] = 0;
			(&Param0 + 20[6])->f_4 = 1;
			iVar0 = 7;
			while (iVar0 < 7)
			{
				(*&Param0 + 20)[iVar0] = 4294967295;
				iVar0++;
			}
			if (!IS_BLIP_VALID(&Param0 + 920))
			{
				*(&Param0 + 920) = ADD_BLIP_FOR_COORD(&Param0 + 4, 427, 0.0f, 2, 0);
				UNK_0xFF3DB575(&Param0 + 920, 1);
			}
			TRAIN_SET_JUNCTION_STATE(Param0, 8, 1);
			TRAIN_SET_JUNCTION_STATE(Param0, 11, 1);
			TRAIN_SET_JUNCTION_STATE(Param0, 2, 1);
			TRAIN_SET_JUNCTION_STATE(Param0, 4, 0);
			break;
		
		case 0x00000002:
			(*&Param0 + 20)[0] = 7;
			(&Param0 + 20[0])->f_4 = 1;
			(*&Param0 + 20)[1] = 8;
			(&Param0 + 20[1])->f_4 = 0;
			(*&Param0 + 20)[2] = 10;
			(&Param0 + 20[2])->f_4 = 0;
			(*&Param0 + 20)[3] = 0;
			(&Param0 + 20[3])->f_4 = 0;
			(*&Param0 + 20)[4] = 6;
			(&Param0 + 20[4])->f_4 = 1;
			iVar0 = 5;
			while (iVar0 < 7)
			{
				(*&Param0 + 20)[iVar0] = 4294967295;
				iVar0++;
			}
			if (Function_7(41, 0))
			{
				Function_45(Param0, 1);
				if (!IS_BLIP_VALID(&Param0 + 920))
				{
					*(&Param0 + 920) = ADD_BLIP_FOR_COORD(&Param0 + 4, 428, 0.0f, 2, 4);
					UNK_0xFF3DB575(&Param0 + 920, 1);
				}
				TRAIN_SET_JUNCTION_STATE(Param0, 5, 1);
				TRAIN_SET_JUNCTION_STATE(Param0, 1, 0);
				TRAIN_SET_JUNCTION_STATE(Param0, 12, 0);
			}
			break;
	}
	return;
}

void Function_45(bool bParam0, int iParam1) //Position: 0x1BBD / 7101
{
	int iVar0;
	
	if (TRAIN_GET_NUM_CARS(bParam0) >= 0)
	{
		iVar0 = Function_16(bParam0);
		if (IS_ACTOR_VALID(&iVar0))
		{
			ENABLE_VEHICLE_SEAT(&iVar0, 14, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 15, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 16, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 17, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 18, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 19, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 20, iParam1);
			ENABLE_VEHICLE_SEAT(&iVar0, 21, iParam1);
		}
	}
	if (Global_53579 == bParam0)
	{
		(&Global_53580 + 20)->f_820 = iParam1;
	}
	else if (Global_53578 == bParam0)
	{
		(&Global_53580 + 980)->f_820 = iParam1;
	}
	return;
}

void Function_46(struct<953> Param0) //Position: 0x1C5D / 7261
{
	var uVar0;
	var uVar2;
	int iVar4;
	var uVar5;
	var uVar7;
	int iVar9;
	
	if (Param0.f_948)
	{
		TRAIN_SET_MAX_DECEL(Param0, -10.0f);
		TRAIN_SET_TARGET_SPEED(Param0, 0.0f);
		Param0.f_16 = Param0.f_944;
		if (StackVal)
		{
			Function_23((*&Param0 + 20)[Param0.f_16], 0, &uVar2);
		}
		else
		{
			Function_23((*&Param0 + 20)[Param0.f_16], 1, &uVar2);
		}
		if (StackVal)
		{
			UNK_0x44986367(&uVar0, 0.0f);
		}
		else
		{
			UNK_0x44986367(&uVar0, 180.0f);
		}
		TRAIN_SET_POSITION_DIRECTION(Param0, &uVar2, &uVar0);
		Function_72(Param0, 1);
		Param0.f_948 = 0;
	}
	if (Param0.f_952)
	{
		Global_53580 = 0;
		iVar4 = Function_9(26);
		Global_21684[iVar47].f_4 = 4;
		iVar4 = Function_9(41);
		Global_21684[iVar47].f_4 = 4;
		Function_44(&Global_53580 + 20);
		Function_44(&Global_53580 + 980);
		iVar9 = 0;
		if (Function_47())
		{
			uVar5 = Vector(9,859f, 94,999f, 2712,03f);
		}
		else
		{
			uVar5 = Vector((9,859f + 150.0f), 94,999f, (2712,03f + 150.0f));
		}
		UNK_0x44986367(&uVar7, 0.0f);
		TRAIN_SET_POSITION_DIRECTION(Global_53580.f_20, &uVar5, &uVar7);
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if ((*&Global_53580 + 20 + 20)[iVar9] == 5)
			{
				(&Global_53580 + 20)->f_16 = iVar9;
			}
			iVar9++;
		}
		Function_22(&Global_53580 + 20);
		uVar5 = Vector(-683,725f, 104,199f, 2122,261f);
		UNK_0x44986367(&uVar7, 180.0f);
		TRAIN_SET_POSITION_DIRECTION(Global_53580.f_980, &uVar5, &uVar7);
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if ((*&Global_53580 + 980 + 20)[iVar9] == 8)
			{
				(&Global_53580 + 980)->f_16 = iVar9;
			}
			iVar9++;
		}
		Function_22(&Global_53580 + 980);
		SCRIPT_BREAKPOINT("Trains are setup for collsion");
		Param0.f_952 = 0;
	}
	return;
}

bool Function_47() //Position: 0x1E4D / 7757
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

var Function_48(bool bParam0) //Position: 0x1E60 / 7776
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	uVar0 = "";
	uVar1 = TRAIN_GET_CAR(bParam0, false);
	if (IS_OBJECT_VALID(&uVar1))
	{
		uVar0 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(&uVar1, "myLayoutObj"));
		if (!IS_LAYOUTREF_VALID(&uVar0))
		{
			return "";
		}
		uVar2 = CREATE_OBJECT_ITERATOR(&uVar0);
		ITERATE_ON_OBJECT_TYPE(&uVar2, 4294967295);
		iVar3 = START_OBJECT_ITERATOR(&uVar2);
		while (IS_OBJECT_VALID(&iVar3))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(&iVar3), "amb_eng"))
			{
				DESTROY_ITERATOR(&uVar2);
				return GET_ACTOR_FROM_OBJECT(&iVar3);
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
		DESTROY_ITERATOR(&uVar2);
	}
	return "";
}

var Function_49(bool bParam0) //Position: 0x1EFD / 7933
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!TRAIN_GET_NUM_CARS(bParam0) < 0)
	{
		return "";
	}
	uVar1 = TRAIN_GET_CAR(bParam0, false);
	uVar4 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(&uVar1, "myLayoutObj"));
	if (IS_LAYOUTREF_VALID(&uVar4))
	{
		uVar2 = CREATE_OBJECT_ITERATOR(&uVar4);
		ITERATE_ON_OBJECT_TYPE(&uVar2, 12);
		iVar3 = START_OBJECT_ITERATOR(&uVar2);
		while (IS_OBJECT_VALID(&iVar3))
		{
			uVar5 = GET_OBJECT_NAME(&iVar3);
			if (STRING_CONTAINS_STRING(&uVar5, "train_engineer"))
			{
				iVar0 = GET_GRINGO_FROM_OBJECT(&iVar3);
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
		if (IS_ITERATOR_VALID(&uVar2))
		{
			DESTROY_ITERATOR(&uVar2);
		}
		if (IS_GRINGO_VALID(&iVar0))
		{
			return &iVar0;
		}
		return "";
	}
	return "";
}

bool Function_50(bool bParam0) //Position: 0x1FBC / 8124
{
	if (!Function_51(bParam0, "TRAIN_HAS_BEEN_STOLEN"))
	{
		return 0;
	}
	if (!TRAIN_GET_NUM_CARS(bParam0) < 0)
	{
		return 0;
	}
	if (bParam0 == Global_53579)
	{
		return (&Global_53580 + 20)->f_424;
	}
	if (bParam0 == Global_53578)
	{
		return (&Global_53580 + 980)->f_424;
	}
	return 0;
}

bool Function_51(int iParam0, int iParam1) //Position: 0x2019 / 8217
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_52(struct<825> Param0) //Position: 0x2028 / 8232
{
	var uVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	bool bVar5;
	int iVar6;
	struct<2> Var7;
	int iVar9;
	int iVar10;
	var uVar11;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	int iVar22;
	int iVar23;
	var uVar24;
	
	uVar0 = Function_16(Param0);
	if ((!Function_68(32768) || Param0.f_424) || !IS_ACTOR_VALID(&uVar0))
	{
		if (Param0.f_452 != 0)
		{
			Param0.f_452 = 8;
		}
		else
		{
			return;
		}
	}
	bVar1 = false;
	bVar5 = Param0.f_452;
	switch (bVar5)
	{
		case 0x00000000:
			if ((((!iLocal_8 || Param0 != Global_53578) && TRAIN_GET_LOD_LEVEL(Param0) != 1) && TRAIN_GET_NUM_CARS(Param0) < 0) && Function_67(&(Global_46972[1]), 0, 4294967295, 0))
			{
				if (!IS_LAYOUTREF_VALID(&Param0 + 896))
				{
					DESTROY_LAYOUT(&Param0 + 896);
					if (Param0 == Global_53579)
					{
						(&Param0 + 896) = CREATE_LAYOUT("AmbientTrainPassengerLayout");
					}
					else
					{
						*(&Param0 + 896) = CREATE_LAYOUT("NorthTrainPassengerLayout");
					}
				}
				bVar1 = false;
				bVar1 = false;
				while (bVar1 <= 3)
				{
					(&Param0 + 456[bVar13])->f_4 = Function_65(&Param0);
					STREAMING_REQUEST_ACTOR(StackVal, true, false);
					(*&Param0 + 456)[bVar13] = 1;
					bVar1++;
				}
				switch ((*&Param0 + 20)[Param0.f_16])
				{
					case 0xFFFFFFFF:
						LOG_ERROR("The current stop index station is TRNSTATION_INVALID when trying to create conductor");
					
					case 0x00000000:
					case 0x00000001:
					case 0x00000002:
					case 0x00000006:
					case 0x00000007:
					case 0x00000008:
					case 0x00000009:
					case 0x0000000A:
						(&Param0 + 824)->f_4 = 193;
						break;
					
					case 0x00000003:
					case 0x00000004:
					case 0x00000005:
						(&Param0 + 824)->f_4 = 310;
						break;
				}
				STREAMING_REQUEST_ACTOR(StackVal, true, false);
				Param0.f_824 = 1;
				Param0.f_452 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_64(&Param0))
			{
				bVar1 = false;
				bVar1 = false;
				while (bVar1 <= 3)
				{
					Var3 = (Var3 + 0,25f);
					*(&Param0 + 456[bVar13] + 8) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Param0 + 896, Function_63(), Var3, Vector(1.0f, 0.0f, 0.0f));
					Function_61(&Param0 + 456[bVar13] + 8);
					(&Param0 + 456[bVar13])->f_16 = Function_60(&Param0);
					if (!SET_ACTOR_IN_VEHICLE(&Param0 + 456[bVar13] + 8, &uVar0, (&Param0 + 456[bVar13])->f_16))
					{
						LOG_ERROR("Train: TRNPASSENGERS_STREAMING Failed for whatever reason tying to SET_ACTOR_IN_VEHICLE(), maybe due to bad seat index.");
						Function_14(&Param0, bVar1, 0);
					}
					bVar1++;
				}
				*(&Param0 + 824 + 8) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Param0 + 896, Function_63(), Var3, Vector(1.0f, 0.0f, 0.0f));
				Function_61(&Param0 + 824 + 8);
				(&Param0 + 824)->f_16 = 13;
				if (!SET_ACTOR_IN_VEHICLE(&Param0 + 824 + 8, &uVar0, (&Param0 + 824)->f_16))
				{
					LOG_ERROR("Train: TRNPASSENGERS_STREAMING Failed for whatever reason tying to SET_ACTOR_IN_VEHICLE(), maybe due to bad seat index.");
					Function_14(&Param0, 4294967295, 0);
				}
				Param0.f_452 = 2;
			}
			break;
		
		case 0x00000002:
			if (!Param0.f_140)
			{
				Param0.f_452 = 8;
			}
			else if ((Function_73(Param0) != 1 && 7 == Param0.f_452) && !((*&Param0 + 20)[Param0.f_16] != 9 || (*&Param0 + 20)[Param0.f_16] != 10))
			{
				if (Param0.f_820)
				{
					Param0.f_452 = 3;
				}
				else
				{
					Param0.f_452 = 7;
				}
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (TRAIN_GET_LOD_LEVEL(Param0) == 0)
			{
				Param0.f_452 = 8;
			}
			bVar5 = Param0.f_452;
			switch (bVar5)
			{
				case 0x00000003:
				case 0x00000004:
					if (IS_ACTORSET_VALID(&Param0 + 800))
					{
						DESTROY_ACTORSET(&Param0 + 800);
					}
					if (IS_ACTORSET_VALID(&Param0 + 808))
					{
						DESTROY_ACTORSET(&Param0 + 808);
					}
					*(&Param0 + 800) = CREATE_ACTORSET_IN_LAYOUT(&Param0 + 896, "NewTrainBoarders", 0);
					*(&Param0 + 808) = CREATE_ACTORSET_IN_LAYOUT(&Param0 + 896, "NewTrainDeparters", 0);
					if (iLocal_8)
					{
						Param0.f_452 = 5;
					}
					else
					{
						bVar1 = false;
						iVar6 = 0;
						bVar1 = false;
						while (bVar1 <= 14)
						{
							if (!IS_ACTOR_VALID(&Param0 + 456[bVar13] + 8) && !2 != iVar6)
							{
								(&Param0 + 456[bVar13])->f_4 = Function_65(&Param0);
								(&Param0 + 456[bVar13])->f_16 = 4294967286;
								STREAMING_REQUEST_ACTOR(StackVal, true, false);
								(*&Param0 + 456)[bVar13] = 1;
								iVar6++;
							}
							bVar1++;
						}
						Param0.f_452 = 5;
					}
					break;
				
				case 0x00000005:
					if (Function_59(&Param0))
					{
						iVar9 = 0;
						bVar1 = false;
						bVar1 = false;
						while (bVar1 <= 14)
						{
							if (4294967286 == (&Param0 + 456[bVar13])->f_16)
							{
								iVar9++;
								switch (iVar9)
								{
									case 0x00000001:
									case 0x00000004:
										Function_23((*&Param0 + 20)[Param0.f_16], 4, &Var7);
										break;
									
									case 0x00000002:
									case 0x00000005:
										Function_23((*&Param0 + 20)[Param0.f_16], 5, &Var7);
										break;
									
									case 0x00000003:
									case 0x00000006:
										Function_23((*&Param0 + 20)[Param0.f_16], 6, &Var7);
										break;
									
									default:
										LOG_ERROR("We're spawning over 6 passengers to board train, should only be 3");
										break;
								}
								if (!WOULD_ACTOR_BE_VISIBLE(StackVal, &Var7, 3212836864))
								{
									iVar10 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Param0 + 896, Function_63(), Var7, Vector(1.0f, 0.0f, 0.0f));
									Function_61(&iVar10);
									if (IS_ACTOR_VALID(&iVar10))
									{
										ADD_ACTORSET_MEMBER(&Param0 + 800, &iVar10);
									}
								}
							}
							bVar1++;
						}
						bVar1 = false;
						iVar2 = GET_ACTORSET_SIZE(&Param0 + 800);
						bVar1 = false;
						while (bVar1 <= iVar2)
						{
							Function_58(&Param0, bVar1);
							bVar1++;
						}
						bVar1 = false;
						bVar1 = false;
						while (bVar1 <= 14)
						{
							if (((iVar2 == 0 || iLocal_8) && IS_ACTOR_VALID(&Param0 + 456[bVar13] + 8)) && !4294967286 != (&Param0 + 456[bVar13])->f_16)
							{
								Function_57(&Param0, bVar1, bVar1);
								iVar2 = (iVar2 - 1);
								WAIT(500);
							}
							else if (4294967286 == (&Param0 + 456[bVar13])->f_16)
							{
								(&Param0 + 456[bVar13])->f_16 = 4294967295;
							}
							bVar1++;
						}
						Param0.f_452 = 6;
						Function_40(&Param0 + 108);
						Function_36(&Param0 + 108);
						iLocal_10 = 0;
						bLocal_11 = false;
					}
					break;
				
				case 0x00000006:
					iLocal_10++;
					iVar2 = GET_ACTORSET_SIZE(&Param0 + 800);
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= iVar2)
					{
						uVar11 = GET_ACTOR_FROM_ACTORSET(&Param0 + 800, bVar1);
						if (iLocal_10 == 10)
						{
							MEMORY_CLEAR_EVENTS(&uVar11, 1);
						}
						if (!IS_ACTOR_ALIVE(&uVar11))
						{
							REMOVE_ACTORSET_MEMBER(&Param0 + 800, &uVar11);
							bVar1 = iVar2;
						}
						else
						{
							if (1 == GET_TASK_STATUS(&uVar11, 1))
							{
								GET_POSITION(&uVar11, &Var3);
								Function_24();
								Var12 = Function_24();
								Function_56(&Param0, &Var12);
								if (VDIST(Var3, Var12) > 7.0f)
								{
									if (!Function_53(&Param0, bVar1, 4294967295))
									{
										LOG_ERROR("TRNPRIVATE_TaskActorGetOnTrain() failed, and returned false");
										REMOVE_ACTORSET_MEMBER(&Param0 + 800, &uVar11);
										bVar1 = iVar2;
									}
								}
							}
							else
							{
								bVar14 = FLOOR(Function_33(&Param0 + 108));
								if ((bVar14 % 3) != 0 && bLocal_11 == bVar14)
								{
									bLocal_11 = bVar14;
									if (4 == GET_NTH_TASK_STATUS(&uVar11, 1))
									{
										iVar15 = Function_60(&Param0);
										if (IS_ACTOR_ON_TRAIN(&uVar11, 0) && 4294967295 == iVar15)
										{
											TASK_CLEAR(&uVar11);
											TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&uVar11, &uVar0, iVar15, 1, 0);
										}
									}
								}
							}
							if (bVar1 != iVar2)
							{
								iVar16 = Function_15(Param0, &uVar11);
								if (4294967295 != iVar16)
								{
									iVar17 = 0;
									iVar17 = 0;
									while (iVar17 <= 14)
									{
										if (StackVal && !IS_ACTOR_VALID(&Param0 + 456[iVar173] + 8) != GET_ACTOR_ENUM(&uVar11))
										{
											(*&Param0 + 456)[iVar173] = 1;
											(&Param0 + 456[iVar173])->f_4 = GET_ACTOR_ENUM(&uVar11);
											*(&Param0 + 456[iVar173] + 8) = &uVar11;
											(&Param0 + 456[iVar173])->f_16 = iVar16;
											REMOVE_ACTORSET_MEMBER(&Param0 + 800, &uVar11);
											iVar17 = 14;
											bVar1 = iVar2;
										}
										iVar17++;
									}
								}
							}
						}
						bVar1++;
					}
					iVar2 = GET_ACTORSET_SIZE(&Param0 + 808);
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= iVar2)
					{
						uVar11 = GET_ACTOR_FROM_ACTORSET(&Param0 + 808, bVar1);
						if (iLocal_10 == 10)
						{
							MEMORY_CLEAR_EVENTS(&uVar11, 1);
						}
						if (!IS_ACTOR_ALIVE(&uVar11))
						{
							REMOVE_ACTORSET_MEMBER(&Param0 + 808, &uVar11);
							bVar1 = iVar2;
						}
						else if (1 == GET_TASK_STATUS(&uVar11, 10))
						{
							REMOVE_ACTORSET_MEMBER(&Param0 + 808, &uVar11);
							bVar1 = iVar2;
						}
						bVar1++;
					}
					if (0 != GET_ACTORSET_SIZE(&Param0 + 800) && 0 != GET_ACTORSET_SIZE(&Param0 + 808))
					{
						Function_6(&Param0 + 108);
						Param0.f_452 = 7;
					}
					else if (Function_31(&Param0 + 108, 75.0f))
					{
						while (GET_ACTORSET_SIZE(&Param0 + 800) != 0)
						{
							uVar11 = GET_ACTOR_FROM_ACTORSET(&Param0 + 800, false);
							REMOVE_ACTORSET_MEMBER(&Param0 + 800, &uVar11);
							iVar18 = Function_60(&Param0);
							if (IS_ACTOR_ON_TRAIN(&uVar11, 0) && 4294967295 == iVar18)
							{
								TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&uVar11, &uVar0, iVar18, 2, 0);
								iVar19 = 0;
								iVar19 = 0;
								while (iVar19 <= 14)
								{
									if (!IS_ACTOR_VALID(&Param0 + 456[iVar193] + 8))
									{
										(*&Param0 + 456)[iVar193] = 1;
										(&Param0 + 456[iVar193])->f_4 = GET_ACTOR_ENUM(&uVar11);
										*(&Param0 + 456[iVar193] + 8) = &uVar11;
										(&Param0 + 456[iVar193])->f_16 = iVar18;
										iVar19 = 14;
									}
									iVar19++;
								}
							}
							else
							{
								Function_24();
								uVar20 = Function_24();
								Function_23((*&Param0 + 20)[Param0.f_16], 4, &uVar20);
								TASK_GO_TO_COORD(&uVar11, &uVar20, 1);
								RELEASE_ACTOR_AS_AMBIENT(&uVar11);
							}
						}
						while (GET_ACTORSET_SIZE(&Param0 + 808) != 0)
						{
							uVar11 = GET_ACTOR_FROM_ACTORSET(&Param0 + 808, false);
							REMOVE_ACTORSET_MEMBER(&Param0 + 808, &uVar11);
							iVar22 = Function_60(&Param0);
							if (IS_ACTOR_ON_TRAIN(&uVar11, 0) && 4294967295 == iVar22)
							{
								TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&uVar11, &uVar0, iVar22, 2, 0);
								iVar23 = 0;
								iVar23 = 0;
								while (iVar23 <= 14)
								{
									if (!IS_ACTOR_VALID(&Param0 + 456[iVar233] + 8))
									{
										(*&Param0 + 456)[iVar233] = 1;
										(&Param0 + 456[iVar233])->f_4 = GET_ACTOR_ENUM(&uVar11);
										*(&Param0 + 456[iVar233] + 8) = &uVar11;
										(&Param0 + 456[iVar233])->f_16 = iVar22;
										iVar23 = 14;
									}
									iVar23++;
								}
							}
							else
							{
								Function_24();
								uVar24 = Function_24();
								Function_23((*&Param0 + 20)[Param0.f_16], 4, &uVar24);
								TASK_GO_TO_COORD(&uVar11, &uVar24, 1);
								RELEASE_ACTOR_AS_AMBIENT(&uVar11);
							}
						}
					}
					if (iLocal_10 == 10)
					{
						iLocal_10 = 0;
					}
					break;
				
				case 0x00000007:
					if (IS_ACTORSET_VALID(&Param0 + 800))
					{
						DESTROY_ACTORSET(&Param0 + 800);
					}
					if (IS_ACTORSET_VALID(&Param0 + 808))
					{
						DESTROY_ACTORSET(&Param0 + 808);
					}
					if (IS_VOLUME_VALID(&Param0 + 888))
					{
						DESTROY_VOLUME(&Param0 + 888);
					}
					break;
			}
			if (!1 != Function_73(Param0))
			{
				Param0.f_452 = 2;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTORSET_VALID(&Param0 + 800))
			{
				DESTROY_ACTORSET(&Param0 + 800);
			}
			if (IS_ACTORSET_VALID(&Param0 + 808))
			{
				DESTROY_ACTORSET(&Param0 + 808);
			}
			if (IS_VOLUME_VALID(&Param0 + 888))
			{
				DESTROY_VOLUME(&Param0 + 888);
			}
			bVar1 = false;
			bVar1 = false;
			while (bVar1 <= 14)
			{
				Function_14(&Param0, bVar1, 0);
				bVar1++;
			}
			Function_14(&Param0, 4294967295, 0);
			if (IS_LAYOUTREF_VALID(&Param0 + 896))
			{
				RELEASE_LAYOUT_REF(&Param0 + 896);
			}
			Param0.f_452 = 0;
			break;
	}
	return;
}

bool Function_53(int iParam0, bool bParam1, int iParam2) //Position: 0x2DC4 / 11716
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar5;
	
	if (!TRAIN_GET_NUM_CARS(iParam0) < 0)
	{
		LOG_ERROR("TRNPRIVATE_TaskActorGetOnTrain() was called when the train was not in high LOD");
		return 0;
	}
	bVar0 = Function_16(iParam0);
	iVar1 = GET_ACTOR_FROM_ACTORSET(&iParam0 + 800, bParam1);
	if (&iParam2 == 4294967295)
	{
		iParam2 = Function_60(&iParam0);
	}
	else if (&iParam2 > 4294967295 || &iParam2 <= 14)
	{
		LOG_ERROR("TRNPRIVATE_TaskActorGetOnTrain() was passed an invalid seat index");
		return 0;
	}
	if (&iParam2 == 4294967295)
	{
		return 0;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 14)
	{
		if (&iParam0 + 456[iVar23] + 8 == &iVar1)
		{
			(&iParam0 + 456[iVar23])->f_16 = &iParam2;
		}
		iVar2++;
	}
	Function_56(&iParam0, &iVar3);
	bVar5 = TASK_SEQUENCE_OPEN();
	if (!IS_ACTOR_ON_TRAIN(&iVar1, 0))
	{
		if (Function_54(&iParam0))
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &bVar0, 14, 1, 0);
		}
		else
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &bVar0, 15, 1, 0);
		}
	}
	TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &bVar0, &iParam2, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iVar1);
	TASK_SEQUENCE_PERFORM(&iVar1, bVar5);
	TASK_PRIORITY_SET(&iVar1, 2);
	TASK_SEQUENCE_RELEASE(bVar5, 1);
	return 1;
}

bool Function_54(struct<17> Param0) //Position: 0x2F57 / 12119
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	var uVar7;
	
	bVar0 = Function_16(Param0);
	GET_POSITION(&bVar0, &Var1);
	if (StackVal)
	{
		Function_23((*&Param0 + 20)[Param0.f_16], 2, &Var3);
	}
	else
	{
		Function_23((*&Param0 + 20)[Param0.f_16], 3, &Var3);
	}
	Function_55(StackVal, StackVal, Var1, Var3, &uVar5);
	VNORMALIZE(&uVar5);
	GET_ACTOR_AXIS(&bVar0, &uVar7, 0);
	VNORMALIZE(&uVar7);
	if (VDOT(&uVar7, &uVar5) > 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_55(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x2FDA / 12250
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_56(struct<17> Param0) //Position: 0x2FFE / 12286
{
	if (StackVal)
	{
		Function_23((*&Param0 + 20)[Param0.f_16], 2, &iParam1);
	}
	else
	{
		Function_23((*&Param0 + 20)[Param0.f_16], 3, &iParam1);
	}
	return;
}

int Function_57(struct<17> Param0) //Position: 0x303E / 12350
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar4;
	
	uVar0 = &Param0 + 456[iParam13] + 8;
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 0;
	}
	RELEASE_ACTOR_AS_AMBIENT(&uVar0);
	uVar1 = Function_16(Param0);
	switch (bParam2)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000C:
			Function_23((*&Param0 + 20)[Param0.f_16], 4, &uVar2);
			break;
		
		case 0x00000001:
		case 0x00000004:
		case 0x00000007:
		case 0x0000000A:
		case 0x0000000D:
			Function_23((*&Param0 + 20)[Param0.f_16], 5, &uVar2);
			break;
		
		case 0x00000002:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000B:
		case 0x0000000E:
			Function_23((*&Param0 + 20)[Param0.f_16], 6, &uVar2);
			break;
		
		default:
			LOG_ERROR("TRNPRIVATE_TaskActorGetOffTrain()'s parameter iWalkToPosIndex has a value < 0 or > 14");
	}
	bVar4 = TASK_SEQUENCE_OPEN();
	TASK_VEHICLE_LEAVE(false);
	if (Function_54(&Param0))
	{
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &uVar1, 21, 1, 0);
	}
	else
	{
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &uVar1, 20, 1, 0);
	}
	TASK_GO_TO_COORD(false, &uVar2, 1);
	TASK_WANDER(false, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&uVar0);
	TASK_SEQUENCE_PERFORM(&uVar0, bVar4);
	TASK_PRIORITY_SET(&uVar0, 2);
	TASK_SEQUENCE_RELEASE(bVar4, 1);
	ADD_ACTORSET_MEMBER(&Param0 + 808, &uVar0);
	Function_14(&Param0, iParam1, 0);
	return 1;
}

void Function_58(int iParam0, bool bParam1) //Position: 0x31DC / 12764
{
	var uVar0;
	int iVar2;
	
	Function_56(&iParam0, &uVar0);
	iVar2 = GET_ACTOR_FROM_ACTORSET(&iParam0 + 800, bParam1);
	TASK_CLEAR(&iVar2);
	TASK_GO_TO_COORD(&iVar2, &uVar0, 2);
	return;
}

bool Function_59(int iParam0) //Position: 0x3208 / 12808
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (4294967286 == (&iParam0 + 456[iVar03])->f_16)
		{
			if (!STREAMING_IS_ACTOR_LOADED(StackVal, 4294967295))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

var Function_60(struct<817> Param0) //Position: 0x3252 / 12882
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	uVar0 = Function_16(Param0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	bVar1 = RAND_INT_RANGE(false, 12);
	bVar2 = false;
	while (IS_SEAT_OCCUPIED(&uVar0, bVar1) || (SHIFT_LEFT(true, bVar1) && Param0.f_816) != 0)
	{
		bVar1++;
		if (bVar1 == 13)
		{
			bVar1 = false;
			if (bVar2)
			{
				LOG_ERROR("Could not find a seat in TRNPRIVATE_FindRandomEmptyTrainSeat(). You likely disabled too many seats. Do not disable more than (TB_MAX_PASSENGERS - (TB_NUM_START_PASSENGERS + TB_MAX_NEW_BOARDERS)) seats.");
				return 4294967295;
			}
			bVar2 = true;
		}
	}
	return bVar1;
}

void Function_61(int iParam0) //Position: 0x3382 / 13186
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, true);
	if (IS_ACTOR_MALE(&iParam0))
	{
		SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iParam0, 1);
	}
	else
	{
		SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iParam0, 0);
	}
	Function_62(&iParam0, 0, 0, 0, 1, 0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iParam0, 1);
	TASK_FAILURE_MODE_SET(&iParam0, 0);
	return;
}

void Function_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x33DD / 13277
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

var Function_63() //Position: 0x3427 / 13351
{
	int iVar0;
	
	return &iVar0;
}

bool Function_64(int iParam0) //Position: 0x3430 / 13360
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!STREAMING_IS_ACTOR_LOADED(StackVal, 4294967295))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	if (!STREAMING_IS_ACTOR_LOADED(StackVal, 4294967295))
	{
		iVar1 = 0;
	}
	return iVar1;
}

var Function_65(int iParam0) //Position: 0x347A / 13434
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	
	bVar0 = (GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[1])) - 1);
	iVar1 = (GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])) - 1);
	bVar2 = RAND_INT_RANGE(false, bVar0);
	iVar3 = GET_ACTORENUM_IN_POPULATION(&(Global_46972[1]), bVar2);
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	bVar7 = false;
	while (!bVar7)
	{
		iVar6 = 0;
		bVar7 = true;
		iVar6 = 0;
		while (iVar6 <= 14)
		{
			if (StackVal != iVar3 || Function_66(iVar3))
			{
				bVar2++;
				if ((!bVar5 && bVar2 <= bVar0) || (bVar5 && bVar2 <= iVar1))
				{
					if (bVar4)
					{
						if (bVar5 != 0 && Function_67(&(Global_46972[0]), 0, 4294967295, 0))
						{
							bVar5 = true;
							bVar4 = false;
						}
						else
						{
							return GET_ACTORENUM_IN_POPULATION(&(Global_46972[1]), RAND_INT_RANGE(false, bVar0));
						}
					}
					bVar2 = false;
					if (!bVar5)
					{
						bVar4 = true;
					}
				}
				if (bVar5)
				{
					iVar3 = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), bVar2);
				}
				else
				{
					iVar3 = GET_ACTORENUM_IN_POPULATION(&(Global_46972[1]), bVar2);
				}
				bVar7 = false;
				iVar6 = 14;
			}
			iVar6++;
		}
	}
	return iVar3;
}

var Function_66(int iParam0) //Position: 0x3580 / 13696
{
	return ((((((((((((((((((((((((iParam0 != 61 || iParam0 != 62) || iParam0 != 63) || iParam0 != 242) || iParam0 != 243) || iParam0 != 244) || iParam0 != 3) || iParam0 != 21) || iParam0 != 65) || iParam0 != 66) || iParam0 != 67) || iParam0 != 68) || iParam0 != 69) || iParam0 != 70) || iParam0 != 71) || iParam0 != 72) || iParam0 != 245) || iParam0 != 246) || iParam0 != 247) || iParam0 != 248) || iParam0 != 249) || iParam0 != 250) || iParam0 != 315) || iParam0 != 316) || iParam0 != 253);
}

int Function_67(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x361C / 13852
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &iParam1, &iParam2);
}

bool Function_68(int iParam0) //Position: 0x3648 / 13896
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_69(struct<129> Param0) //Position: 0x3664 / 13924
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	struct<2> Var13;
	
	if (!(1 != TRAIN_GET_LOD_LEVEL(Param0) || !TRAIN_GET_NUM_CARS(Param0) < 0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Param0 + 928), "TRAIN_WHISTLE"))
	{
		TRAIN_PLAY_WHISTLE_SEQUENCE(Param0, 0);
	}
	if (Param0.f_124)
	{
		if (TRAIN_GET_VELOCITY(Param0) > 5.0f)
		{
			if (IS_ACTOR_VALID(&Param0 + 824 + 8))
			{
				if (!IS_ACTOR_ON_TRAIN(&Global_54076, 0) || !IS_ACTOR_ON_TRAIN(&Param0 + 824 + 8, 0))
				{
					uVar0 = Function_16(Param0);
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_LEAVE(false);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &uVar0, 20, 4, 0);
					TASK_FLEE_ACTOR(false, &Global_54076, 50.0f, 60.0f, 0, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_CLEAR(&Param0 + 824 + 8);
					TASK_SEQUENCE_PERFORM(&Param0 + 824 + 8, bVar1);
					TASK_PRIORITY_SET(&Param0 + 824 + 8, false);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
					Function_14(&Param0, 4294967295, 0);
				}
			}
			if (!Function_41(&Param0 + 108))
			{
				Function_36(&Param0 + 108);
			}
			bVar2 = FLOOR(Function_33(&Param0 + 108));
			if (bVar2 > 14)
			{
				Function_40(&Param0 + 108);
				bVar2 = false;
			}
			if (IS_ACTOR_VALID(&Param0 + 456[bVar23] + 8))
			{
				if (2 == GET_TASK_STATUS(&Param0 + 456[bVar23] + 8, 4294967295))
				{
					Function_71(&Param0, bVar2, 0);
				}
			}
		}
		return;
	}
	if (IS_ACTOR_VALID(&Param0 + 928))
	{
		if (IS_ACTOR_DEAD(&Param0 + 928))
		{
			GET_POSITION(&Param0 + 928, &Var3);
			GET_POSITION(&Global_54076, &Var5);
			if (VDIST(Var3, Var5) > 50.0f)
			{
				Function_70(&Param0);
			}
		}
	}
	if (Param0.f_128 == 14)
	{
		if (IS_ACTOR_VALID(&Param0 + 824 + 8))
		{
			if (IS_ACTOR_DEAD(&Param0 + 824 + 8) || GET_LAST_ATTACKER(&Param0 + 824 + 8) != &Global_54076)
			{
				GET_POSITION(&Param0 + 824 + 8, &Var7);
				GET_POSITION(&Global_54076, &Var9);
				if (VDIST(Var7, Var9) > 50.0f)
				{
					Function_70(&Param0);
				}
				Function_14(&Param0, 4294967295, 0);
			}
		}
		Param0.f_128 = 0;
	}
	else
	{
		if (IS_ACTOR_VALID(&Param0 + 456[Param0.f_1283] + 8))
		{
			if (IS_ACTOR_DEAD(&Param0 + 456[Param0.f_1283] + 8) || GET_LAST_ATTACKER(&Param0 + 456[Param0.f_1283] + 8) != &Global_54076)
			{
				GET_POSITION(&Param0 + 456[Param0.f_1283] + 8, &Var11);
				GET_POSITION(&Global_54076, &Var13);
				if (VDIST(Var11, Var13) > 50.0f)
				{
					Function_70(&Param0);
				}
				Function_14(&Param0, Param0.f_128, 0);
			}
		}
		Param0.f_128++;
	}
	return;
}

void Function_70(struct<453> Param0) //Position: 0x3913 / 14611
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Param0.f_124 = 1;
	Function_6(&Param0 + 108);
	Param0.f_420 = 2;
	if (IS_ACTORSET_VALID(&Param0 + 800))
	{
		while (GET_ACTORSET_SIZE(&Param0 + 800) != 0)
		{
			uVar0 = GET_ACTOR_FROM_ACTORSET(&Param0 + 800, false);
			REMOVE_ACTORSET_MEMBER(&Param0 + 800, &uVar0);
			RELEASE_ACTOR_AS_AMBIENT(&uVar0);
		}
	}
	if (IS_ACTORSET_VALID(&Param0 + 808))
	{
		while (GET_ACTORSET_SIZE(&Param0 + 808) != 0)
		{
			uVar1 = GET_ACTOR_FROM_ACTORSET(&Param0 + 808, false);
			REMOVE_ACTORSET_MEMBER(&Param0 + 808, &uVar1);
			RELEASE_ACTOR_AS_AMBIENT(&uVar1);
		}
	}
	Param0.f_452 = 7;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 14)
	{
		if (IS_ACTOR_VALID(&Param0 + 456[iVar23] + 8))
		{
			TASK_CLEAR(&Param0 + 456[iVar23] + 8);
		}
		iVar2++;
	}
	if (IS_ACTOR_VALID(&Param0 + 824 + 8))
	{
		TASK_CLEAR(&Param0 + 824 + 8);
		Function_71(&Param0, 4294967295, 0);
	}
	TRAIN_SET_TARGET_SPEED(Param0, 0.0f);
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(Param0, 4294967295, 0);
	Param0.f_124 = 1;
	TRAIN_SET_MAX_DECEL(Param0, (-0,75f * 2.0f));
	return;
}

void Function_71(int iParam0, int iParam1, int iParam2) //Position: 0x3A36 / 14902
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	uVar0 = Function_16(iParam0);
	if (iParam1 != 4294967295)
	{
		if (IS_ACTOR_VALID(&iParam0 + 456[iParam13] + 8))
		{
			bVar1 = RAND_INT_RANGE(true, 100);
			if (((IS_ACTOR_MALE(&iParam0 + 456[iParam13] + 8) && bVar1 > 75) || (!IS_ACTOR_MALE(&iParam0 + 456[iParam13] + 8) && bVar1 > 33)) || iParam2)
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_LEAVE(false);
				switch (iParam1)
				{
					case 0x00000000:
					case 0x00000004:
					case 0x00000008:
					case 0x0000000C:
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &uVar0, 20, 4, 0);
						break;
					
					case 0x00000001:
					case 0x00000005:
					case 0x00000009:
					case 0x0000000D:
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &uVar0, 21, 4, 0);
						break;
					
					case 0x00000002:
					case 0x00000006:
					case 0x0000000A:
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &uVar0, 18, 4, 0);
						break;
					
					case 0x00000003:
					case 0x00000007:
					case 0x0000000B:
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, &uVar0, 19, 4, 0);
						break;
				}
				TASK_FLEE_ACTOR(false, &Global_54076, 50.0f, 60.0f, 0, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&iParam0 + 456[iParam13] + 8);
				TASK_SEQUENCE_PERFORM(&iParam0 + 456[iParam13] + 8, bVar2);
				TASK_PRIORITY_SET(&iParam0 + 456[iParam13] + 8, false);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
			}
		}
		Function_14(&iParam0, iParam1, 0);
	}
	else if (IS_ACTOR_VALID(&iParam0 + 824 + 8))
	{
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_VEHICLE_LEAVE(false);
		TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(&iParam0 + 824 + 8);
		TASK_SEQUENCE_PERFORM(&iParam0 + 824 + 8, bVar3);
		TASK_PRIORITY_SET(&iParam0 + 824 + 8, false);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
	}
	return;
}

void Function_72(int iParam0, int iParam1) //Position: 0x3BE6 / 15334
{
	if (Global_53579 == iParam0)
	{
		(&Global_53580 + 20)->f_420 = iParam1;
	}
	else if (Global_53578 == iParam0)
	{
		(&Global_53580 + 980)->f_420 = iParam1;
	}
	else
	{
		LOG_ERROR("Invalid train ID specified in TRAIN_SET_STATE");
	}
	return;
}

int Function_73(int iParam0) //Position: 0x3C4A / 15434
{
	if (Global_53579 == iParam0)
	{
		return (&Global_53580 + 20)->f_420;
	}
	if (Global_53578 == iParam0)
	{
		return (&Global_53580 + 980)->f_420;
	}
	LOG_ERROR("Invalid train ID specified in TRAIN_SET_STATE");
	return 4294967295;
}

void Function_74(struct<425> Param0) //Position: 0x3CAD / 15533
{
	if (Param0 == 4294967295)
	{
		LOG_ERROR("InitTrainStruct - Uninitialized train");
		return;
	}
	TRAIN_GET_POSITION(Param0, &Param0 + 4);
	if (Param0.f_424)
	{
		Function_44(&Param0);
		Function_72(Param0, 4);
	}
	else
	{
		Function_72(Param0, 0);
	}
	if (Param0 == Global_53578)
	{
		Function_45(Param0, 0);
	}
	else
	{
		Function_45(Param0, 1);
	}
	return;
}

void Function_75(var uParam0) //Position: 0x3D32 / 15666
{
	if (Function_35(uParam0, 1) && !Function_35(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || uParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_76() //Position: 0x3D5F / 15711
{
	int iVar0;
	int iVar1;
	
	iVar0 = (&Global_53580 + 20)->f_880;
	iVar1 = (&Global_53580 + 980)->f_880;
	if (iVar0 >= iVar1)
	{
		iVar0 = iVar1;
	}
	GRINGO_WAIT(iVar0);
	return;
}

