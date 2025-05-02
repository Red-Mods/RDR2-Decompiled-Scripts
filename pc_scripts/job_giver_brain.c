//Decompiled with MagicRDR v1.0
//Function Count : 91
//Statics Count : 2
//Natives Count : 151
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<37> Var0;
	bool bVar37;
	
	if (!IS_GRINGO_COMPONENT_VALID(&uScriptParam_0))
	{
		LOG_ERROR("JOB GIVER BRAIN: Attempting to attach a gringo brain that has no valid gringo base.");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	Var0 = 0;
	*(&Var0 + 8) = &uScriptParam_0;
	iVar33 = 0;
	Var0.f_36 = 0;
	Var0.f_32 = RAND_INT_RANGE(0, 20);
	Function_90(&Var11);
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_PERS_CHAR_VALID(Function_89()))
		{
			uVar34 = Function_88(&Var0);
			uVar35 = Function_87(&Var0);
			if (!Function_86(&Var0))
			{
				if (IS_PERS_CHAR_ALIVE(Function_89()))
				{
					if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(GRINGO_GET_MY_OBJECT_REF()), "Settings", "DataExchange_Struct", &Var21, 24))
					{
						if (Function_69(StackVal, Var21.f_12, Function_85()) && uVar34)
						{
							Function_68(&Var11);
						}
						else
						{
							Function_67(&Var11);
						}
						bVar36 = false;
						bVar37 = false;
						if (GRINGO_HAS_PENDING_MESSAGE())
						{
							switch (GRINGO_GET_MESSAGE_TYPE())
							{
								case 0x00000000:
									if ((Function_66(&Var0, &Var11, &bVar36) && uVar35) && uVar34)
									{
										GRINGO_SET_REQUEST_STRING(Function_65(&Var0));
										bVar37 = true;
									}
									break;
								
								case 0x00000001:
									if ((Function_66(&Var0, &Var11, &bVar36) && uVar35) && uVar34)
									{
										GRINGO_SET_REQUEST_STRING(Function_65(&Var0));
										if (bVar36)
										{
											Function_64(&Var0);
											Function_63(&Var11, &Var0, &iVar33);
										}
										bVar37 = true;
									}
									break;
								
								case 0x00000002:
									break;
							}
							GRINGO_SET_MESSAGE_RETURN(bVar37);
							if (!bVar37)
							{
								if (Var11.f_16)
								{
									Function_60(&Var11, &Var0, &iVar33, &uVar18);
									Function_68(&Var11);
									Var11.f_16 = 0;
								}
							}
						}
						if (Var21.f_88 == 0)
						{
							if (Var11.f_16)
							{
								Var11.f_16 = Function_59(&iVar33, &Var11, &Var0, &uVar18, &Var21);
								if (!Var11.f_16)
								{
									Function_60(&Var11, &Var0, &iVar33, &uVar18);
									Function_68(&Var11);
								}
							}
							else if (!Function_34(&iVar33, &Var0, 0))
							{
								iVar33 = 20;
							}
						}
						else
						{
							if (Function_30(&Var0, &Var11, &bVar36))
							{
								if (bVar36)
								{
									Function_64(&Var0);
									Function_29(&Var11, &Var0, &iVar33);
								}
							}
							if (Var11.f_16)
							{
								Var11.f_16 = Function_10(&iVar33, &Var11, &Var0, &uVar18, &Var21);
								if (!Var11.f_16)
								{
									Function_60(&Var11, &Var0, &iVar33, &uVar18);
									Function_68(&Var11);
								}
							}
							else if (!Function_34(&iVar33, &Var0, 0))
							{
								iVar33 = 20;
							}
						}
					}
					else
					{
						Function_68(&Var11);
					}
					Function_1(iVar33, &Var0);
				}
			}
			else
			{
				if (Var11.f_16)
				{
					Function_60(&Var11, &Var0, &iVar33, &uVar18);
					Var11.f_16 = 0;
				}
				if (!iVar33 != 21)
				{
					Function_67(&Var11);
				}
				iVar33 = 21;
				Function_34(&iVar33, &Var0, 0);
				Var0 = 1000;
			}
		}
		GRINGO_WAIT(Var0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, struct<11> Param1) //Position: 0x2B9 / 697
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (Function_9(&Param1))
	{
		if (IS_ACTOR_VALID(Function_8()))
		{
			if (iParam0 == 0)
			{
				Param1 = 0;
			}
			else
			{
				Param1 = 0;
			}
			GET_POSITION(Function_8(), &Var0);
		}
		else
		{
			GET_OBJECT_POSITION(Function_7(), &Var0);
		}
		SET_DEBUG_DRAW(1);
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		Function_4(StackVal, Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Param1, Param1));
		Var0 = Function_4(StackVal, Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Param1, Param1));
		uVar4 = Function_2(&Param1);
		Var2 = Var0;
		Var2.f_4 = (StackVal + 2.0f);
		Var2.f_4 = (StackVal - 0,5f);
		Var0 = Var2;
		Var0 = (Var0 - 0,5f);
		Var2 = (Var2 + 0,5f);
	}
	return;
}

var Function_2(int iParam0) //Position: 0x359 / 857
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	iVar0 = Function_3(&iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			uVar5 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			uVar5 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			uVar5 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			uVar5 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			uVar5 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			uVar5 = "Night_Tasks";
			break;
		
		default:
			if (Function_9(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_SCAN_AREA_SIZE_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("TimeOfDay_Tasks", 0, &iParam0 + 8);
	uVar3 = GRINGO_GET_FIRST_NAMED_CHILD(&uVar5, 0, &uVar2);
	iVar4 = GRINGO_GET_ATTRIBUTE(&uVar3, false);
	return GRINGO_GET_FLOAT_ATTR_BY_HANDLE(&iVar4, &uVar1);
}

int Function_3(struct<37> Param0) //Position: 0x4D6 / 1238
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	uVar0 = MAKE_TIME_OF_DAY((5 + Param0.f_36), Param0.f_32, 0);
	uVar1 = MAKE_TIME_OF_DAY((7 + Param0.f_36), Param0.f_32, 0);
	uVar2 = MAKE_TIME_OF_DAY((11 + Param0.f_36), Param0.f_32, 0);
	iVar3 = MAKE_TIME_OF_DAY((14 + Param0.f_36), Param0.f_32, 0);
	uVar4 = MAKE_TIME_OF_DAY((18 + Param0.f_36), Param0.f_32, 0);
	uVar5 = MAKE_TIME_OF_DAY((22 + Param0.f_36), Param0.f_32, 0);
	uVar6 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(&uVar6, &uVar0, &uVar1))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar1, &uVar2))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar2, &iVar3))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &iVar3, &uVar4))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar4, &uVar5))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar5, &uVar0))
	{
		return 32;
	}
	return 32;
}

struct<8> Function_4(int iParam0, int iParam1) //Position: 0x5D2 / 1490
{
	struct<2> Var0;
	var uVar11;
	struct<2> Var12;
	
