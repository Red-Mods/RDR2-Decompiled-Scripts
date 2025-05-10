//Decompiled with MagicRDR v1.0
//Function Count : 61
//Statics Count : 1
//Natives Count : 144
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	struct<25> Var0;
	var uVar25;
	int iVar28;
	int iVar31;
	int iVar32;
	bool bVar33;
	var uVar34;
	float fVar35;
	int iVar36;
	
	if (!IS_GRINGO_COMPONENT_VALID(bScriptParam_0))
	{
		LOG_ERROR("Companion_Brain: Attempting to attach a gringo brain that has no valid gringo base.");
		DESTROY_OBJECT(GRINGO_GET_MY_OBJECT_REF());
	}
	Var0 = false;
	Var0.f_4 = bScriptParam_0;
	iVar31 = 0;
	Var0.f_20 = 0;
	Var0.f_24 = 0;
	if (IS_PERS_CHAR_VALID(Function_60()))
	{
		SET_PERS_CHAR_SAFE_ZONE(Function_60(), 150.0f);
	}
	iVar32 = Function_59(Function_60());
	uVar34 = Function_60();
	while (IS_GRINGO_ACTIVE())
	{
		if (IS_PERS_CHAR_VALID(Function_60()))
		{
			if (!Function_58(&Var0))
			{
				if (IS_PERS_CHAR_ALIVE(Function_60()))
				{
					Function_57(iVar32);
					bVar33 = Function_56();
					if (IS_ACTOR_VALID(bVar33))
					{
						Function_55(bVar33, 0, 0, 0, 0);
						if ((Function_52(bVar33, Global_34573, 15.0f) && (GET_CURRENT_GAME_TIME() - fVar35) < 60.0f) && MEMORY_GET_IS_VISIBLE(bVar33, Global_34573))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar33, 43, Global_34573, 1, 0, 0, 4294967295, 4294967295, 0, 1);
							fVar35 = GET_CURRENT_GAME_TIME();
						}
						if (GET_ACTOR_FACTION(bVar33) != 20)
						{
							SET_ACTOR_FACTION(bVar33, 20);
						}
						if (FIRE_IS_ACTOR_ON_FIRE(bVar33))
						{
							if (GET_LAST_ATTACKER(bVar33) == Global_34573)
							{
								if ((!HUD_IS_FADED() && !HUD_IS_FADING()) && !Global_3395)
								{
									iVar36 = Function_59(Function_60());
									if ((iVar36 != 12 || iVar36 != 11) || iVar36 != 13)
									{
										UI_SET_TEXT("Death_Explanation", "kill_family_help");
									}
									else
									{
										UI_SET_TEXT("Death_Explanation", "kill_friend_help");
									}
									KILL_ACTOR(Global_34573);
								}
							}
						}
					}
					if (GRINGO_HAS_PENDING_MESSAGE())
					{
					}
					if (!Function_24(&iVar31, &Var0, 0))
					{
						if (!Function_19(&iVar31, &Var0, &iVar28))
						{
							iVar31 = 20;
						}
					}
				}
				else if (IS_ACTOR_VALID(bVar33))
				{
					if (GET_LAST_ATTACKER(bVar33) == Global_34573)
					{
						if ((!HUD_IS_FADED() && !HUD_IS_FADING()) && !Global_3395)
						{
							iVar36 = Function_59(Function_60());
							if ((iVar36 != 12 || iVar36 != 11) || iVar36 != 13)
							{
								UI_SET_TEXT("Death_Explanation", "kill_family_help");
							}
							else
							{
								UI_SET_TEXT("Death_Explanation", "kill_friend_help");
							}
							KILL_ACTOR(Global_34573);
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
				Function_11(iVar31, &Var0);
			}
			else
			{
				if (Var16.f_12)
				{
					Function_1(&Var16, &Var0, &iVar31, &uVar25);
					Var16.f_12 = 0;
				}
				if (!iVar31 != 21)
				{
					iVar31 = 25;
				}
				if (!Function_24(&iVar31, &Var0, 0))
				{
					Function_19(&iVar31, &Var0, &iVar28);
				}
				Var0 = false;
			}
		}
		if (IS_ACTOR_VALID(bVar33))
		{
			GRINGO_WAIT(false);
		}
		else
		{
			GRINGO_WAIT(1000);
		}
	}
	Function_57(iVar32);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x30C / 780
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(iParam0->f_20))
	{
		GRINGO_ACTOR_DROP_ATTACHED_PROP(iParam0->f_20);
		GRINGO_REPORT_USE_FINISHED(iParam0->f_20, true);
		if (GRINGO_OWNS_ACTOR_ANIMS(iParam0->f_20))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(iParam0->f_20);
		}
	}
	if (IS_ACTOR_VALID(Function_56()))
	{
		if (GRINGO_OWNS_ACTOR_ANIMS(Function_56()))
		{
			GRINGO_RETURN_ACTOR_TO_DEFAULT_ANIMS(Function_56());
		}
		bVar0 = GET_CURRENT_GRINGO(Function_56());
		if (IS_GRINGO_VALID(bVar0))
		{
			GRINGO_DEACTIVATE_AND_RESET_ACTORS(bVar0);
		}
		if (!Function_58(bParam1))
		{
			TASK_PRIORITY_SET(Function_56(), 3);
		}
	}
	Function_10(iParam0);
	Function_4(iParam0);
	bVar1 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "UseCase1", 3);
	if (IS_GRINGO_COMPONENT_VALID(bVar1))
	{
		GRINGO_CLEAR_COMPONENT_USER(bVar1);
	}
	Function_3(uParam3);
	Function_2(iParam0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	*uParam2 = 1;
	iParam0->f_12 = 0;
}

