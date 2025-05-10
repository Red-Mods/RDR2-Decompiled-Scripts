//Decompiled with MagicRDR v1.0
//Function Count : 51
//Statics Count : 112
//Natives Count : 95
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 16;
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
	float fLocal_44 = 0.0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 16;
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
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	bool bLocal_106 = false;
	bool bLocal_107 = false;
	bool bLocal_108 = false;
	int iLocal_109 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	iLocal_16 = 0;
	iLocal_17 = 0;
	fLocal_44 = 60.0f;
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_99 = "dlcx_";
	iLocal_100 = 100;
	iLocal_101 = 0;
	iLocal_103 = 0;
	iLocal_109 = uScriptParam_0;
	while (!IS_EXITFLAG_SET())
	{
		Function_18();
		WAIT(false);
	}
	if (!Function_16(4))
	{
		Function_7(1);
	}
	SQUAD_GOALS_CLEAR(bLocal_108);
	Function_5(&bLocal_108, 0, 0);
	Function_4(bLocal_107);
	RELEASE_LAYOUT_REF(bLocal_105);
	RELEASE_LAYOUT_REF(bLocal_106);
	Function_1(uScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x94 / 148
{
	Function_3(&(Global_29008[iParam0]), 16);
	Function_3(&(Global_29008[iParam0]), 64);
	Function_3(&(Global_29008[iParam0]), 4);
	Function_2(64);
	return;
}

void Function_2(int iParam0) //Position: 0xC2 / 194
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xD5 / 213
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_4(bool bParam0) //Position: 0xEC / 236
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(bParam0, GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_5(var uParam0, bool bParam1, bool bParam2) //Position: 0x132 / 306
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_6(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_6(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1AE / 430
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_7(bool bParam0) //Position: 0x1C8 / 456
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_16(4))
		{
			Function_13(1);
		}
		else
		{
			return;
		}
	}
	Function_10(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_8(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_8(bool bParam0, bool bParam1) //Position: 0x20C / 524
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_9(GET_LOCAL_SLOT(), bParam0) && !Function_16(2))
		{
			return;
		}
		if (!Function_16(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_16(4))
		{
			if (!bParam1)
			{
				DECOR_SET_BOOL(bVar0, "ArmUp", true);
			}
		}
		else
		{
			DECOR_REMOVE(bVar0, "ArmUp");
		}
	}
	return;
}

int Function_9(bool bParam0, bool bParam1) //Position: 0x289 / 649
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (bVar0 != bVar1 && bVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_10(int iParam0) //Position: 0x2AD / 685
{
	Function_11(&Global_79337, iParam0);
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x2BC / 700
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x2C9 / 713
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_13(int iParam0) //Position: 0x2DC / 732
{
	Function_14(&Global_79337, iParam0);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x2EB / 747
{
	Function_15(uParam0, iParam1);
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x2F8 / 760
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(bool bParam0) //Position: 0x307 / 775
{
	return Function_17(Global_79337, bParam0);
}

int Function_17(var uParam0, bool bParam1) //Position: 0x316 / 790
{
	return (uParam0 && bParam1) == 0;
}

void Function_18() //Position: 0x323 / 803
{
	Function_19();
	return;
}

void Function_19() //Position: 0x32C / 812
{
	struct<8> Var0;
	int iVar8;
	
	switch (iLocal_103)
	{
		case 0x00000000:
			if (Global_3389)
			{
				iLocal_103 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_50(iLocal_109))
			{
				if (Function_48())
				{
					Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(iLocal_109) };
					if (!(Function_46() && !Function_45(4096)))
					{
						if (IS_PS3())
						{
							PRINT_HELP_FORMAT(10.0f, "net_mp_aa_generic_dlc_ps3", &Var0, false, 0, 0, 2, 0, 0);
						}
						else
						{
							PRINT_HELP_FORMAT(10.0f, "net_mp_aa_generic_dlc_360", &Var0, false, 0, 0, 2, 0, 0);
						}
					}
				}
			}
			bLocal_106 = CREATE_LAYOUT("GENERICMP_AA_replication_layout");
			bLocal_104 = CREATE_EVENT_TRAP("GenericAA_rep_trap", 77, bLocal_106);
			EVENT_TRAP_STORE_EVENTS(bLocal_104, 1);
			iLocal_103 = 2;
			break;
		
		case 0x00000002:
			bLocal_105 = CREATE_LAYOUT(Function_44(iLocal_109));
			Function_41(bLocal_105, iLocal_109);
			Function_31(iLocal_109, bLocal_105);
			Function_7(0);
			bLocal_108 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_105, "GEN_AA_defense_squad"));
			bLocal_107 = CREATE_ACTORSET_IN_LAYOUT(bLocal_105, "GEN_AA_holdingSet", 1);
			Function_30();
			iVar8 = 1881;
			NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar8);
			NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar8);
			if (IS_VOLUME_VALID(StackVal))
			{
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(StackVal, bLocal_108, true, 4294967295);
			}
			iLocal_103 = 3;
			break;
		
		case 0x00000003:
			Function_26(3);
			Function_20(bLocal_104, bLocal_105, 1581, 1);
			break;
	}
	return;
}

int Function_20(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x4F1 / 1265
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (!IS_LAYOUTREF_VALID(bParam1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(bVar1, bParam0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar5 = GET_EVENT_FROM_OBJECT(bVar2);
			bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar5);
			bVar4 = GET_EVENT_PERPETRATOR(bVar5);
			bVar6 = GET_ACTOR_FROM_OBJECT(bVar3);
			if (IS_OBJECT_VALID(bVar4))
			{
				if (IS_ACTOR_VALID(bVar6))
				{
					if (bParam3)
					{
						if (Function_21(bVar4) == bParam1)
						{
							Stack.Push(bVar6);
							Call_Loc(uParam2);
						}
					}
					else
					{
						Stack.Push(bVar6);
						Call_Loc(uParam2);
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		DESTROY_ITERATOR(bVar1);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_21(bool bParam0) //Position: 0x5D3 / 1491
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_22(bool bParam0) //Position: 0x62D / 1581
{
	char* cVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_PLAYER(bParam0))
		{
			return;
		}
		if (Function_25(bParam0))
		{
			cVar0 = GET_ACTOR_NAME(bParam0);
			if (STRING_CONTAINS_STRING(cVar0, Function_24()))
			{
				if (!IS_ACTOR_IN_ACTORSET(bLocal_107, bParam0))
				{
					ADD_ACTORSET_MEMBER(bLocal_107, bParam0);
				}
				if (!Function_23(bParam0, bLocal_108, 1))
				{
					SQUAD_JOIN(bParam0, bLocal_108);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
				{
					bVar1 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
					SET_BLIP_MAX_DISTANCE(bVar1, 3.0f);
				}
			}
		}
	}
	return;
}

bool Function_23(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6A3 / 1699
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

var Function_24() //Position: 0x6E3 / 1763
{
	return iLocal_99;
}

bool Function_25(bool bParam0) //Position: 0x6EB / 1771
{
	if (IS_ACTOR_HORSE(bParam0) || IS_ACTOR_VEHICLE(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(bParam0) && NET_ACTOR_GET_SCRIPT_INT(bParam0) > 100)
	{
		return 1;
	}
	return 0;
}

void Function_26(int iParam0) //Position: 0x718 / 1816
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
			Function_27(iParam0);
		}
	}
	return;
}

void Function_27(bool bParam0) //Position: 0x74A / 1866
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_28(bool bParam0) //Position: 0x759 / 1881
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &Var0, 4);
	bVar4 = Var0;
	if (StackVal && Var0.f_12 != iLocal_109)
	{
		if (IS_SLOT_VALID(bVar4))
		{
			bVar5 = GET_SLOT_ACTOR(bVar4);
			if (IS_ACTORSET_VALID(bLocal_107))
			{
				Function_29(&bLocal_107, &bVar5);
			}
		}
	}
	return;
}

void Function_29(var uParam0, var uParam1) //Position: 0x799 / 1945
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTORSET_VALID(*uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return;
	}
	bVar1 = false;
	while (bVar1 <= GET_ACTORSET_SIZE(*uParam0))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(*uParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			MEMORY_IDENTIFY(bVar0, *uParam1);
			MEMORY_CONSIDER_AS_ENEMY(bVar0, *uParam1);
		}
		bVar1++;
	}
	return;
}

void Function_30() //Position: 0x7EE / 2030
{
	struct<13> Var0;
	
	Var0 = GET_LOCAL_SLOT();
	Var0.f_12 = 1;
	Var0.f_4 = iLocal_109;
	Var0.f_8 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 78, &Var0, 4, 1);
	return;
}

