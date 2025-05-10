//Decompiled with MagicRDR v1.0
//Function Count : 152
//Statics Count : 64
//Natives Count : 283
//Parameters Count : 1

#region Local Var
	bool bLocal_0 = false;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	bool bLocal_7 = false;
	bool bLocal_8 = false;
	bool bLocal_9 = false;
	bool bLocal_10 = false;
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<12> Local_18[3];
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* cLocal_59 = NULL;
	int iLocal_60 = 0;
	bool bLocal_61 = false;
	bool bLocal_62 = false;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	iLocal_1 = 0;
	bLocal_2 = false;
	iLocal_3 = 0;
	iLocal_12 = 0;
	iLocal_13 = 0;
	if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
	{
		LOG_ERROR("User requested break (At GenericGringo startup)");
	}
	Function_151("STARTS");
	Function_150(uScriptParam_0);
	iLocal_55 = 0;
	Function_148(uScriptParam_0, &iLocal_55);
	while (IS_GRINGO_ACTIVE())
	{
		Function_147(uScriptParam_0);
		if (UNK_0xBBB2780E() && GRINGO_DEBUG_IS_SELECTED())
		{
			LOG_ERROR("User requested break (During GenericGringo loop)");
		}
		bVar1 = GRINGO_GET_MY_OBJECT_REF();
		if (IS_OBJECT_VALID(bVar1))
		{
			GET_OBJECT_POSITION(bVar1, &uLocal_56);
		}
		iVar2 = 0;
		bLocal_61 = false;
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			iVar3 = 4294967295;
			iVar0 = 0;
			while (iVar0 < (iLocal_55 - 1))
			{
				if (Local_18[iVar012].f_12 == GRINGO_GET_MSG_COMPONENT_CONTEXT())
				{
					iVar3 = iVar0;
					iVar0 = iLocal_55;
				}
				iVar0++;
			}
			if (iVar3 >= 4294967295)
			{
				bVar4 = false;
				bVar5 = false;
				if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
				{
					bLocal_61 = true;
				}
				switch (GRINGO_GET_MESSAGE_TYPE())
				{
					case 0x00000000:
						if (Function_140(&(Local_18[iVar312]), &bVar4))
						{
							Function_138(GRINGO_GET_REQUESTING_ACTOR(), Local_18[iVar312].f_12);
							bVar5 = true;
						}
						break;
					
					case 0x00000001:
						if (Function_140(&(Local_18[iVar312]), &bVar4))
						{
							Function_138(GRINGO_GET_REQUESTING_ACTOR(), Local_18[iVar312].f_12);
							if (bVar4)
							{
								Function_134(&(Local_18[iVar312]));
							}
							bVar5 = true;
						}
						break;
					
					case 0x00000002:
						if (Local_18[iVar312].f_16 == GRINGO_GET_REQUESTING_ACTOR())
						{
							Function_133("eGRINGO_EndUse: Stop use by request", Local_18[iVar312].f_16);
							Function_132(Local_18[iVar312].f_16, 1);
							if (IS_ACTOR_VALID(Local_18[iVar312].f_16))
							{
								if (IS_ACTOR_LOCAL_PLAYER(Local_18[iVar312].f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(Local_18[iVar312].f_12))
								{
									GRINGO_ENABLE_PLAYER_CONTROL(Local_18[iVar312].f_16, 1);
								}
							}
							if (GRINGO_IS_FORCE_QUITTING())
							{
								Function_120(&(Local_18[iVar312]), 0);
							}
							else if (Local_18[iVar312].f_44 < 8)
							{
								Function_119(&(Local_18[iVar312]));
								Local_18[iVar312].f_44 = 8;
							}
							bVar5 = true;
						}
						else
						{
							Function_151("Stop use request actor mismatch!!");
						}
						break;
				}
				GRINGO_SET_MESSAGE_RETURN(bVar5);
			}
			else
			{
				GRINGO_SET_MESSAGE_RETURN(false);
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < (iLocal_55 - 1))
			{
				if (Function_118(Local_18[iVar012].f_40, 2))
				{
					if (!Function_43(&(Local_18[iVar012])))
					{
						Function_151("Quitting due to update end");
						Function_120(&(Local_18[iVar012]), 1);
					}
				}
				if (Function_42(&(Local_18[iVar012]), 0))
				{
					Function_32(&(Local_18[iVar012]));
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < (iLocal_55 - 1))
		{
			if (Function_118(Local_18[iVar012].f_40, 2))
			{
				iVar2 = 1;
			}
			iVar0++;
		}
		if (iVar2 || Function_4(uScriptParam_0))
		{
			if (bLocal_61)
			{
				GRINGO_WAIT(false);
			}
			else if (GET_DEBUG_DRAW_STATE())
			{
				GRINGO_WAIT(false);
			}
			else
			{
				GRINGO_WAIT(Function_3());
			}
		}
		else
		{
			GRINGO_STOP();
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_62))
	{
		Function_151("Removing quit context at script termination");
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_62);
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_55 - 1))
	{
		if (Function_118(Local_18[iVar012].f_40, 2))
		{
			Function_2("Gringo termination calls StopUse", Local_18[iVar012].f_16);
			Function_120(&(Local_18[iVar012]), 0);
		}
		if (GRINGO_HANDLES_MOVEMENT(Local_18[iVar012].f_12))
		{
			SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", Local_18[iVar012].f_12);
		}
		Function_42(&(Local_18[iVar012]), 1);
		iVar0++;
	}
	Function_1(uScriptParam_0);
	Function_151("QUITS");
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x42E / 1070
{
	iParam0 = iParam0;
	if (IS_BLIP_VALID(bLocal_8))
	{
		REMOVE_BLIP(bLocal_8);
	}
	return;
}

void Function_2(int iParam0, bool bParam1) //Position: 0x445 / 1093
{
	char* cVar0;
	
	cVar0 = "InvalidActor";
	if (IS_OBJECT_VALID(bParam1))
	{
		cVar0 = GET_OBJECT_NAME(bParam1);
	}
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), bParam1, GET_TARGET_OBJECT(), cVar0, ": ", iParam0, 0);
	return;
}

int Function_3() //Position: 0x480 / 1152
{
	return 2000;
}

int Function_4(bool bParam0) //Position: 0x489 / 1161
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	bParam0 = bParam0;
	if (!Function_31(6))
	{
		return 0;
	}
	bVar0 = Function_30();
	if (!IS_ACTOR_VALID(bVar0) || Function_29())
	{
		return 0;
	}
	if (!IS_GRINGO_COMPONENT_VALID(bLocal_11))
	{
		bLocal_11 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, bParam0);
		bLocal_9 = GRINGO_GET_FIRST_NAMED_CHILD("Buy_News", 3, bLocal_11);
		bLocal_10 = GRINGO_GET_FIRST_NAMED_CHILD("Buy_NewsOld", 3, bLocal_11);
	}
	iVar1 = 0;
	if (Function_6(bLocal_9, &iVar1, 0) || Function_6(bLocal_10, &iVar1, 0))
	{
		if (!IS_BLIP_VALID(bLocal_8))
		{
			Function_5(GRINGO_GET_MY_OBJECT_REF());
			vVar2 = { StackVal, StackVal, Function_5(GRINGO_GET_MY_OBJECT_REF()) };
			bLocal_8 = ADD_BLIP_FOR_COORD(&vVar2, 527, 0f, 2, 0);
			SET_BLIP_MAX_DISTANCE(bLocal_8, 1.0f);
		}
	}
	return 0;
}

vector3 Function_5(bool bParam0) //Position: 0x534 / 1332
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

bool Function_6(bool bParam0, int iParam1, bool bParam2) //Position: 0x55B / 1371
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	if (!IS_OBJECT_VALID(Function_28(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase1")))
	{
		if (IS_BLIP_VALID(bLocal_8))
		{
			REMOVE_BLIP(bLocal_8);
		}
		return 0;
	}
	if (Function_27(472) > (SHIFT_LEFT(true, 9) - 1))
	{
		if (IS_BLIP_VALID(bLocal_8))
		{
			REMOVE_BLIP(bLocal_8);
		}
		return 0;
	}
	Function_19(&bVar1, &iVar2, &bVar0);
	bVar3 = Function_27(472);
	if (bVar3 == 4294967295)
	{
		bVar3 = false;
	}
	if (GRINGO_COMPONENT_CHECK_NAME("Buy_News", bParam0))
	{
		if (!GRINGO_GET_AVAILABILITY(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "Buy_News"))
		{
			return 0;
		}
		if (IS_ACTOR_VALID(bParam2))
		{
			if (Function_18() > 1 && IS_ACTOR_LOCAL_PLAYER(bParam2))
			{
				if (!iLocal_13)
				{
					Function_15("Cant_Afford_Paper", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_13 = 1;
				}
				return 0;
			}
		}
		bVar4 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0) + 6, GET_MINUTE(bVar0), GET_SECOND(bVar0));
		if (bVar1 != 0)
		{
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar4))
			{
				if (!Function_118(bVar3, bVar1))
				{
					PRINTSTRING("Can buy paper.");
					PRINTNL();
					PRINTSTRING("Cur stat is: ");
					PRINTINT(bVar3);
					PRINTNL();
					PRINTSTRING("Avail paper is: ");
					PRINTINT(bVar1);
					PRINTNL();
					return 1;
				}
			}
		}
		*iParam1 = 100;
		return 0;
	}
	if (GRINGO_COMPONENT_CHECK_NAME("Buy_NewsOld", bParam0))
	{
		bVar5 = false;
		while (bVar5 < 9)
		{
			if (iVar2 >= bVar5)
			{
				bVar7 = ROUND(POW(2.0f, TO_FLOAT(bVar5)));
				if (!Function_118(bVar3, bVar7))
				{
					iVar6++;
				}
			}
			bVar5++;
		}
		if (Function_18() <= iVar6)
		{
			if (IS_BLIP_VALID(bLocal_8))
			{
				REMOVE_BLIP(bLocal_8);
			}
			if (IS_ACTOR_VALID(bParam2))
			{
				if (!iLocal_13 && IS_ACTOR_LOCAL_PLAYER(bParam2))
				{
					Function_15("Cant_Afford_Paper", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_13 = 1;
				}
			}
			return 0;
		}
		if (bVar1 != bVar3 + 1)
		{
			bVar5 = false;
			while (bVar5 < (iVar2 - 1))
			{
				bVar8 = POW(2.0f, TO_FLOAT(bVar5));
				if ((bVar3 && ROUND(bVar8)) == 0)
				{
					if ((!Function_14(0, 0, 1, 1) && !Global_63096) && !Function_13(Global_76848, 0x8000000))
					{
						Function_7(Global_34573, 0x8000000, 3, 0);
					}
					return 1;
				}
				bVar5++;
			}
			return 0;
		}
	}
	return 0;
}

