//Decompiled with MagicRDR v1.0
//Function Count : 77
//Statics Count : 366
//Natives Count : 108
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	vector3 vLocal_4 = { 0.0f, 0.0f, 0.0f };
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	struct<2> Local_10[16];
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
	var uLocal_76 = 6;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	struct<261> Local_102 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	Function_75();
	Function_74();
	Function_2(&iLocal_290);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x19 / 25
{
	RELEASE_LAYOUT_REF(&iLocal_290);
	return;
}

void Function_2(int iParam0) //Position: 0x26 / 38
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
					Local_10[GET_LOCAL_SLOT()2] = Global_120007;
					REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_10, 66);
					Function_71(1);
					Function_68(Function_70());
					iVar3 = 6;
				}
				break;
			
			case 0x00000006:
				if (_IS_CLIENT_DATA_VALID_FOR_SLOT_2(&Local_10, 1))
				{
					Function_55(&iParam0);
					iVar3 = 7;
				}
				break;
			
			case 0x00000007:
				Function_52();
				bVar1 = Function_45();
				bVar2 = Function_42(Global_124175.f_68);
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
					Function_25(&iParam0);
					Function_15();
					uLocal_286 = LAUNCH_NEW_SCRIPT_WITH_ARGS(Function_14(), &Local_102, 74, 0);
					iVar3 = 9;
				}
				break;
			
			case 0x00000009:
				if (IS_SCRIPT_VALID(&uLocal_286))
				{
					iVar3 = 10;
				}
				break;
			
			case 0x0000000A:
				if (!IS_SCRIPT_VALID(&uLocal_286))
				{
					iVar0 = 0;
				}
				break;
		}
		WAIT(false);
	}
	NET_LOG(true, GET_SHORT_SCRIPT_NAME(), "Minigame instance script complete. Shutting down.", 0, 0, 0, 0);
	iVar5 = 0;
	while (iVar5 <= 6)
	{
		if (vLocal_176[iVar59].y > 0)
		{
			NET_GAMER_SET_ACTOR_OVERRIDE(vLocal_176[iVar59].y, 0);
		}
		iVar5++;
	}
	Function_11();
	Function_7();
	Function_3(&uLocal_76);
	EQUIP_ACCESSORY(Function_70(), 1, 1);
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	return;
}

