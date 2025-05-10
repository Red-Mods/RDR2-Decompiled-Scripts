//Decompiled with MagicRDR v1.0
//Function Count : 76
//Statics Count : 433
//Natives Count : 108
//Parameters Count : 2

#region Local Var
	struct<1505> Local_0 = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_424 = 0;
	bLocal_425 = false;
	iLocal_427 = 0;
	bVar0 = Function_75(&(Global_29008[iScriptParam_0]));
	Function_74("Initializing WotS", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_428 = 1000;
		switch (iLocal_427)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_427 = 1;
				}
				bLocal_428 = false;
				break;
			
			case 0x00000001:
				if (Function_72())
				{
					iLocal_427 = 2;
				}
				bLocal_428 = false;
				break;
			
			case 0x00000002:
				if (Function_63())
				{
					Function_62(&(Global_29008[iScriptParam_0]), 32);
					iLocal_427 = 3;
				}
				bLocal_428 = false;
				break;
			
			case 0x00000003:
				bLocal_429 = LAUNCH_NEW_SCRIPT_WITH_ARGS("WreckSerendipityVol", &iScriptParam_0, 2, 0);
				iLocal_427 = 5;
				bLocal_428 = false;
				break;
			
			case 0x00000005:
				iLocal_427 = 4;
				bLocal_428 = false;
				break;
			
			case 0x00000004:
				if (Function_61(&(Global_29008[iScriptParam_0]), 16) && Function_60(Global_29155[iScriptParam_010]))
				{
					iLocal_427 = 6;
				}
				bLocal_428 = false;
				break;
			
			case 0x00000006:
				bVar0 = false;
				Function_62(&(Global_29008[iScriptParam_0]), 8);
				if (Function_61(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_59(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_427 = 10;
				}
				else
				{
					iLocal_427 = 7;
				}
				bLocal_428 = false;
				break;
			
			case 0x00000007:
				iLocal_427 = 8;
				bLocal_428 = false;
				break;
			
			case 0x00000008:
				Function_58(64);
				Function_54(2, 4294967295, 4294967295, 0, 3);
				if (Function_53())
				{
					Function_49(StackVal, 0, 0.0f, 3, Local_0, 1);
				}
				Function_62(&(Global_29008[iScriptParam_0]), 512);
				iLocal_427 = 9;
				bLocal_428 = false;
				break;
			
			case 0x00000009:
				Function_47(Local_0, iScriptParam_0);
				Function_62(&(Global_29008[iScriptParam_0]), 4);
				Function_45("Finished Initializing WotS", 5.0f);
				iLocal_427 = 10;
				bLocal_428 = false;
				if (bVar0 && !Function_44(Global_30717[3]))
				{
				}
				else
				{
					if (bVar0)
					{
						if (Function_44(Global_30717[3]))
						{
							Function_43();
							Function_42("AA_GhostTown", 0, -1.0f, 1, 0, 0);
						}
					}
					bVar0 = false;
				}
				Function_38(&(Global_29008[iScriptParam_0]));
				Function_20(Global_30717[3]);
				break;
			
			case 0x0000000A:
				Function_13();
				if (bVar0)
				{
					bLocal_428 = 100;
				}
				if (Function_61(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_427 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_428);
	}
	Function_12();
	Function_7();
	Function_3(iScriptParam_0);
	Function_59(&(Global_29008[iScriptParam_0]), 32);
	Function_59(&(Global_29008[iScriptParam_0]), 64);
	Function_59(&(Global_29008[iScriptParam_0]), 8);
	Function_59(&(Global_29008[iScriptParam_0]), 512);
	Function_59(&(Global_29008[iScriptParam_0]), 4);
	if (bVar0)
	{
	}
	Function_1();
	if (IS_SCRIPT_VALID(bLocal_430))
	{
		TERMINATE_SCRIPT(bLocal_430);
	}
	if (IS_SCRIPT_VALID(bLocal_429))
	{
		TERMINATE_SCRIPT(bLocal_429);
	}
	Function_45("Unloaded Wreck of the Serendipity.", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x331 / 817
{
	if (IS_OBJECTSET_VALID(bLocal_426))
	{
		Function_2(bLocal_426);
		DESTROY_OBJECTSET(bLocal_426);
	}
	return;
}

void Function_2(bool bParam0) //Position: 0x34C / 844
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_3(int iParam0) //Position: 0x391 / 913
{
	int iVar0;
	
	if (!Function_6(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_4(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_4(int iParam0) //Position: 0x3C7 / 967
{
	if (!Function_5(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_5(int iParam0) //Position: 0x3E9 / 1001
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_6(int iParam0) //Position: 0x3FF / 1023
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_7() //Position: 0x415 / 1045
{
	Function_8(&bLocal_377 + 4);
	RELEASE_LAYOUT_REF(bLocal_377);
	return;
}

void Function_8(int iParam0) //Position: 0x429 / 1065
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_9(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x44F / 1103
{
	if (Function_11(uParam0[iParam13], 4))
	{
		if (Function_11(uParam0[iParam13], 1))
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
			Function_10(uParam0[iParam13], 1);
			Function_10(uParam0[iParam13], 2);
			Function_10(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x57D / 1405
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(int iParam0, int iParam1) //Position: 0x597 / 1431
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12() //Position: 0x5B4 / 1460
{
	Function_8(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_13() //Position: 0x5C6 / 1478
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (bLocal_425)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_426) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_426);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_18(Global_34573, bVar1) > 100.0f)
			{
				Function_17(bVar1);
				vVar3 = { StackVal, StackVal, Function_17(bVar1) };
				if (!Function_16(iLocal_424, bVar2))
				{
					Function_15(&iLocal_424, bVar2);
					CLEAR_AREA_OF_GRASS(vVar3, 1.75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_14(&iLocal_424, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x64F / 1615
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x662 / 1634
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0x671 / 1649
{
	return (uParam0 && iParam1) == 0;
}

vector3 Function_17(bool bParam0) //Position: 0x67E / 1662
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_18(bool bParam0, bool bParam1) //Position: 0x6A5 / 1701
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_19(bParam0);
			vVar0 = { StackVal, StackVal, Function_19(bParam0) };
			Function_19(bParam1);
			vVar3 = { StackVal, StackVal, Function_19(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_19(bool bParam0) //Position: 0x740 / 1856
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

void Function_20(int iParam0) //Position: 0x7AC / 1964
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_61(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_62(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_25(473, 1, 0, 0);
		iVar0 = Function_24(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_25(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_25(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_25(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_23(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_23(7, 30);
	}
	if (Function_22(473) <= Function_21(473))
	{
		if (!Function_53())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_21(int iParam0) //Position: 0x8AB / 2219
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_22(int iParam0) //Position: 0x8E8 / 2280
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_23(int iParam0, bool bParam1) //Position: 0x921 / 2337
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

var Function_24(int iParam0) //Position: 0x988 / 2440
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_6(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

int Function_25(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x9E0 / 2528
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
	Function_37(iParam0, TO_FLOAT(bParam1), 1);
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_26(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xC00 / 3072
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_21(390))), 32);
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
					bVar19 = (Function_22(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_22(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_34(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_31(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_28(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_27(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_27() //Position: 0x122D / 4653
{
	int iVar0;
	
	return iVar0;
}

var Function_28(int iParam0) //Position: 0x1235 / 4661
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_29(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1246 / 4678
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_30(char* cParam0, bool bParam1) //Position: 0x133B / 4923
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_31(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1354 / 4948
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_33(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_32(Function_33(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_32(int iParam0, int iParam1) //Position: 0x13B9 / 5049
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_33(int iParam0, bool bParam1) //Position: 0x13CB / 5067
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_34(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x13DD / 5085
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
	if (((Function_35(iParam0) != 19 || Function_35(iParam0) != 17) || Function_35(iParam0) != 10) || Function_35(iParam0) != 9)
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

int Function_35(int iParam0) //Position: 0x150D / 5389
{
	return Global_35278[iParam020].f_48;
}

void Function_36(int iParam0) //Position: 0x151C / 5404
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

int Function_37(int iParam0, float fParam1, bool bParam2) //Position: 0x16B6 / 5814
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

int Function_38(int iParam0) //Position: 0x18FA / 6394
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<8> Var8;
	bool bVar16;
	
	if (!Function_61(iParam0, 2048))
	{
		return 0;
	}
	if (Function_53() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	bLocal_426 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", Global_30616, 12, 0);
	bLocal_425 = true;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	ITERATE_ON_PARTIAL_NAME(bVar0, "f_AreaTreasure");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_17(bVar1);
		vVar2 = { StackVal, StackVal, Function_17(bVar1) };
		Function_41(bVar1);
		vVar5 = { StackVal, StackVal, Function_41(bVar1) };
		Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("NoAATreasure") };
		bVar16 = CREATE_GRINGO_IN_LAYOUT(Global_30616, &Var8, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", vVar2, vVar5);
		DECOR_SET_BOOL(bVar16, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(bVar16, bLocal_426);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 1;
}

struct<32> Function_39(bool bParam0) //Position: 0x1A1E / 6686
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("0", &cVar8, ""), 4);
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

struct<32> Function_40(char* cParam0, char* cParam1, char* cParam2) //Position: 0x1A88 / 6792
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

vector3 Function_41(bool bParam0) //Position: 0x1AA7 / 6823
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_42(char* cParam0, var uParam1, var uParam2, var uParam3, char* cParam4, var uParam5) //Position: 0x1ACE / 6862
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		if (STRING_LENGTH(&(Global_63406[iVar021])) == 0)
		{
			strcpy(&(Global_63406[iVar021]), cParam0, 32);
			Global_63406[iVar021].f_32 = uParam1;
			Global_63406[iVar021].f_36 = uParam2;
			Global_63406[iVar021].f_40 = uParam3;
			strcpy(&Global_63406[iVar021] + 48, cParam4, 32);
			Global_63406[iVar021].f_44 = 1;
			Global_63406[iVar021].f_80 = uParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_43() //Position: 0x1B4D / 6989
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_63406 - 1))
	{
		Global_63406[iVar021].f_40 = 0;
		strcpy(&Global_63406[iVar021] + 48, "", 32);
		Global_63406[iVar021].f_36 = 1.0f;
		Global_63406[iVar021].f_32 = "";
		strcpy(&(Global_63406[iVar021]), "", 32);
		Global_63406[iVar021].f_44 = 0;
		Global_63406[iVar021].f_80 = 0;
		iVar0++;
	}
	return;
}

bool Function_44(int iParam0) //Position: 0x1BB6 / 7094
{
	if (!Function_6(iParam0))
	{
		return 0;
	}
	return Function_61(&(Global_29008[iParam0]), 2048);
}

void Function_45(bool bParam0, float fParam1) //Position: 0x1BD4 / 7124
{
	if (!Function_46(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

bool Function_46(int iParam0) //Position: 0x1C12 / 7186
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x1C2E / 7214
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
		Function_48(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_53())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_48(var uParam0, bool bParam1) //Position: 0x1D28 / 7464
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &bParam1);
	return;
}

void Function_49(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1D35 / 7477
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
		Function_52();
	}
	if (bParam5)
	{
		Function_50(1048576);
	}
}

void Function_50(int iParam0) //Position: 0x1E48 / 7752
{
	Function_51(&Global_28842, iParam0);
	return;
}

void Function_51(var uParam0, var uParam1) //Position: 0x1E56 / 7766
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_52() //Position: 0x1E71 / 7793
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_50(16384);
	}
	return;
}

bool Function_53() //Position: 0x1E8D / 7821
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_54(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1E96 / 7830
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
		Function_55();
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

void Function_55() //Position: 0x1F7A / 8058
{
	int iVar0;
	
	Global_26960 = Function_56(StackVal);
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

int Function_56(int iParam0) //Position: 0x1FC8 / 8136
{
	if (!Function_57(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_57(int iParam0) //Position: 0x1FE0 / 8160
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_58(int iParam0) //Position: 0x1FF5 / 8181
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_59(var uParam0, int iParam1) //Position: 0x2008 / 8200
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

int Function_60(int iParam0) //Position: 0x201F / 8223
{
	if (!Function_6(iParam0))
	{
		return 1;
	}
	return Function_61(&(Global_29008[iParam0]), 4);
}

bool Function_61(var uParam0, int iParam1) //Position: 0x203B / 8251
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_62(var uParam0, int iParam1) //Position: 0x2057 / 8279
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_63() //Position: 0x2066 / 8294
{
	bool bVar0;
	
	Function_71(3, 3);
	bVar0 = bVar0;
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/dealer_and_customer", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_down", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_69(&bLocal_377 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_back", 1, 0);
	if (!Function_64(&bLocal_377 + 4))
	{
		return 0;
	}
	bLocal_377 = FIND_NAMED_LAYOUT("WreckSerendipity_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_377))
	{
		bLocal_377 = CREATE_LAYOUT("WreckSerendipity_layout");
	}
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "dealer_and_customer", "dealer_and_customer", 354.635f, 73.48884f, 1954.173f, 0.0f, -183.4713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Pee", "Pee", 352.6351f, 73.48754f, 1966.528f, 0.0f, 153.3772f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Pee1", "Pee", 333.9339f, 74.63037f, 1955.042f, 0.0f, -113.9692f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Pee3", "Pee", 362.1963f, 78.70888f, 1984.005f, 0.0f, -43.27293f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", 356.695f, 73.3355f, 1980.807f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", 363.685f, 78.22058f, 1988.836f, 0.0f, -131.002f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", 361.81f, 73.49126f, 1945.766f, 0.0f, 68.75826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", 337.9365f, 74.69586f, 1948.573f, 0.0f, -29.85284f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "rand_idle_stand", "rand_idle_stand", 338.2788f, 74.59718f, 1942.472f, 0.0f, -164.8241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "rand_idle_stand1", "rand_idle_stand", 351.7368f, 73.51026f, 1961.27f, 0.0f, -153.2844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "rand_idle_stand2", "rand_idle_stand", 359.0939f, 78.41655f, 1991.795f, 0.0f, -161.0478f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "rand_idle_stand3", "rand_idle_stand", 351.7272f, 76.37608f, 1986.588f, 0.0f, 68.45935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "nsit_docks", "nsit_docks", 362.9535f, 73.49775f, 1944.367f, 0.0f, -116.2048f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_docks2", "nsit_docks", 358.1055f, 73.51682f, 1947.029f, 0.0f, 62.71283f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_docks3", "nsit_docks", 361.5993f, 73.51353f, 1974.203f, 0.0f, -118.1669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Sit_Ground_Drink", "Sit_Ground_Drink", 353.0802f, 73.92802f, 1977.584f, 0.0f, -63.59391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Sit_Ground_Drink1", "Sit_Ground_Drink", 352.9845f, 76.43525f, 1984.406f, 0.0f, 52.31681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_ground_play_harmonica", "sit_ground_play_harmonica", 341.3909f, 74.68107f, 1950.141f, 0.0f, -29.60669f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", 350.2228f, 73.50451f, 1963.835f, 0.0f, -27.04769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_ground_smoke", "sit_ground_smoke", 357.5717f, 76.21391f, 1981.747f, 0.0f, -29.00372f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_ground_smoke1", "sit_ground_smoke", 357.9307f, 79.30289f, 1980.97f, 0.0f, -168.4821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_ground_smoke2", "sit_ground_smoke", 335.3785f, 74.60644f, 1940.426f, 0.0f, -21.86767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_ground_smoke3", "sit_ground_smoke", 369.985f, 73.60038f, 1944.503f, 0.0f, -25.18101f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "smoking_stand", "smoking_stand", 353.5407f, 73.50629f, 1956.611f, 0.0f, 125.3635f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "smoking_stand1", "smoking_stand", 334.0739f, 74.63643f, 1949.386f, 0.0f, 123.4706f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "smoking_stand2", "smoking_stand", 374.6213f, 76.9418f, 1994.595f, 0.0f, -44.4191f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "smoking_stand3", "smoking_stand", 365.6466f, 75.12769f, 1987.063f, 0.0f, -36.65416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "smoking_stand4", "smoking_stand", 353.3409f, 73.00873f, 1989.625f, 0.0f, -317.8609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "stand_lookdistance_w_any", "stand_lookdistance_w_any", 354.8198f, 79.44684f, 1982.737f, 0.0f, 62.95712f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", 346.8859f, 74.01875f, 1984.04f, 0.0f, 129.3219f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", 339.8805f, 74.67838f, 1949.598f, 0.0f, 156.1538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "stand_yelling_down", "stand_yelling_down", 355.6973f, 79.40739f, 1982.143f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "dealer_and_customer1", "dealer_and_customer", 358.5869f, 78.8562f, 1986.106f, 0.0f, -152.8077f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "dealer_and_customer2", "dealer_and_customer", 355.8004f, 76.43654f, 1980.956f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "look_out_window_L", "look_out_window_L", 330.4191f, 74.60296f, 1937.536f, 0.0f, 107.1152f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Rand_Idle_NearWall", "Rand_Idle_NearWall", 331.1541f, 74.41691f, 1933.66f, 0.0f, 66.63307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "lean_fence_L_talking", "lean_fence_L_talking", 334.3096f, 74.60679f, 1942.392f, 0.0f, 153.1973f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", 371.9703f, 73.50294f, 1937.603f, 0.0f, -27.3343f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "sit_docks4", "nsit_docks", 375.2437f, 73.48671f, 1938.945f, 0.0f, -116.2048f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "Sit_Ground_Drink2", "Sit_Ground_Drink", 367.3382f, 73.51371f, 1936.028f, 0.0f, -113.1597f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "lean_fence_back", "lean_fence_back", 377.7558f, 73.52457f, 1924.431f, 0.0f, -117.9854f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(bLocal_377, "rand_idle_stand4", "rand_idle_stand", 371.8394f, 73.54734f, 1936.036f, 0.0f, -23.76552f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	return 1;
}

bool Function_64(int iParam0) //Position: 0x31B7 / 12727
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_68();
	iVar1 = 0;
	if (!Function_11(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_67(iParam0[iVar03], 8);
		}
		else if (Function_66())
		{
			iVar1 = 1;
			Function_67(iParam0[iVar03], 8);
		}
		Function_67(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_11(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_11(iParam0[03], 8) || iVar1));
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
				Function_67(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_11(iParam0[iVar03], 4))
		{
			if (!Function_11(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_67(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_67(iParam0[iVar03], 2);
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
							Function_67(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_67(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_67(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_67(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_67(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_67(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_67(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_67(iParam0[iVar03], 2);
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
	Function_65();
	return 1;
}

void Function_65() //Position: 0x3532 / 13618
{
	if (!Function_46(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_66() //Position: 0x3572 / 13682
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

void Function_67(var uParam0, int iParam1) //Position: 0x359D / 13725
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_68() //Position: 0x35AE / 13742
{
	if (!Function_46(128))
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

var Function_69(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x35F0 / 13808
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_70(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_67(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_70(var uParam0, int iParam1, int iParam2) //Position: 0x3628 / 13864
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_11(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_67(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_71(int iParam0, int iParam1) //Position: 0x36EC / 14060
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

bool Function_72() //Position: 0x3735 / 14133
{
	var uVar0;
	
	Function_71(3, 3);
	uVar0 = uVar0;
	Function_69(&Local_0 + 4, "p_uti_cover1x1x", 0, 0);
	if (!Function_64(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = FIND_NAMED_LAYOUT("WreckSerendipity_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("WreckSerendipity_layout");
	}
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "serv_fteGateway", 2, 381.3844f, 73.89673f, 1918.055f, 0.0f, -116.8491f, 0.0f, 1.809752f, 1.895603f, 1.489211f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave01_01_volume", 2, 369.0461f, 72.76907f, 1990.021f, 5.77427f, -39.13773f, -9.102025f, 7.222366f, 3.174353f, 2.714623f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave01_02_volume", 2, 358.5017f, 77.20467f, 1981.612f, 4.817313f, -39.7764f, -7.504075f, 5.131279f, 2.254162f, 1.511121f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave01_03_volume", 2, 370.8049f, 75.93214f, 1991.772f, 5.269572f, -40.22292f, -8.128338f, 5.165073f, 3.376552f, 2.402716f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave01_04_volume", 2, 369.1449f, 79.0653f, 1990.682f, 5.235663f, -39.14638f, -8.258895f, 2.121002f, 2.825132f, 1.825967f);
	Local_0.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave02_01_volume", 2, 370.223f, 75.72918f, 1991.275f, 5.269572f, -40.22292f, -8.128338f, 7.63935f, 2.734087f, 1.541851f);
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave02_02_volume", 2, 359.8776f, 80.21672f, 1982.945f, 3.731726f, -39.88539f, -5.807691f, 6.483201f, 3.224558f, 1.752705f);
	Local_0.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave02_03_volume", 2, 364.6038f, 79.72445f, 1986.947f, 5.235663f, -39.14638f, -8.258895f, 5.129038f, 2.825132f, 1.825967f);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave02_04_volume", 2, 363.7725f, 76.40098f, 1985.945f, 4.859982f, -38.86846f, -7.716203f, 6.23106f, 2.234058f, 1.617672f);
	Local_0.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave03_01_volume", 2, 357.6213f, 80.76938f, 1982.68f, 2.708181f, 46.5673f, 0.0f, 3.842283f, 3.313471f, 3.229902f);
	Local_0.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave03_02_volume", 2, 355.3372f, 77.62464f, 1980.292f, 6.16082f, 49.56707f, -0.2579204f, 3.842283f, 2.483483f, 2.596164f);
	Local_0.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave03_03_volume", 2, 346.894f, 76.0659f, 1976.21f, 173.6432f, -48.27009f, -177.8257f, 4.014162f, 2.489162f, 2.156245f);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave03_04_volume", 2, 364.6685f, 79.51928f, 1986.833f, 5.502387f, -39.77302f, -6.104938f, 3.842283f, 2.483483f, 1.680425f);
	Local_0.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_frontArmyInside", 2, 354.6598f, 73.53264f, 1952.88f, 0.0f, -26.18401f, 0.0f, 7.374529f, 4.802721f, 9.179728f);
	Local_0.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nv_armyOut", 2, 367.5521f, 74.74449f, 1919.367f, 2.019544f, -28.09787f, -1.427215f, 17.21668f, 10.33241f, 11.37183f);
	Local_0.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave04_01_volume1", 2, 352.3378f, 74.18173f, 1988.004f, 2.868367f, 49.5234f, 0.215327f, 3.131414f, 3.384139f, 4.805599f);
	Local_0.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave04_02_volume2", 2, 362.9832f, 75.96631f, 1996.585f, 2.868367f, 49.5234f, 0.215327f, 1.911655f, 3.057883f, 3.177613f);
	Local_0.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave04_03_volume3", 2, 378.2547f, 74.11359f, 2006.649f, 2.868367f, 49.5234f, 0.215327f, 6.777835f, 3.057883f, 7.978582f);
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave04_04_volume4", 2, 372.3968f, 78.03742f, 2000.41f, 2.868367f, 49.5234f, 0.215327f, 7.616277f, 3.057883f, 8.434227f);
	Local_0.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_wave04_05_volume5", 2, 359.0937f, 80.01684f, 1987.861f, 2.868367f, 49.5234f, 0.215327f, 7.440507f, 3.057883f, 4.082039f);
	Local_0.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_armyGuyVolume", 2, 382.8296f, 74.44317f, 1914.091f, 0.0f, -27.67019f, 0.0f, 4.720865f, 2.712977f, 3.516565f);
	Local_0.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_armyGuyVolume1", 2, 326.9892f, 75.18179f, 1938.161f, 0.0f, -27.67019f, 0.0f, 4.720865f, 2.712977f, 3.516565f);
	Local_0.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_armyGuyVolume2", 2, 337.385f, 75.51839f, 1946.909f, 0.0f, -27.67019f, 0.0f, 6.302911f, 2.240261f, 4.695028f);
	Local_0.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_battleDefend", 2, 353.6256f, 71.53215f, 1954.597f, 0.0f, -26.87849f, 0.0f, 22.30267f, 13.10049f, 31.45668f);
	Local_0.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_armyGuysRaid", 2, 365.7249f, 75.82236f, 1993.314f, 6.0f, 49.991f, 0.0f, 13.52193f, 9.604784f, 53.89392f);
	Local_0.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_stayOutVolume", 2, 369.0173f, 75.60808f, 1942.629f, 0.0f, -26.64459f, 0.0f, 8.804386f, 5.389972f, 5.858354f);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_CoverVolume", 2, 366.2262f, 74.1117f, 1942.925f, 0.0f, -28.30649f, 0.0f, 2.0f, 2.0f, 2.0f);
	Local_0.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_SER_VoltureSpawn", 2, 369.7945f, 91.72117f, 1996.438f, 3.867035f, -40.93152f, -5.890596f, 11.26994f, 4.418915f, 9.146477f);
	*(&Local_0 + 132) = { 342.1106f, 78.40516f, 1909.851f };
	*(&Local_0 + 132 + 12) = { -1.337137f, -123.3311f, 1.78734f };
	Local_0.f_156 = CREATE_POINT_IN_LAYOUT(Local_0, "serf_teleport", 342.1106f, 78.40516f, 1909.851f, -1.337137f, -123.3311f, 1.78734f);
	*(&Local_0 + 160) = { 383.1488f, 73.48019f, 1915.583f };
	*(&Local_0 + 160 + 12) = { 0.0f, 97.46603f, 0.0f };
	Local_0.f_184 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn1", 383.1488f, 73.48019f, 1915.583f, 0.0f, 97.46603f, 0.0f);
	*(&Local_0 + 188) = { 381.9163f, 73.68359f, 1914.084f };
	*(&Local_0 + 188 + 12) = { 0.0f, 158.4674f, 0.0f };
	Local_0.f_212 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn2", 381.9163f, 73.68359f, 1914.084f, 0.0f, 158.4674f, 0.0f);
	*(&Local_0 + 216) = { 383.6812f, 73.29027f, 1917.788f };
	*(&Local_0 + 216 + 12) = { 0.0f, 85.33881f, 0.0f };
	Local_0.f_240 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn3", 383.6812f, 73.29027f, 1917.788f, 0.0f, 85.33881f, 0.0f);
	*(&Local_0 + 244) = { 326.2454f, 74.39557f, 1937.776f };
	*(&Local_0 + 244 + 12) = { 0.0f, -120.4543f, 0.0f };
	Local_0.f_268 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn4", 326.2454f, 74.39557f, 1937.776f, 0.0f, -120.4543f, 0.0f);
	*(&Local_0 + 272) = { 328.0443f, 74.12612f, 1938.272f };
	*(&Local_0 + 272 + 12) = { 0.0f, -107.8311f, 0.0f };
	Local_0.f_296 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn5", 328.0443f, 74.12612f, 1938.272f, 0.0f, -107.8311f, 0.0f);
	*(&Local_0 + 300) = { 335.9885f, 74.60045f, 1947.672f };
	*(&Local_0 + 300 + 12) = { 0.0f, 232.9473f, 0.0f };
	Local_0.f_324 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn6", 335.9885f, 74.60045f, 1947.672f, 0.0f, 232.9473f, 0.0f);
	*(&Local_0 + 328) = { 339.5692f, 74.73612f, 1946.6f };
	*(&Local_0 + 328 + 12) = { 0.0f, 234.3701f, 0.0f };
	Local_0.f_352 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn7", 339.5692f, 74.73612f, 1946.6f, 0.0f, 234.3701f, 0.0f);
	*(&Local_0 + 356) = { 366.2724f, 73.48085f, 1942.84f };
	*(&Local_0 + 356 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_380 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Cover1Spot", 366.2724f, 73.48085f, 1942.84f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 384) = { 381.6037f, 73.30737f, 1918.245f };
	*(&Local_0 + 384 + 12) = { 0.0f, 67.67715f, 0.0f };
	Local_0.f_408 = CREATE_POINT_IN_LAYOUT(Local_0, "f_Army1", 381.6037f, 73.30737f, 1918.245f, 0.0f, 67.67715f, 0.0f);
	*(&Local_0 + 412) = { 368.3727f, 71.73695f, 1989.205f };
	*(&Local_0 + 412 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_436 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave01_01", 368.3727f, 71.73695f, 1989.205f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 440) = { 358.6013f, 76.19056f, 1981.798f };
	*(&Local_0 + 440 + 12) = { 0.0f, -53.37406f, 0.0f };
	Local_0.f_464 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave01_02", 358.6013f, 76.19056f, 1981.798f, 0.0f, -53.37406f, 0.0f);
	*(&Local_0 + 468) = { 371.201f, 74.4006f, 1992.067f };
	*(&Local_0 + 468 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_492 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave01_03", 371.201f, 74.4006f, 1992.067f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 496) = { 368.9348f, 77.69176f, 1990.682f };
	*(&Local_0 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_520 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave01_04", 368.9348f, 77.69176f, 1990.682f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 524) = { 369.7798f, 74.17868f, 1996.924f };
	*(&Local_0 + 524 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_548 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave02_01", 369.7798f, 74.17868f, 1996.924f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 552) = { 356.2594f, 78.67737f, 1990.361f };
	*(&Local_0 + 552 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_576 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave02_02", 356.2594f, 78.67737f, 1990.361f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 580) = { 368.4907f, 77.18343f, 1999.804f };
	*(&Local_0 + 580 + 12) = { 0.0f, 92.98814f, 0.0f };
	Local_0.f_604 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave02_03", 368.4907f, 77.18343f, 1999.804f, 0.0f, 92.98814f, 0.0f);
	*(&Local_0 + 608) = { 361.5674f, 75.31189f, 1987.549f };
	*(&Local_0 + 608 + 12) = { 0.0f, -67.33755f, 0.0f };
	Local_0.f_632 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave02_04", 361.5674f, 75.31189f, 1987.549f, 0.0f, -67.33755f, 0.0f);
	*(&Local_0 + 636) = { 354.2866f, 79.35274f, 1986.668f };
	*(&Local_0 + 636 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_660 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave03_01", 354.2866f, 79.35274f, 1986.668f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 664) = { 351.9842f, 76.45283f, 1987.307f };
	*(&Local_0 + 664 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_688 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave03_02", 351.9842f, 76.45283f, 1987.307f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 692) = { 346.2249f, 74.2135f, 1982.753f };
	*(&Local_0 + 692 + 12) = { 0.0f, 46.39677f, 0.0f };
	Local_0.f_716 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave03_03", 346.2249f, 74.2135f, 1982.753f, 0.0f, 46.39677f, 0.0f);
	*(&Local_0 + 720) = { 367.5039f, 77.15009f, 2000.852f };
	*(&Local_0 + 720 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_744 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave03_04", 367.5039f, 77.15009f, 2000.852f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 748) = { 354.9929f, 78.93938f, 1988.493f };
	*(&Local_0 + 748 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_772 = CREATE_POINT_IN_LAYOUT(Local_0, "f_throwerSpawn1", 354.9929f, 78.93938f, 1988.493f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 776) = { 353.1621f, 72.92008f, 1988.594f };
	*(&Local_0 + 776 + 12) = { 0.0f, -313.5688f, 0.0f };
	Local_0.f_800 = CREATE_POINT_IN_LAYOUT(Local_0, "f_finalGuy01", 353.1621f, 72.92008f, 1988.594f, 0.0f, -313.5688f, 0.0f);
	*(&Local_0 + 804) = { 364.6204f, 74.67107f, 1994.666f };
	*(&Local_0 + 804 + 12) = { 0.0f, -219.3395f, 0.0f };
	Local_0.f_828 = CREATE_POINT_IN_LAYOUT(Local_0, "f_finalGuy02", 364.6204f, 74.67107f, 1994.666f, 0.0f, -219.3395f, 0.0f);
	*(&Local_0 + 832) = { 381.5958f, 72.56422f, 2006.524f };
	*(&Local_0 + 832 + 12) = { 0.0f, -592.0921f, 0.0f };
	Local_0.f_856 = CREATE_POINT_IN_LAYOUT(Local_0, "f_finalGuy03", 381.5958f, 72.56422f, 2006.524f, 0.0f, -592.0921f, 0.0f);
	*(&Local_0 + 860) = { 372.9387f, 76.64568f, 2001.704f };
	*(&Local_0 + 860 + 12) = { 0.0f, -471.6721f, 0.0f };
	Local_0.f_884 = CREATE_POINT_IN_LAYOUT(Local_0, "f_finalGuy04", 372.9387f, 76.64568f, 2001.704f, 0.0f, -471.6721f, 0.0f);
	*(&Local_0 + 888) = { 358.8818f, 78.77789f, 1987.273f };
	*(&Local_0 + 888 + 12) = { 0.0f, -866.5748f, 0.0f };
	Local_0.f_912 = CREATE_POINT_IN_LAYOUT(Local_0, "f_finalGuy05", 358.8818f, 78.77789f, 1987.273f, 0.0f, -866.5748f, 0.0f);
	*(&Local_0 + 916) = { 372.3757f, 73.58804f, 1943.048f };
	*(&Local_0 + 916 + 12) = { 0.0f, 61.22559f, 0.0f };
	Local_0.f_940 = CREATE_POINT_IN_LAYOUT(Local_0, "f_amoFootLocker", 372.3757f, 73.58804f, 1943.048f, 0.0f, 61.22559f, 0.0f);
	*(&Local_0 + 944) = { 359.4891f, 73.48854f, 1949.504f };
	*(&Local_0 + 944 + 12) = { 0.0f, -181.6368f, 0.0f };
	Local_0.f_968 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn_dest_01", 359.4891f, 73.48854f, 1949.504f, 0.0f, -181.6368f, 0.0f);
	*(&Local_0 + 972) = { 356.0711f, 73.49027f, 1951.346f };
	*(&Local_0 + 972 + 12) = { 0.0f, -181.6368f, 0.0f };
	Local_0.f_996 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn_dest_02", 356.0711f, 73.49027f, 1951.346f, 0.0f, -181.6368f, 0.0f);
	*(&Local_0 + 1000) = { 357.6504f, 73.42057f, 1952.052f };
	*(&Local_0 + 1000 + 12) = { 0.0f, -181.6368f, 0.0f };
	Local_0.f_1024 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn_dest_03", 357.6504f, 73.42057f, 1952.052f, 0.0f, -181.6368f, 0.0f);
	*(&Local_0 + 1028) = { 345.9885f, 73.94094f, 1950.099f };
	*(&Local_0 + 1028 + 12) = { 0.0f, -114.4222f, 0.0f };
	Local_0.f_1052 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn_dest_04", 345.9885f, 73.94094f, 1950.099f, 0.0f, -114.4222f, 0.0f);
	*(&Local_0 + 1056) = { 351.4046f, 73.94094f, 1962.924f };
	*(&Local_0 + 1056 + 12) = { 0.0f, -146.6611f, 0.0f };
	Local_0.f_1080 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn_dest_05", 351.4046f, 73.94094f, 1962.924f, 0.0f, -146.6611f, 0.0f);
	*(&Local_0 + 1084) = { 349.4418f, 74.02776f, 1954.098f };
	*(&Local_0 + 1084 + 12) = { 0.0f, -146.6611f, 0.0f };
	Local_0.f_1108 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn_dest_06", 349.4418f, 74.02776f, 1954.098f, 0.0f, -146.6611f, 0.0f);
	*(&Local_0 + 1112) = { 352.9106f, 74.02776f, 1955.399f };
	*(&Local_0 + 1112 + 12) = { 0.0f, -146.6611f, 0.0f };
	Local_0.f_1136 = CREATE_POINT_IN_LAYOUT(Local_0, "f_armySpawn_dest_07", 352.9106f, 74.02776f, 1955.399f, 0.0f, -146.6611f, 0.0f);
	*(&Local_0 + 1140) = { 365.4543f, 73.4912f, 1941.518f };
	*(&Local_0 + 1140 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1164 = CREATE_POINT_IN_LAYOUT(Local_0, "f_deadSniperLocation", 365.4543f, 73.4912f, 1941.518f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1168) = { 366.0441f, 74.75908f, 1990.655f };
	*(&Local_0 + 1168 + 12) = { -48.75263f, 95.34057f, -48.87616f };
	Local_0.f_1192 = CREATE_POINT_IN_LAYOUT(Local_0, "f_treasurePosition01", 366.0441f, 74.75908f, 1990.655f, -48.75263f, 95.34057f, -48.87616f);
	*(&Local_0 + 1196) = { 355.7756f, 79.19026f, 1985.049f };
	*(&Local_0 + 1196 + 12) = { 0.0f, -129.7912f, 0.0f };
	Local_0.f_1220 = CREATE_POINT_IN_LAYOUT(Local_0, "f_treasurePosition02", 355.7756f, 79.19026f, 1985.049f, 0.0f, -129.7912f, 0.0f);
	*(&Local_0 + 1224) = { 372.169f, 77.10278f, 1995.465f };
	*(&Local_0 + 1224 + 12) = { -5.420354f, -219.4093f, -8.500571f };
	Local_0.f_1248 = CREATE_POINT_IN_LAYOUT(Local_0, "f_treasurePosition03", 372.169f, 77.10278f, 1995.465f, -5.420354f, -219.4093f, -8.500571f);
	*(&Local_0 + 1252) = { 379.9999f, 73.56125f, 1916.0f };
	*(&Local_0 + 1252 + 12) = { 0.0f, -44.06441f, 0.0f };
	Local_0.f_1276 = CREATE_POINT_IN_LAYOUT(Local_0, "f_retreatPoint", 379.9999f, 73.56125f, 1916.0f, 0.0f, -44.06441f, 0.0f);
	*(&Local_0 + 1280) = { 368.9042f, 73.58549f, 1944.217f };
	*(&Local_0 + 1280 + 12) = { 0.0f, -31.43598f, 0.0f };
	Local_0.f_1304 = CREATE_POINT_IN_LAYOUT(Local_0, "f_amoFootLocker01", 368.9042f, 73.58549f, 1944.217f, 0.0f, -31.43598f, 0.0f);
	*(&Local_0 + 1308) = { 356.4168f, 73.48362f, 1979.343f };
	*(&Local_0 + 1308 + 12) = { 0.0f, 148.4223f, 0.0f };
	Local_0.f_1332 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave04_raid01", 356.4168f, 73.48362f, 1979.343f, 0.0f, 148.4223f, 0.0f);
	*(&Local_0 + 1336) = { 370.6174f, 73.64816f, 2001.876f };
	*(&Local_0 + 1336 + 12) = { 0.0f, 225.5512f, 0.0f };
	Local_0.f_1360 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave04_raid02", 370.6174f, 73.64816f, 2001.876f, 0.0f, 225.5512f, 0.0f);
	*(&Local_0 + 1364) = { 359.561f, 75.32771f, 1993.457f };
	*(&Local_0 + 1364 + 12) = { 0.0f, 225.5512f, 0.0f };
	Local_0.f_1388 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave04_raid03", 359.561f, 75.32771f, 1993.457f, 0.0f, 225.5512f, 0.0f);
	*(&Local_0 + 1392) = { 373.7929f, 73.20841f, 2004.874f };
	*(&Local_0 + 1392 + 12) = { 0.0f, 225.5512f, 0.0f };
	Local_0.f_1416 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave04_raid04", 373.7929f, 73.20841f, 2004.874f, 0.0f, 225.5512f, 0.0f);
	*(&Local_0 + 1420) = { 375.2634f, 76.26759f, 2000.713f };
	*(&Local_0 + 1420 + 12) = { 0.0f, 94.84293f, 0.0f };
	Local_0.f_1444 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave04_raid05", 375.2634f, 76.26759f, 2000.713f, 0.0f, 94.84293f, 0.0f);
	*(&Local_0 + 1448) = { 362.0303f, 78.00477f, 1995.136f };
	*(&Local_0 + 1448 + 12) = { 0.0f, 15.82706f, 0.0f };
	Local_0.f_1472 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave04_raid06", 362.0303f, 78.00477f, 1995.136f, 0.0f, 15.82706f, 0.0f);
	*(&Local_0 + 1476) = { 367.208f, 77.92383f, 1990.033f };
	*(&Local_0 + 1476 + 12) = { 0.0f, 74.69331f, 0.0f };
	Local_0.f_1500 = CREATE_POINT_IN_LAYOUT(Local_0, "f_wave04_raid07", 367.208f, 77.92383f, 1990.033f, 0.0f, 74.69331f, 0.0f);
	Local_0.f_1504 = Function_73(Local_0, "cover1x1x0", "p_uti_cover1x1x", 363.1493f, 73.48016f, 1943.905f, 0.0f, -26.54478f, 0.0f, 1);
	return 1;
}

var Function_73(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9) //Position: 0x5041 / 20545
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	uParam9 = uParam9;
	return "";
}

void Function_74(bool bParam0, int iParam1) //Position: 0x506B / 20587
{
	if (!Function_46(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

int Function_75(int iParam0) //Position: 0x50A6 / 20646
{
	if (Global_3421)
	{
		return 0;
	}
	*iParam0 = *iParam0;
	if (Global_3380 || Global_3379)
	{
		return 0;
	}
	if (Global_3382)
	{
		return 0;
	}
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3379)
	{
		return 0;
	}
	if (Global_3392)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 1;
	}
	if (Global_3393)
	{
		return 0;
	}
	if (Global_3395 || Global_3396)
	{
		return 0;
	}
	if (Function_61(iParam0, 256))
	{
		return 0;
	}
	if (Function_53())
	{
		return 0;
	}
	return 1;
}

