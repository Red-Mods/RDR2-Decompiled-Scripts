//Decompiled with MagicRDR v1.0
//Function Count : 287
//Statics Count : 312
//Natives Count : 501
//Parameters Count : 36

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
	struct<1009> Local_15 = { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<2> Var6;
	var uVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	
	iLocal_13 = 0;
	bVar1 = 250;
	Function_272(&Local_15, &ScriptParam_0);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&Global_54076, 0, "red_wanted");
	if (Function_271(0x1000000))
	{
		bVar4 = true;
		if (StackVal <= 1000.0f)
		{
			bVar5 = true;
		}
	}
	Global_6646 = 1;
	SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
	Global_21575 = 1;
	iLocal_14 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bVar1 = 250;
		Function_270(&Local_15);
		if (Global_6621)
		{
			if (iLocal_14 != 4)
			{
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			}
		}
		if ((!IS_ACTOR_VALID(&ScriptParam_0 + 96) && !iLocal_14 != 3) && !iLocal_14 != 4)
		{
			Function_268(&Local_15 + 808, "posse_criminal_dead", 5.0f, ScriptParam_0.f_116, 20.0f, 1, 1);
			iLocal_14 = 3;
			bVar1 = false;
		}
		else if ((!IS_ACTOR_ALIVE(&ScriptParam_0 + 96) && !iLocal_14 != 3) && !iLocal_14 != 4)
		{
			Function_268(&Local_15 + 808, "posse_criminal_dead", 5.0f, ScriptParam_0.f_116, 20.0f, 1, 1);
			iLocal_14 = 3;
			bVar1 = false;
		}
		Function_267(&Local_15);
		if (IS_ACTOR_VALID(&ScriptParam_0 + 96))
		{
			GET_POSITION(&ScriptParam_0 + 96, &Local_15 + 640);
		}
		Global_39922.f_276 = SQUAD_GET_SIZE(&Local_15 + 808);
		switch (iLocal_14)
		{
			case 0x00000000:
				if (GET_CURRENT_GAME_TIME() <= (Local_15.f_700 + 10.0f))
				{
					iLocal_14 = 3;
				}
				if (Function_262(&Local_15 + 8) && Function_262(&Local_15 + 80))
				{
					Local_15.f_700 = GET_CURRENT_GAME_TIME();
					iLocal_14 = 1;
					bVar1 = false;
				}
				Function_259(&Local_15, &ScriptParam_0);
				break;
				break;
			
			case 0x00000001:
				if (Function_221(&Local_15, &ScriptParam_0))
				{
					Local_15.f_700 = GET_CURRENT_GAME_TIME();
					Function_220(1);
					if (bVar4)
					{
						Function_219(0x1000000);
						Function_218();
						*(&Global_39922 + 280) = Function_218();
					}
					PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
					Local_15.f_892 = 0;
					iLocal_14 = 2;
					bVar1 = false;
				}
				else
				{
					if (Local_15.f_892 == 24)
					{
						iLocal_14 = 3;
					}
					bVar1 = 50;
				}
				Function_201(&Local_15);
				if (GET_CURRENT_GAME_TIME() <= (Local_15.f_700 + 10.0f))
				{
					iLocal_14 = 3;
				}
				break;
			
			case 0x00000002:
				uVar8 = Function_199(&Local_15 + 808, &ScriptParam_0 + 96, 1, 0);
				if (IS_ACTOR_VALID(&uVar8))
				{
					GET_POSITION(&uVar8, &Local_15 + 652);
				}
				else
				{
					*(&Local_15 + 652) = Vector(0.0f, 0.0f, 0.0f);
				}
				if ((((!Function_198(&ScriptParam_0 + 96) && !IS_ACTOR_IN_HOGTIE(&ScriptParam_0 + 96)) && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&ScriptParam_0 + 96))) && !IS_ACTOR_RIDING_VEHICLE(&ScriptParam_0 + 96)) && !IS_ACTOR_RIDING(&ScriptParam_0 + 96))
				{
					Function_173(&Local_15, &ScriptParam_0);
					Function_166(&Local_15, &ScriptParam_0);
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_15 + 992))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Local_15 + 992);
				}
				Function_164(&Local_15, &ScriptParam_0);
				Function_162(&Local_15, &ScriptParam_0);
				Function_161(&Local_15);
				Function_156();
				if (Function_152(&Local_15, &ScriptParam_0, 1))
				{
					Local_15.f_892 = 24;
					iLocal_14 = 3;
					bVar1 = false;
				}
				bVar1 = Function_90(bVar1, Function_91(&Local_15, &ScriptParam_0));
				Function_85(&Local_15, &ScriptParam_0);
				Function_74(&Local_15);
				Function_72(&Local_15, &ScriptParam_0);
				Function_71(&Local_15);
				if (Local_15.f_1004)
				{
					iLocal_14 = 3;
				}
				if (Local_15.f_792)
				{
					iLocal_14 = 3;
				}
				bVar2 = true;
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(&Local_15 + 808))
				{
					GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0), &Var6);
					if (VDIST(Var6, *(&Local_15 + 640)) > 250.0f)
					{
						bVar2 = false;
					}
					bVar0++;
				}
				if (bVar2)
				{
					Local_15.f_892 = 24;
					iLocal_14 = 3;
					bVar1 = false;
				}
				bVar9 = false;
				if (Function_70(&Local_15, 1) != 0 && !bVar2)
				{
					if (Local_15.f_580 != 0.0f)
					{
						Local_15.f_580 = (GET_CURRENT_GAME_TIME() + 1,5f);
					}
					else if (GET_CURRENT_GAME_TIME() <= Local_15.f_580)
					{
						bVar9 = true;
					}
				}
				else
				{
					Local_15.f_580 = 0.0f;
				}
				if (bVar9)
				{
					Local_15.f_580 = GET_CURRENT_GAME_TIME();
					if (Function_70(&Local_15, 0) == 0)
					{
						bVar3 = true;
						Local_15.f_784 = 1;
					}
					bVar1 = false;
					iLocal_14 = 3;
				}
				bLocal_275 = false;
				if (IS_ACTOR_VALID(Function_69()))
				{
					iVar10 = GET_LAST_ATTACKER(Function_69());
					if (IS_ACTOR_VALID(&iVar10))
					{
						if (Function_68(&iVar10, &Local_15 + 808, 0))
						{
							bLocal_275 = true;
						}
					}
				}
				break;
			
			case 0x00000003:
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_15 + 992))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Local_15 + 992);
				}
				if (IS_BLIP_VALID(&Local_15 + 600))
				{
					REMOVE_BLIP(&Local_15 + 600);
				}
				bVar1 = Function_91(&Local_15, &ScriptParam_0);
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(&Local_15 + 808))
				{
					if (!Local_15.f_780)
					{
						if ((!Function_67(SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0), 1.0f, 75.0f, 1, 1, 0) || HUD_IS_FADED()) && !IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0)))
						{
							DESTROY_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0));
						}
						else
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0))))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0)));
							}
							RELEASE_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0));
						}
					}
					else
					{
						uVar11 = SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0);
						if (IS_ACTOR_VALID(&uVar11))
						{
							TASK_CLEAR(&uVar11);
							MEMORY_CONSIDER_AS(&uVar11, &Global_54076, 2);
							TASK_WANDER(&uVar11, -1.0f);
							TASK_PRIORITY_SET(&uVar11, 2);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar11)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar11));
							}
							RELEASE_ACTOR(&uVar11);
						}
					}
					bVar0++;
				}
				Function_66(&Local_15 + 808);
				bVar1 = false;
				iLocal_14 = 4;
				break;
			
			case 0x00000004:
				if (bVar3)
				{
					if (bVar4 && !bVar5)
					{
						if (Global_43790 == 3 && Global_43790 == 4)
						{
							Function_47();
						}
					}
				}
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar1 = false;
				break;
			
			default:
				break;
		}
		WAIT(bVar1);
	}
	if (SQUAD_GET_SIZE(&Local_15 + 808) < 0 && !Local_15.f_780)
	{
		Function_41(&Local_15 + 808, 0, 0, 0);
	}
	else if (Local_15.f_780)
	{
		Function_41(&Local_15 + 808, 0, 0, 1);
	}
	if (!Local_15.f_784)
	{
		Function_39();
	}
	Function_38(&Local_15 + 816);
	Function_37(&Local_15 + 816, 0, 0);
	Function_35(&Local_15, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_15 + 992))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Local_15 + 992);
	}
	if (IS_BLIP_VALID(&Local_15 + 600))
	{
		REMOVE_BLIP(&Local_15 + 600);
	}
	if (!bVar4)
	{
		if (bLocal_275)
		{
			if (IS_ACTOR_VALID(Function_69()))
			{
				if (!IS_ACTOR_ALIVE(Function_69()))
				{
					Function_34(2048);
					Global_40060.f_4424 = ScriptParam_0.f_116;
					Function_30(Function_33(Global_39922[Local_15.f_1008]), Function_31(Local_15.f_1008), Local_15.f_1008);
				}
			}
		}
	}
	Function_26(&Local_15 + 8);
	Function_24(0);
	Function_34(1024);
	Global_21542 = 1.0f;
	if (Local_15.f_768 || Local_15.f_776)
	{
		Function_34(2048);
		Global_40060.f_4424 = ScriptParam_0.f_116;
	}
	else if (Local_15.f_780)
	{
	}
	else if (!Function_20(25, 0))
	{
		if (!Function_19(Global_119935, 2097152))
		{
			if (IS_ACTOR_ALIVE(Function_69()))
			{
				Function_14(&Global_54076, 2097152, 2, 0);
			}
		}
	}
	Global_39922.f_276 = 0;
	Function_9(ScriptParam_0.f_116, 0);
	Function_7(ScriptParam_0.f_116, 3);
	Global_21575 = 4294967295;
	Function_5(32768);
	if (((!Local_15.f_768 && !Local_15.f_776) && !Global_6638) && !HUD_IS_FADED())
	{
		PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
	}
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	Function_3(1);
	TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&Global_54076);
	Function_26(&Local_15 + 80);
	if (IS_POPSET_VALID(&Local_15 + 528))
	{
		DESTROY_POPULATION_SET(&Local_15 + 528);
	}
	Function_219(0x1000000);
	Function_218();
	*(&Global_39922 + 280) = Function_218();
	Global_6649 = 1;
	Global_39922.f_308 = 1;
	if (!Function_19(Global_119935, 128))
	{
		Function_1(&Global_54076, 128, 2);
	}
	if (!Function_19(Global_119936, 32768))
	{
		Function_1(Function_69(), 32768, 3);
	}
	SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(1.0f);
	RELEASE_LAYOUT_REF(&Local_15 + 536);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1, int iParam2) //Position: 0x7B2 / 1970
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	Function_2(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(&uParam0, &cVar1);
	DECOR_SET_INT(&uParam0, &cVar1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_2(char* cParam0) //Position: 0x806 / 2054
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

void Function_3(int iParam0) //Position: 0x840 / 2112
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_4())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_4() //Position: 0x880 / 2176
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x8A5 / 2213
{
	Function_6(&Global_43580, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x8B3 / 2227
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0x8D2 / 2258
{
	int iVar0;
	
	(*&Global_39922 + 116)[iParam0] = iParam1;
	if (iParam1 == 3)
	{
		iVar0 = Function_8(iParam0);
		if (iVar0 != 0 || iVar0 != 1)
		{
			(*&Global_39922 + 116)[iVar0] = iParam1;
		}
	}
	return;
}

int Function_8(int iParam0) //Position: 0x907 / 2311
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (iParam0 == 1)
	{
		return 0;
	}
	return 4294967295;
}

void Function_9(int iParam0, bool bParam1) //Position: 0x921 / 2337
{
	int iVar0;
	
	if (&bParam1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], 0))
		{
			iVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	iVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_13() > 3)
	{
		iVar0 *= 2;
	}
	if (0 && !&bParam1)
	{
		Function_11(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_11(iParam0, 0, 0, Function_10(iVar0), 0);
	}
	return;
}

var Function_10(int iParam0) //Position: 0x989 / 2441
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_11(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x9A0 / 2464
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &iParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_12(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_12(bool bParam0) //Position: 0x9F0 / 2544
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_13() //Position: 0xA19 / 2585
{
	return Global_21369.f_248;
}

void Function_14(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA24 / 2596
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_15(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_2(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

bool Function_15(int iParam0, var uParam1, int iParam2) //Position: 0xA99 / 2713
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_17(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_16(uVar0))
		{
			case 0x00000002:
				if (!Function_19(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_16(char* cParam0) //Position: 0xB15 / 2837
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

int Function_17(int iParam0) //Position: 0xBB6 / 2998
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_18(&iVar1, 2147483648);
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

void Function_18(var uParam0, int iParam1) //Position: 0xBF3 / 3059
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_19(var uParam0, int iParam1) //Position: 0xC09 / 3081
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_20(int iParam0, bool bParam1) //Position: 0xC1C / 3100
{
	int iVar0;
	
	iVar0 = Function_22(iParam0);
	if (!Function_21(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_21(int iParam0) //Position: 0xC5A / 3162
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_22(int iParam0) //Position: 0xC71 / 3185
{
	if (!Function_23(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_23(int iParam0) //Position: 0xC8B / 3211
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_24(bool bParam0) //Position: 0xCA1 / 3233
{
	if (Global_6646 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_6646 = 1;
		if (!Global_42250)
		{
			if (IS_FACTION_VALID(Global_40000))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
			}
		}
		Global_21575 = 0;
	}
	else
	{
		Global_6646 = 0;
		Global_6648 = 0;
		Function_25();
		if (IS_FACTION_VALID(Global_40000))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			TERMINATE_SCRIPT(&Global_39922 + 96);
		}
		if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			TERMINATE_SCRIPT(&Global_39922 + 104);
		}
		Global_21575 = 4294967295;
	}
	return;
}

void Function_25() //Position: 0xD30 / 3376
{
	int iVar0;
	
	Global_41176 = Function_31(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

void Function_26(int iParam0) //Position: 0xD7E / 3454
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_27(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_27(struct<2>[] Param0, int iParam1) //Position: 0xDA6 / 3494
{
	if (Function_29(&(Param0[iParam12]), 4))
	{
		if (Function_29(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_28(&(Param0[iParam12]), 1);
			Function_28(&(Param0[iParam12]), 2);
			Function_28(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_28(struct<13> Param0) //Position: 0xEF1 / 3825
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_29(struct<13> Param0) //Position: 0xF0E / 3854
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_30(var uParam0, var uParam1, int iParam2) //Position: 0xF2C / 3884
{
	struct<185> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_184 = 1;
	Var0.f_172 = uParam0;
	Var0.f_176 = uParam1;
	Var0.f_180 = iParam2;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

int Function_31(int iParam0) //Position: 0xF62 / 3938
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_32(int iParam0) //Position: 0xF7A / 3962
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_33(int iParam0) //Position: 0xF8F / 3983
{
	if (iParam0 == Global_46816[0])
	{
		return 1;
	}
	if (iParam0 == Global_46760[0])
	{
		return 2;
	}
	if (iParam0 == Global_46914[0])
	{
		return 3;
	}
	if (iParam0 == Global_46866[0])
	{
		return 4;
	}
	if (iParam0 == Global_46894[1])
	{
		return 5;
	}
	if (iParam0 == Global_46850[0])
	{
		return 6;
	}
	return 0;
}

void Function_34(int iParam0) //Position: 0xFF3 / 4083
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_35(int iParam0, bool bParam1) //Position: 0x1006 / 4102
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (SQUAD_IS_VALID(&iParam0 + 808))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam0 + 536);
		ITERATE_IN_LAYOUT(&uVar0, &iParam0 + 536);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
		if (!&bParam1)
		{
			ITERATE_ON_PARTIAL_NAME(&uVar0, "lawHorse");
		}
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar1 = GET_NUM_ITERATOR_MATCHES(&uVar0);
		iVar4 = (iVar1 - SQUAD_GET_SIZE(&iParam0 + 808));
		if (iVar4 >= 0)
		{
			iVar3 = 1;
		}
		if (iVar3 || bParam1)
		{
			bVar5 = START_OBJECT_ITERATOR(&uVar0);
			while (IS_OBJECT_VALID(&bVar5))
			{
				if (iVar2 <= iVar4)
				{
					bVar6 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&bVar6))
					{
						if (IS_ACTOR_HORSE(&bVar6))
						{
							if (IS_ACTOR_ALIVE(&bVar6))
							{
								if (GET_RIDER(&bVar6) == "")
								{
									iVar7 = GET_TASK_STATUS(&bVar6, 25);
									if ((iVar7 == 1 || 0) || bParam1)
									{
										Function_36(&bVar6, Function_69(), -1.0f, -1.0f, 0, 0);
										RELEASE_ACTOR(&bVar6);
										iVar2++;
									}
								}
							}
							else
							{
								RELEASE_ACTOR(&bVar6);
								iVar2++;
							}
						}
					}
				}
				bVar5 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
		}
		DESTROY_ITERATOR(&uVar0);
	}
	return;
}

void Function_36(bool bParam0, var uParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x111E / 4382
{
	if (IS_ACTOR_VALID(&bParam0) && IS_ACTOR_VALID(&uParam1))
	{
		TASK_FLEE_ACTOR(&bParam0, &uParam1, fParam2, fParam3, &iParam4, &iParam5, 0);
	}
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x114A / 4426
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			SQUAD_LEAVE(&bVar1);
			if (&bParam2)
			{
				if (!Function_67(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&bVar1);
				}
			}
			if (IS_ACTOR_VALID(&bVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&bVar1);
				}
				else
				{
					RELEASE_ACTOR(&bVar1);
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

void Function_38(bool bParam0) //Position: 0x11D3 / 4563
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_39() //Position: 0x1227 / 4647
{
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_40(GET_AMBIENT_LAYOUT());
	Function_40(GET_GC_LAYOUT());
	Function_40(&Global_10996);
	Function_40(&Global_10994);
	Function_40(&Global_43578);
	Function_40(&Global_10998);
	Function_40(&Global_99717);
	return;
}

void Function_40(int iParam0) //Position: 0x1260 / 4704
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
		ITERATE_IN_LAYOUT(&uVar0, &iParam0);
		iVar1 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_ACTOR_VALID(Function_69()))
		{
			while (IS_OBJECT_VALID(&iVar1))
			{
				iVar2 = "";
				if (GET_OBJECT_TYPE(&iVar1) == 15)
				{
					iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
				}
				else if (GET_OBJECT_TYPE(&iVar1) == 24)
				{
					iVar2 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar1));
				}
				if (IS_ACTOR_VALID(&iVar2))
				{
					if (GET_ACTOR_FACTION(&iVar2) != 4 || GET_ACTOR_FACTION(&iVar2) != 6)
					{
						TASK_CLEAR(&iVar2);
						MEMORY_CONSIDER_AS(&iVar2, Function_69(), 2);
						MEMORY_CLEAR_ALL(&iVar2);
					}
				}
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
		}
		DESTROY_ITERATOR(&uVar0);
	}
	return;
}

void Function_41(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1314 / 4884
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) >= 0)
	{
		Function_46(&uParam0);
		Function_45(&uParam0, 0);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&bVar1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bVar1));
				}
				DECOR_SET_BOOL(&bVar1, "CanBeLasso", 1);
				MEMORY_REPORT_POSITION_AUTO(&bVar1, &Global_54076, 0);
				MEMORY_CONSIDER_AS(&bVar1, &Global_54076, 2);
				TASK_CLEAR(&bVar1);
				if (!&bParam3)
				{
					Function_36(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
				}
				else
				{
					TASK_WANDER(&bVar1, -1.0f);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&bVar1))
			{
				SQUAD_LEAVE(&bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bVar1));
				}
				if (Function_44(&bVar1))
				{
					Function_43(&bVar1, 0);
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bVar1)))
					{
						Function_42(GET_PERS_CHAR_FROM_ACTOR(&bVar1));
						DEREFERENCE_ACTOR(&bVar1);
					}
					else
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar1);
					}
				}
				else
				{
					TASK_PRIORITY_SET(&bVar1, 2);
					if (&iParam2 == 1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar1);
					}
					else if (&bParam1)
					{
						DESTROY_ACTOR(&bVar1);
					}
					else
					{
						RELEASE_ACTOR(&bVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

int Function_42(int iParam0) //Position: 0x1482 / 5250
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_43(bool bParam0, int iParam1) //Position: 0x152B / 5419
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	if (iParam1 == 1)
	{
		DECOR_SET_BOOL(&bParam0, "nsharedlaw", 1);
	}
	else
	{
		DECOR_REMOVE(&bParam0, "nsharedlaw");
	}
	return;
}

bool Function_44(bool bParam0) //Position: 0x156C / 5484
{
	return DECOR_CHECK_EXIST(&bParam0, "nsharedlaw");
}

void Function_45(var uParam0, int iParam1) //Position: 0x1584 / 5508
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				SET_ACTOR_VISION_XRAY(&uVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_46(var uParam0) //Position: 0x15D4 / 5588
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_47() //Position: 0x160C / 5644
{
	int iVar0;
	int iVar1;
	
	Function_63(StackVal, Global_41176);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_40060 + 68[iVar0181][35])[(*&Global_41176 + 4)[iVar0]] = StackVal;
			iVar1 = Function_62(Global_41252[iVar011]);
			if (iVar1 != 4294967295)
			{
				Function_48(iVar1, (*&Global_41176 + 4)[iVar0], 0);
			}
		}
		iVar0++;
	}
	Function_25();
	return;
}

int Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x167F / 5759
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_61(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_60(iParam0);
	if (&bParam2)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_49(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x191B / 6427
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_59(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_58(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_58(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_56(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_54(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_51(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_50(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_50() //Position: 0x1F59 / 8025
{
	int iVar0;
	
	return &iVar0;
}

var Function_51(int iParam0) //Position: 0x1F62 / 8034
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_52(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1F73 / 8051
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_53(char* cParam0) //Position: 0x206A / 8298
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_54(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2085 / 8325
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_90(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_55(Function_90(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_55(int iParam0, int iParam1) //Position: 0x20EC / 8428
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_56(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x20FE / 8446
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
	if (((Function_57(iParam0) != 19 || Function_57(iParam0) != 17) || Function_57(iParam0) != 10) || Function_57(iParam0) != 9)
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

int Function_57(int iParam0) //Position: 0x2232 / 8754
{
	return Global_55480[iParam016].f_96;
}

float Function_58(int iParam0) //Position: 0x2241 / 8769
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_59(int iParam0) //Position: 0x227A / 8826
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_60(int iParam0) //Position: 0x22B7 / 8887
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

int Function_61(int iParam0, float fParam1, bool bParam2) //Position: 0x2451 / 9297
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

int Function_62(int iParam0) //Position: 0x2695 / 9877
{
	switch (iParam0)
	{
		case 0x00000001:
			return 226;
			break;
		
		case 0x00000002:
			return 227;
			break;
		
		case 0x00000003:
			return 228;
			break;
		
		case 0x00000004:
			return 229;
			break;
		
		case 0x00000005:
			return 230;
			break;
		
		case 0x00000006:
			return 231;
			break;
		
		case 0x00000007:
			return 232;
			break;
		
		case 0x00000008:
			return 233;
			break;
		
		case 0x00000009:
			return 234;
			break;
		
		case 0x0000000A:
			return 235;
			break;
		
		case 0x0000000B:
			return 236;
			break;
		
		case 0x0000000C:
			return 237;
			break;
		
		case 0x0000000D:
			return 238;
			break;
		
		case 0x0000000E:
			return 239;
			break;
		
		case 0x0000000F:
			return 240;
			break;
		
		case 0x00000010:
		case 0x00000011:
			return 241;
			break;
		
		case 0x00000013:
		case 0x00000014:
			return 242;
			break;
		
		case 0x00000015:
			return 243;
			break;
		
		case 0x00000016:
			return 244;
			break;
		
		case 0x00000019:
			return 245;
			break;
		
		case 0x0000001B:
			return 246;
			break;
		
		case 0x0000001C:
			return 247;
			break;
		
		case 0x0000001E:
			return 248;
			break;
		
		case 0x00000020:
			return 249;
			break;
		
		case 0x00000023:
			return 250;
			break;
		
		default:
			LOG_ERROR("Trying to get a stat for a crime we dont' keep stats for");
			break;
	}
	return 4294967295;
}

void Function_63(int iParam0, bool bParam1) //Position: 0x281C / 10268
{
	if (!Function_32(iParam0))
	{
		return;
	}
	Global_40060[iParam0] = bParam1;
	Function_65((*&Global_40060 + 4428)[iParam0], TO_FLOAT(bParam1), 0);
	Function_65(222, TO_FLOAT((Function_64(223) + Function_64(224))), 0);
	return;
}

int Function_64(int iParam0) //Position: 0x285D / 10333
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_65(int iParam0, float fParam1, bool bParam2) //Position: 0x289E / 10398
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > fParam1)
	{
		Function_61(iParam0, fParam1, 0);
	}
	Global_54086[iParam0] = fParam1;
	Function_60(iParam0);
	if (&bParam2)
	{
		Function_49(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_66(bool bParam0) //Position: 0x2B0B / 11019
{
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	SQUAD_MAKE_EMPTY(&bParam0);
	return;
}

bool Function_67(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2B22 / 11042
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

bool Function_68(int iParam0, int iParam1, bool bParam2) //Position: 0x2B42 / 11074
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

var Function_69() //Position: 0x2B8A / 11146
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_70(int iParam0, bool bParam1) //Position: 0x2B9F / 11167
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0 + 808))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&iParam0 + 808) < 0)
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(&iParam0 + 808))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 808, bVar1);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (!IS_ACTOR_HOGTIED(&uVar2) || !bParam1)
			{
				if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar2), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam0 + 808)))
				{
					iVar0++;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_71(int iParam0) //Position: 0x2C27 / 11303
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 808))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 808, bVar0);
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (GET_NUM_WEAPONS_IN_INVENTORY(&bVar1) == 0)
			{
				if (IS_ACTOR_CRIPPLED(&bVar1, 5) && !IS_ACTOR_HOGTIED(&bVar1))
				{
					if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&bVar1), "CrippledLawFleeTime"))
					{
						if (GET_CURRENT_GAME_TIME() <= DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(&bVar1), "CrippledLawFleeTime"))
						{
							MEMORY_CLEAR_ALL(&bVar1);
							SET_ACTOR_VISION_XRAY(&bVar1, 0);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar1)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bVar1));
							}
							MEMORY_REPORT_POSITION_AUTO(&bVar1, &Global_54076, 0);
							MEMORY_CONSIDER_AS(&bVar1, &Global_54076, 2);
							TASK_CLEAR(&bVar1);
							SQUAD_LEAVE(&bVar1);
							if (Function_44(&bVar1))
							{
								Function_43(&bVar1, 0);
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bVar1)))
								{
									Function_42(GET_PERS_CHAR_FROM_ACTOR(&bVar1));
									Function_36(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
									DEREFERENCE_ACTOR(&bVar1);
								}
								else
								{
									Function_36(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
									RELEASE_ACTOR(&bVar1);
								}
							}
							else
							{
								Function_36(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
								TASK_PRIORITY_SET(&bVar1, true);
								RELEASE_ACTOR(&bVar1);
							}
						}
					}
					else
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(&bVar1), "CrippledLawFleeTime", (GET_CURRENT_GAME_TIME() + 8.0f));
					}
				}
			}
			else if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&bVar1), "CrippledLawFleeTime"))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&bVar1), "CrippledLawFleeTime");
			}
		}
		bVar0++;
	}
	return;
}

