//Decompiled with MagicRDR v1.0
//Function Count : 238
//Statics Count : 221
//Natives Count : 467
//Parameters Count : 23

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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	struct<721> Local_11 = { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bool bVar7;
	
	iLocal_9 = 0;
	Function_225(&Local_11, &ScriptParam_0);
	Global_13111 = 0;
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(Global_34573, false, "red_wanted");
	if (Function_224(0x1000000))
	{
		Function_223(0x1000000);
	}
	iLocal_10 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bVar1 = 250;
		if (!Global_3403)
		{
			if (iLocal_10 != 4)
			{
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			}
		}
		if (Global_3378)
		{
			if (iLocal_10 != 4)
			{
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			}
		}
		Function_222(&Local_11);
		if (((!IS_ACTOR_VALID(ScriptParam_0.f_48) && !Local_11.f_648 != 25) && !iLocal_10 != 3) && !iLocal_10 != 4)
		{
			Local_11.f_648 = 24;
			iLocal_10 = 3;
			bVar1 = false;
		}
		else if (((!IS_ACTOR_ALIVE(ScriptParam_0.f_48) && !Local_11.f_648 != 25) && !iLocal_10 != 3) && !iLocal_10 != 4)
		{
			Local_11.f_648 = 24;
			iLocal_10 = 3;
			bVar1 = false;
		}
		if (IS_ACTOR_VALID(ScriptParam_0.f_48))
		{
			GET_POSITION(ScriptParam_0.f_48, &Local_11 + 416);
		}
		if (Function_221())
		{
			if (!Function_220(Global_76847, 0x2000000))
			{
				Function_214(Function_219(), 0x2000000, 2, 0);
			}
		}
		Global_26316.f_152 = SQUAD_GET_SIZE(Local_11.f_576);
		if (IS_LAYOUTREF_VALID(Local_11.f_340))
		{
			switch (iLocal_10)
			{
				case 0x00000000:
					if (GET_CURRENT_GAME_TIME() <= (Local_11.f_476 + 10.0f))
					{
						iLocal_10 = 3;
					}
					if (Function_209(&Local_11 + 8))
					{
						Local_11.f_476 = GET_CURRENT_GAME_TIME();
						iLocal_10 = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000001:
					if (Function_189(&Local_11, &ScriptParam_0))
					{
						Local_11.f_476 = GET_CURRENT_GAME_TIME();
						Function_188(1);
						PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
						Local_11.f_648 = 0;
						iLocal_10 = 2;
						bVar1 = false;
					}
					else
					{
						if (Local_11.f_648 == 24)
						{
							iLocal_10 = 3;
						}
						bVar1 = 50;
					}
					if (GET_CURRENT_GAME_TIME() <= (Local_11.f_476 + 10.0f))
					{
						iLocal_10 = 3;
					}
					break;
				
				case 0x00000002:
					bVar2 = Function_186(Local_11.f_576, ScriptParam_0.f_48, 1, 0);
					if (IS_ACTOR_VALID(bVar2))
					{
						GET_POSITION(bVar2, &Local_11 + 428);
					}
					else
					{
						*(&Local_11 + 428) = { 0.0f, 0.0f, 0.0f };
					}
					if ((((!Function_185(ScriptParam_0.f_48) && !IS_ACTOR_IN_HOGTIE(ScriptParam_0.f_48)) && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(ScriptParam_0.f_48))) && !IS_ACTOR_RIDING_VEHICLE(ScriptParam_0.f_48)) && !IS_ACTOR_RIDING(ScriptParam_0.f_48))
					{
						Function_161(&Local_11, &ScriptParam_0);
						Function_154(&Local_11, &ScriptParam_0);
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(Local_11.f_712))
					{
						RELEASE_SCRIPT_USE_CONTEXT(Local_11.f_712);
					}
					Function_152(&Local_11, &ScriptParam_0);
					Function_150(&Local_11, &ScriptParam_0);
					Function_149(&Local_11, &ScriptParam_0);
					Function_148(&Local_11);
					Function_143();
					if (Function_136(&Local_11, &ScriptParam_0, 1))
					{
						Local_11.f_648 = 24;
						iLocal_10 = 3;
						bVar1 = false;
					}
					bVar1 = Function_75(bVar1, Function_76(&Local_11, &ScriptParam_0));
					if (Function_74(&Local_11, 0) == 0)
					{
						bLocal_197 = true;
						Local_11.f_556 = 1;
					}
					Function_68(&Local_11, &ScriptParam_0);
					if (Local_11.f_720)
					{
						iLocal_10 = 3;
					}
					if (Local_11.f_564)
					{
						iLocal_10 = 3;
					}
					Function_57(&Local_11);
					Function_55(&Local_11, &ScriptParam_0);
					Function_54(&Local_11);
					Function_53(&Local_11);
					bVar7 = false;
					if (Function_74(&Local_11, 1) == 0)
					{
						if (Local_11.f_364 != 0.0f)
						{
							Local_11.f_364 = (GET_CURRENT_GAME_TIME() + 1,5f);
						}
						else if (GET_CURRENT_GAME_TIME() <= Local_11.f_364)
						{
							bVar7 = true;
						}
					}
					else
					{
						Local_11.f_364 = 0.0f;
					}
					if (bVar7)
					{
						Local_11.f_364 = GET_CURRENT_GAME_TIME();
						bVar1 = false;
						iLocal_10 = 3;
					}
					break;
				
				case 0x00000003:
					if (IS_SCRIPT_USE_CONTEXT_VALID(Local_11.f_712))
					{
						RELEASE_SCRIPT_USE_CONTEXT(Local_11.f_712);
					}
					if (IS_BLIP_VALID(Local_11.f_384))
					{
						REMOVE_BLIP(Local_11.f_384);
					}
					if (bLocal_197)
					{
						Function_34();
					}
					if (SQUAD_GET_SIZE(Local_11.f_576) >= 0)
					{
						bVar0 = false;
						while (bVar0 <= SQUAD_GET_SIZE(Local_11.f_576))
						{
							bVar3 = SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0);
							GET_POSITION(bVar3, &uVar4);
							TASK_CLEAR(bVar3);
							MEMORY_CONSIDER_AS(bVar3, Global_34573, 2);
							if (!Local_11.f_552)
							{
								Function_33(bVar3, Global_34573, -1.0f, -1.0f, 0, 0);
							}
							else
							{
								TASK_WANDER(bVar3, -1.0f);
							}
							TASK_PRIORITY_SET(bVar3, 2);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar3)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar3));
							}
							if (Function_32(bVar3))
							{
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar3)))
								{
									Function_31(GET_PERS_CHAR_FROM_ACTOR(bVar3));
								}
								DEREFERENCE_ACTOR(bVar3);
								Function_30(bVar3, 0);
								Local_11.f_372 = (Local_11.f_372 - 1);
							}
							else
							{
								RELEASE_ACTOR(bVar3);
							}
							bVar0++;
						}
						Function_29(Local_11.f_576);
					}
					bVar1 = false;
					iLocal_10 = 4;
					break;
				
				case 0x00000004:
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					bVar1 = false;
					break;
				
				default:
					break;
				}
		}
		WAIT(bVar1);
	}
	if (SQUAD_GET_SIZE(Local_11.f_576) < 0 && !Local_11.f_552)
	{
		Function_26(&Local_11 + 576, 0, 0, 0);
	}
	else if (Local_11.f_552)
	{
		Function_26(&Local_11 + 576, 0, 0, 1);
	}
	if (!Local_11.f_556)
	{
		Function_24();
	}
	Function_23(&Local_11 + 580);
	Function_22(&Local_11, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_11.f_712))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_11.f_712);
	}
	if (IS_BLIP_VALID(Local_11.f_384))
	{
		REMOVE_BLIP(Local_11.f_384);
	}
	Function_18(0);
	Function_17(1024);
	Global_13094 = 1.0f;
	if (Local_11.f_540 || Local_11.f_548)
	{
		Function_17(2048);
		Global_26401.f_2216 = ScriptParam_0.f_64;
	}
	else if (Local_11.f_552)
	{
	}
	else if (Global_26316.f_176)
	{
		if (!Function_220(Global_76847, 524288))
		{
			Function_214(Global_34573, 524288, 2, 0);
		}
	}
	Function_13(&Local_11 + 8);
	if (IS_OBJECT_VALID(Local_11.f_676))
	{
		NAV_QUERY_STOP(Local_11.f_676);
	}
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	Global_26316.f_152 = 0;
	Function_7(ScriptParam_0.f_64, 1);
	Global_13111 = 4294967295;
	Function_5(32768);
	if (!Function_220(Global_76847, 32768))
	{
		Function_3(Global_34573, 32768, 2);
	}
	if (!Function_220(Global_76848, 32768))
	{
		Function_3(Function_219(), 32768, 3);
	}
	AI_CLEAR_DONT_HARM_ACTOR(ScriptParam_0.f_48);
	Function_1(1);
	if (((!Local_11.f_540 && !Local_11.f_548) && !Global_3395) && !HUD_IS_FADED())
	{
		PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
	}
	TOGGLE_ACTOR_ACTION_SIGNAL_OFF(Global_34573);
	Function_13(&Local_11 + 60);
	if (IS_POPSET_VALID(Local_11.f_332))
	{
		DESTROY_POPULATION_SET(Local_11.f_332);
	}
	Global_3406 = 1;
	Global_26316.f_176 = 1;
	SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(1.0f);
	RELEASE_LAYOUT_REF(Local_11.f_336);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x5F7 / 1527
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_2())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_2() //Position: 0x633 / 1587
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_3(bool bParam0, int iParam1, int iParam2) //Position: 0x658 / 1624
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&Var1, "tutorial", 16);
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	Function_4(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_4(char* cParam0, int iParam1) //Position: 0x6A7 / 1703
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

void Function_5(int iParam0) //Position: 0x6DE / 1758
{
	Function_6(&Global_28842, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x6EC / 1772
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_7(int iParam0, bool bParam1) //Position: 0x707 / 1799
{
	bool bVar0;
	
	if (bParam1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], false))
		{
			bVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	bVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_12() > 3)
	{
		bVar0 *= 2;
	}
	if (Function_11() && !bParam1)
	{
		Function_9(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_9(iParam0, 0, 0, Function_8(bVar0), 0);
	}
	return;
}

bool Function_8(int iParam0) //Position: 0x76E / 1902
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_9(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x784 / 1924
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_10((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_10(bool bParam0) //Position: 0x7CA / 1994
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

bool Function_11() //Position: 0x7EF / 2031
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_12() //Position: 0x7F8 / 2040
{
	return Global_12976.f_156;
}

void Function_13(int iParam0) //Position: 0x803 / 2051
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_14(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x829 / 2089
{
	if (Function_16(uParam0[iParam13], 4))
	{
		if (Function_16(uParam0[iParam13], 1))
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
			Function_15(uParam0[iParam13], 1);
			Function_15(uParam0[iParam13], 2);
			Function_15(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x957 / 2391
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0x971 / 2417
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(int iParam0) //Position: 0x98E / 2446
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_18(bool bParam0) //Position: 0x9A1 / 2465
{
	if (Global_3403 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_3403 = 1;
		if (!Global_27759)
		{
			if (IS_FACTION_VALID(Global_26361))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
			}
		}
		Global_13111 = 0;
	}
	else
	{
		Global_3403 = 0;
		Global_3405 = 0;
		Function_19();
		if (IS_FACTION_VALID(Global_26361))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			TERMINATE_SCRIPT(Global_26316.f_60);
		}
		if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
			TERMINATE_SCRIPT(Global_26316.f_64);
		}
		Global_13111 = 4294967295;
	}
	return;
}

void Function_19() //Position: 0xA2C / 2604
{
	int iVar0;
	
	Global_26960 = Function_20(StackVal);
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

int Function_20(int iParam0) //Position: 0xA7A / 2682
{
	if (!Function_21(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_21(int iParam0) //Position: 0xA92 / 2706
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_22(var uParam0, bool bParam1) //Position: 0xAA7 / 2727
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (SQUAD_IS_VALID(uParam0->f_576))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(uParam0->f_336);
		ITERATE_IN_LAYOUT(bVar0, uParam0->f_336);
		ITERATE_ON_OBJECT_TYPE(bVar0, 15);
		if (!bParam1)
		{
			ITERATE_ON_PARTIAL_NAME(bVar0, "lawHorse");
		}
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar1 = GET_NUM_ITERATOR_MATCHES(bVar0);
		iVar4 = (iVar1 - SQUAD_GET_SIZE(uParam0->f_576));
		if (iVar4 >= 0)
		{
			iVar3 = 1;
		}
		if (iVar3 || bParam1)
		{
			bVar5 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar5))
			{
				if (iVar2 <= iVar4)
				{
					bVar6 = GET_ACTOR_FROM_OBJECT(bVar5);
					if (IS_ACTOR_VALID(bVar6))
					{
						if (IS_ACTOR_HORSE(bVar6))
						{
							if (IS_ACTOR_ALIVE(bVar6))
							{
								if (GET_RIDER(bVar6) == "")
								{
									iVar7 = GET_TASK_STATUS(bVar6, 25);
									if ((iVar7 == 1 || Function_11()) || bParam1)
									{
										Function_33(bVar6, Function_219(), -1.0f, -1.0f, 0, 0);
										RELEASE_ACTOR(bVar6);
										iVar2++;
									}
								}
							}
							else
							{
								RELEASE_ACTOR(bVar6);
								iVar2++;
							}
						}
					}
				}
				bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_23(var uParam0) //Position: 0xBA1 / 2977
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_24() //Position: 0xBE8 / 3048
{
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_25(GET_AMBIENT_LAYOUT());
	Function_25(GET_GC_LAYOUT());
	Function_25(Global_6289);
	Function_25(Global_6288);
	Function_25(Global_28841);
	Function_25(Global_6290);
	Function_25(Global_63535);
	return;
}

void Function_25(bool bParam0) //Position: 0xC1B / 3099
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_IN_LAYOUT(bVar0, bParam0);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		if (IS_ACTOR_VALID(Function_219()))
		{
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = "";
				if (GET_OBJECT_TYPE(bVar1) == 15)
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				}
				else if (GET_OBJECT_TYPE(bVar1) == 24)
				{
					bVar2 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (GET_ACTOR_FACTION(bVar2) != 4 || GET_ACTOR_FACTION(bVar2) != 6)
					{
						TASK_CLEAR(bVar2);
						MEMORY_CONSIDER_AS(bVar2, Function_219(), 2);
						MEMORY_CLEAR_ALL(bVar2);
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_26(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xCB7 / 3255
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(*uParam0) >= 0)
	{
		Function_28(*uParam0);
		Function_27(*uParam0, 0);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				DECOR_SET_BOOL(bVar1, "CanBeLasso", true);
				MEMORY_REPORT_POSITION_AUTO(bVar1, Global_34573, false);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
				TASK_CLEAR(bVar1);
				if (!bParam3)
				{
					Function_33(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
				}
				else
				{
					TASK_WANDER(bVar1, -1.0f);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SQUAD_LEAVE(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				if (Function_32(bVar1))
				{
					Function_30(bVar1, 0);
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar1)))
					{
						Function_31(GET_PERS_CHAR_FROM_ACTOR(bVar1));
						DEREFERENCE_ACTOR(bVar1);
					}
					else
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
				}
				else
				{
					TASK_PRIORITY_SET(bVar1, 2);
					if (iParam2 == 1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else if (bParam1)
					{
						DESTROY_ACTOR(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

void Function_27(bool bParam0, bool bParam1) //Position: 0xDFE / 3582
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				SET_ACTOR_VISION_XRAY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_28(bool bParam0) //Position: 0xE47 / 3655
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_29(bool bParam0) //Position: 0xE7C / 3708
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	SQUAD_MAKE_EMPTY(bParam0);
	return;
}

void Function_30(bool bParam0, int iParam1) //Position: 0xE91 / 3729
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (iParam1 == 1)
	{
		DECOR_SET_BOOL(bParam0, "nsharedlaw", true);
	}
	else
	{
		DECOR_REMOVE(bParam0, "nsharedlaw");
	}
	return;
}

int Function_31(bool bParam0) //Position: 0xECF / 3791
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

bool Function_32(bool bParam0) //Position: 0xF69 / 3945
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

void Function_33(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0xF80 / 3968
{
	if (Function_11())
	{
		MEMORY_REPORT_POSITION_AUTO(bParam0, Global_34573, false);
		MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
		TASK_FLEE_ACTORSET(bParam0, Global_78576, fParam2, fParam3, iParam4, iParam5, 0);
	}
	else if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		TASK_FLEE_ACTOR(bParam0, bParam1, fParam2, fParam3, iParam4, iParam5, 0);
	}
}

void Function_34() //Position: 0xFD3 / 4051
{
	int iVar0;
	int iVar1;
	
	Function_50(StackVal, Global_26960);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26401 + 36[iVar0181][35])[(*&Global_26960 + 4)[iVar0]] = StackVal;
			iVar1 = Function_49(Global_26998[iVar018]);
			if (iVar1 != 4294967295)
			{
				Function_35(iVar1, (*&Global_26960 + 4)[iVar0], 0);
			}
		}
		iVar0++;
	}
	Function_19();
	return;
}

int Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x1046 / 4166
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
		Function_48(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_47(iParam0);
	if (bParam2)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_36(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x12E1 / 4833
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_46(390))), 32);
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
					bVar19 = (Function_45(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_45(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_43(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_41(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_38(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_37(), &Var9);
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

var Function_37() //Position: 0x190E / 6414
{
	int iVar0;
	
	return iVar0;
}

var Function_38(int iParam0) //Position: 0x1916 / 6422
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1927 / 6439
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_40(char* cParam0, char* cParam1) //Position: 0x1A1C / 6684
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_41(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A35 / 6709
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_75(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_42(Function_75(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_42(int iParam0, int iParam1) //Position: 0x1A9A / 6810
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_43(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AAC / 6828
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
	if (((Function_44(iParam0) != 19 || Function_44(iParam0) != 17) || Function_44(iParam0) != 10) || Function_44(iParam0) != 9)
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

int Function_44(int iParam0) //Position: 0x1BDC / 7132
{
	return Global_35278[iParam020].f_48;
}

float Function_45(int iParam0) //Position: 0x1BEB / 7147
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_46(int iParam0) //Position: 0x1C24 / 7204
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_47(int iParam0) //Position: 0x1C61 / 7265
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

int Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DFB / 7675
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
	}
	else
	{
		Global_34581[iVar1] = bParam1;
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

int Function_49(int iParam0) //Position: 0x2015 / 8213
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

void Function_50(int iParam0, bool bParam1) //Position: 0x219C / 8604
{
	if (!Function_21(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_52((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_52(222, TO_FLOAT((Function_51(223) + Function_51(224))), 0);
	return;
}

int Function_51(int iParam0) //Position: 0x21DD / 8669
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x221E / 8734
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_48(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_47(iParam0);
	if (bParam2)
	{
		Function_36(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0) //Position: 0x248A / 9354
{
	return;
}

void Function_54(int iParam0) //Position: 0x2490 / 9360
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_NUM_WEAPONS_IN_INVENTORY(bVar1) == 0)
			{
				if (IS_ACTOR_CRIPPLED(bVar1, 5) && !IS_ACTOR_HOGTIED(bVar1))
				{
					if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime"))
					{
						if (GET_CURRENT_GAME_TIME() <= DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime"))
						{
							MEMORY_CLEAR_ALL(bVar1);
							SET_ACTOR_VISION_XRAY(bVar1, false);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
							}
							MEMORY_REPORT_POSITION_AUTO(bVar1, Global_34573, false);
							MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
							TASK_CLEAR(bVar1);
							SQUAD_LEAVE(bVar1);
							if (Function_32(bVar1))
							{
								Function_30(bVar1, 0);
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar1)))
								{
									Function_31(GET_PERS_CHAR_FROM_ACTOR(bVar1));
									Function_33(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
									DEREFERENCE_ACTOR(bVar1);
								}
								else
								{
									Function_33(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
									RELEASE_ACTOR(bVar1);
								}
							}
							else
							{
								Function_33(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
								TASK_PRIORITY_SET(bVar1, true);
								RELEASE_ACTOR(bVar1);
							}
						}
					}
					else
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime", (GET_CURRENT_GAME_TIME() + 8.0f));
					}
				}
			}
			else if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime"))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime");
			}
		}
		bVar0++;
	}
	return;
}

void Function_55(var uParam0, int iParam1) //Position: 0x262C / 9772
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	if (!DECOR_CHECK_EXIST(uParam0->f_576, "nextspeech") || !DECOR_CHECK_EXIST(uParam0->f_576, "nextspeechtarget"))
	{
		if (uParam0->f_452 + 15.0f) > GET_CURRENT_GAME_TIME()
		{
			bVar0 = RAND_INT_RANGE(false, 10000);
			if (bVar0 <= 3333)
			{
				Function_56(uParam0->f_576, 109, iParam1->f_48);
			}
			else if (bVar0 <= 6666)
			{
				Function_56(uParam0->f_576, 58, iParam1->f_48);
			}
			else
			{
				Function_56(uParam0->f_576, 105, iParam1->f_48);
			}
		}
		return;
	}
	bVar1 = DECOR_GET_INT(uParam0->f_576, "nextspeechtarget");
	if (!IS_ACTOR_VALID(bVar1))
	{
		return;
	}
	GET_POSITION(bVar1, &vVar6);
	bVar2 = false;
	while (bVar2 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2), &vVar3);
		if (VDIST(vVar3, vVar6) > 20.0f)
		{
			bVar9 = DECOR_GET_INT(uParam0->f_576, "nextspeech");
			if (Global_29007 == 3)
			{
				bVar10 = GET_ACTOR_ENUM(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2));
				if ((bVar10 != 460 || bVar10 != 428) || bVar10 != 429)
				{
					if (RAND_INT_RANGE(false, true) == 0)
					{
						bVar9 = 110;
					}
				}
				else if ((((bVar10 != 184 || bVar10 != 185) || bVar10 != 186) || bVar10 != 187) || bVar10 != 188)
				{
					if (RAND_INT_RANGE(false, 3) == 0)
					{
						bVar9 = 110;
					}
				}
			}
			if (((uParam0->f_648 > 15 && !uParam0->f_568) && !uParam0->f_552) && !uParam0->f_540)
			{
				SAY_SINGLE_LINE_CONTEXT(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2), bVar9, bVar1, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			}
			DECOR_REMOVE(uParam0->f_576, "nextspeechtarget");
			DECOR_REMOVE(uParam0->f_576, "nextspeech");
			uParam0->f_452 = GET_CURRENT_GAME_TIME();
		}
		bVar2++;
	}
	return;
}

bool Function_56(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2824 / 10276
{
	DECOR_SET_INT(bParam0, "nextspeech", bParam1);
	DECOR_SET_INT(bParam0, "nextspeechtarget", bParam2);
	return 1;
}

void Function_57(int iParam0) //Position: 0x285B / 10331
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		Function_63(iParam0, SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0));
		bVar0++;
	}
	Function_58(iParam0);
	return;
}

void Function_58(int iParam0) //Position: 0x288E / 10382
{
	struct<9> Var0;
	
	if (Global_3386)
	{
		if (!IS_OBJECT_VALID(iParam0->f_728) || GET_CURRENT_GAME_TIME() <= iParam0->f_732)
		{
			iParam0->f_728 = Function_60(Global_34573, 4);
			iParam0->f_732 = (GET_CURRENT_GAME_TIME() + 3.0f);
		}
	}
	else
	{
		iParam0->f_728 = "";
		iParam0->f_732 = GET_CURRENT_GAME_TIME();
	}
	if (!IS_BLIP_VALID(iParam0->f_384))
	{
		if ((Global_3386 && Function_59()) && IS_OBJECT_VALID(iParam0->f_728))
		{
			GET_OBJECT_POSITION(iParam0->f_728, iParam0 + 388);
			iParam0->f_384 = ADD_BLIP_FOR_COORD(iParam0 + 388, 440, 0, 2, 0);
		}
		else
		{
			iParam0->f_384 = ADD_BLIP_FOR_COORD(iParam0 + 428, 440, 0, 2, 0);
		}
	}
	if ((Global_3386 && Function_59()) && IS_OBJECT_VALID(iParam0->f_728))
	{
		GET_OBJECT_POSITION(iParam0->f_728, iParam0 + 388);
		SET_BLIP_POS(iParam0->f_384, iParam0 + 388);
		GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(iParam0->f_728), &vVar0);
		SET_BLIP_SCALE(iParam0->f_384, ((vVar0.x + vVar0.z) / 2.0f));
	}
	else
	{
		SET_BLIP_POS(iParam0->f_384, iParam0 + 428);
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_580) >= 0)
		{
			SET_BLIP_SCALE(iParam0->f_384, 225.0f);
		}
		else
		{
			SET_BLIP_SCALE(iParam0->f_384, 100.0f);
		}
	}
	if (Global_3405)
	{
		SET_BLIP_COLOR(iParam0->f_384, 0,1f, 0,1f, 0,1f, 0,5f);
	}
	else
	{
		SET_BLIP_COLOR(iParam0->f_384, 0,64f, 0,22f, 0,26f, 0,5f);
	}
	return;
}

int Function_59() //Position: 0x29F4 / 10740
{
	if (StackVal != 5 || Global_29006 != Global_30707[3])
	{
		return 0;
	}
	return 1;
}

var Function_60(bool bParam0, int iParam1) //Position: 0x2A17 / 10775
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	
	bVar0 = 99999.0f;
	bVar7 = "";
	bVar8 = "";
	bVar9 = "";
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	GET_OBJECT_POSITION(bParam0, &vVar1);
	bVar10 = CREATE_OBJECT_ITERATOR(Global_28841);
	bVar11 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 9);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_62(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		bVar8 = OBJECT_ITERATOR_NEXT(bVar10);
	}
	Function_61(&bVar10);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 10);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_62(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		Function_61(&bVar11);
		ITERATE_IN_LAYOUT(bVar11, Global_30616);
		ITERATE_IN_VOLUME_SET(bVar11, GET_VOLUME_FROM_OBJECT(bVar8));
		bVar9 = START_OBJECT_ITERATOR(bVar11);
		while (IS_OBJECT_VALID(bVar9))
		{
			if (DECOR_CHECK_EXIST(bVar9, "locflag"))
			{
				if (Function_62(GET_VOLUME_FROM_OBJECT(bVar9), iParam1))
				{
					GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar9), &vVar4);
					if (VDIST(vVar1, vVar4) > bVar0)
					{
						bVar7 = bVar9;
						bVar0 = VDIST(vVar1, vVar4);
					}
				}
			}
			bVar9 = OBJECT_ITERATOR_NEXT(bVar11);
		}
		bVar8 = OBJECT_ITERATOR_NEXT(bVar10);
	}
	DESTROY_ITERATOR(bVar10);
	DESTROY_ITERATOR(bVar11);
	return bVar7;
}

int Function_61(bool bParam0) //Position: 0x2BC8 / 11208
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_37());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_37());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_62(bool bParam0, int iParam1) //Position: 0x2BF9 / 11257
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

void Function_63(int iParam0, bool bParam1) //Position: 0x2C28 / 11304
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = GET_BLIP_ON_ACTOR(bParam1);
	if (!IS_BLIP_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bParam1))
		{
			if (!IS_ACTOR_HOGTIED(bParam1))
			{
				if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam1), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576)))
				{
					Function_66(bParam1);
					if (GET_NUM_WEAPONS_IN_INVENTORY(bParam1) == 0)
					{
						GIVE_WEAPON_TO_ACTOR(bParam1, 4, 0.0f, 0, 0);
						ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam1, 0, 0);
						DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam1), "Hogtie_DontGiveWeapons", true);
					}
				}
			}
		}
	}
	else
	{
		if (!IS_ACTOR_ALIVE(bParam1))
		{
			REMOVE_BLIP(bVar0);
			return;
		}
		if (IS_ACTOR_HOGTIED(bParam1))
		{
			REMOVE_BLIP(bVar0);
			return;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam1), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576)))
		{
			REMOVE_BLIP(bVar0);
			return;
		}
		if (Global_3405)
		{
			if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + (Function_64(iParam0) / 1,5f)))
			{
				SET_BLIP_BLINK(bVar0, 1, 1, -1.0f);
			}
			else
			{
				SET_BLIP_BLINK(bVar0, 1, 0, -1.0f);
			}
		}
		else
		{
			SET_BLIP_BLINK(bVar0, 0, 0, 5f);
		}
	}
	return;
}

