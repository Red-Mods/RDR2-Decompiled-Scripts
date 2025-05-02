//Decompiled with MagicRDR v1.0
//Function Count : 51
//Statics Count : 2
//Natives Count : 117
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<37> Var0;
	
	if (!IS_GRINGO_COMPONENT_VALID(&uScriptParam_0))
	{
		LOG_ERROR("Gen_Brain: Attempting to attach a gringo brain that has no valid gringo base.");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	Var0 = 0;
	*(&Var0 + 8) = &uScriptParam_0;
	iVar11 = 0;
	if (Function_50(&Var0))
	{
		Var0.f_36 = 0;
		Var0.f_32 = RAND_INT_RANGE(0, 20);
	}
	else
	{
		Var0.f_36 = 0;
		Var0.f_32 = 0;
	}
	uVar13 = Function_49();
	fVar16 = 0.0f;
	bVar14 = Function_48(&Var0, &fVar16);
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_PERS_CHAR_VALID(Function_49()))
		{
			if (!Function_47(&Var0))
			{
				GRINGO_HAS_PENDING_MESSAGE();
				if (IS_PERS_CHAR_ALIVE(Function_49()))
				{
					if (!IS_ACTOR_VALID(&uVar12))
					{
						uVar12 = Function_46();
					}
					else if (bVar14)
					{
						if (Function_45(&uVar12, &Global_54076) >= fVar16)
						{
							if (!bVar15)
							{
								MEMORY_REPORT_POSITION_AUTO(&uVar12, &Global_54076, 1);
								AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar12, &Global_54076, -1f, 0);
								bVar15 = true;
							}
						}
						else if (bVar15)
						{
							MEMORY_REPORT_POSITION_AUTO(&uVar12, &Global_54076, 0);
							AI_GOAL_LOOK_CLEAR(&uVar12);
							bVar15 = false;
						}
					}
					Function_9(&iVar11, &Var0, 0);
				}
				Function_1(iVar11, &Var0);
			}
			else
			{
				iVar11 = 21;
				Function_9(&iVar11, &Var0, 0);
				Var0 = 1000;
			}
		}
		GRINGO_WAIT(Var0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, struct<11> Param1) //Position: 0x16A / 362
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (Function_8(&Param1))
	{
		if (IS_ACTOR_VALID(Function_46()))
		{
			if (iParam0 == 0)
			{
				Param1 = 0;
			}
			else
			{
				Param1 = 0;
			}
			GET_POSITION(Function_46(), &Var0);
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

var Function_2(int iParam0) //Position: 0x20A / 522
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
			if (Function_8(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_SCAN_AREA_SIZE_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	uVar2 = GRINGO_GET_FIRST_NAMED_CHILD("TimeOfDay_Tasks", 0, &iParam0 + 8);
	uVar3 = GRINGO_GET_FIRST_NAMED_CHILD(&uVar5, 0, &uVar2);
	iVar4 = GRINGO_GET_ATTRIBUTE(&uVar3, 0);
	return GRINGO_GET_FLOAT_ATTR_BY_HANDLE(&iVar4, &uVar1);
}

int Function_3(struct<37> Param0) //Position: 0x387 / 903
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	uVar0 = MAKE_TIME_OF_DAY((5 + Param0.f_36), Param0.f_32, 0);
	uVar1 = MAKE_TIME_OF_DAY((7 + Param0.f_36), Param0.f_32, 0);
	uVar2 = MAKE_TIME_OF_DAY((11 + Param0.f_36), Param0.f_32, 0);
	uVar3 = MAKE_TIME_OF_DAY((14 + Param0.f_36), Param0.f_32, 0);
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
	if (TIME_IS_IN_RANGE(&uVar6, &uVar2, &uVar3))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(&uVar6, &uVar3, &uVar4))
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

struct<8> Function_4(int iParam0, int iParam1) //Position: 0x483 / 1155
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
		if (Function_8(&iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT vector is null for time of day index: ");
			PRINTINT(&iParam1);
			PRINTNL();
		}
		if (IS_ACTOR_VALID(Function_46()))
		{
			GET_POSITION(Function_46(), &Var12);
			if (Function_8(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning actor position instead of struct vector");
				PRINTNL();
			}
		}
		else if (IS_PERS_CHAR_VALID(Function_49()))
		{
			GET_OBJECT_POSITION(Function_7(), &Var12);
			if (Function_8(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning pers char position instead of struct vector");
				PRINTNL();
			}
		}
	}
	return StackVal, Var12;
}

bool Function_5(struct<2> Param0, struct<2> Param2) //Position: 0x74F / 1871
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

int Function_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x77B / 1915
{
	int iVar0;
	
	iVar0 = Function_3(&uParam0);
	switch (iVar0)
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
			if (Function_8(&uParam0))
			{
				PRINTSTRING("Gen_Brain: GB_GET_IDX_FROM_TOD invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	return 0;
}

var Function_7() //Position: 0x848 / 2120
{
	return GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
}

bool Function_8(int iParam0) //Position: 0x854 / 2132
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

int Function_9(int iParam0, struct<69> Param1) //Position: 0x89B / 2203
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
	
	iVar5 = Function_46();
	iVar6 = Function_49();
	bVar15 = false;
	if (!&bParam2)
	{
		iVar16 = Function_44();
		if (iVar16 != 3 || iVar16 != 4)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
	}
	if (!Function_47(&Param1))
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
			*(&Param1 + 72) = Function_43(&Param1);
			Param1.f_24 = 0;
			*(&Param1 + 80) = Function_42(&Param1, &Param1 + 24, 0);
			*(&Param1 + 16) = Function_39(StackVal, &Param1, &Param1 + 72, &Param1 + 80, "UseCase1", *(&Param1 + 56), Param1.f_68, 0, 0);
			if (STRINGS_ARE_EQUAL(&Param1 + 80, "nsleeptime"))
			{
				Param1 = 0;
				Function_38(&Param1 + 40);
				Function_34(&Param1 + 40);
				if (&bParam2)
				{
					TASK_PRIORITY_SET(&iVar5, 2);
					TASK_GO_TO_COORD_AND_STAY(&iVar5, &Param1 + 56, 1, 0.0f);
				}
				else
				{
					TASK_PRIORITY_SET(&iVar5, 3);
					Function_32(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
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
								Function_31(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_31(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(&Param1 + 16, 0, &Var1);
							if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_31(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_31(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						default:
							Function_31(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_31(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
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
								Function_29(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_29(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(&Param1 + 16, 0, &Var1);
							if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_29(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_29(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						default:
							Function_29(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_29(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
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
			if (Function_28(&Param1))
			{
				Param1.f_28 = Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
				Function_4(&Param1, Param1.f_28);
				*(&Param1 + 56) = Function_4(&Param1, Param1.f_28);
				Param1.f_68 = Function_2(&Param1);
			}
			*(&Param1 + 80) = Function_42(&Param1, &Param1 + 24, 0);
			*(&Param1 + 16) = Function_39(StackVal, &Param1, &Param1 + 72, &Param1 + 80, "UseCase1", *(&Param1 + 56), Param1.f_68, 0, 0);
			Function_27(&Param1, "GB_PERFORM_SCHEDULED_TASK", &Param1 + 80);
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (IS_OBJECT_VALID(&Param1 + 16))
				{
					switch (GET_OBJECT_TYPE(&Param1 + 16))
					{
						case 0x0000000C:
							Param1 = 0;
							Function_38(&Param1 + 40);
							Function_34(&Param1 + 40);
							if (Function_26(&Param1))
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
							Function_38(&Param1 + 40);
							Function_34(&Param1 + 40);
							TASK_PRIORITY_SET(&iVar5, 2);
							iParam0 = 6;
							break;
						
						default:
							Function_25(&Param1, "GB_PERFORM_SCHEDULED_TASK: Unhandled object! what the hell has come through?");
							iParam0 = 20;
							break;
					}
				}
				else if (STRINGS_ARE_EQUAL(&Param1 + 80, "nsleeptime"))
				{
					Param1 = 0;
					Function_38(&Param1 + 40);
					Function_34(&Param1 + 40);
					if (&bParam2)
					{
						TASK_PRIORITY_SET(&iVar5, 2);
						TASK_GO_TO_COORD_AND_STAY(&iVar5, &Param1 + 56, 1, 0.0f);
					}
					else
					{
						TASK_PRIORITY_SET(&iVar5, 3);
						Function_32(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
					}
					SET_PERS_CHAR_ENABLED(&iVar6, false);
					iParam0 = 15;
				}
				else if (STRINGS_ARE_EQUAL_CLAMPED(&Param1 + 80, "wander", 6))
				{
					Param1 = 0;
					Function_38(&Param1 + 40);
					Function_34(&Param1 + 40);
					TASK_PRIORITY_SET(&iVar5, 3);
					iParam0 = 8;
				}
				else
				{
					Function_25(&Param1, "WARNING! No valid TASK for this pers char");
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
							Function_29(StackVal, Var1, &iVar5, &iVar6);
						}
						else
						{
							Function_29(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
						}
						iParam0 = 19;
						break;
					
					case 0x00000010:
						GET_PATH_POINT(&Param1 + 16, 0, &Var1);
						if (!Function_5(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
						{
							Function_29(StackVal, Var1, &iVar5, &iVar6);
						}
						else
						{
							Function_29(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
						}
						iParam0 = 19;
						break;
					
					default:
						Function_29(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
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
				if (Function_28(&Param1))
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
				Function_23(&iVar5);
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else
				{
					if (Function_22(&iVar5, &Param1 + 16, "UseCase1", Function_8(&Param1)))
					{
						if (Function_21(&iVar5, &Param1 + 16, "UseCase1", &bVar17))
						{
							Function_38(&Param1 + 40);
							Function_34(&Param1 + 40);
							iParam0 = 5;
							break;
						}
						else if (bVar17)
						{
							Function_27(&Param1, "GB_PERFORM_SCHEDULED_TASK", "GB_REACH_AND_USE_GRINGO failed - gringo is inside a restriction volume.");
							iParam0 = 9;
							break;
						}
					}
					else
					{
						iParam0 = 9;
						break;
					}
					if (Function_17(&Param1 + 40) < 20.0f)
					{
						if ((GET_TASK_STATUS(&iVar5, 1) != 4 || GET_TASK_STATUS(&iVar5, 19) != 4) || Function_28(&Param1))
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
				Function_23(&iVar5);
				fVar4 = Function_16(&Param1 + 80);
				Var1 = *(&Param1 + 56);
				uVar3 = Param1.f_68;
				if (Function_15(&Param1, &vVar7, &vVar9))
				{
					iVar11 = Vector(Function_14(vVar7.x, vVar9.x), Function_14(vVar7.y, vVar9.y), Function_14(vVar7.z, vVar9.z));
					uVar13 = Vector(Function_13(vVar7.x, vVar9.x), Function_13(vVar7.y, vVar9.y), Function_13(vVar7.z, vVar9.z));
					TASK_PRIORITY_SET(&iVar5, 3);
					TASK_WANDER_IN_BOX(&iVar5, &iVar11, &uVar13, -1f);
					iParam0 = 12;
				}
				else
				{
					Function_32(StackVal, Var1, uVar3, fVar4);
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
				Function_23(&iVar5);
				if (&bParam2)
				{
					Function_25(&Param1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK (this is a shopkeeper) - check spew!");
					Var1 = *(&Param1 + 56);
					uVar3 = Param1.f_68;
					TASK_PRIORITY_SET(&iVar5, 2);
					TASK_GO_NEAR_COORD(&iVar5, &Var1, 2.0f, 1);
					iParam0 = 10;
				}
				else
				{
					Function_25(&Param1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK - check spew!");
					if (Function_15(&Param1, &vVar7, &vVar9))
					{
						iVar11 = Vector(Function_14(vVar7.x, vVar9.x), Function_14(vVar7.y, vVar9.y), Function_14(vVar7.z, vVar9.z));
						uVar13 = Vector(Function_13(vVar7.x, vVar9.x), Function_13(vVar7.y, vVar9.y), Function_13(vVar7.z, vVar9.z));
						TASK_PRIORITY_SET(&iVar5, 3);
						TASK_WANDER_IN_BOX(&iVar5, &iVar11, &uVar13, 20.0f);
						iParam0 = 12;
					}
					else
					{
						Var1 = *(&Param1 + 56);
						uVar3 = Param1.f_68;
						Function_32(StackVal, Var1, uVar3, 20.0f);
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
				if (Function_28(&Param1))
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
			Function_12(&Param1, &iVar6, "STANDING STILL FALLBACK");
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				iVar0 = GET_TASK_STATUS(&iVar5, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					iParam0 = 20;
				}
				if (Function_28(&Param1))
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
				if (Function_28(&Param1))
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
				if (Function_28(&Param1))
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
			Function_12(&Param1, &iVar6, "nSLEEPTIME");
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
			if (Function_28(&Param1))
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
					if (AI_HAS_ACTOR_BUMPED_INTO_ME(&iVar5, &Global_54076, 10.0f) && Function_11(&Param1 + 16))
					{
						iParam0 = 20;
					}
					if (Function_28(&Param1))
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
				Function_23(&iVar5);
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
				else if (Function_28(&Param1))
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
			else if (Function_28(&Param1))
			{
				iParam0 = 20;
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iVar6)))
			{
				if (Function_10(50.0f, &iVar6))
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
					Function_23(&iVar5);
					Function_32(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
				}
				iParam0 = 17;
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000011:
			Function_12(&Param1, &iVar6, "RESPONDING TO RAIN");
			Param1 = 0;
			if (!bVar15)
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000012:
			Function_12(&Param1, &iVar6, "RESPONDING TO RETREAT");
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
			if (Function_28(&Param1))
			{
				Param1.f_24 = 0;
			}
			else
			{
				Param1.f_24++;
			}
			Function_38(&Param1 + 40);
			if (IS_ACTOR_VALID(&iVar5))
			{
				TASK_PRIORITY_SET(&iVar5, 2);
			}
			iParam0 = 1;
			break;
		
		case 0x00000015:
			if (!Function_47(&Param1))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_PERS_CHAR(&iVar6), "KeepLastTask"))
				{
					Function_12(&Param1, &iVar6, "STOLEN KEEP_LAST_TASK");
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
				Function_12(&Param1, &iVar6, "STOLEN");
			}
			break;
		
		default:
			Function_27(&Param1, "GB_PERFORM_SCHEDULED_TASK", "UNKNOWN STATE!");
			return 0;
			break;
	}
	return 1;
}

bool Function_10(float fParam0, int iParam1) //Position: 0x19B1 / 6577
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

bool Function_11(int iParam0) //Position: 0x19DD / 6621
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

void Function_12(int iParam0, int iParam1, int iParam2) //Position: 0x1A27 / 6695
{
	struct<5> Var0;
	
	if (Function_8(&iParam0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_PERS_CHAR(&iParam1), &Var0);
		Var0.f_4 = (StackVal + 0,25f);
	}
	return;
}

int Function_13(int iParam0, int iParam1) //Position: 0x1A50 / 6736
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_14(int iParam0, int iParam1) //Position: 0x1A63 / 6755
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_15(int iParam0, int iParam1, var uParam2) //Position: 0x1A76 / 6774
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
			if (Function_8(&iParam0))
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
	iVar8 = 0;
	while (iVar8 <= iVar7)
	{
		uVar5 = GRINGO_GET_ATTRIBUTE(&uVar4, iVar8);
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
		iVar8++;
	}
	return 0;
}

var Function_16(int iParam0) //Position: 0x1C4B / 7243
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

float Function_17(vector3 vParam0) //Position: 0x1C7A / 7290
{
	if (Function_20(&vParam0))
	{
		if (Function_18(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_18(int iParam0) //Position: 0x1D47 / 7495
{
	return Function_19(iParam0, 2);
}

int Function_19(var uParam0, int iParam1) //Position: 0x1D55 / 7509
{
	return (uParam0 && iParam1) == 0;
}

bool Function_20(int iParam0) //Position: 0x1D62 / 7522
{
	return Function_19(iParam0, 1);
}

bool Function_21(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1D70 / 7536
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

bool Function_22(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1E02 / 7682
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam1))
	{
		if (GET_OBJECT_TYPE(&uParam1) == 12)
		{
			if (Function_11(&uParam1))
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

void Function_23(int iParam0) //Position: 0x2053 / 8275
{
	if (IS_ACTOR_RIDING(&iParam0))
	{
		Function_24(&iParam0);
		MEMORY_PREFER_WALKING(&iParam0, 0);
		ACTOR_DISMOUNT_NOW(&iParam0);
	}
	return;
}

void Function_24(int iParam0) //Position: 0x2079 / 8313
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

void Function_25(int iParam0, int iParam1) //Position: 0x20FC / 8444
{
	if (Function_8(&iParam0))
	{
		LOG_ERROR(&iParam1);
	}
	return;
}

bool Function_26(int iParam0) //Position: 0x2111 / 8465
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

void Function_27(int iParam0, var uParam1, int iParam2) //Position: 0x215B / 8539
{
	if (Function_8(&iParam0))
	{
		PRINTSTRING("Pers Char: ");
		PRINTSTRING(GET_OBJECT_NAME(Function_7()));
		PRINTSTRING(" - ");
		PRINTSTRING("Module Name: ");
		PRINTSTRING(&uParam1);
		PRINTSTRING(" - ");
		PRINTSTRING(&iParam2);
		PRINTNL();
	}
	return;
}

bool Function_28(struct<11> Param0) //Position: 0x21B8 / 8632
{
	if (!StackVal != Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0.f_28, Param0))
	{
		return 1;
	}
	return 0;
}

void Function_29(struct<2> Param0, var uParam2, var uParam3) //Position: 0x21D4 / 8660
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
			if (!Function_30(StackVal, Var0))
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

bool Function_30(vector3 vParam0) //Position: 0x231A / 8986
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_31(struct<2> Param0, var uParam2, var uParam3) //Position: 0x2332 / 9010
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

void Function_32(struct<2> Param0, var uParam2, float fParam3) //Position: 0x2440 / 9280
{
	var uVar0;
	var uVar2;
	
	if (fParam3 >= 0.0f)
	{
		fParam3 = -1.0f;
	}
	Function_33(StackVal, Param0, uParam2, &uVar0, &uVar2);
	TASK_PRIORITY_SET(Function_46(), 3);
	TASK_WANDER_IN_BOX(Function_46(), &uVar0, &uVar2, fParam3);
}

void Function_33(vector3 vParam0) //Position: 0x2472 / 9330
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

void Function_34(int iParam0) //Position: 0x24E4 / 9444
{
	if (!Function_20(&iParam0))
	{
		Function_35(&iParam0, 0.0f);
	}
	return;
}

void Function_35(vector3 vParam0) //Position: 0x24FB / 9467
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_37(&vParam0, 1);
	Function_36(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x2520 / 9504
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x2536 / 9526
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_38(vector3 vParam0) //Position: 0x2547 / 9543
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

var Function_39(int iParam0, int iParam1, var uParam2, var uParam3, struct<2> Param4, bool bParam6, bool bParam7, bool bParam8) //Position: 0x255E / 9566
{
	var uVar0;
	float fVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		if (Function_8(&iParam0))
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

var Function_40(float fParam0, bool bParam1, bool bParam2) //Position: 0x2D19 / 11545
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
			if (IS_ACTOR_VALID(Function_46()))
			{
				GET_OBJECT_POSITION(&fVar1, &Var4);
				GET_POSITION(Function_46(), &Var6);
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

var Function_41() //Position: 0x2E13 / 11795
{
	int iVar0;
	
	return &iVar0;
}

var Function_42(int iParam0, var uParam1, int iParam2) //Position: 0x2E1C / 11804
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	
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
			if (Function_8(&iParam0))
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
		iVar9 = RAND_INT_RANGE(0, 1000);
		iVar1 = (iVar9 % iVar2);
	}
	if (uParam1 < 0 && uParam1 > iVar2)
	{
		iVar1 = uParam1;
	}
	else
	{
		iVar1 = 1;
		uParam1 = iVar1;
	}
	while (iVar1 <= iVar2)
	{
		uVar6 = GRINGO_GET_ATTRIBUTE(&uVar5, iVar1);
		iVar8 = GRINGO_GET_STRING_ATTR_BY_HANDLE(&uVar6, &uVar3);
		if (IS_STRING_VALID(&iVar8))
		{
			return &iVar8;
		}
		iVar1++;
	}
	return "NHIL";
}

var Function_43(int iParam0) //Position: 0x2FFD / 12285
{
	int iVar0;
	var uVar11;
	
	uVar11 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	GET_GRINGO_STRUCT_ATTR(&iVar0, 22, "Vectors_and_LayoutRef_Struct", &uVar11);
	return &iVar0 + 72;
}

var Function_44() //Position: 0x3051 / 12369
{
	return StackVal;
}

float Function_45(float fParam0, bool bParam1) //Position: 0x305C / 12380
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

var Function_46() //Position: 0x3151 / 12625
{
	return GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF())));
}

bool Function_47(int iParam0) //Position: 0x3163 / 12643
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

int Function_48(int iParam0, int iParam1) //Position: 0x31AC / 12716
{
	var uVar0;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (GET_GRINGO_FLOAT_ATTR(&iParam1, "look_at_player_distance", &uVar0))
		{
			if (iParam1 >= 0.0f)
			{
				iParam1 = 5.0f;
			}
			return 1;
		}
		iParam1 = -1.0f;
		return 0;
	}
	iParam1 = -1.0f;
	return 0;
}

var Function_49() //Position: 0x3223 / 12835
{
	return GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()));
}

bool Function_50(int iParam0) //Position: 0x3232 / 12850
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	uVar0 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		bVar2 = GET_GRINGO_BOOL_ATTR("stolen_flag", &uVar0, &iVar1);
		if (iVar1 >= 0)
		{
			return bVar2;
		}
		return 1;
	}
	return 1;
}