void Function_7(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x7CB / 1995
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_9(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_8(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_8(char* cParam0, int iParam1) //Position: 0x837 / 2103
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_9(bool bParam0, var uParam1, int iParam2) //Position: 0x86E / 2158
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_11(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_10(uVar0))
		{
			case 0x00000002:
				if (!Function_13(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_10(char* cParam0) //Position: 0x8E6 / 2278
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_11(int iParam0) //Position: 0x987 / 2439
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_12(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_12(int iParam0, int iParam1) //Position: 0x9C4 / 2500
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_13(var uParam0, int iParam1) //Position: 0x9D7 / 2519
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_14(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x9EA / 2538
{
	iParam0 = iParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && iParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_15(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA8E / 2702
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_16(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_16(int iParam0) //Position: 0xB09 / 2825
{
	char* cVar0[16];
	
	if (!Function_17())
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

bool Function_17() //Position: 0xB48 / 2888
{
	if (Function_118(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_18() //Position: 0xB63 / 2915
{
	return Function_27(0);
}

void Function_19(var uParam0, var uParam1, int iParam2) //Position: 0xB6D / 2925
{
	if (Function_24(57, 0))
	{
		*uParam0 = SHIFT_LEFT(true, 8);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 8;
	}
	else if (Function_24(43, 0) && Function_24(46, 0))
	{
		*uParam0 = SHIFT_LEFT(true, 7);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 7;
	}
	else if (Function_24(46, 0))
	{
		*uParam0 = SHIFT_LEFT(true, 6);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 6;
	}
	else if (Function_24(41, 0))
	{
		*uParam0 = SHIFT_LEFT(true, 5);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 5;
	}
	else if (Function_24(34, 0) && Function_24(31, 0))
	{
		*uParam0 = SHIFT_LEFT(true, 4);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 4;
	}
	else if (Function_24(26, 0))
	{
		*uParam0 = SHIFT_LEFT(true, 3);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 3;
	}
	else if (Function_24(23, 0))
	{
		*uParam0 = SHIFT_LEFT(true, 2);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 2;
	}
	else if (Function_24(17, 0))
	{
		*uParam0 = SHIFT_LEFT(true, true);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 1;
	}
	else if (Function_24(4, 0))
	{
		*uParam0 = SHIFT_LEFT(true, false);
		*iParam2 = Function_20(StackVal);
		*uParam1 = 0;
	}
	return;
}

bool Function_20(int iParam0) //Position: 0xCDD / 3293
{
	if (!Function_21(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, 0);
	}
	return Global_13172[iParam011].f_36;
}

bool Function_21(int iParam0) //Position: 0xCFC / 3324
{
	if (!Function_23(iParam0))
	{
		return 0;
	}
	if (!Function_22(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_22(int iParam0) //Position: 0xD20 / 3360
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_23(int iParam0) //Position: 0xD35 / 3381
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_24(int iParam0, bool bParam1) //Position: 0xD4C / 3404
{
	int iVar0;
	
	iVar0 = Function_25(iParam0);
	if (!Function_23(iVar0))
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

var Function_25(int iParam0) //Position: 0xD89 / 3465
{
	if (!Function_26(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_26(int iParam0) //Position: 0xDA3 / 3491
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_27(int iParam0) //Position: 0xDB9 / 3513
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

var Function_28(bool bParam0, bool bParam1) //Position: 0xDFA / 3578
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

var Function_29() //Position: 0xE07 / 3591
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_30() //Position: 0xE10 / 3600
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_31(int iParam0) //Position: 0xE25 / 3621
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_32(int iParam0) //Position: 0xE41 / 3649
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!Function_118(iParam0->f_40, 2))
	{
		Function_132(iParam0->f_16, 0);
	}
	else if (UNK_0x0A0E660E() || Function_41(iParam0))
	{
		if (iParam0->f_44 == 6)
		{
			if (Function_39(iParam0) <= Function_37(iParam0->f_12))
			{
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
					{
						if (UNK_0x0A0E660E() || !Global_3418)
						{
							bVar1 = Function_35(iParam0->f_12, &bVar0);
							if (!bVar0 && UNK_0x0A0E660E())
							{
								bVar1 = "nDisengage";
								bVar0 = true;
							}
							if (bVar0)
							{
								bLocal_61 = true;
								if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_62))
								{
									Function_151("ManagePlayerQuit: Create quit context");
									if (Function_34(iParam0->f_12, "UseQuitBOverride", 0))
									{
										bLocal_62 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 5, false, 0, 0, 0, 4294967295, 0);
									}
									else
									{
										bLocal_62 = ADD_SCRIPT_USE_CONTEXT(bVar1, 500, 4, false, 0, 0, 0, 4294967295, 0);
									}
								}
								if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_62))
								{
									Function_2("USE CONTEXT QUIT", iParam0->f_16);
									Function_119(iParam0);
									iParam0->f_44 = 8;
									if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_62))
									{
										Function_151("ManagePlayerQuit: Release quit context - already pressed");
										RELEASE_SCRIPT_USE_CONTEXT(bLocal_62);
										iVar2 = 0;
										if (GET_GRINGO_BOOL_ATTR("DeactivateChildren", iParam0->f_12, &iVar2))
										{
											GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
										}
									}
								}
								if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
								{
									if (Function_33(iParam0->f_16))
									{
										Function_119(iParam0);
										Function_2("STICK QUIT", iParam0->f_16);
										iParam0->f_44 = 8;
										if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_62))
										{
											Function_151("ManagePlayerQuit: Release quit context - used stick");
											RELEASE_SCRIPT_USE_CONTEXT(bLocal_62);
										}
									}
								}
							}
						}
						else if (Global_3418)
						{
							if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_62))
							{
								Function_151("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
								RELEASE_SCRIPT_USE_CONTEXT(bLocal_62);
							}
						}
					}
				}
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_62))
		{
			Function_151("ManagePlayerQuit: Release quit context - due to wrong phase for quit");
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_62);
		}
	}
	return;
}

bool Function_33(bool bParam0) //Position: 0x112B / 4395
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	float fVar6;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = GET_CURRENT_GAME_TIME();
	vVar2 = { GET_STICK_X(iVar0, 0, 1), GET_STICK_Y(iVar0, 0, 1), 0.0f };
	bVar5 = VMAG(vVar2);
	if (bVar5 >= 0.2f)
	{
		DECOR_SET_BOOL(bParam0, "StickReset", true);
	}
	else if (bVar5 < 0.75f && DECOR_CHECK_EXIST(bParam0, "StickReset"))
	{
		if (!DECOR_GET_FLOAT_VERBOSE(bParam0, "DisconnectTime", &fVar6))
		{
			DECOR_SET_FLOAT(bParam0, "DisconnectTime", bVar1);
		}
		else if ((bVar1 - fVar6) < 0.15f)
		{
			DECOR_REMOVE(bParam0, "StickReset");
			DECOR_REMOVE(bParam0, "DisconnectTime");
			return 1;
		}
	}
	DECOR_REMOVE(bParam0, "DisconnectTime");
	return 0;
}

bool Function_34(bool bParam0, bool bParam1, int iParam2) //Position: 0x1225 / 4645
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_BOOL_ATTR(bParam1, bParam0, &iVar0);
	if (iVar0 >= 0)
	{
		return bVar1;
	}
	return iParam2;
}

bool Function_35(bool bParam0, int iParam1) //Position: 0x1241 / 4673
{
	return Function_36(bParam0, "UseQuit", iParam1);
}

bool Function_36(bool bParam0, bool bParam1, int iParam2) //Position: 0x1258 / 4696
{
	int iVar0;
	bool bVar1;
	
	bVar1 = GET_GRINGO_STRING_ATTR(bParam1, bParam0, &iVar0);
	*iParam2 = iVar0 < 0;
	if (*iParam2)
	{
		if (STRING_LENGTH(bVar1) != 0 || STRINGS_ARE_EQUAL(bVar1, "NoString"))
		{
			*iParam2 = 0;
			return bLocal_0;
		}
		return bVar1;
	}
	return bLocal_0;
}

float Function_37(bool bParam0) //Position: 0x129D / 4765
{
	return Function_38(bParam0, "MinimumUseTime", 0.0f);
}

bool Function_38(bool bParam0, bool bParam1, int iParam2) //Position: 0x12BA / 4794
{
	int iVar0;
	
	iVar0 = iParam2;
	GET_GRINGO_FLOAT_ATTR(&iVar0, bParam1, bParam0);
	return iVar0;
}

float Function_39(int iParam0) //Position: 0x12D0 / 4816
{
	if (Function_41(iParam0))
	{
		if (Function_40(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_40(int iParam0) //Position: 0x1398 / 5016
{
	return Function_118(*iParam0, 2);
}

bool Function_41(int iParam0) //Position: 0x13A5 / 5029
{
	return Function_118(*iParam0, 1);
}

bool Function_42(var uParam0, int iParam1) //Position: 0x13B2 / 5042
{
	bool bVar0;
	
	bVar0 = DECOR_CHECK_EXIST(uParam0->f_16, "GringoNoQuit");
	if (!bVar0)
	{
		return 1;
	}
	if (iParam1 && bVar0)
	{
		DECOR_REMOVE(uParam0->f_16, "GringoNoQuit");
		return 0;
	}
	return 0;
}

bool Function_43(int iParam0) //Position: 0x13FA / 5114
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	vector3 vVar17;
	float fVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	float fVar24;
	vector3 vVar25;
	bool bVar28;
	vector3 vVar29;
	int iVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	int iVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	float fVar42;
	int iVar43;
	bool bVar44;
	float fVar45;
	int iVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	var uVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	vector3 vVar57;
	bool bVar60;
	
	bVar12 = Function_117(iParam0->f_12);
	if (!(IS_ACTOR_VALID(iParam0->f_16) && IS_ACTOR_ALIVE(iParam0->f_16)))
	{
		Function_133("UpdateUse with invalid actor", iParam0->f_16);
		return 0;
	}
	if (!Function_34(iParam0->f_12, "DenyDamageTermination", 0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(iParam0->f_16)) >= 0.5f)
		{
			Function_133("Damage quit", iParam0->f_16);
			return 0;
		}
	}
	if (GET_ACTOR_INCAPACITATED(iParam0->f_16))
	{
		Function_133("Incapacitation quit", iParam0->f_16);
		return 0;
	}
	GET_POSITION(iParam0->f_16, &vVar17);
	bVar21 = true;
	if (iParam0->f_44 < 4)
	{
		iVar23 = STRING_TO_HASH("SharedPropName");
	}
	switch (iParam0->f_44)
	{
		case 0x00000002:
			bLocal_61 = true;
			if (IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (Function_116(iParam0->f_12, &fVar24))
				{
					GET_OBJECT_POSITION(GRINGO_GET_MY_OBJECT_REF(), &vVar25);
					vVar25.f_4 = (vVar25.y + (fVar24 + 0.1f));
					if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
					{
						bVar28 = IS_AREA_OBSTRUCTED2(vVar25, fVar24, GET_PHYSINST_FROM_ACTOR(iParam0->f_16), GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT()), 0);
					}
					else
					{
						bVar28 = IS_AREA_OBSTRUCTED(vVar25, fVar24, iParam0->f_16, 0);
					}
					if (IS_ACTOR_ON_TRAIN(iParam0->f_16, 0) || bVar28)
					{
						DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "Obstructed", true);
						iParam0->f_44 = 7;
						Function_2("Skip to eRewarding", iParam0->f_16);
						break;
					}
				}
			}
			if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
			{
				if (Function_111(iParam0->f_16, iParam0->f_12))
				{
					Function_2("Navigation complete (going to eStarting)", iParam0->f_16);
					NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
					iParam0->f_44 = 1;
					Function_110(iParam0);
				}
			}
			else
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				iParam0->f_44 = 1;
				Function_110(iParam0);
			}
			if (!Function_109(iParam0->f_12) && iParam0->f_44 != 1)
			{
				Function_2("SET_ACTOR_POSTURE", iParam0->f_16);
				SET_ACTOR_POSTURE(iParam0->f_16, 0);
			}
			break;
		
		case 0x00000001:
			bLocal_61 = true;
			Function_108(iParam0->f_12);
			if (((!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16)) && !Function_118(iParam0->f_40, 1)) && !DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
			{
				Function_107(iParam0->f_12);
			}
			fVar20 = Function_106(iParam0->f_12);
			if (Function_39(iParam0) < fVar20)
			{
				Function_2("INTRO TIMED OUT - ABORTING", iParam0->f_16);
				return 0;
			}
			if (Function_118(iParam0->f_40, 1))
			{
				Function_101(iParam0->f_12, &vVar3, &uVar6);
				if (!Function_118(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SUSPEND MOVER", iParam0->f_16);
						SUSPEND_MOVER(iParam0->f_16);
						Function_100(iParam0 + 40, 16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("nFIX MOVER", iParam0->f_16);
						SET_MOVER_FROZEN(iParam0->f_16, 1);
						Function_100(iParam0 + 40, 16);
					}
				}
				Function_2("MID ACTION TELEPORT", iParam0->f_16);
				vVar29.y = uVar6;
				if (DECOR_CHECK_EXIST(iParam0->f_16, "NoTeleport"))
				{
					SET_OBJECT_POSITION(iParam0->f_16, vVar3);
					SET_OBJECT_ORIENTATION(iParam0->f_16, vVar29);
					DECOR_REMOVE(iParam0->f_16, "NoTeleport");
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(iParam0->f_16, vVar3, uVar6, 1, true, Function_99());
				}
				if (!Function_118(iParam0->f_40, 1024))
				{
					Function_100(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_34(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			else if (Function_111(iParam0->f_16, iParam0->f_12))
			{
				NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 1);
				Function_2("FINISHED NAVIGATION", iParam0->f_16);
				if (!Function_118(iParam0->f_40, 1024))
				{
					Function_100(iParam0 + 40, 1024);
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, Function_34(iParam0->f_12, "AllowGestures", 1));
				}
				iParam0->f_44 = 3;
			}
			if (iParam0->f_44 != 3 && !Function_118(iParam0->f_40, 16))
			{
				if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
				{
					Function_2("SUSPEND MOVER", iParam0->f_16);
					SUSPEND_MOVER(iParam0->f_16);
					Function_100(iParam0 + 40, 16);
				}
				if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
				{
					Function_2("nFIX MOVER", iParam0->f_16);
					SET_MOVER_FROZEN(iParam0->f_16, 1);
					Function_100(iParam0 + 40, 16);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_118(iParam0->f_40, 32))
			{
				bLocal_61 = true;
				if (!ACTOR_IS_HOLSTERED(iParam0->f_16))
				{
					break;
				}
				Function_2("FINISHED HOLSTERING", iParam0->f_16);
			}
			iParam0->f_44 = 4;
		
		case 0x00000004:
			Function_93(iParam0->f_12);
			bLocal_61 = true;
			Function_92(iParam0);
			Function_89(iParam0, Function_91(iParam0->f_12));
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 0);
			}
			bVar33 = !GET_GRINGO_BOOL_ATTR("NoMidActionAnim", iParam0->f_12, &iVar32);
			if (iVar32 == 0)
			{
				bVar33 = Function_118(iParam0->f_40, 1);
			}
			bVar0 = Function_88(iParam0->f_16, iParam0->f_12, bVar33);
			if (!IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				iParam0->f_44 = 5;
				if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
				{
					GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
				}
			}
			else if (bVar12)
			{
				if (GRINGO_PLAY_ANIM_ON_ACTOR(iParam0->f_16, bVar0, bVar33))
				{
					if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
					{
						GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
					}
					iParam0->f_44 = 5;
					iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
					while (iVar11 >= 4294967295)
					{
						bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, iParam0->f_12);
						if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_36(bVar1, "AttachBone", &bVar10), Function_36(bVar1, "AttachLocator", &bVar10), 1))
						{
							Function_87(bVar1, iParam0->f_16);
							if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
							{
								bVar34 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
								if (IS_PHYSINST_VALID(bVar34))
								{
									ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar34, 0);
								}
							}
						}
						iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, iVar11 + 1);
					}
					bVar13 = false;
					uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
					while (bVar13 <= GRINGO_GET_ATTRIBUTE_COUNT(iParam0->f_12))
					{
						uVar15 = GRINGO_GET_ATTRIBUTE(iParam0->f_12, bVar13);
						if (GRINGO_IS_ATTRIBUTE_VALID(uVar15))
						{
							if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar15) == 2)
							{
								if (iVar23 == GRINGO_GET_ATTRIBUTE_HASH(uVar15))
								{
									iVar16 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar15, &uVar14);
									iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), 0);
									while (iVar11 >= 4294967295)
									{
										bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar11, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0));
										if (GRINGO_ATTACH_PROP_TO_ANIM(iParam0->f_16, bVar1, Function_36(bVar1, "AttachBone", &bVar10), Function_36(bVar1, "AttachLocator", &bVar10), 1))
										{
											if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
											{
												bVar35 = GRINGO_GET_PROP_FROM_COMPONENT(bVar1);
												if (IS_PHYSINST_VALID(bVar35))
												{
													ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), bVar35, 0);
												}
											}
											Function_87(bVar1, iParam0->f_16);
										}
										iVar11 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar16, 1, GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 0), iVar11 + 1);
									}
								}
							}
						}
						bVar13++;
					}
				}
			}
			if (iParam0->f_44 == 5)
			{
				Function_2("KICKED TO DOING START", iParam0->f_16);
				bVar8 = GET_TARGET_OBJECT();
				if (IS_OBJECT_VALID(bVar8))
				{
					Function_79(iParam0, bVar8, &iLocal_60, &cLocal_59);
					if (GET_OBJECT_TYPE(bVar8) != 15)
					{
						bVar22 = GET_PHYSINST_FROM_OBJECT(bVar8);
						if (IS_PHYSINST_VALID(bVar22))
						{
							if (!IS_PROP_FIXED(bVar22))
							{
								Function_100(iParam0 + 40, 256);
								SET_PROP_FIXED(bVar22, 1);
							}
							else
							{
								Function_12(iParam0 + 40, 256);
							}
						}
					}
				}
				GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, iParam0 + 20);
				if (Function_118(iParam0->f_40, 16))
				{
					if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNSUSPEND", iParam0->f_16);
						UNK_0x4A1D2E25(iParam0->f_16);
					}
					if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
					{
						Function_2("SCHEDULE STOP CUSTOM UNFIX", iParam0->f_16);
						UNK_0x817B6952(iParam0->f_16);
					}
				}
				GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 1);
				if (Function_78(iParam0->f_12))
				{
					GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 0);
				}
				if (IS_GRINGO_COMPONENT_VALID(bVar0))
				{
					if (Function_77(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_76(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(iParam0->f_16, bVar9);
							}
						}
					}
					else if (Function_75(iParam0->f_12))
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_76(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_LINKED_ANIM_TARGET(bVar9, iParam0->f_16);
							}
						}
					}
					bVar10 = false;
					bVar7 = Function_74(iParam0->f_12, &bVar10);
					if (bVar10)
					{
						bVar2 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
						if (IS_GRINGO_COMPONENT_VALID(bVar2))
						{
							bVar9 = Function_76(bVar2);
							if (IS_ACTOR_VALID(bVar9))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar9, bVar7);
							}
						}
					}
				}
				if (Function_73(iParam0->f_12))
				{
					if (!GET_ACTOR_ONE_SHOT_DEATH_STATUS(iParam0->f_16))
					{
						Function_100(iParam0 + 40, 8);
					}
					else
					{
						Function_12(iParam0 + 40, 8);
					}
					if (Function_118(iParam0->f_40, 8))
					{
						SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, true);
					}
				}
				else
				{
					Function_12(iParam0 + 40, 8);
				}
				if (Function_72(iParam0->f_12))
				{
					NET_SET_NODE_REPLICATION(iParam0->f_16, 1, 1);
					UNK_0xC17BAD12(iParam0->f_16);
				}
				bVar37 = Function_36(iParam0->f_12, "CustomReactNode", &bVar36);
				if (bVar36)
				{
					SET_REACT_NODE_FOR_ACTOR(iParam0->f_16, bVar37);
				}
				iVar38 = 1;
				bVar39 = Function_34(iParam0->f_12, "CanAnimalsAttack", iVar38);
				if (!bVar39)
				{
					if (IS_ACTOR_VALID(iParam0->f_16))
					{
						SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 0);
					}
				}
				Function_71(iParam0->f_16, iParam0->f_12);
				bVar40 = Function_34(iParam0->f_12, "AllowTalking", 1);
				if (!bVar40)
				{
					STOP_PED_SPEAKING(iParam0->f_16, 1);
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				Function_70();
			}
			iParam0->f_44 = 6;
			if (Function_118(iParam0->f_40, 1))
			{
				if (Function_69(iParam0->f_12))
				{
					Function_2("MID ACTION NODE", iParam0->f_16);
				}
			}
		
		case 0x00000006:
			if (!Function_53(iParam0->f_16, iParam0->f_12))
			{
				Function_2("CUSTOM QUIT DURING USE", iParam0->f_16);
				iParam0->f_44 = 8;
			}
			bVar0 = Function_88(iParam0->f_16, iParam0->f_12, Function_118(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_2("ANIMATION QUIT DURING USE", iParam0->f_16);
					if (GRINGO_WAS_USE_SUCCESSFUL(iParam0->f_16))
					{
						iParam0->f_44 = 7;
					}
					else
					{
						iParam0->f_44 = 8;
					}
				}
			}
			if (Function_39(iParam0) <= Function_37(iParam0->f_12))
			{
				GRINGO_SATISFY_MOTIVES_OF_ACTOR(iParam0->f_16, iParam0->f_12);
			}
			if (!IS_ACTOR_PLAYER(iParam0->f_16))
			{
				if (AI_SPEECH_GET_ALLOW_FOR_ACTOR(iParam0->f_16))
				{
					bVar41 = GRINGO_GET_FIRST_NAMED_CHILD("SpeechConts", 4, iParam0->f_12);
					if (IS_GRINGO_COMPONENT_VALID(bVar41))
					{
						if (!DECOR_GET_FLOAT_VERBOSE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", &fVar42))
						{
							DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
						}
						else
						{
							iVar43 = GRINGO_GET_ATTRIBUTE_COUNT(bVar41);
							if (!GET_GRINGO_FLOAT_ATTR(&fVar45, "MinDelay", bVar41))
							{
								fVar45 = 10.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							if (!GET_GRINGO_FLOAT_ATTR(&bVar44, "MaxDelay", bVar41))
							{
								bVar44 = 30.0f;
							}
							else
							{
								iVar43 = (iVar43 - 1);
							}
							bVar48 = GET_GRINGO_BOOL_ATTR("nForcePlay", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar47 = GET_GRINGO_BOOL_ATTR("AllowRepeat", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar49 = GET_GRINGO_BOOL_ATTR("SubtitlesOn", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							bVar50 = GET_GRINGO_BOOL_ATTR("ForceThruSpeechBlock", bVar41, &iVar46);
							if (iVar46 != 0)
							{
								iVar43 = (iVar43 - 1);
							}
							if (iVar43 >= 0)
							{
								if (GET_CURRENT_GAME_TIME() - fVar42) <= RAND_FLOAT_RANGE(fVar45, bVar44)
								{
									DECOR_SET_FLOAT(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime", GET_CURRENT_GAME_TIME());
									bVar51 = RAND_INT_RANGE(false, (iVar43 - 1));
									uVar52 = GRINGO_GET_ATTRIBUTE(bVar41, bVar51);
									bVar53 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar52, &iVar46);
									iVar54 = 1;
									STRING_CLEAR_TOKENIZER();
									iVar55 = SET_OWNERSHIP_STRAGGLER(bVar53, ",");
									if (iVar55 >= 1)
									{
										bVar56 = STRING_GET_TOKEN(1);
										if (STRINGS_ARE_EQUAL("super", bVar56))
										{
											iVar54 = 3;
										}
										else if (STRINGS_ARE_EQUAL("shout", bVar56))
										{
											iVar54 = 2;
										}
										else
										{
											iVar54 = 1;
										}
										bVar53 = STRING_GET_TOKEN(0);
									}
									SAY_SINGLE_LINE_STRING(iParam0->f_16, bVar53, bVar48, bVar47, iVar54, 0, bVar49, bVar50);
								}
							}
						}
					}
				}
			}
			if (iParam0->f_44 == 6)
			{
				bVar60 = Function_52(iParam0->f_12);
				if (bVar60 <= 0.0f)
				{
					GET_POSITION_OBJECT_SPACE(GRINGO_GET_MY_OBJECT_REF(), vVar17, &vVar57);
					if (VDIST(vVar57, *(iParam0 + 20)) < bVar60)
					{
						Function_2("UPDATE USE TOO FAR", iParam0->f_16);
						if (Function_51())
						{
							PRINTSTRING("   Distance was: ");
							PRINTFLOAT(VDIST(vVar57, *(iParam0 + 20)));
							PRINTSTRING(" [Max allowed is: ");
							PRINTFLOAT(bVar60);
							PRINTSTRING(" ] ");
							PRINTNL();
						}
						iParam0->f_44 = 8;
					}
				}
			}
			if (iParam0->f_44 == 6)
			{
				if (NET_IS_IN_SESSION())
				{
					bVar21 = NET_IS_OBJECT_LOCAL(iParam0->f_16);
				}
				if (IS_TASKED_TO_USE_GRINGO_FOREVER(iParam0->f_16, GRINGO_GET_MY_GRINGO_ID()))
				{
					bVar21 = false;
				}
				if (bVar21)
				{
					if (Function_50(iParam0->f_12) <= 0.0f)
					{
						if (Function_39(iParam0) < Function_50(iParam0->f_12))
						{
							Function_2("UPDATE USE USETIME SATISFIED", iParam0->f_16);
							iParam0->f_44 = 7;
						}
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_151("nRewarding");
			Function_49(iParam0->f_16, iParam0->f_12);
			Function_48(iParam0->f_16, iParam0->f_12);
			Function_47(iParam0->f_16, iParam0->f_12);
			SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "LastUserObject", iParam0->f_12);
			Function_100(iParam0 + 40, 64);
			iParam0->f_44 = 8;
			break;
		
		case 0x00000008:
			bLocal_61 = true;
			if (!Global_63096 && IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
			{
				if (!DECOR_CHECK_EXIST(iParam0->f_16, "NoGringoCamera"))
				{
					if (!Function_34(iParam0->f_12, "GringoCamNoEndCut", 0))
					{
						if (!Function_46())
						{
							Function_107(iParam0->f_12);
						}
					}
				}
				else
				{
					DECOR_REMOVE(iParam0->f_16, "NoGringoCamera");
				}
			}
			if (Function_34(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
			{
				Function_2("Use case quits - no cleapup due to DoNotCleanUpUserSettings attribute", iParam0->f_16);
				return 0;
			}
			Function_2("GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS", iParam0->f_16);
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			iParam0->f_44 = 9;
			Function_45(iParam0->f_16, iParam0->f_12);
			break;
		
		case 0x00000009:
			if (Function_118(iParam0->f_40, 1024))
			{
				Function_12(iParam0 + 40, 1024);
				if (!Function_34(iParam0->f_12, "AllowGestures", 0))
				{
					SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_16, true);
				}
			}
			if (DECOR_CHECK_EXIST(iParam0->f_16, "LobbyGringo"))
			{
				SET_FORCED_LOOK_ENABLE(iParam0->f_16, 1);
			}
			bLocal_61 = true;
			bVar0 = Function_88(iParam0->f_16, iParam0->f_12, Function_118(iParam0->f_40, 1));
			if (IS_GRINGO_COMPONENT_VALID(bVar0))
			{
				if (!GRINGO_IS_ACTOR_PLAYING_ANIM(iParam0->f_16, bVar0))
				{
					Function_2("ANIMATION FINISHED", iParam0->f_16);
					return 0;
				}
			}
			return 0;
			break;
	}
	Function_44(iParam0->f_16, iParam0->f_44);
	return 1;
}

void Function_44(bool bParam0, int iParam1) //Position: 0x254B / 9547
{
	if (IS_ACTOR_VALID(bParam0))
	{
		REPORT_GRINGO_USE_PHASE(bParam0, iParam1);
	}
	return;
}

void Function_45(var uParam0, var uParam1) //Position: 0x2560 / 9568
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return;
}

bool Function_46() //Position: 0x256E / 9582
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_47(var uParam0, bool bParam1) //Position: 0x259F / 9631
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("RemoveCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (HAS_CAPABILITY(uParam0, uVar6))
				{
					REMOVE_CAPABILITY(uParam0, uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_48(var uParam0, bool bParam1) //Position: 0x2613 / 9747
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = GRINGO_GET_ATTRIBUTE_COUNT(bParam1);
	iVar2 = STRING_TO_HASH("AddCapability");
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar3 = GRINGO_GET_ATTRIBUTE(bParam1, bVar1);
		iVar4 = GRINGO_GET_ATTRIBUTE_HASH(uVar3);
		if (iVar4 == iVar2)
		{
			iVar5 = 0;
			uVar6 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar3, &iVar5);
			if (iVar5 >= 0)
			{
				if (!HAS_CAPABILITY(uParam0, uVar6))
				{
					ADD_CAPABILITY(uParam0, uVar6);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2685 / 9861
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

float Function_50(bool bParam0) //Position: 0x2693 / 9875
{
	return Function_38(bParam0, "UseTime", 5.0f);
}

bool Function_51() //Position: 0x26A9 / 9897
{
	return (GET_DEBUG_DRAW_STATE() && GRINGO_DEBUG_IS_SELECTED());
}

bool Function_52(bool bParam0) //Position: 0x26B6 / 9910
{
	return Function_38(bParam0, "MoveAllowance", 1.5f);
}

bool Function_53(bool bParam0, bool bParam1) //Position: 0x26D6 / 9942
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		if (!bLocal_2)
		{
			return 0;
		}
		if (Function_41(&iLocal_4))
		{
			if (Function_39(&iLocal_4) <= 3.8f)
			{
				iVar0 = 0;
				if (GRINGO_COMPONENT_CHECK_NAME("Buy_News", bParam1))
				{
					iVar0 = 1;
				}
				else
				{
					if (Function_24(57, 0))
					{
						iVar1 = 8;
					}
					else if (Function_24(43, 0) && Function_24(46, 0))
					{
						iVar1 = 7;
					}
					else if (Function_24(46, 0))
					{
						iVar1 = 6;
					}
					else if (Function_24(41, 0))
					{
						iVar1 = 5;
					}
					else if (Function_24(34, 0) && Function_24(31, 0))
					{
						iVar1 = 4;
					}
					else if (Function_24(26, 0))
					{
						iVar1 = 3;
					}
					else if (Function_24(23, 0))
					{
						iVar1 = 2;
					}
					else if (Function_24(17, 0))
					{
						iVar1 = 1;
					}
					else if (Function_24(4, 0))
					{
						iVar1 = 0;
					}
					bVar2 = Function_27(472);
					bVar3 = false;
					while (bVar3 < 9)
					{
						if (iVar1 >= bVar3)
						{
							bVar4 = ROUND(POW(2.0f, TO_FLOAT(bVar3)));
							if (!Function_118(bVar2, bVar4))
							{
								iVar0++;
							}
						}
						bVar3++;
					}
				}
				Function_54(iVar0, 1);
				bVar5 = GET_ACTOR_FROM_OBJECT(Function_28(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar5, 103, Global_34573, 1, 1, 0, 4294967295, 4294967295, 0, 1);
				}
				Function_92(&iLocal_4);
			}
		}
	}
	return 1;
}

int Function_54(int iParam0, bool bParam1) //Position: 0x2830 / 10288
{
	bool bVar0;
	
	bVar0 = Function_27(0);
	if ((Function_27(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_55(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_27(0));
	return 1;
}

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x28C0 / 10432
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_68(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

void Function_56(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x2ABB / 10939
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_67(390))), 32);
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
					bVar19 = (Function_66(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_66(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_64(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_61(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_58(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_57(), &Var9);
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

var Function_57() //Position: 0x30E8 / 12520
{
	int iVar0;
	
	return iVar0;
}

var Function_58(int iParam0) //Position: 0x30F0 / 12528
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_59(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3101 / 12545
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_60(char* cParam0, bool bParam1) //Position: 0x31F6 / 12790
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_61(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x320F / 12815
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_63(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_62(Function_63(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_62(int iParam0, int iParam1) //Position: 0x3274 / 12916
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_63(int iParam0, bool bParam1) //Position: 0x3286 / 12934
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_64(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3298 / 12952
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
	if (((Function_65(iParam0) != 19 || Function_65(iParam0) != 17) || Function_65(iParam0) != 10) || Function_65(iParam0) != 9)
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

int Function_65(int iParam0) //Position: 0x33C8 / 13256
{
	return Global_35278[iParam020].f_48;
}

float Function_66(int iParam0) //Position: 0x33D7 / 13271
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_67(int iParam0) //Position: 0x3410 / 13328
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_68(int iParam0) //Position: 0x344D / 13389
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

bool Function_69(bool bParam0) //Position: 0x35E7 / 13799
{
	return IS_GRINGO_COMPONENT_VALID(GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam0));
}

void Function_70() //Position: 0x3606 / 13830
{
	return;
}

void Function_71(var uParam0, int iParam1) //Position: 0x360C / 13836
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return;
}

bool Function_72(int iParam0) //Position: 0x361A / 13850
{
	iParam0 = iParam0;
	return 1;
}

bool Function_73(bool bParam0) //Position: 0x3625 / 13861
{
	return Function_34(bParam0, "OneShotKill", 0);
}

bool Function_74(bool bParam0, int iParam1) //Position: 0x363F / 13887
{
	return Function_36(bParam0, "ParentAnimNode", iParam1);
}

bool Function_75(bool bParam0) //Position: 0x365D / 13917
{
	return Function_34(bParam0, "LinkToParentAnim", 0);
}

bool Function_76(bool bParam0) //Position: 0x367C / 13948
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < (Local_18 - 1))
	{
		if (Local_18[iVar012].f_12 == bParam0)
		{
			return Local_18[iVar012].f_16;
		}
		iVar0++;
	}
	return iVar1;
}

bool Function_77(bool bParam0) //Position: 0x36AF / 13999
{
	return Function_34(bParam0, "LinkParentToAnim", 0);
}

bool Function_78(bool bParam0) //Position: 0x36CE / 14030
{
	return Function_34(bParam0, "SingularUse", 0);
}

void Function_79(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x36E8 / 14056
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	char* cVar11;
	char* cVar12;
	bool bVar13;
	
	PRINTSTRING("CALLED ManageTargetRelation");
	PRINTNL();
	iVar2 = Function_86(uParam0->f_12, &bVar0);
	uVar3 = Function_85(uParam0->f_12, &bVar1);
	bVar4 = Function_84(uParam0->f_12);
	if (!((bVar0 || bVar1) || IS_GRINGO_COMPONENT_VALID(bVar4)))
	{
		bVar6 = Function_83(uParam0->f_12, &bVar5);
		if (bVar5)
		{
			bVar8 = Function_82(uParam0->f_12, &bVar7);
			if (!bVar7)
			{
				LOG_ERROR("Provided target physical attachment bone with no corresponding user attachment");
				return;
			}
			uParam0->f_32 = ATTACH_OBJECTS_PHYSICAL(bParam1, uParam0->f_16, bVar6, bVar8, 0.02f);
		}
		return;
	}
	bVar9 = true;
	if (bVar0)
	{
		bVar9 = ATTACH_SLOT_FROM_STRING(iVar2);
		if (Function_51())
		{
			Function_81();
			PRINTSTRING(" - got attach slot for target: ");
			PRINTINT(bVar9);
			PRINTNL();
		}
	}
	if (bVar1)
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, uVar3, Function_80(uParam0->f_12, &bVar10), false, bVar9);
	}
	else
	{
		ATTACH_PROP_TO_ANIM(uParam0->f_16, bParam1, Function_57(), Function_80(uParam0->f_12, &bVar10), false, bVar9);
	}
	if (IS_GRINGO_COMPONENT_VALID(bVar4))
	{
		PRINTSTRING("HAVE TARGET ANIM");
		PRINTNL();
		if (IS_GRINGO_COMPONENT_VALID(*uParam2))
		{
			LOG_ERROR("Cannot set a target skeleton anim while one is already playing");
			return;
		}
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly on previous anim");
			DESTROY_OBJECT_ANIMATOR(*uParam3);
		}
		cVar11 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar4, uParam0->f_16);
		cVar12 = GRINGO_ANIM_GET_ACT_FILENAME(bVar4);
		bVar13 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar4);
		*uParam3 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bParam1, cVar11, cVar12, bVar13);
		if (IS_OBJECT_ANIMATOR_VALID(*uParam3))
		{
			if (Function_34(bVar4, "LinkToUser", 0))
			{
				if (Function_51())
				{
					Function_81();
					PRINTSTRING(" - linking target at slot: ");
					PRINTINT(bVar9);
					PRINTNL();
				}
				LINK_OBJECT_ANIMATOR_TO_ACTOR(*uParam3, uParam0->f_16, bVar9);
			}
		}
		else
		{
			LOG_ERROR("sTargetSkelAnimator not cleared correctly!");
		}
		*uParam2 = uParam0->f_12;
	}
}

bool Function_80(bool bParam0, bool bParam1) //Position: 0x39D0 / 14800
{
	return Function_36(bParam0, "TargetLocator", bParam1);
}

void Function_81() //Position: 0x39ED / 14829
{
	PRINTSTRING(GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF()));
	return;
}

bool Function_82(bool bParam0, int iParam1) //Position: 0x39FC / 14844
{
	return Function_36(bParam0, "UserPhysAttachBone", iParam1);
}

bool Function_83(bool bParam0, int iParam1) //Position: 0x3A1E / 14878
{
	return Function_36(bParam0, "TargetPhysAttachBone", iParam1);
}

var Function_84(bool bParam0) //Position: 0x3A42 / 14914
{
	return GRINGO_GET_FIRST_NAMED_CHILD("TargetSkelAnim", 2, bParam0);
}

bool Function_85(bool bParam0, int iParam1) //Position: 0x3A5F / 14943
{
	return Function_36(bParam0, "TargetAttachBone", iParam1);
}

bool Function_86(bool bParam0, int iParam1) //Position: 0x3A7F / 14975
{
	return Function_36(bParam0, "TargetAttachSlot", iParam1);
}

void Function_87(bool bParam0, bool bParam1) //Position: 0x3A9F / 15007
{
	bool bVar0;
	bool bVar1;
	char* cVar2;
	char* cVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6;
	
	bVar0 = GRINGO_GET_FIRST_CHILD(2, bParam0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		cVar2 = GRINGO_GET_ACTOR_SPECIFIC_AST_FILENAME(bVar0, bParam1);
		cVar3 = GRINGO_ANIM_GET_ACT_FILENAME(bVar0);
		bVar4 = GRINGO_ANIM_GET_ACT_ROOTNODE(bVar0);
		bVar1 = GRINGO_GET_PHYSINST(bParam0);
		if (IS_PHYSINST_VALID(bVar1))
		{
			cVar5 = GET_OBJECT_ANIMATOR_ON_OBJECT(bVar1);
			if (IS_OBJECT_ANIMATOR_VALID(cVar5))
			{
				LOG_ERROR("Previous object animator not cleared - destroying now!");
				DESTROY_OBJECT_ANIMATOR(cVar5);
			}
			cVar6 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bVar1, cVar2, cVar3, bVar4);
			if (IS_OBJECT_ANIMATOR_VALID(cVar6))
			{
				LINK_OBJECT_ANIMATOR_TO_ACTOR(cVar6, bParam1, GRINGO_GET_PROP_ATTACH_SLOT(bParam0));
			}
		}
	}
	return;
}

bool Function_88(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3B4D / 15181
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnimMidAction", 2, bParam1);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("PlayerUseAnim", 2, bParam1);
		if (IS_GRINGO_COMPONENT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseAnim", 2, bParam1);
	return bVar0;
}

void Function_89(int iParam0, float fParam1) //Position: 0x3BBD / 15293
{
	if (!Function_41(iParam0))
	{
		Function_90(iParam0, fParam1);
	}
	return;
}

void Function_90(int iParam0, float fParam1) //Position: 0x3BD3 / 15315
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_100(iParam0, 1);
	Function_12(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

var Function_91(bool bParam0) //Position: 0x3BF4 / 15348
{
	return (RAND_FLOAT_RANGE(0.0f, 1.0f) * Function_38(bParam0, "RandUseTime", 0.0f));
}

void Function_92(int iParam0) //Position: 0x3C14 / 15380
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_93(bool bParam0) //Position: 0x3C28 / 15400
{
	struct<8> Var0;
	struct<25> Var8;
	
	if (iLocal_1 && !iLocal_3)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_97("BuyPaper_layout") };
		cLocal_7 = CREATE_LAYOUT(&Var0);
		GRINGO_GET_USE_COMPONENT_POSITION(&Var8 + 12, bParam0);
		Var8 = { 0.0f, GRINGO_GET_USE_COMPONENT_HEADING(bParam0), 0.0f };
		Var8.f_24 = 0;
		Function_94(cLocal_7, 0, &Var8, 1, 0, 0);
		iLocal_3 = 1;
	}
	return;
}

var Function_94(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3C81 / 15489
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_57(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BuyNewspaper", 1, 1);
	}
	Function_95(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_95(var uParam0, int iParam1) //Position: 0x3CFB / 15611
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_96(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 5.0f, 0);
	return;
}

void Function_96(var uParam0, bool bParam1) //Position: 0x3D22 / 15650
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 43.07511f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 1.183828f, 1.324218f, 0.792503f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.616928f, -0.040504f, 0.785977f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	SET_CAMERASHOT_DIRECTION(*uParam0, vVar0, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

struct<32> Function_97(bool bParam0) //Position: 0x3DCE / 15822
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("0", &cVar8, ""), 4);
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

struct<32> Function_98(char* cParam0, char* cParam1, char* cParam2) //Position: 0x3E38 / 15928
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_99() //Position: 0x3E57 / 15959
{
	return 1;
}

void Function_100(int iParam0, bool bParam1) //Position: 0x3E5E / 15966
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

void Function_101(bool bParam0, var uParam1, int iParam2) //Position: 0x3E6D / 15981
{
	bool bVar0;
	
	Function_104(bParam0);
	*uParam1 = { StackVal, StackVal, Function_104(bParam0) };
	*iParam2 = Function_103(bParam0);
	bVar0 = Function_102(bParam0);
	if (bVar0 < 180.0f)
	{
		bVar0 = 180.0f;
	}
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-bVar0, bVar0));
	return;
}

bool Function_102(bool bParam0) //Position: 0x3EAC / 16044
{
	return Function_38(bParam0, "UseDirectionToleranceDegrees", 0.0f);
}

float Function_103(bool bParam0) //Position: 0x3ED7 / 16087
{
	return GRINGO_GET_USE_COMPONENT_HEADING(bParam0);
}

vector3 Function_104(bool bParam0) //Position: 0x3EE2 / 16098
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	if (Function_105(bParam0))
	{
		bVar3 = GRINGO_GET_PARENT_COMPONENT(bParam0, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar3))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_COMPONENT_USER(bVar3));
			if (IS_ACTOR_VALID(bVar4))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_LOCAL(&vVar0, bParam0);
				GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bVar4), vVar0, &vVar0);
			}
		}
		else
		{
			LOG_ERROR("Can only use 'UsePosActorRelative' attribute on child use cases");
		}
	}
	else if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar0, "CentreLocator", bParam0))
	{
		if (!GET_GRINGO_RELATIVE_POSITION_ATTR(&vVar0, "UseLocator", bParam0))
		{
			if (!GRINGO_GET_USE_COMPONENT_POSITION(&vVar0, bParam0))
			{
				LOG_ERROR("Failed to find use location!");
			}
		}
	}
	return StackVal, StackVal, vVar0;
}