void Function_72(struct<893> Param0) //Position: 0x2DE9 / 11753
{
	int iVar0;
	var uVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	bool bVar8;
	
	if (!DECOR_CHECK_EXIST(&Param0 + 808, "nextspeech") || !DECOR_CHECK_EXIST(&Param0 + 808, "nextspeechtarget"))
	{
		if (Param0.f_676 + 15.0f) > GET_CURRENT_GAME_TIME()
		{
			iVar0 = RAND_INT_RANGE(0, 10000);
			if (iVar0 <= 3333)
			{
				Function_73(&Param0 + 808, 109, &iParam1 + 96);
			}
			else if (iVar0 <= 6666)
			{
				Function_73(&Param0 + 808, 58, &iParam1 + 96);
			}
			else
			{
				Function_73(&Param0 + 808, 105, &iParam1 + 96);
			}
		}
		return;
	}
	uVar1 = DECOR_GET_INT(&Param0 + 808, "nextspeechtarget");
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return;
	}
	GET_POSITION(&uVar1, &Var5);
	bVar2 = false;
	while (bVar2 <= SQUAD_GET_SIZE(&Param0 + 808))
	{
		GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar2), &Var3);
		if (VDIST(Var3, Var5) > 20.0f)
		{
			bVar7 = DECOR_GET_INT(&Param0 + 808, "nextspeech");
			if (Global_43790 == 3)
			{
				bVar8 = GET_ACTOR_ENUM(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar2));
				if ((bVar8 != 460 || bVar8 != 428) || bVar8 != 429)
				{
					if (RAND_INT_RANGE(0, true) == 0)
					{
						bVar7 = 110;
					}
				}
				else if ((((bVar8 != 184 || bVar8 != 185) || bVar8 != 186) || bVar8 != 187) || bVar8 != 188)
				{
					if (RAND_INT_RANGE(0, 3) == 0)
					{
						bVar7 = 110;
					}
				}
			}
			if (((Param0.f_892 > 15 && !Param0.f_796) && !Param0.f_780) && !Param0.f_768)
			{
				SAY_SINGLE_LINE_CONTEXT(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar2), bVar7, &uVar1, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			}
			DECOR_REMOVE(&Param0 + 808, "nextspeechtarget");
			DECOR_REMOVE(&Param0 + 808, "nextspeech");
			Param0.f_676 = GET_CURRENT_GAME_TIME();
		}
		bVar2++;
	}
	return;
}

bool Function_73(var uParam0, bool bParam1, int iParam2) //Position: 0x300B / 12299
{
	DECOR_SET_INT(&uParam0, "nextspeech", bParam1);
	DECOR_SET_INT(&uParam0, "nextspeechtarget", &iParam2);
	return 1;
}

void Function_74(int iParam0) //Position: 0x3045 / 12357
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 808))
	{
		Function_80(&iParam0, SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 808, bVar0));
		bVar0++;
	}
	Function_75(&iParam0);
	return;
}

void Function_75(struct<1025> Param0) //Position: 0x307E / 12414
{
	struct<9> Var0;
	
	if (Global_6629)
	{
		if (!IS_OBJECT_VALID(&Param0 + 1016) || GET_CURRENT_GAME_TIME() <= Param0.f_1024)
		{
			(&Param0 + 1016) = Function_77(&Global_54076, 4);
			Param0.f_1024 = (GET_CURRENT_GAME_TIME() + 3.0f);
		}
	}
	else
	{
		(&Param0 + 1016) = "";
		Param0.f_1024 = GET_CURRENT_GAME_TIME();
	}
	if (!IS_BLIP_VALID(&Param0 + 600))
	{
		if ((Global_6629 && Function_76()) && IS_OBJECT_VALID(&Param0 + 1016))
		{
			GET_OBJECT_POSITION(&Param0 + 1016, &Param0 + 608);
			*(&Param0 + 600) = ADD_BLIP_FOR_COORD(&Param0 + 608, 440, 0, 2, 0);
		}
		else
		{
			*(&Param0 + 600) = ADD_BLIP_FOR_COORD(&Param0 + 652, 440, 0, 2, 0);
		}
	}
	if ((Global_6629 && Function_76()) && IS_OBJECT_VALID(&Param0 + 1016))
	{
		GET_OBJECT_POSITION(&Param0 + 1016, &Param0 + 608);
		SET_BLIP_POS(&Param0 + 600, &Param0 + 608);
		GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(&Param0 + 1016), &vVar0);
		SET_BLIP_SCALE(&Param0 + 600, ((vVar0.x + vVar0.z) / 2.0f));
	}
	else
	{
		SET_BLIP_POS(&Param0 + 600, &Param0 + 652);
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 816) >= 0)
		{
			SET_BLIP_SCALE(&Param0 + 600, 225.0f);
		}
		else
		{
			SET_BLIP_SCALE(&Param0 + 600, 100.0f);
		}
	}
	if (Global_6648)
	{
		SET_BLIP_COLOR(&Param0 + 600, 0,1f, 0,1f, 0,1f, 0,5f);
	}
	else
	{
		SET_BLIP_COLOR(&Param0 + 600, 0,64f, 0,22f, 0,26f, 0,5f);
	}
	return;
}

int Function_76() //Position: 0x3214 / 12820
{
	if (StackVal != 5 || Global_43789 != Global_46894[3])
	{
		return 0;
	}
	return 1;
}

var Function_77(int iParam0, int iParam1) //Position: 0x3237 / 12855
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	
	bVar0 = 99999.0f;
	iVar5 = "";
	iVar6 = "";
	uVar7 = "";
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return "";
	}
	GET_OBJECT_POSITION(&iParam0, &Var1);
	iVar8 = CREATE_OBJECT_ITERATOR(&Global_43578);
	iVar9 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&iVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&iVar8, 9);
	iVar6 = START_OBJECT_ITERATOR(&iVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_79(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		iVar6 = OBJECT_ITERATOR_NEXT(&iVar8);
	}
	Function_78(&iVar8);
	ITERATE_IN_LAYOUT(&iVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&iVar8, 10);
	iVar6 = START_OBJECT_ITERATOR(&iVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_79(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		Function_78(&iVar9);
		ITERATE_IN_LAYOUT(&iVar9, &Global_46715);
		ITERATE_IN_VOLUME_SET(&iVar9, GET_VOLUME_FROM_OBJECT(&iVar6));
		uVar7 = START_OBJECT_ITERATOR(&iVar9);
		while (IS_OBJECT_VALID(&uVar7))
		{
			if (DECOR_CHECK_EXIST(&uVar7, "locflag"))
			{
				if (Function_79(GET_VOLUME_FROM_OBJECT(&uVar7), &iParam1))
				{
					GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&uVar7), &Var3);
					if (VDIST(Var1, Var3) > bVar0)
					{
						iVar5 = &uVar7;
						bVar0 = VDIST(Var1, Var3);
					}
				}
			}
			uVar7 = OBJECT_ITERATOR_NEXT(&iVar9);
		}
		iVar6 = OBJECT_ITERATOR_NEXT(&iVar8);
	}
	DESTROY_ITERATOR(&iVar8);
	DESTROY_ITERATOR(&iVar9);
	return &iVar5;
}

int Function_78(int iParam0) //Position: 0x341F / 13343
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_50());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_50());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_79(float fParam0, int iParam1) //Position: 0x3455 / 13397
{
	if (!DECOR_CHECK_EXIST(&fParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(&fParam0, "locflag") && iParam1) < 0;
}

void Function_80(struct<573> Param0) //Position: 0x3486 / 13446
{
	var uVar0;
	
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	uVar0 = GET_BLIP_ON_ACTOR(&iParam1);
	if (!IS_BLIP_VALID(&uVar0))
	{
		if (IS_ACTOR_ALIVE(&iParam1))
		{
			if (!IS_ACTOR_HOGTIED(&iParam1))
			{
				if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam1), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 808)))
				{
					Function_83(&iParam1);
					if (GET_NUM_WEAPONS_IN_INVENTORY(&iParam1) == 0)
					{
						GIVE_WEAPON_TO_ACTOR(&iParam1, 4, 0.0f, 0, 0);
						ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iParam1, 0, 0);
						DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam1), "Hogtie_DontGiveWeapons", 1);
					}
				}
			}
		}
	}
	else
	{
		if (!IS_ACTOR_ALIVE(&iParam1))
		{
			REMOVE_BLIP(&uVar0);
			return;
		}
		if (IS_ACTOR_HOGTIED(&iParam1))
		{
			REMOVE_BLIP(&uVar0);
			return;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam1), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 808)))
		{
			REMOVE_BLIP(&uVar0);
			return;
		}
		if (Global_6648)
		{
			if (GET_CURRENT_GAME_TIME() < (Param0.f_572 + (Function_81(&Param0) / 1,5f)))
			{
				SET_BLIP_BLINK(&uVar0, 1, 1, -1.0f);
			}
			else
			{
				SET_BLIP_BLINK(&uVar0, 1, 0, -1.0f);
			}
		}
		else
		{
			SET_BLIP_BLINK(&uVar0, 0, 0, 5f);
		}
	}
	return;
}

float Function_81(struct<873> Param0) //Position: 0x35A0 / 13728
{
	bool bVar0;
	int iVar1;
	
	if (Function_70(&Param0, 1) == 0)
	{
		return 10.0f;
	}
	if (Param0.f_872 && !Function_82(0))
	{
		return 20.0f;
	}
	bVar0 = Global_40060[StackVal];
	bVar0 = (bVar0 - 70);
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	iVar1 = (22.0f + (TO_FLOAT(bVar0) / 13,043f));
	if (iVar1 > 22.0f)
	{
		iVar1 = 22.0f;
	}
	if (iVar1 < 45.0f)
	{
		iVar1 = 45.0f;
	}
	return iVar1;
	return 45.0f;
}

bool Function_82(int iParam0) //Position: 0x362D / 13869
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_83(var uParam0) //Position: 0x363C / 13884
{
	Function_84(&uParam0);
	if (IS_ACTOR_VALID(&uParam0) && IS_ACTOR_ALIVE(&uParam0))
	{
		ADD_BLIP_FOR_ACTOR(&uParam0, 345, 0, 2, 0);
		if (GET_THIS_SCRIPT_ID() == &Global_40044 + 48)
		{
			SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(&uParam0), 1.0f, 1.0f, 1.0f, 0,25f);
		}
		HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uParam0, 415);
	}
	return;
}

void Function_84(var uParam0) //Position: 0x368B / 13963
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

var Function_85(struct<845> Param0) //Position: 0x36BE / 14014
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	float fVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	bVar7 = false;
	bVar8 = false;
	if (GET_CURRENT_GAME_TIME() <= Param0.f_696)
	{
		Param0.f_696 = (GET_CURRENT_GAME_TIME() + 5.0f);
		bVar7 = true;
	}
	if (SQUAD_GET_SIZE(&Param0 + 808) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 808))
		{
			bVar6 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar1);
			if (IS_ACTOR_VALID(&bVar6))
			{
				GET_POSITION(&bVar6, &Var2);
				fVar4 = Function_89(&Param0, !GET_MOUNT(&bVar6) != "");
				bVar5 = VDIST(Var2, (&Param0 + 640));
				if (!bVar8)
				{
					if (!Function_44(&bVar6))
					{
						if (Function_88(&bVar6, bVar5, fVar4, bVar7))
						{
							Param0.f_844 = (Param0.f_844 - 1);
							iVar0 = 1;
							bVar8 = true;
						}
					}
				}
				Function_86(&Param0, &bVar6, bVar5, fVar4, &iParam1 + 96);
			}
			bVar1++;
		}
	}
	if (SQUAD_GET_SIZE(&Param0 + 816) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 816))
		{
			if (!bVar8)
			{
				bVar6 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 816, bVar1);
				GET_POSITION(&bVar6, &Var2);
				fVar4 = Function_89(&Param0, 0);
				bVar5 = VDIST(Var2, *(&Param0 + 640));
				if (Function_88(&bVar6, bVar5, fVar4, bVar7))
				{
					bVar8 = true;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_86(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4) //Position: 0x380B / 14347
{
	float fVar0;
	struct<2> Var1;
	
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		return;
	}
	if (fParam2 < fParam3)
	{
		return;
	}
	if (!Function_87(&iParam0))
	{
		fVar0 = 40.0f;
	}
	else
	{
		fVar0 = 70.0f;
	}
	if ((IS_ACTOR_VALID(GET_MOUNT(&uParam1)) && !IS_ACTOR_VALID(GET_MOUNT(&uParam4))) && !IS_ACTOR_VALID(GET_VEHICLE(&uParam4)))
	{
		if (fParam2 > fVar0 || GET_TASK_STATUS(&uParam1, 61) != 4)
		{
			Function_36(GET_MOUNT(&uParam1), &uParam1, -1.0f, -1.0f, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(GET_MOUNT(&uParam1), 4);
			TASK_DISMOUNT(&uParam1, 1);
			MEMORY_PREFER_WALKING(&uParam1, 1);
		}
	}
	else if (!IS_ACTOR_VALID(GET_MOUNT(&uParam1)) && (IS_ACTOR_VALID(GET_MOUNT(&uParam4)) || IS_ACTOR_VALID(GET_VEHICLE(&uParam4))))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam4)))
		{
			GET_ACTOR_VELOCITY(GET_MOUNT(&uParam4), &Var1);
		}
		else
		{
			GET_ACTOR_VELOCITY(GET_VEHICLE(&uParam4), &Var1);
		}
		if (VMAG(Var1) < 0,25f || fParam2 < 10.0f)
		{
			if (GET_TASK_STATUS(&uParam1, 12) == 1)
			{
				TASK_CLEAR(&uParam1);
			}
			MEMORY_PREFER_RIDING(&uParam1, true);
		}
	}
}