float Function_64(int iParam0) //Position: 0x2D27 / 11559
{
	bool bVar0;
	int iVar1;
	
	if (Function_74(iParam0, 1) == 0)
	{
		return 10.0f;
	}
	if (iParam0->f_628 && !Function_65(0))
	{
		return 20.0f;
	}
	bVar0 = Global_26401[StackVal];
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

bool Function_65(int iParam0) //Position: 0x2DB2 / 11698
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_66(bool bParam0) //Position: 0x2DC1 / 11713
{
	Function_67(bParam0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 345, 0, 2, 0);
		if (GET_THIS_SCRIPT_ID() == Global_26391.f_32)
		{
			SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bParam0), 1.0f, 1.0f, 1.0f, 0,25f);
		}
		HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bParam0, 415);
	}
	return;
}

void Function_67(bool bParam0) //Position: 0x2E09 / 11785
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

var Function_68(int iParam0, int iParam1) //Position: 0x2E35 / 11829
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar8 = false;
	bVar9 = false;
	if (GET_CURRENT_GAME_TIME() <= iParam0->f_472)
	{
		iParam0->f_472 = (GET_CURRENT_GAME_TIME() + 5.0f);
		bVar8 = true;
	}
	if (SQUAD_GET_SIZE(iParam0->f_576) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_576))
		{
			bVar7 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar1);
			if (IS_ACTOR_VALID(bVar7))
			{
				GET_POSITION(bVar7, &vVar2);
				fVar5 = Function_73(iParam0, !GET_MOUNT(bVar7) != "");
				bVar6 = VDIST(vVar2, *(iParam0 + 416));
				if (!bVar9)
				{
					if (!Function_32(bVar7))
					{
						if (Function_71(bVar7, bVar6, fVar5, bVar8))
						{
							iParam0->f_600 = (iParam0->f_600 - 1);
							iVar0 = 1;
							bVar9 = true;
						}
					}
				}
				Function_69(iParam0, bVar7, bVar6, fVar5, iParam1->f_48);
			}
			bVar1++;
		}
	}
	if (SQUAD_GET_SIZE(iParam0->f_580) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_580))
		{
			if (!bVar9)
			{
				bVar7 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_580, bVar1);
				GET_POSITION(bVar7, &vVar2);
				fVar5 = Function_73(iParam0, 0);
				bVar6 = VDIST(vVar2, *(iParam0 + 416));
				if (Function_71(bVar7, bVar6, fVar5, bVar8))
				{
					bVar9 = true;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_69(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x2F61 / 12129
{
	float fVar0;
	vector3 vVar1;
	
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		return;
	}
	if (fParam2 < fParam3)
	{
		return;
	}
	if (!Function_70(iParam0))
	{
		fVar0 = 40.0f;
	}
	else
	{
		fVar0 = 70.0f;
	}
	if ((IS_ACTOR_VALID(GET_MOUNT(bParam1)) && !IS_ACTOR_VALID(GET_MOUNT(bParam4))) && !IS_ACTOR_VALID(GET_VEHICLE(bParam4)))
	{
		if (fParam2 > fVar0 || GET_TASK_STATUS(bParam1, 61) != 4)
		{
			Function_33(GET_MOUNT(bParam1), bParam1, -1.0f, -1.0f, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(GET_MOUNT(bParam1), 4);
			TASK_DISMOUNT(bParam1, 1);
			MEMORY_PREFER_WALKING(bParam1, true);
		}
	}
	else if (!IS_ACTOR_VALID(GET_MOUNT(bParam1)) && (IS_ACTOR_VALID(GET_MOUNT(bParam4)) || IS_ACTOR_VALID(GET_VEHICLE(bParam4))))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam4)))
		{
			GET_ACTOR_VELOCITY(GET_MOUNT(bParam4), &vVar1);
		}
		else
		{
			GET_ACTOR_VELOCITY(GET_VEHICLE(bParam4), &vVar1);
		}
		if (VMAG(vVar1) < 0,25f || fParam2 < 10.0f)
		{
			if (GET_TASK_STATUS(bParam1, 12) == 1)
			{
				TASK_CLEAR(bParam1);
			}
			MEMORY_PREFER_RIDING(bParam1, true);
		}
	}
}

