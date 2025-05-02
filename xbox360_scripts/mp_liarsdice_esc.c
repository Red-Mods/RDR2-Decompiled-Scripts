//Decompiled with MagicRDR v1.0
//Function Count : 77
//Statics Count : 285
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
	struct<53> Local_61 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	bool bLocal_155 = false;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	struct<505> Local_158 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Function_75();
	Function_6(Local_158);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x14 / 20
{
	Function_2(&Local_158 + 4);
	RELEASE_LAYOUT_REF(Local_158);
	return;
}

void Function_2(int iParam0) //Position: 0x26 / 38
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x4C / 76
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x17A / 378
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x194 / 404
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(var uParam0) //Position: 0x1B1 / 433
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 1;
	Function_74();
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
					Function_72(1);
					Function_69(Function_71());
					iVar3 = 6;
				}
				break;
			
			case 0x00000006:
				if (_IS_CLIENT_DATA_VALID_FOR_SLOT_2(&Local_9, 1))
				{
					Function_55(uParam0);
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
					Function_25(uParam0);
					Function_15();
					bLocal_155 = LAUNCH_NEW_SCRIPT_WITH_ARGS(Function_14(), &Local_61, 33, 0);
					iVar3 = 9;
				}
				break;
			
			case 0x00000009:
				if (IS_SCRIPT_VALID(bLocal_155))
				{
					iVar3 = 10;
				}
				break;
			
			case 0x0000000A:
				if (!IS_SCRIPT_VALID(bLocal_155))
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
	Function_2(&uLocal_42);
	EQUIP_ACCESSORY(Function_71(), 1, 1);
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	return;
}

void Function_7() //Position: 0x33B / 827
{
	Function_8(1024, 0, 1);
	Function_8(1, 0, 0);
	return;
}

void Function_8(int iParam0, bool bParam1, int iParam2) //Position: 0x34F / 847
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

void Function_9(var uParam0, int iParam1) //Position: 0x377 / 887
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x38A / 906
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_11() //Position: 0x399 / 921
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_71(), true);
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

bool Function_12() //Position: 0x3EC / 1004
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_13(var uParam0) //Position: 0x3F5 / 1013
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

var Function_14() //Position: 0x408 / 1032
{
	return "$/content/Mini_Games/LiarsDice/LiarsDice";
}

void Function_15() //Position: 0x439 / 1081
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

void Function_16(int iParam0) //Position: 0x45B / 1115
{
	Local_4 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_17() //Position: 0x469 / 1129
{
	Function_18();
	return;
}

void Function_18() //Position: 0x472 / 1138
{
	Function_19(4294967286);
	return;
}

void Function_19(bool bParam0) //Position: 0x47E / 1150
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

void Function_20(var uParam0, int iParam1) //Position: 0x4BB / 1211
{
	Local_9[iParam12].f_4 = *uParam0;
	return;
}

void Function_21(int iParam0) //Position: 0x4CC / 1228
{
	Local_9[GET_LOCAL_SLOT()2].f_4 = *iParam0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x4DE / 1246
{
	*uParam0 = iParam1;
	return;
}

void Function_23(int iParam0) //Position: 0x4E9 / 1257
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_4 };
	return;
}

void Function_24(int iParam0) //Position: 0x4F7 / 1271
{
	*iParam0 = StackVal;
	return;
}

void Function_25(bool bParam0) //Position: 0x509 / 1289
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
				(*&Local_61 + 4)[iVar0] = Function_71();
			}
			else
			{
				(*&Local_61 + 4)[iVar0] = CREATE_ACTOR_IN_LAYOUT(bParam0, &Local_94[iVar010] + 8, Local_94[iVar010], vVar1, 0.0f, 0.0f, 0.0f);
				DECOR_SET_INT(StackVal, (*&Local_61 + 4)[iVar0], "FakeSlot");
				NET_GAMER_SET_ACTOR_OVERRIDE(StackVal, (*&Local_61 + 4)[iVar0]);
			}
			SET_ACTOR_UPDATE_PRIORITY((*&Local_61 + 4)[iVar0], false);
			DEEQUIP_ACCESSORY((*&Local_61 + 4)[iVar0], 0);
			DEEQUIP_ACCESSORY((*&Local_61 + 4)[iVar0], 1);
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