bool Function_105(bool bParam0) //Position: 0x3FD8 / 16344
{
	return Function_34(bParam0, "UsePosActorRelative", 0);
}

bool Function_106(bool bParam0) //Position: 0x3FFA / 16378
{
	return Function_38(bParam0, "StartingPhaseTimeout", 10.0f);
}

void Function_107(int iParam0) //Position: 0x4022 / 16418
{
	iParam0 = iParam0;
	return;
}

void Function_108(int iParam0) //Position: 0x402C / 16428
{
	iParam0 = iParam0;
	return;
}

bool Function_109(bool bParam0) //Position: 0x4036 / 16438
{
	return Function_34(bParam0, "MaintainPosture", 0);
}

void Function_110(int iParam0) //Position: 0x4054 / 16468
{
	if (!Function_41(iParam0))
	{
		Function_90(iParam0, 0.0f);
	}
	return;
}

bool Function_111(bool bParam0, bool bParam1) //Position: 0x4069 / 16489
{
	vector3 vVar0;
	bool bVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	
	Function_104(bParam1);
	vVar0 = { StackVal, StackVal, Function_104(bParam1) };
	bVar3 = Function_103(bParam1);
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_PLAYER(bParam0))
	{
		if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "AllowBuyPaper"))
		{
			TELEPORT_ACTOR_WITH_HEADING(bParam0, vVar0, bVar3, 0, true, 1);
		}
		return 1;
	}
	if (GRINGO_HANDLES_MOVEMENT(bParam1))
	{
		return Function_115(bParam0, bParam1);
	}
	uVar4 = Function_114(bParam1);
	uVar5 = Function_102(bParam1);
	Function_112(bParam1);
	vVar6 = { StackVal, StackVal, Function_112(bParam1) };
	return GRINGO_ACTOR_MOVE_TO_AND_FACE_WITH_USER_OFFSET(bParam0, &vVar0, &vVar6, uVar4, 0.2f, 1, bVar3, uVar5, 0, 0);
}