	uVar11 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	GET_GRINGO_STRUCT_ATTR(&Var0, 22, "Vectors_and_LayoutRef_Struct", &uVar11);
	if (&iParam1 == 4294967295)
	{
		LOG_ERROR("GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT: Called with an invalid Index, defaulting to 0 (Dawn)");
		iParam1 = 0;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			Var12 = Var0;
			break;
		
		case 0x00000001:
			Var12 = *(&Var0 + 12);
			break;
		
		case 0x00000002:
			Var12 = *(&Var0 + 24);
			break;
		
		case 0x00000003:
			Var12 = *(&Var0 + 36);
			break;
		
		case 0x00000004:
			Var12 = *(&Var0 + 48);
			break;
		
		case 0x00000005:
			Var12 = *(&Var0 + 60);
			break;
	}
	if (Function_5(StackVal, StackVal, Var12, Vector(0.0f, 0.0f, 0.0f)))
	{
		if (Function_9(&iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT vector is null for time of day index: ");
			PRINTINT(&iParam1);
			PRINTNL();
		}
		if (IS_ACTOR_VALID(Function_8()))
		{
			GET_POSITION(Function_8(), &Var12);
			if (Function_9(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning actor position instead of struct vector");
				PRINTNL();
			}
		}
		else if (IS_PERS_CHAR_VALID(Function_89()))
		{
			GET_OBJECT_POSITION(Function_7(), &Var12);
			if (Function_9(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning pers char position instead of struct vector");
				PRINTNL();
			}
		}
	}
	return StackVal, Var12;
}

bool Function_5(struct<2> Param0, struct<2> Param2) //Position: 0x89E / 2206
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

int Function_6(int iParam0, bool bParam1, var uParam2, bool bParam3, var uParam4, bool bParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10) //Position: 0x8CA / 2250
{
	bool bVar0;
	
	bVar0 = Function_3(&iParam0);
	switch (bVar0)
	{
		case 0x00000001:
			return 0;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000004:
			return 2;
			break;
		
		case 0x00000008:
			return 3;
			break;
		
		case 0x00000010:
			return 4;
			break;
		
		case 0x00000020:
			return 5;
			break;
		
		default:
			if (Function_9(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_GET_IDX_FROM_TOD invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	return 0;
}

var Function_7() //Position: 0x997 / 2455
{
	return GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
}

var Function_8() //Position: 0x9A3 / 2467
{
	return GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF())));
}

bool Function_9(int iParam0) //Position: 0x9B5 / 2485
{
	var uVar0;
	var uVar1;
	
	if (GET_DEBUG_DRAW_STATE())
	{
		return 1;
	}
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Debug", 0, &iParam0 + 8);
	return GET_GRINGO_BOOL_ATTR("DisplayDebugIndicators", &uVar0, &uVar1);
}

int Function_10(var uParam0, struct<21> Param1) //Position: 0x9FC / 2556
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	float fVar4;
	struct<2> Var5;
	struct<2> Var7;
	
	uVar0 = GET_PLAYER_ACTOR(0);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam2 + 8);
	vParam3 = { StackVal, StackVal, vParam3 };
	if (Param1.f_20)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(Function_8()))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 0;
	}
	GRINGO_GET_USE_COMPONENT_POSITION(&Var2, &uVar1);
	GET_GRINGO_FLOAT_ATTR(&fVar4, "ActivationRadius", &uVar1);
	GET_POSITION(&uVar0, &Var5);
	Var7 = Vector(StackVal, StackVal, StackVal) - Vector(Var5, Var2, StackVal);
	if (VMAG(Var7) < fVar4)
	{
		return 0;
	}
	switch (uParam0)
	{
		case 0x0000001C:
			TASK_FACE_ACTOR(Function_8(), &uVar0, 1, 3212836864);
			Function_28(&Param1);
			Function_23(&Param1);
			uParam0 = 33;
			break;
		
		case 0x00000021:
			if (IS_ACTOR_RIDING(Function_8()))
			{
				ACTOR_DISMOUNT_NOW(Function_8());
			}
			if (Function_69(StackVal, Param4.f_12, Function_85()))
			{
				uParam0 = 34;
			}
			else
			{
				Function_15(Function_21(&iParam2));
				uParam0 = 32;
			}
			break;
		
		case 0x00000022:
			break;
		
		case 0x00000029:
			Function_12();
			return 0;
			break;
		
		case 0x0000002A:
			return 0;
			break;
		
		default:
			Function_11(&iParam2, "DEFAULT:", "Unknown State");
			return 0;
			break;
	}
	return 1;
}

void Function_11(int iParam0, int iParam1, int iParam2) //Position: 0xB65 / 2917
{
	if (Function_9(&iParam0))
	{
		PRINTSTRING("Pers Char: ");
		PRINTSTRING(GET_OBJECT_NAME(Function_7()));
		PRINTSTRING(" - ");
		PRINTSTRING("Module Name: ");
		PRINTSTRING(&iParam1);
		PRINTSTRING(" - ");
		PRINTSTRING(&iParam2);
		PRINTNL();
	}
	return;
}

int Function_12() //Position: 0xBC2 / 3010
{
	struct<21> Var0;
	
	uVar12 = FIND_OBJECT_IN_OBJECT(Function_7(), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar12), "Settings", "DataExchange_Struct", &Var0, 24))
	{
		Function_13(StackVal, &Var0, Var0.f_12, Var0.f_16, Var0.f_20);
		return 1;
	}
	return 0;
}

void Function_13(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4) //Position: 0xC33 / 3123
{
	if (!Function_69(iParam0, iParam2, 63))
	{
		return;
	}
	Global_98256[iParam010].f_24 = iParam0;
	Global_98256[iParam010].f_36 = iParam2;
	Global_98256[iParam010].f_28 = uParam3;
	Global_98256[iParam010].f_32 = uParam4;
	*(&Global_98256[iParam010] + 16) = &uParam1;
	Function_14(&(Global_98256[iParam010]), 1);
}

void Function_14(var uParam0, int iParam1) //Position: 0xC95 / 3221
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_15(bool bParam0) //Position: 0xCA6 / 3238
{
	Function_16(&bParam0, Function_20(&bParam0), 0, 2, 1, 0);
	return;
}

