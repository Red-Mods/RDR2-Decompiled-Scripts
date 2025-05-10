//Decompiled with MagicRDR v1.0
//Function Count : 63
//Statics Count : 16
//Natives Count : 104
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	bool bLocal_12 = false;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	
	iLocal_10 = 0;
	bLocal_12 = false;
	iLocal_13 = 4294967295;
	iLocal_14 = 0;
	iLocal_15 = 0;
	Function_57();
	while (!IS_EXITFLAG_SET())
	{
		Function_55(3);
		Function_51(Function_52());
		Function_50(Global_13111);
		Function_19();
		uVar0 = Function_15(bLocal_11, Global_79341, 1517, 1);
		Function_11(Function_12());
		if (iLocal_15 < 80 || uVar0)
		{
			iLocal_15 = 0;
			Function_2();
		}
		else
		{
			iLocal_15++;
		}
		WAIT(false);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x6F / 111
{
	RELEASE_LAYOUT_REF(Global_79341);
	return;
}

void Function_2() //Position: 0x7C / 124
{
	var uVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	
	switch (iLocal_14)
	{
		case 0x00000000:
			iLocal_14 = 2;
			break;
		
		case 0x00000002:
			iLocal_14 = 3;
			break;
		
		case 0x00000003:
			iLocal_14 = 1;
			break;
		
		case 0x00000001:
			iLocal_14 = 0;
			break;
		
		default:
			iLocal_14 = 0;
			break;
	}
	if (Global_13111 != iLocal_14 && IS_SCRIPT_VALID(Global_26316.f_60))
	{
		iLocal_13 = Global_13111;
		return;
	}
	if (!Global_3403 && iLocal_13 == 4294967295)
	{
		iLocal_14 = iLocal_13;
		iLocal_13 = 4294967295;
	}
	if (!IS_ACTORSET_VALID(Global_78577))
	{
		return;
	}
	bVar3 = Function_10(iLocal_14, &uVar0);
	bVar4 = false;
	while (bVar4 <= GET_ACTORSET_SIZE(Global_78577))
	{
		bVar5 = GET_ACTOR_FROM_ACTORSET(Global_78577, bVar4);
		if (IS_ACTOR_VALID(bVar5))
		{
			iVar6 = Function_9(bVar5);
			if (iVar6 == iLocal_14)
			{
				bVar7 = GET_BLIP_ON_ACTOR(bVar5);
				if (IS_BLIP_VALID(bVar7))
				{
					REMOVE_BLIP(bVar7);
				}
				RELEASE_ACTOR(bVar5);
				if (IS_SLOT_VALID(bVar3))
				{
					if (GET_TASK_STATUS(bVar5, 61) != 1)
					{
						Function_5(bVar5);
						TASK_GO_NEAR_COORD(bVar5, &uVar0, 15.0f, 2);
						TASK_PRIORITY_SET(bVar5, 1);
					}
				}
				else
				{
					Function_3(bVar5, Global_34573, -1.0f, -1.0f, 0, 0);
				}
			}
		}
		bVar4++;
	}
	return;
}

void Function_3(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x18E / 398
{
	if (Function_4())
	{
		MEMORY_REPORT_POSITION_AUTO(bParam0, Global_34573, 0);
		MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
		TASK_FLEE_ACTORSET(bParam0, Global_78576, fParam2, fParam3, iParam4, iParam5, 0);
	}
	else if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		TASK_FLEE_ACTOR(bParam0, bParam1, fParam2, fParam3, iParam4, iParam5, 0);
	}
}

bool Function_4() //Position: 0x1E1 / 481
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_5(bool bParam0) //Position: 0x1EA / 490
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_8(bVar0) != 4294967295)
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_7();
					vVar2 = { StackVal, StackVal, Function_7() };
					Function_6(bVar1, &vVar2);
					MEMORY_CONSIDER_AS_ENEMY(bParam0, bVar1);
					MEMORY_IDENTIFY(bParam0, bVar1);
					MEMORY_REPORT_POSITION(bParam0, bVar1, &vVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_6(bool bParam0, bool bParam1) //Position: 0x252 / 594
{
	GET_POSITION(bParam0, bParam1);
	return;
}

vector3 Function_7() //Position: 0x25F / 607
{
	return 0.0f, 0.0f, 0.0f;
}

int Function_8(bool bParam0) //Position: 0x268 / 616
{
	return Global_76943[bParam096].f_112;
}

var Function_9(bool bParam0) //Position: 0x278 / 632
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
	}
	bVar1 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
	bVar2 = bVar1;
	switch (bVar2)
	{
		case 0x0000036E:
			iVar0 = 0;
			break;
		
		case 0x0000036F:
			iVar0 = 2;
			break;
		
		case 0x00000370:
			iVar0 = 3;
			break;
		
		case 0x00000371:
			iVar0 = 1;
			break;
		
		default:
			iVar0 = 4294967295;
			break;
	}
	return iVar0;
}

