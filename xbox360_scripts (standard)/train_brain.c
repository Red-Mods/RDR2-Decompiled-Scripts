//Decompiled with MagicRDR v1.0
//Function Count : 77
//Statics Count : 12
//Natives Count : 149
//Parameters Count : 1

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	int iLocal_7 = 0;
	float fLocal_8 = 0.0f;
	int iLocal_9 = 0;
	bool bLocal_10 = false;
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	float fVar1;
	
	iLocal_0 = 1;
	iLocal_1 = 0;
	iLocal_2 = 1;
	iLocal_3 = 1;
	iLocal_4 = 0;
	iLocal_5 = 0;
	fLocal_8 = 0.0f;
	iLocal_9 = 0;
	bLocal_10 = false;
	Global_34208.f_1436 = bScriptParam_0;
	bVar0 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
	if ((STRINGS_ARE_EQUAL(bVar0, "train_brain_north") || STRINGS_ARE_EQUAL(bVar0, "train_brain_mexico")) || STRINGS_ARE_EQUAL(bVar0, "train_brain_frontier"))
	{
		TERMINATE_THIS_SCRIPT();
	}
	if (!IS_GRINGO_COMPONENT_VALID(bScriptParam_0))
	{
		LOG_ERROR("AmbTrain: Attempting to attach a gringo brain that has no valid gringo base.");
		TERMINATE_THIS_SCRIPT();
	}
	fVar1 = 0.0f;
	while ((4294967295 != Global_34207 || 4294967295 != Global_34206) && !IS_EXITFLAG_SET())
	{
		Function_76();
	}
	Function_75(98304);
	iLocal_7 = 0;
	Function_74(&Global_34208 + 12);
	Function_74(&Global_34208 + 724);
	Global_34208 = 0;
	while ((IS_GRINGO_ACTIVE() && !IS_EXITFLAG_SET()) && !Global_34207 != 4294967295)
	{
		GRINGO_HAS_PENDING_MESSAGE();
		if ((!HUD_IS_FADED() || !(&Global_34208 + 12)->f_692) || (&Global_34208 + 12)->f_348)
		{
			Function_18(&Global_34208 + 12);
		}
		if ((!HUD_IS_FADED() || !(&Global_34208 + 724)->f_692) || (&Global_34208 + 724)->f_348)
		{
			Function_18(&Global_34208 + 724);
		}
		Function_76();
	}
	if (IS_VOLUME_VALID(bLocal_6))
	{
		DESTROY_VOLUME(bLocal_6);
	}
	if (IS_BLIP_VALID((&Global_34208 + 12)->f_680))
	{
		REMOVE_BLIP((&Global_34208 + 12)->f_680);
	}
	if (IS_BLIP_VALID((&Global_34208 + 724)->f_680))
	{
		REMOVE_BLIP((&Global_34208 + 724)->f_680);
	}
	Function_5(&Global_34208 + 12);
	Function_5(&Global_34208 + 724);
	Function_1(&Global_34208 + 12 + 144);
	Function_1(&Global_34208 + 724 + 144);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x1EE / 494
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

void Function_2(var uParam0, int iParam1) //Position: 0x214 / 532
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

void Function_3(var uParam0, int iParam1) //Position: 0x342 / 834
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x35C / 860
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x379 / 889
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= 14)
	{
		if (IS_ACTOR_VALID(StackVal))
		{
			TASK_CLEAR(StackVal);
			if (StackVal != Function_15(4294967295, *iParam0))
			{
				RELEASE_ACTOR(StackVal);
			}
			else
			{
				RELEASE_ACTOR_AS_AMBIENT(StackVal);
			}
		}
		Function_14(iParam0, bVar0, 1);
		bVar0++;
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		TASK_CLEAR(StackVal);
		if (StackVal != Function_15(4294967295, *iParam0))
		{
			RELEASE_ACTOR(StackVal);
		}
		else
		{
			RELEASE_ACTOR_AS_AMBIENT(StackVal);
		}
	}
	Function_14(iParam0, 4294967295, 1);
	if (*iParam0 != 4294967295)
	{
		if (TRAIN_GET_NUM_CARS(*iParam0) >= 0)
		{
			Function_11(*iParam0);
		}
	}
	iParam0->f_376 = 0;
	iParam0->f_116 = 0;
	iParam0->f_684 = "";
	if ((*iParam0 == 4294967295 && ((*iParam0 != Global_34206 && Function_7(41, 0)) || *iParam0 != Global_34207)) && !iParam0->f_348)
	{
		TRAIN_SET_MAX_DECEL(*iParam0, -0,75f);
		TRAIN_SET_TARGET_SPEED(*iParam0, 10.0f);
		TRAIN_SET_PARTICLE_EFFECTS_ENABLED(*iParam0, 4294967295, 1);
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_668))
	{
		RELEASE_LAYOUT_REF(iParam0->f_668);
	}
	iParam0->f_120 = 0;
	Function_6(iParam0 + 104);
	iParam0->f_688 = 0;
	return;
}

void Function_6(int iParam0) //Position: 0x4C9 / 1225
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_7(int iParam0, bool bParam1) //Position: 0x4DD / 1245
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
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_8(int iParam0) //Position: 0x51A / 1306
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_9(int iParam0) //Position: 0x531 / 1329
{
	if (!Function_10(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_10(int iParam0) //Position: 0x54B / 1355
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_11(bool bParam0) //Position: 0x561 / 1377
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	char* cVar7[32];
	
	if (!TRAIN_GET_NUM_CARS(bParam0) < 0)
	{
		LOG_ERROR("Trying to create engineer and train cars don't exist");
		return "";
	}
	bVar1 = TRAIN_GET_CAR(bParam0, false);
	bVar4 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(bVar1, "myLayoutObj"));
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		bVar2 = CREATE_OBJECT_ITERATOR(bVar4);
		ITERATE_ON_OBJECT_TYPE(bVar2, 12);
		bVar3 = START_OBJECT_ITERATOR(bVar2);
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar6 = GET_OBJECT_NAME(bVar3);
			if (STRING_CONTAINS_STRING(bVar6, "train_engineer"))
			{
				bVar0 = GET_GRINGO_FROM_OBJECT(bVar3);
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
		if (IS_ITERATOR_VALID(bVar2))
		{
			DESTROY_ITERATOR(bVar2);
		}
		if (!IS_GRINGO_VALID(bVar0))
		{
			return "";
		}
		strcpy(&cVar7, "AMB_ENG", 32);
		cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(&cVar7) };
		bVar5 = CREATE_ACTOR_IN_LAYOUT(bVar4, &cVar7, 201, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		SET_ACTOR_FACTION(bVar5, 21);
		TASK_STAND_STILL(bVar5, -1.0f, 0, 0);
		TASK_PRIORITY_SET(bVar5, true);
		SNAP_ACTOR_TO_GRINGO(bVar5, GET_OBJECT_FROM_GRINGO(bVar0), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(bVar5, bVar0, "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET(bVar5, true);
	}
	return bVar5;
}

struct<32> Function_12(bool bParam0) //Position: 0x6B1 / 1713
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_13(char* cParam0, char* cParam1, char* cParam2) //Position: 0x71B / 1819
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_14(int iParam0, bool bParam1, bool bParam2) //Position: 0x73A / 1850
{
	if (bParam1 == 4294967295)
	{
		if (!StackVal != 4294967295)
		{
			STREAMING_EVICT_ACTOR(StackVal, 4294967295);
			iParam0->f_624 = 0;
		}
		if (StackVal && IS_ACTOR_VALID(bParam2))
		{
			DESTROY_ACTOR(StackVal);
		}
		(iParam0 + 624)->f_4 = 4294967295;
		(iParam0 + 624)->f_8 = "";
		(iParam0 + 624)->f_12 = 4294967295;
	}
	else
	{
		if (!StackVal != 4294967295)
		{
			STREAMING_EVICT_ACTOR(StackVal, 4294967295);
			(*iParam0 + 380)[bParam14] = 0;
		}
		if (StackVal && IS_ACTOR_VALID(bParam2))
		{
			DESTROY_ACTOR(StackVal);
		}
		(iParam0 + 380[bParam14])->f_4 = 4294967295;
		(iParam0 + 380[bParam14])->f_8 = "";
		(iParam0 + 380[bParam14])->f_12 = 4294967295;
	}
	return;
}

int Function_15(bool bParam0, int iParam1) //Position: 0x80B / 2059
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	bVar2 = Function_16(bParam0);
	if (IS_ACTOR_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= 14)
		{
			bVar1 = GET_ACTOR_IN_VEHICLE_SEAT(bVar2, bVar0);
			if (iParam1 == bVar1)
			{
				return bVar0;
			}
			bVar0++;
		}
	}
	return 4294967295;
}

var Function_16(bool bParam0) //Position: 0x84A / 2122
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
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
			bVar2 = TRAIN_GET_CAR(bParam0, bVar0);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (Function_17(bVar2) != 1165 || Function_17(bVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bParam0, bVar0));
				}
			}
			bVar0++;
		}
	}
	return "";
}