void Function_31(int iParam0, bool bParam1) //Position: 0x819 / 2073
{
	Function_40(&(Global_29008[iParam0]), 16);
	Function_40(&(Global_29008[iParam0]), 64);
	Function_40(&(Global_29008[iParam0]), 4);
	Function_2(64);
	Function_36(2, 4294967295, 4294967295, 0, 3);
	Function_32(StackVal, 0, 0.0f, 3, bParam1, 1);
	return;
}

void Function_32(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x861 / 2145
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_35();
	}
	if (bParam5)
	{
		Function_33(1048576);
	}
}

void Function_33(int iParam0) //Position: 0x974 / 2420
{
	Function_34(&Global_28842, iParam0);
	return;
}

void Function_34(var uParam0, var uParam1) //Position: 0x982 / 2434
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_35() //Position: 0x99D / 2461
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_33(16384);
	}
	return;
}

void Function_36(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x9B9 / 2489
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_37();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_37() //Position: 0xA9D / 2717
{
	int iVar0;
	
	Global_26960 = Function_38(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_38(int iParam0) //Position: 0xAEB / 2795
{
	if (!Function_39(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_39(int iParam0) //Position: 0xB03 / 2819
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_40(var uParam0, int iParam1) //Position: 0xB18 / 2840
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_41(bool bParam0, bool bParam1) //Position: 0xB27 / 2855
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_43(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_42())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

bool Function_42() //Position: 0xC21 / 3105
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_43(var uParam0, int iParam1) //Position: 0xC2A / 3114
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

var Function_44(int iParam0) //Position: 0xC37 / 3127
{
	if (iParam0 == Global_30640[6])
	{
		return "DLC_HangingRockMP_layout";
	}
	if (iParam0 == Global_30640[16])
	{
		return "DLC_VentersPlace";
	}
	if (iParam0 == Global_30668[9])
	{
		return "DLC_WarthingtonRanch_MP_AA_layout";
	}
	if (iParam0 == Global_30658[6])
	{
		return "DLC_ScratchingPost";
	}
	if (iParam0 == Global_30693[11])
	{
		return "DLC_RanchoPolvo_MP_AA_layout";
	}
	if (iParam0 == Global_30658[5])
	{
		return "DLC_CuevaSeca_MP_AA_layout";
	}
	if (iParam0 == Global_30685[4])
	{
		return "DLC_crookedToes";
	}
	if (iParam0 == Global_30640[15])
	{
		return "DLC_critchleysRanch";
	}
	return "";
}

bool Function_45(var uParam0) //Position: 0xD6F / 3439
{
	return Function_17(Global_83864.f_1252, uParam0);
}

var Function_46() //Position: 0xD81 / 3457
{
	return HAS_STRING_TABLE_LOADED("jp");
}

struct<32> Function_47(int iParam0) //Position: 0xD8F / 3471
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_50(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_48() //Position: 0xE4C / 3660
{
	if (Function_42())
	{
		return (Function_49() != 1 || Function_49() != 0);
	}
	return 0;
}

int Function_49() //Position: 0xE65 / 3685
{
	return Global_79349.f_16;
}

bool Function_50(int iParam0) //Position: 0xE71 / 3697
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