bool Function_70(int iParam0) //Position: 0x3062 / 12386
{
	if (Global_29006 == Global_30693[1])
	{
		if (StackVal && (StackVal && (iParam0->f_416 < -1744,93f && iParam0->f_416 > -1673,62f) > 4261,5f) < 4181,3f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_71(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x30AD / 12461
{
	vector3 vVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (bParam1 < fParam2)
		{
			if (!Function_72(bParam0, 1.0f, (fParam2 + 10.0f), 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
				{
					Function_33(GET_MOUNT(bParam0), Global_34573, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(bParam0));
				}
				if (IS_ACTOR_VALID(bParam0))
				{
					SQUAD_LEAVE(bParam0);
					TASK_CLEAR(bParam0);
					MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
					Function_33(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bParam0)))
					{
						Function_31(GET_PERS_CHAR_FROM_ACTOR(bParam0));
						DEREFERENCE_ACTOR(bParam0);
					}
					else
					{
						RELEASE_ACTOR(bParam0);
					}
				}
				return 1;
			}
		}
	}
	if (bParam1 < (fParam2 * 0,8f))
	{
		GET_ACTOR_VELOCITY(bParam0, &vVar0);
		if (!DECOR_CHECK_EXIST(bParam0, "nstuckTime"))
		{
			if (VMAG(vVar0) >= 0,25f)
			{
				if (!IS_ACTOR_HOGTIED(bParam0))
				{
					DECOR_SET_FLOAT(bParam0, "nstuckTime", GET_CURRENT_GAME_TIME());
					return 0;
				}
			}
		}
		if (VMAG(vVar0) < 0,25f)
		{
			DECOR_REMOVE(bParam0, "nstuckTime");
			return 0;
		}
		if (DECOR_GET_FLOAT(bParam0, "nstuckTime") + 10.0f) > GET_CURRENT_GAME_TIME()
		{
			if (!Function_72(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
				{
					Function_33(GET_MOUNT(bParam0), Global_34573, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(bParam0));
				}
				if (IS_ACTOR_VALID(bParam0))
				{
					SQUAD_LEAVE(bParam0);
					TASK_CLEAR(bParam0);
					MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
					Function_33(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bParam0)))
					{
						Function_31(GET_PERS_CHAR_FROM_ACTOR(bParam0));
						DEREFERENCE_ACTOR(bParam0);
					}
					else
					{
						RELEASE_ACTOR(bParam0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_72(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x32AD / 12973
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

var Function_73(float fParam0, bool bParam1) //Position: 0x32C7 / 12999
{
	if (SQUAD_IS_VALID(fParam0->f_580))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(fParam0->f_580) >= 0)
		{
			return 225.0f;
		}
	}
	if (Global_3386)
	{
		if (Global_29006 != Global_30640[4])
		{
			if (!bParam1)
			{
				if (!Function_11())
				{
					return 110.0f;
				}
				return 185.0f;
			}
			return 185.0f;
		}
		return 225.0f;
	}
	return 225.0f;
}

int Function_74(int iParam0, bool bParam1) //Position: 0x3332 / 13106
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(iParam0->f_576))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(iParam0->f_576) < 0)
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (!IS_ACTOR_HOGTIED(bVar2) || !bParam1)
			{
				if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar2), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576)))
				{
					iVar0++;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_75(int iParam0, bool bParam1) //Position: 0x33AC / 13228
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_76(int iParam0, int iParam1) //Position: 0x33BE / 13246
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	var uVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar25;
	vector3 vVar26;
	
	if ((GET_CURRENT_GAME_TIME() - iParam0->f_356) < 15.0f)
	{
		VSCALE(iParam0 + 512, 0,99f);
	}
	*(iParam0 + 524) = { StackVal, StackVal, *(iParam0 + 512) };
	VSCALE(iParam0 + 524, (GET_CURRENT_GAME_TIME() - iParam0->f_356));
	*(iParam0 + 524) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 500), *(iParam0 + 524), StackVal) };
	Function_135(iParam0 + 524, 10.0f, iParam0 + 524, 10);
	switch (iParam0->f_648)
	{
		case 0x00000000:
			Function_134("LAW_AI_STATE: INIT", 11);
			iVar0 = (Function_74(iParam0, 1) / 2);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_133(iParam0->f_576);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 2, iVar0);
			TASK_GO_TO_COORD_NONSTOP(false, iParam0 + 524, 3, 10.0f);
			iParam0->f_652 = SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 2, 4294967295);
			TASK_GO_NEAR_COORD(false, iParam0 + 488, 10.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_132(iParam0->f_576, 1);
			iParam0->f_648 = 1;
		
		case 0x00000001:
			Function_131(iParam0, iParam1, 0);
			if (!Function_70(iParam0))
			{
				if (Function_130(iParam1->f_52, iParam1->f_48, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				if (Function_128(iParam0->f_576, iParam1->f_48, 20.0f, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				if (Function_128(iParam0->f_580, iParam1->f_48, 20.0f, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				iParam0->f_648 = 6;
				return 0;
			}
			iParam0->f_648 = 6;
			return 0;
			break;
		
		case 0x00000004:
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_133(iParam0->f_576);
			Function_134("LAW_AI_STATE: ARREST - SHOOT", 11);
			if (!Function_70(iParam0) && Global_13094 >= 0,2f)
			{
				SQUAD_GOAL_ADD_COMBAT(iParam0->f_576, 2, 4294967295, 0);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, iParam0->f_412, 3, 0);
				Function_132(iParam0->f_576, 1);
				iParam0->f_408 = 0;
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 1, 4294967295);
				TASK_KILL_CHAR(false, iParam1->f_48);
				if (!Function_70(iParam0))
				{
					Function_132(iParam0->f_576, 0);
				}
				else
				{
					Function_132(iParam0->f_576, 1);
				}
				iParam0->f_408 = 1;
				iParam0->f_484 = GET_CURRENT_GAME_TIME();
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_133(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_580, 1, iParam0->f_412, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			if (iParam0->f_536 > 0.0f)
			{
				if (*iParam0 != 0 || *iParam0 != 1)
				{
					Function_131(iParam0, iParam1, 1);
				}
			}
			iParam0->f_648 = 5;
		
		case 0x00000005:
			if (Function_124(iParam0))
			{
				return 0;
			}
			if (!StackVal && !Global_29006 != Global_30693[1])
			{
				if ((iParam0->f_560 && (iParam0->f_376 + 5.0f) > GET_CURRENT_GAME_TIME()) && !iParam0->f_568)
				{
					iParam0->f_648 = 13;
					return 0;
				}
			}
			bVar18 = false;
			if (SQUAD_IS_VALID(iParam0->f_580))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_580) >= 0)
				{
					bVar18 = true;
				}
			}
			if (!bVar18)
			{
				if (!Function_130(iParam1->f_52, iParam1->f_48, 1))
				{
					if (!Function_123(iParam0, 5.0f))
					{
						if (!Function_121(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 20.0f))
						{
							if (!iParam0->f_568 && !Function_70(iParam0))
							{
								iParam0->f_648 = 6;
								return 0;
							}
						}
						if (Global_13094 < 0,2f)
						{
							if (!iParam0->f_568 && !iParam0->f_408)
							{
								iParam0->f_648 = 4;
								return 0;
							}
						}
					}
				}
				if (iParam0->f_408)
				{
					if (!iParam0->f_568)
					{
						if (GET_CURRENT_GAME_TIME() <= (iParam0->f_484 + 10.0f))
						{
							if (StackVal && !Function_121(StackVal, (StackVal && Function_121(StackVal, Function_123(iParam0, 10.0f), iParam0->f_576, *(iParam0 + 416), 15.0f)), iParam0->f_576, *(iParam0 + 416), 5.0f))
							{
								iParam0->f_648 = 4;
								return 0;
							}
						}
					}
				}
			}
			if (SQUAD_IS_VALID(iParam0->f_576))
			{
				if (!Function_120(iParam0->f_576, iParam1->f_48, 0))
				{
					if (!iParam0->f_568 && !Function_70(iParam0))
					{
						iParam0->f_648 = 6;
						return 0;
					}
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_128(iParam0->f_576, Function_219(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_133(iParam0->f_576);
			Function_134("LAW_AI_STATE: GIVE CHASE", 11);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 1, 4294967295);
			TASK_GO_NEAR_ACTOR(0, iParam1->f_48, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_133(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_580, 1, iParam0->f_412, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_132(iParam0->f_576, 1);
			iParam0->f_648 = 7;
		
		case 0x00000007:
			if (Function_124(iParam0))
			{
				return 0;
			}
			*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
			*(iParam0 + 524) = { StackVal, StackVal, *(iParam0 + 500) };
			GET_ACTOR_VELOCITY(iParam1->f_48, iParam0 + 512);
			bVar18 = false;
			if (SQUAD_IS_VALID(iParam0->f_580))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_580) >= 0)
				{
					bVar18 = true;
				}
			}
			if (!Function_70(iParam0))
			{
				if (Function_121(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 20.0f))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
			}
			if (Function_121(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 80.0f))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (!bVar18)
			{
				if (Function_130(iParam1->f_52, iParam1->f_48, 1))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
				if (!Function_123(iParam0, 20.0f) && !Global_29006 != Global_30693[1])
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 8;
						return 0;
					}
				}
			}
			if (SQUAD_IS_VALID(iParam0->f_576))
			{
				if (Function_120(iParam0->f_576, iParam1->f_48, 0))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_128(iParam0->f_576, Function_219(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_119(iParam0))
			{
				iParam0->f_648 = 4;
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_134("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_133(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_664))
			{
				iParam0->f_664 = CREATE_POINT_IN_LAYOUT(iParam0->f_336, Function_37(), *(iParam0 + 524), 0.0f, 0.0f, 0.0f);
			}
			else
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
			TASK_SEARCH_FOR_OBJECT(0, iParam1->f_48, 0, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_133(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_132(iParam0->f_576, 1);
			Function_118(iParam0, 0);
			iParam0->f_648 = 9;
		
		case 0x00000009:
			if (Function_124(iParam0))
			{
				return 0;
			}
			bVar21 = Function_115(iParam1->f_48, 3);
			if (!iParam0->f_348 != bVar21 && IS_CRIME_VALID(bVar21))
			{
				if (IS_CRIME_VALID(bVar21))
				{
					iParam0->f_348 = bVar21;
					GET_CRIME_POSITION(iParam0->f_348, iParam0 + 488);
					if (GET_CRIME_END_TIMESTAMP(iParam0->f_348) < iParam0->f_440)
					{
						iParam0->f_440 = GET_CRIME_END_TIMESTAMP(iParam0->f_348);
					}
				}
			}
			if (IS_OBJECT_VALID(iParam0->f_664))
			{
				if (Function_114(iParam0->f_580) >= 0)
				{
					SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 416));
				}
				else
				{
					SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
				}
			}
			if (Function_123(iParam0, 0x3f800000))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (!Function_123(iParam0, 20.0f) && !Global_3386)
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 10;
					return 0;
				}
			}
			break;
		
		case 0x0000000A:
			Function_134("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_133(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_664))
			{
				iParam0->f_664 = CREATE_POINT_IN_LAYOUT(iParam0->f_336, Function_37(), *(iParam0 + 524), 0.0f, 0.0f, 0.0f);
			}
			else
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, iParam0->f_664, 30.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_133(iParam0->f_580);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, iParam0->f_664, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_132(iParam0->f_576, 1);
			iParam0->f_648 = 11;
		
		case 0x0000000B:
			if (Function_124(iParam0))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(iParam0->f_664))
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			if (Function_123(iParam0, 0x3f800000))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (Function_123(iParam0, 15.0f))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 8;
					return 0;
				}
			}
			break;
		
		case 0x0000000D:
			Function_134("LAW_AI_STATE: SURROUND", 11);
			if (!Function_56(iParam0->f_576, 95, iParam1->f_48))
			{
				Function_112(iParam0->f_576, "law_surround", 5.0f, iParam1->f_64, 30.0f, 0, 0);
			}
			Function_118(iParam0, 0);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_133(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_668))
			{
				iParam0->f_668 = Function_60(iParam1->f_48, 256);
			}
			if (!Function_111(iParam0))
			{
				if (IS_OBJECT_VALID(iParam0->f_668) && GET_OBJECT_TYPE(iParam0->f_668) != 9)
				{
					GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(iParam0->f_668), &vVar3);
					GET_OBJECT_POSITION(iParam0->f_668, &vVar6);
					fVar16 = (5.0f + (Function_110(vVar3.x, vVar3.z) / 2.0f));
					bVar20 = GET_VOLUME_FROM_OBJECT(iParam0->f_668);
				}
				else if (IS_OBJECT_VALID(iParam0->f_668) && GET_OBJECT_TYPE(iParam0->f_668) != 10)
				{
					bVar19 = CREATE_OBJECT_ITERATOR(Global_26314);
					ITERATE_IN_VOLUME_SET(bVar19, iParam0->f_668);
					bVar13 = START_OBJECT_ITERATOR(bVar19);
					bVar20 = GET_VOLUME_FROM_OBJECT(bVar13);
					fVar16 = 0.0f;
					while (IS_OBJECT_VALID(bVar13))
					{
						GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(bVar13), &vVar3);
						fVar16 = (fVar16 + Function_110((5.0f + (Function_110(vVar3.x, vVar3.z) / 2.0f)), 20.0f));
						bVar13 = OBJECT_ITERATOR_NEXT(bVar19);
					}
					DESTROY_ITERATOR(bVar19);
				}
				else
				{
					iParam0->f_648 = 4;
					return 0;
				}
				GET_OBJECT_POSITION(iParam0->f_668, &vVar6);
				uVar12 = Function_107(iParam0->f_336, 2, fVar16);
				iParam0->f_656 = SQUAD_GOAL_ADD_COMBAT(iParam0->f_576, 2, 2, 1);
				bVar22 = false;
				if (IS_OBJECT_VALID(iParam0->f_668))
				{
					if (IS_VOLUME_VALID(GET_VOLUME_FROM_OBJECT(iParam0->f_668)))
					{
						bVar22 = true;
					}
				}
				if (bVar22)
				{
					iVar15 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, GET_VOLUME_FROM_OBJECT(iParam0->f_668), 4, 0);
				}
				else
				{
					iVar15 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, bVar20, 4, 0);
				}
				SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(iParam0->f_576, iVar15, iParam0->f_656);
				bVar2 = false;
				while (bVar2 <= GET_NUM_FORMATION_LOCATIONS(uVar12))
				{
					GET_FORMATION_LOCATION(uVar12, bVar2, &vVar9);
					vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar6, vVar9, StackVal) };
					iVar17 = Function_105(StackVal, StackVal, StackVal, StackVal, vVar9, vVar6);
					Function_135(&vVar9, 15.0f, &vVar3, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, (5 + bVar2), 1, 1);
					TASK_GO_TO_COORD_AND_STAY(false, &vVar3, 4, iVar17);
					bVar2++;
				}
				Function_27(iParam0->f_576, 1);
			}
			else
			{
				Function_134("LAW_AI_STATE: SURROUND (RIVERBOAT)", 11);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 0, iParam0->f_412, 3, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
				TASK_KILL_CHAR(false, iParam1->f_48);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			}
			Function_103(iParam0 + 576);
			Function_102(iParam0->f_576, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_133(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_132(iParam0->f_576, 1);
			iParam0->f_648 = 14;
		
		case 0x0000000E:
			if (!iParam0->f_560)
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					Function_102(iParam0->f_576, 0);
					Function_27(iParam0->f_576, 0);
					return 0;
				}
			}
			if (!Function_111(iParam0))
			{
				bVar2 = false;
				while (bVar2 <= SQUAD_GET_SIZE(iParam0->f_576))
				{
					bVar23 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar2);
					if (IS_ACTOR_VALID(bVar23))
					{
						if (SQUAD_IS_GOAL_CONTROLLING_ACTOR(iParam0->f_576, iParam0->f_656, bVar23))
						{
							SET_ACTOR_VISION_XRAY(bVar23, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar23, 16, false);
						}
						else
						{
							SET_ACTOR_VISION_XRAY(bVar23, true);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar23, 16, true);
						}
					}
					bVar2++;
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_128(iParam0->f_576, Function_219(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000F:
			Function_134("LAW_AI_STATE: SUBMIT CUTSCENE", 11);
			iParam0->f_648 = 16;
			Function_101(&Global_76847, 0x1000000);
			Function_96(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1);
			Function_95(iParam0->f_576, iParam1->f_48, 2);
		
		case 0x00000010:
			if (iParam0->f_716 > GET_CURRENT_GAME_TIME() && !Global_3380)
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iParam0->f_648 = 17;
			}
			else if (Global_3380)
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
				iParam0->f_648 = 17;
				Function_17(2048);
			}
			iVar1 = 250;
			break;
		
		case 0x00000011:
			if (HUD_IS_FADED())
			{
				Function_91(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (SQUAD_IS_VALID(iParam0->f_576))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_576);
				}
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
				RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
				iParam0->f_720 = 1;
				iParam0->f_648 = 24;
			}
			iVar1 = 250;
			break;
		
		case 0x00000015:
			Function_134("LAW_AI_STATE: BRIBE CUTSCENE", 11);
			Function_90("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			iParam0->f_648 = 22;
			bVar14 = Function_87(iParam1->f_48, iParam0->f_576);
			GET_POSITION(iParam1->f_48, iParam0 + 500);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			SQUAD_GOAL_ADD_MEET_AT_POSITION(iParam0->f_576, 1, iParam0 + 500, 4294967295, 5.0f, 1);
			ACTOR_HOLSTER_WEAPON(iParam1->f_48, 1);
			Function_96(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (IS_ACTOR_HOGTIED(bVar14))
			{
				FREE_FROM_HOGTIE(bVar14);
			}
			if (Function_83(&bVar25, &vVar26))
			{
				SET_ACTOR_HEADING(iParam1->f_48, bVar25, 1);
			}
			else
			{
				bVar25 = Function_82(iParam1->f_48);
				Function_81(bVar14);
				vVar26 = { StackVal, StackVal, Function_81(bVar14) };
			}
			MEMORY_CLEAR_ALL(iParam1->f_48);
			MEMORY_CLEAR_ALL(bVar14);
			ACTOR_START_FORCE_HOLSTER(iParam1->f_48, 0, 0);
			ACTOR_START_FORCE_HOLSTER(bVar14, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			RESET_ANIM_SET_FOR_ACTOR(bVar14, 0);
			TASK_CLEAR(iParam1->f_48);
			TASK_CLEAR(bVar14);
			SET_ANIM_SET_FOR_ACTOR(iParam1->f_48, "stand_shakehands", 0);
			SET_LINKED_ANIM_TARGET(iParam1->f_48, bVar14);
			TASK_ACTION_PERFORM(iParam1->f_48, "stand_shakehands/tip_hat");
			TASK_PRIORITY_SET(iParam1->f_48, true);
			TASK_PRIORITY_SET(bVar14, true);
			AI_IGNORE_ACTOR(iParam1->f_48);
			AI_IGNORE_ACTOR(bVar14);
			SET_ACTOR_CAN_PLAY_GESTURES(bVar14, false);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar14, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			MEMORY_CONSIDER_AS(bVar14, iParam1->f_48, 2);
			AUDIO_STOP_PAIN(Function_219());
			SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_219(), "PLAYER_OFFER_LAW_BRIBE", 1, 1, 0, 0);
			iParam0->f_708 = Function_77(StackVal, StackVal, iParam1->f_48, bVar25, vVar26);
			iParam0->f_716 = GET_CURRENT_GAME_TIME();
		
		case 0x00000016:
			if (iParam0->f_716 + 4.0f) > GET_CURRENT_GAME_TIME()
			{
				iParam0->f_648 = 23;
			}
			iVar1 = 250;
			break;
		
		case 0x00000017:
			Function_91(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (iParam0->f_708 != "")
			{
				REMOVE_CAMERA_FROM_CHANNEL(iParam0->f_708, 0);
			}
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			bVar14 = Function_87(iParam1->f_48, iParam0->f_576);
			if (IS_ACTOR_VALID(bVar14))
			{
				SET_ACTOR_CAN_PLAY_GESTURES(bVar14, true);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar14, 1);
			}
			AUDIO_SET_PLAYER_MOOD(0, 1);
			UI_EXIT("WantedMeter");
			UI_EXIT("BountyAmount");
			_HUD_WANTED_METER(0);
			_HUD_WANTED_CRIME(0.0f);
			Global_27761 = 0.0f;
			Global_27773 = 1;
			UNK_0x598815BD(Global_27761);
			UI_SET_STYLE("BountyAmount", 1);
			ACTOR_START_FORCE_HOLSTER(iParam1->f_48, 0, 0);
			iParam0->f_564 = 1;
			iParam0->f_648 = 24;
			iVar1 = 0;
			break;
		
		case 0x00000018:
			Function_134("LAW_AI_STATE: CLEANUP", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_133(iParam0->f_576);
			Function_27(iParam0->f_576, 0);
			if (IS_ACTOR_VALID(iParam1->f_48))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
			}
			if (!iParam0->f_552)
			{
				if (IS_ACTOR_VALID(iParam1->f_48))
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
					if (Function_11())
					{
						TASK_FLEE_ACTORSET(false, Global_78576, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_FLEE_ACTOR(false, iParam1->f_48, -1.0f, -1.0f, 0, 0, 0);
					}
				}
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
				TASK_WANDER(false, -1.0f);
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			iParam0->f_648 = 25;
		
		case 0x00000019:
			break;
	}
	return iVar1;
}

var Function_77(bool bParam0, var uParam1, vector3 vParam2) //Position: 0x4579 / 17785
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = CREATE_CAMERA_IN_LAYOUT(Global_26314, Function_37(), 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bVar0);
	GET_CAMERA_POSITION(bVar0, &vVar7);
	Function_81(bParam0);
	Function_79(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_81(bParam0), uParam1, vParam2, vVar7, &vVar1, &vVar4);
	SET_CAMERA_POSITION(bVar0, vVar1);
	SET_CAMERA_TARGET_POSITION(bVar0, vVar4, 0);
	if (!Function_78(StackVal, StackVal, vVar1))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bVar0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		INIT_CAMERA_FROM_GAME_CAMERA(bVar0);
		SET_CURRENT_CAMERA_ON_CHANNEL(bVar0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

bool Function_78(vector3 vParam0) //Position: 0x45F4 / 17908
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_79(vector3 vParam0, var uParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11) //Position: 0x460C / 17932
{
	struct<5> Var0;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	float fVar13;
	vector3 vVar14;
	float fVar17;
	bool bVar18;
	vector3 vVar19[8];
	var uVar44;
	var uVar47;
	int iVar50;
	
	Var0 = { StackVal, StackVal, vParam0 };
	Var0.f_4 = (StackVal + 2.0f);
	Var3 = { StackVal, StackVal, vParam0 };
	Var3.f_4 = (StackVal + 1.0f);
	vVar6 = { StackVal, StackVal, vParam4 };
	vVar6.f_4 = (vVar6.y + 2.0f);
	vVar9 = { StackVal, StackVal, vParam4 };
	vVar9.f_4 = (vVar9.y + 1.0f);
	bVar12 = VDIST(Var0, vVar6);
	fVar13 = 1,625f;
	*uParam11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(uParam11, 0,5f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar6, StackVal) };
	VSCALE(&vVar14, 0,5f);
	*uParam11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar14, *uParam11, StackVal) };
	VSCALE(uParam11, 0,5f);
	fVar17 = uParam3;
	bVar18 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar19[03] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[13] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[23] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[33] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[43] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[53] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[63] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[73] = { (fVar13 * bVar12), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar19[03]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[13]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[23]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[33]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[43]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[53]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[63]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[73]), (fVar17 + (-1.0f * bVar18)), 0);
	iVar50 = 0;
	while (iVar50 <= vVar19)
	{
		vVar19[iVar503] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam11, vVar19[iVar503], StackVal) };
		if (FIND_INTERSECTION(&(vVar19[iVar503]), uParam11, &uVar44, &uVar47, 1, 4294967295, 4194304))
		{
			vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_78(StackVal, StackVal, vVar19[iVar503]))
		{
			if (FIND_INTERSECTION(&(vVar19[iVar503]), &Var0, &uVar44, &uVar47, 1, 4294967295, 4194304))
			{
				vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar50++;
	}
	if (!Function_78(StackVal, StackVal, vVar19[03]))
	{
		vVar19[03].f_4 = StackVal;
	}
	if (!Function_78(StackVal, StackVal, vVar19[13]))
	{
		vVar19[13].f_4 = StackVal;
	}
	if (!Function_78(StackVal, StackVal, vVar19[23]))
	{
		vVar19[23].f_4 = StackVal;
	}
	if (!Function_78(StackVal, StackVal, vVar19[33]))
	{
		vVar19[33].f_4 = StackVal;
	}
	if (!Function_78(StackVal, StackVal, vVar19[43]))
	{
		vVar19[43].f_4 = StackVal;
	}
	if (!Function_78(StackVal, StackVal, vVar19[53]))
	{
		vVar19[53].f_4 = StackVal;
	}
	if (!Function_78(StackVal, StackVal, vVar19[63]))
	{
		vVar19[63].f_4 = StackVal;
	}
	if (!Function_78(StackVal, StackVal, vVar19[73]))
	{
		vVar19[73].f_4 = StackVal;
	}
	Function_80(StackVal, StackVal, vParam7, &vVar19);
	*uParam10 = { StackVal, StackVal, Function_80(StackVal, StackVal, vParam7, &vVar19) };
	return 1;
}