bool Function_87(struct<641> Param0) //Position: 0x3920 / 14624
{
	if (Global_43789 == Global_46866[1])
	{
		if (StackVal && (StackVal && (Param0.f_640 < -1744,93f && Param0.f_640 > -1673,62f) > 4261,5f) < 4181,3f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_88(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x396F / 14703
{
	struct<2> Var0;
	
	if (!IS_ACTOR_ALIVE(&bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (bParam1 < fParam2)
		{
			if (!Function_67(&bParam0, 1.0f, (fParam2 + 10.0f), 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
				{
					Function_36(GET_MOUNT(&bParam0), &Global_54076, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(&bParam0));
				}
				if (IS_ACTOR_VALID(&bParam0))
				{
					SQUAD_LEAVE(&bParam0);
					TASK_CLEAR(&bParam0);
					MEMORY_CONSIDER_AS(&bParam0, &Global_54076, 2);
					Function_36(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bParam0)))
					{
						Function_42(GET_PERS_CHAR_FROM_ACTOR(&bParam0));
						DEREFERENCE_ACTOR(&bParam0);
					}
					else
					{
						RELEASE_ACTOR(&bParam0);
					}
				}
				return 1;
			}
		}
	}
	if (bParam1 < (fParam2 * 0,8f))
	{
		GET_ACTOR_VELOCITY(&bParam0, &Var0);
		if (!DECOR_CHECK_EXIST(&bParam0, "nstuckTime"))
		{
			if (VMAG(Var0) >= 0,25f)
			{
				if (!IS_ACTOR_HOGTIED(&bParam0))
				{
					DECOR_SET_FLOAT(&bParam0, "nstuckTime", GET_CURRENT_GAME_TIME());
					return 0;
				}
			}
		}
		if (VMAG(Var0) < 0,25f)
		{
			DECOR_REMOVE(&bParam0, "nstuckTime");
			return 0;
		}
		if (DECOR_GET_FLOAT(&bParam0, "nstuckTime") + 10.0f) > GET_CURRENT_GAME_TIME()
		{
			if (!Function_67(&bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
				{
					Function_36(GET_MOUNT(&bParam0), &Global_54076, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(&bParam0));
				}
				if (IS_ACTOR_VALID(&bParam0))
				{
					SQUAD_LEAVE(&bParam0);
					TASK_CLEAR(&bParam0);
					MEMORY_CONSIDER_AS(&bParam0, &Global_54076, 2);
					Function_36(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bParam0)))
					{
						Function_42(GET_PERS_CHAR_FROM_ACTOR(&bParam0));
						DEREFERENCE_ACTOR(&bParam0);
					}
					else
					{
						RELEASE_ACTOR(&bParam0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

var Function_89(int iParam0, bool bParam1) //Position: 0x3B9C / 15260
{
	if (SQUAD_IS_VALID(&iParam0 + 816))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iParam0 + 816) >= 0)
		{
			return 225.0f;
		}
	}
	if (Global_6629)
	{
		if (Global_43789 != Global_46760[4])
		{
			if (!bParam1)
			{
				return 110.0f;
			}
			return 185.0f;
		}
		return 225.0f;
	}
	return 225.0f;
}

int Function_90(int iParam0, bool bParam1) //Position: 0x3BFB / 15355
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_91(struct<1005> Param0) //Position: 0x3C0D / 15373
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	var uVar12;
	float fVar13;
	int iVar14;
	bool bVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	float fVar22;
	struct<2> Var23;
	
	if ((GET_CURRENT_GAME_TIME() - Param0.f_572) < 15.0f)
	{
		VSCALE(&Param0 + 736, 0,99f);
	}
	*(&Param0 + 748) = *(&Param0 + 736);
	VSCALE(&Param0 + 748, (GET_CURRENT_GAME_TIME() - Param0.f_572));
	*(&Param0 + 748) = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 724), *(&Param0 + 748), StackVal);
	Function_151(&Param0 + 748, 10.0f, &Param0 + 748, 10);
	switch (Param0.f_892)
	{
		case 0x00000000:
			Function_150("LAW_AI_STATE: INIT", 11);
			iVar0 = (Function_70(&Param0, 1) / 2);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_149(&Param0 + 808);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 2, iVar0);
			TASK_GO_TO_COORD_NONSTOP(0, &Param0 + 748, 3, 10.0f);
			*(&Param0 + 896) = SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 2, 4294967295);
			TASK_GO_NEAR_COORD(0, &Param0 + 712, 10.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_148(&Param0 + 808, 1);
			Param0.f_892 = 1;
		
		case 0x00000001:
			Function_147(&Param0, &Param1, 0);
			if (!Function_87(&Param0))
			{
				if (Function_146(Param1.f_104, &Param1 + 96, 1))
				{
					Param0.f_892 = 4;
					return 0;
				}
				if (Function_144(&Param0 + 808, &Param1 + 96, 20.0f, 1))
				{
					Param0.f_892 = 4;
					return 0;
				}
				if (Function_144(&Param0 + 816, &Param1 + 96, 20.0f, 1))
				{
					Param0.f_892 = 4;
					return 0;
				}
				Param0.f_892 = 6;
				return 0;
			}
			Param0.f_892 = 6;
			return 0;
			break;
		
		case 0x00000004:
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_149(&Param0 + 808);
			Function_150("LAW_AI_STATE: ARREST - SHOOT", 11);
			if (!Function_87(&Param0) && Global_21542 >= 0,2f)
			{
				SQUAD_GOAL_ADD_COMBAT(&Param0 + 808, 2, 4294967295, 0);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 808, 1, &Param0 + 632, 3, 0);
				Function_148(&Param0 + 808, 1);
				Param0.f_628 = 0;
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 1, 4294967295);
				TASK_KILL_CHAR(false, &Param1 + 96);
				if (!Function_87(&Param0))
				{
					Function_148(&Param0 + 808, 0);
				}
				else
				{
					Function_148(&Param0 + 808, 1);
				}
				Param0.f_628 = 1;
				Param0.f_708 = GET_CURRENT_GAME_TIME();
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_149(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 816, 1, &Param0 + 632, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			if (&Param0 + 760 > 0.0f)
			{
				if (Param0 != 0 || Param0 != 1)
				{
					Function_147(&Param0, &Param1, 1);
				}
			}
			Param0.f_892 = 5;
		
		case 0x00000005:
			if (Function_141(&Param0))
			{
				return 0;
			}
			if (!StackVal && !Global_43789 != Global_46866[1])
			{
				if ((Param0.f_788 && (Param0.f_592 + 5.0f) > GET_CURRENT_GAME_TIME()) && !Param0.f_796)
				{
					Param0.f_892 = 13;
					return 0;
				}
			}
			bVar15 = false;
			if (SQUAD_IS_VALID(&Param0 + 816))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 816) >= 0)
				{
					bVar15 = true;
				}
			}
			if (!bVar15)
			{
				if (!Function_146(Param1.f_104, &Param1 + 96, 1))
				{
					if (!Function_140(&Param0, 5.0f))
					{
						if (!Function_138(StackVal, &Param0 + 808, *(&Param0 + 640), 20.0f))
						{
							if (!Param0.f_796 && !Function_87(&Param0))
							{
								Param0.f_892 = 6;
								return 0;
							}
						}
						if (Global_21542 < 0,2f)
						{
							if (!Param0.f_796 && !Param0.f_628)
							{
								Param0.f_892 = 4;
								return 0;
							}
						}
					}
				}
				if (Param0.f_628)
				{
					if (!Param0.f_796)
					{
						if (GET_CURRENT_GAME_TIME() <= (Param0.f_708 + 10.0f))
						{
							if (StackVal && !Function_138((StackVal && Function_138(Function_140(&Param0, 10.0f), &Param0 + 808, *(&Param0 + 640), 15.0f)), &Param0 + 808, *(&Param0 + 640), 5.0f))
							{
								Param0.f_892 = 4;
								return 0;
							}
						}
					}
				}
			}
			if (SQUAD_IS_VALID(&Param0 + 808))
			{
				if (!Function_137(&Param0 + 808, &Param1 + 96, 0))
				{
					if (!Param0.f_796 && !Function_87(&Param0))
					{
						Param0.f_892 = 6;
						return 0;
					}
				}
			}
			if (Param0.f_704 != 0.0f)
			{
				if (Function_144(&Param0 + 808, Function_69(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_149(&Param0 + 808);
			Function_150("LAW_AI_STATE: GIVE CHASE", 11);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 1, 4294967295);
			TASK_GO_NEAR_ACTOR(0, &Param1 + 96, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_149(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 816, 1, &Param0 + 632, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_148(&Param0 + 808, 1);
			Param0.f_892 = 7;
		
		case 0x00000007:
			if (Function_141(&Param0))
			{
				return 0;
			}
			*(&Param0 + 724) = *(&Param0 + 640);
			*(&Param0 + 748) = *(&Param0 + 724);
			GET_ACTOR_VELOCITY(&Param1 + 96, &Param0 + 736);
			bVar15 = false;
			if (SQUAD_IS_VALID(&Param0 + 816))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 816) >= 0)
				{
					bVar15 = true;
				}
			}
			if (!Function_87(&Param0))
			{
				if (Function_138(StackVal, &Param0 + 808, *(&Param0 + 640), 20.0f))
				{
					if (!Param0.f_796)
					{
						Param0.f_892 = 4;
						return 0;
					}
				}
			}
			if (Function_138(StackVal, &Param0 + 808, *(&Param0 + 640), 80.0f))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (!bVar15)
			{
				if (Function_146(Param1.f_104, &Param1 + 96, 1))
				{
					if (!Param0.f_796)
					{
						Param0.f_892 = 4;
						return 0;
					}
				}
				if (!Function_140(&Param0, 20.0f) && !Global_43789 != Global_46866[1])
				{
					if (!Param0.f_796)
					{
						Param0.f_892 = 8;
						return 0;
					}
				}
			}
			if (SQUAD_IS_VALID(&Param0 + 808))
			{
				if (Function_137(&Param0 + 808, &Param1 + 96, 0))
				{
					if (!Param0.f_796)
					{
						Param0.f_892 = 4;
						return 0;
					}
				}
			}
			if (Param0.f_704 != 0.0f)
			{
				if (Function_144(&Param0 + 808, Function_69(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_136(&Param0))
			{
				Param0.f_892 = 4;
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_150("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_149(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 920))
			{
				*(&Param0 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 536, Function_50(), *(&Param0 + 748), Vector(0.0f, 0.0f, 0.0f));
			}
			else
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
			TASK_SEARCH_FOR_OBJECT(0, &Param1 + 96, 0, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_149(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_148(&Param0 + 808, 1);
			Function_135(&Param0, 0);
			Param0.f_892 = 9;
		
		case 0x00000009:
			if (Function_141(&Param0))
			{
				return 0;
			}
			iVar18 = Function_132(&Param1 + 96, 3);
			if (!&Param0 + 560 != &iVar18 && IS_CRIME_VALID(&iVar18))
			{
				if (IS_CRIME_VALID(&iVar18))
				{
					*(&Param0 + 560) = &iVar18;
					GET_CRIME_POSITION(&Param0 + 560, &Param0 + 712);
					if (GET_CRIME_END_TIMESTAMP(&Param0 + 560) < Param0.f_664)
					{
						Param0.f_664 = GET_CRIME_END_TIMESTAMP(&Param0 + 560);
					}
				}
			}
			if (IS_OBJECT_VALID(&Param0 + 920))
			{
				if (Function_131(&Param0 + 816) >= 0)
				{
					SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 640));
				}
				else
				{
					SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
				}
			}
			if (Function_140(&Param0, 0x3f800000))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (!Function_140(&Param0, 20.0f) && !Global_6629)
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 10;
					return 0;
				}
			}
			break;
		
		case 0x0000000A:
			Function_150("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_149(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 920))
			{
				*(&Param0 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 536, Function_50(), *(&Param0 + 748), Vector(0.0f, 0.0f, 0.0f));
			}
			else
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Param0 + 920, 30.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_149(&Param0 + 816);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Param0 + 920, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_148(&Param0 + 808, 1);
			Param0.f_892 = 11;
		
		case 0x0000000B:
			if (Function_141(&Param0))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(&Param0 + 920))
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			if (Function_140(&Param0, 0x3f800000))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (Function_140(&Param0, 15.0f))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 8;
					return 0;
				}
			}
			break;
		
		case 0x0000000D:
			Function_150("LAW_AI_STATE: SURROUND", 11);
			if (!Function_73(&Param0 + 808, 95, &Param1 + 96))
			{
				Function_268(&Param0 + 808, "law_surround", 5.0f, Param1.f_116, 30.0f, 0, 0);
			}
			Function_135(&Param0, 0);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_149(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 928))
			{
				*(&Param0 + 928) = Function_77(&Param1 + 96, 256);
			}
			if (!Function_130(&Param0))
			{
				if (IS_OBJECT_VALID(&Param0 + 928) && GET_OBJECT_TYPE(&Param0 + 928) != 9)
				{
					GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(&Param0 + 928), &vVar3);
					GET_OBJECT_POSITION(&Param0 + 928, &Var5);
					fVar13 = (5.0f + (Function_129(vVar3.x, vVar3.z) / 2.0f));
					uVar17 = GET_VOLUME_FROM_OBJECT(&Param0 + 928);
				}
				else if (IS_OBJECT_VALID(&Param0 + 928) && GET_OBJECT_TYPE(&Param0 + 928) != 10)
				{
					uVar16 = CREATE_OBJECT_ITERATOR(&Global_39918);
					ITERATE_IN_VOLUME_SET(&uVar16, &Param0 + 928);
					uVar10 = START_OBJECT_ITERATOR(&uVar16);
					uVar17 = GET_VOLUME_FROM_OBJECT(&uVar10);
					fVar13 = 0.0f;
					while (IS_OBJECT_VALID(&uVar10))
					{
						GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(&uVar10), &vVar3);
						fVar13 = (fVar13 + Function_129((5.0f + (Function_129(vVar3.x, vVar3.z) / 2.0f)), 20.0f));
						uVar10 = OBJECT_ITERATOR_NEXT(&uVar16);
					}
					DESTROY_ITERATOR(&uVar16);
				}
				else
				{
					Param0.f_892 = 4;
					return 0;
				}
				GET_OBJECT_POSITION(&Param0 + 928, &Var5);
				uVar9 = Function_126(&Param0 + 536, 2, fVar13);
				*(&Param0 + 904) = SQUAD_GOAL_ADD_COMBAT(&Param0 + 808, 2, 2, 1);
				bVar19 = false;
				if (IS_OBJECT_VALID(&Param0 + 928))
				{
					if (IS_VOLUME_VALID(GET_VOLUME_FROM_OBJECT(&Param0 + 928)))
					{
						bVar19 = true;
					}
				}
				if (bVar19)
				{
					uVar12 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 808, 1, GET_VOLUME_FROM_OBJECT(&Param0 + 928), 4, 0);
				}
				else
				{
					uVar12 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 808, 1, &uVar17, 4, 0);
				}
				SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(&Param0 + 808, &uVar12, &Param0 + 904);
				bVar2 = false;
				while (bVar2 <= GET_NUM_FORMATION_LOCATIONS(&uVar9))
				{
					GET_FORMATION_LOCATION(&uVar9, bVar2, &Var7);
					Var7 = Vector(StackVal, StackVal, StackVal) + Vector(Var5, Var7, StackVal);
					iVar14 = Function_124(StackVal, StackVal, Var7, Var5);
					Function_151(&Var7, 15.0f, &vVar3, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, (5 + bVar2), 1, 1);
					TASK_GO_TO_COORD_AND_STAY(0, &vVar3, 4, iVar14);
					bVar2++;
				}
				Function_45(&Param0 + 808, 1);
			}
			else
			{
				Function_150("LAW_AI_STATE: SURROUND (RIVERBOAT)", 11);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 808, 0, &Param0 + 632, 3, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
				TASK_KILL_CHAR(false, &Param1 + 96);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			}
			Function_122(&Param0 + 808);
			Function_121(&Param0 + 808, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_149(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_148(&Param0 + 808, 1);
			Param0.f_892 = 14;
		
		case 0x0000000E:
			if (!Param0.f_788)
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					Function_121(&Param0 + 808, 0);
					Function_45(&Param0 + 808, 0);
					return 0;
				}
			}
			if (!Function_130(&Param0))
			{
				bVar2 = false;
				while (bVar2 <= SQUAD_GET_SIZE(&Param0 + 808))
				{
					uVar20 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar2);
					if (IS_ACTOR_VALID(&uVar20))
					{
						if (SQUAD_IS_GOAL_CONTROLLING_ACTOR(&Param0 + 808, &Param0 + 904, &uVar20))
						{
							SET_ACTOR_VISION_XRAY(&uVar20, 0);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar20, 16, 0);
						}
						else
						{
							SET_ACTOR_VISION_XRAY(&uVar20, 1);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar20, 16, 1);
						}
					}
					bVar2++;
				}
			}
			if (Param0.f_704 != 0.0f)
			{
				if (Function_144(&Param0 + 808, Function_69(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000F:
			Function_150("LAW_AI_STATE: SUBMIT CUTSCENE", 11);
			Param0.f_892 = 16;
			Function_120(&Global_119935, 0x1000000);
			Function_116(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0x3f800000, 0);
			Function_115(&Param0 + 808, &Param1 + 96, 2);
		
		case 0x00000010:
			if (Param0.f_1000 > GET_CURRENT_GAME_TIME() && !Global_6623)
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				Param0.f_892 = 17;
			}
			else if (Global_6623)
			{
				AI_CLEAR_DONT_HARM_ACTOR(&Param1 + 96);
				Param0.f_892 = 17;
				Function_34(2048);
			}
			iVar1 = 250;
			break;
		
		case 0x00000011:
			if (HUD_IS_FADED())
			{
				Function_109(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (SQUAD_IS_VALID(&Param0 + 808))
				{
					SQUAD_GOALS_CLEAR(&Param0 + 808);
				}
				AI_CLEAR_DONT_HARM_ACTOR(&Param1 + 96);
				RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
				Param0.f_1004 = 1;
				Param0.f_892 = 24;
			}
			iVar1 = 250;
			break;
		
		case 0x00000015:
			Function_150("LAW_AI_STATE: BRIBE CUTSCENE", 11);
			Function_105("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			Param0.f_892 = 22;
			iVar11 = Function_102(&Param1 + 96, &Param0 + 808);
			GET_POSITION(&Param1 + 96, &Param0 + 724);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			SQUAD_GOAL_ADD_MEET_AT_POSITION(&Param0 + 808, 1, &Param0 + 724, 4294967295, 5.0f, 1);
			ACTOR_HOLSTER_WEAPON(&Param1 + 96, 1);
			Function_116(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (IS_ACTOR_HOGTIED(&iVar11))
			{
				FREE_FROM_HOGTIE(&iVar11);
			}
			if (Function_98(&fVar22, &Var23))
			{
				SET_ACTOR_HEADING(&Param1 + 96, fVar22, 1);
			}
			else
			{
				fVar22 = Function_97(&Param1 + 96);
				Function_96(&iVar11);
				Var23 = Function_96(&iVar11);
			}
			MEMORY_CLEAR_ALL(&Param1 + 96);
			MEMORY_CLEAR_ALL(&iVar11);
			ACTOR_START_FORCE_HOLSTER(&Param1 + 96, 0, 0);
			ACTOR_START_FORCE_HOLSTER(&iVar11, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
			RESET_ANIM_SET_FOR_ACTOR(&iVar11, 0);
			TASK_CLEAR(&Param1 + 96);
			TASK_CLEAR(&iVar11);
			SET_ANIM_SET_FOR_ACTOR(&Param1 + 96, "stand_shakehands", 0);
			SET_LINKED_ANIM_TARGET(&Param1 + 96, &iVar11);
			TASK_ACTION_PERFORM(&Param1 + 96, "stand_shakehands/tip_hat");
			TASK_PRIORITY_SET(&Param1 + 96, true);
			TASK_PRIORITY_SET(&iVar11, true);
			AI_IGNORE_ACTOR(&Param1 + 96);
			AI_IGNORE_ACTOR(&iVar11);
			SET_ACTOR_CAN_PLAY_GESTURES(&iVar11, false);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&iVar11, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			MEMORY_CONSIDER_AS(&iVar11, &Param1 + 96, 2);
			AUDIO_STOP_PAIN(Function_69());
			SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_69(), "PLAYER_OFFER_LAW_BRIBE", 1, 1, 0, 0);
			*(&Param0 + 984) = Function_92(StackVal, &Param1 + 96, fVar22, Var23);
			Param0.f_1000 = GET_CURRENT_GAME_TIME();
		
		case 0x00000016:
			if (Param0.f_1000 + 4.0f) > GET_CURRENT_GAME_TIME()
			{
				Param0.f_892 = 23;
			}
			iVar1 = 250;
			UNK_0x63D3AAFC(1);
			break;
		
		case 0x00000017:
			Function_109(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (&Param0 + 984 != "")
			{
				REMOVE_CAMERA_FROM_CHANNEL(&Param0 + 984, 0);
				DESTROY_OBJECT(&Param0 + 984);
				RELEASE_OBJECT_REF(&Param0 + 984);
			}
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
			iVar11 = Function_102(&Param1 + 96, &Param0 + 808);
			if (IS_ACTOR_VALID(&iVar11))
			{
				SET_ACTOR_CAN_PLAY_GESTURES(&iVar11, true);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(&iVar11, 1);
			}
			AUDIO_SET_PLAYER_MOOD(0, 1);
			UI_EXIT("WantedMeter");
			UI_EXIT("BountyAmount");
			_HUD_WANTED_METER(0);
			_HUD_WANTED_CRIME(0.0f);
			Global_42252 = 0.0f;
			Global_42264 = 1;
			UNK_0x598815BD(Global_42252);
			UI_SET_STYLE("BountyAmount", 1);
			ACTOR_START_FORCE_HOLSTER(&Param1 + 96, 0, 0);
			Param0.f_792 = 1;
			Param0.f_892 = 24;
			iVar1 = 0;
			break;
		
		case 0x00000018:
			Function_150("LAW_AI_STATE: CLEANUP", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_149(&Param0 + 808);
			Function_45(&Param0 + 808, 0);
			if (IS_ACTOR_VALID(&Param1 + 96))
			{
				AI_CLEAR_DONT_HARM_ACTOR(&Param1 + 96);
			}
			if (!Param0.f_780)
			{
				if (IS_ACTOR_VALID(&Param1 + 96))
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
					TASK_FLEE_ACTOR(false, &Param1 + 96, -1.0f, -1.0f, 0, 0, 0);
				}
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
				TASK_WANDER(0, -1.0f);
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			Param0.f_892 = 25;
		
		case 0x00000019:
			UNK_0x63D3AAFC(0);
			break;
	}
	return iVar1;
}

int Function_92(int iParam0, var uParam1, struct<2> Param2) //Position: 0x502C / 20524
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	uVar0 = CREATE_CAMERA_IN_LAYOUT(&Global_39918, Function_50(), 0);
	INIT_CAMERA_FROM_GAME_CAMERA(&uVar0);
	GET_CAMERA_POSITION(&uVar0, &Var5);
	Function_96(&iParam0);
	Function_94(StackVal, StackVal, StackVal, Function_96(&iParam0), uParam1, Param2, Var5, &Var1, &Var3);
	SET_CAMERA_POSITION(&uVar0, Var1);
	SET_CAMERA_TARGET_POSITION(&uVar0, Var3, 0);
	if (!Function_93(StackVal, Var1))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(&uVar0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		INIT_CAMERA_FROM_GAME_CAMERA(&uVar0);
		SET_CURRENT_CAMERA_ON_CHANNEL(&uVar0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

bool Function_93(vector3 vParam0) //Position: 0x50B2 / 20658
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_94(struct<2> Param0, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, struct<2> Param8) //Position: 0x50CA / 20682
{
	struct<5> Var0;
	struct<2> Var6;
	bool bVar8;
	float fVar9;
	struct<2> Var10;
	float fVar12;
	float fVar13;
	struct<2> Var14[8];
	var uVar31;
	var uVar33;
	int iVar35;
	
	Var0 = Param0;
	Var0.f_4 = (StackVal + 2.0f);
	Var2 = Param0;
	Var2.f_4 = (StackVal + 1.0f);
	Var4 = Param3;
	Var4.f_4 = (StackVal + 2.0f);
	Var6 = Param3;
	Var6.f_4 = (StackVal + 1.0f);
	bVar8 = VDIST(Var0, Var4);
	fVar9 = 1,625f;
	Param8 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var0, StackVal);
	VSCALE(&Param8, 0,5f);
	Var10 = Vector(StackVal, StackVal, StackVal) + Vector(Var6, Var4, StackVal);
	VSCALE(&Var10, 0,5f);
	Param8 = Vector(StackVal, StackVal, StackVal) + Vector(Var10, Param8, StackVal);
	VSCALE(&Param8, 0,5f);
	fVar12 = uParam2;
	fVar13 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	Var14[02] = Vector(((-1.0f * fVar9) * bVar8), 0.0f, 0.0f);
	Var14[12] = Vector(((-1.0f * fVar9) * bVar8), 0.0f, 0.0f);
	Var14[22] = Vector(((-1.0f * fVar9) * bVar8), 0.0f, 0.0f);
	Var14[32] = Vector(((-1.0f * fVar9) * bVar8), 0.0f, 0.0f);
	Var14[42] = Vector((fVar9 * bVar8), 0.0f, 0.0f);
	Var14[52] = Vector((fVar9 * bVar8), 0.0f, 0.0f);
	Var14[62] = Vector((fVar9 * bVar8), 0.0f, 0.0f);
	Var14[72] = Vector((fVar9 * bVar8), 0.0f, 0.0f);
	ROTATE_VECTOR_XZ(&(Var14[02]), (fVar12 + fVar13), 0);
	ROTATE_VECTOR_XZ(&(Var14[12]), (fVar12 + fVar13), 0);
	ROTATE_VECTOR_XZ(&(Var14[22]), (fVar12 + (-1.0f * fVar13)), 0);
	ROTATE_VECTOR_XZ(&(Var14[32]), (fVar12 + (-1.0f * fVar13)), 0);
	ROTATE_VECTOR_XZ(&(Var14[42]), (fVar12 + fVar13), 0);
	ROTATE_VECTOR_XZ(&(Var14[52]), (fVar12 + fVar13), 0);
	ROTATE_VECTOR_XZ(&(Var14[62]), (fVar12 + (-1.0f * fVar13)), 0);
	ROTATE_VECTOR_XZ(&(Var14[72]), (fVar12 + (-1.0f * fVar13)), 0);
	iVar35 = 0;
	while (iVar35 <= Var14)
	{
		Var14[iVar352] = Vector(StackVal, StackVal, StackVal) + Vector(Param8, Var14[iVar352], StackVal);
		if (FIND_INTERSECTION(&(Var14[iVar352]), &Param8, &uVar31, &uVar33, 1, 4294967295, 4194304))
		{
			Var14[iVar352] = Vector(0.0f, 0.0f, 0.0f);
		}
		if (!Function_93(StackVal, Var14[iVar352]))
		{
			if (FIND_INTERSECTION(&(Var14[iVar352]), &Var0, &uVar31, &uVar33, 1, 4294967295, 4194304))
			{
				Var14[iVar352] = Vector(0.0f, 0.0f, 0.0f);
			}
		}
		iVar35++;
	}
	if (!Function_93(StackVal, Var14[02]))
	{
		Var14[02].f_4 = StackVal;
	}
	if (!Function_93(StackVal, Var14[12]))
	{
		Var14[12].f_4 = StackVal;
	}
	if (!Function_93(StackVal, Var14[22]))
	{
		Var14[22].f_4 = StackVal;
	}
	if (!Function_93(StackVal, Var14[32]))
	{
		Var14[32].f_4 = StackVal;
	}
	if (!Function_93(StackVal, Var14[42]))
	{
		Var14[42].f_4 = StackVal;
	}
	if (!Function_93(StackVal, Var14[52]))
	{
		Var14[52].f_4 = StackVal;
	}
	if (!Function_93(StackVal, Var14[62]))
	{
		Var14[62].f_4 = StackVal;
	}
	if (!Function_93(StackVal, Var14[72]))
	{
		Var14[72].f_4 = StackVal;
	}
	Function_95(StackVal, Param5, &Var14);
	uParam7 = Function_95(StackVal, Param5, &Var14);
	return 1;
}

struct<8> Function_95(struct<2> Param0, struct<2>[] Param2) //Position: 0x53CE / 21454
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	
	bVar3 = 1E+08.0f;
	iVar2 = 0;
	while (iVar2 <= Param2)
	{
		if (!Function_93(StackVal, Param2[iVar22]))
		{
			if (VDIST(Param2[iVar22], Param0) > bVar3)
			{
				bVar3 = VDIST(Param2[iVar22], Param0);
				Var0 = Param2[iVar22];
			}
		}
		iVar2++;
	}
	return StackVal, Var0;
}

struct<8> Function_96(int iParam0) //Position: 0x5438 / 21560
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

float Function_97(int iParam0) //Position: 0x544A / 21578
{
	return GET_HEADING(&iParam0);
}

bool Function_98(var uParam0, int iParam1) //Position: 0x5456 / 21590
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	
	Function_96(GET_PLAYER_ACTOR(0));
	Var2 = Function_96(GET_PLAYER_ACTOR(0));
	uVar4 = Function_97(GET_PLAYER_ACTOR(0));
	uVar5 = Vector(0.0f, 0.0f, -1,7f);
	GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &uVar5, &Var0);
	if (Function_101(StackVal, StackVal, Var0, Var2))
	{
		if (Function_100(StackVal, StackVal, Var0, Var2) > 0,1f)
		{
			uParam0 = uVar4;
			iParam1 = Var0;
			return 1;
		}
	}
	iVar7 = -1.0f;
	fVar8 = -1.0f;
	iVar9 = 0;
	iVar10 = 0;
	while (iVar10 <= 36)
	{
		Function_99(StackVal, StackVal, Var0, Var2, 10.0f);
		Var0 = Function_99(StackVal, StackVal, Var0, Var2, 10.0f);
		if (Function_101(StackVal, StackVal, Var0, Var2))
		{
			fVar11 = Function_100(StackVal, StackVal, Var0, Var2);
			if (fVar8 > 0.0f || fVar11 > fVar8)
			{
				iVar7 = Function_124(StackVal, StackVal, Var2, Var0);
				fVar8 = fVar11;
				iParam1 = Var0;
				iVar9 = 1;
			}
		}
		iVar10++;
	}
	uParam0 = iVar7;
	return iVar9;
}

struct<8> Function_99(vector3 vParam0) //Position: 0x5533 / 21811
{
	struct<2> Var0;
	
	vParam0 = (vParam0.x - vParam2.x);
	vParam0.f_4 = (vParam0.y - vParam2.y);
	vParam0.f_8 = (vParam0.z - vParam2.z);
	Var0 = ((COS_DEGREE(fParam4) * vParam0.x) - (SIN_DEGREE(fParam4) * vParam0.z));
	Var0.f_8 = ((COS_DEGREE(fParam4) * vParam0.z) + (SIN_DEGREE(fParam4) * vParam0.x));
	Var0 = (Var0 + vParam2.x);
	Var0.f_4 = (StackVal + vParam2.y);
	Var0.f_8 = (StackVal + vParam2.z);
	return StackVal, Var0;
}

float Function_100(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x55AD / 21933
{
	struct<5> Var0;
	float fVar6;
	
	FIND_GROUND_INTERSECTION(&uParam0, 1,3f, &Var0, &uVar4);
	FIND_GROUND_INTERSECTION(&uParam2, 1,3f, &Var2, &uVar4);
	fVar6 = (StackVal - StackVal);
	if (fVar6 > 0.0f)
	{
		fVar6 = (fVar6 * -1.0f);
	}
	return fVar6;
}

bool Function_101(vector3 vParam0) //Position: 0x55ED / 21997
{
	var uVar0;
	var uVar2;
	var uVar4;
	var uVar6;
	
	uVar2 = Vector(vParam0.x, (vParam0.y + 0,3f), vParam0.z);
	uVar4 = Vector(vParam0.x, (vParam0.y + 1,7f), vParam0.z);
	uVar6 = Vector(vParam2.x, (vParam2.y + 1.0f), vParam2.z);
	if (FIND_INTERSECTION(&uVar6, &uVar2, &uVar0, &uVar0, 0, 4294967295, 4194304) || FIND_INTERSECTION(&uVar6, &uVar4, &uVar0, &uVar0, 0, 4294967295, 4194304))
	{
		return 0;
	}
	return 1;
}

var Function_102(int iParam0, int iParam1) //Position: 0x5658 / 22104
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		if (Function_103(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_103(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_103(bool bParam0, int iParam1) //Position: 0x571B / 22299
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&bParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_104(&uVar0, &uVar2);
	return iVar4;
}

var Function_104(struct<2> Param0) //Position: 0x573C / 22332
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_105(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x575B / 22363
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_106(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_106(int iParam0) //Position: 0x57E0 / 22496
{
	char* cVar0[16];
	
	if (!Function_107())
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

bool Function_107() //Position: 0x581F / 22559
{
	if (Function_108(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_108(var uParam0, bool bParam1) //Position: 0x583A / 22586
{
	return (uParam0 && bParam1) == 0;
}

void Function_109(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x5847 / 22599
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_69();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_113(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_112();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_110(&iParam9, &iParam10);
}

void Function_110(var uParam0, bool bParam1) //Position: 0x5916 / 22806
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_111();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_111() //Position: 0x59E5 / 23013
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_112() //Position: 0x5A5D / 23133
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_113(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5A72 / 23154
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
	Function_61(iParam0, TO_FLOAT(bParam1), 1);
	Function_60(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_114(iParam0);
	return 1;
}

void Function_114(int iParam0) //Position: 0x5C9A / 23706
{
	switch (iParam0)
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

void Function_115(var uParam0, var uParam1, bool bParam2) //Position: 0x5D38 / 23864
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_116(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x5D84 / 23940
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_112();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_69();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_96(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_50(), 2,802597E-45f, Function_96(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_113(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_107())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_119()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_119()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_118(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_117(0x4000000);
	}
	if (Function_118(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_117(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_117(int iParam0) //Position: 0x6036 / 24630
{
	int iVar0;
	
	if (Function_108(iParam0, 1) && Function_108(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_118(int iParam0) //Position: 0x606A / 24682
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_119() //Position: 0x6086 / 24710
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_120(var uParam0, int iParam1) //Position: 0x6114 / 24852
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_121(var uParam0, int iParam1) //Position: 0x6125 / 24869
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_PREFER_WALKING(&uVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_122(bool bParam0) //Position: 0x6174 / 24948
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	uVar0 = Function_123();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar3 = GET_MOUNT(&uVar2);
			if (IS_ACTOR_VALID(&uVar3))
			{
				TASK_FLEE_ACTORSET(&uVar3, &uVar0, -1.0f, -1.0f, 0, 0, 0);
				RELEASE_ACTOR(&uVar3);
			}
		}
		bVar1++;
	}
	return;
}

var Function_123() //Position: 0x61E2 / 25058
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(&iVar0))
	{
		iVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(&iVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return &iVar0;
}

float Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x6253 / 25171
{
	var uVar0;
	
	Function_125(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_125(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x626D / 25197
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

var Function_126(var uParam0, int iParam1, float fParam2) //Position: 0x6291 / 25233
{
	struct<8> Var0;
	int iVar8;
	bool bVar9;
	struct<2> Var10;
	
	if (!IS_OBJECT_VALID(&(Global_39559[iParam1])))
	{
		return "";
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_127("llr") };
	iVar8 = CREATE_FORMATION_IN_LAYOUT(&uParam0, &Var0, GET_NUM_FORMATION_LOCATIONS(&(Global_39559[iParam1])));
	bVar9 = false;
	while (bVar9 <= GET_NUM_FORMATION_LOCATIONS(&(Global_39559[iParam1])))
	{
		GET_FORMATION_LOCATION(&(Global_39559[iParam1]), bVar9, &Var10);
		Var10 = Vector(Var10, StackVal, StackVal) * Vector(fParam2, fParam2, fParam2);
		ADD_FORMATION_LOCATION(&iVar8, &Var10);
		bVar9++;
	}
	return &iVar8;
}

struct<32> Function_127(char* cParam0) //Position: 0x630F / 25359
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_128("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_128(char* cParam0) //Position: 0x637B / 25467
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_129(int iParam0, int iParam1) //Position: 0x639D / 25501
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_130(struct<641> Param0) //Position: 0x63B0 / 25520
{
	if (Global_43789 == Global_46914[0])
	{
		if (Param0.f_640 < 846.0f)
		{
			return 1;
		}
	}
	return 0;
}

int Function_131(int iParam0) //Position: 0x63D4 / 25556
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

var Function_132(int iParam0, int iParam1) //Position: 0x642A / 25642
{
	float fVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return "";
	}
	if (!Function_134(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_133(&uVar1, &iVar2);
	iVar3 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&iVar3))
	{
		uVar5 = GET_CRIME_FROM_OBJECT(&iVar3);
		if (GET_CRIME_CRIMINAL(&uVar5) != &iParam0 && GET_CRIME_WITNESSED(&uVar5) <= iParam1)
		{
			if (GET_CRIME_END_TIMESTAMP(&uVar5) < fVar0)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(&uVar5);
				iVar4 = &uVar5;
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	return &iVar4;
}

void Function_133(var uParam0, int iParam1) //Position: 0x64DD / 25821
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_134(int iParam0) //Position: 0x6513 / 25875
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_135(struct<677> Param0) //Position: 0x6528 / 25896
{
	if (&bParam1)
	{
		(&Param0 + 760) = GET_CURRENT_GAME_TIME();
	}
	else
	{
		*(&Param0 + 760) = (GET_CURRENT_GAME_TIME() - 10.0f);
	}
	Param0.f_676 = GET_CURRENT_GAME_TIME();
	return;
}

bool Function_136(struct<1009> Param0) //Position: 0x655A / 25946
{
	switch (Param0.f_1008)
	{
		case 0x00000000:
			if (StackVal != 1)
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			if (StackVal != 0)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

bool Function_137(int iParam0, int iParam1, bool bParam2) //Position: 0x659F / 26015
{
	var uVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(&iParam0))
			{
				uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
				if (IS_ACTOR_VALID(&uVar0))
				{
					if (MEMORY_GET_IS_VISIBLE(&uVar0, &iParam1))
					{
						if (&bParam2)
						{
							if (MEMORY_GET_IS_IDENTIFIED(&uVar0, &iParam1))
							{
								return 1;
							}
						}
						return 1;
					}
				}
				bVar1++;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
	return 0;
}

bool Function_138(var uParam0, struct<2> Param1, float fParam3) //Position: 0x6612 / 26130
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (Function_93(StackVal, Param1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				Function_139(&uVar1);
				if (VDIST(Function_139(&uVar1), Param1) >= fParam3)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

struct<8> Function_139(int iParam0) //Position: 0x6687 / 26247
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_140(struct<573> Param0) //Position: 0x66F3 / 26355
{
	if ((GET_CURRENT_GAME_TIME() - Param0.f_572) > &fParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_141(struct<1009> Param0) //Position: 0x670D / 26381
{
	bool bVar0;
	struct<2> Var1;
	
	if (Param0.f_892 != 12)
	{
		if (StackVal || ((StackVal != 0 && Param0.f_1008 != 1) != 1 && Param0.f_1008 != 0))
		{
			bVar0 = true;
		}
		if (Param0 == 3)
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			Function_142(&Param0);
			Var1 = Function_142(&Param0);
			if (!Function_93(StackVal, Var1))
			{
				if (SQUAD_IS_VALID(&Param0 + 808))
				{
					SQUAD_GOALS_CLEAR(&Param0 + 808);
					Function_149(&Param0 + 808);
					Function_150("LAW_AI_STATE: STAY IN COUNTRY", 11);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 0, 4294967295);
					TASK_GO_NEAR_COORD(0, &Var1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
				}
				if (SQUAD_IS_VALID(&Param0 + 816))
				{
					SQUAD_GOALS_CLEAR(&Param0 + 816);
					Function_149(&Param0 + 816);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 0, 4294967295);
					TASK_GO_NEAR_COORD(0, &Var1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
				}
				Param0.f_892 = 12;
				return 1;
			}
		}
	}
	return 0;
}

struct<8> Function_142(struct<1009> Param0) //Position: 0x6829 / 26665
{
	int iVar0;
	
	iVar0 = Function_143(&Param0);
	switch (iVar0)
	{
		case 0x00000000:
			if (Param0.f_1008 == 0)
			{
				return StackVal, Vector(3,07f, 94,87f, 2704,52f);
			}
			if (Param0.f_1008 == 1)
			{
				return StackVal, Vector(61,98f, 94,83f, 2782,57f);
			}
			break;
		
		case 0x00000001:
			if (Param0.f_1008 == 0)
			{
				return StackVal, Vector(-2395,41f, 13,94f, 3882,45f);
			}
			if (Param0.f_1008 == 1)
			{
				return StackVal, Vector(-2356,1f, 13,91f, 4019,29f);
			}
			break;
		
		case 0x00000002:
			if (Param0.f_1008 == 0)
			{
				return StackVal, Vector(-3711,54f, 24,11f, 4022,47f);
			}
			if (Param0.f_1008 == 1)
			{
				return StackVal, Vector(-3518,87f, 19,29f, 4208,25f);
			}
			break;
	}
	Function_218();
	return StackVal, Function_218();
}

var Function_143(int iParam0) //Position: 0x6907 / 26887
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	
	bVar0 = 1,001638E+07.0f;
	iVar1 = 4294967295;
	Var3 = Vector(32.0f, 96.0f, 2741.0f);
	bVar2 = VDIST(*(&iParam0 + 640), Var3);
	if (bVar2 > bVar0)
	{
		iVar1 = 0;
		bVar0 = bVar2;
	}
	Var3 = Vector(-2381.0f, 14.0f, 3935.0f);
	bVar2 = VDIST(*(&iParam0 + 640), Var3);
	if (bVar2 > bVar0)
	{
		iVar1 = 1;
		bVar0 = bVar2;
	}
	Var3 = Vector(-3571.0f, 21.0f, 4128.0f);
	bVar2 = VDIST(*(&iParam0 + 640), Var3);
	if (bVar2 > bVar0)
	{
		iVar1 = 2;
		bVar0 = bVar2;
	}
	return iVar1;
}

bool Function_144(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x69B2 / 27058
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (ACTORS_IN_RANGE(&uVar1, &uParam1, bParam2))
				{
					if (!Function_145(&uVar1, 1) || iParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_145(int iParam0, int iParam1) //Position: 0x6A57 / 27223
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_146(int iParam0, int iParam1, bool bParam2) //Position: 0x6AA9 / 27305
{
	int iVar0;
	struct<2> Var1;
	
	if (GET_OBJECT_TYPE(&iParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, &iParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&iParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(&iParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&iParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&iParam1)));
		}
		return 0;
	}
	if (&bParam2)
	{
		if (!IS_ITERATOR_VALID(&Global_39554))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(&iParam1, &Var1);
		Function_78(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 15);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar0)) == iParam0)
			{
				return 1;
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
		Function_78(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, &Global_10996);
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 24);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))) == iParam0)
				{
					return 1;
				}
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
	}
	return 0;
}

void Function_147(int iParam0, struct<117> Param1) //Position: 0x6C39 / 27705
{
	if (&iParam0 + 760 > 0.0f)
	{
		if ((Function_144(&iParam0 + 808, &Param1 + 96, 20.0f, 1) || Function_140(&iParam0, 0x3f800000)) || iParam2)
		{
			if (!Function_73(&iParam0 + 808, 59, &Param1 + 96))
			{
				if (GET_WEAPON_IN_HAND(&Param1 + 96) == 4294967295)
				{
					Function_268(&iParam0 + 808, "law_give_up_unarmed", 2,5f, Param1.f_116, 20.0f, 1, 0);
				}
				else
				{
					Function_268(&iParam0 + 808, "law_give_up", 2,5f, Param1.f_116, 20.0f, 1, 0);
				}
			}
			Function_135(&iParam0, 1);
		}
	}
	return;
}

void Function_148(var uParam0, int iParam1) //Position: 0x6CFB / 27899
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (SQUAD_GET_SIZE(&uParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					MEMORY_ALLOW_TAKE_COVER(&uVar1, iParam1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_149(int iParam0) //Position: 0x6D47 / 27975
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_150(struct<16> Param0) //Position: 0x6D7C / 28028
{
	if (!Function_118(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &Param0))
	{
		strcpy(&Global_21610, &Param0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

int Function_151(struct<2> Param0, struct<5> Param2) //Position: 0x6DB9 / 28089
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_93(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_93(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_152(struct<673> Param0) //Position: 0x6EFC / 28412
{
	int iVar0;
	float fVar1;
	
	fVar1 = Function_155(&Param0, &Param1 + 96);
	if ((GET_CURRENT_GAME_TIME() - fVar1) > 5.0f)
	{
		if (&bParam2)
		{
			Global_6648 = 0;
		}
		*(&Param0 + 724) = *(&Param0 + 640);
		GET_ACTOR_VELOCITY(&Param1 + 96, &Param0 + 736);
		Param0.f_668 = GET_CURRENT_GAME_TIME();
	}
	else if (&bParam2)
	{
		Global_6648 = 1;
		if (Global_39922.f_308)
		{
			if (!Function_19(Global_119935, 8))
			{
				Function_14(&Global_54076, 8, 2, 0);
			}
		}
	}
	if (&bParam2)
	{
		if (Global_6629 && Global_6648)
		{
			if (Function_146(Param1.f_108, GET_OBJECT_FROM_ACTOR(&Param1 + 96), 1))
			{
				Global_6648 = 0;
				*(&Param0 + 724) = *(&Param0 + 640);
				GET_ACTOR_VELOCITY(&Param1 + 96, &Param0 + 736);
				Param0.f_672 = GET_CURRENT_GAME_TIME();
				Function_154(&Param0 + 808, &Param1 + 96, 0);
				if (!Function_19(Global_119935, 16))
				{
					Function_14(&Global_54076, 16, 2, 0);
				}
			}
		}
	}
	Param0.f_572 = Function_129(Function_129(Param0.f_664, Param0.f_668), Param0.f_672);
	Global_42254 = Function_81(&Param0);
	Global_42255 = Param0.f_572;
	if (GET_CURRENT_GAME_TIME() < (Param0.f_572 + Global_42254))
	{
		if (Function_153(&Param0 + 808) >= 0)
		{
			if (!Function_73(&Param0 + 808, 22, &Param1 + 96))
			{
				Function_268(&Param0 + 808, "law_go_unwanted", 5.0f, Param1.f_116, 20.0f, 0, 0);
			}
		}
		iVar0 = 1;
	}
	else if (GET_CURRENT_GAME_TIME() < (Param0.f_572 + 5.0f))
	{
		if (&bParam2)
		{
			if (Global_39922.f_308)
			{
				if (!Function_19(Global_119935, 4096))
				{
					Function_14(&Global_54076, 4096, 2, 0);
				}
			}
		}
		if (GET_CURRENT_GAME_TIME() < (Param0.f_568 + 20.0f))
		{
			if (Function_153(&Param0 + 808) >= 0)
			{
				if (!Function_73(&Param0 + 808, 22, &Param1 + 96))
				{
					Function_268(&Param0 + 808, "law_wanted_lost_track", 2,5f, Param1.f_116, 20.0f, 0, 1);
				}
			}
			Param0.f_568 = GET_CURRENT_GAME_TIME();
		}
	}
	return iVar0;
}

int Function_153(int iParam0) //Position: 0x7136 / 28982
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_154(var uParam0, var uParam1, bool bParam2) //Position: 0x7189 / 29065
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

var Function_155(bool bParam0, int iParam1) //Position: 0x7201 / 29185
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (SQUAD_IS_VALID(&bParam0 + 816))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bParam0 + 816) >= 0)
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	uVar0 = GET_LASSO_TARGET(Function_69());
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (Function_68(&uVar0, &bParam0 + 808, 0))
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	iVar3 = 0.0f;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(&bParam0 + 808))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0 + 808, bVar1);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (GET_LAST_ATTACK_TARGET(&uVar2) != &iParam1 && GET_LAST_ATTACK_TIME(&uVar2) <= (GET_CURRENT_GAME_TIME() - 5.0f))
				{
					return GET_CURRENT_GAME_TIME();
				}
				iVar3 = Function_129(MEMORY_GET_POSITION_LAST_KNOWN_TIME(&uVar2, &iParam1), iVar3);
			}
		}
		bVar1++;
	}
	return iVar3;
}

void Function_156() //Position: 0x72BC / 29372
{
	if (Global_6629)
	{
		if (Function_159(32768))
		{
			Function_157(32768);
		}
	}
	else if (!Function_159(32768))
	{
		Function_5(32768);
	}
	return;
}

void Function_157(int iParam0) //Position: 0x72EE / 29422
{
	Function_158(&Global_43580, iParam0);
	return;
}

void Function_158(var uParam0, int iParam1) //Position: 0x72FC / 29436
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_159(int iParam0) //Position: 0x7324 / 29476
{
	return Function_160(&Global_43580, iParam0);
}

int Function_160(var uParam0, int iParam1) //Position: 0x7332 / 29490
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_161(int iParam0) //Position: 0x734F / 29519
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0 + 808))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 808))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 808, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_RIDING(&uVar1))
				{
					AI_SET_NAV_MATERIAL_USAGE(&uVar1, 96, 0);
				}
				else
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&uVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_162(struct<893> Param0) //Position: 0x73B0 / 29616
{
	if ((((((Param0.f_772 || Param0.f_768) || Param0.f_776) || Param0.f_780) || Param0.f_796) || Param0.f_800) || Param0.f_892 < 14)
	{
		return;
	}
	if ((((Global_40060[Param1.f_116] <= 15 || (GET_CURRENT_GAME_TIME() <= (Param0.f_704 + 20.0f) && Param0.f_704 < 0.0f)) || Param0 != 2) || Param0 != 3) || 0)
	{
		Function_163(&Param0, &Param1);
	}
	return;
}

void Function_163(struct<773> Param0) //Position: 0x7430 / 29744
{
	bool bVar0;
	var uVar1;
	
	if (!Function_19(Global_119935, 8192))
	{
		Function_14(&Global_54076, 8192, 2, 0);
	}
	Function_73(&Param0 + 808, 58, &iParam1 + 96);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 808))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_ALLOW_SHOOTING(&uVar1, 1);
			AI_CLEAR_FIRE_DELAY(&uVar1);
			AI_CLEAR_FIRE_DELAY_RANDOMNESS(&uVar1);
			AI_CLEAR_BURST_DURATION(&uVar1);
			AI_CLEAR_BURST_DURATION_RANDOMNESS(&uVar1);
			AI_CLEAR_SHOTS_PER_BURST(&uVar1);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uVar1, 0,5f, 0,5f);
		}
		bVar0++;
	}
	Param0.f_772 = 1;
	return;
}

void Function_164(struct<1029> Param0) //Position: 0x74D2 / 29906
{
	int iVar0;
	bool bVar1;
	
	if (GET_CURRENT_GAME_TIME() <= Param0.f_1028)
	{
		iVar0 = &Param0 + 928;
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			*(&Param0 + 928) = Function_165(&iParam1 + 96, 258);
		}
		else
		{
			(&Param0 + 928) = "";
		}
		Param0.f_1028 = (GET_CURRENT_GAME_TIME() + 2.0f);
		if (IS_OBJECT_VALID(&Param0 + 928))
		{
			if (!Param0.f_788)
			{
				if (Global_6630)
				{
					if (GET_CURRENT_GAME_TIME() >= (Param0.f_572 + 2.0f))
					{
						Param0.f_788 = 1;
						Param0.f_592 = GET_CURRENT_GAME_TIME();
						bVar1 = false;
						while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 808))
						{
							MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar1), &iParam1 + 96, 1);
							bVar1++;
						}
					}
				}
			}
			else if (!&iVar0 != "")
			{
				if (&iVar0 == &Param0 + 928 && Param0.f_892 != 14)
				{
					Param0.f_592 = GET_CURRENT_GAME_TIME();
					Param0.f_892 = 13;
				}
			}
		}
		else if (Param0.f_788)
		{
			Param0.f_788 = 0;
			Param0.f_592 = -1.0f;
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 808))
			{
				MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar1), &iParam1 + 96, 0);
				bVar1++;
			}
		}
	}
	return;
}

int Function_165(var uParam0, int iParam1) //Position: 0x7611 / 30225
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return "";
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	if (GET_OBJECT_TYPE(&uParam0) == 3)
	{
		uVar1 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&uParam0));
	}
	if (!IS_OBJECT_VALID(&uVar1))
	{
		uVar1 = &uParam0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		DESTROY_ITERATOR(&uVar0);
		return "";
	}
	GET_OBJECT_POSITION(&uVar1, &Var2);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	iVar4 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		if (DECOR_CHECK_EXIST(&iVar4, "locflag"))
		{
			if (Function_79(GET_VOLUME_FROM_OBJECT(&iVar4), &iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(&uParam0, GET_VOLUME_FROM_OBJECT(&iVar4)))
				{
					if (!DECOR_CHECK_EXIST(&iVar4, "nocrime"))
					{
						DESTROY_ITERATOR(&uVar0);
						return &iVar4;
					}
				}
				if (IS_POINT_IN_VOLUME(Var2, GET_VOLUME_FROM_OBJECT(&iVar4)))
				{
					if (!DECOR_CHECK_EXIST(&iVar4, "nocrime"))
					{
						DESTROY_ITERATOR(&uVar0);
						return &iVar4;
					}
				}
			}
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	Function_78(&uVar0);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 10);
	iVar4 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		if (DECOR_CHECK_EXIST(&iVar4, "locflag"))
		{
			if (Function_79(GET_VOLUME_FROM_OBJECT(&iVar4), &iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(&uParam0, GET_VOLUME_FROM_OBJECT(&iVar4)))
				{
					if (!DECOR_CHECK_EXIST(&iVar4, "nocrime"))
					{
						DESTROY_ITERATOR(&uVar0);
						return &iVar4;
					}
				}
				if (IS_POINT_IN_VOLUME(Var2, GET_VOLUME_FROM_OBJECT(&iVar4)))
				{
					if (!DECOR_CHECK_EXIST(&iVar4, "nocrime"))
					{
						DESTROY_ITERATOR(&uVar0);
						return &iVar4;
					}
				}
			}
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

void Function_166(struct<1001> Param0) //Position: 0x77DF / 30687
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	struct<5> Var4;
	bool bVar9;
	float fVar10;
	int iVar11;
	
	if (Global_39922.f_308)
	{
		if (!Function_19(Global_119936, 32768))
		{
			Function_14(Function_69(), 32768, 3, 0);
		}
	}
	if ((((((Function_170(&Param1 + 96, 0, 0) || Global_6648) || Function_70(&Param0, 1) != 0) || Global_99146) || Param0.f_780) || IS_ACTOR_RAGDOLL(&Param1 + 96)) || !IS_ACTOR_ALIVE(&Param1 + 96))
	{
		if (Param0.f_796 && !Param0.f_768)
		{
			Param0.f_796 = 0;
			Param0.f_800 = 0;
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
			Function_169(&Param0, &Param1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96));
		return;
	}
	if (((IS_ACTOR_RIDING(&Param1 + 96) || IS_ACTOR_RIDING_VEHICLE(&Param1 + 96)) || IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(&Param1 + 96)))) || IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Param1 + 96))
	{
		if (Param0.f_796 && !Param0.f_768)
		{
			Param0.f_796 = 0;
			Param0.f_800 = 0;
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
			Function_169(&Param0, &Param1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96));
		return;
	}
	fVar0 = Function_168(GET_TIME_SINCE_LAST_MOVESTICK_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96)), GET_TIME_SINCE_LAST_BUTTON_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96)));
	if (fVar0 < 1.0f && GET_WEAPON_IN_HAND(&Param1 + 96) != 4294967295)
	{
		if (!Param0.f_796)
		{
			bVar3 = false;
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 808))
			{
				if (!bVar3)
				{
					iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar1);
					if (IS_ACTOR_VALID(&iVar2))
					{
						if (IS_ACTOR_ALIVE(&iVar2))
						{
							if (!IS_ACTOR_HOGTIED(&iVar2))
							{
								Function_96(&iVar2);
								Var4 = Function_96(&iVar2);
								if (VDIST(Var4, (&Param0 + 640)) > 22.0f)
								{
									if (MEMORY_GET_IS_VISIBLE(&iVar2, &Param1 + 96))
									{
										if (Param0.f_892 == 14)
										{
											if (IS_OBJECT_VALID(&Param0 + 928))
											{
												fVar6 = GET_VOLUME_FROM_OBJECT(&Param0 + 928);
												if (IS_VOLUME_VALID(&fVar6))
												{
													if (IS_ACTOR_IN_VOLUME(&iVar2, &fVar6))
													{
														if (FABS((StackVal - StackVal)) > 1,5f)
														{
															bVar3 = true;
														}
													}
													else if (!GET_ACTOR_VISION_XRAY(&iVar2))
													{
														bVar3 = true;
													}
												}
											}
										}
										else
										{
											bVar3 = true;
										}
									}
								}
							}
						}
					}
				}
				bVar1++;
			}
			if (bVar3)
			{
				Param0.f_620 = (Param0.f_620 + (1.0f * TIMESTEP()));
			}
			else
			{
				Param0.f_620 = 0.0f;
			}
			if (bVar3 && Param0.f_620 <= 0,45f)
			{
				SET_ANIM_SET_FOR_ACTOR(&Param1 + 96, "stand_surrender", 0);
				SET_ACTION_NODE_FOR_ACTOR(&Param1 + 96, "stand_surrender/submit");
				AUDIO_STOP_PAIN(Function_69());
				if (Function_167() > 3)
				{
					SAY_SINGLE_LINE_STRING(Function_69(), "PLAYER_ARRESTED_HONORABLE", true, true, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING(Function_69(), "PLAYER_ARRESTED_DISHONORABLE", true, true, 0, 0, true, false);
				}
				AI_DONT_HARM_ACTOR(&Param1 + 96);
				Function_149(&Param0 + 808);
				SQUAD_GOALS_CLEAR(&Param0 + 808);
				bVar8 = false;
				while (bVar8 <= SQUAD_GET_SIZE(&Param0 + 808))
				{
					iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar8);
					if (IS_ACTOR_VALID(&iVar2))
					{
						Function_96(&iVar2);
						Function_96(&Param1 + 96);
						bVar9 = VDIST(Function_96(&iVar2), Function_96(&Param1 + 96));
						fVar10 = RAND_FLOAT_RANGE(5.0f, 10.0f);
						iVar7 = TASK_SEQUENCE_OPEN();
						if (bVar9 >= 18.0f)
						{
							TASK_GO_NEAR_COORD(0, &Param0 + 640, fVar10, 1);
						}
						else
						{
							TASK_GO_NEAR_COORD(0, &Param0 + 640, fVar10, 4);
						}
						TASK_POINT_GUN_AT_OBJECT(0, &Param1 + 96, -1.0f, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iVar2, iVar7);
						TASK_PRIORITY_SET(&iVar2, true);
						TASK_SEQUENCE_RELEASE(iVar7, 1);
					}
					bVar8++;
				}
				Param0.f_680 = GET_CURRENT_GAME_TIME();
				Param0.f_800 = 0;
				Param0.f_888 = 0;
				Param0.f_796 = 1;
			}
		}
		else
		{
			if (!Param0.f_888)
			{
				if (GET_CURRENT_GAME_TIME() <= (Param0.f_680 + 2,8f))
				{
					iVar11 = Function_102(&Param1 + 96, &Param0 + 808);
					if (IS_ACTOR_VALID(&iVar11))
					{
						if (Function_167() >= 4)
						{
							SAY_SINGLE_LINE_CONTEXT(&iVar11, true, &Param1 + 96, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_167() <= 2)
						{
							SAY_SINGLE_LINE_CONTEXT(&iVar11, 2, &Param1 + 96, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&iVar11, false, &Param1 + 96, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						Param0.f_888 = 1;
					}
				}
			}
			if (GET_CURRENT_GAME_TIME() <= (Param0.f_680 + 6,5f))
			{
				if (Param0.f_796)
				{
					Param0.f_768 = 1;
					Param0.f_892 = 15;
					Param0.f_1000 = GET_CURRENT_GAME_TIME();
					Global_6651 = 0;
				}
			}
		}
	}
	else if (((((fVar0 < 0,5f && GET_WEAPON_IN_HAND(&Param1 + 96) != 4294967295) && Function_31(Param1.f_116) >= 1500) && !Param0.f_800) && !Param0.f_768) && !Param0.f_796)
	{
		AI_DONT_HARM_ACTOR(&Param1 + 96);
		Param0.f_800 = 1;
	}
	else
	{
		if (Param0.f_796 && !Param0.f_768)
		{
			Param0.f_796 = 0;
			Function_169(&Param0, &Param1);
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
		}
		if (Param0.f_800)
		{
			AI_CLEAR_DONT_HARM_ACTOR(&Param1 + 96);
			Param0.f_800 = 0;
		}
	}
	return;
}

int Function_167() //Position: 0x7D2E / 32046
{
	return Global_21369.f_244;
}

var Function_168(int iParam0, int iParam1) //Position: 0x7D39 / 32057
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_169(struct<893> Param0) //Position: 0x7D4C / 32076
{
	if (SQUAD_IS_VALID(&Param0 + 808))
	{
		AI_CLEAR_DONT_HARM_ACTOR(&iParam1 + 96);
		if (!Param0.f_788)
		{
			Param0.f_892 = 4;
		}
		else
		{
			Param0.f_892 = 13;
		}
	}
	return;
}

bool Function_170(int iParam0, bool bParam1, bool bParam2) //Position: 0x7D84 / 32132
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_198(&iParam0))
	{
		return 1;
	}
	if (Function_172(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_171())
	{
		return 1;
	}
	return 0;
}