int Function_17(bool bParam0) //Position: 0x8B2 / 2226
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

void Function_18(int iParam0) //Position: 0x8CD / 2253
{
	bool bVar0;
	
	iParam0->f_692 = 1;
	if (iParam0->f_348)
	{
		if (!Function_73(*iParam0) != 4)
		{
			Function_72(*iParam0, 3);
		}
	}
	else if (Function_73(*iParam0) == 4)
	{
		Function_72(*iParam0, 5);
	}
	Function_69(iParam0);
	Function_52(iParam0);
	if (!Function_50(*iParam0))
	{
		if (TRAIN_GET_LOD_LEVEL(*iParam0) != 1 && TRAIN_GET_NUM_CARS(*iParam0) < 0)
		{
			iParam0->f_660 = 0;
			if (!IS_ACTOR_VALID(iParam0->f_684))
			{
				if (!iParam0->f_116 && IS_GRINGO_VALID(Function_49(*iParam0)))
				{
					bVar0 = Function_48(*iParam0);
					if (IS_ACTOR_VALID(bVar0))
					{
						iParam0->f_684 = bVar0;
					}
				}
			}
		}
		else
		{
			iParam0->f_660 = 5000;
		}
	}
	Function_20(iParam0);
	Function_19(iParam0, &bLocal_6);
	if (iParam0->f_688)
	{
		Function_5(iParam0);
	}
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0x990 / 2448
{
	if (Global_34208 == 0)
	{
		return;
	}
	if (!IS_VOLUME_VALID(*iParam1))
	{
		return;
	}
	if ((Global_34207 != *iParam0 && Global_34208 != 2) || (Global_34206 != *iParam0 && Global_34208 != 1))
	{
		return;
	}
	if (IS_POINT_IN_VOLUME(*(iParam0 + 4), *iParam1))
	{
		Global_34208 = 0;
		DESTROY_VOLUME(*iParam1);
	}
	return;
}

int Function_20(int iParam0) //Position: 0x9E1 / 2529
{
	int iVar0;
	
	Function_46(iParam0);
	TRAIN_GET_POSITION(*iParam0, iParam0 + 4);
	iVar0 = Function_73(*iParam0);
	switch (iVar0)
	{
		case 0x00000000:
			Function_42(iParam0);
			break;
		
		case 0x00000001:
			Function_30(iParam0);
			break;
		
		case 0x00000002:
			Function_27(iParam0);
			break;
		
		case 0x00000003:
			Function_26(iParam0);
			break;
		
		case 0x00000004:
			iParam0->f_660 = 0;
			break;
		
		case 0x00000005:
			Function_21(iParam0);
			break;
	}
	if (IS_BLIP_VALID(iParam0->f_680))
	{
		SET_BLIP_POS(iParam0->f_680, iParam0 + 4);
	}
	return 1;
}

void Function_21(int iParam0) //Position: 0xA72 / 2674
{
	if (*iParam0 != Global_34206 && !Function_7(41, 0))
	{
		return;
	}
	iParam0->f_16 = Function_25(iParam0);
	Function_22(iParam0);
	return;
}

void Function_22(int iParam0) //Position: 0xA99 / 2713
{
	iParam0->f_16++;
	if ((*iParam0 + 20)[iParam0->f_162] == 4294967295)
	{
		iParam0->f_16 = 0;
	}
	if (StackVal)
	{
		Function_23((*iParam0 + 20)[iParam0->f_162], 0, iParam0 + 92);
	}
	else
	{
		Function_23((*iParam0 + 20)[iParam0->f_162], 1, iParam0 + 92);
	}
	TRAIN_SET_TARGET_POS(*iParam0, iParam0 + 92);
	TRAIN_SET_TARGET_SPEED(*iParam0, 10.0f);
	Function_72(*iParam0, 2);
	TRAIN_PLAY_WHISTLE_SEQUENCE(*iParam0, 1);
	iParam0->f_640 = 0;
	return;
}

void Function_23(bool bParam0, bool bParam1, int iParam2) //Position: 0xB1B / 2843
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_GRINGO_COMPONENT_VALID(Global_34208.f_1436))
	{
		LOG_ERROR("gtAmbientTrainData.TrainBrainGringo is not valid. Train_Brain.sc probably did not execute.");
		return;
	}
	if ((bParam0 != 9 || bParam0 != 10) && (bParam1 == 0 && bParam1 == 1))
	{
		LOG_ERROR("Called TRNPRIVATE_GetStationVector() to get a board position with a junction as the station.");
		return;
	}
	switch (bParam1)
	{
		case 0x00000000:
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_NorthStopPos", 4, Global_34208.f_1436);
			break;
		
		case 0x00000002:
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_NorthBoardingPos", 4, Global_34208.f_1436);
			break;
		
		case 0x00000001:
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_SouthStopPos", 4, Global_34208.f_1436);
			break;
		
		case 0x00000003:
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_SouthBoardingPos", 4, Global_34208.f_1436);
			break;
		
		case 0x00000004:
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_PassengerSpawnPos1", 4, Global_34208.f_1436);
			break;
		
		case 0x00000005:
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_PassengerSpawnPos2", 4, Global_34208.f_1436);
			break;
		
		case 0x00000006:
			bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Station_PassengerSpawnPos3", 4, Global_34208.f_1436);
			break;
	}
	bVar1 = GRINGO_GET_ATTRIBUTE(bVar0, bParam0);
	if (!GRINGO_GET_VECTOR_ATTR_BY_HANDLE(bVar1, iParam2))
	{
		Function_24();
		*iParam2 = { StackVal, StackVal, Function_24() };
	}
	return;
}

vector3 Function_24() //Position: 0xD7A / 3450
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_25(int iParam0) //Position: 0xD83 / 3459
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	iVar3 = 0;
	iVar4 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		if (!4294967295 != (*iParam0 + 20)[iVar32])
		{
			if (StackVal)
			{
				Function_23((*iParam0 + 20)[iVar32], 0, &vVar0);
			}
			else
			{
				Function_23((*iParam0 + 20)[iVar32], 1, &vVar0);
			}
			if (iVar3 == 0)
			{
				fVar5 = VDIST2(*(iParam0 + 4), vVar0);
			}
			else
			{
				fVar6 = VDIST2(*(iParam0 + 4), vVar0);
				if (fVar5 < fVar6)
				{
					fVar5 = fVar6;
					iVar4 = iVar3;
				}
			}
		}
		else
		{
			iVar3 = 8;
		}
		iVar3++;
	}
	return iVar4;
}

void Function_26(int iParam0) //Position: 0xE1C / 3612
{
	if (Global_34208 != 0)
	{
		if ((Global_34207 != *iParam0 && Global_34208 != 1) || (Global_34206 != *iParam0 && Global_34208 != 2))
		{
			Global_34208 = 0;
		}
	}
	TRAIN_SET_TARGET_SPEED(*iParam0, 0.0f);
	Function_6(iParam0 + 104);
	Function_72(*iParam0, 4);
	iParam0->f_660 = 0;
	return;
}

void Function_27(int iParam0) //Position: 0xE66 / 3686
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = VDIST(*(iParam0 + 4), *(iParam0 + 92));
	if (TRAIN_GET_LOD_LEVEL(*iParam0) != 1 && TRAIN_GET_NUM_CARS(*iParam0) < 0)
	{
		if ((!iParam0->f_116 && TRAIN_GET_VELOCITY(*iParam0) != 0.0f) && bVar1 >= 5.0f)
		{
			bVar0 = true;
		}
		if (bVar1 > 100.0f)
		{
			Function_29(iParam0);
		}
	}
	else if ((!iParam0->f_116 && TRAIN_GET_VELOCITY(*iParam0) != 0.0f) && bVar1 >= (5.0f * 4.0f))
	{
		bVar0 = true;
		Function_28(iParam0, (*iParam0 + 20)[iParam0->f_162]);
	}
	if (bVar0)
	{
		if (0 == Global_34208)
		{
			if ((*iParam0 + 20)[iParam0->f_162] == 9)
			{
				Global_34208 = 1;
				bLocal_6 = CREATE_VOLUME_IN_LAYOUT(Global_28841, "TrainMutexVolume_main", false, -1080,57f, 103,57f, 2102,64f, 0.0f, 0.0f, 0.0f, 75.0f, 75.0f, 75.0f);
				Function_22(iParam0);
				return;
			}
			if ((*iParam0 + 20)[iParam0->f_162] == 10)
			{
				Global_34208 = 2;
				bLocal_6 = CREATE_VOLUME_IN_LAYOUT(Global_28841, "TrainMutexVolume_north", false, -146,92f, 84,63f, 2527,99f, 0.0f, 0.0f, 0.0f, 75.0f, 75.0f, 75.0f);
				Function_22(iParam0);
				return;
			}
		}
		Function_72(*iParam0, 1);
	}
	if (iParam0->f_708)
	{
		SET_DEBUG_DRAW(1);
	}
	return;
}