void Function_3(int iParam0) //Position: 0x1B8 / 440
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_4(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_4(struct<2>[] Param0, int iParam1) //Position: 0x1E0 / 480
{
	if (Function_6(&(Param0[iParam12]), 4))
	{
		if (Function_6(&(Param0[iParam12]), 1))
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
			Function_5(&(Param0[iParam12]), 1);
			Function_5(&(Param0[iParam12]), 2);
			Function_5(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_5(struct<13> Param0) //Position: 0x32B / 811
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_6(struct<13> Param0) //Position: 0x348 / 840
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_7() //Position: 0x366 / 870
{
	Function_8(1024, 0, 1);
	Function_8(1, 0, 0);
	return;
}

void Function_8(int iParam0, bool bParam1, int iParam2) //Position: 0x37A / 890
{
	iParam2 = &iParam2;
	if (bParam1)
	{
		Function_10(&Global_120031 + 260, iParam0);
	}
	else
	{
		Function_9(&Global_120031 + 260, iParam0);
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x3A6 / 934
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x3BC / 956
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_11() //Position: 0x3CD / 973
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_70(), true);
	Function_13(1);
	if (!Function_12())
	{
		SET_POP_DENSITY_MULTIPLIER(1.0f);
	}
	SET_TIME_ACCELERATION(Global_99471);
	RESET_FACTIONS();
	HUD_ENABLE(1);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	return;
}

bool Function_12() //Position: 0x421 / 1057
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_13(var uParam0) //Position: 0x42A / 1066
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

var Function_14() //Position: 0x43D / 1085
{
	return "$/content/Mini_Games/Poker01/Poker01";
}

void Function_15() //Position: 0x46A / 1130
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

void Function_16(vector3 vParam0) //Position: 0x48C / 1164
{
	vLocal_4 = { StackVal, StackVal, vParam0 };
	return;
}

void Function_17() //Position: 0x49B / 1179
{
	Function_18();
	return;
}

void Function_18() //Position: 0x4A4 / 1188
{
	Function_19(4294967286);
	return;
}

void Function_19(bool bParam0) //Position: 0x4B0 / 1200
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

void Function_20(int iParam0, int iParam1) //Position: 0x4ED / 1261
{
	*(&Local_10[iParam12] + 4) = &iParam0;
	return;
}

void Function_21(int iParam0) //Position: 0x500 / 1280
{
	*(&Local_10[GET_LOCAL_SLOT()2] + 4) = &iParam0;
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x514 / 1300
{
	uParam0 = iParam1;
	return;
}

void Function_23(vector3 vParam0) //Position: 0x520 / 1312
{
	vParam0 = { StackVal, StackVal, vLocal_4 };
	return;
}

void Function_24(int iParam0) //Position: 0x52F / 1327
{
	iParam0 = &Local_10[GET_LOCAL_SLOT()2] + 4;
	return;
}

void Function_25(int iParam0) //Position: 0x543 / 1347
{
	int iVar0;
	struct<2> Var1;
	
	iParam0 = &iParam0;
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (vLocal_176[iVar09].y != 4294967295)
		{
			Function_26(&Global_124175 + 56, (IntToFloat(iVar0) * 30.0f));
			Var1 = Function_26(&Global_124175 + 56, (IntToFloat(iVar0) * 30.0f));
			if (vLocal_176[iVar09].y == 4294967294)
			{
				*(&Local_102 + 12[iVar0]) = Function_70();
			}
			else
			{
				*(&Local_102 + 12[iVar0]) = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam0, &vLocal_176[iVar09] + 8, vLocal_176[iVar09], Var1, Vector(0.0f, 0.0f, 0.0f));
				DECOR_SET_INT(&Local_102 + 12[iVar0], "FakeSlot", vLocal_176[iVar09].y);
				NET_GAMER_SET_ACTOR_OVERRIDE(vLocal_176[iVar09].y, &Local_102 + 12[iVar0]);
			}
			SET_ACTOR_UPDATE_PRIORITY(&Local_102 + 12[iVar0], false);
			DEEQUIP_ACCESSORY(&Local_102 + 12[iVar0], 0);
			DEEQUIP_ACCESSORY(&Local_102 + 12[iVar0], 1);
		}
		iVar0++;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	return;
}

struct<8> Function_26(struct<2> Param0) //Position: 0x62A / 1578
{
	struct<2> Var0;
	
	Var0 = Param0;
	ROTATE_VECTOR_XZ(&Var0, bParam1, 0);
	return StackVal, Var0;
}

bool Function_27(bool bParam0, bool bParam1, float fParam2) //Position: 0x644 / 1604
{
	struct<17> Var0;
	
	if (&bParam1)
	{
		Function_41(bParam0);
	}
	Function_23(&Var0);
	fVar3 = NET_GET_NET_TIME();
	iVar4 = 0;
	if ((fVar3 - Var0.f_12) <= &fParam2)
	{
		Var0.f_12 = fVar3;
		iVar4 = 1;
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
	if (Function_38(bParam0, iVar4, &uVar5))
	{
		if (Function_37())
		{
			if (!Function_35(&Var0))
			{
				Var6 = bParam0;
				Var6.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var6, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var6)));
				Function_34(&Var0, 1);
				Function_16(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar3;
			Function_16(&Var0);
		}
		else
		{
			fVar7 = (fVar3 - Var0.f_16);
			if (fVar7 <= 60.0f || (uVar5 && fVar7 <= 25.0f))
			{
				if (Function_28(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
					Var8 = GET_LOCAL_SLOT();
					Var8.f_4 = fVar3;
					NET_SCRIPTMSG_SEND(1, 104, &Var8, 4, 1);
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

bool Function_28(int iParam0) //Position: 0x899 / 2201
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

int Function_29(bool bParam0) //Position: 0x8DC / 2268
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

int Function_30(int iParam0) //Position: 0x903 / 2307
{
	return iParam0;
}

void Function_31(int iParam0, int iParam1) //Position: 0x90D / 2317
{
	iParam0 = &Local_10[iParam12] + 4;
	return;
}

void Function_32(int iParam0) //Position: 0x920 / 2336
{
	Function_22(&iParam0, 4294967286);
	return;
}

bool Function_33(bool bParam0) //Position: 0x92F / 2351
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_10, bParam0);
}

void Function_34(var uParam0, bool bParam1) //Position: 0x93C / 2364
{
	if (bParam1)
	{
		Function_10(&uParam0, 2);
	}
	else
	{
		Function_9(&uParam0, 2);
	}
	return;
}

bool Function_35(int iParam0) //Position: 0x958 / 2392
{
	return Function_36(iParam0, 2);
}

bool Function_36(var uParam0, bool bParam1) //Position: 0x966 / 2406
{
	return (uParam0 && bParam1) == 0;
}

bool Function_37() //Position: 0x973 / 2419
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

bool Function_38(int iParam0, var uParam1, int iParam2) //Position: 0x991 / 2449
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
					iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_39(int iParam0, bool bParam1) //Position: 0x9E3 / 2531
{
	if (bParam1)
	{
		Function_10(&iParam0, 1);
	}
	else
	{
		Function_9(&iParam0, 1);
	}
	return;
}

bool Function_40(int iParam0) //Position: 0x9FF / 2559
{
	return Function_36(iParam0, 1);
}

void Function_41(int iParam0) //Position: 0xA0D / 2573
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar21;
	
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
			strcpy(&cVar5, "Next lockstep state same as last state (", 64);
			stradd(&cVar5, I2STR(bVar0), 64);
			stradd(&cVar5, "). May be fine.", 64);
			if (Function_36(Var2, 4))
			{
			}
		}
		bVar21 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar21), I2STR(bVar21), I2STR(bVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_19(bVar0);
		Function_34(&Var2, 0);
		Function_16(&Var2);
	}
	return;
}

int Function_42(int iParam0) //Position: 0xB0A / 2826
{
	if (!Function_44(iParam0))
	{
		return 1;
	}
	return Function_43(&(Global_43791[iParam0]), 4);
}

int Function_43(var uParam0, int iParam1) //Position: 0xB26 / 2854
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(int iParam0) //Position: 0xB43 / 2883
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_45() //Position: 0xB59 / 2905
{
	return Function_46(&uLocal_76);
}

int Function_46(struct<2>[] Param0) //Position: 0xB64 / 2916
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_51();
	iVar1 = 0;
	if (!Function_6(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_50(&(Param0[iVar02]), 8);
		}
		else if (Function_49())
		{
			iVar1 = 1;
			Function_50(&(Param0[iVar02]), 8);
		}
		Function_50(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_6(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_6(&(Param0[02]), 8) || iVar1));
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
				Function_50(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_6(&(Param0[iVar02]), 4))
		{
			if (!Function_6(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
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
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_50(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_50(&(Param0[iVar02]), 2);
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

void Function_47() //Position: 0xF26 / 3878
{
	if (!Function_48(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_48(int iParam0) //Position: 0xF66 / 3942
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_49() //Position: 0xF82 / 3970
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

void Function_50(struct<13> Param0) //Position: 0xFB0 / 4016
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_51() //Position: 0xFC3 / 4035
{
	if (!Function_48(128))
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

void Function_52() //Position: 0x1005 / 4101
{
	Function_53(4);
	return;
}

void Function_53(int iParam0) //Position: 0x100F / 4111
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

void Function_54(int iParam0) //Position: 0x1041 / 4161
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_55(int iParam0) //Position: 0x1050 / 4176
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	
	Function_65(&Local_102, &iParam0);
	Local_102.f_260 = 1;
	Local_102.f_252 = 4;
	iVar1 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 6)
	{
		(&Local_102 + 12[bVar0]) = "";
		vLocal_176[bVar09].f_4 = 4294967295;
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
				strcpy(&vLocal_176[iVar39] + 8, GET_SLOT_NAME(bVar0), 32);
				vLocal_176[iVar39] = Local_10[bVar02];
				Function_63(&uLocal_76, vLocal_176[iVar39], 3, 0);
				vLocal_176[iVar39].y = bVar0;
			}
			else
			{
				vLocal_176[iVar39].f_4 = 4294967294;
			}
			Function_62(&Local_102, iVar3);
			iVar1++;
		}
		bVar0++;
	}
	uVar4 = FIND_VOLUME_IN_LAYOUT(&iParam0, "StayOutVol");
	if (!IS_VOLUME_VALID(&uVar4))
	{
		uVar4 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, "StayOutVol", 2,802597E-45f, *(&Local_102 + 232), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	}
	RESET_PROPS_IN_VOLUME(&uVar4, 3);
	Function_60(0, 1);
	DEEQUIP_ACCESSORY(Function_70(), 1);
	Function_57();
	Function_56(1);
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	return;
}

void Function_56(int iParam0) //Position: 0x117D / 4477
{
	int iVar0;
	
	if (Function_36(iParam0, 1) && Function_36(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_57() //Position: 0x11B1 / 4529
{
	Function_56(4);
	Function_58(1, 0);
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x11C0 / 4544
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_59(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_59(struct<113> Param0) //Position: 0x1247 / 4679
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_60(bool bParam0, bool bParam1) //Position: 0x12A5 / 4773
{
	var uVar0;
	
	SATCHEL_SET_ENABLED(0);
	uVar0 = Function_70();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&uVar0);
	Function_61(1);
	SET_ACTOR_POSTURE(&uVar0, 0);
	FIRE_STOP_ALL_FIRES();
	if (&bParam0)
	{
		ACTOR_START_FORCE_HOLSTER(&uVar0, 0, 0);
	}
	else
	{
		ACTOR_END_FORCE_HOLSTER(&uVar0);
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
		CANCEL_TIME_WARP(0);
	}
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
	if (&bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_61(int iParam0) //Position: 0x1304 / 4868
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_62(int iParam0, int iParam1) //Position: 0x1321 / 4897
{
	(*&iParam0 + 68)[iParam1] = 100;
	return;
}

var Function_63(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0x1332 / 4914
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_6(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_50(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_50(&(Param0[iVar02]), 8);
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

var Function_64(int iParam0, int iParam1) //Position: 0x140E / 5134
{
	if ((NET_GET_SESSION_GAMER_COUNT() != 2 && iParam0 != 1) && (iParam1 % 2) != 0)
	{
		return (iParam1 / 2);
	}
	return ((iParam0 * 2 % iParam1) + ((iParam1 + 1 % 2) * (iParam0 * 2 / iParam1)));
}

void Function_65(struct<245> Param0) //Position: 0x1443 / 5187
{
	int iVar0;
	
	Param0.f_124 = 100;
	Param0.f_244 = 0;
	Function_67(Global_124175.f_68, 0);
	*(&Param0 + 232) = Function_67(Global_124175.f_68, 0);
	iParam1 = &iParam1;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Function_66(Global_124175.f_68, iVar0, 0);
		*(&Param0 + 128[iVar02]) = Function_66(Global_124175.f_68, iVar0, 0);
		iVar0++;
	}
	return;
}

struct<8> Function_66(int iParam0, int iParam1, bool bParam2) //Position: 0x1494 / 5268
{
	if (iParam0 == Global_46816[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-801,0966f, 92,75807f, 2375,792f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-801,4974f, 92,75435f, 2375,295f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-801,2829f, 92,75435f, 2374,737f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-800,724f, 92,76255f, 2374,656f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-800,3233f, 92,75678f, 2375,122f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-800,5463f, 92,75435f, 2375,677f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(164,353f, 73,75671f, 2230,925f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(164,5807f, 73,82056f, 2231,472f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(164,2043f, 73,75299f, 2231,971f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(163,6548f, 73,76118f, 2231,889f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(163,4103f, 73,76118f, 2231,366f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(163,7511f, 73,75671f, 2230,869f);
				break;
		}
	}
	else if (iParam0 == Global_46760[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2157,424f, 16,88292f, 2596,033f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2158,012f, 16,94059f, 2595,997f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2158,228f, 16,87845f, 2595,416f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2157,847f, 16,87845f, 2594,96f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2157,261f, 16,87845f, 2595,042f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2157,04f, 16,87845f, 2595,596f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (&bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(748,5359f, 82,6927f, 1267,343f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(749,138f, 82,6927f, 1266,645f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(750,045f, 82,6927f, 1266,796f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(750,0344f, 82,6917f, 1267,552f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(749,7606f, 82,6927f, 1268,372f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(748,8501f, 82,6927f, 1268,207f);
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(717,6248f, 78,47099f, 1325,972f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(717,0453f, 78,47099f, 1325,919f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(716,8008f, 78,47099f, 1325,396f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(717,1418f, 78,47099f, 1324,928f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(717,7181f, 78,47099f, 1324,969f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(717,9684f, 78,47099f, 1325,495f);
					break;
				}
		}
	}
	else if (iParam0 == Global_46914[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-138,6693f, 119,2419f, 1344,049f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-139,2573f, 119,2419f, 1343,961f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-139,4945f, 119,2419f, 1343,419f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-139,1212f, 119,2419f, 1342,946f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-138,5368f, 119,2419f, 1343,024f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-138,2953f, 119,2419f, 1343,58f);
				break;
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2701,487f, 31,151f, 4278,554f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2701,713f, 31,151f, 4277,994f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2701,347f, 31,151f, 4277,538f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2700,726f, 31,151f, 4277,604f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2700,508f, 31,151f, 4278,2f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2700,919f, 31,151f, 4278,653f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-795,5794f, 13,16767f, 3699,937f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-795,8744f, 13,16057f, 3699,083f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-794,9905f, 13,16057f, 3698,687f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-794,196f, 13,16057f, 3699,235f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-794,2787f, 13,16057f, 3700,203f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-795,169f, 13,16057f, 3700,608f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_67(int iParam0, bool bParam1) //Position: 0x1A40 / 6720
{
	if (iParam0 == Global_46816[0])
	{
		return StackVal, Vector(-800,8856f, 93,555f, 2375,189f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(163,9887f, 74,554f, 2231,428f);
	}
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2157,657f, 17,677f, 2595,523f);
	}
	if (iParam0 == Global_46914[0])
	{
		if (&bParam1)
		{
			return StackVal, Vector(749,4575f, 83,482f, 1267,537f);
		}
		return StackVal, Vector(717,378f, 79,274f, 1325,464f);
	}
	if (iParam0 == Global_46914[1])
	{
		return StackVal, Vector(-138,8952f, 120,019f, 1343,499f);
	}
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2701,129f, 31,949f, 4278,085f);
	}
	if (iParam0 == Global_46894[2])
	{
		return StackVal, Vector(-795,0887f, 13,958f, 3699,661f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_68(int iParam0) //Position: 0x1B5C / 7004
{
	Function_69(128, 1);
	SET_ACTOR_INVULNERABILITY(&iParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(&iParam0), 0);
	AI_IGNORE_ACTOR(&iParam0);
	return;
}

void Function_69(int iParam0, bool bParam1) //Position: 0x1B80 / 7040
{
	if (bParam1)
	{
		Function_10(&Global_122919 + 192, iParam0);
	}
	else
	{
		Function_9(&Global_122919 + 192, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_120101[GET_LOCAL_SLOT()88].f_192 = Global_122919.f_192;
	}
	return;
}

int Function_70() //Position: 0x1BBB / 7099
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_71(bool bParam0) //Position: 0x1BD0 / 7120
{
	struct<17> Var0;
	
	Function_23(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar3, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar3));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (&bParam0)
	{
		Function_10(&Var0, 4);
	}
	Function_16(&Var0);
	Function_17();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 7203);
	return;
}

void Function_72(int iParam0) //Position: 0x1C23 / 7203
{
	struct<5> Var0;
	bool bVar5;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_23(&Var1);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), 0, 0);
		return;
	}
	Function_24(&iVar4);
	if (Function_40(&Var1))
	{
	}
	bVar5 = Function_30(&iVar4);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar5), 0, 0);
	if (bVar5 < 4294967286 && bVar5 == Var0)
	{
	}
	Function_39(&Var1, 1);
	Function_16(&Var1);
	return;
}

void Function_73() //Position: 0x1D26 / 7462
{
	Function_8(1024, 1, 0);
	Function_8(1, 0, 0);
	return;
}

void Function_74() //Position: 0x1D3A / 7482
{
	return;
}

void Function_75() //Position: 0x1D40 / 7488
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	Function_76(4, 1);
	uVar0 = &uVar0;
	iLocal_290 = CREATE_LAYOUT("Poker_CAS_layout");
	(&iLocal_290 + 8) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene_1Set", &iLocal_290, 8, 0);
	*(&iLocal_290 + 16[03]) = Vector(-794,7776f, 13,20574f, 3697,313f);
	*(&iLocal_290 + 16[03] + 12) = Vector(0.0f, 143,8871f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "PlayerPosition", Vector(-794,7776f, 13,20574f, 3697,313f), Vector(0.0f, 143,8871f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_290 + 8);
	*(&iLocal_290 + 16[13]) = Vector(-797,7305f, 13,00466f, 3697,815f);
	*(&iLocal_290 + 16[13] + 12) = Vector(0.0f, -4,489308f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "AI_0_Position", Vector(-797,7305f, 13,00466f, 3697,815f), Vector(0.0f, -4,489308f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_290 + 8);
	*(&iLocal_290 + 16[23]) = Vector(-796,1972f, 13,20574f, 3702,099f);
	*(&iLocal_290 + 16[23] + 12) = Vector(0.0f, 0,2177533f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "AI_1_Position", Vector(-796,1972f, 13,20574f, 3702,099f), Vector(0.0f, 0,2177533f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_290 + 8);
	*(&iLocal_290 + 16[33]) = Vector(-792,8218f, 13,20574f, 3699,719f);
	*(&iLocal_290 + 16[33] + 12) = Vector(0.0f, 65,40177f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "AI_2_Position", Vector(-792,8218f, 13,20574f, 3699,719f), Vector(0.0f, 65,40177f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_290 + 8);
	*(&iLocal_290 + 16[43]) = Vector(-794,0304f, 12,6806f, 3701,532f);
	*(&iLocal_290 + 16[43] + 12) = Vector(0.0f, 402,257f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "AI_3_Position", Vector(-794,0304f, 12,6806f, 3701,532f), Vector(0.0f, 402,257f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_290 + 8);
	*(&iLocal_290 + 144) = Vector(-795,0887f, 13,958f, 3699,661f);
	*(&iLocal_290 + 144 + 12) = Vector(0.0f, 399,6771f, 0.0f);
	*(&iLocal_290 + 168) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "TableCenter", Vector(-795,0887f, 13,958f, 3699,661f), Vector(0.0f, 399,6771f, 0.0f));
	*(&iLocal_290 + 176) = CREATE_OBJECTSET_IN_LAYOUT("Waitress_PositionsSet", &iLocal_290, 8, 0);
	*(&iLocal_290 + 184[03]) = Vector(-792,3431f, 13,25721f, 3704,926f);
	*(&iLocal_290 + 184[03] + 12) = Vector(0.0f, 65,09982f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "Waitress_0_Pos", Vector(-792,3431f, 13,25721f, 3704,926f), Vector(0.0f, 65,09982f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_290 + 176);
	*(&iLocal_290 + 184[13]) = Vector(-791,2239f, 13,25721f, 3704,926f);
	*(&iLocal_290 + 184[13] + 12) = Vector(0.0f, 36,11068f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "Waitress_1_Pos", Vector(-791,2239f, 13,25721f, 3704,926f), Vector(0.0f, 36,11068f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_290 + 176);
	*(&iLocal_290 + 240) = CREATE_OBJECTSET_IN_LAYOUT("DuelerPositionsSet", &iLocal_290, 8, 0);
	*(&iLocal_290 + 248[03]) = Vector(-792.0f, 13,05098f, 3716f);
	*(&iLocal_290 + 248[03] + 12) = Vector(0.0f, 42,077f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "Dueler_0", Vector(-792.0f, 13,05098f, 3716f), Vector(0.0f, 42,077f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_290 + 240);
	*(&iLocal_290 + 248[13]) = Vector(-800,0038f, 13,05098f, 3707,996f);
	*(&iLocal_290 + 248[13] + 12) = Vector(0.0f, -138,9687f, 0.0f);
	iVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_290, "Dueler_1", Vector(-800,0038f, 13,05098f, 3707,996f), Vector(0.0f, -138,9687f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar9, &iLocal_290 + 240);
	return;
}

void Function_76(int iParam0, int iParam1) //Position: 0x21ED / 8685
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