vector3 Function_80(vector3 vParam0, var uParam3) //Position: 0x4911 / 18705
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	bVar4 = 1E+08.0f;
	iVar3 = 0;
	while (iVar3 <= *uParam3)
	{
		if (!Function_78(StackVal, StackVal, *uParam3[iVar33]))
		{
			if (VDIST(*uParam3[iVar33], vParam0) > bVar4)
			{
				bVar4 = VDIST(*uParam3[iVar33], vParam0);
				vVar0 = { StackVal, StackVal, *uParam3[iVar33] };
			}
		}
		iVar3++;
	}
	return StackVal, StackVal, vVar0;
}

vector3 Function_81(bool bParam0) //Position: 0x4979 / 18809
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_82(bool bParam0) //Position: 0x498A / 18826
{
	return GET_HEADING(bParam0);
}

bool Function_83(float fParam0, int iParam1) //Position: 0x4995 / 18837
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	
	Function_81(GET_PLAYER_ACTOR(0));
	vVar3 = { StackVal, StackVal, Function_81(GET_PLAYER_ACTOR(0)) };
	uVar6 = Function_82(GET_PLAYER_ACTOR(0));
	vVar7 = { 0.0f, 0.0f, -1,7f };
	GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar7, &vVar0);
	if (Function_86(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3))
	{
		if (Function_85(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3) > 0,1f)
		{
			*fParam0 = uVar6;
			*iParam1 = { StackVal, StackVal, vVar0 };
			return 1;
		}
	}
	fVar10 = -1.0f;
	fVar11 = -1.0f;
	iVar12 = 0;
	iVar13 = 0;
	while (iVar13 <= 36)
	{
		Function_84(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 10.0f);
		vVar0 = { StackVal, StackVal, Function_84(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 10.0f) };
		if (Function_86(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3))
		{
			fVar14 = Function_85(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3);
			if (fVar11 > 0.0f || fVar14 > fVar11)
			{
				fVar10 = Function_105(StackVal, StackVal, StackVal, StackVal, vVar3, vVar0);
				fVar11 = fVar14;
				*iParam1 = { StackVal, StackVal, vVar0 };
				iVar12 = 1;
			}
		}
		iVar13++;
	}
	*fParam0 = fVar10;
	return iVar12;
}