int Function_28(int iParam0, int iParam1) //Position: 0xFC4 / 4036
{
	var uVar0;
	int iVar3;
	int iVar6;
	
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		if ((*iParam0 + 20)[iVar62] == 4294967295)
		{
			return 0;
		}
		if ((*iParam0 + 20)[iVar62] == iParam1)
		{
			if (StackVal)
			{
				Function_23((*iParam0 + 20)[iVar62], 0, &iVar3);
			}
			else
			{
				Function_23((*iParam0 + 20)[iVar62], 1, &iVar3);
			}
			iParam0->f_16 = iVar6;
			iVar6 = 7;
		}
		iVar6++;
	}
	if (StackVal)
	{
		UNK_0x44986367(&uVar0, 0.0f);
	}
	else
	{
		UNK_0x44986367(&uVar0, 180.0f);
	}
	TRAIN_SET_POSITION_DIRECTION(*iParam0, &iVar3, &uVar0);
	Function_72(*iParam0, 1);
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(*iParam0, 4294967295, 0);
	TRAIN_SET_TARGET_SPEED(*iParam0, 0.0f);
	return 1;
}

void Function_29(int iParam0) //Position: 0x1075 / 4213
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(StackVal) || iParam0->f_640)
	{
		return;
	}
	switch ((*iParam0 + 20)[iParam0->f_162])
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
	SAY_SINGLE_LINE_CONTEXT(StackVal, bVar0, Global_34573, 1, 0, 3, 4294967295, 4294967295, 0, 1);
	PLAY_SOUND_FROM_OBJECT(TRAIN_GET_CAR(*iParam0, false), "TRAIN_BELL_MASTER");
	TRAIN_PLAY_WHISTLE_SEQUENCE(*iParam0, 3);
	iParam0->f_640 = 1;
	return;
}

void Function_30(int iParam0) //Position: 0x11E1 / 4577
{
	var uVar0;
	int iVar3;
	
	if (TRAIN_GET_VELOCITY(*iParam0) == 0.0f)
	{
		TRAIN_SET_TARGET_SPEED(*iParam0, 0.0f);
		if (StackVal)
		{
			Function_23((*iParam0 + 20)[iParam0->f_162], 0, &iVar3);
			UNK_0x44986367(&uVar0, 0.0f);
		}
		else
		{
			Function_23((*iParam0 + 20)[iParam0->f_162], 1, &iVar3);
			UNK_0x44986367(&uVar0, 180.0f);
		}
		TRAIN_SET_POSITION_DIRECTION(*iParam0, &iVar3, &uVar0);
	}
	if (*iParam0 == Global_34206)
	{
		if (!Function_7(41, 0))
		{
			return;
		}
		iParam0->f_620 = 1;
	}
	if (Global_34208 != 0)
	{
		if (((*iParam0 != Global_34207 && (*iParam0 + 20)[iParam0->f_162] != 9) && Global_34208 != 2) || ((*iParam0 != Global_34206 && (*iParam0 + 20)[iParam0->f_162] != 10) && Global_34208 != 1))
		{
			return;
		}
	}
	if ((*iParam0 + 20)[iParam0->f_162] != 5 && ((Function_7(26, 0) && !Function_7(29, 0)) || (((Function_7(29, 0) && Global_34207 == 0) && Global_34206 == 0) && TRAIN_IS_VALID(0))))
	{
		iLocal_7 = 1;
		return;
	}
	if ((*iParam0 + 20)[iParam0->f_162] != 4 && (((Function_7(37, 0) && Global_34207 == 0) && Global_34206 == 0) && TRAIN_IS_VALID(0)))
	{
		iLocal_7 = 1;
		return;
	}
	iLocal_7 = 0;
	if ((7 != iParam0->f_376 || 0 != iParam0->f_376) || 2 != iParam0->f_376)
	{
		if (!Function_41(iParam0 + 104))
		{
			Function_40(iParam0 + 104);
			Function_36(iParam0 + 104);
			if (TRAIN_GET_LOD_LEVEL(*iParam0) != 1 && TRAIN_GET_NUM_CARS(*iParam0) < 0)
			{
				PLAY_SOUND_FROM_OBJECT(TRAIN_GET_CAR(*iParam0, false), "TRAIN_BELL_ALL_A_BOARD_MASTER");
			}
			if (IS_ACTOR_VALID(StackVal))
			{
				SAY_SINGLE_LINE_CONTEXT(StackVal, 319, Global_34573, 0, 0, 3, 4294967295, 4294967295, 0, 1);
			}
		}
		if (!iParam0->f_644 && Function_33(iParam0 + 104) < 16.0f)
		{
			iParam0->f_644 = 1;
			if (TRAIN_GET_LOD_LEVEL(*iParam0) != 1 && TRAIN_GET_NUM_CARS(*iParam0) < 0)
			{
				PLAY_SOUND_FROM_OBJECT(TRAIN_GET_CAR(*iParam0, false), "TRAIN_BELL_DEPART_MASTER");
			}
		}
		if (Function_31(iParam0 + 104, 18.0f))
		{
			iParam0->f_644 = 0;
			Function_6(iParam0 + 104);
			Function_22(iParam0);
		}
	}
	return;
}

bool Function_31(int iParam0, int iParam1) //Position: 0x1417 / 5143
{
	if (Function_32(iParam0, iParam1))
	{
		Function_6(iParam0);
		return 1;
	}
	return 0;
}