bool Function_171() //Position: 0x7E48 / 32328
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_172(int iParam0) //Position: 0x7E5F / 32351
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

void Function_173(struct<893> Param0) //Position: 0x7E6B / 32363
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	if (!Function_271(524288))
	{
		if (Function_144(&Param0 + 808, &Param1 + 96, 10.0f, 1))
		{
			if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(Param1.f_104, &Param1 + 96))
			{
				Param0.f_596 = 1.0f;
			}
			if (!Function_19(Global_119935, 32))
			{
				Function_14(&Global_54076, 32, 2, 0);
			}
		}
		return;
	}
	if (((((!Param0.f_768 && !Param0.f_796) && !Param0.f_776) && !Param0.f_780) && Function_271(0x2000000)) && Function_70(&Param0, 1) < 0)
	{
		if (Function_197(&Param0 + 808, &Param1 + 96, 10.0f, 0,5f))
		{
			bVar1 = false;
			if (Function_195(&Param0 + 808, &Param1 + 96, 25.0f, 0) == 1)
			{
				if (Function_192(&Param0, &Param1))
				{
					Global_6651 = 1;
					bVar1 = true;
					bVar2 = CEIL((IntToFloat(Function_31(Param1.f_116)) / 2.0f));
					if (Function_13() > 2)
					{
						bVar2 = CEIL((IntToFloat(bVar2) * 0,75f));
					}
					if (Function_191() > bVar2)
					{
						bVar1 = false;
						if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 992))
						{
							if (Global_39922.f_308)
							{
								if (!Function_19(Global_119936, 16384))
								{
									Function_14(Function_69(), 16384, 3, 0);
								}
							}
							*(&Param0 + 992) = ADD_SCRIPT_USE_CONTEXT("nlaw_bribe", 1, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
							SET_USE_CONTEXT_TEXT(&Param0 + 992, "nlaw_bribe", I2STR(bVar2), 0, 0, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 992))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 992);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 992))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param0 + 992))
						{
							if (Function_191() > bVar2)
							{
								Function_39();
								DECOR_SET_INT(StackVal, Function_190(&Param0 + 808), CEIL((IntToFloat(Function_31("iAdditionalMoney")) / 2.0f)));
								if (CEIL((IntToFloat(Function_31(StackVal)) / 2.0f)) >= Function_64(255))
								{
									Function_48(StackVal, CEIL((IntToFloat(Function_31(255)) / 2.0f)), 0);
								}
								Function_113(253, 1, 0, 0);
								Function_189(CEIL((IntToFloat(Function_31(StackVal)) / 2.0f)), 1);
								if (Function_31(StackVal) <= 100)
								{
									Function_175(4294966896, 1, 0);
								}
								else if (Function_31(StackVal) <= 1000)
								{
									Function_175(4294966296, 1, 0);
								}
								else
								{
									Function_175(4294965296, 1, 0);
								}
								Function_47();
								Function_174("bribe_taken", 0x41200000, 1, 0, 2, 1, 0);
								Param0.f_884 = 0;
								Param0.f_880 = 0.0f;
								Param0.f_892 = 21;
								Param0.f_780 = 1;
							}
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 992);
						}
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			else
			{
				if (Function_192(&Param0, &Param1))
				{
					bVar1 = true;
				}
				bVar0 = true;
			}
			if (bVar1)
			{
				if (UNK_0xDA674AE0("@FOOT.INTERACT", 1, 0))
				{
					if (!Param0.f_884)
					{
						Param0.f_884 = 1;
						Param0.f_880 = (Param0.f_880 + 0,8f);
					}
					if (Param0.f_880 <= 4.0f)
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_69(), "PLAYER_OFFER_LAW_BRIBE_URGENT", 1, 1, 2, 0);
						Param0.f_884 = 0;
						Param0.f_880 = 0.0f;
					}
				}
				else
				{
					Param0.f_884 = 0;
					Param0.f_880 = (Param0.f_880 - (1,4f * TIMESTEP()));
					if (Param0.f_880 > 0.0f)
					{
						Param0.f_880 = 0.0f;
					}
				}
			}
			else
			{
				Param0.f_884 = 0;
				Param0.f_880 = 0.0f;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else if (((Param0.f_768 || Param0.f_776) || Param0.f_780) || Param0.f_796)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 992))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 992);
		}
		Global_6651 = 0;
	}
	return;
}

