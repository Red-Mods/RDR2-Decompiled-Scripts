//Decompiled with MagicRDR v1.0
//Function Count : 51
//Statics Count : 1
//Natives Count : 117
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	struct<25> Var0;
	
	if (!IS_GRINGO_COMPONENT_VALID(bScriptParam_0))
	{
		LOG_ERROR("Gen_Brain: Attempting to attach a gringo brain that has no valid gringo base.");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	Var0 = false;
	Var0.f_4 = bScriptParam_0;
	iVar16 = 0;
	if (Function_50(&Var0))
	{
		Var0.f_24 = 0;
		Var0.f_20 = RAND_INT_RANGE(false, 20);
	}
	else
	{
		Var0.f_24 = 0;
		Var0.f_20 = 0;
	}
	uVar18 = Function_49();
	fVar21 = 0.0f;
	bVar19 = Function_48(&Var0, &fVar21);
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_PERS_CHAR_VALID(Function_49()))
		{
			if (!Function_47(&Var0))
			{
				GRINGO_HAS_PENDING_MESSAGE();
				if (IS_PERS_CHAR_ALIVE(Function_49()))
				{
					if (!IS_ACTOR_VALID(bVar17))
					{
						bVar17 = Function_46();
					}
					else if (bVar19)
					{
						if (Function_45(bVar17, Global_34573) >= fVar21)
						{
							if (!bVar20)
							{
								MEMORY_REPORT_POSITION_AUTO(bVar17, Global_34573, 1);
								AI_GOAL_LOOK_AT_ACTOR_NEW(bVar17, Global_34573, -1f, 0);
								bVar20 = true;
							}
						}
						else if (bVar20)
						{
							MEMORY_REPORT_POSITION_AUTO(bVar17, Global_34573, 0);
							AI_GOAL_LOOK_CLEAR(bVar17);
							bVar20 = false;
						}
					}
					Function_9(&iVar16, &Var0, 0);
				}
				Function_1(iVar16, &Var0);
			}
			else
			{
				iVar16 = 21;
				Function_9(&iVar16, &Var0, 0);
				Var0 = 1000;
			}
		}
		GRINGO_WAIT(Var0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, bool bParam1) //Position: 0x15B / 347
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (Function_8(bParam1))
	{
		if (IS_ACTOR_VALID(Function_46()))
		{
			if (iParam0 == 0)
			{
				*bParam1 = 0;
			}
			else
			{
				*bParam1 = 0;
			}
			GET_POSITION(Function_46(), &vVar0);
		}
		else
		{
			GET_OBJECT_POSITION(Function_7(), &vVar0);
		}
		SET_DEBUG_DRAW(1);
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
		Function_4(StackVal, Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam1, *bParam1));
		vVar0 = { StackVal, StackVal, Function_4(StackVal, Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam1, *bParam1)) };
		uVar6 = Function_2(bParam1);
		vVar3 = { StackVal, StackVal, vVar0 };
		vVar3.f_4 = (vVar3.y + 2.0f);
		vVar3.f_4 = (vVar3.y - 0.5f);
		vVar0 = { StackVal, StackVal, vVar3 };
		vVar0.x = (vVar0.x - 0.5f);
		vVar3.x = (vVar3.x + 0.5f);
	}
	return;
}

var Function_2(bool bParam0) //Position: 0x1F8 / 504
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = Function_3(bParam0);
	switch (iVar0)
	{
		case 0x00000001:
			bVar5 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			bVar5 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			bVar5 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			bVar5 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			bVar5 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			bVar5 = "Night_Tasks";
			break;
		
		default:
			if (Function_8(bParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_SCAN_AREA_SIZE_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "TimeOfDay_Tasks", false);
	bVar3 = GRINGO_GET_FIRST_NAMED_CHILD(bVar5, 0, bVar2);
	uVar4 = GRINGO_GET_ATTRIBUTE(bVar3, false);
	return GRINGO_GET_FLOAT_ATTR_BY_HANDLE(uVar4, &uVar1);
}

int Function_3(int iParam0) //Position: 0x364 / 868
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = MAKE_TIME_OF_DAY((5 + iParam0->f_24), iParam0->f_20, 0);
	iVar1 = MAKE_TIME_OF_DAY((7 + iParam0->f_24), iParam0->f_20, 0);
	iVar2 = MAKE_TIME_OF_DAY((11 + iParam0->f_24), iParam0->f_20, 0);
	iVar3 = MAKE_TIME_OF_DAY((14 + iParam0->f_24), iParam0->f_20, 0);
	iVar4 = MAKE_TIME_OF_DAY((18 + iParam0->f_24), iParam0->f_20, 0);
	iVar5 = MAKE_TIME_OF_DAY((22 + iParam0->f_24), iParam0->f_20, 0);
	iVar6 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(iVar6, iVar0, iVar1))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(iVar6, iVar1, iVar2))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(iVar6, iVar2, iVar3))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(iVar6, iVar3, iVar4))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(iVar6, iVar4, iVar5))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(iVar6, iVar5, iVar0))
	{
		return 32;
	}
	return 32;
}

