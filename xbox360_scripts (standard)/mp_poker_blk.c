//Decompiled with MagicRDR v1.0
//Function Count : 77
//Statics Count : 246
//Natives Count : 108
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	struct<5> Local_4 = { 0, 0, 0, 0, 0 } ;
	struct<2> Local_9[16];
	var uLocal_42 = 6;
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
	struct<177> Local_61 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0 } ;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	Function_75();
	Function_74();
	Function_2(Local_177);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x17 / 23
{
	RELEASE_LAYOUT_REF(Local_177);
	return;
}

void Function_2(int iParam0) //Position: 0x22 / 34
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 1;
	Function_73();
	while (!IS_EXITFLAG_SET() && iVar0)
	{
		switch (iVar3)
		{
			case 0x00000000:
				bVar4 = GET_LOCAL_SLOT();
				if (bVar4 <= 0 && bVar4 > 16)
				{
					Local_9[GET_LOCAL_SLOT()2] = Global_76887;
					REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_9, 33);
					Function_71(1);
					Function_68(Function_70());
					iVar3 = 6;
				}
				break;
			
			case 0x00000006:
				if (_IS_CLIENT_DATA_VALID_FOR_SLOT_2(&Local_9, 1))
				{
					Function_55(iParam0);
					iVar3 = 7;
				}
				break;
			
			case 0x00000007:
				Function_52();
				bVar1 = Function_45();
				bVar2 = Function_42(Global_79349.f_40);
				if (!bVar1)
				{
				}
				if (!bVar2)
				{
				}
				if (bVar1 && bVar2)
				{
					iVar3 = 8;
				}
				break;
			
			case 0x00000008:
				Function_52();
				if (Function_27(7, 1, 0x3f800000))
				{
					Function_25(iParam0);
					Function_15();
					bLocal_174 = LAUNCH_NEW_SCRIPT_WITH_ARGS(Function_14(), &Local_61, 52, 0);
					iVar3 = 9;
				}
				break;
			
			case 0x00000009:
				if (IS_SCRIPT_VALID(bLocal_174))
				{
					iVar3 = 10;
				}
				break;
			
			case 0x0000000A:
				if (!IS_SCRIPT_VALID(bLocal_174))
				{
					iVar0 = 0;
				}
				break;
		}
		WAIT(false);
	}
	NET_LOG(true, GET_SHORT_SCRIPT_NAME(), "Minigame instance script complete. Shutting down.", 0, 0, false, 0);
	iVar5 = 0;
	while (iVar5 <= 6)
	{
		if (StackVal > 0)
		{
			NET_GAMER_SET_ACTOR_OVERRIDE(StackVal, 0);
		}
		iVar5++;
	}
	Function_11();
	Function_7();
	Function_3(&uLocal_42);
	EQUIP_ACCESSORY(Function_70(), 1, 1);
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	return;
}