void Function_2(int iParam0) //Position: 0x3C5 / 965
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_24))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_24);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_28))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_28);
	}
	return;
}

void Function_3(int iParam0) //Position: 0x3ED / 1005
{
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		DESTROY_LAYOUT(*iParam0);
	}
	Global_3393 = 0;
	return;
}

void Function_4(int iParam0) //Position: 0x406 / 1030
{
	if (!Function_8(iParam0))
	{
		Function_5(iParam0, 0.0f);
	}
	return;
}

void Function_5(var uParam0, float fParam1) //Position: 0x41B / 1051
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_7(uParam0, 1);
	Function_6(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x43C / 1084
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x44F / 1103
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x45E / 1118
{
	return Function_9(*iParam0, 1);
}

int Function_9(var uParam0, int iParam1) //Position: 0x46B / 1131
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x478 / 1144
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_11(int iParam0, bool bParam1) //Position: 0x48C / 1164
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (Function_18(bParam1))
	{
		if (IS_ACTOR_VALID(Function_56()))
		{
			if (iParam0 == 0)
			{
				*bParam1 = 0;
			}
			else
			{
				*bParam1 = 0;
			}
			GET_POSITION(Function_56(), &vVar0);
		}
		else
		{
			GET_OBJECT_POSITION(Function_17(), &vVar0);
		}
		SET_DEBUG_DRAW(1);
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
		Function_14(StackVal, Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam1, *bParam1));
		vVar0 = { StackVal, StackVal, Function_14(StackVal, Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam1, *bParam1)) };
		uVar6 = Function_12(bParam1);
		vVar3 = { StackVal, StackVal, vVar0 };
		vVar3.f_4 = (vVar3.y + 2.0f);
		vVar3.f_4 = (vVar3.y - 0,5f);
		vVar0 = { StackVal, StackVal, vVar3 };
		vVar0.x = (vVar0.x - 0,5f);
		vVar3.x = (vVar3.x + 0,5f);
	}
	return;
}