bool Function_32(int iParam0, float fParam1) //Position: 0x142F / 5167
{
	if (Function_41(iParam0))
	{
		if (Function_33(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_33(int iParam0) //Position: 0x144B / 5195
{
	if (Function_41(iParam0))
	{
		if (Function_34(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_34(int iParam0) //Position: 0x1513 / 5395
{
	return Function_35(*iParam0, 2);
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1520 / 5408
{
	return (uParam0 && iParam1) == 0;
}

void Function_36(int iParam0) //Position: 0x152D / 5421
{
	if (!Function_41(iParam0))
	{
		Function_37(iParam0, 0.0f);
	}
	return;
}

void Function_37(var uParam0, float fParam1) //Position: 0x1542 / 5442
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_39(uParam0, 1);
	Function_38(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x1563 / 5475
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_39(var uParam0, int iParam1) //Position: 0x1576 / 5494
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_40(int iParam0) //Position: 0x1585 / 5509
{
	Function_37(iParam0, 0.0f);
	return;
}

bool Function_41(int iParam0) //Position: 0x1591 / 5521
{
	return Function_35(*iParam0, 1);
}

void Function_42(int iParam0) //Position: 0x159E / 5534
{
	Function_44(iParam0);
	Function_43(iParam0);
	Function_40(iParam0 + 104);
	Global_34208 = 0;
	return;
}

void Function_43(int iParam0) //Position: 0x15B9 / 5561
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	GET_POSITION(Global_34573, &vVar0);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		if ((*iParam0 + 20)[iVar62] == 4294967295)
		{
			LOG_ERROR("Could not find an appropriate station to warp train to");
			iParam0->f_16 = 0;
			iVar6 = 7;
		}
		else if (!(*iParam0 + 20)[iVar62] != 9 || !(*iParam0 + 20)[iVar62] != 10)
		{
			if (StackVal)
			{
				Function_23((*iParam0 + 20)[iVar62], 0, &vVar3);
			}
			else
			{
				Function_23((*iParam0 + 20)[iVar62], 1, &vVar3);
			}
			if (VDIST(vVar0, vVar3) <= 512.0f)
			{
				iParam0->f_16 = iVar6;
				iVar6 = 7;
			}
		}
		iVar6++;
	}
	if (StackVal)
	{
		UNK_0x44986367(&vVar0, 0.0f);
	}
	else
	{
		UNK_0x44986367(&vVar0, 180.0f);
	}
	TRAIN_SET_POSITION_DIRECTION(*iParam0, &vVar3, &vVar0);
	Function_72(*iParam0, 1);
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(*iParam0, 4294967295, 0);
	TRAIN_SET_TARGET_SPEED(*iParam0, 0.0f);
	return;
}

void Function_44(int iParam0) //Position: 0x16D6 / 5846
{
	int iVar0;
	
	if (*iParam0 == Global_34207)
	{
		if (Function_7(26, 0) || Function_7(30, 0))
		{
			iParam0->f_88 = 1;
		}
		else
		{
			iParam0->f_88 = 0;
		}
	}
	else if (*iParam0 == Global_34206)
	{
		iParam0->f_88 = 2;
	}
	switch (iParam0->f_88)
	{
		case 0x00000000:
			(*iParam0 + 20)[02] = 1;
			(iParam0 + 20[02])->f_4 = 0;
			(*iParam0 + 20)[12] = 2;
			(iParam0 + 20[12])->f_4 = 0;
			(*iParam0 + 20)[22] = 1;
			(iParam0 + 20[22])->f_4 = 1;
			(*iParam0 + 20)[32] = 0;
			(iParam0 + 20[32])->f_4 = 0;
			(*iParam0 + 20)[42] = 0;
			(iParam0 + 20[42])->f_4 = 1;
			iVar0 = 5;
			while (iVar0 < 7)
			{
				(*iParam0 + 20)[iVar02] = 4294967295;
				iVar0++;
			}
			if (!IS_BLIP_VALID(iParam0->f_680))
			{
				iParam0->f_680 = ADD_BLIP_FOR_COORD(iParam0 + 4, 427, 0.0f, 2, 4);
				UNK_0xFF3DB575(iParam0->f_680, 1);
			}
			TRAIN_SET_JUNCTION_STATE(*iParam0, 8, 1);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 11, 0);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 6, 1);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 3, 0);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 13, 0);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 1, 0);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 12, 1);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 4, 0);
			break;
		
		case 0x00000001:
			(*iParam0 + 20)[02] = 1;
			(iParam0 + 20[02])->f_4 = 0;
			(*iParam0 + 20)[12] = 2;
			(iParam0 + 20[12])->f_4 = 0;
			(*iParam0 + 20)[22] = 3;
			(iParam0 + 20[22])->f_4 = 0;
			(*iParam0 + 20)[32] = 4;
			(iParam0 + 20[32])->f_4 = 1;
			(*iParam0 + 20)[42] = 5;
			(iParam0 + 20[42])->f_4 = 1;
			(*iParam0 + 20)[52] = 9;
			(iParam0 + 20[52])->f_4 = 1;
			(*iParam0 + 20)[62] = 0;
			(iParam0 + 20[62])->f_4 = 1;
			iVar0 = 7;
			while (iVar0 < 7)
			{
				(*iParam0 + 20)[iVar02] = 4294967295;
				iVar0++;
			}
			if (!IS_BLIP_VALID(iParam0->f_680))
			{
				iParam0->f_680 = ADD_BLIP_FOR_COORD(iParam0 + 4, 427, 0.0f, 2, 0);
				UNK_0xFF3DB575(iParam0->f_680, 1);
			}
			TRAIN_SET_JUNCTION_STATE(*iParam0, 8, 1);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 11, 1);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 2, 1);
			TRAIN_SET_JUNCTION_STATE(*iParam0, 4, 0);
			break;
		
		case 0x00000002:
			(*iParam0 + 20)[02] = 7;
			(iParam0 + 20[02])->f_4 = 1;
			(*iParam0 + 20)[12] = 8;
			(iParam0 + 20[12])->f_4 = 0;
			(*iParam0 + 20)[22] = 10;
			(iParam0 + 20[22])->f_4 = 0;
			(*iParam0 + 20)[32] = 0;
			(iParam0 + 20[32])->f_4 = 0;
			(*iParam0 + 20)[42] = 6;
			(iParam0 + 20[42])->f_4 = 1;
			iVar0 = 5;
			while (iVar0 < 7)
			{
				(*iParam0 + 20)[iVar02] = 4294967295;
				iVar0++;
			}
			if (Function_7(41, 0))
			{
				Function_45(*iParam0, 1);
				if (!IS_BLIP_VALID(iParam0->f_680))
				{
					iParam0->f_680 = ADD_BLIP_FOR_COORD(iParam0 + 4, 428, 0.0f, 2, 4);
					UNK_0xFF3DB575(iParam0->f_680, 1);
				}
				TRAIN_SET_JUNCTION_STATE(*iParam0, 5, 1);
				TRAIN_SET_JUNCTION_STATE(*iParam0, 1, 0);
				TRAIN_SET_JUNCTION_STATE(*iParam0, 12, 0);
			}
			break;
	}
	return;
}

void Function_45(bool bParam0, int iParam1) //Position: 0x19D0 / 6608
{
	bool bVar0;
	
	if (TRAIN_GET_NUM_CARS(bParam0) >= 0)
	{
		bVar0 = Function_16(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			ENABLE_VEHICLE_SEAT(bVar0, 14, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 15, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 16, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 17, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 18, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 19, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 20, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 21, iParam1);
		}
	}
	if (Global_34207 == bParam0)
	{
		(&Global_34208 + 12)->f_620 = iParam1;
	}
	else if (Global_34206 == bParam0)
	{
		(&Global_34208 + 724)->f_620 = iParam1;
	}
	return;
}

void Function_46(int iParam0) //Position: 0x1A66 / 6758
{
	var uVar0;
	int iVar3;
	int iVar6;
	vector3 vVar7;
	var uVar10;
	int iVar13;
	
	if (iParam0->f_700)
	{
		TRAIN_SET_MAX_DECEL(*iParam0, -10.0f);
		TRAIN_SET_TARGET_SPEED(*iParam0, 0.0f);
		iParam0->f_16 = iParam0->f_696;
		if (StackVal)
		{
			Function_23((*iParam0 + 20)[iParam0->f_162], 0, &iVar3);
		}
		else
		{
			Function_23((*iParam0 + 20)[iParam0->f_162], 1, &iVar3);
		}
		if (StackVal)
		{
			UNK_0x44986367(&uVar0, 0.0f);
		}
		else
		{
			UNK_0x44986367(&uVar0, 180.0f);
		}
		TRAIN_SET_POSITION_DIRECTION(*iParam0, &iVar3, &uVar0);
		Function_72(*iParam0, 1);
		iParam0->f_700 = 0;
	}
	if (iParam0->f_704)
	{
		Global_34208 = 0;
		iVar6 = Function_9(26);
		Global_13172[iVar611].f_4 = 4;
		iVar6 = Function_9(41);
		Global_13172[iVar611].f_4 = 4;
		Function_44(&Global_34208 + 12);
		Function_44(&Global_34208 + 724);
		iVar13 = 0;
		if (Function_47())
		{
			vVar7 = { 9,859f, 94,999f, 2712,03f };
		}
		else
		{
			vVar7 = { (9,859f + 150.0f), 94,999f, (2712,03f + 150.0f) };
		}
		UNK_0x44986367(&uVar10, 0.0f);
		TRAIN_SET_POSITION_DIRECTION(Global_34208.f_12, &vVar7, &uVar10);
		iVar13 = 0;
		while (iVar13 < 7)
		{
			if ((*&Global_34208 + 12 + 20)[iVar132] == 5)
			{
				(&Global_34208 + 12)->f_16 = iVar13;
			}
			iVar13++;
		}
		Function_22(&Global_34208 + 12);
		vVar7 = { -683,725f, 104,199f, 2122,261f };
		UNK_0x44986367(&uVar10, 180.0f);
		TRAIN_SET_POSITION_DIRECTION(Global_34208.f_724, &vVar7, &uVar10);
		iVar13 = 0;
		while (iVar13 < 7)
		{
			if ((*&Global_34208 + 724 + 20)[iVar132] == 8)
			{
				(&Global_34208 + 724)->f_16 = iVar13;
			}
			iVar13++;
		}
		Function_22(&Global_34208 + 724);
		SCRIPT_BREAKPOINT("Trains are setup for collsion");
		iParam0->f_704 = 0;
	}
	return;
}

bool Function_47() //Position: 0x1C44 / 7236
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

var Function_48(bool bParam0) //Position: 0x1C57 / 7255
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = "";
	bVar1 = TRAIN_GET_CAR(bParam0, false);
	if (IS_OBJECT_VALID(bVar1))
	{
		bVar0 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(bVar1, "myLayoutObj"));
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			return "";
		}
		bVar2 = CREATE_OBJECT_ITERATOR(bVar0);
		ITERATE_ON_OBJECT_TYPE(bVar2, 4294967295);
		bVar3 = START_OBJECT_ITERATOR(bVar2);
		while (IS_OBJECT_VALID(bVar3))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar3), "amb_eng"))
			{
				DESTROY_ITERATOR(bVar2);
				return GET_ACTOR_FROM_OBJECT(bVar3);
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
		DESTROY_ITERATOR(bVar2);
	}
	return "";
}