vector3 Function_84(vector3 vParam0) //Position: 0x4A72 / 19058
{
	vector3 vVar0;
	
	vParam0 = (vParam0.x - vParam3.x);
	vParam0.f_4 = (vParam0.y - vParam3.y);
	vParam0.f_8 = (vParam0.z - vParam3.z);
	vVar0.x = ((COS_DEGREE(bParam6) * vParam0.x) - (SIN_DEGREE(bParam6) * vParam0.z));
	vVar0.f_8 = ((COS_DEGREE(bParam6) * vParam0.z) + (SIN_DEGREE(bParam6) * vParam0.x));
	vVar0.x = (vVar0.x + vParam3.x);
	vVar0.f_4 = (vVar0.y + vParam3.y);
	vVar0.f_8 = (vVar0.z + vParam3.z);
	return StackVal, StackVal, vVar0;
}

float Function_85(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x4AEC / 19180
{
	struct<5> Var0;
	var uVar6;
	float fVar9;
	
	FIND_GROUND_INTERSECTION(&uParam0, 1,3f, &Var0, &uVar6);
	FIND_GROUND_INTERSECTION(&uParam3, 1,3f, &Var3, &uVar6);
	fVar9 = (StackVal - StackVal);
	if (fVar9 > 0.0f)
	{
		fVar9 = (fVar9 * -1.0f);
	}
	return fVar9;
}

bool Function_86(vector3 vParam0) //Position: 0x4B2C / 19244
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar3 = { vParam0.x, (vParam0.y + 0,3f), vParam0.z };
	vVar6 = { vParam0.x, (vParam0.y + 1,7f), vParam0.z };
	vVar9 = { vParam3.x, (vParam3.y + 1.0f), vParam3.z };
	if (FIND_INTERSECTION(&vVar9, &vVar3, &uVar0, &uVar0, 0, 4294967295, 4194304) || FIND_INTERSECTION(&vVar9, &vVar6, &uVar0, &uVar0, 0, 4294967295, 4194304))
	{
		return 0;
	}
	return 1;
}