void Function_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xCBC / 3260
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_17(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_17(int iParam0) //Position: 0xD41 / 3393
{
	char* cVar0[16];
	
	if (!Function_18())
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

bool Function_18() //Position: 0xD80 / 3456
{
	if (Function_19(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_19(var uParam0, int iParam1) //Position: 0xD9B / 3483
{
	return (uParam0 && iParam1) == 0;
}

var Function_20(int iParam0) //Position: 0xDA8 / 3496
{
	int iVar0;
	
	iVar0 = (IntToFloat(STRINGTABLE_LENGTH(&iParam0)) * 0,05f);
	if (iVar0 > 2.0f)
	{
		iVar0 = 2.0f;
	}
	return iVar0;
}

bool Function_21(int iParam0) //Position: 0xDC9 / 3529
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("Conversations", 0, &iParam0 + 8);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("DefaultPromptsAndResponses", 0, &uVar0);
	iVar3 = GET_GRINGO_STRING_ATTR("DefaultStatement", &uVar1, &iVar2);
	if (iVar2 >= 0)
	{
		if (STRING_LENGTH(&iVar3) >= 15)
		{
			Function_22(&iParam0, "GB_RETRIEVE_STATEMENT_STRING_FROM_XML: DefaultStatement > 15 characters! Using default message");
			iVar3 = "Howdy";
		}
	}
	else
	{
		Function_22(&iParam0, "GB_RETRIEVE_STATEMENT_STRING_FROM_XML: DefaultStatement not found in DefaultPromptsAndResponses! Using default message");
		iVar3 = "Howdy";
	}
	return &iVar3;
}

void Function_22(int iParam0, int iParam1) //Position: 0xF44 / 3908
{
	if (Function_9(&iParam0))
	{
		LOG_ERROR(&iParam1);
	}
	return;
}

void Function_23(int iParam0) //Position: 0xF59 / 3929
{
	if (!Function_27(&iParam0))
	{
		Function_24(&iParam0, 0.0f);
	}
	return;
}

void Function_24(vector3 vParam0) //Position: 0xF70 / 3952
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_26(&vParam0, 1);
	Function_25(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0xF95 / 3989
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0xFAB / 4011
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_27(int iParam0) //Position: 0xFBC / 4028
{
	return Function_19(iParam0, 1);
}

void Function_28(vector3 vParam0) //Position: 0xFCA / 4042
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_29(struct<17> Param0) //Position: 0xFE1 / 4065
{
	Function_28(&Param0);
	Function_23(&Param0);
	(&Param0 + 24) = GET_PLAYER_ACTOR(0);
	iParam2 = 28;
	Param0.f_16 = 1;
	TASK_PRIORITY_SET(Function_8(), false);
	uParam1 = 0;
	return;
}

bool Function_30(int iParam0, int iParam1, int iParam2) //Position: 0x1015 / 4117
{
	var uVar0;
	float fVar1;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam0 + 8);
	GET_GRINGO_FLOAT_ATTR(&fVar1, "ReuseDelay", &uVar0);
	if (iParam2 == 0)
	{
		if (Function_27(&iParam1))
		{
			if (Function_32(&iParam1) <= fVar1)
			{
				iParam2 = 1;
				return 1;
			}
		}
		Function_31(&iParam1);
		return 0;
	}
	iParam2 = 1;
	return 1;
}

void Function_31(int iParam0) //Position: 0x107E / 4222
{
	Function_24(&iParam0, 0.0f);
	return;
}

float Function_32(vector3 vParam0) //Position: 0x108B / 4235
{
	if (Function_27(&vParam0))
	{
		if (Function_33(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_33(int iParam0) //Position: 0x1158 / 4440
{
	return Function_19(iParam0, 2);
}

bool Function_34(int iParam0, struct<69> Param1) //Position: 0x1166 / 4454
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<9> Var7;
	int iVar16;
	bool bVar17;
	
	iVar5 = Function_8();
	iVar6 = Function_89();
	bVar15 = false;
	if (!&bParam2)
	{
		iVar16 = Function_58();
		if (iVar16 != 3 || iVar16 != 4)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
	}
	if (!Function_86(&Param1))
	{
		if (IS_ACTOR_VALID(&iVar5))
		{
			if (AI_GET_IS_RETREATING(&iVar5))
			{
				TASK_PRIORITY_SET(&iVar5, 3);
				iParam0 = 18;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			Param1.f_28 = Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
			Function_4(&Param1, Param1.f_28);
			*(&Param1 + 56) = Function_4(&Param1, Param1.f_28);
			Param1.f_68 = Function_2(&Param1);
			*(&Param1 + 72) = Function_57(&Param1);
			Param1.f_24 = 0;
			*(&Param1 + 80) = Function_56(&Param1, &Param1 + 24, 0);
			*(&Param1 + 16) = Function_53(StackVal, &Param1, &Param1 + 72, &Param1 + 80, "UseCase1", *(&Param1 + 56), Param1.f_68, 0, 0);
			if (STRINGS_ARE_EQUAL(&Param1 + 80, "nsleeptime"))
			{
				Param1 = 0;
				Function_28(&Param1 + 40);
				Function_23(&Param1 + 40);
				if (&bParam2)
				{
					TASK_PRIORITY_SET(&iVar5, 2);
					TASK_GO_TO_COORD_AND_STAY(&iVar5, &Param1 + 56, 1, 0.0f);
				}
				else
				{
					TASK_PRIORITY_SET(&iVar5, 3);
					Function_51(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
				}
				SET_PERS_CHAR_ENABLED(&iVar6, false);
				DEACTIVATE_ACTOR_FOR_PERS_CHAR(&iVar6);
				iParam0 = 15;
				break;
			}
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (IS_OBJECT_VALID(&Param1 + 16))
				{
					switch (GET_OBJECT_TYPE(&Param1 + 16))
					{
						case 0x0000000C:
							if (IS_GRINGO_READY(&Param1 + 16))
							{
								if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&Param1 + 16), "UseCase1", &Var1))
								{
									GET_OBJECT_POSITION(&Param1 + 16, &Var1);
								}
							}
							else
							{
								GET_OBJECT_POSITION(&Param1 + 16, &Var1);
							}
							if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_50(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_50(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(&Param1 + 16, false, &Var1);
							if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_50(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_50(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						default:
							Function_50(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_50(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
					iParam0 = 1;
				}
			}
			else
			{
				Param1 = 1000;
				if (IS_OBJECT_VALID(&Param1 + 16))
				{
					switch (GET_OBJECT_TYPE(&Param1 + 16))
					{
						case 0x0000000C:
							if (IS_GRINGO_READY(&Param1 + 16))
							{
								if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&Param1 + 16), "UseCase1", &Var1))
								{
									GET_OBJECT_POSITION(&Param1 + 16, &Var1);
								}
							}
							else
							{
								GET_OBJECT_POSITION(&Param1 + 16, &Var1);
							}
							if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_48(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_48(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(&Param1 + 16, false, &Var1);
							if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_48(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_48(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						default:
							Function_48(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_48(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
					iParam0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (bVar15)
			{
				iParam0 = 16;
				break;
			}
			if (Function_47(&Param1))
			{
				Param1.f_28 = Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
				Function_4(&Param1, Param1.f_28);
				*(&Param1 + 56) = Function_4(&Param1, Param1.f_28);
				Param1.f_68 = Function_2(&Param1);
			}
			*(&Param1 + 80) = Function_56(&Param1, &Param1 + 24, 0);
			*(&Param1 + 16) = Function_53(StackVal, &Param1, &Param1 + 72, &Param1 + 80, "UseCase1", *(&Param1 + 56), Param1.f_68, 0, 0);
			Function_11(&Param1, "GB_PERFORM_SCHEDULED_TASK", &Param1 + 80);
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (IS_OBJECT_VALID(&Param1 + 16))
				{
					switch (GET_OBJECT_TYPE(&Param1 + 16))
					{
						case 0x0000000C:
							Param1 = 0;
							Function_28(&Param1 + 40);
							Function_23(&Param1 + 40);
							if (Function_46(&Param1))
							{
								iParam0 = 4;
							}
							else
							{
								TASK_PRIORITY_SET(&iVar5, 2);
								iParam0 = 2;
							}
							break;
						
						case 0x00000010:
							Param1 = 0;
							Function_28(&Param1 + 40);
							Function_23(&Param1 + 40);
							TASK_PRIORITY_SET(&iVar5, 2);
							iParam0 = 6;
							break;
						
						default:
							Function_22(&Param1, "GB_PERFORM_SCHEDULED_TASK: Unhandled object! what the hell has come through?");
							iParam0 = 20;
							break;
					}
				}
				else if (STRINGS_ARE_EQUAL(&Param1 + 80, "nsleeptime"))
				{
					Param1 = 0;
					Function_28(&Param1 + 40);
					Function_23(&Param1 + 40);
					if (&bParam2)
					{
						TASK_PRIORITY_SET(&iVar5, 2);
						TASK_GO_TO_COORD_AND_STAY(&iVar5, &Param1 + 56, 1, 0.0f);
					}
					else
					{
						TASK_PRIORITY_SET(&iVar5, 3);
						Function_51(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
					}
					SET_PERS_CHAR_ENABLED(&iVar6, false);
					iParam0 = 15;
				}
				else if (STRINGS_ARE_EQUAL_CLAMPED(&Param1 + 80, "wander", 6))
				{
					Param1 = 0;
					Function_28(&Param1 + 40);
					Function_23(&Param1 + 40);
					TASK_PRIORITY_SET(&iVar5, 3);
					iParam0 = 8;
				}
				else
				{
					Function_22(&Param1, "WARNING! No valid TASK for this pers char");
					iParam0 = 9;
				}
			}
			else
			{
				switch (GET_OBJECT_TYPE(&Param1 + 16))
				{
					case 0x0000000C:
						if (IS_GRINGO_READY(&Param1 + 16))
						{
							if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&Param1 + 16), "UseCase1", &Var1))
							{
								GET_OBJECT_POSITION(&Param1 + 16, &Var1);
							}
						}
						else
						{
							GET_OBJECT_POSITION(&Param1 + 16, &Var1);
						}
						if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
						{
							Function_48(StackVal, Var1, &iVar5, &iVar6);
						}
						else
						{
							Function_48(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
						}
						iParam0 = 19;
						break;
					
					case 0x00000010:
						GET_PATH_POINT(&Param1 + 16, false, &Var1);
						if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
						{
							Function_48(StackVal, Var1, &iVar5, &iVar6);
						}
						else
						{
							Function_48(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
						}
						iParam0 = 19;
						break;
					
					default:
						Function_48(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
						if (STRINGS_ARE_EQUAL_CLAMPED(&Param1 + 80, "wander", 6))
						{
							iParam0 = 19;
						}
						else if (STRINGS_ARE_EQUAL_CLAMPED(&Param1 + 80, "nsleeptime", 9))
						{
							iParam0 = 19;
						}
						else
						{
							iParam0 = 19;
						}
						break;
					}
			}
			break;
		
		case 0x00000002:
			Param1 = 0;
			if (IS_ACTOR_VALID(&iVar5))
			{
				TASK_PRIORITY_SET(&iVar5, 2);
				TASK_STAND_STILL(&iVar5, 1.0f, 1, 1);
				iParam0 = 3;
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000003:
			Param1 = 0;
			if (IS_ACTOR_VALID(&iVar5))
			{
				iVar0 = GET_TASK_STATUS(&iVar5, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					iParam0 = 4;
				}
				if (Function_47(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000004:
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				Function_44(&iVar5);
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else
				{
					if (Function_43(&iVar5, &Param1 + 16, "UseCase1", Function_9(&Param1)))
					{
						if (Function_42(&iVar5, &Param1 + 16, "UseCase1", &bVar17))
						{
							Function_28(&Param1 + 40);
							Function_23(&Param1 + 40);
							iParam0 = 5;
							break;
						}
						else if (bVar17)
						{
							Function_11(&Param1, "GB_PERFORM_SCHEDULED_TASK", "GB_REACH_AND_USE_GRINGO failed - gringo is inside a restriction volume.");
							iParam0 = 9;
							break;
						}
					}
					else
					{
						iParam0 = 9;
						break;
					}
					if (Function_32(&Param1 + 40) < 20.0f)
					{
						if ((GET_TASK_STATUS(&iVar5, 1) != 4 || GET_TASK_STATUS(&iVar5, 19) != 4) || Function_47(&Param1))
						{
							iParam0 = 20;
						}
					}
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000008:
			Param1 = 0;
			if (IS_ACTOR_VALID(&iVar5))
			{
				Function_44(&iVar5);
				fVar4 = Function_41(&Param1 + 80);
				Var1 = *(&Param1 + 56);
				uVar3 = Param1.f_68;
				if (Function_40(&Param1, &vVar7, &vVar9))
				{
					iVar11 = Vector(Function_39(vVar7.x, vVar9.x), Function_39(vVar7.y, vVar9.y), Function_39(vVar7.z, vVar9.z));
					uVar13 = Vector(Function_38(vVar7.x, vVar9.x), Function_38(vVar7.y, vVar9.y), Function_38(vVar7.z, vVar9.z));
					TASK_PRIORITY_SET(&iVar5, 3);
					TASK_WANDER_IN_BOX(&iVar5, &iVar11, &uVar13, -1f);
					iParam0 = 12;
				}
				else
				{
					Function_51(StackVal, Var1, uVar3, fVar4);
					iParam0 = 11;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000009:
			Param1 = 0;
			if (IS_ACTOR_VALID(&iVar5))
			{
				Function_44(&iVar5);
				if (&bParam2)
				{
					Function_22(&Param1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK (this is a shopkeeper) - check spew!");
					Var1 = *(&Param1 + 56);
					uVar3 = Param1.f_68;
					TASK_PRIORITY_SET(&iVar5, 2);
					TASK_GO_NEAR_COORD(&iVar5, &Var1, 2.0f, 1);
					iParam0 = 10;
				}
				else
				{
					Function_22(&Param1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK - check spew!");
					if (Function_40(&Param1, &vVar7, &vVar9))
					{
						iVar11 = Vector(Function_39(vVar7.x, vVar9.x), Function_39(vVar7.y, vVar9.y), Function_39(vVar7.z, vVar9.z));
						uVar13 = Vector(Function_38(vVar7.x, vVar9.x), Function_38(vVar7.y, vVar9.y), Function_38(vVar7.z, vVar9.z));
						TASK_PRIORITY_SET(&iVar5, 3);
						TASK_WANDER_IN_BOX(&iVar5, &iVar11, &uVar13, 20.0f);
						iParam0 = 12;
					}
					else
					{
						Var1 = *(&Param1 + 56);
						uVar3 = Param1.f_68;
						Function_51(StackVal, Var1, uVar3, 20.0f);
						iParam0 = 11;
					}
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000A:
			Param1 = 0;
			if (IS_ACTOR_VALID(&iVar5))
			{
				iVar0 = GET_TASK_STATUS(&iVar5, 61);
				if (iVar0 != 0 || iVar0 != 4)
				{
					TASK_PRIORITY_SET(&iVar5, 2);
					TASK_STAND_STILL(&iVar5, 20.0f, 1, 0);
					iParam0 = 14;
				}
				if (Function_47(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000E:
			Function_37(&Param1, &iVar6, "STANDING STILL FALLBACK");
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				iVar0 = GET_TASK_STATUS(&iVar5, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					iParam0 = 20;
				}
				if (Function_47(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				iVar0 = GET_TASK_STATUS(&iVar5, 58);
				if (iVar0 != 0 || iVar0 != 4)
				{
					iParam0 = 20;
				}
				if (Function_47(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000D:
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				iVar0 = GET_TASK_STATUS(&iVar5, 57);
				if ((iVar0 != 0 || iVar0 != 2) || iVar0 != 4)
				{
					iParam0 = 20;
				}
				if (Function_47(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x0000000F:
			Function_37(&Param1, &iVar6, "nSLEEPTIME");
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iVar5, 1065353216, 1117126656, 1, 1, 0))
				{
					DECOR_SET_FLOAT(&iVar5, "sleepvis", GET_CURRENT_GAME_TIME());
				}
				if (DECOR_CHECK_EXIST(&iVar5, "sleepvis"))
				{
					if (DECOR_GET_FLOAT(&iVar5, "sleepvis") + 5.0f) > GET_CURRENT_GAME_TIME()
					{
						DEACTIVATE_ACTOR_FOR_PERS_CHAR(&iVar6);
					}
				}
			}
			if (Function_47(&Param1))
			{
				if (IS_ACTOR_VALID(&iVar5))
				{
					if (DECOR_CHECK_EXIST(&iVar5, "sleepvis"))
					{
						DECOR_REMOVE(&iVar5, "sleepvis");
					}
				}
				SET_PERS_CHAR_ENABLED(&iVar6, true);
				iParam0 = 20;
			}
			break;
		
		case 0x00000005:
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else
				{
					iVar0 = GET_TASK_STATUS(&iVar5, 19);
					if ((iVar0 != 0 || iVar0 != 2) || iVar0 != 4)
					{
						iParam0 = 20;
					}
					if (AI_HAS_ACTOR_BUMPED_INTO_ME(&iVar5, &Global_54076, 10.0f) && Function_36(&Param1 + 16))
					{
						iParam0 = 20;
					}
					if (Function_47(&Param1))
					{
						iParam0 = 20;
					}
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000006:
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				Function_44(&iVar5);
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else
				{
					TASK_GUARD_PATROL_PATH(&iVar5, &Param1 + 16, 3212836864, 4294967295, 0, 1, 3212836864);
					iParam0 = 7;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000007:
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else if (Function_47(&Param1))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000013:
			if (IS_ACTOR_VALID(&iVar5))
			{
				iParam0 = 20;
			}
			else if (Function_47(&Param1))
			{
				iParam0 = 20;
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iVar6)))
			{
				if (Function_35(50.0f, &iVar6))
				{
					iParam0 = 20;
				}
			}
			break;
		
		case 0x00000010:
			if (bVar15)
			{
				Param1 = 0;
				if (IS_ACTOR_VALID(&iVar5))
				{
					Function_44(&iVar5);
					Function_51(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
				}
				iParam0 = 17;
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000011:
			Function_37(&Param1, &iVar6, "RESPONDING TO RAIN");
			Param1 = 0;
			if (!bVar15)
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000012:
			Function_37(&Param1, &iVar6, "RESPONDING TO RETREAT");
			Param1 = 0;
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (!AI_GET_IS_RETREATING(&iVar5))
				{
					iParam0 = 20;
				}
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			(&Param1 + 16) = "";
			Param1 = 0;
			if (Function_47(&Param1))
			{
				Param1.f_24 = 0;
			}
			else
			{
				Param1.f_24++;
			}
			Function_28(&Param1 + 40);
			if (IS_ACTOR_VALID(&iVar5))
			{
				TASK_PRIORITY_SET(&iVar5, 2);
			}
			iParam0 = 1;
			break;
		
		case 0x00000015:
			if (!Function_86(&Param1))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_PERS_CHAR(&iVar6), "KeepLastTask"))
				{
					Function_37(&Param1, &iVar6, "STOLEN KEEP_LAST_TASK");
					if (!IS_ACTOR_VALID(&iVar5))
					{
						DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&iVar6), "KeepLastTask");
						iParam0 = 20;
					}
				}
				else
				{
					iParam0 = 20;
				}
			}
			else
			{
				Function_37(&Param1, &iVar6, "STOLEN");
			}
			break;
		
		default:
			Function_11(&Param1, "GB_PERFORM_SCHEDULED_TASK", "UNKNOWN STATE!");
			return 0;
			break;
	}
	return 1;
}

bool Function_35(float fParam0, int iParam1) //Position: 0x227C / 8828
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	GET_OBJECT_POSITION(&iParam1, &Var0);
	if (VDIST(Var0, Var2) >= fParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_36(int iParam0) //Position: 0x22A8 / 8872
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_GRINGO_FROM_OBJECT(&iParam0);
	if (IS_GRINGO_VALID(&uVar0))
	{
		iVar1 = 0;
		GRINGO_QUERY_STRING(&uVar0, "UseCase1", "ChildFlags", &iVar1);
		if (iVar1 >= 0)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_37(int iParam0, int iParam1, int iParam2) //Position: 0x22F2 / 8946
{
	struct<5> Var0;
	
	if (Function_9(&iParam0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_PERS_CHAR(&iParam1), &Var0);
		Var0.f_4 = (StackVal + 0,25f);
	}
	return;
}

int Function_38(int iParam0, int iParam1) //Position: 0x231B / 8987
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_39(int iParam0, int iParam1) //Position: 0x232E / 9006
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_40(int iParam0, int iParam1, var uParam2) //Position: 0x2341 / 9025
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	iVar0 = Function_3(&iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			iVar6 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			iVar6 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			iVar6 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			iVar6 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			iVar6 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			iVar6 = "Night_Tasks";
			break;
		
		default:
			if (Function_9(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_WANDER_BOX_CORNERS_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			iVar6 = "Dawn_Tasks";
			break;
	}
	iVar3 = GRINGO_GET_FIRST_NAMED_CHILD("TimeOfDay_Tasks", 0, &iParam0 + 8);
	uVar4 = GRINGO_GET_FIRST_NAMED_CHILD(&iVar6, 0, &iVar3);
	iVar7 = GRINGO_GET_ATTRIBUTE_COUNT(&uVar4);
	bVar8 = false;
	while (bVar8 <= iVar7)
	{
		uVar5 = GRINGO_GET_ATTRIBUTE(&uVar4, bVar8);
		if (!bVar1)
		{
			bVar1 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(&uVar5, &iParam1);
		}
		else if (!bVar2)
		{
			bVar2 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(&uVar5, &uParam2);
		}
		if (bVar1 && bVar2)
		{
			return 1;
		}
		bVar8++;
	}
	return 0;
}

var Function_41(int iParam0) //Position: 0x2516 / 9494
{
	int iVar0;
	int iVar1;
	
	STRING_CLEAR_TOKENIZER();
	iVar1 = SET_OWNERSHIP_STRAGGLER(&iParam0, ",");
	if (iVar1 >= 1)
	{
		iVar0 = STRING_TO_FLOAT(STRING_GET_TOKEN(1));
		if (iVar0 < 0.0f)
		{
			return iVar0;
		}
	}
	return -1.0f;
}

bool Function_42(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2545 / 9541
{
	struct<2> Var0;
	struct<2> Var2;
	
	uParam3 = 0;
	if (IS_OBJECT_VALID(&uParam1))
	{
		if (GET_OBJECT_TYPE(&uParam1) == 12)
		{
			GET_OBJECT_POSITION(&uParam1, &Var0);
			GET_POSITION(&uParam0, &Var2);
			if (IS_POINT_IN_AMBIENT_MOVE_RESTRICTION_VOLUME(&Var0))
			{
				uParam3 = 1;
				return 0;
			}
			if (VDIST(Var0, Var2) < 8.0f)
			{
				if (GET_TASK_STATUS(&uParam0, 1) == 2)
				{
					TASK_PRIORITY_SET(&uParam0, 2);
					TASK_GO_TO_COORD(&uParam0, &Var0, 1);
				}
			}
			else
			{
				TASK_PRIORITY_SET(&uParam0, 2);
				TASK_USE_GRINGO(&uParam0, GET_GRINGO_FROM_OBJECT(&uParam1), &uParam2, 1, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_43(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x25D7 / 9687
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam1))
	{
		if (GET_OBJECT_TYPE(&uParam1) == 12)
		{
			if (Function_36(&uParam1))
			{
				if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(&uParam1), &uParam2, &iParam0))
				{
					if (&bParam3)
					{
						PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo cannot be used by me!");
						PRINTNL();
					}
					return 0;
				}
			}
			iVar0 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_TASKED_USER_EXTERNAL(GET_GRINGO_FROM_OBJECT(&uParam1), &uParam2));
			if (IS_ACTOR_VALID(&iVar0))
			{
				if (&iVar0 == &iParam0)
				{
					return 1;
				}
				if (&bParam3)
				{
					PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo has a valid TASKED_USER_EXTERNAL that is not me!");
					PRINTNL();
				}
			}
			else
			{
				iVar0 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(&uParam1), &uParam2));
				if (IS_ACTOR_VALID(&iVar0))
				{
					if (&iVar0 == &iParam0)
					{
						return 1;
					}
					if (&bParam3)
					{
						PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo has a valid NAMED_COMPONENT_USER that is not me!");
						PRINTNL();
					}
				}
				else
				{
					return 1;
				}
			}
		}
		if (&bParam3)
		{
			PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: Object passed is not a GRINGO!");
			PRINTNL();
		}
	}
	else if (&bParam3)
	{
		PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: Invalid OBJECT passed!");
		PRINTNL();
	}
	return 0;
}

void Function_44(int iParam0) //Position: 0x2828 / 10280
{
	if (IS_ACTOR_RIDING(&iParam0))
	{
		Function_45(&iParam0);
		MEMORY_PREFER_WALKING(&iParam0, 0);
		ACTOR_DISMOUNT_NOW(&iParam0);
	}
	return;
}

void Function_45(int iParam0) //Position: 0x284E / 10318
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&iParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170);
		}
	}
	return;
}

bool Function_46(int iParam0) //Position: 0x28D1 / 10449
{
	var uVar0;
	var uVar1;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		return GET_GRINGO_BOOL_ATTR("minigame_guy", &uVar0, &uVar1);
	}
	return 0;
}

bool Function_47(struct<11> Param0) //Position: 0x291B / 10523
{
	if (!StackVal != Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0.f_28, Param0))
	{
		return 1;
	}
	return 0;
}

void Function_48(struct<2> Param0, var uParam2, var uParam3) //Position: 0x2937 / 10551
{
	struct<2> Var0;
	var uVar2;
	float fVar4;
	struct<2> Var5;
	
	Var0 = Param0;
	if (IS_ACTOR_VALID(&uParam2))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam2, 1065353216, 1117126656, 1, 1, 0))
		{
			fVar4 = GET_ACTOR_HEIGHT(&uParam2);
			fVar4 = (fVar4 / 2.0f);
			Param0.f_4 = (StackVal + fVar4);
			if (STREAMING_ARE_BOUNDS_LOADED(Param0, 25.0f))
			{
				FIND_GROUND_INTERSECTION(&Param0, 25.0f, &Var0, &uVar2);
			}
			else
			{
				Var0 = Param0;
			}
			if (!Function_49(StackVal, Var0))
			{
				Var5 = Var0;
			}
			else
			{
				Var5 = Param0;
			}
			LOG_WARNING("GB_SET_PERS_CHAR_POSITION: calling WOULD_ACTOR_BE_VISIBLE");
			if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&uParam2), &Var5, 3212836864))
			{
				LOG_WARNING("GB_SET_PERS_CHAR_POSITION: called WOULD_ACTOR_BE_VISIBLE and succeded");
				SET_OBJECT_POSITION(&uParam3, Var5);
			}
		}
	}
	else
	{
		SET_OBJECT_POSITION(&uParam3, Var0);
	}
}

bool Function_49(vector3 vParam0) //Position: 0x2A7D / 10877
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_50(struct<2> Param0, var uParam2, var uParam3) //Position: 0x2A95 / 10901
{
	struct<2> Var0;
	var uVar2;
	float fVar4;
	
	Var0 = Param0;
	if (IS_ACTOR_VALID(&uParam2))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam2, 1065353216, 1117126656, 1, 1, 0))
		{
			fVar4 = GET_ACTOR_HEIGHT(&uParam2);
			fVar4 = (fVar4 / 2.0f);
			Param0.f_4 = (StackVal + fVar4);
			if (STREAMING_ARE_BOUNDS_LOADED(Param0, 25.0f))
			{
				FIND_GROUND_INTERSECTION(&Param0, 25.0f, &Var0, &uVar2);
			}
			else
			{
				Var0 = Param0;
			}
			LOG_WARNING("GB_TELEPORT: calling WOULD_ACTOR_BE_VISIBLE");
			if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(&uParam2), &Var0, 3212836864))
			{
				LOG_WARNING("GB_TELEPORT: called WOULD_ACTOR_BE_VISIBLE and succeded");
				TELEPORT_ACTOR(&uParam2, &Var0, 1, 1, 1);
			}
		}
	}
	else
	{
		SET_OBJECT_POSITION(&uParam3, Var0);
	}
}

void Function_51(struct<2> Param0, var uParam2, float fParam3) //Position: 0x2BA3 / 11171
{
	var uVar0;
	var uVar2;
	
	if (fParam3 >= 0.0f)
	{
		fParam3 = -1.0f;
	}
	Function_52(StackVal, Param0, uParam2, &uVar0, &uVar2);
	TASK_PRIORITY_SET(Function_8(), 3);
	TASK_WANDER_IN_BOX(Function_8(), &uVar0, &uVar2, fParam3);
}

void Function_52(vector3 vParam0) //Position: 0x2BD5 / 11221
{
	if (fParam2 >= 0.0f)
	{
		fParam2 = 1.0f;
	}
	vParam3.f_8 = (vParam0.z - (fParam2 * 0,707f));
	vParam3.f_4 = (vParam0.y - 100.0f);
	vParam3 = (vParam0.x - (fParam2 * 0,707f));
	vParam4.f_8 = (vParam0.z + (fParam2 * 0,707f));
	vParam4.f_4 = (vParam0.y + 100.0f);
	vParam4 = (vParam0.x + (fParam2 * 0,707f));
}

var Function_53(int iParam0, int iParam1, var uParam2, var uParam3, struct<2> Param4, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2C47 / 11335
{
	var uVar0;
	float fVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		if (Function_9(&iParam0))
		{
			LOG_ERROR("GB_GET_FIRST_USABLE_OBJECT: Invalid Layout!");
		}
		return "";
	}
	if (STRING_CONTAINS_STRING(&uParam2, "wander"))
	{
		return "";
	}
	if (STRING_CONTAINS_STRING(&uParam2, "camp,"))
	{
		return "";
	}
	if (STRING_CONTAINS_STRING(&uParam2, "nsleeptime"))
	{
		return "";
	}
}

var Function_54(float fParam0, bool bParam1, bool bParam2) //Position: 0x3402 / 13314
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	struct<5> Var4;
	bool bVar9;
	float fVar10;
	
	bVar9 = 1E+33.0f;
	if (!IS_ITERATOR_VALID(&fParam0))
	{
		return &bVar0;
	}
	fVar1 = START_OBJECT_ITERATOR(&fParam0);
	while (IS_OBJECT_VALID(&fVar1))
	{
		if (bParam1 || bParam2)
		{
			if (IS_ACTOR_VALID(Function_8()))
			{
				GET_OBJECT_POSITION(&fVar1, &Var4);
				GET_POSITION(Function_8(), &Var6);
				if (bParam1)
				{
					bVar8 = VDIST(Var4, Var6);
					if (bVar8 > bVar9)
					{
						if (bParam2)
						{
							fVar10 = FABS((StackVal - StackVal));
							if (fVar10 >= 1.0f)
							{
								bVar9 = bVar8;
								fVar2 = &fVar1;
							}
						}
						else
						{
							bVar9 = bVar8;
							fVar2 = &fVar1;
						}
					}
				}
				else if (bParam2)
				{
					fVar10 = FABS((StackVal - StackVal));
					if (fVar10 >= 1.0f)
					{
						bVar3 = &fVar1;
					}
				}
			}
			else
			{
				return &fVar1;
			}
		}
		return &fVar1;
		fVar1 = OBJECT_ITERATOR_NEXT(&fParam0);
	}
	if (bParam1 && IS_OBJECT_VALID(&fVar2))
	{
		return &fVar2;
	}
	if (bParam2 && IS_OBJECT_VALID(&bVar3))
	{
		return &bVar3;
	}
	return &bVar0;
}

var Function_55() //Position: 0x34FC / 13564
{
	int iVar0;
	
	return &iVar0;
}

var Function_56(int iParam0, var uParam1, int iParam2) //Position: 0x3505 / 13573
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	
	iVar0 = Function_3(&iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			uVar7 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			uVar7 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			uVar7 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			uVar7 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			uVar7 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			uVar7 = "Night_Tasks";
			break;
		
		default:
			if (Function_9(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_TASK_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	uVar4 = GRINGO_GET_FIRST_NAMED_CHILD("TimeOfDay_Tasks", 0, &iParam0 + 8);
	uVar5 = GRINGO_GET_FIRST_NAMED_CHILD(&uVar7, 0, &uVar4);
	iVar2 = GRINGO_GET_ATTRIBUTE_COUNT(&uVar5);
	if (iVar2 < 1 && iParam2)
	{
		bVar9 = RAND_INT_RANGE(0, 1000);
		bVar1 = (bVar9 % iVar2);
	}
	if (uParam1 < 0 && uParam1 > iVar2)
	{
		bVar1 = uParam1;
	}
	else
	{
		bVar1 = true;
		uParam1 = bVar1;
	}
	while (bVar1 <= iVar2)
	{
		uVar6 = GRINGO_GET_ATTRIBUTE(&uVar5, bVar1);
		iVar8 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar6, &uVar3);
		if (IS_STRING_VALID(&iVar8))
		{
			return &iVar8;
		}
		bVar1++;
	}
	return "NHIL";
}

var Function_57(int iParam0) //Position: 0x36E6 / 14054
{
	int iVar0;
	var uVar11;
	
	uVar11 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	GET_GRINGO_STRUCT_ATTR(&iVar0, 22, "Vectors_and_LayoutRef_Struct", &uVar11);
	return &iVar0 + 72;
}

var Function_58() //Position: 0x373A / 14138
{
	return StackVal;
}

int Function_59(var uParam0, struct<21> Param1) //Position: 0x3745 / 14149
{
	var uVar0;
	
	vParam3 = { StackVal, StackVal, vParam3 };
	if (Param1.f_20)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(Function_8()))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Param1 + 24))
	{
		return 0;
	}
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam2 + 8);
	if (!IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		return 0;
	}
	switch (uParam0)
	{
		case 0x0000001C:
			TASK_FACE_ACTOR(Function_8(), &Param1 + 24, 1, 3212836864);
			Function_28(&Param1);
			Function_23(&Param1);
			uParam0 = 33;
			break;
		
		case 0x00000021:
			if (IS_ACTOR_RIDING(Function_8()))
			{
				ACTOR_DISMOUNT_NOW(Function_8());
			}
			if (Function_69(StackVal, Param4.f_12, Function_85()))
			{
				uParam0 = 34;
			}
			else
			{
				Function_15(Function_21(&iParam2));
				uParam0 = 32;
			}
			break;
		
		case 0x00000022:
			break;
		
		case 0x00000029:
			Function_12();
			return 0;
			break;
		
		case 0x0000002A:
			return 0;
			break;
		
		default:
			Function_11(&iParam2, "GB_PERFORM_SIMPLE_USE_TASK", "Unknown State");
			return 0;
			break;
	}
	return 1;
}

void Function_60(struct<17> Param0) //Position: 0x3883 / 14467
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Param0 + 24))
	{
		GRINGO_ACTOR_DROP_ATTACHED_PROP(&Param0 + 24);
		GRINGO_REPORT_USE_FINISHED(&Param0 + 24, true);
		if (GRINGO_OWNS_ACTOR_ANIMS(&Param0 + 24))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(&Param0 + 24);
		}
	}
	if (IS_ACTOR_VALID(Function_8()))
	{
		if (GRINGO_OWNS_ACTOR_ANIMS(Function_8()))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(Function_8());
		}
		uVar0 = GET_CURRENT_GRINGO(Function_8());
		if (IS_GRINGO_VALID(&uVar0))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(&uVar0);
		}
		if (!Function_86(&iParam1))
		{
			TASK_PRIORITY_SET(Function_8(), 3);
		}
	}
	Function_28(&Param0);
	Function_23(&Param0);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam1 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		GRINGO_CLEAR_COMPONENT_USER(&uVar1);
	}
	Function_62(&uParam3);
	Function_61(&Param0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	iParam2 = 1;
	Param0.f_16 = 0;
}

void Function_61(int iParam0) //Position: 0x3955 / 14677
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 32))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 40))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 40);
	}
	return;
}

void Function_62(int iParam0) //Position: 0x3985 / 14725
{
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		DESTROY_LAYOUT(&iParam0);
	}
	Global_6636 = 0;
	return;
}

