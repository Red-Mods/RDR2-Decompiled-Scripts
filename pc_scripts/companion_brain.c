//Decompiled with MagicRDR v1.0
//Function Count : 61
//Statics Count : 2
//Natives Count : 148
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
		LOG_ERROR("Companion_Brain: Attempting to attach a gringo brain that has no valid gringo base.");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	Var0 = 0;
	*(&Var0 + 8) = &uScriptParam_0;
	iVar23 = 0;
	Var0.f_32 = 0;
	Var0.f_36 = 0;
	if (IS_PERS_CHAR_VALID(Function_60()))
	{
		SET_PERS_CHAR_SAFE_ZONE(Function_60(), 150.0f);
	}
	iVar24 = Function_59(Function_60());
	uVar26 = Function_60();
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_PERS_CHAR_VALID(Function_60()))
		{
			if (!Function_58(&Var0))
			{
				if (IS_PERS_CHAR_ALIVE(Function_60()))
				{
					Function_57(iVar24);
					uVar25 = Function_56();
					if (IS_ACTOR_VALID(&uVar25))
					{
						Function_55(&uVar25, 0, 0, 0, 0);
						if ((Function_52(&uVar25, &Global_54076, 15.0f) && (GET_CURRENT_GAME_TIME() - fVar27) < 60.0f) && MEMORY_GET_IS_VISIBLE(&uVar25, &Global_54076))
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar25, 43, &Global_54076, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							fVar27 = GET_CURRENT_GAME_TIME();
						}
						if (GET_ACTOR_FACTION(&uVar25) != 20)
						{
							SET_ACTOR_FACTION(&uVar25, 20);
						}
						if (FIRE_IS_ACTOR_ON_FIRE(&uVar25))
						{
							if (GET_LAST_ATTACKER(&uVar25) == &Global_54076)
							{
								if ((!HUD_IS_FADED() && !HUD_IS_FADING()) && !Global_6638)
								{
									iVar29 = Function_59(Function_60());
									if ((iVar29 != 12 || iVar29 != 11) || iVar29 != 13)
									{
										UI_SET_TEXT("Death_Explanation", "kill_family_help");
									}
									else
									{
										UI_SET_TEXT("Death_Explanation", "kill_friend_help");
									}
									KILL_ACTOR(&Global_54076);
								}
							}
						}
						if (((!HUD_IS_FADED() && !HUD_IS_FADING()) && !Global_6638) && !Global_6623)
						{
							iVar29 = Function_59(Function_60());
							if ((iVar29 != 12 || iVar29 != 11) || iVar29 != 13)
							{
								if (!IS_OBJECT_VALID(&uVar28))
								{
									uVar28 = CREATE_EVENT_TRAP(Function_51(), 91, &uVar25);
									EVENT_TRAP_ON_TARGET(&uVar28, &uVar25);
								}
								if ((EVENT_TRAP_SUCCESSFUL_TRAP(&uVar28) && ((GET_WEAPON_IN_HAND(&Global_54076) != 31 || GET_WEAPON_IN_HAND(&Global_54076) != 23) || GET_WEAPON_IN_HAND(&Global_54076) != 24)) || GET_LAST_ATTACKER(&uVar25) != &Global_54076)
								{
									UI_SET_TEXT("Death_Explanation", "kill_family_help");
									KILL_ACTOR(&Global_54076);
								}
							}
						}
					}
					if (GRINGO_HAS_PENDING_MESSAGE())
					{
					}
					if (!Function_24(&iVar23, &Var0, 0))
					{
						if (!Function_19(&iVar23, &Var0, &iVar21))
						{
							iVar23 = 20;
						}
					}
				}
				else if (IS_ACTOR_VALID(&uVar25))
				{
					if (GET_LAST_ATTACKER(&uVar25) == &Global_54076)
					{
						if ((!HUD_IS_FADED() && !HUD_IS_FADING()) && !Global_6638)
						{
							iVar29 = Function_59(Function_60());
							if ((iVar29 != 12 || iVar29 != 11) || iVar29 != 13)
							{
								UI_SET_TEXT("Death_Explanation", "kill_family_help");
							}
							else
							{
								UI_SET_TEXT("Death_Explanation", "kill_friend_help");
							}
							KILL_ACTOR(&Global_54076);
						}
					}
					else
					{
						REVIVE_PERS_CHAR(Function_60(), 0);
					}
				}
				else
				{
					REVIVE_PERS_CHAR(Function_60(), 0);
				}
				Function_11(iVar23, &Var0);
			}
			else
			{
				if (Var11.f_16)
				{
					Function_1(&Var11, &Var0, &iVar23, &uVar18);
					Var11.f_16 = 0;
				}
				if (!iVar23 != 21)
				{
					iVar23 = 25;
				}
				if (!Function_24(&iVar23, &Var0, 0))
				{
					Function_19(&iVar23, &Var0, &iVar21);
				}
				Var0 = 0;
			}
		}
		if (IS_ACTOR_VALID(&uVar25))
		{
			GRINGO_WAIT(0);
		}
		else
		{
			GRINGO_WAIT(1000);
		}
	}
	Function_57(iVar24);
	if (IS_OBJECT_VALID(&uVar28))
	{
		DESTROY_OBJECT(&uVar28);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<17> Param0) //Position: 0x3ED / 1005
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
	if (IS_ACTOR_VALID(Function_56()))
	{
		if (GRINGO_OWNS_ACTOR_ANIMS(Function_56()))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(Function_56());
		}
		uVar0 = GET_CURRENT_GRINGO(Function_56());
		if (IS_GRINGO_VALID(&uVar0))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(&uVar0);
		}
		if (!Function_58(&iParam1))
		{
			TASK_PRIORITY_SET(Function_56(), 3);
		}
	}
	Function_10(&Param0);
	Function_4(&Param0);
	uVar1 = GRINGO_GET_FIRST_NAMED_CHILD("UseCase1", 3, &iParam1 + 8);
	if (IS_GRINGO_COMPONENT_VALID(&uVar1))
	{
		GRINGO_CLEAR_COMPONENT_USER(&uVar1);
	}
	Function_3(&uParam3);
	Function_2(&Param0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	uParam2 = 1;
	Param0.f_16 = 0;
}