vector3 Function_4(int iParam0, bool bParam1) //Position: 0x43B / 1083
{
	vector3 vVar0;
	int iVar20;
	vector3 vVar21;
	
	iVar20 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	GET_GRINGO_STRUCT_ATTR(&vVar0, 20, "Vectors_and_LayoutRef_Struct", iVar20);
	if (bParam1 == 4294967295)
	{
		LOG_ERROR("GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT: Called with an invalid Index, defaulting to 0 (Dawn)");
		bParam1 = false;
	}
	switch (bParam1)
	{
		case 0x00000000:
			vVar21 = { StackVal, StackVal, vVar0 };
			break;
		
		case 0x00000001:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 12) };
			break;
		
		case 0x00000002:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 24) };
			break;
		
		case 0x00000003:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 36) };
			break;
		
		case 0x00000004:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 48) };
			break;
		
		case 0x00000005:
			vVar21 = { StackVal, StackVal, *(&vVar0 + 60) };
			break;
	}
	if (Function_5(StackVal, StackVal, vVar21, 0.0f, 0.0f, 0.0f))
	{
		if (Function_8(iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT vector is null for time of day index: ");
			PRINTINT(bParam1);
			PRINTNL();
		}
		if (IS_ACTOR_VALID(Function_46()))
		{
			GET_POSITION(Function_46(), &vVar21);
			if (Function_8(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning actor position instead of struct vector");
				PRINTNL();
			}
		}
		else if (IS_PERS_CHAR_VALID(Function_49()))
		{
			GET_OBJECT_POSITION(Function_7(), &vVar21);
			if (Function_8(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning pers char position instead of struct vector");
				PRINTNL();
			}
		}
	}
	return StackVal, StackVal, vVar21;
}

bool Function_5(vector3 vParam0, vector3 vParam3) //Position: 0x701 / 1793
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) //Position: 0x72E / 1838
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

var Function_7() //Position: 0x7FB / 2043
{
	return GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
}

bool Function_8(bool bParam0) //Position: 0x807 / 2055
{
	bool bVar0;
	var uVar1;
	
	if (GET_DEBUG_DRAW_STATE())
	{
		return 1;
	}
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "Debug", false);
	return GET_GRINGO_BOOL_ATTR("DisplayDebugIndicators", bVar0, &uVar1);
}