vector3 Function_26(var uParam0, bool bParam1) //Position: 0x5E6 / 1510
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

bool Function_27(bool bParam0, bool bParam1, float fParam2) //Position: 0x600 / 1536
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

bool Function_28(int iParam0) //Position: 0x853 / 2131
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

int Function_29(bool bParam0) //Position: 0x896 / 2198
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

int Function_30(int iParam0) //Position: 0x8BD / 2237
{
	return *iParam0;
}

void Function_31(var uParam0, int iParam1) //Position: 0x8C6 / 2246
{
	*uParam0 = StackVal;
	return;
}

void Function_32(int iParam0) //Position: 0x8D7 / 2263
{
	Function_22(iParam0, 4294967286);
	return;
}

bool Function_33(bool bParam0) //Position: 0x8E5 / 2277
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_9, bParam0);
}

void Function_34(var uParam0, bool bParam1) //Position: 0x8F2 / 2290
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

bool Function_35(int iParam0) //Position: 0x90C / 2316
{
	return Function_36(*iParam0, 2);
}

bool Function_36(var uParam0, bool bParam1) //Position: 0x919 / 2329
{
	return (uParam0 && bParam1) == 0;
}

bool Function_37() //Position: 0x926 / 2342
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

bool Function_38(int iParam0, var uParam1, int iParam2) //Position: 0x944 / 2372
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

void Function_39(int iParam0, bool bParam1) //Position: 0x995 / 2453
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

bool Function_40(int iParam0) //Position: 0x9AF / 2479
{
	return Function_36(*iParam0, 1);
}

void Function_41(int iParam0) //Position: 0x9BC / 2492
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

int Function_42(int iParam0) //Position: 0xAB9 / 2745
{
	if (!Function_44(iParam0))
	{
		return 1;
	}
	return Function_43(&(Global_29008[iParam0]), 4);
}

int Function_43(var uParam0, int iParam1) //Position: 0xAD5 / 2773
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(int iParam0) //Position: 0xAF1 / 2801
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_45() //Position: 0xB07 / 2823
{
	return Function_46(&uLocal_42);
}

int Function_46(int iParam0) //Position: 0xB12 / 2834
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_51();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
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
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
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
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
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

void Function_47() //Position: 0xE8D / 3725
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

bool Function_48(int iParam0) //Position: 0xECD / 3789
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_49() //Position: 0xEE9 / 3817
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

void Function_50(var uParam0, int iParam1) //Position: 0xF14 / 3860
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51() //Position: 0xF25 / 3877
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

void Function_52() //Position: 0xF67 / 3943
{
	Function_53(4);
	return;
}

void Function_53(int iParam0) //Position: 0xF71 / 3953
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

void Function_54(int iParam0) //Position: 0xFA3 / 4003
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_55(bool bParam0) //Position: 0xFB2 / 4018
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	Function_65(&Local_61, bParam0);
	Local_61.f_52 = 1;
	Local_61.f_48 = 2;
	iVar1 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 6)
	{
		(*&Local_61 + 4)[bVar0] = "";
		Local_94[bVar010].f_4 = 4294967295;
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
				strcpy(&Local_94[iVar310] + 8, GET_SLOT_NAME(bVar0), 32);
				Local_94[iVar310] = Local_9[bVar02];
				Function_63(&uLocal_42, Local_94[iVar310], 3, 0);
				Local_94[iVar310].f_4 = bVar0;
			}
			else
			{
				Local_94[iVar310].f_4 = 4294967294;
			}
			Function_62(&Local_61, iVar3);
			iVar1++;
		}
		bVar0++;
	}
	bVar4 = FIND_VOLUME_IN_LAYOUT(bParam0, "StayOutVol");
	if (!IS_VOLUME_VALID(bVar4))
	{
		bVar4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "StayOutVol", 2, *(&Local_61 + 32), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	}
	RESET_PROPS_IN_VOLUME(bVar4, 3);
	Function_60(0, 1);
	DEEQUIP_ACCESSORY(Function_71(), 1);
	Function_57();
	Function_56(1);
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	return;
}