void Function_3(int iParam0) //Position: 0x1AC / 428
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_4(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x1D2 / 466
{
	if (Function_6(uParam0[iParam13], 4))
	{
		if (Function_6(uParam0[iParam13], 1))
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
			Function_5(uParam0[iParam13], 1);
			Function_5(uParam0[iParam13], 2);
			Function_5(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x300 / 768
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_6(int iParam0, int iParam1) //Position: 0x31A / 794
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x337 / 823
{
	Function_8(1024, 0, 1);
	Function_8(1, 0, 0);
	return;
}

void Function_8(int iParam0, bool bParam1, int iParam2) //Position: 0x34B / 843
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_10(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_9(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x373 / 883
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x386 / 902
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_11() //Position: 0x395 / 917
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_70(), true);
	Function_13(1);
	if (!Function_12())
	{
		SET_POP_DENSITY_MULTIPLIER(1.0f);
	}
	SET_TIME_ACCELERATION(Global_63398);
	RESET_FACTIONS();
	HUD_ENABLE(true);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	return;
}

bool Function_12() //Position: 0x3E8 / 1000
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_13(var uParam0) //Position: 0x3F1 / 1009
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

var Function_14() //Position: 0x404 / 1028
{
	return "$/content/Mini_Games/Poker01/Poker01";
}

void Function_15() //Position: 0x431 / 1073
{
	struct<17> Var0;
	
	Function_17();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_16(&Var0);
	return;
}

void Function_16(int iParam0) //Position: 0x453 / 1107
{
	Local_4 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_17() //Position: 0x461 / 1121
{
	Function_18();
	return;
}

void Function_18() //Position: 0x46A / 1130
{
	Function_19(4294967286);
	return;
}

void Function_19(bool bParam0) //Position: 0x476 / 1142
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_24(&uVar0);
		Function_23(&vVar1);
		vVar1.z = uVar0;
		Function_16(&vVar1);
	}
	Function_22(&uVar0, bParam0);
	Function_21(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_20(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x4B3 / 1203
{
	Local_9[iParam12].f_4 = *uParam0;
	return;
}

void Function_21(int iParam0) //Position: 0x4C4 / 1220
{
	Local_9[GET_LOCAL_SLOT()2].f_4 = *iParam0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x4D6 / 1238
{
	*uParam0 = iParam1;
	return;
}

void Function_23(int iParam0) //Position: 0x4E1 / 1249
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_4 };
	return;
}

void Function_24(int iParam0) //Position: 0x4EF / 1263
{
	*iParam0 = StackVal;
	return;
}

void Function_25(bool bParam0) //Position: 0x501 / 1281
{
	int iVar0;
	vector3 vVar1;
	
	bParam0 = bParam0;
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (StackVal != 4294967295)
		{
			Function_26(&Global_79349 + 28, (IntToFloat(iVar0) * 30.0f));
			vVar1 = { StackVal, StackVal, Function_26(&Global_79349 + 28, (IntToFloat(iVar0) * 30.0f)) };
			if (StackVal == 4294967294)
			{
				(*&Local_61 + 12)[iVar0] = Function_70();
			}
			else
			{
				(*&Local_61 + 12)[iVar0] = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_113[iVar010] + 8, Local_113[iVar010], vVar1, 0.0f, 0.0f, 0.0f);
				DECOR_SET_INT(StackVal, (*&Local_61 + 12)[iVar0], "FakeSlot");
				NET_GAMER_SET_ACTOR_OVERRIDE(StackVal, (*&Local_61 + 12)[iVar0]);
			}
			SET_ACTOR_UPDATE_PRIORITY((*&Local_61 + 12)[iVar0], false);
			DEEQUIP_ACCESSORY((*&Local_61 + 12)[iVar0], 0);
			DEEQUIP_ACCESSORY((*&Local_61 + 12)[iVar0], 1);
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

vector3 Function_26(var uParam0, bool bParam1) //Position: 0x5DE / 1502
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

bool Function_27(bool bParam0, bool bParam1, float fParam2) //Position: 0x5F8 / 1528
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_41(bParam0);
	}
	Function_23(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_16(&Var0);
	}
	if (Function_40(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_39(&Var0, 0);
		Function_16(&Var0);
		Function_18();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_38(bParam0, iVar6, &uVar7))
	{
		if (Function_37())
		{
			if (!Function_35(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_34(&Var0, 1);
				Function_16(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_16(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_28(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, false, 0);
					Var11 = GET_LOCAL_SLOT();
					Var11.f_4 = fVar5;
					NET_SCRIPTMSG_SEND(1, 104, &Var11, 3, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_16(&Var0);
	}
	return 0;
}

bool Function_28(int iParam0) //Position: 0x84B / 2123
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_33(bVar0))
		{
			iVar1 = Function_29(bVar0);
			if (iVar1 == iParam0)
			{
				if (bVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_29(bool bParam0) //Position: 0x88E / 2190
{
	int iVar0;
	
	Function_32(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_24(&iVar0);
	}
	else
	{
		Function_31(&iVar0, bParam0);
	}
	return Function_30(&iVar0);
}

int Function_30(int iParam0) //Position: 0x8B5 / 2229
{
	return *iParam0;
}

void Function_31(var uParam0, int iParam1) //Position: 0x8BE / 2238
{
	*uParam0 = StackVal;
	return;
}

void Function_32(int iParam0) //Position: 0x8CF / 2255
{
	Function_22(iParam0, 4294967286);
	return;
}

bool Function_33(bool bParam0) //Position: 0x8DD / 2269
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_9, bParam0);
}

void Function_34(var uParam0, bool bParam1) //Position: 0x8EA / 2282
{
	if (bParam1)
	{
		Function_10(uParam0, 2);
	}
	else
	{
		Function_9(uParam0, 2);
	}
	return;
}

bool Function_35(int iParam0) //Position: 0x904 / 2308
{
	return Function_36(*iParam0, 2);
}

bool Function_36(var uParam0, bool bParam1) //Position: 0x911 / 2321
{
	return (uParam0 && bParam1) == 0;
}

bool Function_37() //Position: 0x91E / 2334
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	if (NET_IS_IN_SESSION())
	{
		return NET_IS_SESSION_HOST();
	}
	return 0;
}

bool Function_38(int iParam0, var uParam1, int iParam2) //Position: 0x93C / 2364
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	uParam1 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_33(iVar0))
		{
			iVar1 = Function_29(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					*iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_39(int iParam0, bool bParam1) //Position: 0x98D / 2445
{
	if (bParam1)
	{
		Function_10(iParam0, 1);
	}
	else
	{
		Function_9(iParam0, 1);
	}
	return;
}

bool Function_40(int iParam0) //Position: 0x9A7 / 2471
{
	return Function_36(*iParam0, 1);
}

void Function_41(int iParam0) //Position: 0x9B4 / 2484
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_24(&iVar1);
	if (Function_30(&iVar1) != bVar0)
	{
		Function_23(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_36(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_19(bVar0);
		Function_34(&Var2, 0);
		Function_16(&Var2);
	}
	return;
}

int Function_42(int iParam0) //Position: 0xAB1 / 2737
{
	if (!Function_44(iParam0))
	{
		return 1;
	}
	return Function_43(&(Global_29008[iParam0]), 4);
}

int Function_43(var uParam0, int iParam1) //Position: 0xACD / 2765
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(int iParam0) //Position: 0xAE9 / 2793
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_45() //Position: 0xAFF / 2815
{
	return Function_46(&uLocal_42);
}

int Function_46(int iParam0) //Position: 0xB0A / 2826
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_51();
	iVar1 = 0;
	if (!Function_6(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_50(iParam0[iVar03], 8);
		}
		else if (Function_49())
		{
			iVar1 = 1;
			Function_50(iParam0[iVar03], 8);
		}
		Function_50(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_6(iParam0[iVar03], 4))
		{
			if (!Function_6(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_6(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_6(iParam0[03], 8) || iVar1));
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
				Function_50(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_6(iParam0[iVar03], 4))
		{
			if (!Function_6(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_50(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_50(iParam0[iVar03], 2);
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
							Function_50(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_50(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_50(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_50(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_50(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_50(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_50(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_50(iParam0[iVar03], 2);
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
	Function_47();
	return 1;
}

void Function_47() //Position: 0xE85 / 3717
{
	if (!Function_48(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_48(int iParam0) //Position: 0xEC5 / 3781
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_49() //Position: 0xEE1 / 3809
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

void Function_50(var uParam0, int iParam1) //Position: 0xF0C / 3852
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51() //Position: 0xF1D / 3869
{
	if (!Function_48(128))
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

void Function_52() //Position: 0xF5F / 3935
{
	Function_53(4);
	return;
}

void Function_53(int iParam0) //Position: 0xF69 / 3945
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_54(iParam0);
		}
	}
	return;
}

void Function_54(int iParam0) //Position: 0xF9B / 3995
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_55(bool bParam0) //Position: 0xFAA / 4010
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	Function_65(&Local_61, bParam0);
	Local_61.f_176 = 1;
	Local_61.f_168 = 4;
	iVar1 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 6)
	{
		(*&Local_61 + 12)[bVar0] = "";
		Local_113[bVar010].f_4 = 4294967295;
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			iVar3 = Function_64(iVar1, 6);
			if (bVar0 != bVar2)
			{
				strcpy(&Local_113[iVar310] + 8, GET_SLOT_NAME(bVar0), 32);
				Local_113[iVar310] = Local_9[bVar02];
				Function_63(&uLocal_42, Local_113[iVar310], 3, 0);
				Local_113[iVar310].f_4 = bVar0;
			}
			else
			{
				Local_113[iVar310].f_4 = 4294967294;
			}
			Function_62(&Local_61, iVar3);
			iVar1++;
		}
		bVar0++;
	}
	bVar4 = FIND_VOLUME_IN_LAYOUT(bParam0, "StayOutVol");
	if (!IS_VOLUME_VALID(bVar4))
	{
		bVar4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "StayOutVol", 2, *(&Local_61 + 148), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	}
	RESET_PROPS_IN_VOLUME(bVar4, 3);
	Function_60(0, 1);
	DEEQUIP_ACCESSORY(Function_70(), 1);
	Function_57();
	Function_56(1);
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	return;
}

void Function_56(int iParam0) //Position: 0x10CC / 4300
{
	int iVar0;
	
	if (Function_36(iParam0, 1) && Function_36(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_57() //Position: 0x1100 / 4352
{
	Function_56(4);
	Function_58(1, 0);
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x110F / 4367
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_59(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_59(int iParam0) //Position: 0x1191 / 4497
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_60(bool bParam0, bool bParam1) //Position: 0x11DF / 4575
{
	bool bVar0;
	
	SATCHEL_SET_ENABLED(0);
	bVar0 = Function_70();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(bVar0);
	Function_61(1);
	SET_ACTOR_POSTURE(bVar0, 0);
	FIRE_STOP_ALL_FIRES();
	if (bParam0)
	{
		ACTOR_START_FORCE_HOLSTER(bVar0, 0, 0);
	}
	else
	{
		ACTOR_END_FORCE_HOLSTER(bVar0);
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
		CANCEL_TIME_WARP(0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	if (bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_61(int iParam0) //Position: 0x1236 / 4662
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_62(int iParam0, int iParam1) //Position: 0x1253 / 4691
{
	(*iParam0 + 40)[iParam1] = 100;
	return;
}

var Function_63(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1263 / 4707
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_6(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_50(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_50(uParam0[iVar03], 8);
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

var Function_64(int iParam0, int iParam1) //Position: 0x1333 / 4915
{
	if ((NET_GET_SESSION_GAMER_COUNT() != 2 && iParam0 != 1) && (iParam1 % 2) != 0)
	{
		return (iParam1 / 2);
	}
	return ((iParam0 * 2 % iParam1) + ((iParam1 + 1 % 2) * (iParam0 * 2 / iParam1)));
}

void Function_65(int iParam0, int iParam1) //Position: 0x1368 / 4968
{
	int iVar0;
	
	iParam0->f_68 = 100;
	iParam0->f_160 = 0;
	Function_67(Global_79349.f_40, 0);
	*(iParam0 + 148) = { StackVal, StackVal, Function_67(Global_79349.f_40, 0) };
	iParam1 = iParam1;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Function_66(Global_79349.f_40, iVar0, 0);
		*(iParam0 + 72[iVar03]) = { StackVal, StackVal, Function_66(Global_79349.f_40, iVar0, 0) };
		iVar0++;
	}
	return;
}

vector3 Function_66(int iParam0, int iParam1, bool bParam2) //Position: 0x13B5 / 5045
{
	if (iParam0 == Global_30668[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -801,0966f, 92,75807f, 2375,792f;
				break;
			
			case 0x00000001:
				return -801,4974f, 92,75435f, 2375,295f;
				break;
			
			case 0x00000002:
				return -801,2829f, 92,75435f, 2374,737f;
				break;
			
			case 0x00000003:
				return -800,724f, 92,76255f, 2374,656f;
				break;
			
			case 0x00000004:
				return -800,3233f, 92,75678f, 2375,122f;
				break;
			
			case 0x00000005:
				return -800,5463f, 92,75435f, 2375,677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 164,353f, 73,75671f, 2230,925f;
				break;
			
			case 0x00000001:
				return 164,5807f, 73,82056f, 2231,472f;
				break;
			
			case 0x00000002:
				return 164,2043f, 73,75299f, 2231,971f;
				break;
			
			case 0x00000003:
				return 163,6548f, 73,76118f, 2231,889f;
				break;
			
			case 0x00000004:
				return 163,4103f, 73,76118f, 2231,366f;
				break;
			
			case 0x00000005:
				return 163,7511f, 73,75671f, 2230,869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2157,424f, 16,88292f, 2596,033f;
				break;
			
			case 0x00000001:
				return -2158,012f, 16,94059f, 2595,997f;
				break;
			
			case 0x00000002:
				return -2158,228f, 16,87845f, 2595,416f;
				break;
			
			case 0x00000003:
				return -2157,847f, 16,87845f, 2594,96f;
				break;
			
			case 0x00000004:
				return -2157,261f, 16,87845f, 2595,042f;
				break;
			
			case 0x00000005:
				return -2157,04f, 16,87845f, 2595,596f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 748,5359f, 82,6927f, 1267,343f;
					break;
				
				case 0x00000001:
					return 749,138f, 82,6927f, 1266,645f;
					break;
				
				case 0x00000002:
					return 750,045f, 82,6927f, 1266,796f;
					break;
				
				case 0x00000003:
					return 750,0344f, 82,6917f, 1267,552f;
					break;
				
				case 0x00000004:
					return 749,7606f, 82,6927f, 1268,372f;
					break;
				
				case 0x00000005:
					return 748,8501f, 82,6927f, 1268,207f;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 717,6248f, 78,47099f, 1325,972f;
					break;
				
				case 0x00000001:
					return 717,0453f, 78,47099f, 1325,919f;
					break;
				
				case 0x00000002:
					return 716,8008f, 78,47099f, 1325,396f;
					break;
				
				case 0x00000003:
					return 717,1418f, 78,47099f, 1324,928f;
					break;
				
				case 0x00000004:
					return 717,7181f, 78,47099f, 1324,969f;
					break;
				
				case 0x00000005:
					return 717,9684f, 78,47099f, 1325,495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -138,6693f, 119,2419f, 1344,049f;
				break;
			
			case 0x00000001:
				return -139,2573f, 119,2419f, 1343,961f;
				break;
			
			case 0x00000002:
				return -139,4945f, 119,2419f, 1343,419f;
				break;
			
			case 0x00000003:
				return -139,1212f, 119,2419f, 1342,946f;
				break;
			
			case 0x00000004:
				return -138,5368f, 119,2419f, 1343,024f;
				break;
			
			case 0x00000005:
				return -138,2953f, 119,2419f, 1343,58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2701,487f, 31,151f, 4278,554f;
				break;
			
			case 0x00000001:
				return -2701,713f, 31,151f, 4277,994f;
				break;
			
			case 0x00000002:
				return -2701,347f, 31,151f, 4277,538f;
				break;
			
			case 0x00000003:
				return -2700,726f, 31,151f, 4277,604f;
				break;
			
			case 0x00000004:
				return -2700,508f, 31,151f, 4278,2f;
				break;
			
			case 0x00000005:
				return -2700,919f, 31,151f, 4278,653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -795,5794f, 13,16767f, 3699,937f;
				break;
			
			case 0x00000001:
				return -795,8744f, 13,16057f, 3699,083f;
				break;
			
			case 0x00000002:
				return -794,9905f, 13,16057f, 3698,687f;
				break;
			
			case 0x00000003:
				return -794,196f, 13,16057f, 3699,235f;
				break;
			
			case 0x00000004:
				return -794,2787f, 13,16057f, 3700,203f;
				break;
			
			case 0x00000005:
				return -795,169f, 13,16057f, 3700,608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_67(int iParam0, bool bParam1) //Position: 0x192F / 6447
{
	if (iParam0 == Global_30668[0])
	{
		return -800,8856f, 93,555f, 2375,189f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 163,9887f, 74,554f, 2231,428f;
	}
	if (iParam0 == Global_30640[0])
	{
		return -2157,657f, 17,677f, 2595,523f;
	}
	if (iParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			return 749,4575f, 83,482f, 1267,537f;
		}
		return 717,378f, 79,274f, 1325,464f;
	}
	if (iParam0 == Global_30717[1])
	{
		return -138,8952f, 120,019f, 1343,499f;
	}
	if (iParam0 == Global_30693[0])
	{
		return -2701,129f, 31,949f, 4278,085f;
	}
	if (iParam0 == Global_30707[2])
	{
		return -795,0887f, 13,958f, 3699,661f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_68(bool bParam0) //Position: 0x1A41 / 6721
{
	Function_69(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

void Function_69(int iParam0, bool bParam1) //Position: 0x1A62 / 6754
{
	if (bParam1)
	{
		Function_10(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_9(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

var Function_70() //Position: 0x1A9D / 6813
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_71(bool bParam0) //Position: 0x1AB2 / 6834
{
	struct<17> Var0;
	
	Function_23(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	if (bParam0)
	{
		Function_10(&Var0, 4);
	}
	Function_16(&Var0);
	Function_17();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 6909);
	return;
}

void Function_72(int iParam0) //Position: 0x1AFD / 6909
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_23(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, 0);
		return;
	}
	Function_24(&iVar7);
	if (Function_40(&Var2))
	{
	}
	bVar8 = Function_30(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, 0);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_39(&Var2, 1);
	Function_16(&Var2);
	return;
}

void Function_73() //Position: 0x1C00 / 7168
{
	Function_8(1024, 1, 0);
	Function_8(1, 0, 0);
	return;
}

void Function_74() //Position: 0x1C14 / 7188
{
	return;
}

void Function_75() //Position: 0x1C1A / 7194
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	Function_76(4, 1);
	uVar0 = uVar0;
	Local_177 = CREATE_LAYOUT("Poker_BLK_layout");
	Local_177.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_177, "PlayableSpace", 2, 854,8467f, 78,99314f, 1281,728f, 0.0f, -33,07299f, 0.0f, 4,807904f, 3,53227f, 6,156056f);
	Local_177.f_8 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene_1Set", Local_177, 8, 0);
	*(&Local_177 + 12[06]) = { 856,8768f, 77,52f, 1283,041f };
	*(&Local_177 + 12[06] + 12) = { 0.0f, 60,64319f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_177, "PlayerPosition", 856,8768f, 77,52f, 1283,041f, 0.0f, 60,64319f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar1);
	*(&Local_177 + 12[16]) = { 854,4354f, 77,52193f, 1284,053f };
	*(&Local_177 + 12[16] + 12) = { 0.0f, -4,489308f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_177, "AI_0_Position", 854,4354f, 77,52193f, 1284,053f, 0.0f, -4,489308f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar2);
	*(&Local_177 + 12[26]) = { 857,2482f, 77,52f, 1281,733f };
	*(&Local_177 + 12[26] + 12) = { 0.0f, 444,1363f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_177, "AI_1_Position", 857,2482f, 77,52f, 1281,733f, 0.0f, 444,1363f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar3);
	*(&Local_177 + 12[36]) = { 856,4229f, 77,52234f, 1280,632f };
	*(&Local_177 + 12[36] + 12) = { 0.0f, 110,3671f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_177, "AI_2_Position", 856,4229f, 77,52234f, 1280,632f, 0.0f, 110,3671f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar4);
	*(&Local_177 + 12[46]) = { 853,1198f, 77,52234f, 1280,618f };
	*(&Local_177 + 12[46] + 12) = { 0.0f, 224,0751f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_177, "AI_3_Position", 853,1198f, 77,52234f, 1280,618f, 0.0f, 224,0751f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar5);
	*(&Local_177 + 136) = { 855,1326f, 78,3239f, 1281,816f };
	*(&Local_177 + 136 + 12) = { 0.0f, 192,4619f, 0.0f };
	Local_177.f_160 = CREATE_POINT_IN_LAYOUT(Local_177, "TableCenter", 855,1326f, 78,3239f, 1281,816f, 0.0f, 192,4619f, 0.0f);
	Local_177.f_164 = CREATE_OBJECTSET_IN_LAYOUT("Waitress_PositionsSet", Local_177, 8, 0);
	*(&Local_177 + 168[06]) = { 856,4048f, 77,51955f, 1286,333f };
	*(&Local_177 + 168[06] + 12) = { 0.0f, -159,0592f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_177, "Waitress_0_Pos", 856,4048f, 77,51955f, 1286,333f, 0.0f, -159,0592f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_177.f_164);
	*(&Local_177 + 168[16]) = { 855,2977f, 77,51955f, 1286,333f };
	*(&Local_177 + 168[16] + 12) = { 0.0f, -124,4389f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_177, "Waitress_1_Pos", 855,2977f, 77,51955f, 1286,333f, 0.0f, -124,4389f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_177.f_164);
	Local_177.f_220 = CREATE_OBJECTSET_IN_LAYOUT("DuelerPositionsSet", Local_177, 8, 0);
	*(&Local_177 + 224[06]) = { 857,9119f, 77,51955f, 1286,135f };
	*(&Local_177 + 224[06] + 12) = { 0.0f, 5,508229f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_177, "Dueler_0", 857,9119f, 77,51955f, 1286,135f, 0.0f, 5,508229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_177.f_220);
	*(&Local_177 + 224[16]) = { 857,5084f, 77,51955f, 1279,553f };
	*(&Local_177 + 224[16] + 12) = { 0.0f, 181,6365f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_177, "Dueler_1", 857,5084f, 77,51955f, 1279,553f, 0.0f, 181,6365f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_177.f_220);
	return;
}

void Function_76(int iParam0, int iParam1) //Position: 0x2094 / 8340
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