var Function_49(bool bParam0) //Position: 0x1CE2 / 7394
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!TRAIN_GET_NUM_CARS(bParam0) < 0)
	{
		return "";
	}
	bVar1 = TRAIN_GET_CAR(bParam0, false);
	bVar4 = GET_LAYOUT_FROM_OBJECT(DECOR_GET_OBJECT(bVar1, "myLayoutObj"));
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		bVar2 = CREATE_OBJECT_ITERATOR(bVar4);
		ITERATE_ON_OBJECT_TYPE(bVar2, 12);
		bVar3 = START_OBJECT_ITERATOR(bVar2);
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar5 = GET_OBJECT_NAME(bVar3);
			if (STRING_CONTAINS_STRING(bVar5, "train_engineer"))
			{
				bVar0 = GET_GRINGO_FROM_OBJECT(bVar3);
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
		if (IS_ITERATOR_VALID(bVar2))
		{
			DESTROY_ITERATOR(bVar2);
		}
		if (IS_GRINGO_VALID(bVar0))
		{
			return bVar0;
		}
		return "";
	}
	return "";
}

bool Function_50(bool bParam0) //Position: 0x1D8C / 7564
{
	if (!Function_51(bParam0, "TRAIN_HAS_BEEN_STOLEN"))
	{
		return 0;
	}
	if (!TRAIN_GET_NUM_CARS(bParam0) < 0)
	{
		return 0;
	}
	if (bParam0 == Global_34207)
	{
		return (&Global_34208 + 12)->f_348;
	}
	if (bParam0 == Global_34206)
	{
		return (&Global_34208 + 724)->f_348;
	}
	return 0;
}