vector3 Function_112(int iParam0) //Position: 0x40F9 / 16633
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	Function_113(StackVal, StackVal, iParam0, "UserOffset", vVar0);
	return StackVal, StackVal, Function_113(StackVal, StackVal, iParam0, "UserOffset", vVar0);
}

vector3 Function_113(bool bParam0, char* cParam1, vector3 vParam2) //Position: 0x411C / 16668
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam2 };
	GET_GRINGO_VECTOR_ATTR(&vVar0, cParam1, bParam0);
	return StackVal, StackVal, vVar0;
}

bool Function_114(bool bParam0) //Position: 0x413A / 16698
{
	return Function_38(bParam0, "UseLocationTolerance", 0.0f);
}

int Function_115(bool bParam0, bool bParam1) //Position: 0x415D / 16733
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	bool bVar16;
	vector3 vVar17;
	var uVar20;
	bool bVar23;
	
	bVar0 = Function_114(bParam1);
	fVar1 = Function_102(bParam1);
	if (!GET_GRINGO_BOOL_ATTR("RandomPointSet", bParam1, &uVar6))
	{
		bVar5 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		bVar16 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "Volume"));
		if (IS_ACTOR_IN_VOLUME(bParam0, bVar16) && DECOR_CHECK_EXIST(bParam0, "VolOnly"))
		{
			return 1;
		}
		GENERATE_RANDOM_POINT_IN_VOLUME(bVar16, &uVar7);
		FIND_VOL_SURFACE_POINTS_FOR_POINT(bVar16, &uVar7, &uVar10, &uVar13);
		bVar23 = false;
		bVar23 = FIND_INTERSECTION(&uVar10, &uVar13, &vVar17, &uVar20, 1, 4294967295, 4194304);
		if (bVar23)
		{
			vVar2 = { StackVal, StackVal, vVar17 };
			SET_GRINGO_VECTOR_ATTR(&vVar17, "RandomPoint", bParam1);
			SET_GRINGO_FLOAT_ATTR(bVar5, "RandomDirection", bParam1);
			SET_GRINGO_BOOL_ATTR(1, "RandomPointSet", bParam1);
		}
		else
		{
			return 0;
		}
	}
	GET_GRINGO_VECTOR_ATTR(&vVar2, "RandomPoint", bParam1);
	return GRINGO_ACTOR_MOVE_TO_AND_FACE(bParam0, &vVar2, bVar0, 0.2f, 1, bVar5, fVar1, 1, 0);
}