void Function_63(struct<17> Param0) //Position: 0x39A0 / 14752
{
	int iVar0;
	
	Function_28(&Param0);
	Function_23(&Param0);
	(&Param0 + 24) = GRINGO_GET_REQUESTING_ACTOR();
	uParam2 = 28;
	Param0.f_16 = 1;
	iVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam1 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&iVar0))
	{
		GRINGO_SET_COMPONENT_USER(GET_OBJECT_FROM_ACTOR(&Param0 + 24), &iVar0);
	}
	iParam1 = 0;
	return;
}

void Function_64(int iParam0) //Position: 0x39FC / 14844
{
	Function_28(&iParam0 + 40);
	if (IS_ACTOR_VALID(Function_8()))
	{
		TASK_CLEAR(Function_8());
		TASK_PRIORITY_SET(Function_8(), 2);
	}
	return;
}

var Function_65(int iParam0) //Position: 0x3A20 / 14880
{
	var uVar0;
	var uVar1;
	
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		return GET_GRINGO_STRING_ATTR("UseName", &uVar1, &uVar0);
	}
	return "";
}

int Function_66(int iParam0, struct<17> Param1) //Position: 0x3A60 / 14944
{
	var uVar0;
	float fVar1;
	var uVar2;
	struct<2> Var3;
	float fVar5;
	struct<2> Var6;
	struct<2> Var8;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		GET_GRINGO_FLOAT_ATTR(&fVar1, "ReuseDelay", &uVar0);
		if (!Param1.f_16)
		{
			if (IS_ACTOR_ALIVE(Function_8()))
			{
				if (Function_27(&Param1))
				{
					if (Function_32(&Param1) > fVar1)
					{
						return 0;
					}
				}
				uVar2 = GRINGO_GET_REQUESTING_ACTOR();
				if (!IS_ACTOR_PLAYER(&uVar2))
				{
					return 0;
				}
				GRINGO_GET_USE_COMPONENT_POSITION(&Var3, &uVar0);
				GET_GRINGO_FLOAT_ATTR(&fVar5, "ActivationRadius", &uVar0);
				GET_POSITION(&uVar2, &Var6);
				Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var3, StackVal);
				if (VMAG(Var8) < fVar5)
				{
					return 0;
				}
				if (&Param1 + 24 != GRINGO_GET_REQUESTING_ACTOR() && iParam2 != 0)
				{
					if (Function_32(&Param1) <= fVar1)
					{
						iParam2 = 1;
						return 1;
					}
					return 0;
				}
				iParam2 = 1;
				return 1;
			}
		}
		if (&Param1 + 24 == GRINGO_GET_REQUESTING_ACTOR())
		{
			iParam2 = 0;
			return 1;
		}
	}
	Function_22(&iParam0, "GB_VERIFY_REQUEST: GRINGO_GET_USE_COMPONENT returned an invalid component!");
	return 0;
}