bool Function_87(bool bParam0, bool bParam1) //Position: 0x4B97 / 19351
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		if (Function_88(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_88(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_88(bool bParam0, bool bParam1) //Position: 0x4C54 / 19540
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_89(&uVar0, &uVar3);
	return iVar6;
}

var Function_89(var uParam0, bool bParam1) //Position: 0x4C73 / 19571
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_90(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4C91 / 19601
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_91(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x4CD8 / 19672
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_219();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_11())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_94(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_93();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_92(iParam9);
}

void Function_92(bool bParam0) //Position: 0x4DC8 / 19912
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_93() //Position: 0x4E6D / 20077
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_94(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4E82 / 20098
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
	Function_48(iParam0, TO_FLOAT(bParam1), 1);
	Function_47(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_95(bool bParam0, bool bParam1, bool bParam2) //Position: 0x50A2 / 20642
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_96(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x50E7 / 20711
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_93();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_219();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_11())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_81(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_37(), 2, Function_81(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_94(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_100()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_100()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_99(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_97(0x4000000);
	}
	if (Function_99(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_97(0x8000000);
	}
}

void Function_97(int iParam0) //Position: 0x5390 / 21392
{
	int iVar0;
	
	if (Function_98(iParam0, 1) && Function_98(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_98(var uParam0, int iParam1) //Position: 0x53C4 / 21444
{
	return (uParam0 && iParam1) == 0;
}

bool Function_99(int iParam0) //Position: 0x53D1 / 21457
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_100() //Position: 0x53ED / 21485
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

void Function_101(var uParam0, int iParam1) //Position: 0x546C / 21612
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_102(bool bParam0, bool bParam1) //Position: 0x547B / 21627
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_PREFER_WALKING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_103(var uParam0) //Position: 0x54C3 / 21699
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = Function_104();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar3 = GET_MOUNT(bVar2);
			if (IS_ACTOR_VALID(bVar3))
			{
				TASK_FLEE_ACTORSET(bVar3, bVar0, -1.0f, -1.0f, 0, 0, 0);
				RELEASE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	return;
}

var Function_104() //Position: 0x5525 / 21797
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return bVar0;
}

float Function_105(vector3 vParam0, vector3 vParam3) //Position: 0x5591 / 21905
{
	var uVar0;
	
	Function_106(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_106(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x55AB / 21931
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

var Function_107(var uParam0, int iParam1, float fParam2) //Position: 0x55CE / 21966
{
	struct<8> Var0;
	int iVar8;
	bool bVar9;
	vector3 vVar10;
	
	if (!IS_OBJECT_VALID(Global_26121[iParam1]))
	{
		return "";
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_108("llr") };
	iVar8 = CREATE_FORMATION_IN_LAYOUT(uParam0, &Var0, GET_NUM_FORMATION_LOCATIONS(Global_26121[iParam1]));
	bVar9 = false;
	while (bVar9 <= GET_NUM_FORMATION_LOCATIONS(Global_26121[iParam1]))
	{
		GET_FORMATION_LOCATION(Global_26121[iParam1], bVar9, &vVar10);
		vVar10 = { StackVal, StackVal, Vector(vVar10, StackVal, StackVal) * Vector(fParam2, fParam2, fParam2) };
		ADD_FORMATION_LOCATION(iVar8, &vVar10);
		bVar9++;
	}
	return iVar8;
}

struct<32> Function_108(bool bParam0) //Position: 0x5645 / 22085
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_109("0", &cVar8, ""), 4);
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

struct<32> Function_109(char* cParam0, char* cParam1, char* cParam2) //Position: 0x56AF / 22191
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_110(int iParam0, int iParam1) //Position: 0x56CE / 22222
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_111(int iParam0) //Position: 0x56E1 / 22241
{
	if (Global_29006 == Global_30717[0])
	{
		if (iParam0->f_416 < 846.0f)
		{
			return 1;
		}
	}
	return 0;
}

void Function_112(int iParam0, char* cParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6) //Position: 0x5704 / 22276
{
	int iVar0;
	
	iVar0 = Function_113();
	if (iVar0 == 4294967295)
	{
		return;
	}
	strcpy(&(Global_27647[iVar022]), cParam1, 64);
	Global_27647[iVar022].f_64 = fParam2;
	Global_27647[iVar022].f_84 = uParam3;
	Global_27647[iVar022].f_68 = fParam4;
	Global_27647[iVar022].f_72 = iParam5;
	Global_27647[iVar022].f_80 = iParam0;
	Global_27647[iVar022].f_76 = iParam6;
}

var Function_113() //Position: 0x5767 / 22375
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_27647)
	{
		if (Global_27647[iVar022].f_64 > 0,5f)
		{
			return iVar0;
		}
		if (Global_27647[iVar022].f_76)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_114(bool bParam0) //Position: 0x57A6 / 22438
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

var Function_115(bool bParam0, int iParam1) //Position: 0x57F6 / 22518
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return "";
	}
	if (!Function_117(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_116(bVar1, bVar2);
	bVar3 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar3))
	{
		bVar5 = GET_CRIME_FROM_OBJECT(bVar3);
		if (GET_CRIME_CRIMINAL(bVar5) != bParam0 && GET_CRIME_WITNESSED(bVar5) <= iParam1)
		{
			if (GET_CRIME_END_TIMESTAMP(bVar5) < fVar0)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(bVar5);
				bVar4 = bVar5;
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar4;
}

void Function_116(bool bParam0, bool bParam1) //Position: 0x5892 / 22674
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_117(int iParam0) //Position: 0x58C1 / 22721
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_118(int iParam0, bool bParam1) //Position: 0x58D6 / 22742
{
	if (bParam1)
	{
		iParam0->f_536 = GET_CURRENT_GAME_TIME();
	}
	else
	{
		iParam0->f_536 = (GET_CURRENT_GAME_TIME() - 10.0f);
	}
	iParam0->f_452 = GET_CURRENT_GAME_TIME();
	return;
}

bool Function_119(int iParam0) //Position: 0x5902 / 22786
{
	switch (iParam0->f_724)
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

bool Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5946 / 22854
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (MEMORY_GET_IS_VISIBLE(bVar0, bParam1))
					{
						if (bParam2)
						{
							if (MEMORY_GET_IS_IDENTIFIED(bVar0, bParam1))
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

bool Function_121(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x59AE / 22958
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_78(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_122(bVar1);
				if (VDIST(Function_122(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

vector3 Function_122(bool bParam0) //Position: 0x5A1C / 23068
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_123(int iParam0, float fParam1) //Position: 0x5A86 / 23174
{
	if ((GET_CURRENT_GAME_TIME() - iParam0->f_356) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_124(int iParam0) //Position: 0x5A9E / 23198
{
	bool bVar0;
	vector3 vVar1;
	
	if (iParam0->f_648 != 12)
	{
		if (StackVal || ((StackVal != 0 && iParam0->f_724 != 1) != 1 && iParam0->f_724 != 0))
		{
			bVar0 = true;
		}
		if (*iParam0 == 3)
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			Function_125(iParam0);
			vVar1 = { StackVal, StackVal, Function_125(iParam0) };
			if (!Function_78(StackVal, StackVal, vVar1))
			{
				if (SQUAD_IS_VALID(iParam0->f_576))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_576);
					Function_133(iParam0->f_576);
					Function_134("LAW_AI_STATE: STAY IN COUNTRY", 11);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 0, 4294967295);
					TASK_GO_NEAR_COORD(false, &vVar1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
				}
				if (SQUAD_IS_VALID(iParam0->f_580))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_580);
					Function_133(iParam0->f_580);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 0, 4294967295);
					TASK_GO_NEAR_COORD(false, &vVar1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
				}
				iParam0->f_648 = 12;
				return 1;
			}
		}
	}
	return 0;
}

vector3 Function_125(var uParam0) //Position: 0x5BA1 / 23457
{
	int iVar0;
	
	iVar0 = Function_127(uParam0);
	switch (iVar0)
	{
		case 0x00000000:
			if (uParam0->f_724 == 0)
			{
				return 3,07f, 94,87f, 2704,52f;
			}
			if (uParam0->f_724 == 1)
			{
				return 61,98f, 94,83f, 2782,57f;
			}
			break;
		
		case 0x00000001:
			if (uParam0->f_724 == 0)
			{
				return -2395,41f, 13,94f, 3882,45f;
			}
			if (uParam0->f_724 == 1)
			{
				return -2356,1f, 13,91f, 4019,29f;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_724 == 0)
			{
				return -3711,54f, 24,11f, 4022,47f;
			}
			if (uParam0->f_724 == 1)
			{
				return -3518,87f, 19,29f, 4208,25f;
			}
			break;
	}
	Function_126();
	return StackVal, StackVal, Function_126();
}

vector3 Function_126() //Position: 0x5C72 / 23666
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_127(int iParam0) //Position: 0x5C7B / 23675
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	
	bVar0 = 1,001638E+07.0f;
	iVar1 = 4294967295;
	vVar3 = { 32.0f, 96.0f, 2741.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 0;
		bVar0 = bVar2;
	}
	vVar3 = { -2381.0f, 14.0f, 3935.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 1;
		bVar0 = bVar2;
	}
	vVar3 = { -3571.0f, 21.0f, 4128.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 2;
		bVar0 = bVar2;
	}
	return iVar1;
}

bool Function_128(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5D23 / 23843
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (ACTORS_IN_RANGE(bVar1, bParam1, bParam2))
				{
					if (!Function_129(bVar1, 1) || iParam3)
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

bool Function_129(bool bParam0, int iParam1) //Position: 0x5DBC / 23996
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_130(int iParam0, bool bParam1, bool bParam2) //Position: 0x5E06 / 24070
{
	bool bVar0;
	vector3 vVar1;
	
	if (GET_OBJECT_TYPE(bParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, bParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		return 0;
	}
	if (bParam2)
	{
		if (!IS_ITERATOR_VALID(Global_26118))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(bParam1, &vVar1);
		Function_61(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(Global_26118, 15);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar0)) == iParam0)
			{
				return 1;
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
		Function_61(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, Global_6289);
		ITERATE_ON_OBJECT_TYPE(Global_26118, 24);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))) == iParam0)
				{
					return 1;
				}
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
	}
	return 0;
}

void Function_131(int iParam0, var uParam1, int iParam2) //Position: 0x5F79 / 24441
{
	if (iParam0->f_536 > 0.0f)
	{
		if ((Function_128(iParam0->f_576, uParam1->f_48, 20.0f, 1) || Function_123(iParam0, 0x3f800000)) || iParam2)
		{
			if (!Function_56(iParam0->f_576, 59, uParam1->f_48))
			{
				if (GET_WEAPON_IN_HAND(uParam1->f_48) == 4294967295)
				{
					Function_112(iParam0->f_576, "law_give_up_unarmed", 2,5f, uParam1->f_64, 20.0f, 1, 0);
				}
				else
				{
					Function_112(iParam0->f_576, "law_give_up", 2,5f, uParam1->f_64, 20.0f, 1, 0);
				}
			}
			Function_118(iParam0, 1);
		}
	}
	return;
}

void Function_132(bool bParam0, int iParam1) //Position: 0x6026 / 24614
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_SIZE(bParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					MEMORY_ALLOW_TAKE_COVER(bVar1, iParam1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_133(bool bParam0) //Position: 0x606B / 24683
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_134(bool bParam0, int iParam1) //Position: 0x609D / 24733
{
	if (!Function_99(128))
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

int Function_135(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x60D8 / 24792
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_78(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0,01f);
		uParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_78(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_136(int iParam0, var uParam1, bool bParam2) //Position: 0x620A / 25098
{
	int iVar0;
	float fVar1;
	
	fVar1 = Function_141(iParam0, uParam1->f_48);
	if ((GET_CURRENT_GAME_TIME() - fVar1) > 5.0f)
	{
		if (bParam2)
		{
			Global_3405 = 0;
		}
		*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
		GET_ACTOR_VELOCITY(uParam1->f_48, iParam0 + 512);
		iParam0->f_444 = GET_CURRENT_GAME_TIME();
	}
	else if (bParam2)
	{
		Global_3405 = 1;
		if (Global_26316.f_176)
		{
			if (!Function_220(Global_76847, 8))
			{
				Function_214(Global_34573, 8, 2, 0);
			}
		}
	}
	if (bParam2)
	{
		if (Global_3386 && Global_3405)
		{
			if (Function_130(uParam1->f_56, GET_OBJECT_FROM_ACTOR(uParam1->f_48), 1))
			{
				Global_3405 = 0;
				*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
				GET_ACTOR_VELOCITY(uParam1->f_48, iParam0 + 512);
				iParam0->f_448 = GET_CURRENT_GAME_TIME();
				Function_140(iParam0->f_576, uParam1->f_48, 0);
				if (!Function_220(Global_76847, 16))
				{
					Function_214(Global_34573, 16, 2, 0);
				}
			}
		}
	}
	iParam0->f_356 = Function_110(Function_110(iParam0->f_440, iParam0->f_444), iParam0->f_448);
	Global_27763 = Function_64(iParam0);
	Global_27764 = iParam0->f_356;
	if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + Global_27763))
	{
		if (Function_139(iParam0->f_576) >= 0)
		{
			if (!Function_56(iParam0->f_576, 22, uParam1->f_48))
			{
				Function_112(iParam0->f_576, "law_go_unwanted", 5.0f, uParam1->f_64, 20.0f, 0, 0);
			}
		}
		if (Function_11())
		{
			if (Function_137(Global_29006) < Global_78480.f_116)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + 5.0f))
	{
		if (bParam2)
		{
			if (Global_26316.f_176)
			{
				if (!Function_220(Global_76847, 4096))
				{
					Function_214(Global_34573, 4096, 2, 0);
				}
			}
		}
		if (GET_CURRENT_GAME_TIME() < (iParam0->f_352 + 20.0f))
		{
			if (Function_139(iParam0->f_576) >= 0)
			{
				if (!Function_56(iParam0->f_576, 22, uParam1->f_48))
				{
					Function_112(iParam0->f_576, "law_wanted_lost_track", 2,5f, uParam1->f_64, 20.0f, 0, 1);
				}
			}
			iParam0->f_352 = GET_CURRENT_GAME_TIME();
		}
	}
	return iVar0;
}

int Function_137(int iParam0) //Position: 0x642C / 25644
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (Function_138(iParam0))
	{
		bVar1 = false;
		while (bVar1 <= 16)
		{
			if (IS_SLOT_VALID(bVar1))
			{
				if (Global_76943[bVar196] == iParam0)
				{
					iVar0 = (iVar0 + Global_76943[bVar196].f_116);
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

bool Function_138(int iParam0) //Position: 0x6476 / 25718
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_139(bool bParam0) //Position: 0x648C / 25740
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_140(bool bParam0, bool bParam1, bool bParam2) //Position: 0x64D9 / 25817
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

var Function_141(var uParam0, int iParam1) //Position: 0x6544 / 25924
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (SQUAD_IS_VALID(uParam0->f_580))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(uParam0->f_580) >= 0)
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	bVar0 = GET_LASSO_TARGET(Function_219());
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_142(bVar0, uParam0->f_576, 0))
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	iVar3 = 0.0f;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (GET_LAST_ATTACK_TARGET(bVar2) != iParam1 && GET_LAST_ATTACK_TIME(bVar2) <= (GET_CURRENT_GAME_TIME() - 5.0f))
				{
					return GET_CURRENT_GAME_TIME();
				}
				iVar3 = Function_110(MEMORY_GET_POSITION_LAST_KNOWN_TIME(bVar2, iParam1), iVar3);
			}
		}
		bVar1++;
	}
	return iVar3;
}

bool Function_142(bool bParam0, bool bParam1, bool bParam2) //Position: 0x65EA / 26090
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

void Function_143() //Position: 0x662A / 26154
{
	if (Global_3386)
	{
		if (Function_146(32768))
		{
			Function_144(32768);
		}
	}
	else if (!Function_146(32768))
	{
		Function_5(32768);
	}
	return;
}

void Function_144(int iParam0) //Position: 0x665C / 26204
{
	Function_145(&Global_28842, iParam0);
	return;
}

void Function_145(var uParam0, int iParam1) //Position: 0x666A / 26218
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_146(int iParam0) //Position: 0x668D / 26253
{
	return Function_147(&Global_28842, iParam0);
}

int Function_147(var uParam0, int iParam1) //Position: 0x669B / 26267
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_148(int iParam0) //Position: 0x66B7 / 26295
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(iParam0->f_576))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_RIDING(bVar1))
				{
					AI_SET_NAV_MATERIAL_USAGE(bVar1, 96, 0);
				}
				else
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_149(var uParam0, int iParam1) //Position: 0x670D / 26381
{
	if (Function_11())
	{
		return;
	}
	if (uParam0->f_540 || uParam0->f_548)
	{
		return;
	}
	if (UNK_0x7A207FFE(iParam1->f_48))
	{
		uParam0->f_548 = 1;
		uParam0->f_648 = 18;
		uParam0->f_460 = GET_CURRENT_GAME_TIME();
	}
	return;
}

void Function_150(var uParam0, int iParam1) //Position: 0x6748 / 26440
{
	if ((((((uParam0->f_544 || uParam0->f_540) || uParam0->f_548) || uParam0->f_552) || uParam0->f_568) || uParam0->f_572) || uParam0->f_648 < 14)
	{
		return;
	}
	if ((((Global_26401[iParam1->f_64] <= 15 || (GET_CURRENT_GAME_TIME() <= (uParam0->f_480 + 20.0f) && uParam0->f_480 < 0.0f)) || *uParam0 != 2) || *uParam0 != 3) || Function_11())
	{
		Function_151(uParam0, iParam1);
	}
	return;
}

void Function_151(var uParam0, int iParam1) //Position: 0x67BC / 26556
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_220(Global_76847, 8192))
	{
		Function_214(Global_34573, 8192, 2, 0);
	}
	Function_56(uParam0->f_576, 58, iParam1->f_48);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_ALLOW_SHOOTING(bVar1, true);
			AI_CLEAR_FIRE_DELAY(bVar1);
			AI_CLEAR_FIRE_DELAY_RANDOMNESS(bVar1);
			AI_CLEAR_BURST_DURATION(bVar1);
			AI_CLEAR_BURST_DURATION_RANDOMNESS(bVar1);
			AI_CLEAR_SHOTS_PER_BURST(bVar1);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bVar1, 0,5f, 0,5f);
		}
		bVar0++;
	}
	uParam0->f_544 = 1;
	return;
}

void Function_152(var uParam0, int iParam1) //Position: 0x684B / 26699
{
	int iVar0;
	bool bVar1;
	
	if (GET_CURRENT_GAME_TIME() <= uParam0->f_736)
	{
		iVar0 = uParam0->f_668;
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			uParam0->f_668 = Function_153(iParam1->f_48, 258);
		}
		else
		{
			uParam0->f_668 = "";
		}
		uParam0->f_736 = (GET_CURRENT_GAME_TIME() + 2.0f);
		if (IS_OBJECT_VALID(uParam0->f_668))
		{
			if (!uParam0->f_560)
			{
				if (Global_3387)
				{
					if (GET_CURRENT_GAME_TIME() >= (uParam0->f_356 + 2.0f))
					{
						uParam0->f_560 = 1;
						uParam0->f_376 = GET_CURRENT_GAME_TIME();
						bVar1 = false;
						while (bVar1 <= SQUAD_GET_SIZE(uParam0->f_576))
						{
							MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1), iParam1->f_48, true);
							bVar1++;
						}
					}
				}
			}
			else if (!iVar0 != "")
			{
				if (iVar0 == uParam0->f_668 && uParam0->f_648 != 14)
				{
					uParam0->f_376 = GET_CURRENT_GAME_TIME();
					uParam0->f_648 = 13;
				}
			}
		}
		else if (uParam0->f_560)
		{
			uParam0->f_560 = 0;
			uParam0->f_376 = -1.0f;
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(uParam0->f_576))
			{
				MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1), iParam1->f_48, false);
				bVar1++;
			}
		}
	}
	return;
}

var Function_153(bool bParam0, int iParam1) //Position: 0x6962 / 26978
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	if (GET_OBJECT_TYPE(bParam0) == 3)
	{
		bVar1 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bParam0));
	}
	if (!IS_OBJECT_VALID(bVar1))
	{
		bVar1 = bParam0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		DESTROY_ITERATOR(bVar0);
		return "";
	}
	GET_OBJECT_POSITION(bVar1, &vVar2);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_62(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(bParam0, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
				if (IS_POINT_IN_VOLUME(vVar2, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
			}
		}
		bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	Function_61(&bVar0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 10);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_62(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(bParam0, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
				if (IS_POINT_IN_VOLUME(vVar2, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
			}
		}
		bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return "";
}

void Function_154(int iParam0, int iParam1) //Position: 0x6AFB / 27387
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	if (Function_11())
	{
		return;
	}
	if (Global_26316.f_176)
	{
		if (!Function_220(Global_76848, 32768))
		{
			Function_214(Function_219(), 32768, 3, 0);
		}
	}
	if ((((((Function_158(iParam1->f_48, 0, 0) || Global_3405) || Function_74(iParam0, 1) != 0) || Global_63096) || iParam0->f_552) || IS_ACTOR_RAGDOLL(iParam1->f_48)) || !IS_ACTOR_ALIVE(iParam1->f_48))
	{
		if (iParam0->f_568 && !iParam0->f_540)
		{
			iParam0->f_568 = 0;
			iParam0->f_572 = 0;
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			Function_157(iParam0, iParam1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48));
		return;
	}
	if (((IS_ACTOR_RIDING(iParam1->f_48) || IS_ACTOR_RIDING_VEHICLE(iParam1->f_48)) || IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(iParam1->f_48)))) || IS_ACTOR_PERFORMING_LINKED_ANIMATION(iParam1->f_48))
	{
		if (iParam0->f_568 && !iParam0->f_540)
		{
			iParam0->f_568 = 0;
			iParam0->f_572 = 0;
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			Function_157(iParam0, iParam1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48));
		return;
	}
	fVar0 = Function_156(GET_TIME_SINCE_LAST_MOVESTICK_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48)), GET_TIME_SINCE_LAST_BUTTON_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48)));
	if (fVar0 < 1.0f && GET_WEAPON_IN_HAND(iParam1->f_48) != 4294967295)
	{
		if (!iParam0->f_568)
		{
			bVar3 = false;
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_576))
			{
				if (!bVar3)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar1);
					if (IS_ACTOR_VALID(bVar2))
					{
						if (IS_ACTOR_ALIVE(bVar2))
						{
							if (!IS_ACTOR_HOGTIED(bVar2))
							{
								Function_81(bVar2);
								Var4 = { StackVal, StackVal, Function_81(bVar2) };
								if (VDIST(Var4, *(iParam0 + 416)) > 22.0f)
								{
									if (MEMORY_GET_IS_VISIBLE(bVar2, iParam1->f_48))
									{
										if (iParam0->f_648 == 14)
										{
											if (IS_OBJECT_VALID(iParam0->f_668))
											{
												bVar7 = GET_VOLUME_FROM_OBJECT(iParam0->f_668);
												if (IS_VOLUME_VALID(bVar7))
												{
													if (IS_ACTOR_IN_VOLUME(bVar2, bVar7))
													{
														if (FABS((StackVal - StackVal)) > 1,5f)
														{
															bVar3 = true;
														}
													}
													else if (!GET_ACTOR_VISION_XRAY(bVar2))
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
				iParam0->f_400 = (iParam0->f_400 + (1.0f * TIMESTEP()));
			}
			else
			{
				iParam0->f_400 = 0.0f;
			}
			if (bVar3 && iParam0->f_400 <= 0,45f)
			{
				SET_ANIM_SET_FOR_ACTOR(iParam1->f_48, "stand_surrender", 0);
				SET_ACTION_NODE_FOR_ACTOR(iParam1->f_48, "stand_surrender/submit");
				AUDIO_STOP_PAIN(Function_219());
				if (Function_155() > 3)
				{
					SAY_SINGLE_LINE_STRING(Function_219(), "PLAYER_ARRESTED_HONORABLE", true, true, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING(Function_219(), "PLAYER_ARRESTED_DISHONORABLE", true, true, 0, 0, true, false);
				}
				AI_DONT_HARM_ACTOR(iParam1->f_48);
				Function_133(iParam0->f_576);
				SQUAD_GOALS_CLEAR(iParam0->f_576);
				bVar9 = false;
				while (bVar9 <= SQUAD_GET_SIZE(iParam0->f_576))
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar9);
					if (IS_ACTOR_VALID(bVar2))
					{
						Function_81(bVar2);
						Function_81(iParam1->f_48);
						bVar10 = VDIST(Function_81(bVar2), Function_81(iParam1->f_48));
						bVar11 = RAND_FLOAT_RANGE(5.0f, 10.0f);
						bVar8 = TASK_SEQUENCE_OPEN();
						if (bVar10 >= 18.0f)
						{
							TASK_GO_NEAR_COORD(false, iParam0 + 416, bVar11, 1);
						}
						else
						{
							TASK_GO_NEAR_COORD(false, iParam0 + 416, bVar11, 4);
						}
						TASK_POINT_GUN_AT_OBJECT(false, iParam1->f_48, -1.0f, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar2, bVar8);
						TASK_PRIORITY_SET(bVar2, true);
						TASK_SEQUENCE_RELEASE(bVar8, 1);
					}
					bVar9++;
				}
				iParam0->f_456 = GET_CURRENT_GAME_TIME();
				iParam0->f_572 = 0;
				iParam0->f_644 = 0;
				iParam0->f_568 = 1;
			}
		}
		else
		{
			if (!iParam0->f_644)
			{
				if (GET_CURRENT_GAME_TIME() <= (iParam0->f_456 + 2,8f))
				{
					bVar12 = Function_87(iParam1->f_48, iParam0->f_576);
					if (IS_ACTOR_VALID(bVar12))
					{
						if (Function_155() >= 4)
						{
							SAY_SINGLE_LINE_CONTEXT(bVar12, true, iParam1->f_48, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_155() <= 2)
						{
							SAY_SINGLE_LINE_CONTEXT(bVar12, 2, iParam1->f_48, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(bVar12, false, iParam1->f_48, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						iParam0->f_644 = 1;
					}
				}
			}
			if (GET_CURRENT_GAME_TIME() <= (iParam0->f_456 + 6,5f))
			{
				if (iParam0->f_568)
				{
					iParam0->f_540 = 1;
					iParam0->f_648 = 15;
					iParam0->f_716 = GET_CURRENT_GAME_TIME();
					Global_3408 = 0;
				}
			}
		}
	}
	else if (((((fVar0 < 0,5f && GET_WEAPON_IN_HAND(iParam1->f_48) != 4294967295) && Function_20(iParam1->f_64) >= 1500) && !iParam0->f_572) && !iParam0->f_540) && !iParam0->f_568)
	{
		AI_DONT_HARM_ACTOR(iParam1->f_48);
		iParam0->f_572 = 1;
	}
	else
	{
		if (iParam0->f_568 && !iParam0->f_540)
		{
			iParam0->f_568 = 0;
			Function_157(iParam0, iParam1);
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
		}
		if (iParam0->f_572)
		{
			AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
			iParam0->f_572 = 0;
		}
	}
	return;
}

int Function_155() //Position: 0x6FC1 / 28609
{
	return Global_12976.f_152;
}

var Function_156(int iParam0, int iParam1) //Position: 0x6FCC / 28620
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_157(int iParam0, int iParam1) //Position: 0x6FDF / 28639
{
	if (SQUAD_IS_VALID(iParam0->f_576))
	{
		AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
		if (!iParam0->f_560)
		{
			iParam0->f_648 = 4;
		}
		else
		{
			iParam0->f_648 = 13;
		}
	}
	return;
}

bool Function_158(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7010 / 28688
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_185(bParam0))
	{
		return 1;
	}
	if (Function_160(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_159())
	{
		return 1;
	}
	return 0;
}

bool Function_159() //Position: 0x70C6 / 28870
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_160(bool bParam0) //Position: 0x70DD / 28893
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

void Function_161(int iParam0, int iParam1) //Position: 0x70E8 / 28904
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	if (!Function_224(524288))
	{
		if (Function_128(iParam0->f_576, iParam1->f_48, 10.0f, 1))
		{
			if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam1->f_52, iParam1->f_48))
			{
				iParam0->f_380 = 1.0f;
			}
			if (!Function_220(Global_76847, 32))
			{
				Function_214(Global_34573, 32, 2, 0);
			}
		}
		return;
	}
	if (((((!iParam0->f_540 && !iParam0->f_568) && !iParam0->f_548) && !iParam0->f_552) && Function_224(0x2000000)) && Function_74(iParam0, 1) < 0)
	{
		if (Function_184(iParam0->f_576, iParam1->f_48, 10.0f, 0,5f))
		{
			bVar1 = false;
			if (Function_182(iParam0->f_576, iParam1->f_48, 25.0f, 0) == 1)
			{
				if (Function_179(iParam0, iParam1))
				{
					Global_3408 = 1;
					bVar1 = true;
					bVar2 = CEIL((IntToFloat(Function_20(iParam1->f_64)) / 2.0f));
					if (Function_12() > 2)
					{
						bVar2 = CEIL((IntToFloat(bVar2) * 0,75f));
					}
					if (Function_178() > bVar2)
					{
						bVar1 = false;
						if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_712))
						{
							if (Global_26316.f_176)
							{
								if (!Function_220(Global_76848, 16384))
								{
									Function_214(Function_219(), 16384, 3, 0);
								}
							}
							iParam0->f_712 = ADD_SCRIPT_USE_CONTEXT("nlaw_bribe", true, 5, false, 0, 0, 0, 4294967295, 0);
							SET_USE_CONTEXT_TEXT(iParam0->f_712, "nlaw_bribe", I2STR(bVar2), 0, 0, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_712))
					{
						RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_712);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_712))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iParam0->f_712))
						{
							if (Function_178() > bVar2)
							{
								Function_24();
								DECOR_SET_INT(StackVal, Function_177(iParam0->f_576), CEIL((IntToFloat(Function_20("iAdditionalMoney")) / 2.0f)));
								if (CEIL((IntToFloat(Function_20(StackVal)) / 2.0f)) >= Function_51(255))
								{
									Function_35(StackVal, CEIL((IntToFloat(Function_20(255)) / 2.0f)), 0);
								}
								Function_94(253, 1, 0, 0);
								Function_176(CEIL((IntToFloat(Function_20(StackVal)) / 2.0f)), 1);
								if (Function_20(StackVal) <= 100)
								{
									Function_163(4294966896, 1, 0);
								}
								else if (Function_20(StackVal) <= 1000)
								{
									Function_163(4294966296, 1, 0);
								}
								else
								{
									Function_163(4294965296, 1, 0);
								}
								Function_34();
								Function_162("bribe_taken", 0x41200000, 1, 0, 2, 1, 0);
								iParam0->f_640 = 0;
								iParam0->f_636 = 0.0f;
								iParam0->f_648 = 21;
								iParam0->f_552 = 1;
							}
							RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_712);
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
				if (Function_179(iParam0, iParam1))
				{
					bVar1 = true;
				}
				bVar0 = true;
			}
			if (bVar1)
			{
				if (IS_BUTTON_PRESSED(0, 5, 1, 0))
				{
					if (!iParam0->f_640)
					{
						iParam0->f_640 = 1;
						iParam0->f_636 = (iParam0->f_636 + 0,8f);
					}
					if (iParam0->f_636 <= 4.0f)
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_219(), "PLAYER_OFFER_LAW_BRIBE_URGENT", 1, 1, 2, 0);
						iParam0->f_640 = 0;
						iParam0->f_636 = 0.0f;
					}
				}
				else
				{
					iParam0->f_640 = 0;
					iParam0->f_636 = (iParam0->f_636 - (1,4f * TIMESTEP()));
					if (iParam0->f_636 > 0.0f)
					{
						iParam0->f_636 = 0.0f;
					}
				}
			}
			else
			{
				iParam0->f_640 = 0;
				iParam0->f_636 = 0.0f;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else if (((iParam0->f_540 || iParam0->f_548) || iParam0->f_552) || iParam0->f_568)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_712))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_712);
		}
		Global_3408 = 0;
	}
	return;
}