bool Function_51(int iParam0, int iParam1) //Position: 0x1DE9 / 7657
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_52(int iParam0) //Position: 0x1DF8 / 7672
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	bool bVar12;
	bool bVar13;
	vector3 vVar14;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	vector3 vVar23;
	int iVar26;
	int iVar27;
	vector3 vVar28;
	
	bVar0 = Function_16(*iParam0);
	if ((!Function_68(32768) || iParam0->f_348) || !IS_ACTOR_VALID(bVar0))
	{
		if (iParam0->f_376 != 0)
		{
			iParam0->f_376 = 8;
		}
		else
		{
			return;
		}
	}
	bVar1 = false;
	bVar6 = iParam0->f_376;
	switch (bVar6)
	{
		case 0x00000000:
			if ((((!iLocal_7 || *iParam0 != Global_34206) && TRAIN_GET_LOD_LEVEL(*iParam0) != 1) && TRAIN_GET_NUM_CARS(*iParam0) < 0) && Function_67(Global_30750[1], 0, 4294967295, 0))
			{
				if (!IS_LAYOUTREF_VALID(iParam0->f_668))
				{
					DESTROY_LAYOUT(iParam0->f_668);
					if (*iParam0 == Global_34207)
					{
						iParam0->f_668 = CREATE_LAYOUT("AmbientTrainPassengerLayout");
					}
					else
					{
						iParam0->f_668 = CREATE_LAYOUT("NorthTrainPassengerLayout");
					}
				}
				bVar1 = false;
				bVar1 = false;
				while (bVar1 <= 3)
				{
					(iParam0 + 380[bVar14])->f_4 = Function_65(iParam0);
					STREAMING_REQUEST_ACTOR(StackVal, true, false);
					(*iParam0 + 380)[bVar14] = 1;
					bVar1++;
				}
				switch ((*iParam0 + 20)[iParam0->f_162])
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
						(iParam0 + 624)->f_4 = 193;
						break;
					
					case 0x00000003:
					case 0x00000004:
					case 0x00000005:
						(iParam0 + 624)->f_4 = 310;
						break;
				}
				STREAMING_REQUEST_ACTOR(StackVal, true, false);
				iParam0->f_624 = 1;
				iParam0->f_376 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_64(iParam0))
			{
				bVar1 = false;
				bVar1 = false;
				while (bVar1 <= 3)
				{
					vVar3.x = (vVar3.x + 0,25f);
					(iParam0 + 380[bVar14])->f_8 = CREATE_ACTOR_IN_LAYOUT(StackVal, iParam0->f_668, Function_63(), vVar3, 1.0f, 0.0f, 0.0f);
					Function_61(iParam0 + 380[bVar14] + 8);
					(iParam0 + 380[bVar14])->f_12 = Function_60(iParam0);
					if (!SET_ACTOR_IN_VEHICLE(StackVal, bVar0, (iParam0 + 380[bVar14])->f_12))
					{
						LOG_ERROR("Train: TRNPASSENGERS_STREAMING Failed for whatever reason tying to SET_ACTOR_IN_VEHICLE(), maybe due to bad seat index.");
						Function_14(iParam0, bVar1, 0);
					}
					bVar1++;
				}
				(iParam0 + 624)->f_8 = CREATE_ACTOR_IN_LAYOUT(StackVal, iParam0->f_668, Function_63(), vVar3, 1.0f, 0.0f, 0.0f);
				Function_61(iParam0 + 624 + 8);
				(iParam0 + 624)->f_12 = 13;
				if (!SET_ACTOR_IN_VEHICLE(StackVal, bVar0, (iParam0 + 624)->f_12))
				{
					LOG_ERROR("Train: TRNPASSENGERS_STREAMING Failed for whatever reason tying to SET_ACTOR_IN_VEHICLE(), maybe due to bad seat index.");
					Function_14(iParam0, 4294967295, 0);
				}
				iParam0->f_376 = 2;
			}
			break;
		
		case 0x00000002:
			if (!iParam0->f_132)
			{
				iParam0->f_376 = 8;
			}
			else if ((Function_73(*iParam0) != 1 && 7 == iParam0->f_376) && !((*iParam0 + 20)[iParam0->f_162] != 9 || (*iParam0 + 20)[iParam0->f_162] != 10))
			{
				if (iParam0->f_620)
				{
					iParam0->f_376 = 3;
				}
				else
				{
					iParam0->f_376 = 7;
				}
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (TRAIN_GET_LOD_LEVEL(*iParam0) == 0)
			{
				iParam0->f_376 = 8;
			}
			bVar6 = iParam0->f_376;
			switch (bVar6)
			{
				case 0x00000003:
				case 0x00000004:
					if (IS_ACTORSET_VALID(iParam0->f_608))
					{
						DESTROY_ACTORSET(iParam0->f_608);
					}
					if (IS_ACTORSET_VALID(iParam0->f_612))
					{
						DESTROY_ACTORSET(iParam0->f_612);
					}
					iParam0->f_608 = CREATE_ACTORSET_IN_LAYOUT(iParam0->f_668, "NewTrainBoarders", 0);
					iParam0->f_612 = CREATE_ACTORSET_IN_LAYOUT(iParam0->f_668, "NewTrainDeparters", 0);
					if (iLocal_7)
					{
						iParam0->f_376 = 5;
					}
					else
					{
						bVar1 = false;
						iVar7 = 0;
						bVar1 = false;
						while (bVar1 <= 14)
						{
							if (!IS_ACTOR_VALID(StackVal) && !2 != iVar7)
							{
								(iParam0 + 380[bVar14])->f_4 = Function_65(iParam0);
								(iParam0 + 380[bVar14])->f_12 = 4294967286;
								STREAMING_REQUEST_ACTOR(StackVal, true, false);
								(*iParam0 + 380)[bVar14] = 1;
								iVar7++;
							}
							bVar1++;
						}
						iParam0->f_376 = 5;
					}
					break;
				
				case 0x00000005:
					if (Function_59(iParam0))
					{
						iVar11 = 0;
						bVar1 = false;
						bVar1 = false;
						while (bVar1 <= 14)
						{
							if (4294967286 == (iParam0 + 380[bVar14])->f_12)
							{
								iVar11++;
								switch (iVar11)
								{
									case 0x00000001:
									case 0x00000004:
										Function_23((*iParam0 + 20)[iParam0->f_162], 4, &vVar8);
										break;
									
									case 0x00000002:
									case 0x00000005:
										Function_23((*iParam0 + 20)[iParam0->f_162], 5, &vVar8);
										break;
									
									case 0x00000003:
									case 0x00000006:
										Function_23((*iParam0 + 20)[iParam0->f_162], 6, &vVar8);
										break;
									
									default:
										LOG_ERROR("We're spawning over 6 passengers to board train, should only be 3");
										break;
								}
								if (!WOULD_ACTOR_BE_VISIBLE(StackVal, &vVar8, 3212836864))
								{
									bVar12 = CREATE_ACTOR_IN_LAYOUT(StackVal, iParam0->f_668, Function_63(), vVar8, 1.0f, 0.0f, 0.0f);
									Function_61(&bVar12);
									if (IS_ACTOR_VALID(bVar12))
									{
										ADD_ACTORSET_MEMBER(iParam0->f_608, bVar12);
									}
								}
							}
							bVar1++;
						}
						bVar1 = false;
						iVar2 = GET_ACTORSET_SIZE(iParam0->f_608);
						bVar1 = false;
						while (bVar1 <= iVar2)
						{
							Function_58(iParam0, bVar1);
							bVar1++;
						}
						bVar1 = false;
						bVar1 = false;
						while (bVar1 <= 14)
						{
							if ((StackVal && IS_ACTOR_VALID((iVar2 == 0 || iLocal_7))) && !4294967286 != (iParam0 + 380[bVar14])->f_12)
							{
								Function_57(iParam0, bVar1, bVar1);
								iVar2 = (iVar2 - 1);
								WAIT(500);
							}
							else if (4294967286 == (iParam0 + 380[bVar14])->f_12)
							{
								(iParam0 + 380[bVar14])->f_12 = 4294967295;
							}
							bVar1++;
						}
						iParam0->f_376 = 6;
						Function_40(iParam0 + 104);
						Function_36(iParam0 + 104);
						iLocal_9 = 0;
						bLocal_10 = false;
					}
					break;
				
				case 0x00000006:
					iLocal_9++;
					iVar2 = GET_ACTORSET_SIZE(iParam0->f_608);
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= iVar2)
					{
						bVar13 = GET_ACTOR_FROM_ACTORSET(iParam0->f_608, bVar1);
						if (iLocal_9 == 10)
						{
							MEMORY_CLEAR_EVENTS(bVar13, 1);
						}
						if (!IS_ACTOR_ALIVE(bVar13))
						{
							REMOVE_ACTORSET_MEMBER(iParam0->f_608, bVar13);
							bVar1 = iVar2;
						}
						else
						{
							if (1 == GET_TASK_STATUS(bVar13, 1))
							{
								GET_POSITION(bVar13, &vVar3);
								Function_24();
								vVar14 = { StackVal, StackVal, Function_24() };
								Function_56(iParam0, &vVar14);
								if (VDIST(vVar3, vVar14) > 7.0f)
								{
									if (!Function_53(iParam0, bVar1, 4294967295))
									{
										LOG_ERROR("TRNPRIVATE_TaskActorGetOnTrain() failed, and returned false");
										REMOVE_ACTORSET_MEMBER(iParam0->f_608, bVar13);
										bVar1 = iVar2;
									}
								}
							}
							else
							{
								bVar17 = FLOOR(Function_33(iParam0 + 104));
								if ((bVar17 % 3) != 0 && bLocal_10 == bVar17)
								{
									bLocal_10 = bVar17;
									if (4 == GET_NTH_TASK_STATUS(bVar13, true))
									{
										iVar18 = Function_60(iParam0);
										if (IS_ACTOR_ON_TRAIN(bVar13, 0) && 4294967295 == iVar18)
										{
											TASK_CLEAR(bVar13);
											TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar13, bVar0, iVar18, 1, 0);
										}
									}
								}
							}
							if (bVar1 != iVar2)
							{
								iVar19 = Function_15(*iParam0, bVar13);
								if (4294967295 != iVar19)
								{
									iVar20 = 0;
									iVar20 = 0;
									while (iVar20 <= 14)
									{
										if (StackVal && !IS_ACTOR_VALID(StackVal) != GET_ACTOR_ENUM(bVar13))
										{
											(*iParam0 + 380)[iVar204] = 1;
											(iParam0 + 380[iVar204])->f_4 = GET_ACTOR_ENUM(bVar13);
											(iParam0 + 380[iVar204])->f_8 = bVar13;
											(iParam0 + 380[iVar204])->f_12 = iVar19;
											REMOVE_ACTORSET_MEMBER(iParam0->f_608, bVar13);
											iVar20 = 14;
											bVar1 = iVar2;
										}
										iVar20++;
									}
								}
							}
						}
						bVar1++;
					}
					iVar2 = GET_ACTORSET_SIZE(iParam0->f_612);
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= iVar2)
					{
						bVar13 = GET_ACTOR_FROM_ACTORSET(iParam0->f_612, bVar1);
						if (iLocal_9 == 10)
						{
							MEMORY_CLEAR_EVENTS(bVar13, 1);
						}
						if (!IS_ACTOR_ALIVE(bVar13))
						{
							REMOVE_ACTORSET_MEMBER(iParam0->f_612, bVar13);
							bVar1 = iVar2;
						}
						else if (1 == GET_TASK_STATUS(bVar13, 10))
						{
							REMOVE_ACTORSET_MEMBER(iParam0->f_612, bVar13);
							bVar1 = iVar2;
						}
						bVar1++;
					}
					if (0 != GET_ACTORSET_SIZE(iParam0->f_608) && 0 != GET_ACTORSET_SIZE(iParam0->f_612))
					{
						Function_6(iParam0 + 104);
						iParam0->f_376 = 7;
					}
					else if (Function_31(iParam0 + 104, 75.0f))
					{
						while (GET_ACTORSET_SIZE(iParam0->f_608) != 0)
						{
							bVar13 = GET_ACTOR_FROM_ACTORSET(iParam0->f_608, false);
							REMOVE_ACTORSET_MEMBER(iParam0->f_608, bVar13);
							iVar21 = Function_60(iParam0);
							if (IS_ACTOR_ON_TRAIN(bVar13, 0) && 4294967295 == iVar21)
							{
								TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar13, bVar0, iVar21, 2, 0);
								iVar22 = 0;
								iVar22 = 0;
								while (iVar22 <= 14)
								{
									if (!IS_ACTOR_VALID(StackVal))
									{
										(*iParam0 + 380)[iVar224] = 1;
										(iParam0 + 380[iVar224])->f_4 = GET_ACTOR_ENUM(bVar13);
										(iParam0 + 380[iVar224])->f_8 = bVar13;
										(iParam0 + 380[iVar224])->f_12 = iVar21;
										iVar22 = 14;
									}
									iVar22++;
								}
							}
							else
							{
								Function_24();
								vVar23 = { StackVal, StackVal, Function_24() };
								Function_23((*iParam0 + 20)[iParam0->f_162], 4, &vVar23);
								TASK_GO_TO_COORD(bVar13, &vVar23, true);
								RELEASE_ACTOR_AS_AMBIENT(bVar13);
							}
						}
						while (GET_ACTORSET_SIZE(iParam0->f_612) != 0)
						{
							bVar13 = GET_ACTOR_FROM_ACTORSET(iParam0->f_612, false);
							REMOVE_ACTORSET_MEMBER(iParam0->f_612, bVar13);
							iVar26 = Function_60(iParam0);
							if (IS_ACTOR_ON_TRAIN(bVar13, 0) && 4294967295 == iVar26)
							{
								TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar13, bVar0, iVar26, 2, 0);
								iVar27 = 0;
								iVar27 = 0;
								while (iVar27 <= 14)
								{
									if (!IS_ACTOR_VALID(StackVal))
									{
										(*iParam0 + 380)[iVar274] = 1;
										(iParam0 + 380[iVar274])->f_4 = GET_ACTOR_ENUM(bVar13);
										(iParam0 + 380[iVar274])->f_8 = bVar13;
										(iParam0 + 380[iVar274])->f_12 = iVar26;
										iVar27 = 14;
									}
									iVar27++;
								}
							}
							else
							{
								Function_24();
								vVar28 = { StackVal, StackVal, Function_24() };
								Function_23((*iParam0 + 20)[iParam0->f_162], 4, &vVar28);
								TASK_GO_TO_COORD(bVar13, &vVar28, true);
								RELEASE_ACTOR_AS_AMBIENT(bVar13);
							}
						}
					}
					if (iLocal_9 == 10)
					{
						iLocal_9 = 0;
					}
					break;
				
				case 0x00000007:
					if (IS_ACTORSET_VALID(iParam0->f_608))
					{
						DESTROY_ACTORSET(iParam0->f_608);
					}
					if (IS_ACTORSET_VALID(iParam0->f_612))
					{
						DESTROY_ACTORSET(iParam0->f_612);
					}
					if (IS_VOLUME_VALID(iParam0->f_664))
					{
						DESTROY_VOLUME(iParam0->f_664);
					}
					break;
			}
			if (!1 != Function_73(*iParam0))
			{
				iParam0->f_376 = 2;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTORSET_VALID(iParam0->f_608))
			{
				DESTROY_ACTORSET(iParam0->f_608);
			}
			if (IS_ACTORSET_VALID(iParam0->f_612))
			{
				DESTROY_ACTORSET(iParam0->f_612);
			}
			if (IS_VOLUME_VALID(iParam0->f_664))
			{
				DESTROY_VOLUME(iParam0->f_664);
			}
			bVar1 = false;
			bVar1 = false;
			while (bVar1 <= 14)
			{
				Function_14(iParam0, bVar1, 0);
				bVar1++;
			}
			Function_14(iParam0, 4294967295, 0);
			if (IS_LAYOUTREF_VALID(iParam0->f_668))
			{
				RELEASE_LAYOUT_REF(iParam0->f_668);
			}
			iParam0->f_376 = 0;
			break;
	}
	return;
}