void Function_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x8257 / 33367
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_106(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

void Function_175(int iParam0, bool bParam1, bool bParam2) //Position: 0x82E2 / 33506
{
	int iVar0;
	bool bVar1;
	
	if (Function_82(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_188())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_64(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_187(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_19(Global_119936, 1))
				{
					Function_14(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_185(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_19(Global_119936, 2))
				{
					Function_14(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_113(1, bVar1, 0, 0);
	}
	else
	{
		Function_184(1, (4294967295 * bVar1), 0);
	}
	if (Function_64(1) <= 4294962296)
	{
		Function_48(1, 4294962296, 0);
	}
	else if (Function_64(1) >= 5000)
	{
		Function_48(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_58(1));
	iVar0 = Function_64(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_177(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_177(2, Function_183(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_177(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_177(2, Function_183(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_177(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_177(2, Function_183(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_177(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_177(2, Function_183(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_177(2, Function_183(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_177(2, Function_183(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_177(2, Function_183(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_21369.f_244 = 5;
				Function_177(2, Function_183(Global_21369.f_244), 0);
			}
			break;
	}
	Function_176(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_176(int iParam0, int iParam1) //Position: 0x8609 / 34313
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_177(int iParam0, char* cParam1) //Position: 0x8873 / 34931
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_181(iParam0, &cParam1, 0, 1);
	iVar1 = Function_178();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_178() //Position: 0x8A03 / 35331
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_179();
	return 0;
}

void Function_179() //Position: 0x8AA4 / 35492
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_180(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_180(int iParam0) //Position: 0x8B62 / 35682
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

int Function_181(int iParam0, char* cParam1) //Position: 0x8BC8 / 35784
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_182(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_182(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x8F1F / 36639
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_183(int iParam0) //Position: 0x8FA7 / 36775
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_184(int iParam0, bool bParam1, int iParam2) //Position: 0x904A / 36938
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_60(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_185(int iParam0, bool bParam1) //Position: 0x9247 / 37447
{
	bool bVar0;
	int iVar1;
	
	Function_184(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_186(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_178();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_186(int iParam0, int iParam1) //Position: 0x93F2 / 37874
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

int Function_187(int iParam0, bool bParam1) //Position: 0x9437 / 37943
{
	bool bVar0;
	int iVar1;
	
	Function_113(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_186(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_178();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

bool Function_188() //Position: 0x95E3 / 38371
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_189(int iParam0, bool bParam1) //Position: 0x960E / 38414
{
	bool bVar0;
	
	bVar0 = Function_64(0);
	if ((Function_64(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_184(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_64(0));
	return 1;
}

int Function_190(var uParam0) //Position: 0x969F / 38559
{
	var uVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar0) && IS_ACTOR_ALIVE(&uVar0))
		{
			return &uVar0;
		}
		bVar1++;
	}
	return "";
}

int Function_191() //Position: 0x96EC / 38636
{
	return Function_64(0);
}

bool Function_192(int iParam0, struct<105> Param1) //Position: 0x96F6 / 38646
{
	var uVar0;
	
	if (((((((CAN_ANYONE_OF_FACTION_SEE_OBJECT(Param1.f_104, &Param1 + 96) && GET_ATTACHED_HOGTIE_VICTIM(&Param1 + 96) != "") && GET_WEAPON_IN_HAND(&Param1 + 96) != 4294967295) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && !IS_ACTOR_RAGDOLL(&Param1 + 96)) && !Function_170(Function_69(), 0, 1)) && !Function_194()) && !Function_193())
	{
		uVar0 = Function_102(&Param1 + 96, &iParam0 + 808);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if ((((IS_ACTOR_ALIVE(&uVar0) && !IS_ACTOR_RAGDOLL(&uVar0)) && !IS_ACTOR_RIDING(&uVar0)) && !IS_ACTOR_HOGTIED(&uVar0)) && !IS_ACTOR_ON_LADDER(&uVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_193() //Position: 0x9794 / 38804
{
	return Global_54082 != 3;
}

bool Function_194() //Position: 0x979F / 38815
{
	return Global_54082 != 2;
}

int Function_195(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x97AA / 38826
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2) && IS_ACTOR_ALIVE(&uVar2))
		{
			if (Function_196(&uVar2, &uParam1, uParam2))
			{
				iVar1++;
				if (&bParam3)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_196(var uParam0, var uParam1, bool bParam2) //Position: 0x9823 / 38947
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

bool Function_197(var uParam0, var uParam1, bool bParam2, float fParam3) //Position: 0x9938 / 39224
{
	bool bVar0;
	float fVar1;
	struct<5> Var2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		return 0;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		fVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&fVar1))
		{
			if (IS_ACTOR_ALIVE(&fVar1))
			{
				GET_POSITION(&fVar1, &Var4);
				if (FABS((StackVal - StackVal)) > fParam3)
				{
					if (ACTORS_IN_RANGE(&fVar1, &uParam1, bParam2))
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_198(int iParam0) //Position: 0x99D6 / 39382
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

var Function_199(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x99E5 / 39397
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4), iVar5))
			{
				uVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&uVar4))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_200(&uVar4, &uParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

var Function_200(var uParam0, int iParam1) //Position: 0x9AB0 / 39600
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_201(struct<973> Param0) //Position: 0x9BA5 / 39845
{
	bool bVar0;
	struct<2> Var1;
	
	switch (Param0.f_936)
	{
		case 0x00000000:
			bVar0 = Function_217(StackVal, (&Param0 + 640));
			if (Param0.f_972 > 3)
			{
				bVar0 = true;
			}
			if (Param0.f_864 <= 3)
			{
				Function_214(StackVal, StackVal, &Param0, *(&Param0 + 640), *(&Param0 + 724), bVar0);
				*(&Param0 + 952) = Function_214(StackVal, StackVal, &Param0, *(&Param0 + 640), *(&Param0 + 724), bVar0);
			}
			if (Function_93(StackVal, *(&Param0 + 952)))
			{
				Function_209(0);
				*(&Param0 + 952) = Function_209(0);
			}
			if (Function_93(StackVal, *(&Param0 + 952)))
			{
				*(&Param0 + 952) = Vector(0.0f, 0.0f, 0.0f);
				return;
			}
			if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 952), 1.0f))
			{
				Param0.f_864++;
				*(&Param0 + 952) = Vector(0.0f, 0.0f, 0.0f);
				return;
			}
			if (IS_OBJECT_VALID(&Param0 + 944))
			{
				DESTROY_OBJECT(&Param0 + 944);
			}
			*(&Param0 + 944) = CREATE_NAV_QUERY(&Param0 + 536, Function_50());
			if (!bVar0)
			{
				Var1 = *(&Param0 + 640);
			}
			else if (Global_43789 != Global_46866[0])
			{
				if (Function_203(StackVal, *(&Param0 + 640), 2096, 0.0f, 150.0f, &Var1, 0) != "")
				{
				}
				else
				{
					Var1 = (&Param0 + 640);
				}
			}
			else
			{
				Var1 = Vector(-2759,01f, 32,06f, 4269,67f);
			}
			if ((Global_6630 || Global_43789 != Global_46866[1]) || bVar0)
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(&Param0 + 944, *(&Param0 + 952), Var1, false);
			}
			else
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(&Param0 + 944, *(&Param0 + 952), Var1, 976);
			}
			Param0.f_968 = GET_CURRENT_GAME_TIME();
			Param0.f_936 = 1;
			break;
		
		case 0x00000001:
			if (!NAV_QUERY_IS_DONE(&Param0 + 944))
			{
				if (Param0.f_968 + 2.0f) > GET_CURRENT_GAME_TIME()
				{
					Param0.f_936 = 0;
					NAV_QUERY_STOP(&Param0 + 944);
					DESTROY_OBJECT(&Param0 + 944);
				}
				return;
			}
			if (!NAV_QUERY_CAN_PATH_TO_POINT(&Param0 + 944))
			{
				Param0.f_972++;
				Param0.f_936 = 3;
				NAV_QUERY_STOP(&Param0 + 944);
				DESTROY_OBJECT(&Param0 + 944);
				return;
			}
			NAV_QUERY_STOP(&Param0 + 944);
			DESTROY_OBJECT(&Param0 + 944);
			Param0.f_936 = 2;
			break;
		
		case 0x00000002:
			Param0.f_972 = 0;
			Param0.f_864 = 0;
			if (VDIST(*(&Param0 + 952), *(&Param0 + 640)) > 30.0f)
			{
				Param0.f_936 = 0;
				return;
			}
			if (Function_202(StackVal, *(&Param0 + 952), 1.0f, 75.0f, 1, 1, 0))
			{
				Param0.f_936 = 0;
			}
			break;
	}
	return;
}

bool Function_202(struct<2> Param0, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9E2F / 40495
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &fParam2, &fParam3, &iParam4, &iParam5, &iParam6);
}

int Function_203(struct<2> Param0, int iParam2, float fParam3, float fParam4, var uParam5, bool bParam6) //Position: 0x9E50 / 40528
{
	struct<2> Var0;
	var uVar2;
	struct<9> Var3;
	
	bVar6 = -1.0f;
	Function_218();
	uParam5 = Function_218();
	uVar2 = START_CURVE_QUERY(&Global_43578, Param0, iParam2, fParam3, fParam4, Function_168(((fParam4 - fParam3) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) < 0)
	{
		Function_205(StackVal, &uVar2, Param0, iParam2, fParam3, fParam4, Function_168(((fParam4 - fParam3) / 5.0f), 20.0f));
	}
	else
	{
		iVar7 = 0;
		while (iVar7 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar2, iVar7, &vVar3);
			if (!&bParam6 || !Function_204(&vVar3))
			{
				Var0 = vVar3.x;
				Var0.f_4 = vVar3.y;
				Var0.f_8 = vVar3.z;
				if (bVar6 > 0.0f || bVar6 < VDIST(Param0, Var0))
				{
					bVar6 = VDIST(Param0, Var0);
					uParam5 = Var0;
					uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar2, iVar7);
				}
			}
			iVar7++;
		}
	}
	UNK_0xDF93BD7C(&uVar2);
	return &uVar8;
}

bool Function_204(struct<13> Param0) //Position: 0x9F39 / 40761
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_205(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x9F5C / 40796
{
	PRINTSTRING("Curve Query Report: NumCurves-");
	PRINTINT(GET_NUM_CURVES_IN_CURVE_QUERY(&uParam0));
	PRINTSTRING(" NumPoints-");
	PRINTINT(GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0));
	PRINTSTRING(" SearchCenter-");
	PRINTVECTOR(Param1);
	PRINTSTRING(" curveMask-");
	PRINTINT(bParam3);
	PRINTSTRING(" min/max/freq-");
	PRINTFLOAT(bParam4);
	PRINTSTRING("/");
	PRINTFLOAT(bParam5);
	PRINTSTRING("/");
	PRINTFLOAT(bParam6);
	PRINTNL();
	Function_206(&uParam0);
}

void Function_206(int iParam0) //Position: 0xA016 / 40982
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= GET_NUM_CURVES_IN_CURVE_QUERY(&iParam0))
	{
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&iParam0, iVar0)));
		PRINTNL();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(&iParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(&iParam0, iVar0, &vVar1);
		Function_207(StackVal, StackVal, vVar1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&iParam0, iVar0)));
		PRINTNL();
		iVar0++;
	}
	return;
}

void Function_207(struct<17> Param0) //Position: 0xA08A / 41098
{
	Function_208(&Param0);
	PRINTVECTOR(Function_208(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

struct<8> Function_208(vector3 vParam0) //Position: 0xA0BD / 41149
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

struct<8> Function_209(bool bParam0) //Position: 0xA0DF / 41183
{
	struct<2> Var0;
	
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_212();
	Function_211(0);
	Function_210(bParam0);
	UNK_0x0AC99007(5.0f, 5.0f);
	UNK_0x30C67D05(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_218();
	return StackVal, Function_218();
}

void Function_210(bool bParam0) //Position: 0xA11A / 41242
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_211(float fParam0) //Position: 0xA1CD / 41421
{
	if (&fParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &fParam0), &fParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_212() //Position: 0xA214 / 41492
{
	float fVar0;
	bool bVar1;
	
	Function_213(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_213(var uParam0, bool bParam1) //Position: 0xA228 / 41512
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			bParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			bParam1 = 190.0f;
		}
	}
	return;
}

struct<8> Function_214(int iParam0, struct<2> Param1, struct<2> Param3, bool bParam5) //Position: 0xA2B9 / 41657
{
	int iVar0;
	bool bVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	struct<2> Var9;
	
	fVar4 = 100.0f;
	fVar5 = 75.0f;
	if (iParam0 == 1)
	{
		fVar4 = 175.0f;
		fVar5 = 125.0f;
	}
	iVar8 = 4294967295;
	while (!bVar3 && iVar6 > 10)
	{
		uVar7 = START_CURVE_QUERY(&iParam0 + 536, Param1, 48, fVar5, fVar4, 5.0f, 0);
		if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar7) < 0)
		{
			UNK_0xDF93BD7C(&uVar7);
			fVar5 = fVar4;
			fVar4 = (fVar4 + 25.0f);
		}
		else
		{
			if (!bParam5)
			{
				iVar8 = Function_215(StackVal, &uVar7, Param3, 4.0f, 0);
			}
			else
			{
				iVar8 = Function_215(StackVal, &uVar7, Param3, 18.0f, 0);
			}
			if (iVar8 == 4294967295)
			{
				UNK_0xDF93BD7C(&uVar7);
				fVar5 = fVar4;
				fVar4 = (fVar4 + 25.0f);
			}
			else
			{
				bVar3 = true;
			}
		}
		iVar6++;
	}
	if (iVar6 > 10)
	{
		iVar8 = 4294967295;
	}
	if (iVar8 != 4294967295)
	{
		GET_POINT_FROM_CURVE_QUERY(&uVar7, iVar8, &iVar0);
	}
	UNK_0xDF93BD7C(&uVar7);
	Function_208(&iVar0);
	Var9 = Function_208(&iVar0);
	return StackVal, Var9;
}

int Function_215(var uParam0, struct<2> Param1, float fParam3, int iParam4) //Position: 0xA3AF / 41903
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	bool bVar8;
	int iVar9;
	int iVar12;
	
	if (!IS_CURVE_QUERY_VALID(&uParam0))
	{
		LOG_ERROR("Invalid Curve Query");
		return 4294967295;
	}
	switch (&iParam4)
	{
		case 0x00000000:
			while ((StackVal || !(StackVal || FABS(((Function_204(&Var3) || !bVar6) - &fParam3 != -1.0f)) > &fParam3)) && iVar1 > 10)
			{
				iVar0 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uParam0, iVar0, &Var3);
				iVar1++;
				bVar6 = true;
			}
			if (iVar1 < 9 || !bVar6)
			{
				return 4294967295;
			}
			break;
		
		case 0x00000001:
			bVar7 = 1,001638E+07.0f;
			iVar0 = 4294967295;
			iVar2 = 0;
			while (iVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(&uParam0, iVar2, &Var3);
				Function_208(&Var3);
				bVar8 = VDIST(Function_208(&Var3), Param1);
				if (StackVal && (StackVal || FABS((((bVar8 > bVar7 && !Function_204(&Var3)) && !Function_216(&Var3)) - &fParam3 != -1.0f)) > &fParam3))
				{
					Function_207(StackVal, StackVal, Var3);
					PRINTNL();
					bVar7 = bVar8;
					iVar0 = iVar2;
				}
				else
				{
					Function_207(StackVal, StackVal, Var3);
					PRINTNL();
					if (bVar8 < bVar7)
					{
					}
					else if (Function_204(&Var3))
					{
					}
					else if (Function_216(&Var3))
					{
					}
					else if (StackVal && FABS((StackVal - &fParam3 == -1.0f)) < &fParam3)
					{
					}
					else if (&fParam3 != -1.0f)
					{
					}
				}
				iVar2++;
			}
			GET_POINT_FROM_CURVE_QUERY(&uParam0, iVar0, &Var3);
			break;
		
		case 0x00000002:
			bVar7 = 0.0f;
			iVar0 = 4294967295;
			iVar2 = 0;
			while (iVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(&uParam0, iVar2, &Var3);
				Function_208(&Var3);
				bVar8 = VDIST(Function_208(&Var3), Param1);
				if (StackVal && (StackVal || FABS((((bVar8 < bVar7 && !Function_204(&Var3)) && !Function_216(&Var3)) - &fParam3 != -1.0f)) > &fParam3))
				{
					bVar7 = bVar8;
					iVar0 = iVar2;
				}
				iVar2++;
			}
			GET_POINT_FROM_CURVE_QUERY(&uParam0, iVar0, &Var3);
			break;
		
		case 0x00000003:
			return 4294967295;
			break;
		
		case 0x00000004:
			break;
		
		default:
			return 4294967295;
			break;
	}
	if (Function_204(&Var3))
	{
		return 4294967295;
	}
	if (Function_216(&Var3))
	{
		return 4294967295;
	}
	if (Global_47267[1])
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0))
		{
			GET_POINT_FROM_CURVE_QUERY(&uParam0, iVar2, &iVar9);
			Function_208(&iVar9);
			iVar12 = Function_208(&iVar9);
			iVar2++;
		}
		Function_208(&Var3);
		iVar12 = Function_208(&Var3);
	}
	return iVar0;
}

bool Function_216(struct<21> Param0) //Position: 0xA625 / 42533
{
	return ((((StackVal && (StackVal && Param0 != 0.0f != 0.0f) != 0.0f) && Param0.f_12 != 0.0f) && Param0.f_16 != 0.0f) && Param0.f_20 != 4294967295);
}

int Function_217(vector3 vParam0) //Position: 0xA659 / 42585
{
	var uVar0;
	int iVar2;
	
	uVar0 = Vector(vParam0.x, (vParam0.y + 0,5f), vParam0.z);
	iVar2 = GET_MATERIAL_AT_VECTOR(&uVar0);
	if (iVar2 >= 0 || Function_108(iVar2, 1024))
	{
		return 1;
	}
	return 0;
}

struct<8> Function_218() //Position: 0xA68D / 42637
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_219(int iParam0) //Position: 0xA697 / 42647
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_220(int iParam0) //Position: 0xA6B4 / 42676
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_4())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_221(struct<937> Param0) //Position: 0xA6ED / 42733
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	var uVar10;
	var uVar11;
	var uVar12;
	
	if (!SQUAD_IS_VALID(&Param0 + 808))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Param0 + 536))
	{
		return 0;
	}
	if (!Param0.f_936 != 2 && !Param0.f_936 != 3)
	{
		return 0;
	}
	if (Param0.f_936 == 3)
	{
		Param0.f_936 = 0;
		return 0;
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		return 0;
	}
	Function_258(5.0f, 8);
	Var0 = { StackVal, Function_258(5.0f, 8) };
	Function_151(&Param0 + 724, 40.0f, &Var4, 10);
	uVar12 = 16;
	while (Param0.f_844 <= Param0.f_840)
	{
		Function_256(&Var0, Param0.f_844);
		Var6 = Function_256(&Var0, Param0.f_844);
		Var6 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 952), Var6, StackVal);
		Function_151(&Var6, 40.0f, &Var2, 10);
		Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var4, StackVal);
		Var8 = Vector(0.0f, UNK_0x9C40E671(&Var8), 0.0f);
		if (!Function_93(StackVal, Var2))
		{
			uVar10 = Function_242(StackVal, StackVal, &Param0, &Param0 + 536, Var2, Var8, &uVar12, Param0.f_844, 0, 1, 1);
		}
		if (IS_ACTOR_VALID(&uVar10))
		{
			if (IS_ACTOR_ALIVE(&uVar10))
			{
				Function_241(&Param0, &uVar10, &Param1 + 96);
			}
		}
		Param0.f_844++;
	}
	Function_258(4.0f, 10);
	Var0 = { StackVal, Function_258(4.0f, 10) };
	while (Param0.f_852 <= Param0.f_848)
	{
		Function_256(&Var0, Param0.f_852);
		Var6 = Function_256(&Var0, Param0.f_852);
		Var6 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param0 + 952), Var6, StackVal);
		Function_151(&Var6, 40.0f, &Var2, 10);
		Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var4, StackVal);
		Var8 = Vector(0.0f, UNK_0x9C40E671(&Var8), 0.0f);
		if (!Function_93(StackVal, Var2))
		{
			uVar11 = Function_238(StackVal, StackVal, &Param0 + 536, &Param0 + 528, Var2, Var8);
		}
		if (IS_ACTOR_VALID(&uVar11))
		{
			Function_222(&Param0, &uVar11, &Param1 + 96);
		}
		Param0.f_852++;
	}
	Param0.f_936 = 0;
	Param0.f_552 = GET_CURRENT_GAME_TIME();
	if (!Function_73(&Param0 + 808, 59, &Param1 + 96))
	{
		if (GET_WEAPON_IN_HAND(&Param1 + 96) == 4294967295)
		{
			Function_268(&Param0 + 808, "law_go_wanted_unarmed", 5.0f, Param1.f_116, 20.0f, 1, 0);
		}
		else
		{
			Function_268(&Param0 + 808, "law_go_wanted", 5.0f, Param1.f_116, 20.0f, 1, 0);
		}
	}
	return 1;
}

void Function_222(struct<1009> Param0) //Position: 0xA957 / 43351
{
	Function_223(&iParam1, Function_237(Function_31(Param0.f_1008), Param0));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam1, 31, -1.0f);
	SQUAD_JOIN(&iParam1, &Param0 + 816);
	SET_ACTOR_UPDATE_PRIORITY(&iParam1, false);
	MEMORY_CONSIDER_AS_ENEMY(&iParam1, &iParam2);
	MEMORY_IDENTIFY(&iParam1, &iParam2);
	MEMORY_REPORT_POSITION_AUTO(&iParam1, &iParam2, 1);
	TASK_PRIORITY_SET(&iParam1, true);
	SET_TOUGH_ACTOR(&iParam1, 1);
	AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(&iParam1), 1,5f);
	TASK_GO_TO_COORD_NONSTOP(&iParam1, &Param0 + 724, 3, 15.0f);
	ADD_BLIP_FOR_ACTOR(&iParam1, 322, 0, 2, 0);
	SET_BLIP_SCALE(GET_BLIP_ON_ACTOR(&iParam1), 0,7f);
	return;
}

void Function_223(int iParam0, int iParam1) //Position: 0xA9F5 / 43509
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_236(&iParam0);
			break;
		
		case 0x00000001:
			Function_235(&iParam0);
			break;
		
		case 0x00000002:
			Function_234(&iParam0);
			break;
		
		case 0x00000005:
			Function_233(&iParam0);
			break;
		
		case 0x00000004:
			Function_232(&iParam0);
			break;
		
		case 0x00000003:
			Function_231(&iParam0);
			break;
		
		case 0x00000006:
			Function_230(&iParam0);
			break;
		
		case 0x00000007:
			Function_229(&iParam0);
			break;
		
		case 0x00000008:
			Function_228(&iParam0);
			break;
		
		case 0x00000009:
			Function_226(&iParam0);
			break;
		
		default:
			Function_224(&iParam0);
			break;
	}
	if (GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(&iParam0)) == 12)
	{
		if (RAND_INT_RANGE(0, 10000) <= 3000)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 6, true);
		}
	}
	return;
}

void Function_224(int iParam0) //Position: 0xAACF / 43727
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(&iParam0, 0.0f);
	Function_225(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_225(var uParam0, bool bParam1) //Position: 0xAE8D / 44685
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_226(int iParam0) //Position: 0xAEB0 / 44720
{
	Function_224(&iParam0);
	Function_227(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iParam0, 1);
	return;
}

void Function_227(int iParam0, int iParam1) //Position: 0xB079 / 45177
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(&iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &iVar0, iParam1);
	}
	return;
}

void Function_228(int iParam0) //Position: 0xB0B2 / 45234
{
	Function_224(&iParam0);
	Function_227(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 2,25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iParam0, 1);
	return;
}

void Function_229(int iParam0) //Position: 0xB287 / 45703
{
	Function_224(&iParam0);
	Function_227(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iParam0, 1);
	return;
}

void Function_230(int iParam0) //Position: 0xB442 / 46146
{
	Function_224(&iParam0);
	Function_227(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 240.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 10.0f);
	return;
}

void Function_231(int iParam0) //Position: 0xB594 / 46484
{
	Function_224(&iParam0);
	Function_227(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	return;
}

void Function_232(int iParam0) //Position: 0xB744 / 46916
{
	Function_224(&iParam0);
	Function_227(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 2,25f);
	return;
}

void Function_233(int iParam0) //Position: 0xB8C0 / 47296
{
	Function_224(&iParam0);
	Function_227(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 10.0f);
	return;
}

void Function_234(int iParam0) //Position: 0xBA1D / 47645
{
	Function_224(&iParam0);
	Function_227(&iParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,85f);
	return;
}

void Function_235(int iParam0) //Position: 0xBA44 / 47684
{
	Function_224(&iParam0);
	Function_227(&iParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,25f);
	return;
}

void Function_236(int iParam0) //Position: 0xBBD1 / 48081
{
	Function_224(&iParam0);
	Function_227(&iParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,85f);
	return;
}

int Function_237(int iParam0, bool bParam1) //Position: 0xBC12 / 48146
{
	if (bParam1 != 2 || iParam0 <= 800)
	{
		return 9;
	}
	if (bParam1 != 3 || iParam0 <= 400)
	{
		return 8;
	}
	return 7;
}

var Function_238(var uParam0, var uParam1, struct<2> Param2, struct<2> Param4) //Position: 0xBC3B / 48187
{
	var uVar0;
	
	if (!Function_240(&uParam1, 0, 4294967295, 0))
	{
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam0, Function_239(Function_50(), &uParam1, Param2, 0, 16, 0), Param2, Param4);
	return &uVar0;
}

var Function_239(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5) //Position: 0xBC77 / 48247
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &iParam3, &iParam4, &iParam5, 1,401298E-45f, Param1);
}

bool Function_240(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xBC93 / 48275
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

void Function_241(struct<1009> Param0) //Position: 0xBCBF / 48319
{
	Function_223(&uParam1, Function_237(Function_31(Param0.f_1008), Param0));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam1, 31, -1.0f);
	SQUAD_JOIN(&uParam1, &Param0 + 808);
	SET_ACTOR_UPDATE_PRIORITY(&uParam1, false);
	if (!Global_42250)
	{
		MEMORY_CONSIDER_AS_ENEMY(&uParam1, &bParam2);
	}
	MEMORY_IDENTIFY(&uParam1, &bParam2);
	MEMORY_REPORT_POSITION_AUTO(&uParam1, &Global_54076, 0);
	MEMORY_REPORT_POSITION(&uParam1, &bParam2, &Param0 + 724);
	SET_ACTOR_VISION_XRAY(&uParam1, 0);
	ACTOR_DRAW_LAST_WEAPON(&uParam1, 0);
	AI_BEHAVIOR_SET_ALLOW(&uParam1, 0, 0);
	TASK_PRIORITY_SET(&uParam1, 2);
	SET_TOUGH_ACTOR(&uParam1, 1);
	if (Param0 == 2 && Param0 == 3)
	{
		AI_SET_RANGE_ACCURACY_MODIFIER(&uParam1, &bParam2, -8.0f);
	}
	AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(&uParam1), 1,5f);
	if (Param0.f_624)
	{
		DECOR_SET_BOOL(&uParam1, "CanBeLasso", 0);
	}
	if (Function_271(0x4000000))
	{
		SET_ACTOR_VISION_MAX_RANGE(&uParam1, 45.0f, 1);
	}
	SET_ACTOR_VISION_FIELD_OF_VIEW(&uParam1, 235.0f);
	if (Param0.f_892 != 14)
	{
		if (!Global_42250 && Global_43789 == Global_46866[1])
		{
		}
	}
	else
	{
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam1)))
		{
			Function_36(GET_MOUNT(&uParam1), &Global_54076, -1.0f, -1.0f, 0, 0);
			RELEASE_ACTOR(GET_MOUNT(&uParam1));
		}
		MEMORY_PREFER_WALKING(&uParam1, 1);
		SET_ACTOR_VISION_XRAY(&uParam1, 1);
	}
	if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam1) == 0)
	{
		if (!DECOR_CHECK_EXIST(&uParam1, "lawSetSpawnParams"))
		{
			GIVE_WEAPON_TO_ACTOR(&uParam1, 4, 0f, 1, 1);
		}
	}
	MEMORY_PREFER_MELEE(&uParam1, 0);
	MEMORY_ALLOW_SHOOTING(&uParam1, 1);
	if (!Param0.f_772)
	{
		AI_SET_SHOTS_PER_BURST(&uParam1, 1);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam1, 5.0f, 2.0f);
		AI_SET_BURST_DURATION(&uParam1, 0,1f);
		AI_SET_BURST_DURATION_RANDOMNESS(&uParam1, 0.0f);
		AI_SET_FIRE_DELAY(&uParam1, 2.0f);
		AI_SET_FIRE_DELAY_RANDOMNESS(&uParam1, 2.0f);
	}
	DECOR_SET_BOOL(&uParam1, "lawSetSpawnParams", 1);
	return;
}