bool Function_116(bool bParam0, int iParam1) //Position: 0x4278 / 17016
{
	*iParam1 = Function_38(bParam0, "AreaClearCheck", -1.0f);
	if (*iParam1 < 0.0f)
	{
		return 1;
	}
	return 0;
}

int Function_117(bool bParam0) //Position: 0x42A3 / 17059
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	bVar0 = GET_TARGET_OBJECT();
	if (IS_OBJECT_VALID(bVar0))
	{
		if (!GRINGO_IS_TARGET_OBJECT_READY())
		{
			return 0;
		}
	}
	iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, 0);
	while (iVar1 >= 4294967295)
	{
		if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bParam0)))
		{
			return 0;
		}
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bParam0, iVar1 + 1);
	}
	bVar2 = false;
	uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
	iVar6 = STRING_TO_HASH("SharedPropName");
	while (bVar2 <= GRINGO_GET_ATTRIBUTE_COUNT(bParam0))
	{
		uVar4 = GRINGO_GET_ATTRIBUTE(bParam0, bVar2);
		if (GRINGO_IS_ATTRIBUTE_VALID(uVar4))
		{
			if (GRINGO_GET_ATTR_TYPE_BY_HANDLE(uVar4) == 2)
			{
				if (iVar6 == GRINGO_GET_ATTRIBUTE_HASH(uVar4))
				{
					iVar5 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar4, &uVar3);
					iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), 0);
					while (iVar1 >= 4294967295)
					{
						if (!GRINGO_IS_PROP_READY(GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0))))
						{
							return 0;
						}
						iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD(iVar5, 1, GRINGO_GET_PARENT_COMPONENT(bParam0, 0), iVar1 + 1);
					}
				}
			}
		}
		bVar2++;
	}
	return 1;
}