bool Function_53(int iParam0, bool bParam1, int iParam2) //Position: 0x2A86 / 10886
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar6;
	
	if (!TRAIN_GET_NUM_CARS(*iParam0) < 0)
	{
		LOG_ERROR("TRNPRIVATE_TaskActorGetOnTrain() was called when the train was not in high LOD");
		return 0;
	}
	bVar0 = Function_16(*iParam0);
	bVar1 = GET_ACTOR_FROM_ACTORSET(iParam0->f_608, bParam1);
	if (iParam2 == 4294967295)
	{
		iParam2 = Function_60(iParam0);
	}
	else if (iParam2 > 4294967295 || iParam2 <= 14)
	{
		LOG_ERROR("TRNPRIVATE_TaskActorGetOnTrain() was passed an invalid seat index");
		return 0;
	}
	if (iParam2 == 4294967295)
	{
		return 0;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 14)
	{
		if (StackVal == bVar1)
		{
			(iParam0 + 380[iVar24])->f_12 = iParam2;
		}
		iVar2++;
	}
	Function_56(iParam0, &iVar3);
	bVar6 = TASK_SEQUENCE_OPEN();
	if (!IS_ACTOR_ON_TRAIN(bVar1, 0))
	{
		if (Function_54(iParam0))
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar0, 14, 1, 0);
		}
		else
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar0, 15, 1, 0);
		}
	}
	TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar0, iParam2, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bVar1);
	TASK_SEQUENCE_PERFORM(bVar1, bVar6);
	TASK_PRIORITY_SET(bVar1, 2);
	TASK_SEQUENCE_RELEASE(bVar6, 1);
	return 1;
}

bool Function_54(int iParam0) //Position: 0x2BFE / 11262
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	var uVar10;
	
	bVar0 = Function_16(*iParam0);
	GET_POSITION(bVar0, &vVar1);
	if (StackVal)
	{
		Function_23((*iParam0 + 20)[iParam0->f_162], 2, &vVar4);
	}
	else
	{
		Function_23((*iParam0 + 20)[iParam0->f_162], 3, &vVar4);
	}
	Function_55(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4, &uVar7);
	VNORMALIZE(&uVar7);
	GET_ACTOR_AXIS(bVar0, &uVar10, 0);
	VNORMALIZE(&uVar10);
	if (VDOT(&uVar10, &uVar7) > 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2C77 / 11383
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_56(int iParam0, int iParam1) //Position: 0x2C9A / 11418
{
	if (StackVal)
	{
		Function_23((*iParam0 + 20)[iParam0->f_162], 2, iParam1);
	}
	else
	{
		Function_23((*iParam0 + 20)[iParam0->f_162], 3, iParam1);
	}
	return;
}

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x2CD2 / 11474
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar5;
	
	bVar0 = StackVal;
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	RELEASE_ACTOR_AS_AMBIENT(bVar0);
	bVar1 = Function_16(*iParam0);
	switch (bParam2)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000C:
			Function_23((*iParam0 + 20)[iParam0->f_162], 4, &iVar2);
			break;
		
		case 0x00000001:
		case 0x00000004:
		case 0x00000007:
		case 0x0000000A:
		case 0x0000000D:
			Function_23((*iParam0 + 20)[iParam0->f_162], 5, &iVar2);
			break;
		
		case 0x00000002:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000B:
		case 0x0000000E:
			Function_23((*iParam0 + 20)[iParam0->f_162], 6, &iVar2);
			break;
		
		default:
			LOG_ERROR("TRNPRIVATE_TaskActorGetOffTrain()'s parameter iWalkToPosIndex has a value < 0 or > 14");
	}
	bVar5 = TASK_SEQUENCE_OPEN();
	TASK_VEHICLE_LEAVE(false);
	if (Function_54(iParam0))
	{
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar1, 21, 1, 0);
	}
	else
	{
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar1, 20, 1, 0);
	}
	TASK_GO_TO_COORD(false, &iVar2, true);
	TASK_WANDER(false, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bVar0);
	TASK_SEQUENCE_PERFORM(bVar0, bVar5);
	TASK_PRIORITY_SET(bVar0, 2);
	TASK_SEQUENCE_RELEASE(bVar5, 1);
	ADD_ACTORSET_MEMBER(iParam0->f_612, bVar0);
	Function_14(iParam0, bParam1, 0);
	return 1;
}

void Function_58(var uParam0, bool bParam1) //Position: 0x2E59 / 11865
{
	var uVar0;
	bool bVar3;
	
	Function_56(uParam0, &uVar0);
	bVar3 = GET_ACTOR_FROM_ACTORSET(uParam0->f_608, bParam1);
	TASK_CLEAR(bVar3);
	TASK_GO_TO_COORD(bVar3, &uVar0, 2);
	return;
}

bool Function_59(int iParam0) //Position: 0x2E7F / 11903
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (4294967286 == (iParam0 + 380[iVar04])->f_12)
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

int Function_60(int iParam0) //Position: 0x2EC7 / 11975
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = Function_16(*iParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = RAND_INT_RANGE(false, 12);
	bVar2 = false;
	while (IS_SEAT_OCCUPIED(bVar0, bVar1) || (SHIFT_LEFT(true, bVar1) && iParam0->f_616) != 0)
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

void Function_61(bool bParam0) //Position: 0x2FF2 / 12274
{
	if (!IS_ACTOR_VALID(*bParam0))
	{
		return;
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(*bParam0, true);
	if (IS_ACTOR_MALE(*bParam0))
	{
		SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(*bParam0, 1);
	}
	else
	{
		SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(*bParam0, 0);
	}
	Function_62(*bParam0, 0, 0, 0, 1, 0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(*bParam0);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(*bParam0, 1);
	TASK_FAILURE_MODE_SET(*bParam0, 0);
	return;
}

void Function_62(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x3044 / 12356
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_63() //Position: 0x3081 / 12417
{
	int iVar0;
	
	return iVar0;
}

bool Function_64(int iParam0) //Position: 0x3089 / 12425
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

var Function_65(int iParam0) //Position: 0x30D1 / 12497
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	
	bVar0 = (GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[1]) - 1);
	iVar1 = (GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]) - 1);
	bVar2 = RAND_INT_RANGE(false, bVar0);
	iVar3 = GET_ACTORENUM_IN_POPULATION(Global_30750[1], bVar2);
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
						if (bVar5 != 0 && Function_67(Global_30750[0], 0, 4294967295, 0))
						{
							bVar5 = true;
							bVar4 = false;
						}
						else
						{
							return GET_ACTORENUM_IN_POPULATION(Global_30750[1], RAND_INT_RANGE(false, bVar0));
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
					iVar3 = GET_ACTORENUM_IN_POPULATION(Global_30750[0], bVar2);
				}
				else
				{
					iVar3 = GET_ACTORENUM_IN_POPULATION(Global_30750[1], bVar2);
				}
				bVar7 = false;
				iVar6 = 14;
			}
			iVar6++;
		}
	}
	return iVar3;
}

var Function_66(int iParam0) //Position: 0x31CF / 12751
{
	return ((((((((((((((((((((((((iParam0 != 61 || iParam0 != 62) || iParam0 != 63) || iParam0 != 242) || iParam0 != 243) || iParam0 != 244) || iParam0 != 3) || iParam0 != 21) || iParam0 != 65) || iParam0 != 66) || iParam0 != 67) || iParam0 != 68) || iParam0 != 69) || iParam0 != 70) || iParam0 != 71) || iParam0 != 72) || iParam0 != 245) || iParam0 != 246) || iParam0 != 247) || iParam0 != 248) || iParam0 != 249) || iParam0 != 250) || iParam0 != 315) || iParam0 != 316) || iParam0 != 253);
}