void Function_162(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x746C / 29804
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_163(int iParam0, bool bParam1, bool bParam2) //Position: 0x74B7 / 29879
{
	int iVar0;
	bool bVar1;
	
	if (Function_65(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_51(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_175(1, bVar1);
			if (!bParam2)
			{
				if (!Function_220(Global_76848, 1))
				{
					Function_214(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_173(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_220(Global_76848, 2))
				{
					Function_214(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_94(1, bVar1, 0, 0);
	}
	else
	{
		Function_172(1, (4294967295 * bVar1), 0);
	}
	if (Function_51(1) <= 4294962296)
	{
		Function_35(1, 4294962296, 0);
	}
	else if (Function_51(1) >= 5000)
	{
		Function_35(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_45(1));
	iVar0 = Function_51(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_165(2, Function_171(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_165(2, Function_171(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_165(2, Function_171(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_165(2, Function_171(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_165(2, Function_171(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_165(2, Function_171(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_165(2, Function_171(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_165(2, Function_171(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_165(2, Function_171(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_165(2, Function_171(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_165(2, Function_171(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
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
				Global_12976.f_152 = 5;
				Function_165(2, Function_171(Global_12976.f_152), 0);
			}
			break;
	}
	Function_164(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_164(int iParam0, int iParam1) //Position: 0x77CC / 30668
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_165(int iParam0, char* cParam1, bool bParam2) //Position: 0x7A2A / 31274
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_169(iParam0, cParam1, 0, 1);
	iVar1 = Function_166();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_166() //Position: 0x7BAF / 31663
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_167();
	return 0;
}

void Function_167() //Position: 0x7C4E / 31822
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_168(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_168(int iParam0) //Position: 0x7CFD / 31997
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

int Function_169(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x7D5B / 32091
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_170(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_170(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x8103 / 33027
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

var Function_171(int iParam0) //Position: 0x8186 / 33158
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

int Function_172(int iParam0, bool bParam1, int iParam2) //Position: 0x8229 / 33321
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
	Function_47(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_173(int iParam0, bool bParam1) //Position: 0x8424 / 33828
{
	bool bVar0;
	int iVar1;
	
	Function_172(iParam0, bParam1, 0);
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
	iVar1 = Function_174(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_166();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_174(int iParam0, int iParam1) //Position: 0x85C0 / 34240
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

int Function_175(int iParam0, bool bParam1) //Position: 0x8601 / 34305
{
	bool bVar0;
	int iVar1;
	
	Function_94(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_174(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_166();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_176(int iParam0, bool bParam1) //Position: 0x879E / 34718
{
	bool bVar0;
	
	bVar0 = Function_51(0);
	if ((Function_51(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_172(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_51(0));
	return 1;
}

int Function_177(bool bParam0) //Position: 0x882E / 34862
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

int Function_178() //Position: 0x8874 / 34932
{
	return Function_51(0);
}

bool Function_179(int iParam0, int iParam1) //Position: 0x887E / 34942
{
	bool bVar0;
	
	if (((((((CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam1->f_52, iParam1->f_48) && GET_ATTACHED_HOGTIE_VICTIM(iParam1->f_48) != "") && GET_WEAPON_IN_HAND(iParam1->f_48) != 4294967295) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && !IS_ACTOR_RAGDOLL(iParam1->f_48)) && !Function_158(Function_219(), 0, 1)) && !Function_181()) && !Function_180())
	{
		bVar0 = Function_87(iParam1->f_48, iParam0->f_576);
		if (IS_ACTOR_VALID(bVar0))
		{
			if ((((IS_ACTOR_ALIVE(bVar0) && !IS_ACTOR_RAGDOLL(bVar0)) && !IS_ACTOR_RIDING(bVar0)) && !IS_ACTOR_HOGTIED(bVar0)) && !IS_ACTOR_ON_LADDER(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_180() //Position: 0x8908 / 35080
{
	return Global_34578 != 3;
}

bool Function_181() //Position: 0x8913 / 35091
{
	return Global_34578 != 2;
}

int Function_182(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x891E / 35102
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_ALIVE(bVar2))
		{
			if (Function_183(bVar2, bParam1, uParam2))
			{
				iVar1++;
				if (bParam3)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0x898D / 35213
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam2))
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

bool Function_184(bool bParam0, bool bParam1, bool bParam2, float fParam3) //Position: 0x8A9E / 35486
{
	bool bVar0;
	bool bVar1;
	struct<5> Var2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		return 0;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				GET_POSITION(bVar1, &Var5);
				if (FABS((StackVal - StackVal)) > fParam3)
				{
					if (ACTORS_IN_RANGE(bVar1, bParam1, bParam2))
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

bool Function_185(bool bParam0) //Position: 0x8B31 / 35633
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

var Function_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8B3F / 35647
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4), iVar5))
			{
				bVar4 = "";
			}
		}
		if (bParam3)
		{
			if (IS_ACTOR_RIDING(bVar4))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_187(bVar4, bParam1);
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
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
	}
	return "";
}

var Function_187(bool bParam0, bool bParam1) //Position: 0x8BF9 / 35833
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

void Function_188(int iParam0) //Position: 0x8CEA / 36074
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_2())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_189(int iParam0, int iParam1) //Position: 0x8D1F / 36127
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(iParam0->f_576))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(iParam0->f_336))
	{
		return 0;
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		return 0;
	}
	while (iParam0->f_600 <= iParam0->f_596)
	{
		bVar0 = Function_207(iParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_190(iParam0, bVar0, iParam1->f_48);
			}
		}
		iParam0->f_600++;
	}
	iParam0->f_344 = GET_CURRENT_GAME_TIME();
	if (!Function_56(iParam0->f_576, 105, iParam1->f_48))
	{
		if (GET_WEAPON_IN_HAND(iParam1->f_48) == 4294967295)
		{
			Function_112(iParam0->f_576, "law_go_wanted_unarmed", 5.0f, iParam1->f_64, 20.0f, 1, 0);
		}
		else
		{
			Function_112(iParam0->f_576, "law_go_wanted", 5.0f, iParam1->f_64, 20.0f, 1, 0);
		}
	}
	return 1;
}

void Function_190(int iParam0, bool bParam1, bool bParam2) //Position: 0x8E02 / 36354
{
	int iVar0;
	bool bVar1;
	
	Function_192(bParam1, Function_206(Function_20(iParam0->f_724), *iParam0));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam1, 31, -1.0f);
	if (Function_11())
	{
		iVar0 = 878;
		switch (*iParam0)
		{
			case 0x00000000:
				iVar0 = 878;
				break;
			
			case 0x00000002:
				iVar0 = 879;
				break;
			
			case 0x00000003:
				iVar0 = 880;
				break;
			
			case 0x00000001:
				iVar0 = 881;
				break;
		}
		NET_ACTOR_SET_SCRIPT_INT(bParam1, iVar0);
		NET_ACTOR_SET_ALLOW_BLIP_SYNC(bParam1, 0);
		bVar1 = Function_191(bParam1);
		if (IS_LAYOUTREF_VALID(bVar1))
		{
			if (bVar1 != iParam0->f_336)
			{
				GIVE_OBJECT_TO_LAYOUT(bParam1, iParam0->f_336);
			}
		}
	}
	SQUAD_JOIN(bParam1, iParam0->f_576);
	SET_ACTOR_UPDATE_PRIORITY(bParam1, false);
	if (!Global_27759)
	{
		MEMORY_CONSIDER_AS_ENEMY(bParam1, bParam2);
	}
	MEMORY_IDENTIFY(bParam1, bParam2);
	MEMORY_REPORT_POSITION_AUTO(bParam1, Global_34573, false);
	MEMORY_REPORT_POSITION(bParam1, bParam2, iParam0 + 500);
	SET_ACTOR_VISION_XRAY(bParam1, false);
	ACTOR_DRAW_LAST_WEAPON(bParam1, 0);
	AI_BEHAVIOR_SET_ALLOW(bParam1, 0, 0);
	TASK_PRIORITY_SET(bParam1, 2);
	SET_TOUGH_ACTOR(bParam1, 1);
	if (*iParam0 == 2 && *iParam0 == 3)
	{
		AI_SET_RANGE_ACCURACY_MODIFIER(bParam1, bParam2, -8.0f);
	}
	AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(bParam1), 1,5f);
	if (iParam0->f_404)
	{
		DECOR_SET_BOOL(bParam1, "CanBeLasso", false);
	}
	if (Function_224(0x4000000))
	{
		SET_ACTOR_VISION_MAX_RANGE(bParam1, 45.0f, 1);
	}
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam1, 235.0f);
	if (iParam0->f_648 != 14)
	{
		if (!Global_27759 && Global_29006 == Global_30693[1])
		{
		}
	}
	else
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam1)))
		{
			Function_33(GET_MOUNT(bParam1), Global_34573, -1.0f, -1.0f, 0, 0);
			RELEASE_ACTOR(GET_MOUNT(bParam1));
		}
		MEMORY_PREFER_WALKING(bParam1, true);
		SET_ACTOR_VISION_XRAY(bParam1, true);
	}
	if (GET_NUM_WEAPONS_IN_INVENTORY(bParam1) == 0)
	{
		if (!DECOR_CHECK_EXIST(bParam1, "lawSetSpawnParams"))
		{
			GIVE_WEAPON_TO_ACTOR(bParam1, 4, false, 1, 1);
		}
	}
	MEMORY_PREFER_MELEE(bParam1, 0);
	MEMORY_ALLOW_SHOOTING(bParam1, true);
	if (!iParam0->f_544)
	{
		AI_SET_SHOTS_PER_BURST(bParam1, 1);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam1, 5.0f, 2.0f);
		AI_SET_BURST_DURATION(bParam1, 0,1f);
		AI_SET_BURST_DURATION_RANDOMNESS(bParam1, 0.0f);
		AI_SET_FIRE_DELAY(bParam1, 2.0f);
		AI_SET_FIRE_DELAY_RANDOMNESS(bParam1, 2.0f);
	}
	DECOR_SET_BOOL(bParam1, "lawSetSpawnParams", true);
	return;
}

var Function_191(bool bParam0) //Position: 0x9035 / 36917
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

void Function_192(bool bParam0, int iParam1) //Position: 0x908F / 37007
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_205(bParam0);
			break;
		
		case 0x00000001:
			Function_204(bParam0);
			break;
		
		case 0x00000002:
			Function_203(bParam0);
			break;
		
		case 0x00000005:
			Function_202(bParam0);
			break;
		
		case 0x00000004:
			Function_201(bParam0);
			break;
		
		case 0x00000003:
			Function_200(bParam0);
			break;
		
		case 0x00000006:
			Function_199(bParam0);
			break;
		
		case 0x00000007:
			Function_198(bParam0);
			break;
		
		case 0x00000008:
			Function_197(bParam0);
			break;
		
		case 0x00000009:
			Function_195(bParam0);
			break;
		
		default:
			Function_193(bParam0);
			break;
	}
	if (GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(bParam0)) == 12)
	{
		if (RAND_INT_RANGE(false, 10000) <= 3000)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 6, true);
		}
	}
	return;
}

void Function_193(bool bParam0) //Position: 0x915B / 37211
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_194(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_194(var uParam0, bool bParam1) //Position: 0x94BF / 38079
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_195(bool bParam0) //Position: 0x94E1 / 38113
{
	Function_193(bParam0);
	Function_196(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_196(bool bParam0, int iParam1) //Position: 0x967E / 38526
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, iParam1);
	}
	return;
}

void Function_197(bool bParam0) //Position: 0x96B1 / 38577
{
	Function_193(bParam0);
	Function_196(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_198(bool bParam0) //Position: 0x985A / 39002
{
	Function_193(bParam0);
	Function_196(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_199(bool bParam0) //Position: 0x99EB / 39403
{
	Function_193(bParam0);
	Function_196(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 240.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_200(bool bParam0) //Position: 0x9B1D / 39709
{
	Function_193(bParam0);
	Function_196(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	return;
}

void Function_201(bool bParam0) //Position: 0x9CA5 / 40101
{
	Function_193(bParam0);
	Function_196(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	return;
}

void Function_202(bool bParam0) //Position: 0x9DFF / 40447
{
	Function_193(bParam0);
	Function_196(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_203(bool bParam0) //Position: 0x9F3D / 40765
{
	Function_193(bParam0);
	Function_196(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_204(bool bParam0) //Position: 0x9F60 / 40800
{
	Function_193(bParam0);
	Function_196(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,25f);
	return;
}

void Function_205(bool bParam0) //Position: 0xA0CA / 41162
{
	Function_193(bParam0);
	Function_196(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

int Function_206(int iParam0, int iParam1) //Position: 0xA105 / 41221
{
	if (iParam1 != 2 || iParam0 <= 800)
	{
		return 9;
	}
	if (iParam1 != 3 || iParam0 <= 400)
	{
		return 8;
	}
	return 7;
}

var Function_207(int iParam0) //Position: 0xA12E / 41262
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0->f_372 > iParam0->f_368)
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(Global_62999) < iParam0->f_372)
	{
		return "";
	}
	if (GET_OBJECT_TYPE(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999)) == 15)
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999));
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar0))
			{
				REFERENCE_ACTOR(bVar0);
				TASK_CLEAR(bVar0);
				MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, false);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bVar0);
				iParam0->f_372++;
			}
			else
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, Global_62999);
				iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
			}
		}
		else
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, Global_62999);
			iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
		}
	}
	else if (GET_OBJECT_TYPE(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999)) == 24)
	{
		bVar1 = GET_PERS_CHAR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999));
		GET_OBJECT_POSITION(bVar1, &uVar2);
		if (!WOULD_ACTOR_BE_VISIBLE(false, &uVar2, 3212836864) || IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(bVar1)))
		{
			ACTIVATE_ACTOR_FOR_PERS_CHAR(bVar1);
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_ALIVE(bVar0))
				{
					REFERENCE_ACTOR(bVar0);
					TASK_CLEAR(bVar0);
					MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, false);
					iParam0->f_372++;
					Function_208(bVar1, 1);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bVar0);
				}
				else
				{
					REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_62999);
					iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
				}
			}
			else if (!IS_PERS_CHAR_ALIVE(bVar1))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_62999);
				iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
			}
			else
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_PERS_CHAR(bVar1), "lateSharedLaw", true);
				iParam0->f_372++;
			}
		}
	}
	Function_30(bVar0, 1);
	return bVar0;
}

int Function_208(bool bParam0, bool bParam1) //Position: 0xA2CC / 41676
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

bool Function_209(int iParam0) //Position: 0xA36E / 41838
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_213();
	iVar1 = 0;
	if (!Function_16(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_212(iParam0[iVar03], 8);
		}
		else if (Function_211())
		{
			iVar1 = 1;
			Function_212(iParam0[iVar03], 8);
		}
		Function_212(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_16(iParam0[iVar03], 4))
		{
			if (!Function_16(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_16(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_16(iParam0[03], 8) || iVar1));
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
				Function_212(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_16(iParam0[iVar03], 4))
		{
			if (!Function_16(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
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
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_212(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_212(iParam0[iVar03], 2);
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
	Function_210();
	return 1;
}

void Function_210() //Position: 0xA6E9 / 42729
{
	if (!Function_99(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_211() //Position: 0xA729 / 42793
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

void Function_212(var uParam0, int iParam1) //Position: 0xA754 / 42836
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_213() //Position: 0xA765 / 42853
{
	if (!Function_99(128))
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

void Function_214(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xA7A7 / 42919
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_215(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_4(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

bool Function_215(bool bParam0, var uParam1, int iParam2) //Position: 0xA813 / 43027
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
		if (Function_217(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_216(uVar0))
		{
			case 0x00000002:
				if (!Function_220(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_216(char* cParam0) //Position: 0xA88B / 43147
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

int Function_217(int iParam0) //Position: 0xA92C / 43308
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_218(&iVar1, 2147483648);
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

void Function_218(var uParam0, var uParam1) //Position: 0xA969 / 43369
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	return;
}

bool Function_219() //Position: 0xA97C / 43388
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_220(int iParam0, int iParam1) //Position: 0xA991 / 43409
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_221() //Position: 0xA9A4 / 43428
{
	if ((Global_3380 || Global_3382) || Global_3367)
	{
		return 0;
	}
	return 1;
}

void Function_222(int iParam0) //Position: 0xA9BB / 43451
{
	if (!IS_LAYOUTREF_VALID(iParam0->f_340))
	{
		iParam0->f_340 = Global_30616;
	}
	return;
}

void Function_223(int iParam0) //Position: 0xA9D5 / 43477
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_224(int iParam0) //Position: 0xA9F2 / 43506
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_225(int iParam0, int iParam1) //Position: 0xAA10 / 43536
{
	iParam0->f_476 = GET_CURRENT_GAME_TIME();
	*iParam0 = 0;
	iParam0->f_724 = StackVal;
	iParam0->f_624 = 1;
	Global_13094 = 0,01f;
	Function_235(iParam0);
	iParam0->f_596 = 0;
	iParam0->f_604 = 0;
	iParam0->f_336 = CREATE_LAYOUT("WildernessLawResponse");
	Function_233(iParam0, iParam1, GET_GC_LAYOUT(), 0);
	Function_233(iParam0, iParam1, GET_AMBIENT_LAYOUT(), 0);
	Function_233(iParam0, iParam1, Global_28841, 0);
	Function_233(iParam0, iParam1, Global_6290, 0);
	iParam0->f_576 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_336, "lawSquad"));
	iParam0->f_580 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_336, "dogSquad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576, 648);
	SQUAD_SET_FACTION(iParam0->f_576, iParam1->f_52);
	iParam0->f_348 = Function_232(iParam1->f_48, 3, 0);
	if (IS_CRIME_VALID(iParam0->f_348))
	{
		GET_CRIME_POSITION(iParam0->f_348, iParam0 + 488);
		iParam0->f_440 = Function_110(GET_CURRENT_GAME_TIME(), Function_110(GET_CRIME_BEGIN_TIMESTAMP(iParam0->f_348), GET_CRIME_END_TIMESTAMP(iParam0->f_348)));
	}
	else
	{
		GET_POSITION(iParam1->f_48, iParam0 + 488);
		iParam0->f_440 = GET_CURRENT_GAME_TIME();
	}
	GET_POSITION(iParam1->f_48, iParam0 + 416);
	*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
	iParam0->f_360 = GET_CURRENT_GAME_TIME();
	iParam0->f_444 = iParam0->f_440;
	iParam0->f_448 = iParam0->f_440;
	iParam0->f_412 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_336, Function_37(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 20.0f, 30.0f);
	ATTACH_OBJECTS(iParam0->f_412, iParam1->f_48, Function_37(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	iParam0->f_340 = Global_26361.f_16;
	if (IS_OBJECTSET_VALID(Global_62999))
	{
		CLEAN_OBJECTSET(Global_62999);
		iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
		iParam0->f_596 = (iParam0->f_596 + iParam0->f_368);
		PRINTINT(iParam0->f_368);
		PRINTNL();
	}
	if (Function_221())
	{
		if (!Function_220(Global_76847, 32768))
		{
			Function_214(Global_34573, 32768, 2, 0);
		}
	}
	Function_226();
	return;
}

void Function_226() //Position: 0xAC19 / 44057
{
	if (!Function_228(25, 0))
	{
		if (!Function_220(Global_76847, 0x1000000))
		{
			Function_227(&Global_76848, 32768);
		}
	}
	return;
}

void Function_227(var uParam0, int iParam1) //Position: 0xAC44 / 44100
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_228(var uParam0, bool bParam1) //Position: 0xAC5B / 44123
{
	int iVar0;
	
	iVar0 = Function_230(uParam0);
	if (!Function_229(iVar0))
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

bool Function_229(int iParam0) //Position: 0xAC98 / 44184
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_230(int iParam0) //Position: 0xACAF / 44207
{
	if (!Function_231(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_231(int iParam0) //Position: 0xACC9 / 44233
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_232(bool bParam0, int iParam1, int iParam2) //Position: 0xACDF / 44255
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return "";
	}
	if (!Function_117(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	iVar1 = 0;
	bVar2 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar3 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_116(bVar2, iVar3);
	bVar4 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar4))
	{
		bVar6 = GET_CRIME_FROM_OBJECT(bVar4);
		if (GET_CRIME_CRIMINAL(bVar6) != bParam0 && GET_CRIME_WITNESSED(bVar6) <= iParam1)
		{
			if (Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 < iVar1 && Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 < iParam2)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(bVar6);
				bVar5 = bVar6;
				iVar1 = Global_26998[GET_CRIME_TYPE(bVar6)18].f_24;
			}
			else if (Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 != iVar1 && Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 < iParam2)
			{
				if (GET_CRIME_END_TIMESTAMP(bVar6) < fVar0)
				{
					fVar0 = GET_CRIME_END_TIMESTAMP(bVar6);
					bVar5 = bVar6;
					iVar1 = Global_26998[GET_CRIME_TYPE(bVar6)18].f_24;
				}
			}
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_ITERATOR(bVar2);
	return bVar5;
}

void Function_233(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0xADEC / 44524
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (Function_11())
	{
		if (bParam2 == Global_28841)
		{
			return;
		}
	}
	bVar0 = CREATE_OBJECT_ITERATOR(uParam0->f_336);
	ITERATE_IN_LAYOUT(bVar0, bParam2);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (GET_ACTOR_FACTION(bVar2) != uParam1->f_52 && IS_ACTOR_ALIVE(bVar2))
		{
			bVar3 = true;
			if (Function_11())
			{
				if (!NET_IS_OBJECT_LOCAL(bVar2) && bParam2 != GET_AMBIENT_LAYOUT())
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				if (Function_234(bVar2, Global_62999) && iParam3)
				{
					Function_190(uParam0, bVar2, uParam1->f_48);
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

int Function_234(bool bParam0, bool bParam1) //Position: 0xAE8F / 44687
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

void Function_235(int iParam0) //Position: 0xAF08 / 44808
{
	Function_236(iParam0 + 8, "stand_surrender", 5, 0);
	Function_236(iParam0 + 8, "custom/stand_surrender", 8, 0);
	Function_236(iParam0 + 8, "stand_shakehands", 5, 0);
	Function_236(iParam0 + 8, "custom/stand_shakehands", 8, 0);
	return;
}

var Function_236(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xAF90 / 44944
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_237(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_212(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_237(var uParam0, int iParam1, int iParam2) //Position: 0xAFC8 / 45000
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_16(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_212(uParam0[iVar03], 4);
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