bool Function_118(bool bParam0, bool bParam1) //Position: 0x43A8 / 17320
{
	return (bParam0 && bParam1) == 0;
}

void Function_119(int iParam0) //Position: 0x43B5 / 17333
{
	if (Function_118(iParam0->f_40, 16))
	{
		if (iParam0->f_44 > 5 && iParam0->f_44 < 1)
		{
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12))
			{
				Function_2("UNSUSPEND MOVER", iParam0->f_16);
				ENABLE_MOVER(iParam0->f_16);
			}
			if (GRINGO_SHOULD_FIX_MOVER(iParam0->f_12))
			{
				Function_2("UNFIX MOVER", iParam0->f_16);
				SET_MOVER_FROZEN(iParam0->f_16, 0);
			}
		}
	}
	return;
}

void Function_120(int iParam0, bool bParam1) //Position: 0x4428 / 17448
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	char* cVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	
	if (bParam1)
	{
		Function_2("<<<STOP USE [delay allowed]", iParam0->f_16);
	}
	else
	{
		Function_2("<<<STOP USE [NO delay allowed]", iParam0->f_16);
	}
	Function_36(iParam0->f_12, "CustomReactNode", &bVar0);
	if (bVar0)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			RESET_REACT_NODE_FOR_ACTOR(iParam0->f_16);
		}
	}
	iVar1 = 1;
	bVar2 = Function_34(iParam0->f_12, "CanAnimalsAttack", iVar1);
	if (!bVar2)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			SET_ANIMAL_CAN_ATTACK(iParam0->f_16, 1);
		}
	}
	bVar3 = Function_34(iParam0->f_12, "AllowTalking", 1);
	if (!bVar3)
	{
		STOP_PED_SPEAKING(iParam0->f_16, 0);
	}
	if (iParam0->f_44 < 8)
	{
		Function_45(iParam0->f_16, iParam0->f_12);
	}
	if ((HAS_INVENTORY_COMPONENT(iParam0->f_16) && Function_118(iParam0->f_40, 32)) && Function_34(iParam0->f_12, "RedrawWeapon", 1))
	{
		ACTOR_DRAW_LAST_WEAPON(iParam0->f_16, 1);
	}
	if (DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime"))
	{
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "Gringo_SpeechTime");
	}
	Function_126(iParam0->f_16, iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		GRINGO_REPORT_USE_FINISHED(iParam0->f_16, Function_118(iParam0->f_40, 64));
		Function_44(iParam0->f_16, 0);
		NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
		if (!Function_34(iParam0->f_12, "DoNotCleanUpUserSettings", 0))
		{
			if (Function_118(iParam0->f_40, 128) && Function_34(iParam0->f_12, "RedrawWeapon", 1))
			{
				ACTOR_END_FORCE_HOLSTER(iParam0->f_16);
			}
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_16);
			if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
			{
				bVar4 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
				if (IS_PHYSINST_VALID(bVar4))
				{
					SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar4, 0);
				}
			}
			if (Function_77(iParam0->f_12))
			{
				CLEAR_LINKED_ANIM_TARGET(iParam0->f_16);
			}
			if (Function_118(iParam0->f_40, 16))
			{
				Function_119(iParam0);
				Function_12(iParam0 + 40, 16);
			}
			if (Function_118(iParam0->f_40, 8))
			{
				SET_ACTOR_ONE_SHOT_DEATH(iParam0->f_16, false);
			}
			if (Function_125(iParam0->f_12) && Function_118(iParam0->f_40, 512))
			{
				Function_12(iParam0 + 40, 512);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 1);
				Function_2("Allow Bump Reactions", iParam0->f_16);
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
		{
			GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 1);
		}
	}
	iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, 0);
	while (iVar5 >= 4294967295)
	{
		bVar6 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar5, iParam0->f_12);
		bVar7 = GRINGO_GET_PHYSINST(bVar6);
		if (IS_PHYSINST_VALID(bVar7))
		{
			cVar8 = GET_OBJECT_ANIMATOR_ON_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar7));
			if (IS_OBJECT_ANIMATOR_VALID(cVar8))
			{
				RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cVar8));
			}
			if (!IS_ACTOR_VALID(iParam0->f_16))
			{
				RESET_PROP(bVar7);
			}
		}
		iVar5 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, iParam0->f_12, iVar5 + 1);
	}
	if (Function_75(iParam0->f_12))
	{
		bVar9 = GRINGO_GET_PARENT_COMPONENT(iParam0->f_12, 3);
		if (IS_GRINGO_COMPONENT_VALID(bVar9))
		{
			bVar10 = Function_76(bVar9);
			if (IS_ACTOR_VALID(bVar10))
			{
				CLEAR_LINKED_ANIM_TARGET(bVar10);
			}
		}
	}
	Function_124(iParam0->f_12);
	bVar11 = Function_34(iParam0->f_12, "DisableResetProp", 0);
	if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		if (!bVar11 || !IS_ACTOR_VALID(iParam0->f_16))
		{
			Function_123(iParam0, GET_TARGET_OBJECT());
		}
		bVar12 = GET_PHYSINST_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar12))
		{
			if (Function_118(iParam0->f_40, 256))
			{
				Function_12(iParam0 + 40, 256);
				SET_PROP_FIXED(bVar12, 0);
			}
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_36))
	{
		DESTROY_OBJECT(iParam0->f_36);
	}
	if (iParam0->f_12 == iLocal_60)
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ANIMATOR(cLocal_59));
		iLocal_60 = iVar13;
	}
	GRINGO_SET_CHILD_USE_ACTIVATIONS(iParam0->f_12, 0);
	if (Function_78(iParam0->f_12))
	{
		GRINGO_SET_COMMON_LAYER_USE_ACTIVATIONS(iParam0->f_12, 1);
	}
	if (IS_ATTACHMENT_VALID(iParam0->f_32))
	{
		REMOVE_OBJECT_ATTACHMENT(iParam0->f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_62))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_62);
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar14, "UserObject", iParam0->f_12);
	Function_92(iParam0);
	Function_110(iParam0);
	GRINGO_CLEAR_COMPONENT_USER(iParam0->f_12);
	if (IS_ACTOR_VALID(iParam0->f_16) && bParam1)
	{
		Function_2("Setting reuse delay", iParam0->f_16);
		GRINGO_SET_REUSE_DELAY(Function_122(iParam0->f_12), iParam0->f_12);
	}
	Function_12(iParam0 + 40, 2);
	if (GRINGO_HANDLES_MOVEMENT(iParam0->f_12))
	{
		SET_GRINGO_BOOL_ATTR(0, "RandomPointSet", iParam0->f_12);
	}
	if (IS_ACTOR_VALID(iParam0->f_16))
	{
		if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16))
		{
			Function_121();
		}
	}
	else
	{
		Function_121();
	}
	iParam0->f_44 = 0;
	iParam0->f_16 = "";
	return;
}

void Function_121() //Position: 0x4926 / 18726
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
	{
		bVar0 = FIND_OBJECT_IN_OBJECT(GRINGO_GET_MY_OBJECT_REF(), "GringoCamera");
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
			CAMERA_RESET(0);
		}
	}
	return;
}

bool Function_122(bool bParam0) //Position: 0x495D / 18781
{
	return Function_38(bParam0, "ReuseDelay", 15.0f);
}

void Function_123(var uParam0, int iParam1) //Position: 0x497A / 18810
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	Function_86(uParam0->f_12, &uVar0);
	Function_85(uParam0->f_12, &uVar1);
	bVar2 = Function_84(uParam0->f_12);
	if (!((uVar0 || uVar1) || IS_GRINGO_COMPONENT_VALID(bVar2)))
	{
		return;
	}
	GRINGO_PROP_RESET_GRACEFULLY(iParam1);
	return;
}

void Function_124(int iParam0) //Position: 0x49B2 / 18866
{
	iParam0 = iParam0;
	return;
}

bool Function_125(bool bParam0) //Position: 0x49BC / 18876
{
	return Function_34(bParam0, "BlockBumpReactions", 0);
}