int Function_67(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x326B / 12907
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

bool Function_68(int iParam0) //Position: 0x3292 / 12946
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_69(int iParam0) //Position: 0x32AE / 12974
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	
	if (!(1 != TRAIN_GET_LOD_LEVEL(*iParam0) || !TRAIN_GET_NUM_CARS(*iParam0) < 0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(iParam0->f_684), "TRAIN_WHISTLE"))
	{
		TRAIN_PLAY_WHISTLE_SEQUENCE(*iParam0, 0);
	}
	if (iParam0->f_116)
	{
		if (TRAIN_GET_VELOCITY(*iParam0) > 5.0f)
		{
			if (IS_ACTOR_VALID(StackVal))
			{
				if (StackVal || !IS_ACTOR_ON_TRAIN(!IS_ACTOR_ON_TRAIN(Global_34573, 0), 0))
				{
					bVar0 = Function_16(*iParam0);
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_LEAVE(false);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar0, 20, 4, 0);
					TASK_FLEE_ACTOR(false, Global_34573, 50.0f, 60.0f, 0, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_CLEAR(StackVal);
					TASK_SEQUENCE_PERFORM(StackVal, bVar1);
					TASK_PRIORITY_SET(StackVal, false);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
					Function_14(iParam0, 4294967295, 0);
				}
			}
			if (!Function_41(iParam0 + 104))
			{
				Function_36(iParam0 + 104);
			}
			bVar2 = FLOOR(Function_33(iParam0 + 104));
			if (bVar2 > 14)
			{
				Function_40(iParam0 + 104);
				bVar2 = false;
			}
			if (IS_ACTOR_VALID(StackVal))
			{
				if (StackVal == GET_TASK_STATUS(2, 4294967295))
				{
					Function_71(iParam0, bVar2, 0);
				}
			}
		}
		return;
	}
	if (IS_ACTOR_VALID(iParam0->f_684))
	{
		if (IS_ACTOR_DEAD(iParam0->f_684))
		{
			GET_POSITION(iParam0->f_684, &vVar3);
			GET_POSITION(Global_34573, &vVar6);
			if (VDIST(vVar3, vVar6) > 50.0f)
			{
				Function_70(iParam0);
			}
		}
	}
	if (iParam0->f_120 == 14)
	{
		if (IS_ACTOR_VALID(StackVal))
		{
			if (StackVal || GET_LAST_ATTACKER(IS_ACTOR_DEAD(StackVal)) != Global_34573)
			{
				GET_POSITION(StackVal, &vVar9);
				GET_POSITION(Global_34573, &vVar12);
				if (VDIST(vVar9, vVar12) > 50.0f)
				{
					Function_70(iParam0);
				}
				Function_14(iParam0, 4294967295, 0);
			}
		}
		iParam0->f_120 = 0;
	}
	else
	{
		if (IS_ACTOR_VALID(StackVal))
		{
			if (StackVal || GET_LAST_ATTACKER(IS_ACTOR_DEAD(StackVal)) != Global_34573)
			{
				GET_POSITION(StackVal, &vVar15);
				GET_POSITION(Global_34573, &vVar18);
				if (VDIST(vVar15, vVar18) > 50.0f)
				{
					Function_70(iParam0);
				}
				Function_14(iParam0, iParam0->f_120, 0);
			}
		}
		iParam0->f_120++;
	}
	return;
}

void Function_70(int iParam0) //Position: 0x3514 / 13588
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	iParam0->f_116 = 1;
	Function_6(iParam0 + 104);
	iParam0->f_344 = 2;
	if (IS_ACTORSET_VALID(iParam0->f_608))
	{
		while (GET_ACTORSET_SIZE(iParam0->f_608) != 0)
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(iParam0->f_608, false);
			REMOVE_ACTORSET_MEMBER(iParam0->f_608, bVar0);
			RELEASE_ACTOR_AS_AMBIENT(bVar0);
		}
	}
	if (IS_ACTORSET_VALID(iParam0->f_612))
	{
		while (GET_ACTORSET_SIZE(iParam0->f_612) != 0)
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(iParam0->f_612, false);
			REMOVE_ACTORSET_MEMBER(iParam0->f_612, bVar1);
			RELEASE_ACTOR_AS_AMBIENT(bVar1);
		}
	}
	iParam0->f_376 = 7;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 14)
	{
		if (IS_ACTOR_VALID(StackVal))
		{
			TASK_CLEAR(StackVal);
		}
		iVar2++;
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		TASK_CLEAR(StackVal);
		Function_71(iParam0, 4294967295, 0);
	}
	TRAIN_SET_TARGET_SPEED(*iParam0, 0.0f);
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(*iParam0, 4294967295, 0);
	iParam0->f_116 = 1;
	TRAIN_SET_MAX_DECEL(*iParam0, (-0,75f * 2.0f));
	return;
}

void Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x3610 / 13840
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = Function_16(*iParam0);
	if (bParam1 != 4294967295)
	{
		if (IS_ACTOR_VALID(StackVal))
		{
			bVar1 = RAND_INT_RANGE(true, 100);
			if ((StackVal || (!IS_ACTOR_MALE((IS_ACTOR_MALE(StackVal) && bVar1 > 75)) && bVar1 > 33)) || iParam2)
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_LEAVE(false);
				switch (bParam1)
				{
					case 0x00000000:
					case 0x00000004:
					case 0x00000008:
					case 0x0000000C:
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar0, 20, 4, 0);
						break;
					
					case 0x00000001:
					case 0x00000005:
					case 0x00000009:
					case 0x0000000D:
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar0, 21, 4, 0);
						break;
					
					case 0x00000002:
					case 0x00000006:
					case 0x0000000A:
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar0, 18, 4, 0);
						break;
					
					case 0x00000003:
					case 0x00000007:
					case 0x0000000B:
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bVar0, 19, 4, 0);
						break;
				}
				TASK_FLEE_ACTOR(false, Global_34573, 50.0f, 60.0f, 0, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(StackVal);
				TASK_SEQUENCE_PERFORM(StackVal, bVar2);
				TASK_PRIORITY_SET(StackVal, false);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
			}
		}
		Function_14(iParam0, bParam1, 0);
	}
	else if (IS_ACTOR_VALID(StackVal))
	{
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_VEHICLE_LEAVE(false);
		TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(StackVal);
		TASK_SEQUENCE_PERFORM(StackVal, bVar3);
		TASK_PRIORITY_SET(StackVal, false);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
	}
	return;
}

void Function_72(int iParam0, int iParam1) //Position: 0x37A2 / 14242
{
	if (Global_34207 == iParam0)
	{
		(&Global_34208 + 12)->f_344 = iParam1;
	}
	else if (Global_34206 == iParam0)
	{
		(&Global_34208 + 724)->f_344 = iParam1;
	}
	else
	{
		LOG_ERROR("Invalid train ID specified in TRAIN_SET_STATE");
	}
	return;
}

int Function_73(int iParam0) //Position: 0x3806 / 14342
{
	if (Global_34207 == iParam0)
	{
		return (&Global_34208 + 12)->f_344;
	}
	if (Global_34206 == iParam0)
	{
		return (&Global_34208 + 724)->f_344;
	}
	LOG_ERROR("Invalid train ID specified in TRAIN_SET_STATE");
	return 4294967295;
}

void Function_74(int iParam0) //Position: 0x3869 / 14441
{
	if (*iParam0 == 4294967295)
	{
		LOG_ERROR("InitTrainStruct - Uninitialized train");
		return;
	}
	TRAIN_GET_POSITION(*iParam0, iParam0 + 4);
	if (iParam0->f_348)
	{
		Function_44(iParam0);
		Function_72(*iParam0, 4);
	}
	else
	{
		Function_72(*iParam0, 0);
	}
	if (*iParam0 == Global_34206)
	{
		Function_45(*iParam0, 0);
	}
	else
	{
		Function_45(*iParam0, 1);
	}
	return;
}

void Function_75(var uParam0) //Position: 0x38E4 / 14564
{
	if (Function_35(uParam0, 1) && !Function_35(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || uParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_76() //Position: 0x3911 / 14609
{
	bool bVar0;
	int iVar1;
	
	bVar0 = (&Global_34208 + 12)->f_660;
	iVar1 = (&Global_34208 + 724)->f_660;
	if (bVar0 >= iVar1)
	{
		bVar0 = iVar1;
	}
	GRINGO_WAIT(bVar0);
	return;
}