void Function_56(int iParam0) //Position: 0x10D4 / 4308
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

void Function_57() //Position: 0x1108 / 4360
{
	Function_56(4);
	Function_58(1, 0);
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x1117 / 4375
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

void Function_59(int iParam0) //Position: 0x1199 / 4505
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

void Function_60(bool bParam0, bool bParam1) //Position: 0x11E7 / 4583
{
	bool bVar0;
	
	SATCHEL_SET_ENABLED(0);
	bVar0 = Function_71();
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

void Function_61(int iParam0) //Position: 0x123E / 4670
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_62(var uParam0, int iParam1) //Position: 0x125B / 4699
{
	*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0 };
	iParam1 = iParam1;
	return;
}

var Function_63(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x126F / 4719
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
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

var Function_64(int iParam0, int iParam1) //Position: 0x133F / 4927
{
	if ((NET_GET_SESSION_GAMER_COUNT() != 2 && iParam0 != 1) && (iParam1 % 2) != 0)
	{
		return (iParam1 / 2);
	}
	return ((iParam0 * 2 % iParam1) + ((iParam1 + 1 % 2) * (iParam0 * 2 / iParam1)));
}

void Function_65(int iParam0, int iParam1) //Position: 0x1374 / 4980
{
	int iVar0;
	
	iParam1 = iParam1;
	Function_68(Global_79349.f_40);
	*(iParam0 + 32) = { StackVal, StackVal, Function_68(Global_79349.f_40) };
	iParam0->f_44 = Function_67(Global_79349.f_40);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Function_66(Global_79349.f_40, iVar0);
		*(iParam0 + 56[iVar03]) = { StackVal, StackVal, Function_66(Global_79349.f_40, iVar0) };
		iVar0++;
	}
	return;
}

vector3 Function_66(int iParam0, int iParam1) //Position: 0x13C1 / 5057
{
	if (iParam0 == Global_30685[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -4288,696f, 26,72937f, 4381,383f;
				break;
			
			case 0x00000001:
				return -4289,277f, 26,72937f, 4381,477f;
				break;
			
			case 0x00000002:
				return -4289,651f, 26,72937f, 4381,039f;
				break;
			
			case 0x00000003:
				return -4289,435f, 26,72937f, 4380,51f;
				break;
			
			case 0x00000004:
				return -4288,878f, 26,72937f, 4380,39f;
				break;
			
			case 0x00000005:
				return -4288,485f, 26,72937f, 4380,807f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 167,5964f, 73,74156f, 2222,775f;
				break;
			
			case 0x00000001:
				return 167,958f, 73,74529f, 2222,327f;
				break;
			
			case 0x00000002:
				return 168,5496f, 73,74591f, 2222,387f;
				break;
			
			case 0x00000003:
				return 168,7889f, 73,74529f, 2222,935f;
				break;
			
			case 0x00000004:
				return 168,4313f, 73,74976f, 2223,425f;
				break;
			
			case 0x00000005:
				return 167,8298f, 73,74976f, 2223,35f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -788,6586f, 13,16462f, 3698,422f;
				break;
			
			case 0x00000001:
				return -788,4316f, 13,16762f, 3698,957f;
				break;
			
			case 0x00000002:
				return -788,7964f, 13,165f, 3699,425f;
				break;
			
			case 0x00000003:
				return -789,389f, 13,165f, 3699,35f;
				break;
			
			case 0x00000004:
				return -789,6095f, 13,165f, 3698,805f;
				break;
			
			case 0x00000005:
				return -789,2333f, 13,165f, 3698,335f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 856,9058f, 77,51558f, 1278,093f;
				break;
			
			case 0x00000001:
				return 856,6888f, 77,51558f, 1277,556f;
				break;
			
			case 0x00000002:
				return 857,0518f, 77,51558f, 1277,099f;
				break;
			
			case 0x00000003:
				return 857,629f, 77,51558f, 1277,148f;
				break;
			
			case 0x00000004:
				return 857,8614f, 77,51558f, 1277,699f;
				break;
			
			case 0x00000005:
				return 857,4864f, 77,51558f, 1278,173f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

var Function_67(int iParam0) //Position: 0x1695 / 5781
{
	if (iParam0 == Global_30685[0])
	{
		return -147,9631f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 72,52222f;
	}
	if (iParam0 == Global_30707[2])
	{
		return -47,22866f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 136,712f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f;
}

vector3 Function_68(int iParam0) //Position: 0x170B / 5899
{
	if (iParam0 == Global_30685[0])
	{
		return -4289,077f, 27,542f, 4380,94f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 168,1746f, 74,54424f, 2222,892f;
	}
	if (iParam0 == Global_30707[2])
	{
		return -789,002f, 13,965f, 3698,875f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 857,259f, 78,3169f, 1277,636f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_69(bool bParam0) //Position: 0x17AB / 6059
{
	Function_70(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

void Function_70(int iParam0, bool bParam1) //Position: 0x17CC / 6092
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

var Function_71() //Position: 0x1807 / 6151
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_72(bool bParam0) //Position: 0x181C / 6172
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
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 6247);
	return;
}

void Function_73(int iParam0) //Position: 0x1867 / 6247
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

void Function_74() //Position: 0x196A / 6506
{
	Function_8(1024, 1, 0);
	Function_8(1, 0, 0);
	return;
}

void Function_75() //Position: 0x197E / 6526
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	Function_76(4, 1);
	uVar0 = uVar0;
	Local_158 = CREATE_LAYOUT("LiarsDice_ESC_layout");
	Local_158.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_158, "StayOutVol", 2, -4289,116f, 26,87325f, 4380,855f, 0.0f, 0.0f, 0.0f, 4,628785f, 4,628785f, 4,628785f);
	Local_158.f_128 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene_1Set", Local_158, 8, 0);
	*(&Local_158 + 132[06]) = { -4288,734f, 26,72937f, 4383,188f };
	*(&Local_158 + 132[06] + 12) = { 0.0f, 334,2308f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_158, "PlayerPosition", -4288,734f, 26,72937f, 4383,188f, 0.0f, 334,2308f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_158.f_128);
	*(&Local_158 + 132[16]) = { -4290,303f, 26,72937f, 4383,188f };
	*(&Local_158 + 132[16] + 12) = { 0.0f, 340,6316f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_158, "AI_0_Position", -4290,303f, 26,72937f, 4383,188f, 0.0f, 340,6316f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_158.f_128);
	*(&Local_158 + 132[26]) = { -4291,237f, 26,72937f, 4380,636f };
	*(&Local_158 + 132[26] + 12) = { 0.0f, -111,0241f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_158, "AI_1_Position", -4291,237f, 26,72937f, 4380,636f, 0.0f, -111,0241f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_158.f_128);
	*(&Local_158 + 132[36]) = { -4291,237f, 26,72937f, 4382,301f };
	*(&Local_158 + 132[36] + 12) = { 0.0f, -62,80356f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_158, "AI_2_Position", -4291,237f, 26,72937f, 4382,301f, 0.0f, -62,80356f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_158.f_128);
	*(&Local_158 + 132[46]) = { -4286,724f, 26,72937f, 4380,738f };
	*(&Local_158 + 132[46] + 12) = { 0.0f, 461,8926f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_158, "AI_3_Position", -4286,724f, 26,72937f, 4380,738f, 0.0f, 461,8926f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_158.f_128);
	*(&Local_158 + 256) = { -4289,077f, 27,542f, 4380,94f };
	*(&Local_158 + 256 + 12) = { 0.0f, -147,9631f, 0.0f };
	Local_158.f_280 = CREATE_POINT_IN_LAYOUT(Local_158, "TableCenter", -4289,077f, 27,542f, 4380,94f, 0.0f, -147,9631f, 0.0f);
	Local_158.f_284 = CREATE_OBJECTSET_IN_LAYOUT("Waitress_PositionsSet", Local_158, 8, 0);
	*(&Local_158 + 288[06]) = { -4292,886f, 26,72937f, 4382,301f };
	*(&Local_158 + 288[06] + 12) = { 0.0f, -56,72712f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_158, "Waitress_0_Pos", -4292,886f, 26,72937f, 4382,301f, 0.0f, -56,72712f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_158.f_284);
	*(&Local_158 + 288[16]) = { -4292,067f, 26,72937f, 4384,064f };
	*(&Local_158 + 288[16] + 12) = { 0.0f, 316,5581f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_158, "Waitress_1_Pos", -4292,067f, 26,72937f, 4384,064f, 0.0f, 316,5581f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_158.f_284);
	*(&Local_158 + 340) = { -4288,696f, 26,72937f, 4381,383f };
	*(&Local_158 + 340 + 12) = { 0.0f, 19,32971f, 0.0f };
	Local_158.f_364 = CREATE_POINT_IN_LAYOUT(Local_158, "Seat_0", -4288,696f, 26,72937f, 4381,383f, 0.0f, 19,32971f, 0.0f);
	*(&Local_158 + 368) = { -4289,277f, 26,72937f, 4381,477f };
	*(&Local_158 + 368 + 12) = { 0.0f, -42,02172f, 0.0f };
	Local_158.f_392 = CREATE_POINT_IN_LAYOUT(Local_158, "Seat_1", -4289,277f, 26,72937f, 4381,477f, 0.0f, -42,02172f, 0.0f);
	*(&Local_158 + 396) = { -4289,651f, 26,72937f, 4381,039f };
	*(&Local_158 + 396 + 12) = { 0.0f, -100,0572f, 0.0f };
	Local_158.f_420 = CREATE_POINT_IN_LAYOUT(Local_158, "Seat_2", -4289,651f, 26,72937f, 4381,039f, 0.0f, -100,0572f, 0.0f);
	*(&Local_158 + 424) = { -4289,435f, 26,72937f, 4380,51f };
	*(&Local_158 + 424 + 12) = { 0.0f, -159,2302f, 0.0f };
	Local_158.f_448 = CREATE_POINT_IN_LAYOUT(Local_158, "Seat_3", -4289,435f, 26,72937f, 4380,51f, 0.0f, -159,2302f, 0.0f);
	*(&Local_158 + 452) = { -4288,878f, 26,72937f, 4380,39f };
	*(&Local_158 + 452 + 12) = { 0.0f, 140,1586f, 0.0f };
	Local_158.f_476 = CREATE_POINT_IN_LAYOUT(Local_158, "Seat_4", -4288,878f, 26,72937f, 4380,39f, 0.0f, 140,1586f, 0.0f);
	*(&Local_158 + 480) = { -4288,485f, 26,72937f, 4380,807f };
	*(&Local_158 + 480 + 12) = { 0.0f, 78,3755f, 0.0f };
	Local_158.f_504 = CREATE_POINT_IN_LAYOUT(Local_158, "Seat_5", -4288,485f, 26,72937f, 4380,807f, 0.0f, 78,3755f, 0.0f);
	return;
}

void Function_76(int iParam0, int iParam1) //Position: 0x1F00 / 7936
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