void Function_2(int iParam0) //Position: 0x4BF / 1215
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

void Function_3(int iParam0) //Position: 0x4EF / 1263
{
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		DESTROY_LAYOUT(&iParam0);
	}
	Global_6636 = 0;
	return;
}

void Function_4(int iParam0) //Position: 0x50A / 1290
{
	if (!Function_8(&iParam0))
	{
		Function_5(&iParam0, 0.0f);
	}
	return;
}

void Function_5(vector3 vParam0) //Position: 0x521 / 1313
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_7(&vParam0, 1);
	Function_6(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x546 / 1350
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x55C / 1372
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x56D / 1389
{
	return Function_9(iParam0, 1);
}

int Function_9(var uParam0, int iParam1) //Position: 0x57B / 1403
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(vector3 vParam0) //Position: 0x588 / 1416
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_11(int iParam0, struct<11> Param1) //Position: 0x59F / 1439
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (Function_18(&Param1))
	{
		if (IS_ACTOR_VALID(Function_56()))
		{
			if (iParam0 == 0)
			{
				Param1 = 0;
			}
			else
			{
				Param1 = 0;
			}
			GET_POSITION(Function_56(), &Var0);
		}
		else
		{
			GET_OBJECT_POSITION(Function_17(), &Var0);
		}
		SET_DEBUG_DRAW(1);
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		Function_14(StackVal, Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Param1, Param1));
		Var0 = Function_14(StackVal, Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Param1, Param1));
		uVar4 = Function_12(&Param1);
		Var2 = Var0;
		Var2.f_4 = (StackVal + 2.0f);
		Var2.f_4 = (StackVal - 0,5f);
		Var0 = Var2;
		Var0 = (Var0 - 0,5f);
		Var2 = (Var2 + 0,5f);
	}
	return;
}

var Function_12(int iParam0) //Position: 0x63F / 1599
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	iVar0 = Function_13(&iParam0);
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
			if (Function_18(&iParam0))
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

int Function_13(struct<37> Param0) //Position: 0x7BC / 1980
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