var Function_242(struct<833> Param0) //Position: 0xBEA9 / 48809
{
	var uVar0;
	char* cVar1[32];
	int iVar9;
	struct<6> Var10;
	
	if (&bParam8)
	{
		uVar0 = Function_254(&Param0);
	}
	if (!IS_ACTOR_VALID(&uVar0) && !(bParam8 && !&bParam10))
	{
		Function_249(&Param0);
		if (Param0.f_832 > 0)
		{
			strcpy(&cVar1, Function_50(), 32);
			if (!&bParam9)
			{
				uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam1, &cVar1, Function_248(&Param0), Param2, Param4);
			}
			else
			{
				iVar9 = Function_239(StackVal, &(Global_46972[6]), Param2, 4, 23, 0);
				if (Function_247(iVar9, &iParam6))
				{
					iVar9 = 976;
				}
				iParam6[iParam7] = iVar9;
				Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_246() };
				uVar0 = Function_244(StackVal, StackVal, &uParam1, &cVar1, Function_248(&Param0), &Var10, iVar9, Param2, Param4);
			}
		}
		if (IS_ACTOR_VALID(&uVar0))
		{
			Function_243(&Param0);
		}
	}
	return &uVar0;
}

void Function_243(struct<861> Param0) //Position: 0xBF74 / 49012
{
	if (Param0.f_832 > 0)
	{
		Param0.f_860++;
		(*&Param0 + 280)[Param0.f_832] = Param0.f_860;
	}
	return;
}

