//Decompiled with MagicRDR v1.0
//Function Count : 64
//Statics Count : 20
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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	
	iLocal_13 = 0;
	bLocal_16 = false;
	iLocal_17 = 4294967295;
	iLocal_18 = 0;
	iLocal_19 = 0;
	Function_58();
	while (!IS_EXITFLAG_SET())
	{
		Function_56(3);
		Function_52(Function_53());
		Function_51(Global_21575);
		Function_19();
		uVar0 = Function_15(&iLocal_14, &Global_124159, 1640, 1);
		Function_11(Function_12());
		if (iLocal_19 < 80 || uVar0)
		{
			iLocal_19 = 0;
			Function_2();
		}
		else
		{
			iLocal_19++;
		}
		WAIT(false);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x71 / 113
{
	RELEASE_LAYOUT_REF(&Global_124159);
	return;
}

void Function_2() //Position: 0x7F / 127
{
	var uVar0;
	bool bVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	
	switch (iLocal_18)
	{
		case 0x00000000:
			iLocal_18 = 2;
			break;
		
		case 0x00000002:
			iLocal_18 = 3;
			break;
		
		case 0x00000003:
			iLocal_18 = 1;
			break;
		
		case 0x00000001:
			iLocal_18 = 0;
			break;
		
		default:
			iLocal_18 = 0;
			break;
	}
	if (Global_21575 != iLocal_18 && IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		iLocal_17 = Global_21575;
		return;
	}
	if (!Global_6646 && iLocal_17 == 4294967295)
	{
		iLocal_18 = iLocal_17;
		iLocal_17 = 4294967295;
	}
	if (!IS_ACTORSET_VALID(&Global_123097))
	{
		return;
	}
	bVar2 = Function_10(iLocal_18, &uVar0);
	bVar3 = false;
	while (bVar3 <= GET_ACTORSET_SIZE(&Global_123097))
	{
		uVar4 = GET_ACTOR_FROM_ACTORSET(&Global_123097, bVar3);
		if (IS_ACTOR_VALID(&uVar4))
		{
			iVar5 = Function_9(&uVar4);
			if (iVar5 == iLocal_18)
			{
				uVar6 = GET_BLIP_ON_ACTOR(&uVar4);
				if (IS_BLIP_VALID(&uVar6))
				{
					REMOVE_BLIP(&uVar6);
				}
				RELEASE_ACTOR(&uVar4);
				if (IS_SLOT_VALID(bVar2))
				{
					if (GET_TASK_STATUS(&uVar4, 61) != 1)
					{
						Function_5(&uVar4);
						TASK_GO_NEAR_COORD(&uVar4, &uVar0, 15.0f, 2);
						TASK_PRIORITY_SET(&uVar4, true);
					}
				}
				else
				{
					Function_3(&uVar4, &Global_54076, -1.0f, -1.0f, 0, 0);
				}
			}
		}
		bVar3++;
	}
	return;
}

void Function_3(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1A3 / 419
{
	if (Function_4())
	{
		MEMORY_REPORT_POSITION_AUTO(&iParam0, &Global_54076, 0);
		MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
		TASK_FLEE_ACTORSET(&iParam0, &Global_123095, fParam2, fParam3, &iParam4, &iParam5, 0);
	}
	else if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&uParam1))
	{
		TASK_FLEE_ACTOR(&iParam0, &uParam1, fParam2, fParam3, &iParam4, &iParam5, 0);
	}
}