void Function_126(bool bParam0, bool bParam1) //Position: 0x49DD / 18909
{
	bool bVar0;
	bool bVar1;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	
	bParam0 = bParam0;
	bVar0 = false;
	if (GRINGO_COMPONENT_CHECK_NAME("Buy_News", bParam1) && bLocal_2)
	{
		if (!HAS_ITEM("nNEWSPAPER", Global_34573))
		{
			Function_130(14, 0, 0);
			Function_15("BoughtFirstPaper", 0x41200000, 1, 0, 2, 1, 0);
		}
		if (Function_24(57, 0))
		{
			bVar1 = SHIFT_LEFT(true, 8);
			SHOW_NEWSPAPER(8, "NULL", 1, 1);
		}
		else if (Function_24(43, 0) && Function_24(46, 0))
		{
			bVar1 = SHIFT_LEFT(true, 7);
			SHOW_NEWSPAPER(7, "NULL", 1, 1);
		}
		else if (Function_24(46, 0))
		{
			bVar1 = SHIFT_LEFT(true, 6);
			SHOW_NEWSPAPER(6, "NULL", 1, 1);
		}
		else if (Function_24(41, 0))
		{
			bVar1 = SHIFT_LEFT(true, 5);
			SHOW_NEWSPAPER(5, "NULL", 1, 1);
		}
		else if (Function_24(34, 0) && Function_24(31, 0))
		{
			bVar1 = SHIFT_LEFT(true, 4);
			SHOW_NEWSPAPER(4, "NULL", 1, 1);
		}
		else if (Function_24(26, 0))
		{
			bVar1 = SHIFT_LEFT(true, 3);
			SHOW_NEWSPAPER(3, "NULL", 1, 1);
		}
		else if (Function_24(23, 0))
		{
			bVar1 = SHIFT_LEFT(true, 2);
			SHOW_NEWSPAPER(2, "NULL", 1, 1);
		}
		else if (Function_24(17, 0))
		{
			bVar1 = SHIFT_LEFT(true, true);
			SHOW_NEWSPAPER(true, "NULL", 1, 1);
		}
		else if (Function_24(4, 0))
		{
			bVar1 = SHIFT_LEFT(true, false);
			SHOW_NEWSPAPER(false, "NULL", 1, 1);
		}
		iVar3 = Function_27(472);
		if (iVar3 <= 0)
		{
			iVar3 = 0;
		}
		Function_100(&iVar3, bVar1);
		Function_128(472, iVar3, 0);
		bVar0 = true;
		Function_127(&iLocal_15);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("Buy_NewsOld", bParam1) && bLocal_2)
	{
		if (!HAS_ITEM("nNEWSPAPER", Global_34573))
		{
			Function_130(14, 0, 0);
			Function_15("BoughtFirstPaper", 0x41200000, 1, 0, 2, 1, 0);
		}
		Function_19(&iVar4, &uVar5, &iVar6);
		bVar7 = Function_27(472);
		if (bVar7 <= 0)
		{
			bVar7 = false;
		}
		if (Function_24(57, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 8))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, 8));
			}
		}
		if (Function_24(43, 0) && Function_24(46, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 7))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, 7));
			}
		}
		if (Function_24(46, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 6))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, 6));
			}
		}
		if (Function_24(41, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 5))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, 5));
			}
		}
		if (Function_24(34, 0) && Function_24(31, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 4))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, 4));
			}
		}
		if (Function_24(26, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 3))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, 3));
			}
		}
		if (Function_24(23, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, 2))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, 2));
			}
		}
		if (Function_24(17, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, true))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, true));
			}
		}
		if (Function_24(4, 0))
		{
			if (!iVar4 != SHIFT_LEFT(true, false))
			{
				Function_100(&bVar7, SHIFT_LEFT(true, false));
			}
		}
		Function_128(472, bVar7, 0);
		PRINTSTRING("Issue we now have: ");
		PRINTINT(bVar7);
		PRINTNL();
		bVar0 = true;
		Function_127(&iLocal_15);
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("UseCase1", bParam1))
	{
		if (STRING_LENGTH(bLocal_14) >= 0)
		{
			DECOR_REMOVE(bParam0, bLocal_14);
		}
	}
	if (bVar0)
	{
		if (IS_LAYOUTREF_VALID(cLocal_7))
		{
			DESTROY_LAYOUT_OBJECTS(bLocal_7);
			DESTROY_LAYOUT(bLocal_7);
		}
		CAMERA_RESET(0);
		iLocal_3 = 0;
		DECOR_REMOVE(GRINGO_GET_MY_OBJECT_REF(), "AllowBuyPaper");
		if (IS_BLIP_VALID(bLocal_8))
		{
			REMOVE_BLIP(bLocal_8);
		}
	}
	return;
}

void Function_127(int iParam0) //Position: 0x4DCA / 19914
{
	Function_90(iParam0, 0.0f);
	return;
}

int Function_128(int iParam0, bool bParam1, bool bParam2) //Position: 0x4DD6 / 19926
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_129(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_68(iParam0);
	if (bParam2)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_129(int iParam0, float fParam1, bool bParam2) //Position: 0x5071 / 20593
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

int Function_130(bool bParam0, bool bParam1, int iParam2) //Position: 0x52B5 / 21173
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_131(bParam0), Function_30()) == 0)
		{
			ADD_ITEM(Function_131(bParam0), Function_30(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_131(bParam0), Function_30(), iParam2);
	return 1;
}

var Function_131(bool bParam0) //Position: 0x5300 / 21248
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_132(bool bParam0, bool bParam1) //Position: 0x53F1 / 21489
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam1)
		{
			Function_151("CheckRemoveQuitAction: Actor valid!");
		}
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			if (bParam1)
			{
				Function_151("CheckRemoveQuitAction: Tested for player!");
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_62))
			{
				if (bParam1)
				{
					Function_151("CheckRemoveQuitAction: Release quit context - component no longer in use");
				}
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_62);
			}
		}
	}
	if (bParam1)
	{
		Function_151("CheckRemoveQuitAction: Finished check");
	}
	return;
}

void Function_133(bool bParam0, bool bParam1) //Position: 0x54F9 / 21753
{
	LOG_OBJECT3(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), bParam1, bParam0, 0, 0, 0);
	return;
}

void Function_134(int iParam0) //Position: 0x550F / 21775
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam0->f_16 = GRINGO_GET_REQUESTING_ACTOR();
	if (!IS_ACTOR_VALID(iParam0->f_16))
	{
		LOG_ERROR("Invalid actor in StartDoingRequestedTask");
		return;
	}
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	iParam0->f_12 = bVar0;
	if (GRINGO_GET_USE_REQUIRES_OBSTACLE(bVar0))
	{
		if (IS_ACTOR_HORSE(iParam0->f_16))
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.75f, 2.0f);
		}
		else
		{
			iParam0->f_36 = CREATE_OBSTACLE_ON_OBJECT(iParam0->f_16, "ngringoObs", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f, 1.0f, 0.5f);
		}
		ATTACH_OBJECTS(iParam0->f_36, iParam0->f_16, Function_57(), 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	Function_92(iParam0);
	Function_2("Going to eGringoPositioning", iParam0->f_16);
	iParam0->f_44 = 2;
	Function_100(iParam0 + 40, 2);
	Function_12(iParam0 + 40, 8);
	Function_12(iParam0 + 40, 16);
	Function_12(iParam0 + 40, 64);
	SET_GRINGO_OBJECT_REF_ATTR(iParam0->f_16, "UserObject", bVar0);
	GRINGO_SET_COMPONENT_USER(iParam0->f_16, bVar0);
	if (GRINGO_SHOULD_SUSPEND_MOVER(iParam0->f_12) && IS_OBJECT_VALID(GET_TARGET_OBJECT()))
	{
		bVar1 = GET_PROP_FROM_OBJECT(GET_TARGET_OBJECT());
		if (IS_PHYSINST_VALID(bVar1))
		{
			SUPRESS_MOVER_COLLISIONS(iParam0->f_16, bVar1, 1);
		}
	}
	SET_GRINGO_OBJECT_REF_ATTR(bVar2, "LastUserObject", iParam0->f_12);
	if (!Function_137(iParam0->f_12))
	{
		if (HAS_INVENTORY_COMPONENT(iParam0->f_16))
		{
			if (ACTOR_HOLSTER_WEAPON(iParam0->f_16, 1))
			{
				Function_100(iParam0 + 40, 32);
			}
			else
			{
				Function_12(iParam0 + 40, 32);
			}
		}
		else
		{
			Function_12(iParam0 + 40, 32);
		}
		if (Function_118(iParam0->f_40, 32))
		{
			Function_100(iParam0 + 40, 128);
		}
		else
		{
			Function_12(iParam0 + 40, 128);
		}
	}
	else
	{
		Function_12(iParam0 + 40, 32);
	}
	if (Function_136(iParam0->f_12))
	{
		if (!ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, 5), 1))
		{
			if (ACTOR_PUT_WEAPON_IN_HAND(iParam0->f_16, GET_WEAPON_EQUIPPED(iParam0->f_16, true), 1))
			{
				Function_100(iParam0 + 40, 128);
			}
		}
		else
		{
			Function_100(iParam0 + 40, 128);
		}
	}
	if (Function_125(iParam0->f_12))
	{
		if (GET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16))
		{
			Function_100(iParam0 + 40, 512);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_16, 0);
			Function_2("Block Bump Reactions", iParam0->f_16);
		}
	}
	if (IS_ACTOR_LOCAL_PLAYER(iParam0->f_16) && !GRINGO_IS_CHARACTER_BLEND_PAUSED(iParam0->f_12))
	{
		GRINGO_ENABLE_PLAYER_CONTROL(iParam0->f_16, 0);
	}
	NET_ACTOR_SET_GRINGO_NAVIGATION_COMPLETE(iParam0->f_16, 0);
	Function_135(iParam0->f_16, bVar0);
	Function_2("START: ", iParam0->f_16);
	return;
}

void Function_135(bool bParam0, bool bParam1) //Position: 0x57C5 / 22469
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bParam1 = bParam1;
	if (IS_ACTOR_LOCAL_PLAYER(bParam0))
	{
		if (IntToFloat(Function_18()) <= 1.0f)
		{
			bLocal_2 = true;
			iLocal_1 = 1;
			Function_127(&iLocal_4);
			bVar0 = Function_28(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "UseCase1");
			if (IS_OBJECT_VALID(bVar0))
			{
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(GET_ACTOR_FROM_OBJECT(bVar0));
			}
		}
		else
		{
			Function_15("Cant_Afford_Paper", 0x41200000, 1, 0, 2, 1, 0);
			bLocal_2 = false;
			iLocal_1 = 0;
		}
	}
	else if (GRINGO_COMPONENT_CHECK_NAME("UseCase1", bParam1))
	{
		bLocal_14 = "";
		iVar3 = 1;
		if (Function_24(57, 0) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2))
			{
				bLocal_14 = "newsie_home03";
				iVar3 = 0;
			}
		}
		if ((Function_24(43, 0) && Function_24(46, 0)) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2) || Function_24(57, 0))
			{
				bLocal_14 = "newsie_fbi01";
				iVar3 = 0;
			}
		}
		if (Function_24(46, 0) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2) || Function_24(43, 0))
			{
				bLocal_14 = "newsie_anthro03";
				iVar3 = 0;
			}
		}
		if (Function_24(41, 0) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2) || Function_24(46, 0))
			{
				bLocal_14 = "newsie_rebel05";
				iVar3 = 0;
			}
		}
		if ((Function_24(34, 0) && Function_24(31, 0)) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2) || Function_24(41, 0))
			{
				bLocal_14 = "newsie_mexgirl02";
				iVar3 = 0;
			}
		}
		if (Function_24(26, 0) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2) || Function_24(34, 0))
			{
				bLocal_14 = "newsie_mexarmy02";
				iVar3 = 0;
			}
		}
		if (Function_24(23, 0) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2) || Function_24(26, 0))
			{
				bLocal_14 = "newsie_marshal03";
				iVar3 = 0;
			}
		}
		if (Function_24(17, 0) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2) || Function_24(23, 0))
			{
				bLocal_14 = "newsie_merchant04";
				iVar3 = 0;
			}
		}
		if (Function_24(4, 0) && iVar3)
		{
			bVar1 = Function_20(StackVal);
			bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar1), GET_HOUR(bVar1) + 6, GET_MINUTE(bVar1), GET_SECOND(bVar1));
			if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2) || Function_24(17, 0))
			{
				bLocal_14 = "newsie_ranch02";
				iVar3 = 0;
			}
		}
		if (STRING_LENGTH(bLocal_14) >= 0)
		{
			DECOR_SET_BOOL(bParam0, bLocal_14, true);
		}
	}
	return;
}