var Function_244(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0xBFA6 / 49062
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_245(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_245(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_245(int iParam0) //Position: 0xC0DF / 49375
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<24> Function_246() //Position: 0xC0F6 / 49398
{
	char* cVar0[24];
	
	strcpy(&cVar0, "lawhorse", 24);
	stradd(&cVar0, INT_TO_STRING(Global_42260), 24);
	Global_42260++;
	if (Global_42260 > 99999)
	{
		Global_42260 = 0;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_247(int iParam0, int[] iParam1) //Position: 0xC131 / 49457
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (iParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_248(struct<833> Param0) //Position: 0xC165 / 49509
{
	int iVar0;
	
	iVar0 = &Param0 + 80[Param0.f_8322];
	if (Function_245(iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

void Function_249(struct<833> Param0) //Position: 0xC187 / 49543
{
	Param0.f_832 = Function_250(&Param0, 1);
	return;
}

int Function_250(int iParam0, bool bParam1) //Position: 0xC19A / 49562
{
	int iVar0;
	int iVar1;
	
	iVar1 = RAND_INT_RANGE(0, 11);
	iVar0 = iVar1;
	while (iVar0 < 11)
	{
		if (Function_253(&iParam0, iVar0))
		{
			if (!Function_252(&iParam0, iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Function_253(&iParam0, iVar0))
		{
			if (!Function_252(&iParam0, iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	if (&bParam1)
	{
		Function_251(&iParam0);
		return Function_250(&iParam0, 0);
	}
	return 4294967295;
}

void Function_251(struct<861> Param0) //Position: 0xC218 / 49688
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = (Param0.f_856 - 4);
	if (iVar1 >= 8)
	{
		iVar1 = 8;
	}
	iVar2 = (Param0.f_860 - iVar1);
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((*&Param0 + 280)[iVar0] <= iVar2)
		{
			(*&Param0 + 280)[iVar0] = 0;
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 <= 3)
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			(*&Param0 + 280)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

bool Function_252(int iParam0, int iParam1) //Position: 0xC298 / 49816
{
	if ((*&iParam0 + 280)[iParam1] >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_253(int iParam0, int iParam1) //Position: 0xC2AF / 49839
{
	bool bVar0;
	
	bVar0 = &iParam0 + 80[iParam12];
	if (bVar0 != 0)
	{
		if (STREAMING_IS_ACTOR_LOADED(bVar0, 4294967295))
		{
			return 1;
		}
	}
	return 0;
}

var Function_254(struct<589> Param0) //Position: 0xC2D3 / 49875
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param0.f_588 > Param0.f_584)
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(&Global_98981) < Param0.f_588)
	{
		return "";
	}
	if (GET_OBJECT_TYPE(GET_INDEXED_OBJECT_IN_OBJECTSET(Param0.f_588, &Global_98981)) == 15)
	{
		iVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(Param0.f_588, &Global_98981));
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (IS_ACTOR_ALIVE(&iVar0))
			{
				REFERENCE_ACTOR(&iVar0);
				TASK_CLEAR(&iVar0);
				MEMORY_REPORT_POSITION_AUTO(&iVar0, &Global_54076, 0);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar0);
				Param0.f_588++;
			}
			else
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &Global_98981);
				Param0.f_584 = GET_OBJECTSET_SIZE(&Global_98981);
			}
		}
		else
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &Global_98981);
			Param0.f_584 = GET_OBJECTSET_SIZE(&Global_98981);
		}
	}
	else if (GET_OBJECT_TYPE(GET_INDEXED_OBJECT_IN_OBJECTSET(Param0.f_588, &Global_98981)) == 24)
	{
		uVar1 = GET_PERS_CHAR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(Param0.f_588, &Global_98981));
		GET_OBJECT_POSITION(&uVar1, &uVar2);
		if (!WOULD_ACTOR_BE_VISIBLE(false, &uVar2, 3212836864) || IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&uVar1)))
		{
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&uVar1);
			iVar0 = GET_ACTOR_FROM_PERS_CHAR(&uVar1);
			if (IS_ACTOR_VALID(&iVar0))
			{
				if (IS_ACTOR_ALIVE(&iVar0))
				{
					REFERENCE_ACTOR(&iVar0);
					TASK_CLEAR(&iVar0);
					MEMORY_REPORT_POSITION_AUTO(&iVar0, &Global_54076, 0);
					Param0.f_588++;
					Function_255(&uVar1, 1);
					TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar0);
				}
				else
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&uVar1, &Global_98981);
					Param0.f_584 = GET_OBJECTSET_SIZE(&Global_98981);
				}
			}
			else if (!IS_PERS_CHAR_ALIVE(&uVar1))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&uVar1, &Global_98981);
				Param0.f_584 = GET_OBJECTSET_SIZE(&Global_98981);
			}
			else
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_PERS_CHAR(&uVar1), "lateSharedLaw", 1);
				Param0.f_588++;
			}
		}
	}
	Function_43(&iVar0, 1);
	return &iVar0;
}

int Function_255(bool bParam0, bool bParam1) //Position: 0xC4BA / 50362
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&bParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bParam0, 1);
			return 1;
		}
	}
	return 0;
}

struct<8> Function_256(vector3 vParam0) //Position: 0xC56C / 50540
{
	struct<2> Var0;
	
	if (!Function_257(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, bParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_257(int iParam0) //Position: 0xC6B9 / 50873
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_258(float fParam0, int iParam1) //Position: 0xC6DD / 50909
{
	struct<2> Var0;
	
	Var0.f_8 = fParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_259(struct<1009> Param0) //Position: 0xC6F8 / 50936
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	struct<2> Var3;
	struct<9> Var5;
	
	switch (Param0.f_936)
	{
		case 0x00000000:
			bVar2 = Function_217(StackVal, (&Param0 + 640));
			if (Param0.f_972 > 3)
			{
				bVar2 = true;
			}
			if (GET_MOUNT(&iParam1 + 96) != "" && GET_VEHICLE(&iParam1 + 96) != "")
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (Function_271(0x1000000) && Global_21575 == 1)
			{
				Function_219(0x1000000);
				Function_218();
				(&Global_39922 + 280) = Function_218();
			}
			if (StackVal && !Function_93(Function_271(0x1000000), *(&Global_39922 + 280)))
			{
				if (StackVal <= 1000.0f)
				{
					(&Global_39922 + 280)->f_4 = (StackVal - 1000.0f);
				}
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Global_39922 + 280), 1.0f))
				{
					*(&Param0 + 952) = *(&Global_39922 + 280);
				}
			}
			else if ((!bVar0 && IS_LAYOUTREF_VALID(&Param0 + 544)) && !Param0 != 1)
			{
				uVar1 = Function_261(&Param0, "nlaw_spawn");
				if (IS_OBJECT_VALID(&uVar1))
				{
					GET_OBJECT_POSITION(&uVar1, &Param0 + 952);
					Param0.f_964 = 1;
					if (Function_93(StackVal, *(&Param0 + 952)) || VDIST(*(&Param0 + 952), *(&Param0 + 640)) < (110.0f * 0,75f))
					{
						Function_260(0);
						*(&Param0 + 952) = Function_260(0);
					}
				}
			}
			else if (Param0 == 3)
			{
				Function_260(0);
				*(&Param0 + 952) = Function_260(0);
			}
			else
			{
				Function_214(StackVal, StackVal, &Param0, *(&Param0 + 640), *(&Param0 + 724), bVar2);
				*(&Param0 + 952) = Function_214(StackVal, StackVal, &Param0, *(&Param0 + 640), *(&Param0 + 724), bVar2);
			}
			Function_218();
			*(&Global_39922 + 280) = Function_218();
			if (Function_93(StackVal, *(&Param0 + 952)))
			{
				Function_260(0);
				*(&Param0 + 952) = Function_260(0);
			}
			if (Function_93(StackVal, *(&Param0 + 952)))
			{
				*(&Param0 + 952) = Vector(0.0f, 0.0f, 0.0f);
				return;
			}
			if (!bVar2)
			{
				if (StackVal < (StackVal + 10.0f) && !bVar0)
				{
					*(&Param0 + 952) = Vector(0.0f, 0.0f, 0.0f);
					return;
				}
				if (StackVal > (StackVal - 10.0f) && !bVar0)
				{
					*(&Param0 + 952) = Vector(0.0f, 0.0f, 0.0f);
					return;
				}
			}
			if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 952), 1.0f))
			{
				*(&Param0 + 952) = Vector(0.0f, 0.0f, 0.0f);
				return;
			}
			if (IS_ACTOR_VALID(&iParam1 + 96))
			{
				if ((Param0 != 1 || Param0 != 3) || Param0 != 2)
				{
					Function_96(&iParam1 + 96);
					Var3 = Function_96(&iParam1 + 96);
					vVar5 = Vector(32.0f, 96.0f, 2741.0f);
					if (VDIST(Var3, vVar5) >= 70.0f)
					{
						if (Param0.f_1008 == 1)
						{
							if (StackVal > vVar5.z)
							{
								*(&Param0 + 952) = Vector(0.0f, 0.0f, 0.0f);
								return;
							}
						}
						if (StackVal < vVar5.z)
						{
							*(&Param0 + 952) = Vector(0.0f, 0.0f, 0.0f);
							return;
						}
					}
				}
			}
			*(&Param0 + 944) = CREATE_NAV_QUERY(&Param0 + 536, Function_50());
			if (!bVar2)
			{
				Var7 = *(&Param0 + 640);
			}
			else if (Global_43789 != Global_46866[0])
			{
				if (Function_203(StackVal, *(&Param0 + 640), 2096, 0.0f, 150.0f, &Var7, 0) != "")
				{
				}
				else
				{
					Var7 = (&Param0 + 640);
				}
			}
			else
			{
				Var7 = Vector(-2759,01f, 32,06f, 4269,67f);
			}
			if (bVar0 && !bVar2)
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(&Param0 + 944, *(&Param0 + 952), Var7, 976);
			}
			else
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(&Param0 + 944, *(&Param0 + 952), Var7, false);
			}
			Param0.f_968 = GET_CURRENT_GAME_TIME();
			Param0.f_936 = 1;
			break;
		
		case 0x00000001:
			if (!NAV_QUERY_IS_DONE(&Param0 + 944))
			{
				if (Param0.f_968 + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					Param0.f_936 = 0;
					NAV_QUERY_STOP(&Param0 + 944);
					DESTROY_OBJECT(&Param0 + 944);
				}
				return;
			}
			if (!NAV_QUERY_CAN_PATH_TO_POINT(&Param0 + 944))
			{
				Param0.f_972++;
				NAV_QUERY_STOP(&Param0 + 944);
				DESTROY_OBJECT(&Param0 + 944);
				Param0.f_936 = 3;
				return;
			}
			NAV_QUERY_STOP(&Param0 + 944);
			Param0.f_936 = 2;
			break;
		
		case 0x00000002:
			Param0.f_972 = 0;
			if (VDIST(*(&Param0 + 952), *(&Param0 + 640)) > 30.0f)
			{
				Param0.f_936 = 0;
				return;
			}
			if (Function_202(StackVal, *(&Param0 + 952), 1.0f, 50.0f, 1, 1, 0))
			{
				Param0.f_936 = 0;
			}
			break;
	}
	return;
}

struct<8> Function_260(int iParam0) //Position: 0xCB7B / 52091
{
	struct<2> Var0;
	
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_212();
	Function_211(0);
	Function_210(iParam0);
	UNK_0x0AC99007(5.0f, 5.0f);
	UNK_0x30C67D05(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_218();
	return StackVal, Function_218();
}

var Function_261(int iParam0, int iParam1) //Position: 0xCBB6 / 52150
{
	int iVar0;
	var uVar1;
	
	uVar1 = CREATE_OBJECT_ITERATOR(&iParam0 + 536);
	ITERATE_IN_LAYOUT(&uVar1, &iParam0 + 544);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar1, &iParam1);
	iVar0 = START_OBJECT_ITERATOR(&uVar1);
	if (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_ITERATOR(&uVar1);
		return &iVar0;
	}
	DESTROY_ITERATOR(&uVar1);
	return "";
}