void Function_67(int iParam0) //Position: 0x3BBD / 15293
{
	if (IS_BLIP_VALID(&iParam0 + 48))
	{
		REMOVE_BLIP(&iParam0 + 48);
	}
	return;
}

void Function_68(int iParam0) //Position: 0x3BD8 / 15320
{
	if (!IS_BLIP_VALID(&iParam0 + 48))
	{
		if (IS_ACTOR_ALIVE(Function_8()))
		{
			*(&iParam0 + 48) = ADD_BLIP_FOR_OBJECT(Function_7(), 329, 0f, 2, 0);
		}
	}
	else if (IS_ACTOR_ALIVE(Function_8()))
	{
		if (!GET_BLIP_ICON(&iParam0 + 48) != 329)
		{
			REMOVE_BLIP(&iParam0 + 48);
			*(&iParam0 + 48) = ADD_BLIP_FOR_OBJECT(Function_7(), 329, 0f, 2, 0);
		}
	}
	else
	{
		REMOVE_BLIP(&iParam0 + 48);
	}
	return;
}

bool Function_69(int iParam0, int iParam1, int iParam2) //Position: 0x3C4A / 15434
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!Function_83())
	{
		return 0;
	}
	if (Global_6646 || Global_6647)
	{
		return 0;
	}
	if (!Function_82(iParam0))
	{
		return 0;
	}
	if ((Global_6623 || Global_6627) || Global_6625)
	{
		return 0;
	}
	if (!Global_43789 != iParam1)
	{
		return 0;
	}
	iVar0 = Function_77(iParam1, iParam0, 6);
	if (!Function_76(iVar0))
	{
		return 0;
	}
	if (Global_6606)
	{
		uVar1 = Function_73(iVar0);
		if (GET_DAY(&uVar1) != 0)
		{
			uVar2 = GET_TIME_OF_DAY();
			if (iParam0 != 1)
			{
				if (GET_DAY(&uVar1) > GET_DAY(0))
				{
					return 0;
				}
			}
			uVar3 = Function_73(iVar0);
			ADD_TIME(&uVar3, 0, 16, false, 0);
			if (IS_LATER_THAN(&uVar3, 0))
			{
				return 0;
			}
		}
	}
	if (!&iParam2 != 63)
	{
		if (!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_72(&iParam2), Function_71(&iParam2)))
		{
			return 0;
		}
	}
	if (IS_SCRIPT_VALID(&Global_98256[iParam010] + 8) || Function_70(&(Global_98256[iParam010]), 2))
	{
		return 0;
	}
	if (Function_70(&(Global_98256[iParam010]), 1))
	{
		return 0;
	}
	return 1;
}