var Function_12(bool bParam0) //Position: 0x529 / 1321
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = Function_13(bParam0);
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
			if (Function_18(bParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_SCHEDULED_SCAN_AREA_SIZE_FROM_XML invalid time of day returned by GB_GET_MY_TIME_OF_DAY");
				PRINTNL();
			}
			break;
	}
	bVar2 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "TimeOfDay_Tasks", false);
	bVar3 = GRINGO_GET_FIRST_NAMED_CHILD(bVar5, 0, bVar2);
	bVar4 = GRINGO_GET_ATTRIBUTE(bVar3, false);
	return GRINGO_GET_FLOAT_ATTR_BY_HANDLE(bVar4, &uVar1);
}

int Function_13(int iParam0) //Position: 0x695 / 1685
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = MAKE_TIME_OF_DAY((5 + iParam0->f_24), iParam0->f_20, false);
	bVar1 = MAKE_TIME_OF_DAY((7 + iParam0->f_24), iParam0->f_20, false);
	bVar2 = MAKE_TIME_OF_DAY((11 + iParam0->f_24), iParam0->f_20, false);
	bVar3 = MAKE_TIME_OF_DAY((14 + iParam0->f_24), iParam0->f_20, false);
	bVar4 = MAKE_TIME_OF_DAY((18 + iParam0->f_24), iParam0->f_20, false);
	bVar5 = MAKE_TIME_OF_DAY((22 + iParam0->f_24), iParam0->f_20, false);
	bVar6 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(bVar6, bVar0, bVar1))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar1, bVar2))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar2, bVar3))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar3, bVar4))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar4, bVar5))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(bVar6, bVar5, bVar0))
	{
		return 32;
	}
	return 32;
}

vector3 Function_14(int iParam0, bool bParam1) //Position: 0x76C / 1900
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
	if (Function_15(StackVal, StackVal, vVar21, 0.0f, 0.0f, 0.0f))
	{
		if (Function_18(iParam0))
		{
			PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT vector is null for time of day index: ");
			PRINTINT(bParam1);
			PRINTNL();
		}
		if (IS_ACTOR_VALID(Function_56()))
		{
			GET_POSITION(Function_56(), &vVar21);
			if (Function_18(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning actor position instead of struct vector");
				PRINTNL();
			}
		}
		else if (IS_PERS_CHAR_VALID(Function_60()))
		{
			GET_OBJECT_POSITION(Function_17(), &vVar21);
			if (Function_18(iParam0))
			{
				PRINTSTRING("Gen_Brain: GB_RETRIEVE_TOD_VECTOR_FROM_BRAIN_STRUCT returning pers char position instead of struct vector");
				PRINTNL();
			}
		}
	}
	return StackVal, StackVal, vVar21;
}

bool Function_15(vector3 vParam0, vector3 vParam3) //Position: 0xA32 / 2610
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_16(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) //Position: 0xA5F / 2655
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

var Function_17() //Position: 0xB2C / 2860
{
	return GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF());
}

bool Function_18(bool bParam0) //Position: 0xB38 / 2872
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

bool Function_19(int iParam0, bool bParam1, int iParam2) //Position: 0xB7B / 2939
{
	*iParam2 = { StackVal, StackVal, *iParam2 };
	switch (*iParam0)
	{
		case 0x00000014:
			break;
		
		case 0x00000019:
			Function_21(Function_23());
			*iParam0 = 21;
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
			Function_20(bParam1, "COMPANION_PERFORM_SCHEDULED_TASK", "Unknown State");
			return 0;
			break;
	}
	return 0;
}

void Function_20(int iParam0, bool bParam1, bool bParam2) //Position: 0xC1E / 3102
{
	if (Function_18(iParam0))
	{
		PRINTSTRING("Pers Char: ");
		PRINTSTRING(GET_OBJECT_NAME(Function_17()));
		PRINTSTRING(" - ");
		PRINTSTRING("Module Name: ");
		PRINTSTRING(bParam1);
		PRINTSTRING(" - ");
		PRINTSTRING(bParam2);
		PRINTNL();
	}
	return;
}

int Function_21(bool bParam0) //Position: 0xC78 / 3192
{
	struct<16> Var0;
	bool bVar16;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22() };
	bVar16 = FIND_OBJECT_IN_LAYOUT(bParam0, &Var0);
	if (IS_OBJECT_VALID(bVar16))
	{
		RELEASE_OBJECT_REF(bVar16);
		return 1;
	}
	return 0;
}