bool Function_4() //Position: 0x204 / 516
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_5(int iParam0) //Position: 0x20D / 525
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!IS_ACTOR_VALID(&iParam0))
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
				uVar1 = GET_SLOT_ACTOR(bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_7();
					uVar2 = Function_7();
					Function_6(&uVar1, &uVar2);
					MEMORY_CONSIDER_AS_ENEMY(&iParam0, &uVar1);
					MEMORY_IDENTIFY(&iParam0, &uVar1);
					MEMORY_REPORT_POSITION(&iParam0, &uVar1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_6(var uParam0, var uParam1) //Position: 0x27E / 638
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

struct<8> Function_7() //Position: 0x28D / 653
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_8(bool bParam0) //Position: 0x297 / 663
{
	return Global_120101[bParam088].f_176;
}

var Function_9(int iParam0) //Position: 0x2A7 / 679
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
	}
	uVar1 = NET_ACTOR_GET_SCRIPT_INT(&iParam0);
	iVar2 = uVar1;
	switch (iVar2)
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

var Function_10(int iParam0, var uParam1) //Position: 0x302 / 770
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	float fVar7;
	
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
				Var3 = Function_7();
				Function_7();
				Var5 = Function_7();
				if (GET_SLOT_POSITION(GET_LOCAL_SLOT(), &Var3))
				{
					if (GET_SLOT_POSITION(bVar2, &Var5))
					{
						fVar7 = VDIST2(Var3, Var5);
						if (fVar7 > (fVar1 * fVar1))
						{
							fVar1 = fVar7;
							uParam1 = Var5;
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

void Function_11(var uParam0) //Position: 0x388 / 904
{
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	Global_122919.f_180 = uParam0;
	Global_120101[GET_LOCAL_SLOT()88].f_180 = uParam0;
	return;
}

var Function_12() //Position: 0x3AB / 939
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 0;
	if (IS_ACTORSET_VALID(&Global_123097))
	{
		bVar1 = false;
		while (bVar1 <= GET_ACTORSET_SIZE(&Global_123097))
		{
			uVar2 = GET_ACTOR_FROM_ACTORSET(&Global_123097, bVar1);
			if (Function_13(&uVar2, 0))
			{
				if (NET_IS_OBJECT_LOCAL(&uVar2))
				{
					iVar0++;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x400 / 1024
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_14(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_14(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_14(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_14(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_14(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_14(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_14(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_14(&iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(&iParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_14(var uParam0, int iParam1) //Position: 0x4EE / 1262
{
	return (uParam0 && iParam1) == 0;
}

int Function_15(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4FB / 1275
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		if (!IS_LAYOUTREF_VALID(&iParam1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return 0;
		}
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uParam0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&iParam1);
		if (!IS_ITERATOR_VALID(&uVar1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(&uVar1, &uParam0);
		bVar2 = START_OBJECT_ITERATOR(&uVar1);
		while (IS_OBJECT_VALID(&bVar2))
		{
			uVar5 = GET_EVENT_FROM_OBJECT(&bVar2);
			uVar3 = GET_EVENT_TARGET_AS_OBJECT(&uVar5);
			uVar4 = GET_EVENT_PERPETRATOR(&uVar5);
			uVar6 = GET_ACTOR_FROM_OBJECT(&uVar3);
			if (IS_OBJECT_VALID(&uVar4))
			{
				if (IS_ACTOR_VALID(&uVar6))
				{
					if (&bParam3)
					{
						if (Function_16(&uVar4) == &iParam1)
						{
							Stack.Push(&uVar6);
							Call_Loc(bParam2);
						}
					}
					else
					{
						Stack.Push(&uVar6);
						Call_Loc(bParam2);
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
		DESTROY_ITERATOR(&uVar1);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_16(int iParam0) //Position: 0x601 / 1537
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 1)
		{
			iVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
		}
		while (!IS_LAYOUTREF_VALID(&iVar0) && IS_OBJECT_VALID(&iParam0))
		{
			iParam0 = GET_OBJECT_OWNER(&iParam0);
			if (GET_OBJECT_TYPE(&iParam0) == 1)
			{
				iVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	return "";
}

void Function_17(int iParam0) //Position: 0x668 / 1640
{
	int iVar0;
	
	if (GET_OBJECT_TYPE(&iParam0) != 15)
	{
		return;
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_PLAYER(&iParam0))
		{
			return;
		}
		iVar0 = NET_ACTOR_GET_SCRIPT_INT(&iParam0);
		if ((Function_18(&iParam0) && 877 >= iVar0) && iVar0 >= 882)
		{
			if (!IS_ACTOR_IN_ACTORSET(&Global_123097, &iParam0))
			{
				Function_5(&iParam0);
				ADD_ACTORSET_MEMBER(&Global_123097, &iParam0);
			}
		}
		else if (IS_ACTOR_RIDEABLE(&iParam0) && iVar0 != 875)
		{
			RELEASE_ACTOR(&iParam0);
			Function_3(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0);
		}
	}
	return;
}

int Function_18(int iParam0) //Position: 0x6F4 / 1780
{
	int iVar0;
	
	iVar0 = GET_ACTOR_FACTION(&iParam0);
	if (iVar0 != 8 || iVar0 != 10)
	{
		return 1;
	}
	return 0;
}

void Function_19() //Position: 0x713 / 1811
{
	if (!Function_49(2097152))
	{
		return;
	}
	if ((Function_48() <= 1000 || bLocal_16) && !Function_47(131072, 1))
	{
		Function_26();
		Function_25(Function_48(), 4294967295);
	}
	else if ((Function_48() > 1000 && !bLocal_16) && Function_47(131072, 1))
	{
		Function_20(1);
		Function_25(4294967295, 4294967295);
	}
	return;
}

void Function_20(bool bParam0) //Position: 0x769 / 1897
{
	Function_22(131072, 0);
	if (!&bParam0)
	{
		Function_21("GENMESS_MWPLAYERKILLED", 0);
	}
	return;
}

void Function_21(int iParam0, bool bParam1) //Position: 0x79B / 1947
{
	int iVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		iVar0 = "";
		if (&bParam1)
		{
			iVar0 = &iParam0;
		}
		ADD_LINE_TO_CONVERSATION(false, &iParam0, &iVar0, false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x7E1 / 2017
{
	if (bParam1)
	{
		Function_24(&Global_122919 + 192, iParam0);
	}
	else
	{
		Function_23(&Global_122919 + 192, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_120101[GET_LOCAL_SLOT()88].f_192 = Global_122919.f_192;
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x81C / 2076
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x832 / 2098
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_25(int iParam0, int iParam1) //Position: 0x843 / 2115
{
	struct<13> Var0;
	
	Var0.f_8 = &iParam1;
	Var0 = GET_LOCAL_SLOT();
	Var0.f_12 = Global_43789;
	Var0.f_4 = iParam0;
	NET_SCRIPTMSG_SEND(3, 69, &Var0, 4, 1);
	return;
}

void Function_26() //Position: 0x86D / 2157
{
	Function_22(131072, 1);
	Function_31(386, 1, 0, 0);
	PRINT_BIG("net_player_most_wanted_notif", 5f, 0, 2, 0);
	Function_27("net_help_most_wanted_inform", 0x41200000, 1, 0, 2, 1, 0);
	Function_21("GENMESS_LOCALMOSTWANTED", 0);
	return;
}

void Function_27(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x8F8 / 2296
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_28(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_28(int iParam0) //Position: 0x983 / 2435
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

bool Function_29() //Position: 0x9C2 / 2498
{
	if (Function_30(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_30(var uParam0, int iParam1) //Position: 0x9DD / 2525
{
	return (uParam0 && iParam1) == 0;
}

int Function_31(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x9EA / 2538
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_46(iParam0, TO_FLOAT(bParam1), 1);
	Function_45(iParam0);
	if (uParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &uParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_32(iParam0);
	return 1;
}

void Function_32(bool bParam0) //Position: 0xC12 / 3090
{
	switch (bParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0xCB0 / 3248
{
	char* cVar0[32];
	bool bVar8;
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
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			bParam2 = (bParam2 * 3,28084f);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_44(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_43(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_43(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_41(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_38(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_35(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_34(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_34() //Position: 0x12EE / 4846
{
	int iVar0;
	
	return &iVar0;
}

var Function_35(int iParam0) //Position: 0x12F7 / 4855
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1308 / 4872
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_37(char* cParam0) //Position: 0x13FF / 5119
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x141A / 5146
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_40(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x1481 / 5249
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x1493 / 5267
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x14A5 / 5285
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_42(iParam0) != 19 || Function_42(iParam0) != 17) || Function_42(iParam0) != 10) || Function_42(iParam0) != 9)
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_42(int iParam0) //Position: 0x15D9 / 5593
{
	return Global_55480[iParam016].f_96;
}

float Function_43(int iParam0) //Position: 0x15E8 / 5608
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_44(int iParam0) //Position: 0x1621 / 5665
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_45(int iParam0) //Position: 0x165E / 5726
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_46(int iParam0, float fParam1, bool bParam2) //Position: 0x17F8 / 6136
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

bool Function_47(bool bParam0, bool bParam1) //Position: 0x1A3C / 6716
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && bParam0);
	if (&bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

int Function_48() //Position: 0x1A5D / 6749
{
	return Global_122919.f_172;
}

bool Function_49(int iParam0) //Position: 0x1A69 / 6761
{
	return Function_50(Global_124154, iParam0);
}

int Function_50(var uParam0, int iParam1) //Position: 0x1A78 / 6776
{
	return (uParam0 && iParam1) == 0;
}

void Function_51(int iParam0) //Position: 0x1A85 / 6789
{
	Global_122919.f_176 = iParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_120101[GET_LOCAL_SLOT()88].f_176 = iParam0;
	}
	return;
}

void Function_52(var uParam0) //Position: 0x1AA6 / 6822
{
	Global_122919.f_172 = uParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_120101[GET_LOCAL_SLOT()88].f_172 = uParam0;
	}
	return;
}

var Function_53() //Position: 0x1AC7 / 6855
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
		if (Function_55(iVar2))
		{
			iVar3 = Function_54(iVar2);
			if (iVar3 >= iVar0)
			{
				iVar0 = iVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int Function_54(int iParam0) //Position: 0x1B02 / 6914
{
	if (!Function_55(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_55(int iParam0) //Position: 0x1B1A / 6938
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_56(int iParam0) //Position: 0x1B2F / 6959
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
			Function_57(iParam0);
		}
	}
	return;
}

void Function_57(int iParam0) //Position: 0x1B61 / 7009
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_58() //Position: 0x1B70 / 7024
{
	if (!IS_LAYOUTREF_VALID(&Global_124159))
	{
		Global_124159 = CREATE_LAYOUT("gMP_MPLAW_Layout");
	}
	Global_123097 = CREATE_ACTORSET_IN_LAYOUT(&Global_124159, "gMP_MPLAW_holdingSet", 1);
	iLocal_14 = CREATE_EVENT_TRAP("MPLAWReplication", 77, &Global_124159);
	EVENT_TRAP_STORE_EVENTS(&iLocal_14, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(69, 7155);
	return;
}

void Function_59(int iParam0) //Position: 0x1BF3 / 7155
{
	struct<9> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &vVar0, 4);
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
		Function_63(vVar0.x, 1);
		Function_62("net_player_most_wanted_on", vVar0.x);
		if (!Function_47(2097152, 1))
		{
			Function_21("GENMESS_ANOTHERMOSTWANTED", 0);
		}
	}
	else
	{
		Function_63(vVar0.x, 0);
		if (IS_SLOT_VALID(vVar0.z))
		{
			Function_60("net_player_most_wanted_killed", vVar0.x, vVar0.z);
		}
		else
		{
			Function_62("net_player_most_wanted_clear", vVar0.x);
		}
	}
	return;
}

void Function_60(var uParam0, bool bParam1, bool bParam2) //Position: 0x1CD3 / 7379
{
	var uVar0;
	var uVar2;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(bParam1), 2);
	memcpy(&uVar2, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(bParam2), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(&uParam0), &uVar0, &uVar2, 0, 0, 0, 0);
	return;
}

struct<32> Function_61(bool bParam0) //Position: 0x1D00 / 7424
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("g", I2STR(bParam0));
}

void Function_62(var uParam0, int iParam1) //Position: 0x1D14 / 7444
{
	var uVar0;
	
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(iParam1), 2);
	NET_TICKER_REPORTF(UI_GET_STRING(&uParam0), &uVar0, 0, 0, 0, 0, 0);
	return;
}

void Function_63(bool bParam0, bool bParam1) //Position: 0x1D35 / 7477
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