int Function_9(int iParam0, bool bParam1, bool bParam2) //Position: 0x84A / 2122
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	struct<9> Var8;
	vector3 vVar17;
	bool bVar20;
	int iVar21;
	bool bVar22;
	
	bVar6 = Function_46();
	bVar7 = Function_49();
	bVar20 = false;
	if (!bParam2)
	{
		iVar21 = Function_44();
		if (iVar21 != 3 || iVar21 != 4)
		{
			bVar20 = true;
		}
		else
		{
			bVar20 = false;
		}
	}
	if (!Function_47(bParam1))
	{
		if (IS_ACTOR_VALID(bVar6))
		{
			if (AI_GET_IS_RETREATING(bVar6))
			{
				TASK_PRIORITY_SET(bVar6, 3);
				*iParam0 = 18;
			}
		}
	}
	switch (*iParam0)
	{
		case 0x00000000:
			bParam1->f_16 = Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam1);
			Function_4(bParam1, bParam1->f_16);
			*(bParam1 + 40) = { StackVal, StackVal, Function_4(bParam1, bParam1->f_16) };
			bParam1->f_52 = Function_2(bParam1);
			bParam1->f_56 = Function_43(bParam1);
			bParam1->f_12 = 0;
			bParam1->f_60 = Function_42(bParam1, bParam1 + 12, 0);
			bParam1->f_8 = Function_39(StackVal, StackVal, bParam1, bParam1->f_56, bParam1->f_60, "UseCase1", *(bParam1 + 40), bParam1->f_52, 0, 0);
			if (STRINGS_ARE_EQUAL(bParam1->f_60, "nsleeptime"))
			{
				*bParam1 = 0;
				Function_38(bParam1 + 28);
				Function_34(bParam1 + 28);
				if (bParam2)
				{
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_GO_TO_COORD_AND_STAY(bVar6, bParam1 + 40, 1, 0.0f);
				}
				else
				{
					TASK_PRIORITY_SET(bVar6, 3);
					Function_32(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
				}
				SET_PERS_CHAR_ENABLED(bVar7, false);
				DEACTIVATE_ACTOR_FOR_PERS_CHAR(bVar7);
				*iParam0 = 15;
				break;
			}
			if (IS_ACTOR_VALID(bVar6))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					switch (GET_OBJECT_TYPE(StackVal))
					{
						case 0x0000000C:
							if (IS_GRINGO_READY(StackVal))
							{
								if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1", &vVar1))
								{
									GET_OBJECT_POSITION(StackVal, &vVar1);
								}
							}
							else
							{
								GET_OBJECT_POSITION(StackVal, &vVar1);
							}
							if (!Function_5(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_31(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_31(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(StackVal, 0, &vVar1);
							if (!Function_5(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_31(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_31(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						default:
							Function_31(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							*iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_31(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
					*iParam0 = 1;
				}
			}
			else
			{
				*bParam1 = 1000;
				if (IS_OBJECT_VALID(StackVal))
				{
					switch (GET_OBJECT_TYPE(StackVal))
					{
						case 0x0000000C:
							if (IS_GRINGO_READY(StackVal))
							{
								if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1", &vVar1))
								{
									GET_OBJECT_POSITION(StackVal, &vVar1);
								}
							}
							else
							{
								GET_OBJECT_POSITION(StackVal, &vVar1);
							}
							if (!Function_5(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_29(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_29(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(StackVal, 0, &vVar1);
							if (!Function_5(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_29(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_29(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						default:
							Function_29(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							*iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_29(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
					*iParam0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (bVar20)
			{
				*iParam0 = 16;
				break;
			}
			if (Function_28(bParam1))
			{
				bParam1->f_16 = Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam1);
				Function_4(bParam1, bParam1->f_16);
				*(bParam1 + 40) = { StackVal, StackVal, Function_4(bParam1, bParam1->f_16) };
				bParam1->f_52 = Function_2(bParam1);
			}
			bParam1->f_60 = Function_42(bParam1, bParam1 + 12, 0);
			bParam1->f_8 = Function_39(StackVal, StackVal, bParam1, bParam1->f_56, bParam1->f_60, "UseCase1", *(bParam1 + 40), bParam1->f_52, 0, 0);
			Function_27(bParam1, "GB_PERFORM_SCHEDULED_TASK", bParam1->f_60);
			if (IS_ACTOR_VALID(bVar6))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					switch (GET_OBJECT_TYPE(StackVal))
					{
						case 0x0000000C:
							*bParam1 = 0;
							Function_38(bParam1 + 28);
							Function_34(bParam1 + 28);
							if (Function_26(bParam1))
							{
								*iParam0 = 4;
							}
							else
							{
								TASK_PRIORITY_SET(bVar6, 2);
								*iParam0 = 2;
							}
							break;
						
						case 0x00000010:
							*bParam1 = 0;
							Function_38(bParam1 + 28);
							Function_34(bParam1 + 28);
							TASK_PRIORITY_SET(bVar6, 2);
							*iParam0 = 6;
							break;
						
						default:
							Function_25(bParam1, "GB_PERFORM_SCHEDULED_TASK: Unhandled object! what the hell has come through?");
							*iParam0 = 20;
							break;
					}
				}
				else if (STRINGS_ARE_EQUAL(bParam1->f_60, "nsleeptime"))
				{
					*bParam1 = 0;
					Function_38(bParam1 + 28);
					Function_34(bParam1 + 28);
					if (bParam2)
					{
						TASK_PRIORITY_SET(bVar6, 2);
						TASK_GO_TO_COORD_AND_STAY(bVar6, bParam1 + 40, 1, 0.0f);
					}
					else
					{
						TASK_PRIORITY_SET(bVar6, 3);
						Function_32(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
					}
					SET_PERS_CHAR_ENABLED(bVar7, false);
					*iParam0 = 15;
				}
				else if (STRINGS_ARE_EQUAL_CLAMPED(bParam1->f_60, "wander", 6))
				{
					*bParam1 = 0;
					Function_38(bParam1 + 28);
					Function_34(bParam1 + 28);
					TASK_PRIORITY_SET(bVar6, 3);
					*iParam0 = 8;
				}
				else
				{
					Function_25(bParam1, "WARNING! No valid TASK for this pers char");
					*iParam0 = 9;
				}
			}
			else
			{
				switch (GET_OBJECT_TYPE(StackVal))
				{
					case 0x0000000C:
						if (IS_GRINGO_READY(StackVal))
						{
							if (!GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1", &vVar1))
							{
								GET_OBJECT_POSITION(StackVal, &vVar1);
							}
						}
						else
						{
							GET_OBJECT_POSITION(StackVal, &vVar1);
						}
						if (!Function_5(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
						{
							Function_29(StackVal, StackVal, vVar1, bVar6, bVar7);
						}
						else
						{
							Function_29(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						}
						*iParam0 = 19;
						break;
					
					case 0x00000010:
						GET_PATH_POINT(StackVal, 0, &vVar1);
						if (!Function_5(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
						{
							Function_29(StackVal, StackVal, vVar1, bVar6, bVar7);
						}
						else
						{
							Function_29(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						}
						*iParam0 = 19;
						break;
					
					default:
						Function_29(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						if (STRINGS_ARE_EQUAL_CLAMPED(bParam1->f_60, "wander", 6))
						{
							*iParam0 = 19;
						}
						else if (STRINGS_ARE_EQUAL_CLAMPED(bParam1->f_60, "nsleeptime", 9))
						{
							*iParam0 = 19;
						}
						else
						{
							*iParam0 = 19;
						}
						break;
					}
			}
			break;
		
		case 0x00000002:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				TASK_PRIORITY_SET(bVar6, 2);
				TASK_STAND_STILL(bVar6, 1.0f, 1, 1);
				*iParam0 = 3;
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000003:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					*iParam0 = 4;
				}
				if (Function_28(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000004:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_23(&bVar6);
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else
				{
					if (Function_22(StackVal, bVar6, "UseCase1", Function_8(bParam1)))
					{
						if (Function_21(StackVal, bVar6, "UseCase1", &bVar22))
						{
							Function_38(bParam1 + 28);
							Function_34(bParam1 + 28);
							*iParam0 = 5;
							break;
						}
						else if (bVar22)
						{
							Function_27(bParam1, "GB_PERFORM_SCHEDULED_TASK", "GB_REACH_AND_USE_GRINGO failed - gringo is inside a restriction volume.");
							*iParam0 = 9;
							break;
						}
					}
					else
					{
						*iParam0 = 9;
						break;
					}
					if (Function_17(bParam1 + 28) < 20.0f)
					{
						if ((GET_TASK_STATUS(bVar6, 1) != 4 || GET_TASK_STATUS(bVar6, 19) != 4) || Function_28(bParam1))
						{
							*iParam0 = 20;
						}
					}
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000008:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_23(&bVar6);
				fVar5 = Function_16(bParam1->f_60);
				vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
				uVar4 = bParam1->f_52;
				if (Function_15(bParam1, &vVar8, &vVar11))
				{
					vVar14 = { Function_14(vVar8.x, vVar11.x), Function_14(vVar8.y, vVar11.y), Function_14(vVar8.z, vVar11.z) };
					vVar17 = { Function_13(vVar8.x, vVar11.x), Function_13(vVar8.y, vVar11.y), Function_13(vVar8.z, vVar11.z) };
					TASK_PRIORITY_SET(bVar6, 3);
					TASK_WANDER_IN_BOX(bVar6, &vVar14, &vVar17, -1f);
					*iParam0 = 12;
				}
				else
				{
					Function_32(StackVal, StackVal, vVar1, uVar4, fVar5);
					*iParam0 = 11;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000009:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_23(&bVar6);
				if (bParam2)
				{
					Function_25(bParam1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK (this is a shopkeeper) - check spew!");
					vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
					uVar4 = bParam1->f_52;
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_GO_NEAR_COORD(bVar6, &vVar1, 2.0f, 1);
					*iParam0 = 10;
				}
				else
				{
					Function_25(bParam1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK - check spew!");
					if (Function_15(bParam1, &vVar8, &vVar11))
					{
						vVar14 = { Function_14(vVar8.x, vVar11.x), Function_14(vVar8.y, vVar11.y), Function_14(vVar8.z, vVar11.z) };
						vVar17 = { Function_13(vVar8.x, vVar11.x), Function_13(vVar8.y, vVar11.y), Function_13(vVar8.z, vVar11.z) };
						TASK_PRIORITY_SET(bVar6, 3);
						TASK_WANDER_IN_BOX(bVar6, &vVar14, &vVar17, 20.0f);
						*iParam0 = 12;
					}
					else
					{
						vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
						uVar4 = bParam1->f_52;
						Function_32(StackVal, StackVal, vVar1, uVar4, 20.0f);
						*iParam0 = 11;
					}
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000A:
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 61);
				if (iVar0 != 0 || iVar0 != 4)
				{
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_STAND_STILL(bVar6, 20.0f, 1, 0);
					*iParam0 = 14;
				}
				if (Function_28(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000E:
			Function_12(bParam1, bVar7, "STANDING STILL FALLBACK");
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					*iParam0 = 20;
				}
				if (Function_28(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 58);
				if (iVar0 != 0 || iVar0 != 4)
				{
					*iParam0 = 20;
				}
				if (Function_28(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000D:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 57);
				if ((iVar0 != 0 || iVar0 != 2) || iVar0 != 4)
				{
					*iParam0 = 20;
				}
				if (Function_28(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x0000000F:
			Function_12(bParam1, bVar7, "nSLEEPTIME");
			if (IS_ACTOR_VALID(bVar6))
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bVar6, 1065353216, 1117126656, 1, 1, 0))
				{
					DECOR_SET_FLOAT(bVar6, "sleepvis", GET_CURRENT_GAME_TIME());
				}
				if (DECOR_CHECK_EXIST(bVar6, "sleepvis"))
				{
					if (DECOR_GET_FLOAT(bVar6, "sleepvis") + 5.0f) > GET_CURRENT_GAME_TIME()
					{
						DEACTIVATE_ACTOR_FOR_PERS_CHAR(bVar7);
					}
				}
			}
			if (Function_28(bParam1))
			{
				if (IS_ACTOR_VALID(bVar6))
				{
					if (DECOR_CHECK_EXIST(bVar6, "sleepvis"))
					{
						DECOR_REMOVE(bVar6, "sleepvis");
					}
				}
				SET_PERS_CHAR_ENABLED(bVar7, true);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000005:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else
				{
					iVar0 = GET_TASK_STATUS(bVar6, 19);
					if ((iVar0 != 0 || iVar0 != 2) || iVar0 != 4)
					{
						*iParam0 = 20;
					}
					if (StackVal && Function_11(AI_HAS_ACTOR_BUMPED_INTO_ME(bVar6, Global_34573, 10.0f)))
					{
						*iParam0 = 20;
					}
					if (Function_28(bParam1))
					{
						*iParam0 = 20;
					}
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000006:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_23(&bVar6);
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else
				{
					TASK_GUARD_PATROL_PATH(StackVal, bVar6, 3212836864, 4294967295, 0, 1, 3212836864);
					*iParam0 = 7;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000007:
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else if (Function_28(bParam1))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000013:
			if (IS_ACTOR_VALID(bVar6))
			{
				*iParam0 = 20;
			}
			else if (Function_28(bParam1))
			{
				*iParam0 = 20;
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar7)))
			{
				if (Function_10(50.0f, bVar7))
				{
					*iParam0 = 20;
				}
			}
			break;
		
		case 0x00000010:
			if (bVar20)
			{
				*bParam1 = 0;
				if (IS_ACTOR_VALID(bVar6))
				{
					Function_23(&bVar6);
					Function_32(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
				}
				*iParam0 = 17;
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000011:
			Function_12(bParam1, bVar7, "RESPONDING TO RAIN");
			*bParam1 = 0;
			if (!bVar20)
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000012:
			Function_12(bParam1, bVar7, "RESPONDING TO RETREAT");
			*bParam1 = 0;
			if (IS_ACTOR_VALID(bVar6))
			{
				if (!AI_GET_IS_RETREATING(bVar6))
				{
					*iParam0 = 20;
				}
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			bParam1->f_8 = "";
			*bParam1 = 0;
			if (Function_28(bParam1))
			{
				bParam1->f_12 = 0;
			}
			else
			{
				bParam1->f_12++;
			}
			Function_38(bParam1 + 28);
			if (IS_ACTOR_VALID(bVar6))
			{
				TASK_PRIORITY_SET(bVar6, 2);
			}
			*iParam0 = 1;
			break;
		
		case 0x00000015:
			if (!Function_47(bParam1))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_PERS_CHAR(bVar7), "KeepLastTask"))
				{
					Function_12(bParam1, bVar7, "STOLEN KEEP_LAST_TASK");
					if (!IS_ACTOR_VALID(bVar6))
					{
						DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(bVar7), "KeepLastTask");
						*iParam0 = 20;
					}
				}
				else
				{
					*iParam0 = 20;
				}
			}
			else
			{
				Function_12(bParam1, bVar7, "STOLEN");
			}
			break;
		
		default:
			Function_27(bParam1, "GB_PERFORM_SCHEDULED_TASK", "UNKNOWN STATE!");
			return 0;
			break;
	}
	return 1;
}

bool Function_10(float fParam0, bool bParam1) //Position: 0x17CC / 6092
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
	GET_OBJECT_POSITION(bParam1, &vVar0);
	if (VDIST(vVar0, vVar3) >= fParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_11(bool bParam0) //Position: 0x17F7 / 6135
{
	bool bVar0;
	int iVar1;
	
	bVar0 = GET_GRINGO_FROM_OBJECT(bParam0);
	if (IS_GRINGO_VALID(bVar0))
	{
		iVar1 = 0;
		GRINGO_QUERY_STRING(bVar0, "UseCase1", "ChildFlags", &iVar1);
		if (iVar1 >= 0)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_12(bool bParam0, bool bParam1, bool bParam2) //Position: 0x183D / 6205
{
	struct<5> Var0;
	
	if (Function_8(bParam0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_PERS_CHAR(bParam1), &Var0);
		Var0.f_4 = (StackVal + 0.25f);
	}
	return;
}

int Function_13(int iParam0, int iParam1) //Position: 0x1864 / 6244
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_14(int iParam0, int iParam1) //Position: 0x1877 / 6263
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_15(bool bParam0, int iParam1, int iParam2) //Position: 0x188A / 6282
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	
	iVar0 = Function_3(bParam0);
	switch (iVar0)
	{
		case 0x00000001:
			bVar6 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			bVar6 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			bVar6 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			bVar6 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			bVar6 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			bVar6 = "Night_Tasks";
			break;
		
		default:
			if (Function_8(bParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_WANDER_BOX_CORNERS_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			bVar6 = "Dawn_Tasks";
			break;
	}
	bVar3 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "TimeOfDay_Tasks", false);
	bVar4 = GRINGO_GET_FIRST_NAMED_CHILD(bVar6, 0, bVar3);
	iVar7 = GRINGO_GET_ATTRIBUTE_COUNT(bVar4);
	bVar8 = false;
	while (bVar8 <= iVar7)
	{
		uVar5 = GRINGO_GET_ATTRIBUTE(bVar4, bVar8);
		if (!bVar1)
		{
			bVar1 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(uVar5, iParam1);
		}
		else if (!bVar2)
		{
			bVar2 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(uVar5, iParam2);
		}
		if (bVar1 && bVar2)
		{
			return 1;
		}
		bVar8++;
	}
	return 0;
}

var Function_16(bool bParam0) //Position: 0x1A49 / 6729
{
	int iVar0;
	int iVar1;
	
	STRING_CLEAR_TOKENIZER();
	iVar1 = SET_OWNERSHIP_STRAGGLER(bParam0, ",");
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

float Function_17(int iParam0) //Position: 0x1A77 / 6775
{
	if (Function_20(iParam0))
	{
		if (Function_18(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0x1B3F / 6975
{
	return Function_19(*iParam0, 2);
}

int Function_19(var uParam0, int iParam1) //Position: 0x1B4C / 6988
{
	return (uParam0 && iParam1) == 0;
}

bool Function_20(int iParam0) //Position: 0x1B59 / 7001
{
	return Function_19(*iParam0, 1);
}

bool Function_21(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x1B66 / 7014
{
	vector3 vVar0;
	vector3 vVar3;
	
	*uParam3 = 0;
	if (IS_OBJECT_VALID(bParam1))
	{
		if (GET_OBJECT_TYPE(bParam1) == 12)
		{
			GET_OBJECT_POSITION(bParam1, &vVar0);
			GET_POSITION(bParam0, &vVar3);
			if (IS_POINT_IN_AMBIENT_MOVE_RESTRICTION_VOLUME(&vVar0))
			{
				*uParam3 = 1;
				return 0;
			}
			if (VDIST(vVar0, vVar3) < 8.0f)
			{
				if (GET_TASK_STATUS(bParam0, 1) == 2)
				{
					TASK_PRIORITY_SET(bParam0, 2);
					TASK_GO_TO_COORD(bParam0, &vVar0, 1);
				}
			}
			else
			{
				TASK_PRIORITY_SET(bParam0, 2);
				TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bParam1), bParam2, 1, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_22(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1BEB / 7147
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam1))
	{
		if (GET_OBJECT_TYPE(bParam1) == 12)
		{
			if (Function_11(bParam1))
			{
				if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(bParam1), bParam2, bParam0))
				{
					if (bParam3)
					{
						PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo cannot be used by me!");
						PRINTNL();
					}
					return 0;
				}
			}
			bVar0 = GET_ACTOR_FROM_OBJECT(GRINGO_GET_TASKED_USER_EXTERNAL(GET_GRINGO_FROM_OBJECT(bParam1), bParam2));
			if (IS_ACTOR_VALID(bVar0))
			{
				if (bVar0 == bParam0)
				{
					return 1;
				}
				if (bParam3)
				{
					PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: This gringo has a valid TASKED_USER_EXTERNAL that is not me!");
					PRINTNL();
				}
			}
			else
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(bParam1), bParam2));
				if (IS_ACTOR_VALID(bVar0))
				{
					if (bVar0 == bParam0)
					{
						return 1;
					}
					if (bParam3)
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
		if (bParam3)
		{
			PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: Object passed is not a GRINGO!");
			PRINTNL();
		}
	}
	else if (bParam3)
	{
		PRINTSTRING("Gen_Brain: GB_CAN_USE_GRINGO: Invalid OBJECT passed!");
		PRINTNL();
	}
	return 0;
}

void Function_23(bool bParam0) //Position: 0x1E25 / 7717
{
	if (IS_ACTOR_RIDING(*bParam0))
	{
		Function_24(*bParam0);
		MEMORY_PREFER_WALKING(*bParam0, 0);
		ACTOR_DISMOUNT_NOW(*bParam0);
	}
	return;
}

void Function_24(bool bParam0) //Position: 0x1E47 / 7751
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(bParam0);
	if (IS_OBJECTSET_VALID(Global_16515))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515);
		}
	}
	return;
}

void Function_25(int iParam0, bool bParam1) //Position: 0x1EC3 / 7875
{
	if (Function_8(iParam0))
	{
		LOG_ERROR(bParam1);
	}
	return;
}

bool Function_26(int iParam0) //Position: 0x1ED6 / 7894
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		return GET_GRINGO_BOOL_ATTR("minigame_guy", bVar0, &uVar1);
	}
	return 0;
}

void Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F1B / 7963
{
	if (Function_8(iParam0))
	{
		PRINTSTRING("Pers Char: ");
		PRINTSTRING(GET_OBJECT_NAME(Function_7()));
		PRINTSTRING(" - ");
		PRINTSTRING("Module Name: ");
		PRINTSTRING(bParam1);
		PRINTSTRING(" - ");
		PRINTSTRING(bParam2);
		PRINTNL();
	}
	return;
}

bool Function_28(bool bParam0) //Position: 0x1F75 / 8053
{
	if (!StackVal != Function_6(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0->f_16, *bParam0))
	{
		return 1;
	}
	return 0;
}

void Function_29(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x1F8F / 8079
{
	vector3 vVar0;
	var uVar3;
	float fVar6;
	vector3 vVar7;
	
	vVar0 = { StackVal, StackVal, vParam0 };
	if (IS_ACTOR_VALID(bParam3))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam3, 1065353216, 1117126656, 1, 1, 0))
		{
			fVar6 = GET_ACTOR_HEIGHT(bParam3);
			fVar6 = (fVar6 / 2.0f);
			vParam0.f_4 = (vParam0.y + fVar6);
			if (STREAMING_ARE_BOUNDS_LOADED(vParam0, 25.0f))
			{
				FIND_GROUND_INTERSECTION(&vParam0, 25.0f, &vVar0, &uVar3);
			}
			else
			{
				vVar0 = { StackVal, StackVal, vParam0 };
			}
			if (!Function_30(StackVal, StackVal, vVar0))
			{
				vVar7 = { StackVal, StackVal, vVar0 };
			}
			else
			{
				vVar7 = { StackVal, StackVal, vParam0 };
			}
			LOG_WARNING("GB_SET_PERS_CHAR_POSITION: calling WOULD_ACTOR_BE_VISIBLE");
			if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bParam3), &vVar7, 3212836864))
			{
				LOG_WARNING("GB_SET_PERS_CHAR_POSITION: called WOULD_ACTOR_BE_VISIBLE and succeded");
				SET_OBJECT_POSITION(bParam4, vVar7);
			}
		}
	}
	else
	{
		SET_OBJECT_POSITION(bParam4, vVar0);
	}
}

bool Function_30(vector3 vParam0) //Position: 0x20D3 / 8403
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_31(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x20EB / 8427
{
	vector3 vVar0;
	var uVar3;
	float fVar6;
	
	vVar0 = { StackVal, StackVal, vParam0 };
	if (IS_ACTOR_VALID(bParam3))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam3, 1065353216, 1117126656, 1, 1, 0))
		{
			fVar6 = GET_ACTOR_HEIGHT(bParam3);
			fVar6 = (fVar6 / 2.0f);
			vParam0.f_4 = (vParam0.y + fVar6);
			if (STREAMING_ARE_BOUNDS_LOADED(vParam0, 25.0f))
			{
				FIND_GROUND_INTERSECTION(&vParam0, 25.0f, &vVar0, &uVar3);
			}
			else
			{
				vVar0 = { StackVal, StackVal, vParam0 };
			}
			LOG_WARNING("GB_TELEPORT: calling WOULD_ACTOR_BE_VISIBLE");
			if (!WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(bParam3), &vVar0, 3212836864))
			{
				LOG_WARNING("GB_TELEPORT: called WOULD_ACTOR_BE_VISIBLE and succeded");
				TELEPORT_ACTOR(bParam3, &vVar0, 1, 1, 1);
			}
		}
	}
	else
	{
		SET_OBJECT_POSITION(bParam4, vVar0);
	}
}

void Function_32(vector3 vParam0, var uParam3, float fParam4) //Position: 0x21F5 / 8693
{
	var uVar0;
	var uVar3;
	
	if (fParam4 >= 0.0f)
	{
		fParam4 = -1.0f;
	}
	Function_33(StackVal, StackVal, vParam0, uParam3, &uVar0, &uVar3);
	TASK_PRIORITY_SET(Function_46(), 3);
	TASK_WANDER_IN_BOX(Function_46(), &uVar0, &uVar3, fParam4);
}

void Function_33(vector3 vParam0) //Position: 0x2227 / 8743
{
	if (fParam3 >= 0.0f)
	{
		fParam3 = 1.0f;
	}
	uParam4->f_8 = (vParam0.z - (fParam3 * 0.707f));
	uParam4->f_4 = (vParam0.y - 100.0f);
	*uParam4 = (vParam0.x - (fParam3 * 0.707f));
	uParam5->f_8 = (vParam0.z + (fParam3 * 0.707f));
	uParam5->f_4 = (vParam0.y + 100.0f);
	*uParam5 = (vParam0.x + (fParam3 * 0.707f));
}

void Function_34(int iParam0) //Position: 0x2293 / 8851
{
	if (!Function_20(iParam0))
	{
		Function_35(iParam0, 0.0f);
	}
	return;
}

void Function_35(var uParam0, float fParam1) //Position: 0x22A8 / 8872
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_37(uParam0, 1);
	Function_36(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x22C9 / 8905
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x22DC / 8924
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_38(bool bParam0) //Position: 0x22EB / 8939
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

var Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3, vector3 vParam4, bool bParam7, bool bParam8, bool bParam9) //Position: 0x22FF / 8959
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		if (Function_8(iParam0))
		{
			LOG_ERROR("GB_GET_FIRST_USABLE_OBJECT: Invalid Layout!");
		}
		return "";
	}
	if (STRING_CONTAINS_STRING(bParam2, "wander"))
	{
		return "";
	}
	if (STRING_CONTAINS_STRING(bParam2, "camp,"))
	{
		return "";
	}
	if (STRING_CONTAINS_STRING(bParam2, "nsleeptime"))
	{
		return "";
	}
	if (bParam8 || bParam9)
	{
		bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_41(), bParam1, 4294967295, 0);
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		ITERATE_IN_SET(bVar1, bVar2);
		if (LOCATE_GRINGOS_OF_TYPE(bVar2, bParam2, &vParam4, bParam7, 1) >= 0)
		{
			bVar0 = Function_40(bVar1, bParam8, bParam9);
			if (!IS_OBJECT_VALID(bVar0))
			{
				LOG_ERROR("Iteration failed");
			}
		}
		else if (LOCATE_GRINGOS_OF_NAME(bVar2, bParam2, &vParam4, bParam7, 1) >= 0)
		{
			bVar0 = Function_40(bVar1, bParam8, bParam9);
			if (!IS_OBJECT_VALID(bVar0))
			{
				LOG_ERROR("Iteration failed");
			}
		}
		DESTROY_OBJECT(bVar2);
		DESTROY_OBJECT(bVar1);
	}
	else
	{
		bVar0 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE(bParam2, &vParam4, bParam7, 1));
		if (IS_OBJECT_VALID(bVar0))
		{
			if (GET_OBJECT_TYPE(GET_OBJECT_OWNER(bVar0)) == 24)
			{
				if (Function_8(iParam0))
				{
					PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: this pers char brain is given a gringo in its schedule that has the same partial name as a brain. Trying to match name exactly now, might fail. Details: ");
					PRINTSTRING(bParam2);
					PRINTNL();
					PRINTSTRING(" - Use component name: ");
					PRINTSTRING(bParam3);
					PRINTSTRING(" - Looking at vector: ");
					PRINTVECTOR(vParam4);
					PRINTSTRING(" - With scan radius: ");
					PRINTFLOAT(bParam7);
					PRINTNL();
				}
				bVar0 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE(bParam2, &vParam4, bParam7, 0));
				if (IS_OBJECT_VALID(bVar0))
				{
					if (Function_8(iParam0))
					{
						PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: Found exact gringo of type (due to name matching the pers char brain).");
						PRINTNL();
					}
					return bVar0;
				}
				LOG_ERROR("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: Failed to find exact name gringo (due to name matching the pers char brain).");
			}
			else
			{
				return bVar0;
			}
		}
		bVar0 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_NAME(bParam2, &vParam4, bParam7, 1));
		if (IS_OBJECT_VALID(bVar0))
		{
			if (GET_OBJECT_TYPE(GET_OBJECT_OWNER(bVar0)) == 24)
			{
				if (Function_8(iParam0))
				{
					PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: this pers char brain is given a gringo in its schedule that has the same partial name as a brain. Trying to match name exactly now, might fail. Details: ");
					PRINTSTRING(bParam2);
					PRINTNL();
					PRINTSTRING(" - Use component name: ");
					PRINTSTRING(bParam3);
					PRINTSTRING(" - Looking at vector: ");
					PRINTVECTOR(vParam4);
					PRINTSTRING(" - With scan radius: ");
					PRINTFLOAT(bParam7);
					PRINTNL();
				}
				bVar0 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_NAME(bParam2, &vParam4, bParam7, 0));
				if (IS_OBJECT_VALID(bVar0))
				{
					if (Function_8(iParam0))
					{
						PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: Found exact gringo of name (due to name matching the pers char brain).");
						PRINTNL();
					}
					return bVar0;
				}
				LOG_ERROR("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT: Failed to find exact name gringo (due to name matching the pers char brain).");
			}
			else
			{
				return bVar0;
			}
		}
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
		if (Function_8(iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT failed to find any usable object of name: ");
			PRINTSTRING(bParam2);
			PRINTNL();
			PRINTSTRING(" - Use component name: ");
			PRINTSTRING(bParam3);
			PRINTSTRING(" - Looking at vector: ");
			PRINTVECTOR(vParam4);
			PRINTSTRING(" - With scan radius: ");
			PRINTFLOAT(bParam7);
			PRINTNL();
			LOG_ERROR("Gen_Brain: GB_GET_FIRST_USABLE_OBJECT failed to find any usable object! Check the spew!!");
		}
	}
	if (IS_ITERATOR_VALID(bVar1))
	{
		DESTROY_ITERATOR(bVar1);
	}
	return bVar0;
}

bool Function_40(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2A7C / 10876
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	bool bVar10;
	bool bVar11;
	float fVar12;
	
	bVar11 = 1E+33.0f;
	if (!IS_ITERATOR_VALID(bParam0))
	{
		return bVar0;
	}
	bVar1 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (bParam1 || bParam2)
		{
			if (IS_ACTOR_VALID(Function_46()))
			{
				GET_OBJECT_POSITION(bVar1, &Var4);
				GET_POSITION(Function_46(), &Var7);
				if (bParam1)
				{
					bVar10 = VDIST(Var4, Var7);
					if (bVar10 > bVar11)
					{
						if (bParam2)
						{
							fVar12 = FABS((StackVal - StackVal));
							if (fVar12 >= 1.0f)
							{
								bVar11 = bVar10;
								bVar2 = bVar1;
							}
						}
						else
						{
							bVar11 = bVar10;
							bVar2 = bVar1;
						}
					}
				}
				else if (bParam2)
				{
					fVar12 = FABS((StackVal - StackVal));
					if (fVar12 >= 1.0f)
					{
						bVar3 = bVar1;
					}
				}
			}
			else
			{
				return bVar1;
			}
		}
		return bVar1;
		bVar1 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	if (bParam1 && IS_OBJECT_VALID(bVar2))
	{
		return bVar2;
	}
	if (bParam2 && IS_OBJECT_VALID(bVar3))
	{
		return bVar3;
	}
	return bVar0;
}

var Function_41() //Position: 0x2B61 / 11105
{
	int iVar0;
	
	return iVar0;
}

var Function_42(int iParam0, var uParam1, int iParam2) //Position: 0x2B69 / 11113
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = Function_3(iParam0);
	switch (iVar0)
	{
		case 0x00000001:
			bVar7 = "Dawn_Tasks";
			break;
		
		case 0x00000002:
			bVar7 = "Morning_Tasks";
			break;
		
		case 0x00000004:
			bVar7 = "LunchTime_Tasks";
			break;
		
		case 0x00000008:
			bVar7 = "Afternoon_Tasks";
			break;
		
		case 0x00000010:
			bVar7 = "Evening_Tasks";
			break;
		
		case 0x00000020:
			bVar7 = "Night_Tasks";
			break;
		
		default:
			if (Function_8(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_TASK_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	bVar4 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "TimeOfDay_Tasks", false);
	bVar5 = GRINGO_GET_FIRST_NAMED_CHILD(bVar7, 0, bVar4);
	iVar2 = GRINGO_GET_ATTRIBUTE_COUNT(bVar5);
	if (iVar2 < 1 && iParam2)
	{
		bVar9 = RAND_INT_RANGE(false, 1000);
		bVar1 = (bVar9 % iVar2);
	}
	if (*uParam1 < 0 && *uParam1 > iVar2)
	{
		bVar1 = *uParam1;
	}
	else
	{
		bVar1 = true;
		*uParam1 = bVar1;
	}
	while (bVar1 <= iVar2)
	{
		uVar6 = GRINGO_GET_ATTRIBUTE(bVar5, bVar1);
		bVar8 = GRINGO_GET_STRING_ATTR_BY_HANDLE(uVar6, &uVar3);
		if (IS_STRING_VALID(bVar8))
		{
			return bVar8;
		}
		bVar1++;
	}
	return "NHIL";
}

var Function_43(var uParam0) //Position: 0x2D30 / 11568
{
	struct<73> Var0;
	
	iVar20 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	GET_GRINGO_STRUCT_ATTR(&Var0, 20, "Vectors_and_LayoutRef_Struct", iVar20);
	return Var0.f_72;
}

var Function_44() //Position: 0x2D7F / 11647
{
	return StackVal;
}

float Function_45(bool bParam0, bool bParam1) //Position: 0x2D8A / 11658
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_46() //Position: 0x2E7B / 11899
{
	return GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF())));
}

bool Function_47(bool bParam0) //Position: 0x2E8D / 11917
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		return GET_GRINGO_BOOL_ATTR("stolen_flag", bVar0, &uVar1);
	}
	return 0;
}

int Function_48(int iParam0, bool bParam1) //Position: 0x2ED1 / 11985
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (GET_GRINGO_FLOAT_ATTR(bParam1, "look_at_player_distance", bVar0))
		{
			if (*bParam1 >= 0.0f)
			{
				*bParam1 = 5.0f;
			}
			return 1;
		}
		*bParam1 = -1.0f;
		return 0;
	}
	*bParam1 = -1.0f;
	return 0;
}

var Function_49() //Position: 0x2F3E / 12094
{
	return GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()));
}

bool Function_50(int iParam0) //Position: 0x2F4D / 12109
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		bVar2 = GET_GRINGO_BOOL_ATTR("stolen_flag", bVar0, &iVar1);
		if (iVar1 >= 0)
		{
			return bVar2;
		}
		return 1;
	}
	return 1;
}