struct<64> Function_22() //Position: 0xC9F / 3231
{
	char* cVar0[64];
	
	strcpy(&cVar0, GET_OBJECT_NAME(Function_17()), 64);
	stradd(&cVar0, "_camp", 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_23() //Position: 0xCC2 / 3266
{
	int iVar0;
	
	iVar0 = Function_59(Function_60());
	return Global_8492[iVar014].f_12;
}

bool Function_24(int iParam0, bool bParam1, bool bParam2) //Position: 0xCD9 / 3289
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
	
	bVar6 = Function_56();
	bVar7 = Function_60();
	bVar20 = false;
	if (!bParam2)
	{
		iVar21 = Function_51();
		if (iVar21 != 3 || iVar21 != 4)
		{
			bVar20 = true;
		}
		else
		{
			bVar20 = false;
		}
	}
	if (!Function_58(bParam1))
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
			bParam1->f_16 = Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam1);
			Function_14(bParam1, bParam1->f_16);
			*(bParam1 + 40) = { StackVal, StackVal, Function_14(bParam1, bParam1->f_16) };
			bParam1->f_52 = Function_12(bParam1);
			bParam1->f_56 = Function_50(bParam1);
			bParam1->f_12 = 0;
			bParam1->f_60 = Function_49(bParam1, bParam1 + 12, 0);
			bParam1->f_8 = Function_46(StackVal, StackVal, bParam1, bParam1->f_56, bParam1->f_60, "UseCase1", *(bParam1 + 40), bParam1->f_52, 0, 0);
			if (STRINGS_ARE_EQUAL(bParam1->f_60, "nsleeptime"))
			{
				*bParam1 = 0;
				Function_10(bParam1 + 28);
				Function_4(bParam1 + 28);
				if (bParam2)
				{
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_GO_TO_COORD_AND_STAY(bVar6, bParam1 + 40, 1, 0.0f);
				}
				else
				{
					TASK_PRIORITY_SET(bVar6, 3);
					Function_44(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
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
							if (!Function_15(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_43(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_43(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(StackVal, false, &vVar1);
							if (!Function_15(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_43(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_43(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						default:
							Function_43(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							*iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_43(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
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
							if (!Function_15(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_41(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_41(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						case 0x00000010:
							GET_PATH_POINT(StackVal, false, &vVar1);
							if (!Function_15(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
							{
								Function_41(StackVal, StackVal, vVar1, bVar6, bVar7);
							}
							else
							{
								Function_41(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							}
							*iParam0 = 1;
							break;
						
						default:
							Function_41(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
							*iParam0 = 1;
							break;
					}
				}
				else
				{
					Function_41(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
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
			if (Function_40(bParam1))
			{
				bParam1->f_16 = Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *bParam1);
				Function_14(bParam1, bParam1->f_16);
				*(bParam1 + 40) = { StackVal, StackVal, Function_14(bParam1, bParam1->f_16) };
				bParam1->f_52 = Function_12(bParam1);
			}
			bParam1->f_60 = Function_49(bParam1, bParam1 + 12, 0);
			bParam1->f_8 = Function_46(StackVal, StackVal, bParam1, bParam1->f_56, bParam1->f_60, "UseCase1", *(bParam1 + 40), bParam1->f_52, 0, 0);
			Function_20(bParam1, "GB_PERFORM_SCHEDULED_TASK", bParam1->f_60);
			if (IS_ACTOR_VALID(bVar6))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					switch (GET_OBJECT_TYPE(StackVal))
					{
						case 0x0000000C:
							*bParam1 = 0;
							Function_10(bParam1 + 28);
							Function_4(bParam1 + 28);
							if (Function_39(bParam1))
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
							Function_10(bParam1 + 28);
							Function_4(bParam1 + 28);
							TASK_PRIORITY_SET(bVar6, 2);
							*iParam0 = 6;
							break;
						
						default:
							Function_38(bParam1, "GB_PERFORM_SCHEDULED_TASK: Unhandled object! what the hell has come through?");
							*iParam0 = 20;
							break;
					}
				}
				else if (STRINGS_ARE_EQUAL(bParam1->f_60, "nsleeptime"))
				{
					*bParam1 = 0;
					Function_10(bParam1 + 28);
					Function_4(bParam1 + 28);
					if (bParam2)
					{
						TASK_PRIORITY_SET(bVar6, 2);
						TASK_GO_TO_COORD_AND_STAY(bVar6, bParam1 + 40, 1, 0.0f);
					}
					else
					{
						TASK_PRIORITY_SET(bVar6, 3);
						Function_44(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
					}
					SET_PERS_CHAR_ENABLED(bVar7, false);
					*iParam0 = 15;
				}
				else if (STRINGS_ARE_EQUAL_CLAMPED(bParam1->f_60, "wander", 6))
				{
					*bParam1 = 0;
					Function_10(bParam1 + 28);
					Function_4(bParam1 + 28);
					TASK_PRIORITY_SET(bVar6, 3);
					*iParam0 = 8;
				}
				else
				{
					Function_38(bParam1, "WARNING! No valid TASK for this pers char");
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
						if (!Function_15(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
						{
							Function_41(StackVal, StackVal, vVar1, bVar6, bVar7);
						}
						else
						{
							Function_41(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						}
						*iParam0 = 19;
						break;
					
					case 0x00000010:
						GET_PATH_POINT(StackVal, false, &vVar1);
						if (!Function_15(StackVal, StackVal, vVar1, 0.0f, 0.0f, 0.0f))
						{
							Function_41(StackVal, StackVal, vVar1, bVar6, bVar7);
						}
						else
						{
							Function_41(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
						}
						*iParam0 = 19;
						break;
					
					default:
						Function_41(StackVal, StackVal, *(bParam1 + 40), bVar6, bVar7);
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
				if (Function_40(bParam1))
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
				Function_36(&bVar6);
				if (bVar20)
				{
					*iParam0 = 16;
					break;
				}
				else
				{
					if (Function_35(StackVal, bVar6, "UseCase1", Function_18(bParam1)))
					{
						if (Function_34(StackVal, bVar6, "UseCase1", &bVar22))
						{
							Function_10(bParam1 + 28);
							Function_4(bParam1 + 28);
							*iParam0 = 5;
							break;
						}
						else if (bVar22)
						{
							Function_20(bParam1, "GB_PERFORM_SCHEDULED_TASK", "GB_REACH_AND_USE_GRINGO failed - gringo is inside a restriction volume.");
							*iParam0 = 9;
							break;
						}
					}
					else
					{
						*iParam0 = 9;
						break;
					}
					if (Function_32(bParam1 + 28) < 20.0f)
					{
						if ((GET_TASK_STATUS(bVar6, 1) != 4 || GET_TASK_STATUS(bVar6, 19) != 4) || Function_40(bParam1))
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
				Function_36(&bVar6);
				fVar5 = Function_31(bParam1->f_60);
				vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
				uVar4 = bParam1->f_52;
				if (Function_30(bParam1, &vVar8, &vVar11))
				{
					vVar14 = { Function_29(vVar8.x, vVar11.x), Function_29(vVar8.y, vVar11.y), Function_29(vVar8.z, vVar11.z) };
					vVar17 = { Function_28(vVar8.x, vVar11.x), Function_28(vVar8.y, vVar11.y), Function_28(vVar8.z, vVar11.z) };
					TASK_PRIORITY_SET(bVar6, 3);
					TASK_WANDER_IN_BOX(bVar6, &vVar14, &vVar17, -1f);
					*iParam0 = 12;
				}
				else
				{
					Function_44(StackVal, StackVal, vVar1, uVar4, fVar5);
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
				Function_36(&bVar6);
				if (bParam2)
				{
					Function_38(bParam1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK (this is a shopkeeper) - check spew!");
					vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
					uVar4 = bParam1->f_52;
					TASK_PRIORITY_SET(bVar6, 2);
					TASK_GO_NEAR_COORD(bVar6, &vVar1, 2.0f, 1);
					*iParam0 = 10;
				}
				else
				{
					Function_38(bParam1, "An error has triggered GB_SCHEDULE_TASK_WANDER_FALLBACK - check spew!");
					if (Function_30(bParam1, &vVar8, &vVar11))
					{
						vVar14 = { Function_29(vVar8.x, vVar11.x), Function_29(vVar8.y, vVar11.y), Function_29(vVar8.z, vVar11.z) };
						vVar17 = { Function_28(vVar8.x, vVar11.x), Function_28(vVar8.y, vVar11.y), Function_28(vVar8.z, vVar11.z) };
						TASK_PRIORITY_SET(bVar6, 3);
						TASK_WANDER_IN_BOX(bVar6, &vVar14, &vVar17, 20.0f);
						*iParam0 = 12;
					}
					else
					{
						vVar1 = { StackVal, StackVal, *(bParam1 + 40) };
						uVar4 = bParam1->f_52;
						Function_44(StackVal, StackVal, vVar1, uVar4, 20.0f);
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
				if (Function_40(bParam1))
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
			Function_27(bParam1, bVar7, "STANDING STILL FALLBACK");
			*bParam1 = 500;
			if (IS_ACTOR_VALID(bVar6))
			{
				iVar0 = GET_TASK_STATUS(bVar6, 6);
				if (iVar0 != 0 || iVar0 != 4)
				{
					*iParam0 = 20;
				}
				if (Function_40(bParam1))
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
				if (Function_40(bParam1))
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
				if (Function_40(bParam1))
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
			Function_27(bParam1, bVar7, "nSLEEPTIME");
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
			if (Function_40(bParam1))
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
					if (StackVal && Function_26(AI_HAS_ACTOR_BUMPED_INTO_ME(bVar6, Global_34573, 10.0f)))
					{
						*iParam0 = 20;
					}
					if (Function_40(bParam1))
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
				Function_36(&bVar6);
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
				else if (Function_40(bParam1))
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
			else if (Function_40(bParam1))
			{
				*iParam0 = 20;
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar7)))
			{
				if (Function_25(50.0f, bVar7))
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
					Function_36(&bVar6);
					Function_44(StackVal, StackVal, *(bParam1 + 40), bParam1->f_52, -1.0f);
				}
				*iParam0 = 17;
			}
			else
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000011:
			Function_27(bParam1, bVar7, "RESPONDING TO RAIN");
			*bParam1 = 0;
			if (!bVar20)
			{
				*iParam0 = 20;
			}
			break;
		
		case 0x00000012:
			Function_27(bParam1, bVar7, "RESPONDING TO RETREAT");
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
			if (Function_40(bParam1))
			{
				bParam1->f_12 = 0;
			}
			else
			{
				bParam1->f_12++;
			}
			Function_10(bParam1 + 28);
			if (IS_ACTOR_VALID(bVar6))
			{
				TASK_PRIORITY_SET(bVar6, 2);
			}
			*iParam0 = 1;
			break;
		
		case 0x00000015:
			if (!Function_58(bParam1))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_PERS_CHAR(bVar7), "KeepLastTask"))
				{
					Function_27(bParam1, bVar7, "STOLEN KEEP_LAST_TASK");
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
				Function_27(bParam1, bVar7, "STOLEN");
			}
			break;
		
		default:
			Function_20(bParam1, "GB_PERFORM_SCHEDULED_TASK", "UNKNOWN STATE!");
			return 0;
			break;
	}
	return 1;
}

bool Function_25(float fParam0, bool bParam1) //Position: 0x1C5B / 7259
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

bool Function_26(bool bParam0) //Position: 0x1C86 / 7302
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

void Function_27(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1CCC / 7372
{
	struct<5> Var0;
	
	if (Function_18(bParam0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_PERS_CHAR(bParam1), &Var0);
		Var0.f_4 = (StackVal + 0,25f);
	}
	return;
}

int Function_28(int iParam0, int iParam1) //Position: 0x1CF3 / 7411
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_29(int iParam0, int iParam1) //Position: 0x1D06 / 7430
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_30(bool bParam0, int iParam1, int iParam2) //Position: 0x1D19 / 7449
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	
	iVar0 = Function_13(bParam0);
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
			if (Function_18(bParam0))
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
		bVar5 = GRINGO_GET_ATTRIBUTE(bVar4, bVar8);
		if (!bVar1)
		{
			bVar1 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(bVar5, iParam1);
		}
		else if (!bVar2)
		{
			bVar2 = GRINGO_GET_VECTOR_ATTR_BY_HANDLE(bVar5, iParam2);
		}
		if (bVar1 && bVar2)
		{
			return 1;
		}
		bVar8++;
	}
	return 0;
}

var Function_31(bool bParam0) //Position: 0x1ED8 / 7896
{
	int iVar0;
	int iVar1;
	
	STRING_CLEAR_TOKENIZER();
	iVar1 = SET_OWNERSHIP_STRAGGLER(cParam0, ",");
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

float Function_32(int iParam0) //Position: 0x1F06 / 7942
{
	if (Function_8(iParam0))
	{
		if (Function_33(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_33(int iParam0) //Position: 0x1FCE / 8142
{
	return Function_9(*iParam0, 2);
}

bool Function_34(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x1FDB / 8155
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
				TASK_USE_GRINGO(bParam0, GET_GRINGO_FROM_OBJECT(bParam1), bParam2, true, 1);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_35(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2060 / 8288
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam1))
	{
		if (GET_OBJECT_TYPE(bParam1) == 12)
		{
			if (Function_26(bParam1))
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

void Function_36(bool bParam0) //Position: 0x229A / 8858
{
	if (IS_ACTOR_RIDING(*bParam0))
	{
		Function_37(*bParam0);
		MEMORY_PREFER_WALKING(*bParam0, false);
		ACTOR_DISMOUNT_NOW(*bParam0);
	}
	return;
}

void Function_37(bool bParam0) //Position: 0x22BC / 8892
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

void Function_38(int iParam0, bool bParam1) //Position: 0x2338 / 9016
{
	if (Function_18(iParam0))
	{
		LOG_ERROR(bParam1);
	}
	return;
}

bool Function_39(int iParam0) //Position: 0x234B / 9035
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

bool Function_40(bool bParam0) //Position: 0x2390 / 9104
{
	if (!StackVal != Function_16(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0->f_16, *bParam0))
	{
		return 1;
	}
	return 0;
}

void Function_41(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x23AA / 9130
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
			if (!Function_42(StackVal, StackVal, vVar0))
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

bool Function_42(vector3 vParam0) //Position: 0x24EE / 9454
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_43(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x2506 / 9478
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

void Function_44(vector3 vParam0, var uParam3, float fParam4) //Position: 0x2610 / 9744
{
	var uVar0;
	var uVar3;
	
	if (fParam4 >= 0.0f)
	{
		fParam4 = -1.0f;
	}
	Function_45(StackVal, StackVal, vParam0, uParam3, &uVar0, &uVar3);
	TASK_PRIORITY_SET(Function_56(), 3);
	TASK_WANDER_IN_BOX(Function_56(), &uVar0, &uVar3, fParam4);
}

void Function_45(vector3 vParam0) //Position: 0x2642 / 9794
{
	if (fParam3 >= 0.0f)
	{
		fParam3 = 1.0f;
	}
	uParam4->f_8 = (vParam0.z - (fParam3 * 0,707f));
	uParam4->f_4 = (vParam0.y - 100.0f);
	*uParam4 = (vParam0.x - (fParam3 * 0,707f));
	uParam5->f_8 = (vParam0.z + (fParam3 * 0,707f));
	uParam5->f_4 = (vParam0.y + 100.0f);
	*uParam5 = (vParam0.x + (fParam3 * 0,707f));
}

var Function_46(int iParam0, bool bParam1, bool bParam2, bool bParam3, vector3 vParam4, bool bParam7, bool bParam8, bool bParam9) //Position: 0x26AE / 9902
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		if (Function_18(iParam0))
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
		bVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_48(), bParam1, 4294967295, 0);
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		ITERATE_IN_SET(bVar1, bVar2);
		if (LOCATE_GRINGOS_OF_TYPE(bVar2, bParam2, &vParam4, bParam7, 1) >= 0)
		{
			bVar0 = Function_47(bVar1, bParam8, bParam9);
			if (!IS_OBJECT_VALID(bVar0))
			{
				LOG_ERROR("Iteration failed");
			}
		}
		else if (LOCATE_GRINGOS_OF_NAME(bVar2, bParam2, &vParam4, bParam7, 1) >= 0)
		{
			bVar0 = Function_47(bVar1, bParam8, bParam9);
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
				if (Function_18(iParam0))
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
					if (Function_18(iParam0))
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
				if (Function_18(iParam0))
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
					if (Function_18(iParam0))
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
		if (Function_18(iParam0))
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

bool Function_47(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2E2B / 11819
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
			if (IS_ACTOR_VALID(Function_56()))
			{
				GET_OBJECT_POSITION(bVar1, &Var4);
				GET_POSITION(Function_56(), &Var7);
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

var Function_48() //Position: 0x2F10 / 12048
{
	int iVar0;
	
	return iVar0;
}

var Function_49(int iParam0, var uParam1, int iParam2) //Position: 0x2F18 / 12056
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = Function_13(iParam0);
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
			if (Function_18(iParam0))
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
		bVar6 = GRINGO_GET_ATTRIBUTE(bVar5, bVar1);
		bVar8 = GRINGO_GET_STRING_ATTR_BY_HANDLE(bVar6, &uVar3);
		if (IS_STRING_VALID(bVar8))
		{
			return bVar8;
		}
		bVar1++;
	}
	return "NHIL";
}

var Function_50(var uParam0) //Position: 0x30DF / 12511
{
	struct<73> Var0;
	
	iVar20 = GRINGO_GET_FIRST_NAMED_CHILD(StackVal, "ScriptStructure", false);
	GET_GRINGO_STRUCT_ATTR(&Var0, 20, "Vectors_and_LayoutRef_Struct", iVar20);
	return Var0.f_72;
}

var Function_51() //Position: 0x312E / 12590
{
	return StackVal;
}

int Function_52(var uParam0, var uParam1, float fParam2) //Position: 0x3139 / 12601
{
	float fVar0;
	
	fVar0 = Function_53(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_53(bool bParam0, bool bParam1) //Position: 0x3156 / 12630
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_54(&uVar0, &uVar3);
	return iVar6;
}

var Function_54(var uParam0, int iParam1) //Position: 0x3175 / 12661
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_55(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x3193 / 12691
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_CRIPPLE_ENABLE(bParam0, iParam4);
		SET_ACTOR_ALLOW_DISARM(bParam0, bParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "CanBeLasso", bParam3);
		if (IS_ACTOR_RIDING(bParam0))
		{
			bVar0 = GET_MOUNT(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				SET_ALLOW_JACK(bVar0, iParam2);
			}
		}
	}
}

var Function_56() //Position: 0x31E7 / 12775
{
	return GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF())));
}

void Function_57(int iParam0) //Position: 0x31F9 / 12793
{
	if (IS_BLIP_VALID(Global_8492[iParam014].f_52))
	{
		REMOVE_BLIP(Global_8492[iParam014].f_52);
	}
	return;
}

bool Function_58(bool bParam0) //Position: 0x321A / 12826
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

int Function_59(int iParam0) //Position: 0x325E / 12894
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Global_8492[iVar014] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_60() //Position: 0x3287 / 12935
{
	return GET_PERS_CHAR_FROM_OBJECT(GET_OBJECT_OWNER(GRINGO_GET_MY_OBJECT_REF()));
}