var Function_10(int iParam0, int iParam1) //Position: 0x2D1 / 721
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	bVar0 = 4294967295;
	fVar1 = 500.0f;
	bVar2 = false;
	while (bVar2 <= 16)
	{
		if (IS_SLOT_VALID(bVar2))
		{
			if (Function_8(bVar2) == iParam0)
			{
				Function_7();
				vVar3 = { StackVal, StackVal, Function_7() };
				Function_7();
				vVar6 = { StackVal, StackVal, Function_7() };
				if (GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar3))
				{
					if (GET_SLOT_POSITION(bVar2, &vVar6))
					{
						fVar9 = VDIST2(vVar3, vVar6);
						if (fVar9 > (fVar1 * fVar1))
						{
							fVar1 = fVar9;
							*iParam1 = { StackVal, StackVal, vVar6 };
							bVar0 = bVar2;
						}
					}
				}
			}
		}
		bVar2++;
	}
	return bVar0;
}

void Function_11(var uParam0) //Position: 0x359 / 857
{
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	Global_78480.f_116 = uParam0;
	Global_76943[GET_LOCAL_SLOT()96].f_116 = uParam0;
	return;
}

var Function_12() //Position: 0x37C / 892
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	if (IS_ACTORSET_VALID(Global_78577))
	{
		bVar1 = false;
		while (bVar1 <= GET_ACTORSET_SIZE(Global_78577))
		{
			bVar2 = GET_ACTOR_FROM_ACTORSET(Global_78577, bVar1);
			if (Function_13(bVar2, 0))
			{
				if (NET_IS_OBJECT_LOCAL(bVar2))
				{
					iVar0++;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

bool Function_13(bool bParam0, int iParam1) //Position: 0x3CB / 971
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_14(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_14(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_14(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_14(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_14(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_14(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_14(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_14(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_14(var uParam0, int iParam1) //Position: 0x4A4 / 1188
{
	return (uParam0 && iParam1) == 0;
}

int Function_15(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x4B1 / 1201
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
						if (Function_16(bVar4) == bParam1)
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

int Function_16(bool bParam0) //Position: 0x593 / 1427
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

void Function_17(bool bParam0) //Position: 0x5ED / 1517
{
	bool bVar0;
	
	if (GET_OBJECT_TYPE(bParam0) != 15)
	{
		return;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_PLAYER(bParam0))
		{
			return;
		}
		bVar0 = NET_ACTOR_GET_SCRIPT_INT(bParam0);
		if ((Function_18(bParam0) && 877 >= bVar0) && bVar0 >= 882)
		{
			if (!IS_ACTOR_IN_ACTORSET(Global_78577, bParam0))
			{
				Function_5(bParam0);
				ADD_ACTORSET_MEMBER(Global_78577, bParam0);
			}
		}
		else if (IS_ACTOR_RIDEABLE(bParam0) && bVar0 != 875)
		{
			RELEASE_ACTOR(bParam0);
			Function_3(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
		}
	}
	return;
}

int Function_18(bool bParam0) //Position: 0x66B / 1643
{
	int iVar0;
	
	iVar0 = GET_ACTOR_FACTION(bParam0);
	if (iVar0 != 8 || iVar0 != 10)
	{
		return 1;
	}
	return 0;
}

void Function_19() //Position: 0x689 / 1673
{
	if (!Function_48(2097152))
	{
		return;
	}
	if ((Function_47() <= 1000 || bLocal_12) && !Function_46(131072, 1))
	{
		Function_26();
		Function_25(Function_47(), 4294967295);
	}
	else if ((Function_47() > 1000 && !bLocal_12) && Function_46(131072, 1))
	{
		Function_20(1);
		Function_25(4294967295, 4294967295);
	}
	return;
}

void Function_20(bool bParam0) //Position: 0x6DF / 1759
{
	Function_22(131072, 0);
	if (!bParam0)
	{
		Function_21("GENMESS_MWPLAYERKILLED", 0);
	}
	return;
}

void Function_21(bool bParam0, bool bParam1) //Position: 0x710 / 1808
{
	bool bVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		bVar0 = "";
		if (bParam1)
		{
			bVar0 = bParam0;
		}
		ADD_LINE_TO_CONVERSATION(0, bParam0, bVar0, 0, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x750 / 1872
{
	if (bParam1)
	{
		Function_24(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_23(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x78B / 1931
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x79E / 1950
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_25(int iParam0, int iParam1) //Position: 0x7AD / 1965
{
	struct<13> Var0;
	
	Var0.f_8 = iParam1;
	Var0 = GET_LOCAL_SLOT();
	Var0.f_12 = Global_29006;
	Var0.f_4 = iParam0;
	NET_SCRIPTMSG_SEND(3, 69, &Var0, 4, 1);
	return;
}

void Function_26() //Position: 0x7D6 / 2006
{
	Function_22(131072, 1);
	Function_31(386, 1, 0, 0);
	PRINT_BIG("net_player_most_wanted_notif", 5f, 0, 2, 0);
	Function_27("net_help_most_wanted_inform", 0x41200000, 1, 0, 2, 1, 0);
	Function_21("GENMESS_LOCALMOSTWANTED", 0);
	return;
}

void Function_27(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x861 / 2145
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_28(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_28(int iParam0) //Position: 0x8DC / 2268
{
	char* cVar0[16];
	
	if (!Function_29())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_29() //Position: 0x91B / 2331
{
	if (Function_30(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_30(var uParam0, int iParam1) //Position: 0x936 / 2358
{
	return (uParam0 && iParam1) == 0;
}

int Function_31(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x943 / 2371
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_32(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xB63 / 2915
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(bParam2));
	}
	else
	{
		cVar0 = F2STR(bParam2, 6, 2);
	}
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(bParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((bParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
			if (bParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				bParam2 = (bParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_43(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_42(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_42(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_33(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_33() //Position: 0x1190 / 4496
{
	int iVar0;
	
	return iVar0;
}

var Function_34(int iParam0) //Position: 0x1198 / 4504
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x11A9 / 4521
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x129E / 4766
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x12B7 / 4791
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x131C / 4892
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x132E / 4910
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1340 / 4928
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
		return;
	}
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
	{
		if (fParam1 > fVar1)
		{
			fParam1 = fVar1;
		}
		if (fParam1 < fVar0)
		{
			fParam1 = fVar0;
		}
		if (fParam2 > -(fParam1 - fVar1))
		{
			fParam2 = -(fParam1 - fVar1);
		}
		if (fParam2 < (fVar0 - fParam1))
		{
			fParam2 = (fVar0 - fParam1);
		}
		fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
		fVar3 = (fParam2 / (fVar0 - fVar1));
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_41(int iParam0) //Position: 0x1470 / 5232
{
	return Global_35278[iParam020].f_48;
}

float Function_42(int iParam0) //Position: 0x147F / 5247
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_43(int iParam0) //Position: 0x14B8 / 5304
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_44(int iParam0) //Position: 0x14F5 / 5365
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_45(int iParam0, float fParam1, bool bParam2) //Position: 0x168F / 5775
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	iVar0 = iVar1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
		return 0;
	}
	if (bParam2)
	{
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

bool Function_46(bool bParam0, bool bParam1) //Position: 0x18D3 / 6355
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_47() //Position: 0x18F3 / 6387
{
	return Global_78480.f_108;
}

bool Function_48(int iParam0) //Position: 0x18FF / 6399
{
	return Function_49(Global_79336, iParam0);
}

int Function_49(var uParam0, int iParam1) //Position: 0x190E / 6414
{
	return (uParam0 && iParam1) == 0;
}

void Function_50(int iParam0) //Position: 0x191B / 6427
{
	Global_78480.f_112 = iParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_112 = iParam0;
	}
	return;
}

void Function_51(var uParam0) //Position: 0x193C / 6460
{
	Global_78480.f_108 = uParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_108 = uParam0;
	}
	return;
}

var Function_52() //Position: 0x195D / 6493
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		iVar2 = iVar1;
		if (Function_54(iVar2))
		{
			iVar3 = Function_53(iVar2);
			if (iVar3 >= iVar0)
			{
				iVar0 = iVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int Function_53(int iParam0) //Position: 0x1998 / 6552
{
	if (!Function_54(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_54(int iParam0) //Position: 0x19B0 / 6576
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_55(int iParam0) //Position: 0x19C5 / 6597
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
			Function_56(iParam0);
		}
	}
	return;
}

void Function_56(bool bParam0) //Position: 0x19F7 / 6647
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &uVar0, 0);
	return;
}

void Function_57() //Position: 0x1A06 / 6662
{
	if (!IS_LAYOUTREF_VALID(Global_79341))
	{
		Global_79341 = CREATE_LAYOUT("gMP_MPLAW_Layout");
	}
	Global_78577 = CREATE_ACTORSET_IN_LAYOUT(Global_79341, "gMP_MPLAW_holdingSet", 1);
	bLocal_11 = CREATE_EVENT_TRAP("MPLAWReplication", 77, Global_79341);
	EVENT_TRAP_STORE_EVENTS(bLocal_11, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(69, 6786);
	return;
}

void Function_58(bool bParam0) //Position: 0x1A82 / 6786
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(bParam0, &vVar0, 4);
	if (!IS_SLOT_VALID(vVar0.x))
	{
		return;
	}
	if (vVar0.x == GET_LOCAL_SLOT())
	{
		return;
	}
	if (vVar0.y >= 0)
	{
		Function_62(vVar0.x, 1);
		Function_61("net_player_most_wanted_on", vVar0.x);
		if (!Function_46(2097152, 1))
		{
			Function_21("GENMESS_ANOTHERMOSTWANTED", 0);
		}
	}
	else
	{
		Function_62(vVar0.x, 0);
		if (IS_SLOT_VALID(vVar0.z))
		{
			Function_59("net_player_most_wanted_killed", vVar0.x, vVar0.z);
		}
		else
		{
			Function_61("net_player_most_wanted_clear", vVar0.x);
		}
	}
	return;
}

void Function_59(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B62 / 7010
{
	var uVar0;
	var uVar2;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(bParam1), 2);
	memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(bParam2), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, &uVar2, 0, 0, 0, 0);
	return;
}

struct<32> Function_60(bool bParam0) //Position: 0x1B8E / 7054
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("g", I2STR(bParam0));
}

void Function_61(bool bParam0, int iParam1) //Position: 0x1BA2 / 7074
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(iParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), &uVar0, 0, 0, 0, 0, 0);
	return;
}

void Function_62(bool bParam0, bool bParam1) //Position: 0x1BC2 / 7106
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 393);
	}
	else
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 4294967295);
	}
	return;
}