bool Function_70(var uParam0, int iParam1) //Position: 0x3D49 / 15689
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

var Function_71(int iParam0) //Position: 0x3D61 / 15713
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_72(int iParam0) //Position: 0x3DCD / 15821
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 1)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, 0);
}

var Function_73(int iParam0) //Position: 0x3E39 / 15929
{
	if (!Function_74(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, 0);
	}
	return &Global_21684[iParam07] + 40;
}

bool Function_74(int iParam0) //Position: 0x3E59 / 15961
{
	if (!Function_76(iParam0))
	{
		return 0;
	}
	if (!Function_75(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_75(int iParam0) //Position: 0x3E7D / 15997
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_76(int iParam0) //Position: 0x3E92 / 16018
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_77(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3EA9 / 16041
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_81(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_78(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_78(bParam0, bParam1, bParam2, 4294967295);
}

int Function_78(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3F07 / 16135
{
	var uVar0;
	
	if (!Function_80(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_81(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_79(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_79(int iParam0) //Position: 0x406D / 16493
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_80(int iParam0) //Position: 0x40AB / 16555
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_81(int iParam0, int iParam1, int iParam2) //Position: 0x40C0 / 16576
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_82(int iParam0) //Position: 0x40E0 / 16608
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return 0;
	}
	return Global_39258[iParam0];
}

bool Function_83() //Position: 0x40FB / 16635
{
	return Function_84(512);
}

int Function_84(int iParam0) //Position: 0x4107 / 16647
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_85() //Position: 0x4123 / 16675
{
	struct<25> Var0;
	
	uVar12 = FIND_OBJECT_IN_OBJECT(Function_7(), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar12), "Settings", "DataExchange_Struct", &Var0, 24))
	{
		return Var0.f_24;
	}
	return 0;
}

bool Function_86(int iParam0) //Position: 0x4181 / 16769
{
	var uVar0;
	var uVar1;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		return GET_GRINGO_BOOL_ATTR("stolen_flag", &uVar0, &uVar1);
	}
	return 0;
}

int Function_87(int iParam0) //Position: 0x41CA / 16842
{
	var uVar0;
	var uVar1;
	
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("Settings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		return GET_GRINGO_BOOL_ATTR("EnableConversations", &uVar1, &uVar0);
	}
	return 0;
}

int Function_88(int iParam0) //Position: 0x4211 / 16913
{
	var uVar0;
	var uVar1;
	
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("Settings", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		return GET_GRINGO_BOOL_ATTR("EnableJobOffering", &uVar1, &uVar0);
	}
	return 0;
}

var Function_89() //Position: 0x4256 / 16982
{
	return GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()));
}

void Function_90(int iParam0) //Position: 0x4265 / 16997
{
	if (!IS_BLIP_VALID(&iParam0 + 48))
	{
		*(&iParam0 + 48) = ADD_BLIP_FOR_OBJECT(Function_7(), 329, 0f, 2, 0);
	}
	return;
}