bool Function_136(bool bParam0) //Position: 0x5BC5 / 23493
{
	return Function_34(bParam0, "DrawWeapon", 0);
}

bool Function_137(bool bParam0) //Position: 0x5BDE / 23518
{
	return Function_34(bParam0, "AllowWeapon", 0);
}

void Function_138(bool bParam0, int iParam1) //Position: 0x5BF8 / 23544
{
	bool bVar0;
	char* cVar1;
	
	bParam0 = bParam0;
	cVar1 = Function_139(iParam1, &bVar0);
	if (!bVar0)
	{
		if (IS_ACTOR_VALID(GRINGO_GET_REQUESTING_ACTOR()))
		{
			if (IS_ACTOR_LOCAL_PLAYER(GRINGO_GET_REQUESTING_ACTOR()))
			{
				cVar1 = GET_OBJECT_MODEL_NAME(GRINGO_GET_MY_OBJECT_REF());
			}
		}
	}
	GRINGO_SET_REQUEST_STRING(cVar1);
	return;
}

bool Function_139(var uParam0, int iParam1) //Position: 0x5C30 / 23600
{
	return Function_36(uParam0, "UseName", iParam1);
}

bool Function_140(int iParam0, int iParam1) //Position: 0x5C47 / 23623
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	char* cVar17[64];
	bool bVar33;
	float fVar34;
	
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	bVar1 = GRINGO_GET_REQUESTING_ACTOR();
	GRINGO_GET_USER_POS_WITH_OFFSET(&vVar2, bVar1, bVar0);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar5 = GRINGO_IS_CHARACTER_BLEND_PAUSED(bVar0);
		if (GET_ACTOR_GAIT_TYPE(bVar1) != 4 && !bVar5)
		{
			return 0;
		}
		if (ACTOR_HAS_ANIM_SET(bVar1, "stand_hostage") && !Function_34(iParam0->f_12, "CutFreeGringo", 0))
		{
			return 0;
		}
		if (IS_ACTOR_LOCAL_PLAYER(bVar1))
		{
			if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bVar1)))
			{
				iVar6 = 0;
				GET_GRINGO_BOOL_ATTR("IsHogtieFriendly", bVar0, &iVar6);
				if (iVar6 == 0)
				{
					return 0;
				}
			}
		}
		if (Global_3365)
		{
			if (IS_ACTOR_LOCAL_PLAYER(bVar1))
			{
				if (!Function_31(6))
				{
					return 0;
				}
			}
		}
		if (IS_ACTOR_LOCAL_PLAYER(bVar1))
		{
			if (IS_PLAYER_USING_COVER(0))
			{
				return 0;
			}
		}
		if (FIRE_IS_ACTOR_ON_FIRE(bVar1) && !bVar5)
		{
			return 0;
		}
		if (GET_ACTOR_INCAPACITATED(bVar1))
		{
			return 0;
		}
		if (!Function_144(bVar1, iParam0->f_12))
		{
			GRINGO_SET_REQUEST_FAILURE_REASON(1);
			return 0;
		}
		if (IS_OBJECT_VALID(GET_TARGET_OBJECT()))
		{
			if (DECOR_CHECK_EXIST(GET_TARGET_OBJECT(), "Gringo_PropInUse"))
			{
				GRINGO_SET_REQUEST_FAILURE_REASON(2);
				return 0;
			}
		}
		bVar7 = GET_TARGET_OBJECT();
		if (IS_OBJECT_VALID(bVar7))
		{
			bVar8 = GET_PROP_FROM_OBJECT(bVar7);
			if (IS_PHYSINST_VALID(bVar8))
			{
				if (HAS_PHYSINST_BROKEN_APART(bVar8))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(3);
					return 0;
				}
			}
		}
		if (!Function_118(iParam0->f_40, 2))
		{
			if (GRINGO_GET_REQUEST_MID_ACTION())
			{
				Function_100(iParam0 + 40, 1);
			}
			else
			{
				Function_12(iParam0 + 40, 1);
			}
			if (Function_118(iParam0->f_40, 1))
			{
				Function_133("MIDACTION REQUEST", bVar1);
			}
			else
			{
				Function_104(iParam0->f_12);
				vVar9 = { StackVal, StackVal, Function_104(iParam0->f_12) };
				vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar9, StackVal) };
				fVar15 = Function_143(iParam0->f_12);
				bVar16 = VMAG(vVar12);
				if (bVar16 < fVar15 && !GRINGO_HANDLES_MOVEMENT(bVar0))
				{
					strcpy(&cVar17, "nTOO FAR (", 64);
					straddi(&cVar17, FLOOR((bVar16 * 10.0f)), 64);
					stradd(&cVar17, " > ", 64);
					straddi(&cVar17, FLOOR((fVar15 * 10.0f)), 64);
					stradd(&cVar17, ")", 64);
					GRINGO_SET_REQUEST_FAILURE_REASON(5);
					return 0;
				}
				if (!Function_142(bVar1, iParam0->f_12))
				{
					GRINGO_SET_REQUEST_FAILURE_REASON(6);
					return 0;
				}
				bVar33 = Function_141(iParam0->f_12);
				if (!bVar33 != 0.0f)
				{
					if (bVar33 < 0.0f)
					{
						fVar34 = (UNK_0x9C40E671(&vVar12) - Function_103(iParam0->f_12));
					}
					else
					{
						fVar34 = ((180.0f + UNK_0x9C40E671(&vVar12)) - Function_103(iParam0->f_12));
					}
					if (fVar34 < 180.0f)
					{
						fVar34 = (fVar34 - 360.0f);
					}
					else if (fVar34 > -180.0f)
					{
						fVar34 = (fVar34 + 360.0f);
					}
					if (fVar34 < FABS(bVar33))
					{
						GRINGO_SET_REQUEST_FAILURE_REASON(7);
						return 0;
					}
				}
			}
			*iParam1 = 1;
			return 1;
		}
		if (iParam0->f_16 == GRINGO_GET_REQUESTING_ACTOR())
		{
			*iParam1 = 0;
			return 1;
		}
	}
	GRINGO_SET_REQUEST_FAILURE_REASON(8);
	return 0;
}

bool Function_141(bool bParam0) //Position: 0x5F10 / 24336
{
	return Function_38(bParam0, "ActivationCone", 0.0f);
}

bool Function_142(bool bParam0, bool bParam1) //Position: 0x5F2D / 24365
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	
	fVar3 = GRINGO_GET_USE_COMPONENT_HEADING(bParam1);
	bVar4 = GET_HEADING(bParam0);
	fVar5 = Function_38(bParam1, "HeadingTolerance", -1.0f);
	fVar6 = (fVar3 - bVar4);
	if (fVar5 != -1.0f)
	{
		return 1;
	}
	Function_104(bParam1);
	Var0 = { StackVal, StackVal, Function_104(bParam1) };
	GET_POSITION(bParam0, &Var0);
	Var0.f_4 = (StackVal + 1.5f);
	Function_104(bParam1);
	Var0 = { StackVal, StackVal, Function_104(bParam1) };
	Var0.f_4 = (StackVal + 1.5f);
	if (fVar6 > 0.0f)
	{
		fVar6 = (fVar6 + 360.0f);
	}
	if (fVar6 <= (360.0f - fVar5) || fVar6 >= fVar5)
	{
		return 1;
	}
	return 0;
}

bool Function_143(int iParam0) //Position: 0x5FC9 / 24521
{
	return Function_38(iParam0, "ActivationRadius", 2.0f);
}

bool Function_144(bool bParam0, bool bParam1) //Position: 0x5FE8 / 24552
{
	int iVar0;
	
	if (GRINGO_COMPONENT_CHECK_NAME("Buy_News", bParam1) || GRINGO_COMPONENT_CHECK_NAME("Buy_NewsOld", bParam1))
	{
		if (IS_ACTOR_LOCAL_PLAYER(bParam0))
		{
			iVar0 = 0;
			if (Function_6(bParam1, &iVar0, bParam0))
			{
				return 1;
			}
			if ((((!iLocal_12 && GRINGO_COMPONENT_CHECK_NAME("Buy_News", bParam1)) && !Function_14(0, 0, 1, 1)) && !Global_63096) && iVar0 != 100)
			{
				if (Function_145(&iLocal_15, 6.0f))
				{
					iLocal_12 = 1;
					Function_15("No_New_Paper", 0x41200000, 1, 0, 2, 1, 0);
				}
				else if (!Function_41(&iLocal_15))
				{
					iLocal_12 = 1;
					Function_15("No_New_Paper", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			return 0;
		}
		return 0;
	}
	return 1;
}

bool Function_145(var uParam0, int iParam1) //Position: 0x60B7 / 24759
{
	if (Function_146(uParam0, iParam1))
	{
		Function_92(uParam0);
		return 1;
	}
	return 0;
}

bool Function_146(var uParam0, float fParam1) //Position: 0x60CF / 24783
{
	if (Function_41(uParam0))
	{
		if (Function_39(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_147(int iParam0) //Position: 0x60EB / 24811
{
	iParam0 = iParam0;
	return;
}

void Function_148(bool bParam0, int iParam1) //Position: 0x60F5 / 24821
{
	int iVar0;
	int iVar1;
	
	if (GRINGO_IS_COMPONENT_OF_TYPE(3, bParam0))
	{
		Function_149(&(Local_18[iLocal_5512]), bParam0);
		iLocal_55++;
	}
	if (GRINGO_GET_CHILD_COMPONENT_COUNT(bParam0) >= 0)
	{
		iVar0 = 0;
		iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0);
		while (iVar0 <= 0 && *iParam1 > 3)
		{
			iVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar0, bParam0);
			Function_148(iVar1, iParam1);
			iVar0 = GRINGO_GET_INDEX_OF_NEXT_CHILD(0, bParam0, iVar0 + 1);
		}
	}
	return;
}

void Function_149(int iParam0, int iParam1) //Position: 0x6157 / 24919
{
	iParam0->f_12 = iParam1;
	Function_12(iParam0 + 40, 1);
	return;
}

void Function_150(int iParam0) //Position: 0x616B / 24939
{
	iParam0 = iParam0;
	return;
}

void Function_151(int iParam0) //Position: 0x6175 / 24949
{
	LOG_OBJECT2(GRINGO_GET_MY_OBJECT_REF(), GET_TARGET_OBJECT(), iParam0, 0, 0, 0);
	return;
}