struct<8> Function_14(int iParam0, int iParam1) //Position: 0x8B8 / 2232
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
	if (Function_15(StackVal, StackVal, Var12, Vector(0.0f, 0.0f, 0.0f)))
	{
		if (Function_18(&iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT vector is null for time of day index: ");
			PRINTINT(&iParam1);
			PRINTNL();
		}
		if (IS_ACTOR_VALID(Function_56()))
		{
			GET_POSITION(Function_56(), &Var12);
			if (Function_18(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning actor position instead of struct vector");
				PRINTNL();
			}
		}
		else if (IS_PERS_CHAR_VALID(Function_60()))
		{
			GET_OBJECT_POSITION(Function_17(), &Var12);
			if (Function_18(&iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning pers char position instead of struct vector");
				PRINTNL();
			}
		}
	}
	return StackVal, Var12;
}

bool Function_15(struct<2> Param0, struct<2> Param2) //Position: 0xB84 / 2948
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

int Function_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0xBB0 / 2992
{
	int iVar0;
	
	iVar0 = Function_13(&uParam0);
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
			if (Function_18(&uParam0))
			{
				PRINTSTRING("Gen_Brain: GB_GET_IDX_FROM_TOD invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	return 0;
}

var Function_17() //Position: 0xC7D / 3197
{
	return GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
}

bool Function_18(int iParam0) //Position: 0xC89 / 3209
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

bool Function_19(int iParam0, int iParam1, struct<2> Param2) //Position: 0xCD0 / 3280
{
	Param2 = { StackVal, Param2 };
	switch (iParam0)
	{
		case 0x00000014:
			break;
		
		case 0x00000019:
			Function_21(Function_23());
			iParam0 = 21;
			return 1;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000017:
			break;
		
		case 0x00000018:
			break;
		
		case 0x0000001A:
			break;
		
		case 0x0000001B:
			break;
		
		default:
			Function_20(&iParam1, "COMPANION_PERFORM_SCHEDULED_TASK", "Unknown State");
			return 0;
			break;
	}
	return 0;
}

void Function_20(int iParam0, int iParam1, int iParam2) //Position: 0xD78 / 3448
{
	if (Function_18(&iParam0))
	{
		PRINTSTRING("Pers Char: ");
		PRINTSTRING(GET_OBJECT_NAME(Function_17()));
		PRINTSTRING(" - ");
		PRINTSTRING("Module Name: ");
		PRINTSTRING(&iParam1);
		PRINTSTRING(" - ");
		PRINTSTRING(&iParam2);
		PRINTNL();
	}
	return;
}

int Function_21(int iParam0) //Position: 0xDD5 / 3541
{
	struct<16> Var0;
	var uVar16;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22() };
	uVar16 = FIND_OBJECT_IN_LAYOUT(&iParam0, &Var0);
	if (IS_OBJECT_VALID(&uVar16))
	{
		RELEASE_OBJECT_REF(&uVar16);
		return 1;
	}
	return 0;
}

struct<64> Function_22() //Position: 0xE00 / 3584
{
	char* cVar0[64];
	
	strcpy(&cVar0, GET_OBJECT_NAME(Function_17()), 64);
	stradd(&cVar0, "_camp", 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_23() //Position: 0xE23 / 3619
{
	int iVar0;
	
	iVar0 = Function_59(Function_60());
	return &Global_15402[iVar014] + 24;
}

bool Function_24(int iParam0, struct<69> Param1) //Position: 0xE3B / 3643
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
	
	iVar5 = Function_56();
	iVar6 = Function_60();
	bVar15 = false;
	if (!&bParam2)
	{
		iVar16 = Function_50();
		if (iVar16 != 3 || iVar16 != 4)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
	}
	if (!Function_58(&Param1))
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
			Param1.f_28 = Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
			Function_14(&Param1, Param1.f_28);
			*(&Param1 + 56) = Function_14(&Param1, Param1.f_28);
			Param1.f_68 = Function_12(&Param1);
			*(&Param1 + 72) = Function_49(&Param1);
			Param1.f_24 = 0;
			*(&Param1 + 80) = Function_48(&Param1, &Param1 + 24, 0);
			*(&Param1 + 16) = Function_46(StackVal, &Param1, &Param1 + 72, &Param1 + 80, "UseCase1", *(&Param1 + 56), Param1.f_68, 0, 0);
			if (STRINGS_ARE_EQUAL(&Param1 + 80, "nsleeptime"))
			{
				Param1 = 0;
				Function_10(&Param1 + 40);
				Function_4(&Param1 + 40);
				if (&bParam2)
				{
					TASK_PRIORITY_SET(&iVar5, 2);
					TASK_GO_TO_COORD_AND_STAY(&iVar5, &Param1 + 56, 1, 0.0f);
				}
				else
				{
					TASK_PRIORITY_SET(&iVar5, 3);
					Function_44(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
				}
				SET_PERS_CHAR_ENABLED(&iVar6, 0);
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
							if (!Function_15(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_43(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_43(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(&Param1 + 16, 0, &Var1);
							if (!Function_15(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_43(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_43(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						default:
							Function_43(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_43(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
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
							if (!Function_15(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_41(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_41(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(&Param1 + 16, 0, &Var1);
							if (!Function_15(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
							{
								Function_41(StackVal, Var1, &iVar5, &iVar6);
							}
							else
							{
								Function_41(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							}
							iParam0 = 1;
							break;
						
						default:
							Function_41(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
							iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_41(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
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
			if (Function_40(&Param1))
			{
				Param1.f_28 = Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1);
				Function_14(&Param1, Param1.f_28);
				*(&Param1 + 56) = Function_14(&Param1, Param1.f_28);
				Param1.f_68 = Function_12(&Param1);
			}
			*(&Param1 + 80) = Function_48(&Param1, &Param1 + 24, 0);
			*(&Param1 + 16) = Function_46(StackVal, &Param1, &Param1 + 72, &Param1 + 80, "UseCase1", *(&Param1 + 56), Param1.f_68, 0, 0);
			Function_20(&Param1, "GB_PERFORM_SCHEDULED_TASK", &Param1 + 80);
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (IS_OBJECT_VALID(&Param1 + 16))
				{
					switch (GET_OBJECT_TYPE(&Param1 + 16))
					{
						case 0x0000000C:
							Param1 = 0;
							Function_10(&Param1 + 40);
							Function_4(&Param1 + 40);
							if (Function_39(&Param1))
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
							Function_10(&Param1 + 40);
							Function_4(&Param1 + 40);
							TASK_PRIORITY_SET(&iVar5, 2);
							iParam0 = 6;
							break;
						
						default:
							Function_38(&Param1, "GB_PERFORM_SCHEDULED_TASK: Unhandled object! what the hell has come through?");
							iParam0 = 20;
							break;
					}
				}
				else if (STRINGS_ARE_EQUAL(&Param1 + 80, "nsleeptime"))
				{
					Param1 = 0;
					Function_10(&Param1 + 40);
					Function_4(&Param1 + 40);
					if (&bParam2)
					{
						TASK_PRIORITY_SET(&iVar5, 2);
						TASK_GO_TO_COORD_AND_STAY(&iVar5, &Param1 + 56, 1, 0.0f);
					}
					else
					{
						TASK_PRIORITY_SET(&iVar5, 3);
						Function_44(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
					}
					SET_PERS_CHAR_ENABLED(&iVar6, 0);
					iParam0 = 15;
				}
				else if (STRINGS_ARE_EQUAL_CLAMPED(&Param1 + 80, "wander", 6))
				{
					Param1 = 0;
					Function_10(&Param1 + 40);
					Function_4(&Param1 + 40);
					TASK_PRIORITY_SET(&iVar5, 3);
					iParam0 = 8;
				}
				else
				{
					Function_38(&Param1, "WARNING! No valid TASK for this pers char");
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
						if (!Function_15(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
						{
							Function_41(StackVal, Var1, &iVar5, &iVar6);
						}
						else
						{
							Function_41(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
						}
						iParam0 = 19;
						break;
					
					case 0x00000010:
						GET_PATH_POINT(&Param1 + 16, 0, &Var1);
						if (!Function_15(StackVal, StackVal, Var1, Vector(0.0f, 0.0f, 0.0f)))
						{
							Function_41(StackVal, Var1, &iVar5, &iVar6);
						}
						else
						{
							Function_41(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
						}
						iParam0 = 19;
						break;
					
					default:
						Function_41(StackVal, *(&Param1 + 56), &iVar5, &iVar6);
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
				if (Function_40(&Param1))
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
				Function_36(&iVar5);
				if (bVar15)
				{
					iParam0 = 16;
					break;
				}
				else
				{
					if (Function_35(&iVar5, &Param1 + 16, "UseCase1", Function_18(&Param1)))
					{
						if (Function_34(&iVar5, &Param1 + 16, "UseCase1", &bVar17))
						{
							Function_10(&Param1 + 40);
							Function_4(&Param1 + 40);
							iParam0 = 5;
							break;
						}
						else if (bVar17)
						{
							Function_20(&Param1, "GB_PERFORM_SCHEDULED_TASK", "GB_REACH_AND_USE_GRINGO failed - gringo is inside a restriction volume.");
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
						if ((GET_TASK_STATUS(&iVar5, 1) != 4 || GET_TASK_STATUS(&iVar5, 19) != 4) || Function_40(&Param1))
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
				Function_36(&iVar5);
				fVar4 = Function_31(&Param1 + 80);
				Var1 = *(&Param1 + 56);
				uVar3 = Param1.f_68;
				if (Function_30(&Param1, &vVar7, &vVar9))
				{
					iVar11 = Vector(Function_29(vVar7.x, vVar9.x), Function_29(vVar7.y, vVar9.y), Function_29(vVar7.z, vVar9.z));
					uVar13 = Vector(Function_28(vVar7.x, vVar9.x), Function_28(vVar7.y, vVar9.y), Function_28(vVar7.z, vVar9.z));
					TASK_PRIORITY_SET(&iVar5, 3);
					TASK_WANDER_IN_BOX(&iVar5, &iVar11, &uVar13, -1f);
					iParam0 = 12;
				}
				else
				{
					Function_44(StackVal, Var1, uVar3, fVar4);
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
				Function_36(&iVar5);
				if (&bParam2)
				{
					Function_38(&Param1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK (this is a shopkeeper) - check spew!");
					Var1 = *(&Param1 + 56);
					uVar3 = Param1.f_68;
					TASK_PRIORITY_SET(&iVar5, 2);
					TASK_GO_NEAR_COORD(&iVar5, &Var1, 2.0f, 1);
					iParam0 = 10;
				}
				else
				{
					Function_38(&Param1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK - check spew!");
					if (Function_30(&Param1, &vVar7, &vVar9))
					{
						iVar11 = Vector(Function_29(vVar7.x, vVar9.x), Function_29(vVar7.y, vVar9.y), Function_29(vVar7.z, vVar9.z));
						uVar13 = Vector(Function_28(vVar7.x, vVar9.x), Function_28(vVar7.y, vVar9.y), Function_28(vVar7.z, vVar9.z));
						TASK_PRIORITY_SET(&iVar5, 3);
						TASK_WANDER_IN_BOX(&iVar5, &iVar11, &uVar13, 20.0f);
						iParam0 = 12;
					}
					else
					{
						Var1 = *(&Param1 + 56);
						uVar3 = Param1.f_68;
						Function_44(StackVal, Var1, uVar3, 20.0f);
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
				if (Function_40(&Param1))
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
			Function_27(&Param1, &iVar6, "STANDING STILL FALLBACK");
			Param1 = 500;
			if (IS_ACTOR_VALID(&iVar5))
			{
				iVar0 = GET_TASK_STATUS(&iVar5, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					iParam0 = 20;
				}
				if (Function_40(&Param1))
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
				if (Function_40(&Param1))
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
				if (Function_40(&Param1))
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
			Function_27(&Param1, &iVar6, "nSLEEPTIME");
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
			if (Function_40(&Param1))
			{
				if (IS_ACTOR_VALID(&iVar5))
				{
					if (DECOR_CHECK_EXIST(&iVar5, "sleepvis"))
					{
						DECOR_REMOVE(&iVar5, "sleepvis");
					}
				}
				SET_PERS_CHAR_ENABLED(&iVar6, 1);
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
					if (AI_HAS_ACTOR_BUMPED_INTO_ME(&iVar5, &Global_54076, 10.0f) && Function_26(&Param1 + 16))
					{
						iParam0 = 20;
					}
					if (Function_40(&Param1))
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
				Function_36(&iVar5);
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
				else if (Function_40(&Param1))
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
			else if (Function_40(&Param1))
			{
				iParam0 = 20;
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iVar6)))
			{
				if (Function_25(50.0f, &iVar6))
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
					Function_36(&iVar5);
					Function_44(StackVal, *(&Param1 + 56), Param1.f_68, -1.0f);
				}
				iParam0 = 17;
			}
			else
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000011:
			Function_27(&Param1, &iVar6, "RESPONDING TO RAIN");
			Param1 = 0;
			if (!bVar15)
			{
				iParam0 = 20;
			}
			break;
		
		case 0x00000012:
			Function_27(&Param1, &iVar6, "RESPONDING TO RETREAT");
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
			if (Function_40(&Param1))
			{
				Param1.f_24 = 0;
			}
			else
			{
				Param1.f_24++;
			}
			Function_10(&Param1 + 40);
			if (IS_ACTOR_VALID(&iVar5))
			{
				TASK_PRIORITY_SET(&iVar5, 2);
			}
			iParam0 = 1;
			break;
		
		case 0x00000015:
			if (!Function_58(&Param1))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_PERS_CHAR(&iVar6), "KeepLastTask"))
				{
					Function_27(&Param1, &iVar6, "STOLEN KEEP_LAST_TASK");
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
				Function_27(&Param1, &iVar6, "STOLEN");
			}
			break;
		
		default:
			Function_20(&Param1, "GB_PERFORM_SCHEDULED_TASK", "UNKNOWN STATE!");
			return 0;
			break;
	}
	return 1;
}

bool Function_25(float fParam0, int iParam1) //Position: 0x1F51 / 8017
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

bool Function_26(int iParam0) //Position: 0x1F7D / 8061
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

void Function_27(int iParam0, int iParam1, int iParam2) //Position: 0x1FC7 / 8135
{
	struct<5> Var0;
	
	if (Function_18(&iParam0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_PERS_CHAR(&iParam1), &Var0);
		Var0.f_4 = (StackVal + 0,25f);
	}
	return;
}

int Function_28(int iParam0, int iParam1) //Position: 0x1FF0 / 8176
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_29(int iParam0, int iParam1) //Position: 0x2003 / 8195
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_30(int iParam0, int iParam1, var uParam2) //Position: 0x2016 / 8214
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
	
	iVar0 = Function_13(&iParam0);
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
			if (Function_18(&iParam0))
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

var Function_31(int iParam0) //Position: 0x21EB / 8683
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

float Function_32(vector3 vParam0) //Position: 0x221A / 8730
{
	if (Function_8(&vParam0))
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

bool Function_33(int iParam0) //Position: 0x22E7 / 8935
{
	return Function_9(iParam0, 2);
}

bool Function_34(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x22F5 / 8949
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

bool Function_35(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x2387 / 9095
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam1))
	{
		if (GET_OBJECT_TYPE(&uParam1) == 12)
		{
			if (Function_26(&uParam1))
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

void Function_36(int iParam0) //Position: 0x25D8 / 9688
{
	if (IS_ACTOR_RIDING(&iParam0))
	{
		Function_37(&iParam0);
		MEMORY_PREFER_WALKING(&iParam0, 0);
		ACTOR_DISMOUNT_NOW(&iParam0);
	}
	return;
}

void Function_37(int iParam0) //Position: 0x25FE / 9726
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

void Function_38(int iParam0, int iParam1) //Position: 0x2681 / 9857
{
	if (Function_18(&iParam0))
	{
		LOG_ERROR(&iParam1);
	}
	return;
}

bool Function_39(int iParam0) //Position: 0x2696 / 9878
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

bool Function_40(struct<11> Param0) //Position: 0x26E0 / 9952
{
	if (!StackVal != Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0.f_28, Param0))
	{
		return 1;
	}
	return 0;
}

void Function_41(struct<2> Param0, var uParam2, var uParam3) //Position: 0x26FC / 9980
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
			if (!Function_42(StackVal, Var0))
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

bool Function_42(vector3 vParam0) //Position: 0x2842 / 10306
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_43(struct<2> Param0, var uParam2, var uParam3) //Position: 0x285A / 10330
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

void Function_44(struct<2> Param0, var uParam2, float fParam3) //Position: 0x2968 / 10600
{
	var uVar0;
	var uVar2;
	
	if (fParam3 >= 0.0f)
	{
		fParam3 = -1.0f;
	}
	Function_45(StackVal, Param0, uParam2, &uVar0, &uVar2);
	TASK_PRIORITY_SET(Function_56(), 3);
	TASK_WANDER_IN_BOX(Function_56(), &uVar0, &uVar2, fParam3);
}

void Function_45(vector3 vParam0) //Position: 0x299A / 10650
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

var Function_46(int iParam0, int iParam1, var uParam2, var uParam3, struct<2> Param4, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2A0C / 10764
{
	var uVar0;
	float fVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		if (Function_18(&iParam0))
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

var Function_47(float fParam0, bool bParam1, bool bParam2) //Position: 0x31C7 / 12743
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	struct<5> Var4;
	bool bVar9;
	float fVar10;
	
	bVar9 = 1E+33.0f;
	if (!IS_ITERATOR_VALID(&fParam0))
	{
		return &iVar0;
	}
	fVar1 = START_OBJECT_ITERATOR(&fParam0);
	while (IS_OBJECT_VALID(&fVar1))
	{
		if (bParam1 || bParam2)
		{
			if (IS_ACTOR_VALID(Function_56()))
			{
				GET_OBJECT_POSITION(&fVar1, &Var4);
				GET_POSITION(Function_56(), &Var6);
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
								bVar2 = &fVar1;
							}
						}
						else
						{
							bVar9 = bVar8;
							bVar2 = &fVar1;
						}
					}
				}
				else if (bParam2)
				{
					fVar10 = FABS((StackVal - StackVal));
					if (fVar10 >= 1.0f)
					{
						iVar3 = &fVar1;
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
	if (bParam1 && IS_OBJECT_VALID(&bVar2))
	{
		return &bVar2;
	}
	if (bParam2 && IS_OBJECT_VALID(&iVar3))
	{
		return &iVar3;
	}
	return &iVar0;
}

var Function_48(int iParam0, var uParam1, int iParam2) //Position: 0x32C1 / 12993
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
	
	iVar0 = Function_13(&iParam0);
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
			if (Function_18(&iParam0))
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

var Function_49(int iParam0) //Position: 0x34A2 / 13474
{
	int iVar0;
	var uVar11;
	
	uVar11 = GRINGO_GET_FIRST_NAMED_CHILD("ScriptStructure", 0, &iParam0 + 8);
	GET_GRINGO_STRUCT_ATTR(&iVar0, 22, "Vectors_and_LayoutRef_Struct", &uVar11);
	return &iVar0 + 72;
}

var Function_50() //Position: 0x34F6 / 13558
{
	return StackVal;
}

var Function_51() //Position: 0x3501 / 13569
{
	int iVar0;
	
	return &iVar0;
}

int Function_52(var uParam0, var uParam1, float fParam2) //Position: 0x350A / 13578
{
	float fVar0;
	
	fVar0 = Function_53(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_53(var uParam0, int iParam1) //Position: 0x3529 / 13609
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_54(&uVar0, &uVar2);
	return iVar4;
}

var Function_54(struct<2> Param0) //Position: 0x354A / 13642
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_55(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x3569 / 13673
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_56() //Position: 0x35CA / 13770
{
	return GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF())));
}

void Function_57(int iParam0) //Position: 0x35DC / 13788
{
	if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
	{
		REMOVE_BLIP(&Global_15402[iParam014] + 104);
	}
	return;
}

bool Function_58(int iParam0) //Position: 0x35FF / 13823
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

int Function_59(int iParam0) //Position: 0x3648 / 13896
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (&Global_15402[iVar014] == &iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_60() //Position: 0x3673 / 13939
{
	return GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()));
}