int Function_262(struct<2>[] Param0) //Position: 0xCC0B / 52235
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_266();
	iVar1 = 0;
	if (!Function_29(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_265(&(Param0[iVar02]), 8);
		}
		else if (Function_264())
		{
			iVar1 = 1;
			Function_265(&(Param0[iVar02]), 8);
		}
		Function_265(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_29(&(Param0[iVar02]), 4))
		{
			if (!Function_29(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_29(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_29(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_265(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_29(&(Param0[iVar02]), 4))
		{
			if (!Function_29(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
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
	Function_263();
	return 1;
}

void Function_263() //Position: 0xCFCD / 53197
{
	if (!Function_118(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_264() //Position: 0xD00D / 53261
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_265(struct<13> Param0) //Position: 0xD03B / 53307
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_266() //Position: 0xD04E / 53326
{
	if (!Function_118(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

void Function_267(int iParam0) //Position: 0xD090 / 53392
{
	if (!IS_LAYOUTREF_VALID(&iParam0 + 544))
	{
		(&iParam0 + 544) = &Global_46715;
	}
	return;
}

void Function_268(int iParam0, char* cParam1) //Position: 0xD0AF / 53423
{
	int iVar0;
	
	iVar0 = Function_269();
	if (iVar0 == 4294967295)
	{
		return;
	}
	strcpy(&(Global_42046[iVar020]), &cParam1, 64);
	Global_42046[iVar020].f_128 = fParam2;
	Global_42046[iVar020].f_152 = uParam3;
	Global_42046[iVar020].f_132 = &fParam4;
	Global_42046[iVar020].f_136 = &iParam5;
	*(&Global_42046[iVar020] + 144) = &iParam0;
	Global_42046[iVar020].f_140 = &iParam6;
}

var Function_269() //Position: 0xD118 / 53528
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_42046)
	{
		if (Global_42046[iVar020].f_128 > 0,5f)
		{
			return iVar0;
		}
		if (Global_42046[iVar020].f_140)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_270(struct<857> Param0) //Position: 0xD157 / 53591
{
	int iVar0;
	float fVar1;
	
	if (Param0.f_856 >= 6)
	{
		iVar0 = (Param0.f_856 - 6);
		fVar1 = (1.0f - (IntToFloat(iVar0) * 0,12f));
		SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(fVar1);
	}
	return;
}

bool Function_271(int iParam0) //Position: 0xD183 / 53635
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_272(struct<1009> Param0) //Position: 0xD1A1 / 53665
{
	Param0.f_700 = GET_CURRENT_GAME_TIME();
	Param0 = 1;
	Param0.f_1008 = StackVal;
	Global_21542 = 0,01f;
	Function_284(&Param0);
	if (Param1.f_120 == 0)
	{
		Param1.f_120 = Function_283(Param1.f_116, Param1.f_88);
	}
	Param0.f_840 = Param1.f_120;
	Function_279(&Param0, Param0.f_840, 0);
	Param0.f_848 = Function_278(Param1.f_88);
	*(&Param0 + 536) = Function_277("PosseLawResponse");
	*(&Param0 + 808) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 536, "lawSquad"));
	*(&Param0 + 816) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 536, "dogSquad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 808, 648);
	SQUAD_SET_FACTION(&Param0 + 808, Param1.f_104);
	*(&Param0 + 560) = Function_276(&Param1 + 96, 3, 0);
	if (IS_CRIME_VALID(&Param0 + 560))
	{
		GET_CRIME_POSITION(&Param0 + 560, &Param0 + 712);
		Param0.f_664 = Function_129(GET_CURRENT_GAME_TIME(), Function_129(GET_CRIME_BEGIN_TIMESTAMP(&Param0 + 560), GET_CRIME_END_TIMESTAMP(&Param0 + 560)));
	}
	else
	{
		GET_POSITION(&Param1 + 96, &Param0 + 712);
		Param0.f_664 = GET_CURRENT_GAME_TIME();
	}
	GET_POSITION(&Param1 + 96, &Param0 + 640);
	*(&Param0 + 724) = *(&Param0 + 640);
	Param0.f_576 = GET_CURRENT_GAME_TIME();
	Param0.f_668 = Param0.f_664;
	Param0.f_672 = Param0.f_664;
	*(&Param0 + 632) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Param0 + 536, Function_50(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 20.0f, 30.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 632, &Param1 + 96, Function_50(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	*(&Param0 + 544) = &Global_40000 + 16;
	Function_275(&Param0, &Param1);
	if (IS_OBJECTSET_VALID(&Global_98981))
	{
		CLEAN_OBJECTSET(&Global_98981);
		Param0.f_584 = GET_OBJECTSET_SIZE(&Global_98981);
		PRINTINT(Param0.f_584);
		PRINTNL();
	}
	if (!Function_19(Global_119935, 128))
	{
		Function_14(&Global_54076, 128, 2, 0);
	}
	Function_273();
	return;
}

void Function_273() //Position: 0xD3DE / 54238
{
	if (!Function_20(25, 0))
	{
		if (!Function_19(Global_119935, 0x1000000))
		{
			Function_274(&Global_119936, 32768);
		}
	}
	return;
}

void Function_274(var uParam0, int iParam1) //Position: 0xD409 / 54281
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_275(int iParam0, struct<117> Param1) //Position: 0xD423 / 54307
{
	*(&iParam0 + 528) = CREATE_POPULATION_SET_IN_LAYOUT(&iParam0 + 536, "law_dogs", 1);
	if (Param1.f_116 == 0)
	{
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1033, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1034, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1035, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1036, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1042, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1043, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1041, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1044, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1037, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1038, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1039, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1040, 10.0f);
		if (Global_43787 == 2)
		{
			LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1045, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1046, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1047, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1048, 10.0f);
		}
		else
		{
			LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1042, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1043, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1041, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1044, 10.0f);
		}
	}
	else
	{
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1030, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1031, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1032, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1037, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1038, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1039, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(&iParam0 + 528, 1040, 10.0f);
	}
	return;
}

var Function_276(int iParam0, int iParam1, int iParam2) //Position: 0xD642 / 54850
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return "";
	}
	if (!Function_134(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	iVar1 = 0;
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar3 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_133(&uVar2, &uVar3);
	iVar4 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar4))
	{
		iVar6 = GET_CRIME_FROM_OBJECT(&iVar4);
		if (GET_CRIME_CRIMINAL(&iVar6) != &iParam0 && GET_CRIME_WITNESSED(&iVar6) <= iParam1)
		{
			if (Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40 < iVar1 && Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40 < &iParam2)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(&iVar6);
				iVar5 = &iVar6;
				iVar1 = Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40;
			}
			else if (Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40 != iVar1 && Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40 < &iParam2)
			{
				if (GET_CRIME_END_TIMESTAMP(&iVar6) < fVar0)
				{
					fVar0 = GET_CRIME_END_TIMESTAMP(&iVar6);
					iVar5 = &iVar6;
					iVar1 = Global_41252[GET_CRIME_TYPE(&iVar6)11].f_40;
				}
			}
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	DESTROY_ITERATOR(&uVar2);
	return &iVar5;
}

var Function_277(int iParam0) //Position: 0xD771 / 55153
{
	int iVar0;
	
	iVar0 = CREATE_LAYOUT(&iParam0);
	return &iVar0;
}

int Function_278(int iParam0) //Position: 0xD783 / 55171
{
	if (iParam0 <= 1700)
	{
		return 0;
	}
	if (iParam0 <= 3700)
	{
		return 1;
	}
	if (iParam0 <= 5000)
	{
		return 2;
	}
	if (iParam0 <= 7000)
	{
		return 3;
	}
	return 4;
	return 0;
}

void Function_279(struct<1009> Param0) //Position: 0xD7C0 / 55232
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	bVar0 = true;
	iVar1 = iParam1;
	iVar2 = 0;
	if (!&bParam2)
	{
		iVar3 = Function_282(Param0.f_1008, Param0);
	}
	else
	{
		iVar3 = Function_282(Param0.f_1008, 5);
	}
	if (iVar3 > 0)
	{
		iVar4 = 0;
		while (iVar4 <= Param0.f_384)
		{
			(*&Param0 + 384)[iVar4] = 0;
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= Param0.f_280)
		{
			(*&Param0 + 280)[iVar4] = 0;
			iVar4++;
		}
		if (iVar1 >= iVar3)
		{
			iVar1 = iVar3;
		}
		while (bVar0)
		{
			iVar5 = RAND_INT_RANGE(0, (iVar3 - 1));
			bVar6 = false;
			while (!bVar6)
			{
				if (!(*&Param0 + 384)[iVar5])
				{
					bVar6 = true;
				}
				else
				{
					iVar5++;
					if (iVar5 > iVar3)
					{
						iVar5 = 0;
					}
				}
			}
			if (!&bParam2)
			{
				Function_280(&Param0, iVar5, 0);
			}
			else
			{
				Function_280(&Param0, iVar5, 1);
			}
			iVar2++;
			(*&Param0 + 384)[iVar5] = 1;
			if (iVar2 == iVar1)
			{
				bVar0 = false;
			}
		}
		Param0.f_856 = iParam1;
	}
	return;
}

void Function_280(struct<1009> Param0) //Position: 0xD8CB / 55499
{
	if (!&bParam2)
	{
		switch (Param0)
		{
			case 0x00000000:
			case 0x00000001:
				if (Param0.f_1008 == 0)
				{
					if (Global_43789 == Global_46914[0])
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 184, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 185, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 186, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 187, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 188, 3, 0);
								break;
						}
					}
					else if (Global_43787 == 2)
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 438, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 424, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 426, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 434, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 435, 3, 0);
								break;
							
							case 0x00000005:
								Function_281(&Param0 + 80, 447, 3, 0);
								break;
							
							case 0x00000006:
								Function_281(&Param0 + 80, 448, 3, 0);
								break;
							
							case 0x00000007:
								Function_281(&Param0 + 80, 184, 3, 0);
								break;
							
							case 0x00000008:
								Function_281(&Param0 + 80, 185, 3, 0);
								break;
							
							case 0x00000009:
								Function_281(&Param0 + 80, 186, 3, 0);
								break;
							
							case 0x0000000A:
								Function_281(&Param0 + 80, 187, 3, 0);
								break;
							
							case 0x0000000B:
								Function_281(&Param0 + 80, 188, 3, 0);
								break;
						}
					}
					else if (Global_43787 == 0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 436, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 437, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 440, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 441, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 442, 3, 0);
								break;
							
							case 0x00000005:
								Function_281(&Param0 + 80, 443, 3, 0);
								break;
							
							case 0x00000006:
								Function_281(&Param0 + 80, 444, 3, 0);
								break;
							
							case 0x00000007:
								Function_281(&Param0 + 80, 445, 3, 0);
								break;
							
							case 0x00000008:
								Function_281(&Param0 + 80, 446, 3, 0);
								break;
							
							case 0x00000009:
								Function_281(&Param0 + 80, 425, 3, 0);
								break;
							
							case 0x0000000A:
								Function_281(&Param0 + 80, 427, 3, 0);
								break;
							
							case 0x0000000B:
								Function_281(&Param0 + 80, 428, 3, 0);
								break;
							
							case 0x0000000C:
								Function_281(&Param0 + 80, 429, 3, 0);
								break;
							
							case 0x0000000D:
								Function_281(&Param0 + 80, 430, 3, 0);
								break;
							
							case 0x0000000E:
								Function_281(&Param0 + 80, 431, 3, 0);
								break;
							
							case 0x0000000F:
								Function_281(&Param0 + 80, 432, 3, 0);
								break;
							
							case 0x00000010:
								Function_281(&Param0 + 80, 433, 3, 0);
								break;
							}
					}
				}
				else if (Param0.f_1008 == 1)
				{
					if (Global_46720 > 3)
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 521, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 522, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 523, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 529, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 530, 3, 0);
								break;
							
							case 0x00000005:
								Function_281(&Param0 + 80, 531, 3, 0);
								break;
						}
					}
					else if (Global_43789 == Global_46850[0])
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 461, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 462, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 463, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 464, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 465, 3, 0);
								break;
							
							case 0x00000005:
								Function_281(&Param0 + 80, 466, 3, 0);
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 455, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 456, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 457, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 458, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 459, 3, 0);
								break;
							
							case 0x00000005:
								Function_281(&Param0 + 80, 460, 3, 0);
								break;
							}
						}
				}
				break;
			
			case 0x00000002:
				if (Param0.f_1008 == 0)
				{
					switch (iParam1)
					{
						case 0x00000000:
							Function_281(&Param0 + 80, 449, 3, 0);
							break;
						
						case 0x00000001:
							Function_281(&Param0 + 80, 450, 3, 0);
							break;
						
						case 0x00000002:
							Function_281(&Param0 + 80, 451, 3, 0);
							break;
						
						case 0x00000003:
							Function_281(&Param0 + 80, 452, 3, 0);
							break;
						
						case 0x00000004:
							Function_281(&Param0 + 80, 453, 3, 0);
							break;
						
						case 0x00000005:
							Function_281(&Param0 + 80, 454, 3, 0);
							break;
					}
				}
				else if (Param0.f_1008 == 1)
				{
					switch (iParam1)
					{
						case 0x00000000:
							Function_281(&Param0 + 80, 379, 3, 0);
							break;
						
						case 0x00000001:
							Function_281(&Param0 + 80, 380, 3, 0);
							break;
						
						case 0x00000002:
							Function_281(&Param0 + 80, 381, 3, 0);
							break;
						
						case 0x00000003:
							Function_281(&Param0 + 80, 391, 3, 0);
							break;
						
						case 0x00000004:
							Function_281(&Param0 + 80, 392, 3, 0);
							break;
						
						case 0x00000005:
							Function_281(&Param0 + 80, 393, 3, 0);
							break;
						}
				}
				break;
			
			case 0x00000003:
				switch (Global_43787)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 397, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 398, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 399, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 400, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 401, 3, 0);
								break;
							
							case 0x00000005:
								Function_281(&Param0 + 80, 402, 3, 0);
								break;
							
							case 0x00000006:
								Function_281(&Param0 + 80, 403, 3, 0);
								break;
							
							case 0x00000007:
								Function_281(&Param0 + 80, 404, 3, 0);
								break;
							
							case 0x00000008:
								Function_281(&Param0 + 80, 405, 3, 0);
								break;
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 415, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 416, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 417, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 418, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 419, 3, 0);
								break;
							
							case 0x00000005:
								Function_281(&Param0 + 80, 420, 3, 0);
								break;
							
							case 0x00000006:
								Function_281(&Param0 + 80, 421, 3, 0);
								break;
							
							case 0x00000007:
								Function_281(&Param0 + 80, 422, 3, 0);
								break;
							
							case 0x00000008:
								Function_281(&Param0 + 80, 423, 3, 0);
								break;
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								Function_281(&Param0 + 80, 406, 3, 0);
								break;
							
							case 0x00000001:
								Function_281(&Param0 + 80, 407, 3, 0);
								break;
							
							case 0x00000002:
								Function_281(&Param0 + 80, 408, 3, 0);
								break;
							
							case 0x00000003:
								Function_281(&Param0 + 80, 409, 3, 0);
								break;
							
							case 0x00000004:
								Function_281(&Param0 + 80, 410, 3, 0);
								break;
							
							case 0x00000005:
								Function_281(&Param0 + 80, 411, 3, 0);
								break;
							
							case 0x00000006:
								Function_281(&Param0 + 80, 412, 3, 0);
								break;
							
							case 0x00000007:
								Function_281(&Param0 + 80, 413, 3, 0);
								break;
							
							case 0x00000008:
								Function_281(&Param0 + 80, 414, 3, 0);
								break;
						}
						break;
				}
				break;
		}
	}
	else if (Param0.f_1008 == 0)
	{
		if (Global_43789 == Global_46914[0])
		{
			switch (iParam1)
			{
				case 0x00000000:
					Function_281(&Param0 + 80, 184, 3, 0);
					break;
				
				case 0x00000001:
					Function_281(&Param0 + 80, 185, 3, 0);
					break;
				
				case 0x00000002:
					Function_281(&Param0 + 80, 186, 3, 0);
					break;
				
				case 0x00000003:
					Function_281(&Param0 + 80, 187, 3, 0);
					break;
				
				case 0x00000004:
					Function_281(&Param0 + 80, 188, 3, 0);
					break;
			}
		}
		else if (Global_43787 == 2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					Function_281(&Param0 + 80, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_281(&Param0 + 80, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_281(&Param0 + 80, 438, 3, 0);
					break;
				
				case 0x00000003:
					Function_281(&Param0 + 80, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_281(&Param0 + 80, 443, 3, 0);
					break;
				
				case 0x00000005:
					Function_281(&Param0 + 80, 447, 3, 0);
					break;
				
				case 0x00000006:
					Function_281(&Param0 + 80, 448, 3, 0);
					break;
				
				case 0x00000007:
					Function_281(&Param0 + 80, 184, 3, 0);
					break;
				
				case 0x00000008:
					Function_281(&Param0 + 80, 185, 3, 0);
					break;
				
				case 0x00000009:
					Function_281(&Param0 + 80, 186, 3, 0);
					break;
				
				case 0x0000000A:
					Function_281(&Param0 + 80, 187, 3, 0);
					break;
				
				case 0x0000000B:
					Function_281(&Param0 + 80, 188, 3, 0);
					break;
			}
		}
		else if (Global_43787 == 0)
		{
			switch (iParam1)
			{
				case 0x00000000:
					Function_281(&Param0 + 80, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_281(&Param0 + 80, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_281(&Param0 + 80, 440, 3, 0);
					break;
				
				case 0x00000003:
					Function_281(&Param0 + 80, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_281(&Param0 + 80, 442, 3, 0);
					break;
				
				case 0x00000005:
					Function_281(&Param0 + 80, 443, 3, 0);
					break;
				
				case 0x00000006:
					Function_281(&Param0 + 80, 444, 3, 0);
					break;
				
				case 0x00000007:
					Function_281(&Param0 + 80, 445, 3, 0);
					break;
				
				case 0x00000008:
					Function_281(&Param0 + 80, 446, 3, 0);
					break;
				
				case 0x00000009:
					Function_281(&Param0 + 80, 425, 3, 0);
					break;
				
				case 0x0000000A:
					Function_281(&Param0 + 80, 427, 3, 0);
					break;
				
				case 0x0000000B:
					Function_281(&Param0 + 80, 428, 3, 0);
					break;
				}
		}
	}
	else if (Param0.f_1008 == 1)
	{
		switch (iParam1)
		{
			case 0x00000000:
				Function_281(&Param0 + 80, 379, 3, 0);
				break;
			
			case 0x00000001:
				Function_281(&Param0 + 80, 380, 3, 0);
				break;
			
			case 0x00000002:
				Function_281(&Param0 + 80, 381, 3, 0);
				break;
			
			case 0x00000003:
				Function_281(&Param0 + 80, 391, 3, 0);
				break;
			
			case 0x00000004:
				Function_281(&Param0 + 80, 392, 3, 0);
				break;
			
			case 0x00000005:
				Function_281(&Param0 + 80, 393, 3, 0);
				break;
			
			case 0x00000006:
				Function_281(&Param0 + 80, 395, 3, 0);
				break;
			
			case 0x00000007:
				Function_281(&Param0 + 80, 396, 3, 0);
				break;
			}
	}
	return;
}

var Function_281(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE59B / 58779
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_29(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_265(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_265(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_282(int iParam0, int iParam1) //Position: 0xE677 / 58999
{
	switch (iParam1)
	{
		case 0x00000000:
		case 0x00000001:
			if (iParam0 == 0)
			{
				if (Global_43789 == Global_46914[0])
				{
					return 5;
				}
				if (Global_43787 == 2)
				{
					return 12;
				}
				if (Global_43787 == 0)
				{
					return 17;
				}
			}
			if (iParam0 == 1)
			{
				if (Global_46720 > 3)
				{
					return 6;
				}
				if (Global_43789 == Global_46850[0])
				{
					return 6;
				}
				return 6;
			}
			break;
		
		case 0x00000002:
			if (iParam0 == 0)
			{
				return 6;
			}
			if (iParam0 == 1)
			{
				return 6;
			}
			break;
		
		case 0x00000005:
			if (iParam0 == 0)
			{
				if (Global_43789 == Global_46914[0])
				{
					return 5;
				}
				if (Global_43787 == 2)
				{
					return 12;
				}
				if (Global_43787 == 0)
				{
					return 12;
				}
			}
			if (iParam0 == 1)
			{
				return 8;
			}
			break;
		
		case 0x00000003:
			switch (Global_43787)
			{
				case 0x00000000:
					return 9;
					break;
				
				case 0x00000002:
					return 9;
					break;
				
				case 0x00000001:
					return 9;
					break;
			}
			break;
	}
	return 4294967295;
}

int Function_283(int iParam0, int iParam1) //Position: 0xE77E / 59262
{
	if ((*&Global_39922 + 116)[iParam0] != 3)
	{
		return 3;
	}
	if (iParam1 <= 1700)
	{
		return 4;
	}
	if (iParam1 <= 3700)
	{
		return 6;
	}
	if (iParam1 <= 5000)
	{
		return 8;
	}
	if (iParam1 <= 7000)
	{
		return 10;
	}
	return 12;
	return 4;
}

void Function_284(int iParam0) //Position: 0xE7CD / 59341
{
	Function_285(&iParam0 + 8, "stand_surrender", 5, 0);
	Function_285(&iParam0 + 8, "custom/stand_surrender", 8, 0);
	Function_285(&iParam0 + 8, "stand_shakehands", 5, 0);
	Function_285(&iParam0 + 8, "custom/stand_shakehands", 8, 0);
	return;
}

var Function_285(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xE859 / 59481
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_286(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_265(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_286(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xE897 / 59543
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_29(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_265(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

