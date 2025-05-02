//Decompiled with MagicRDR v1.0
//Function Count : 239
//Statics Count : 312
//Natives Count : 469
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
	struct<1005> Local_15 = { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	bool bVar6;
	
	iLocal_13 = 0;
	Function_226(&Local_15, &ScriptParam_0);
	Global_21575 = 0;
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&Global_54076, 0, "red_wanted");
	if (Function_225(0x1000000))
	{
		Function_224(0x1000000);
	}
	iLocal_14 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bVar1 = 250;
		if (!Global_6646)
		{
			if (iLocal_14 != 4)
			{
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			}
		}
		if (Global_6621)
		{
			if (iLocal_14 != 4)
			{
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			}
		}
		Function_223(&Local_15);
		if (((!IS_ACTOR_VALID(&ScriptParam_0 + 96) && !Local_15.f_892 != 25) && !iLocal_14 != 3) && !iLocal_14 != 4)
		{
			Local_15.f_892 = 24;
			iLocal_14 = 3;
			bVar1 = false;
		}
		else if (((!IS_ACTOR_ALIVE(&ScriptParam_0 + 96) && !Local_15.f_892 != 25) && !iLocal_14 != 3) && !iLocal_14 != 4)
		{
			Local_15.f_892 = 24;
			iLocal_14 = 3;
			bVar1 = false;
		}
		if (IS_ACTOR_VALID(&ScriptParam_0 + 96))
		{
			GET_POSITION(&ScriptParam_0 + 96, &Local_15 + 640);
		}
		if (Function_222())
		{
			if (!Function_221(Global_119935, 0x2000000))
			{
				Function_215(Function_220(), 0x2000000, 2, 0);
			}
		}
		Global_39922.f_276 = SQUAD_GET_SIZE(&Local_15 + 808);
		if (IS_LAYOUTREF_VALID(&Local_15 + 544))
		{
			switch (iLocal_14)
			{
				case 0x00000000:
					if (GET_CURRENT_GAME_TIME() <= (Local_15.f_700 + 10.0f))
					{
						iLocal_14 = 3;
					}
					if (Function_210(&Local_15 + 8))
					{
						Local_15.f_700 = GET_CURRENT_GAME_TIME();
						iLocal_14 = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000001:
					if (Function_191(&Local_15, &ScriptParam_0))
					{
						Local_15.f_700 = GET_CURRENT_GAME_TIME();
						Function_190(1);
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
					if (GET_CURRENT_GAME_TIME() <= (Local_15.f_700 + 10.0f))
					{
						iLocal_14 = 3;
					}
					break;
				
				case 0x00000002:
					uVar2 = Function_188(&Local_15 + 808, &ScriptParam_0 + 96, 1, 0);
					if (IS_ACTOR_VALID(&uVar2))
					{
						GET_POSITION(&uVar2, &Local_15 + 652);
					}
					else
					{
						*(&Local_15 + 652) = Vector(0.0f, 0.0f, 0.0f);
					}
					if ((((!Function_187(&ScriptParam_0 + 96) && !IS_ACTOR_IN_HOGTIE(&ScriptParam_0 + 96)) && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&ScriptParam_0 + 96))) && !IS_ACTOR_RIDING_VEHICLE(&ScriptParam_0 + 96)) && !IS_ACTOR_RIDING(&ScriptParam_0 + 96))
					{
						Function_162(&Local_15, &ScriptParam_0);
						Function_155(&Local_15, &ScriptParam_0);
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_15 + 992))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Local_15 + 992);
					}
					Function_153(&Local_15, &ScriptParam_0);
					Function_151(&Local_15, &ScriptParam_0);
					Function_150(&Local_15, &ScriptParam_0);
					Function_149(&Local_15);
					Function_144();
					if (Function_139(&Local_15, &ScriptParam_0, 1))
					{
						Local_15.f_892 = 24;
						iLocal_14 = 3;
						bVar1 = false;
					}
					bVar1 = Function_74(bVar1, Function_75(&Local_15, &ScriptParam_0));
					if (Function_73(&Local_15, 0) == 0)
					{
						bLocal_275 = true;
						Local_15.f_784 = 1;
					}
					Function_67(&Local_15, &ScriptParam_0);
					if (Local_15.f_1004)
					{
						iLocal_14 = 3;
					}
					if (Local_15.f_792)
					{
						iLocal_14 = 3;
					}
					Function_56(&Local_15);
					Function_54(&Local_15, &ScriptParam_0);
					Function_53(&Local_15);
					Function_52(&Local_15);
					bVar6 = false;
					if (Function_73(&Local_15, 1) == 0)
					{
						if (Local_15.f_580 != 0.0f)
						{
							Local_15.f_580 = (GET_CURRENT_GAME_TIME() + 1,5f);
						}
						else if (GET_CURRENT_GAME_TIME() <= Local_15.f_580)
						{
							bVar6 = true;
						}
					}
					else
					{
						Local_15.f_580 = 0.0f;
					}
					if (bVar6)
					{
						Local_15.f_580 = GET_CURRENT_GAME_TIME();
						bVar1 = false;
						iLocal_14 = 3;
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
					if (bLocal_275)
					{
						Function_33();
					}
					if (SQUAD_GET_SIZE(&Local_15 + 808) >= 0)
					{
						bVar0 = false;
						while (bVar0 <= SQUAD_GET_SIZE(&Local_15 + 808))
						{
							bVar3 = SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0);
							GET_POSITION(&bVar3, &uVar4);
							TASK_CLEAR(&bVar3);
							MEMORY_CONSIDER_AS(&bVar3, &Global_54076, 2);
							if (!Local_15.f_780)
							{
								Function_32(&bVar3, &Global_54076, -1.0f, -1.0f, 0, 0);
							}
							else
							{
								TASK_WANDER(&bVar3, -1.0f);
							}
							TASK_PRIORITY_SET(&bVar3, 2);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar3)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bVar3));
							}
							if (Function_31(&bVar3))
							{
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bVar3)))
								{
									Function_30(GET_PERS_CHAR_FROM_ACTOR(&bVar3));
								}
								DEREFERENCE_ACTOR(&bVar3);
								Function_29(&bVar3, 0);
								Local_15.f_588 = (Local_15.f_588 - 1);
							}
							else
							{
								RELEASE_ACTOR(&bVar3);
							}
							bVar0++;
						}
						Function_28(&Local_15 + 808);
					}
					bVar1 = false;
					iLocal_14 = 4;
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
	if (SQUAD_GET_SIZE(&Local_15 + 808) < 0 && !Local_15.f_780)
	{
		Function_25(&Local_15 + 808, 0, 0, 0);
	}
	else if (Local_15.f_780)
	{
		Function_25(&Local_15 + 808, 0, 0, 1);
	}
	if (!Local_15.f_784)
	{
		Function_23();
	}
	Function_22(&Local_15 + 816);
	Function_21(&Local_15, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_15 + 992))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Local_15 + 992);
	}
	if (IS_BLIP_VALID(&Local_15 + 600))
	{
		REMOVE_BLIP(&Local_15 + 600);
	}
	Function_17(0);
	Function_16(1024);
	Global_21542 = 1.0f;
	if (Local_15.f_768 || Local_15.f_776)
	{
		Function_16(2048);
		Global_40060.f_4424 = ScriptParam_0.f_116;
	}
	else if (Local_15.f_780)
	{
	}
	else if (Global_39922.f_308)
	{
		if (!Function_221(Global_119935, 524288))
		{
			Function_215(&Global_54076, 524288, 2, 0);
		}
	}
	Function_12(&Local_15 + 8);
	if (IS_OBJECT_VALID(&Local_15 + 944))
	{
		NAV_QUERY_STOP(&Local_15 + 944);
	}
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	Global_39922.f_276 = 0;
	Function_7(ScriptParam_0.f_116, 1);
	Global_21575 = 4294967295;
	Function_5(32768);
	if (!Function_221(Global_119935, 32768))
	{
		Function_3(&Global_54076, 32768, 2);
	}
	if (!Function_221(Global_119936, 32768))
	{
		Function_3(Function_220(), 32768, 3);
	}
	AI_CLEAR_DONT_HARM_ACTOR(&ScriptParam_0 + 96);
	Function_1(1);
	if (((!Local_15.f_768 && !Local_15.f_776) && !Global_6638) && !HUD_IS_FADED())
	{
		PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
	}
	TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&Global_54076);
	Function_12(&Local_15 + 80);
	if (IS_POPSET_VALID(&Local_15 + 528))
	{
		DESTROY_POPULATION_SET(&Local_15 + 528);
	}
	Global_6649 = 1;
	Global_39922.f_308 = 1;
	SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(1.0f);
	RELEASE_LAYOUT_REF(&Local_15 + 536);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x64F / 1615
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
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

bool Function_2() //Position: 0x68F / 1679
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

void Function_3(var uParam0, int iParam1, int iParam2) //Position: 0x6B4 / 1716
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
	Function_4(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(&uParam0, &cVar1);
	DECOR_SET_INT(&uParam0, &cVar1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_4(char* cParam0) //Position: 0x708 / 1800
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

void Function_5(int iParam0) //Position: 0x742 / 1858
{
	Function_6(&Global_43580, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x750 / 1872
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_7(int iParam0, bool bParam1) //Position: 0x76F / 1903
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
	if (Function_11() > 3)
	{
		iVar0 *= 2;
	}
	if (0 && !&bParam1)
	{
		Function_9(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_9(iParam0, 0, 0, Function_8(iVar0), 0);
	}
	return;
}

var Function_8(int iParam0) //Position: 0x7D7 / 2007
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_9(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x7EE / 2030
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &iParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_10(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_10(bool bParam0) //Position: 0x83E / 2110
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_11() //Position: 0x867 / 2151
{
	return Global_21369.f_248;
}

void Function_12(int iParam0) //Position: 0x872 / 2162
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_13(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_13(struct<2>[] Param0, int iParam1) //Position: 0x89A / 2202
{
	if (Function_15(&(Param0[iParam12]), 4))
	{
		if (Function_15(&(Param0[iParam12]), 1))
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
			Function_14(&(Param0[iParam12]), 1);
			Function_14(&(Param0[iParam12]), 2);
			Function_14(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_14(struct<13> Param0) //Position: 0x9E5 / 2533
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_15(struct<13> Param0) //Position: 0xA02 / 2562
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16(int iParam0) //Position: 0xA20 / 2592
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_17(bool bParam0) //Position: 0xA33 / 2611
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
		Function_18();
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

void Function_18() //Position: 0xAC2 / 2754
{
	int iVar0;
	
	Global_41176 = Function_19(StackVal);
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

int Function_19(int iParam0) //Position: 0xB10 / 2832
{
	if (!Function_20(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_20(int iParam0) //Position: 0xB28 / 2856
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_21(int iParam0, bool bParam1) //Position: 0xB3D / 2877
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
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
			iVar5 = START_OBJECT_ITERATOR(&uVar0);
			while (IS_OBJECT_VALID(&iVar5))
			{
				if (iVar2 <= iVar4)
				{
					bVar6 = GET_ACTOR_FROM_OBJECT(&iVar5);
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
										Function_32(&bVar6, Function_220(), -1.0f, -1.0f, 0, 0);
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
				iVar5 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
		}
		DESTROY_ITERATOR(&uVar0);
	}
	return;
}

void Function_22(bool bParam0) //Position: 0xC55 / 3157
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
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_23() //Position: 0xCA3 / 3235
{
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_24(GET_AMBIENT_LAYOUT());
	Function_24(GET_GC_LAYOUT());
	Function_24(&Global_10996);
	Function_24(&Global_10994);
	Function_24(&Global_43578);
	Function_24(&Global_10998);
	Function_24(&Global_99717);
	return;
}

void Function_24(int iParam0) //Position: 0xCDC / 3292
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
		ITERATE_IN_LAYOUT(&uVar0, &iParam0);
		iVar1 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_ACTOR_VALID(Function_220()))
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
						MEMORY_CONSIDER_AS(&iVar2, Function_220(), 2);
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

void Function_25(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD90 / 3472
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) >= 0)
	{
		Function_27(&uParam0);
		Function_26(&uParam0, 0);
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
					Function_32(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
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
				if (Function_31(&bVar1))
				{
					Function_29(&bVar1, 0);
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bVar1)))
					{
						Function_30(GET_PERS_CHAR_FROM_ACTOR(&bVar1));
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

void Function_26(var uParam0, int iParam1) //Position: 0xEFE / 3838
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

void Function_27(int iParam0) //Position: 0xF4E / 3918
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_28(int iParam0) //Position: 0xF86 / 3974
{
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	SQUAD_MAKE_EMPTY(&iParam0);
	return;
}

void Function_29(bool bParam0, int iParam1) //Position: 0xF9D / 3997
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

int Function_30(int iParam0) //Position: 0xFDE / 4062
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

bool Function_31(bool bParam0) //Position: 0x1087 / 4231
{
	return DECOR_CHECK_EXIST(&bParam0, "nsharedlaw");
}

void Function_32(bool bParam0, var uParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x109F / 4255
{
	if (IS_ACTOR_VALID(&bParam0) && IS_ACTOR_VALID(&uParam1))
	{
		TASK_FLEE_ACTOR(&bParam0, &uParam1, fParam2, fParam3, &iParam4, &iParam5, 0);
	}
}

void Function_33() //Position: 0x10CB / 4299
{
	int iVar0;
	int iVar1;
	
	Function_49(StackVal, Global_41176);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_40060 + 68[iVar0181][35])[(*&Global_41176 + 4)[iVar0]] = StackVal;
			iVar1 = Function_48(Global_41252[iVar011]);
			if (iVar1 != 4294967295)
			{
				Function_34(iVar1, (*&Global_41176 + 4)[iVar0], 0);
			}
		}
		iVar0++;
	}
	Function_18();
	return;
}

int Function_34(int iParam0, bool bParam1, bool bParam2) //Position: 0x113E / 4414
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
		Function_47(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_46(iParam0);
	if (&bParam2)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_35(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x13DA / 5082
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_45(390))), 32);
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
					fVar19 = (Function_44(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_44(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_42(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_40(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_37(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_36(), &Var9);
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

var Function_36() //Position: 0x1A18 / 6680
{
	int iVar0;
	
	return &iVar0;
}

var Function_37(int iParam0) //Position: 0x1A21 / 6689
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1A32 / 6706
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_39(char* cParam0) //Position: 0x1B29 / 6953
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_40(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1B44 / 6980
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_74(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_41(Function_74(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_41(int iParam0, int iParam1) //Position: 0x1BAB / 7083
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_42(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1BBD / 7101
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
	if (((Function_43(iParam0) != 19 || Function_43(iParam0) != 17) || Function_43(iParam0) != 10) || Function_43(iParam0) != 9)
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

int Function_43(int iParam0) //Position: 0x1CF1 / 7409
{
	return Global_55480[iParam016].f_96;
}

float Function_44(int iParam0) //Position: 0x1D00 / 7424
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_45(int iParam0) //Position: 0x1D39 / 7481
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_46(int iParam0) //Position: 0x1D76 / 7542
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

int Function_47(int iParam0, float fParam1, bool bParam2) //Position: 0x1F10 / 7952
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

int Function_48(int iParam0) //Position: 0x2154 / 8532
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

void Function_49(int iParam0, bool bParam1) //Position: 0x22DB / 8923
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_40060[iParam0] = bParam1;
	Function_51((*&Global_40060 + 4428)[iParam0], TO_FLOAT(bParam1), 0);
	Function_51(222, TO_FLOAT((Function_50(223) + Function_50(224))), 0);
	return;
}

int Function_50(int iParam0) //Position: 0x231C / 8988
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_51(int iParam0, float fParam1, bool bParam2) //Position: 0x235D / 9053
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
		Function_47(iParam0, fParam1, 0);
	}
	Global_54086[iParam0] = fParam1;
	Function_46(iParam0);
	if (&bParam2)
	{
		Function_35(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_52(int iParam0) //Position: 0x25CA / 9674
{
	return;
}

void Function_53(int iParam0) //Position: 0x25D0 / 9680
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
							if (Function_31(&bVar1))
							{
								Function_29(&bVar1, 0);
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bVar1)))
								{
									Function_30(GET_PERS_CHAR_FROM_ACTOR(&bVar1));
									Function_32(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
									DEREFERENCE_ACTOR(&bVar1);
								}
								else
								{
									Function_32(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
									RELEASE_ACTOR(&bVar1);
								}
							}
							else
							{
								Function_32(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
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

void Function_54(struct<893> Param0) //Position: 0x2792 / 10130
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
				Function_55(&Param0 + 808, 109, &iParam1 + 96);
			}
			else if (iVar0 <= 6666)
			{
				Function_55(&Param0 + 808, 58, &iParam1 + 96);
			}
			else
			{
				Function_55(&Param0 + 808, 105, &iParam1 + 96);
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

bool Function_55(var uParam0, bool bParam1, int iParam2) //Position: 0x29B4 / 10676
{
	DECOR_SET_INT(&uParam0, "nextspeech", bParam1);
	DECOR_SET_INT(&uParam0, "nextspeechtarget", &iParam2);
	return 1;
}

void Function_56(int iParam0) //Position: 0x29EE / 10734
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 808))
	{
		Function_62(&iParam0, SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 808, bVar0));
		bVar0++;
	}
	Function_57(&iParam0);
	return;
}

void Function_57(struct<1025> Param0) //Position: 0x2A27 / 10791
{
	struct<9> Var0;
	
	if (Global_6629)
	{
		if (!IS_OBJECT_VALID(&Param0 + 1016) || GET_CURRENT_GAME_TIME() <= Param0.f_1024)
		{
			(&Param0 + 1016) = Function_59(&Global_54076, 4);
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
		if ((Global_6629 && Function_58()) && IS_OBJECT_VALID(&Param0 + 1016))
		{
			GET_OBJECT_POSITION(&Param0 + 1016, &Param0 + 608);
			*(&Param0 + 600) = ADD_BLIP_FOR_COORD(&Param0 + 608, 440, 0, 2, 0);
		}
		else
		{
			*(&Param0 + 600) = ADD_BLIP_FOR_COORD(&Param0 + 652, 440, 0, 2, 0);
		}
	}
	if ((Global_6629 && Function_58()) && IS_OBJECT_VALID(&Param0 + 1016))
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

int Function_58() //Position: 0x2BBD / 11197
{
	if (StackVal != 5 || Global_43789 != Global_46894[3])
	{
		return 0;
	}
	return 1;
}

var Function_59(int iParam0, int iParam1) //Position: 0x2BE0 / 11232
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
			if (Function_61(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
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
	Function_60(&iVar8);
	ITERATE_IN_LAYOUT(&iVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&iVar8, 10);
	iVar6 = START_OBJECT_ITERATOR(&iVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_61(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		Function_60(&iVar9);
		ITERATE_IN_LAYOUT(&iVar9, &Global_46715);
		ITERATE_IN_VOLUME_SET(&iVar9, GET_VOLUME_FROM_OBJECT(&iVar6));
		uVar7 = START_OBJECT_ITERATOR(&iVar9);
		while (IS_OBJECT_VALID(&uVar7))
		{
			if (DECOR_CHECK_EXIST(&uVar7, "locflag"))
			{
				if (Function_61(GET_VOLUME_FROM_OBJECT(&uVar7), &iParam1))
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

int Function_60(int iParam0) //Position: 0x2DC8 / 11720
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_36());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_36());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_61(float fParam0, int iParam1) //Position: 0x2DFE / 11774
{
	if (!DECOR_CHECK_EXIST(&fParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(&fParam0, "locflag") && iParam1) < 0;
}

void Function_62(struct<573> Param0) //Position: 0x2E2F / 11823
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
					Function_65(&iParam1);
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
			if (GET_CURRENT_GAME_TIME() < (Param0.f_572 + (Function_63(&Param0) / 1,5f)))
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

float Function_63(struct<873> Param0) //Position: 0x2F49 / 12105
{
	bool bVar0;
	int iVar1;
	
	if (Function_73(&Param0, 1) == 0)
	{
		return 10.0f;
	}
	if (Param0.f_872 && !Function_64(0))
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

bool Function_64(int iParam0) //Position: 0x2FD6 / 12246
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_65(var uParam0) //Position: 0x2FE5 / 12261
{
	Function_66(&uParam0);
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

void Function_66(var uParam0) //Position: 0x3034 / 12340
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

var Function_67(struct<845> Param0) //Position: 0x3067 / 12391
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
				fVar4 = Function_72(&Param0, !GET_MOUNT(&bVar6) != "");
				bVar5 = VDIST(Var2, (&Param0 + 640));
				if (!bVar8)
				{
					if (!Function_31(&bVar6))
					{
						if (Function_70(&bVar6, bVar5, fVar4, bVar7))
						{
							Param0.f_844 = (Param0.f_844 - 1);
							iVar0 = 1;
							bVar8 = true;
						}
					}
				}
				Function_68(&Param0, &bVar6, bVar5, fVar4, &iParam1 + 96);
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
				fVar4 = Function_72(&Param0, 0);
				bVar5 = VDIST(Var2, *(&Param0 + 640));
				if (Function_70(&bVar6, bVar5, fVar4, bVar7))
				{
					bVar8 = true;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_68(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4) //Position: 0x31B4 / 12724
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
	if (!Function_69(&iParam0))
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
			Function_32(GET_MOUNT(&uParam1), &uParam1, -1.0f, -1.0f, 0, 0);
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

bool Function_69(struct<641> Param0) //Position: 0x32C9 / 13001
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

bool Function_70(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x3318 / 13080
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
			if (!Function_71(&bParam0, 1.0f, (fParam2 + 10.0f), 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
				{
					Function_32(GET_MOUNT(&bParam0), &Global_54076, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(&bParam0));
				}
				if (IS_ACTOR_VALID(&bParam0))
				{
					SQUAD_LEAVE(&bParam0);
					TASK_CLEAR(&bParam0);
					MEMORY_CONSIDER_AS(&bParam0, &Global_54076, 2);
					Function_32(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bParam0)))
					{
						Function_30(GET_PERS_CHAR_FROM_ACTOR(&bParam0));
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
			if (!Function_71(&bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
				{
					Function_32(GET_MOUNT(&bParam0), &Global_54076, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(&bParam0));
				}
				if (IS_ACTOR_VALID(&bParam0))
				{
					SQUAD_LEAVE(&bParam0);
					TASK_CLEAR(&bParam0);
					MEMORY_CONSIDER_AS(&bParam0, &Global_54076, 2);
					Function_32(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bParam0)))
					{
						Function_30(GET_PERS_CHAR_FROM_ACTOR(&bParam0));
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

bool Function_71(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3545 / 13637
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

var Function_72(int iParam0, bool bParam1) //Position: 0x3565 / 13669
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

int Function_73(int iParam0, bool bParam1) //Position: 0x35C4 / 13764
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

int Function_74(int iParam0, bool bParam1) //Position: 0x364C / 13900
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_75(struct<1005> Param0) //Position: 0x365E / 13918
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
	Function_138(&Param0 + 748, 10.0f, &Param0 + 748, 10);
	switch (Param0.f_892)
	{
		case 0x00000000:
			Function_137("LAW_AI_STATE: INIT", 11);
			iVar0 = (Function_73(&Param0, 1) / 2);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_136(&Param0 + 808);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 2, iVar0);
			TASK_GO_TO_COORD_NONSTOP(0, &Param0 + 748, 3, 10.0f);
			*(&Param0 + 896) = SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 2, 4294967295);
			TASK_GO_NEAR_COORD(0, &Param0 + 712, 10.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_135(&Param0 + 808, 1);
			Param0.f_892 = 1;
		
		case 0x00000001:
			Function_134(&Param0, &Param1, 0);
			if (!Function_69(&Param0))
			{
				if (Function_133(Param1.f_104, &Param1 + 96, 1))
				{
					Param0.f_892 = 4;
					return 0;
				}
				if (Function_131(&Param0 + 808, &Param1 + 96, 20.0f, 1))
				{
					Param0.f_892 = 4;
					return 0;
				}
				if (Function_131(&Param0 + 816, &Param1 + 96, 20.0f, 1))
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
			Function_136(&Param0 + 808);
			Function_137("LAW_AI_STATE: ARREST - SHOOT", 11);
			if (!Function_69(&Param0) && Global_21542 >= 0,2f)
			{
				SQUAD_GOAL_ADD_COMBAT(&Param0 + 808, 2, 4294967295, 0);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 808, 1, &Param0 + 632, 3, 0);
				Function_135(&Param0 + 808, 1);
				Param0.f_628 = 0;
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 1, 4294967295);
				TASK_KILL_CHAR(false, &Param1 + 96);
				if (!Function_69(&Param0))
				{
					Function_135(&Param0 + 808, 0);
				}
				else
				{
					Function_135(&Param0 + 808, 1);
				}
				Param0.f_628 = 1;
				Param0.f_708 = GET_CURRENT_GAME_TIME();
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_136(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 816, 1, &Param0 + 632, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			if (&Param0 + 760 > 0.0f)
			{
				if (Param0 != 0 || Param0 != 1)
				{
					Function_134(&Param0, &Param1, 1);
				}
			}
			Param0.f_892 = 5;
		
		case 0x00000005:
			if (Function_127(&Param0))
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
				if (!Function_133(Param1.f_104, &Param1 + 96, 1))
				{
					if (!Function_126(&Param0, 5.0f))
					{
						if (!Function_124(StackVal, &Param0 + 808, *(&Param0 + 640), 20.0f))
						{
							if (!Param0.f_796 && !Function_69(&Param0))
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
							if (StackVal && !Function_124((StackVal && Function_124(Function_126(&Param0, 10.0f), &Param0 + 808, *(&Param0 + 640), 15.0f)), &Param0 + 808, *(&Param0 + 640), 5.0f))
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
				if (!Function_123(&Param0 + 808, &Param1 + 96, 0))
				{
					if (!Param0.f_796 && !Function_69(&Param0))
					{
						Param0.f_892 = 6;
						return 0;
					}
				}
			}
			if (Param0.f_704 != 0.0f)
			{
				if (Function_131(&Param0 + 808, Function_220(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_136(&Param0 + 808);
			Function_137("LAW_AI_STATE: GIVE CHASE", 11);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 1, 4294967295);
			TASK_GO_NEAR_ACTOR(0, &Param1 + 96, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_136(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 816, 1, &Param0 + 632, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_135(&Param0 + 808, 1);
			Param0.f_892 = 7;
		
		case 0x00000007:
			if (Function_127(&Param0))
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
			if (!Function_69(&Param0))
			{
				if (Function_124(StackVal, &Param0 + 808, *(&Param0 + 640), 20.0f))
				{
					if (!Param0.f_796)
					{
						Param0.f_892 = 4;
						return 0;
					}
				}
			}
			if (Function_124(StackVal, &Param0 + 808, *(&Param0 + 640), 80.0f))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (!bVar15)
			{
				if (Function_133(Param1.f_104, &Param1 + 96, 1))
				{
					if (!Param0.f_796)
					{
						Param0.f_892 = 4;
						return 0;
					}
				}
				if (!Function_126(&Param0, 20.0f) && !Global_43789 != Global_46866[1])
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
				if (Function_123(&Param0 + 808, &Param1 + 96, 0))
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
				if (Function_131(&Param0 + 808, Function_220(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_122(&Param0))
			{
				Param0.f_892 = 4;
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_137("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_136(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 920))
			{
				*(&Param0 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 536, Function_36(), *(&Param0 + 748), Vector(0.0f, 0.0f, 0.0f));
			}
			else
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
			TASK_SEARCH_FOR_OBJECT(0, &Param1 + 96, 0, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_136(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_135(&Param0 + 808, 1);
			Function_121(&Param0, 0);
			Param0.f_892 = 9;
		
		case 0x00000009:
			if (Function_127(&Param0))
			{
				return 0;
			}
			iVar18 = Function_118(&Param1 + 96, 3);
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
				if (Function_117(&Param0 + 816) >= 0)
				{
					SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 640));
				}
				else
				{
					SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
				}
			}
			if (Function_126(&Param0, 0x3f800000))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (!Function_126(&Param0, 20.0f) && !Global_6629)
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 10;
					return 0;
				}
			}
			break;
		
		case 0x0000000A:
			Function_137("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_136(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 920))
			{
				*(&Param0 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 536, Function_36(), *(&Param0 + 748), Vector(0.0f, 0.0f, 0.0f));
			}
			else
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Param0 + 920, 30.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_136(&Param0 + 816);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Param0 + 920, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_135(&Param0 + 808, 1);
			Param0.f_892 = 11;
		
		case 0x0000000B:
			if (Function_127(&Param0))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(&Param0 + 920))
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			if (Function_126(&Param0, 0x3f800000))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (Function_126(&Param0, 15.0f))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 8;
					return 0;
				}
			}
			break;
		
		case 0x0000000D:
			Function_137("LAW_AI_STATE: SURROUND", 11);
			if (!Function_55(&Param0 + 808, 95, &Param1 + 96))
			{
				Function_115(&Param0 + 808, "law_surround", 5.0f, Param1.f_116, 30.0f, 0, 0);
			}
			Function_121(&Param0, 0);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_136(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 928))
			{
				*(&Param0 + 928) = Function_59(&Param1 + 96, 256);
			}
			if (!Function_114(&Param0))
			{
				if (IS_OBJECT_VALID(&Param0 + 928) && GET_OBJECT_TYPE(&Param0 + 928) != 9)
				{
					GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(&Param0 + 928), &vVar3);
					GET_OBJECT_POSITION(&Param0 + 928, &Var5);
					fVar13 = (5.0f + (Function_113(vVar3.x, vVar3.z) / 2.0f));
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
						fVar13 = (fVar13 + Function_113((5.0f + (Function_113(vVar3.x, vVar3.z) / 2.0f)), 20.0f));
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
				uVar9 = Function_110(&Param0 + 536, 2, fVar13);
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
					iVar14 = Function_108(StackVal, StackVal, Var7, Var5);
					Function_138(&Var7, 15.0f, &vVar3, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, (5 + bVar2), 1, 1);
					TASK_GO_TO_COORD_AND_STAY(0, &vVar3, 4, iVar14);
					bVar2++;
				}
				Function_26(&Param0 + 808, 1);
			}
			else
			{
				Function_137("LAW_AI_STATE: SURROUND (RIVERBOAT)", 11);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 808, 0, &Param0 + 632, 3, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
				TASK_KILL_CHAR(false, &Param1 + 96);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			}
			Function_106(&Param0 + 808);
			Function_105(&Param0 + 808, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_136(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_135(&Param0 + 808, 1);
			Param0.f_892 = 14;
		
		case 0x0000000E:
			if (!Param0.f_788)
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					Function_105(&Param0 + 808, 0);
					Function_26(&Param0 + 808, 0);
					return 0;
				}
			}
			if (!Function_114(&Param0))
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
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar20, 16, false);
						}
						else
						{
							SET_ACTOR_VISION_XRAY(&uVar20, 1);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar20, 16, true);
						}
					}
					bVar2++;
				}
			}
			if (Param0.f_704 != 0.0f)
			{
				if (Function_131(&Param0 + 808, Function_220(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000F:
			Function_137("LAW_AI_STATE: SUBMIT CUTSCENE", 11);
			Param0.f_892 = 16;
			Function_104(&Global_119935, 0x1000000);
			Function_100(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0x3f800000, 0);
			Function_99(&Param0 + 808, &Param1 + 96, 2);
		
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
				Function_16(2048);
			}
			iVar1 = 250;
			break;
		
		case 0x00000011:
			if (HUD_IS_FADED())
			{
				Function_93(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
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
			Function_137("LAW_AI_STATE: BRIBE CUTSCENE", 11);
			Function_89("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			Param0.f_892 = 22;
			iVar11 = Function_86(&Param1 + 96, &Param0 + 808);
			GET_POSITION(&Param1 + 96, &Param0 + 724);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			SQUAD_GOAL_ADD_MEET_AT_POSITION(&Param0 + 808, 1, &Param0 + 724, 4294967295, 5.0f, 1);
			ACTOR_HOLSTER_WEAPON(&Param1 + 96, 1);
			Function_100(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (IS_ACTOR_HOGTIED(&iVar11))
			{
				FREE_FROM_HOGTIE(&iVar11);
			}
			if (Function_82(&fVar22, &Var23))
			{
				SET_ACTOR_HEADING(&Param1 + 96, fVar22, 1);
			}
			else
			{
				fVar22 = Function_81(&Param1 + 96);
				Function_80(&iVar11);
				Var23 = Function_80(&iVar11);
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
			AUDIO_STOP_PAIN(Function_220());
			SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_220(), "PLAYER_OFFER_LAW_BRIBE", 1, 1, 0, 0);
			*(&Param0 + 984) = Function_76(StackVal, &Param1 + 96, fVar22, Var23);
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
			Function_93(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (&Param0 + 984 != "")
			{
				REMOVE_CAMERA_FROM_CHANNEL(&Param0 + 984, 0);
				DESTROY_OBJECT(&Param0 + 984);
				RELEASE_OBJECT_REF(&Param0 + 984);
			}
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
			iVar11 = Function_86(&Param1 + 96, &Param0 + 808);
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
			Function_137("LAW_AI_STATE: CLEANUP", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_136(&Param0 + 808);
			Function_26(&Param0 + 808, 0);
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

int Function_76(int iParam0, var uParam1, struct<2> Param2) //Position: 0x4A7B / 19067
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	uVar0 = CREATE_CAMERA_IN_LAYOUT(&Global_39918, Function_36(), 0);
	INIT_CAMERA_FROM_GAME_CAMERA(&uVar0);
	GET_CAMERA_POSITION(&uVar0, &Var5);
	Function_80(&iParam0);
	Function_78(StackVal, StackVal, StackVal, Function_80(&iParam0), uParam1, Param2, Var5, &Var1, &Var3);
	SET_CAMERA_POSITION(&uVar0, Var1);
	SET_CAMERA_TARGET_POSITION(&uVar0, Var3, 0);
	if (!Function_77(StackVal, Var1))
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

bool Function_77(vector3 vParam0) //Position: 0x4B01 / 19201
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_78(struct<2> Param0, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, struct<2> Param8) //Position: 0x4B19 / 19225
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
		if (!Function_77(StackVal, Var14[iVar352]))
		{
			if (FIND_INTERSECTION(&(Var14[iVar352]), &Var0, &uVar31, &uVar33, 1, 4294967295, 4194304))
			{
				Var14[iVar352] = Vector(0.0f, 0.0f, 0.0f);
			}
		}
		iVar35++;
	}
	if (!Function_77(StackVal, Var14[02]))
	{
		Var14[02].f_4 = StackVal;
	}
	if (!Function_77(StackVal, Var14[12]))
	{
		Var14[12].f_4 = StackVal;
	}
	if (!Function_77(StackVal, Var14[22]))
	{
		Var14[22].f_4 = StackVal;
	}
	if (!Function_77(StackVal, Var14[32]))
	{
		Var14[32].f_4 = StackVal;
	}
	if (!Function_77(StackVal, Var14[42]))
	{
		Var14[42].f_4 = StackVal;
	}
	if (!Function_77(StackVal, Var14[52]))
	{
		Var14[52].f_4 = StackVal;
	}
	if (!Function_77(StackVal, Var14[62]))
	{
		Var14[62].f_4 = StackVal;
	}
	if (!Function_77(StackVal, Var14[72]))
	{
		Var14[72].f_4 = StackVal;
	}
	Function_79(StackVal, Param5, &Var14);
	uParam7 = Function_79(StackVal, Param5, &Var14);
	return 1;
}

struct<8> Function_79(struct<2> Param0, struct<2>[] Param2) //Position: 0x4E1D / 19997
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	
	bVar3 = 1E+08.0f;
	iVar2 = 0;
	while (iVar2 <= Param2)
	{
		if (!Function_77(StackVal, Param2[iVar22]))
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

struct<8> Function_80(int iParam0) //Position: 0x4E87 / 20103
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

float Function_81(int iParam0) //Position: 0x4E99 / 20121
{
	return GET_HEADING(&iParam0);
}

bool Function_82(var uParam0, int iParam1) //Position: 0x4EA5 / 20133
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
	
	Function_80(GET_PLAYER_ACTOR(0));
	Var2 = Function_80(GET_PLAYER_ACTOR(0));
	uVar4 = Function_81(GET_PLAYER_ACTOR(0));
	uVar5 = Vector(0.0f, 0.0f, -1,7f);
	GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &uVar5, &Var0);
	if (Function_85(StackVal, StackVal, Var0, Var2))
	{
		if (Function_84(StackVal, StackVal, Var0, Var2) > 0,1f)
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
		Function_83(StackVal, StackVal, Var0, Var2, 10.0f);
		Var0 = Function_83(StackVal, StackVal, Var0, Var2, 10.0f);
		if (Function_85(StackVal, StackVal, Var0, Var2))
		{
			fVar11 = Function_84(StackVal, StackVal, Var0, Var2);
			if (fVar8 > 0.0f || fVar11 > fVar8)
			{
				iVar7 = Function_108(StackVal, StackVal, Var2, Var0);
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

struct<8> Function_83(vector3 vParam0) //Position: 0x4F82 / 20354
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

float Function_84(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4FFC / 20476
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

bool Function_85(vector3 vParam0) //Position: 0x503C / 20540
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

var Function_86(int iParam0, int iParam1) //Position: 0x50A7 / 20647
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
		if (Function_87(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_87(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &iParam0);
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

float Function_87(bool bParam0, int iParam1) //Position: 0x516A / 20842
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&bParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_88(&uVar0, &uVar2);
	return iVar4;
}

var Function_88(struct<2> Param0) //Position: 0x518B / 20875
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_89(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x51AA / 20906
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_90(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_90(int iParam0) //Position: 0x522F / 21039
{
	char* cVar0[16];
	
	if (!Function_91())
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

bool Function_91() //Position: 0x526E / 21102
{
	if (Function_92(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_92(var uParam0, bool bParam1) //Position: 0x5289 / 21129
{
	return (uParam0 && bParam1) == 0;
}

void Function_93(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x5296 / 21142
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
		uVar0 = Function_220();
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
		Function_97(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_96();
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
	Function_94(&iParam9, &iParam10);
}

void Function_94(var uParam0, bool bParam1) //Position: 0x5365 / 21349
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
		Function_95();
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

void Function_95() //Position: 0x5434 / 21556
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

void Function_96() //Position: 0x54AC / 21676
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_97(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x54C1 / 21697
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
	Function_47(iParam0, TO_FLOAT(bParam1), 1);
	Function_46(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_98(iParam0);
	return 1;
}

void Function_98(int iParam0) //Position: 0x56E9 / 22249
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

void Function_99(var uParam0, var uParam1, bool bParam2) //Position: 0x5787 / 22407
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

void Function_100(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x57D3 / 22483
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
	Function_96();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_220();
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
				Function_80(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_36(), 2,802597E-45f, Function_80(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_97(19, 1, 0, 0);
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
	if (iParam10 && !Function_91())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_103()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_103()));
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
	if (Function_102(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_101(0x4000000);
	}
	if (Function_102(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_101(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_101(int iParam0) //Position: 0x5A85 / 23173
{
	int iVar0;
	
	if (Function_92(iParam0, 1) && Function_92(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_102(int iParam0) //Position: 0x5AB9 / 23225
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_103() //Position: 0x5AD5 / 23253
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

void Function_104(var uParam0, int iParam1) //Position: 0x5B63 / 23395
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_105(var uParam0, int iParam1) //Position: 0x5B74 / 23412
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

void Function_106(bool bParam0) //Position: 0x5BC3 / 23491
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	uVar0 = Function_107();
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

var Function_107() //Position: 0x5C31 / 23601
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

float Function_108(struct<2> Param0, struct<2> Param2) //Position: 0x5CA2 / 23714
{
	var uVar0;
	
	Function_109(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_109(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x5CBC / 23740
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

var Function_110(var uParam0, int iParam1, float fParam2) //Position: 0x5CE0 / 23776
{
	struct<8> Var0;
	int iVar8;
	bool bVar9;
	struct<2> Var10;
	
	if (!IS_OBJECT_VALID(&(Global_39559[iParam1])))
	{
		return "";
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_111("llr") };
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

struct<32> Function_111(char* cParam0) //Position: 0x5D5E / 23902
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_112("0", &cVar8, ""), 4);
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

struct<32> Function_112(char* cParam0) //Position: 0x5DCA / 24010
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_113(int iParam0, int iParam1) //Position: 0x5DEC / 24044
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_114(struct<641> Param0) //Position: 0x5DFF / 24063
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

void Function_115(int iParam0, char* cParam1) //Position: 0x5E23 / 24099
{
	int iVar0;
	
	iVar0 = Function_116();
	if (iVar0 == 4294967295)
	{
		return;
	}
	strcpy(&(Global_42046[iVar020]), &cParam1, 64);
	Global_42046[iVar020].f_128 = fParam2;
	Global_42046[iVar020].f_152 = uParam3;
	Global_42046[iVar020].f_132 = &fParam4;
	Global_42046[iVar020].f_136 = &iParam5;
	(&Global_42046[iVar020] + 144) = &iParam0;
	Global_42046[iVar020].f_140 = &iParam6;
}

var Function_116() //Position: 0x5E8C / 24204
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

int Function_117(int iParam0) //Position: 0x5ECB / 24267
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

var Function_118(int iParam0, int iParam1) //Position: 0x5F21 / 24353
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
	if (!Function_120(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_119(&uVar1, &iVar2);
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

void Function_119(var uParam0, int iParam1) //Position: 0x5FD4 / 24532
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

bool Function_120(int iParam0) //Position: 0x600A / 24586
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_121(struct<677> Param0) //Position: 0x601F / 24607
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

bool Function_122(struct<1009> Param0) //Position: 0x6051 / 24657
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

bool Function_123(int iParam0, int iParam1, bool bParam2) //Position: 0x6096 / 24726
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

bool Function_124(var uParam0, struct<2> Param1, float fParam3) //Position: 0x6109 / 24841
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (Function_77(StackVal, Param1))
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
				Function_125(&uVar1);
				if (VDIST(Function_125(&uVar1), Param1) >= fParam3)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

struct<8> Function_125(int iParam0) //Position: 0x617E / 24958
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

bool Function_126(struct<573> Param0) //Position: 0x61EA / 25066
{
	if ((GET_CURRENT_GAME_TIME() - Param0.f_572) > &fParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_127(struct<1009> Param0) //Position: 0x6204 / 25092
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
			Function_128(&Param0);
			Var1 = Function_128(&Param0);
			if (!Function_77(StackVal, Var1))
			{
				if (SQUAD_IS_VALID(&Param0 + 808))
				{
					SQUAD_GOALS_CLEAR(&Param0 + 808);
					Function_136(&Param0 + 808);
					Function_137("LAW_AI_STATE: STAY IN COUNTRY", 11);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 0, 4294967295);
					TASK_GO_NEAR_COORD(0, &Var1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
				}
				if (SQUAD_IS_VALID(&Param0 + 816))
				{
					SQUAD_GOALS_CLEAR(&Param0 + 816);
					Function_136(&Param0 + 816);
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

struct<8> Function_128(struct<1009> Param0) //Position: 0x6320 / 25376
{
	int iVar0;
	
	iVar0 = Function_130(&Param0);
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
	Function_129();
	return StackVal, Function_129();
}

struct<8> Function_129() //Position: 0x63FE / 25598
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

var Function_130(int iParam0) //Position: 0x6408 / 25608
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

bool Function_131(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x64B3 / 25779
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
					if (!Function_132(&uVar1, 1) || iParam3)
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

bool Function_132(int iParam0, int iParam1) //Position: 0x6558 / 25944
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

bool Function_133(int iParam0, int iParam1, bool bParam2) //Position: 0x65AA / 26026
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
		Function_60(&Global_39554);
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
		Function_60(&Global_39554);
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

void Function_134(int iParam0, struct<117> Param1) //Position: 0x673A / 26426
{
	if (&iParam0 + 760 > 0.0f)
	{
		if ((Function_131(&iParam0 + 808, &Param1 + 96, 20.0f, 1) || Function_126(&iParam0, 0x3f800000)) || iParam2)
		{
			if (!Function_55(&iParam0 + 808, 59, &Param1 + 96))
			{
				if (GET_WEAPON_IN_HAND(&Param1 + 96) == 4294967295)
				{
					Function_115(&iParam0 + 808, "law_give_up_unarmed", 2,5f, Param1.f_116, 20.0f, 1, 0);
				}
				else
				{
					Function_115(&iParam0 + 808, "law_give_up", 2,5f, Param1.f_116, 20.0f, 1, 0);
				}
			}
			Function_121(&iParam0, 1);
		}
	}
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x67FC / 26620
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

void Function_136(int iParam0) //Position: 0x6848 / 26696
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

void Function_137(struct<16> Param0) //Position: 0x687D / 26749
{
	if (!Function_102(128))
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

int Function_138(struct<2> Param0, struct<5> Param2) //Position: 0x68BA / 26810
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
		if (!Function_77(StackVal, Param2))
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
			if (!Function_77(StackVal, Param2))
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

bool Function_139(struct<673> Param0) //Position: 0x69FD / 27133
{
	int iVar0;
	float fVar1;
	
	fVar1 = Function_142(&Param0, &Param1 + 96);
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
			if (!Function_221(Global_119935, 8))
			{
				Function_215(&Global_54076, 8, 2, 0);
			}
		}
	}
	if (&bParam2)
	{
		if (Global_6629 && Global_6648)
		{
			if (Function_133(Param1.f_108, GET_OBJECT_FROM_ACTOR(&Param1 + 96), 1))
			{
				Global_6648 = 0;
				*(&Param0 + 724) = *(&Param0 + 640);
				GET_ACTOR_VELOCITY(&Param1 + 96, &Param0 + 736);
				Param0.f_672 = GET_CURRENT_GAME_TIME();
				Function_141(&Param0 + 808, &Param1 + 96, 0);
				if (!Function_221(Global_119935, 16))
				{
					Function_215(&Global_54076, 16, 2, 0);
				}
			}
		}
	}
	Param0.f_572 = Function_113(Function_113(Param0.f_664, Param0.f_668), Param0.f_672);
	Global_42254 = Function_63(&Param0);
	Global_42255 = Param0.f_572;
	if (GET_CURRENT_GAME_TIME() < (Param0.f_572 + Global_42254))
	{
		if (Function_140(&Param0 + 808) >= 0)
		{
			if (!Function_55(&Param0 + 808, 22, &Param1 + 96))
			{
				Function_115(&Param0 + 808, "law_go_unwanted", 5.0f, Param1.f_116, 20.0f, 0, 0);
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
				if (!Function_221(Global_119935, 4096))
				{
					Function_215(&Global_54076, 4096, 2, 0);
				}
			}
		}
		if (GET_CURRENT_GAME_TIME() < (Param0.f_568 + 20.0f))
		{
			if (Function_140(&Param0 + 808) >= 0)
			{
				if (!Function_55(&Param0 + 808, 22, &Param1 + 96))
				{
					Function_115(&Param0 + 808, "law_wanted_lost_track", 2,5f, Param1.f_116, 20.0f, 0, 1);
				}
			}
			Param0.f_568 = GET_CURRENT_GAME_TIME();
		}
	}
	return iVar0;
}

int Function_140(int iParam0) //Position: 0x6C37 / 27703
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

void Function_141(var uParam0, var uParam1, bool bParam2) //Position: 0x6C8A / 27786
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

var Function_142(int iParam0, int iParam1) //Position: 0x6D02 / 27906
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (SQUAD_IS_VALID(&iParam0 + 816))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iParam0 + 816) >= 0)
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	uVar0 = GET_LASSO_TARGET(Function_220());
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (Function_143(&uVar0, &iParam0 + 808, 0))
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	iVar3 = 0.0f;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(&iParam0 + 808))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 808, bVar1);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				if (GET_LAST_ATTACK_TARGET(&uVar2) != &iParam1 && GET_LAST_ATTACK_TIME(&uVar2) <= (GET_CURRENT_GAME_TIME() - 5.0f))
				{
					return GET_CURRENT_GAME_TIME();
				}
				iVar3 = Function_113(MEMORY_GET_POSITION_LAST_KNOWN_TIME(&uVar2, &iParam1), iVar3);
			}
		}
		bVar1++;
	}
	return iVar3;
}

bool Function_143(int iParam0, int iParam1, bool bParam2) //Position: 0x6DBD / 28093
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

void Function_144() //Position: 0x6E05 / 28165
{
	if (Global_6629)
	{
		if (Function_147(32768))
		{
			Function_145(32768);
		}
	}
	else if (!Function_147(32768))
	{
		Function_5(32768);
	}
	return;
}

void Function_145(int iParam0) //Position: 0x6E37 / 28215
{
	Function_146(&Global_43580, iParam0);
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x6E45 / 28229
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_147(int iParam0) //Position: 0x6E6D / 28269
{
	return Function_148(&Global_43580, iParam0);
}

int Function_148(var uParam0, int iParam1) //Position: 0x6E7B / 28283
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_149(int iParam0) //Position: 0x6E98 / 28312
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

void Function_150(struct<893> Param0) //Position: 0x6EF9 / 28409
{
	if (Param0.f_768 || Param0.f_776)
	{
		return;
	}
	if (UNK_0x7A207FFE(&iParam1 + 96))
	{
		Param0.f_776 = 1;
		Param0.f_892 = 18;
		Param0.f_684 = GET_CURRENT_GAME_TIME();
	}
	return;
}

void Function_151(struct<893> Param0) //Position: 0x6F34 / 28468
{
	if ((((((Param0.f_772 || Param0.f_768) || Param0.f_776) || Param0.f_780) || Param0.f_796) || Param0.f_800) || Param0.f_892 < 14)
	{
		return;
	}
	if ((((Global_40060[Param1.f_116] <= 15 || (GET_CURRENT_GAME_TIME() <= (Param0.f_704 + 20.0f) && Param0.f_704 < 0.0f)) || Param0 != 2) || Param0 != 3) || 0)
	{
		Function_152(&Param0, &Param1);
	}
	return;
}

void Function_152(struct<773> Param0) //Position: 0x6FB4 / 28596
{
	bool bVar0;
	var uVar1;
	
	if (!Function_221(Global_119935, 8192))
	{
		Function_215(&Global_54076, 8192, 2, 0);
	}
	Function_55(&Param0 + 808, 58, &iParam1 + 96);
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

void Function_153(struct<1029> Param0) //Position: 0x7056 / 28758
{
	int iVar0;
	bool bVar1;
	
	if (GET_CURRENT_GAME_TIME() <= Param0.f_1028)
	{
		iVar0 = &Param0 + 928;
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			*(&Param0 + 928) = Function_154(&iParam1 + 96, 258);
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

int Function_154(var uParam0, int iParam1) //Position: 0x7195 / 29077
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
			if (Function_61(GET_VOLUME_FROM_OBJECT(&iVar4), &iParam1))
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
	Function_60(&uVar0);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 10);
	iVar4 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		if (DECOR_CHECK_EXIST(&iVar4, "locflag"))
		{
			if (Function_61(GET_VOLUME_FROM_OBJECT(&iVar4), &iParam1))
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

void Function_155(struct<1001> Param0) //Position: 0x7363 / 29539
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
		if (!Function_221(Global_119936, 32768))
		{
			Function_215(Function_220(), 32768, 3, 0);
		}
	}
	if ((((((Function_159(&Param1 + 96, 0, 0) || Global_6648) || Function_73(&Param0, 1) != 0) || Global_99146) || Param0.f_780) || IS_ACTOR_RAGDOLL(&Param1 + 96)) || !IS_ACTOR_ALIVE(&Param1 + 96))
	{
		if (Param0.f_796 && !Param0.f_768)
		{
			Param0.f_796 = 0;
			Param0.f_800 = 0;
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
			Function_158(&Param0, &Param1);
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
			Function_158(&Param0, &Param1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96));
		return;
	}
	fVar0 = Function_157(GET_TIME_SINCE_LAST_MOVESTICK_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96)), GET_TIME_SINCE_LAST_BUTTON_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96)));
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
								Function_80(&iVar2);
								Var4 = Function_80(&iVar2);
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
				AUDIO_STOP_PAIN(Function_220());
				if (Function_156() > 3)
				{
					SAY_SINGLE_LINE_STRING(Function_220(), "PLAYER_ARRESTED_HONORABLE", true, true, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING(Function_220(), "PLAYER_ARRESTED_DISHONORABLE", true, true, 0, 0, true, false);
				}
				AI_DONT_HARM_ACTOR(&Param1 + 96);
				Function_136(&Param0 + 808);
				SQUAD_GOALS_CLEAR(&Param0 + 808);
				bVar8 = false;
				while (bVar8 <= SQUAD_GET_SIZE(&Param0 + 808))
				{
					iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar8);
					if (IS_ACTOR_VALID(&iVar2))
					{
						Function_80(&iVar2);
						Function_80(&Param1 + 96);
						bVar9 = VDIST(Function_80(&iVar2), Function_80(&Param1 + 96));
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
					iVar11 = Function_86(&Param1 + 96, &Param0 + 808);
					if (IS_ACTOR_VALID(&iVar11))
					{
						if (Function_156() >= 4)
						{
							SAY_SINGLE_LINE_CONTEXT(&iVar11, true, &Param1 + 96, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_156() <= 2)
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
	else if (((((fVar0 < 0,5f && GET_WEAPON_IN_HAND(&Param1 + 96) != 4294967295) && Function_19(Param1.f_116) >= 1500) && !Param0.f_800) && !Param0.f_768) && !Param0.f_796)
	{
		AI_DONT_HARM_ACTOR(&Param1 + 96);
		Param0.f_800 = 1;
	}
	else
	{
		if (Param0.f_796 && !Param0.f_768)
		{
			Param0.f_796 = 0;
			Function_158(&Param0, &Param1);
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

int Function_156() //Position: 0x78B2 / 30898
{
	return Global_21369.f_244;
}

var Function_157(int iParam0, int iParam1) //Position: 0x78BD / 30909
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_158(struct<893> Param0) //Position: 0x78D0 / 30928
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

bool Function_159(int iParam0, bool bParam1, bool bParam2) //Position: 0x7908 / 30984
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
	if (Function_187(&iParam0))
	{
		return 1;
	}
	if (Function_161(&iParam0))
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
	if (Function_160())
	{
		return 1;
	}
	return 0;
}

bool Function_160() //Position: 0x79CC / 31180
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_161(int iParam0) //Position: 0x79E3 / 31203
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

void Function_162(struct<893> Param0) //Position: 0x79EF / 31215
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	if (!Function_225(524288))
	{
		if (Function_131(&Param0 + 808, &Param1 + 96, 10.0f, 1))
		{
			if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(Param1.f_104, &Param1 + 96))
			{
				Param0.f_596 = 1.0f;
			}
			if (!Function_221(Global_119935, 32))
			{
				Function_215(&Global_54076, 32, 2, 0);
			}
		}
		return;
	}
	if (((((!Param0.f_768 && !Param0.f_796) && !Param0.f_776) && !Param0.f_780) && Function_225(0x2000000)) && Function_73(&Param0, 1) < 0)
	{
		if (Function_186(&Param0 + 808, &Param1 + 96, 10.0f, 0,5f))
		{
			bVar1 = false;
			if (Function_184(&Param0 + 808, &Param1 + 96, 25.0f, 0) == 1)
			{
				if (Function_181(&Param0, &Param1))
				{
					Global_6651 = 1;
					bVar1 = true;
					bVar2 = CEIL((IntToFloat(Function_19(Param1.f_116)) / 2.0f));
					if (Function_11() > 2)
					{
						bVar2 = CEIL((IntToFloat(bVar2) * 0,75f));
					}
					if (Function_180() > bVar2)
					{
						bVar1 = false;
						if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 992))
						{
							if (Global_39922.f_308)
							{
								if (!Function_221(Global_119936, 16384))
								{
									Function_215(Function_220(), 16384, 3, 0);
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
							if (Function_180() > bVar2)
							{
								Function_23();
								DECOR_SET_INT(StackVal, Function_179(&Param0 + 808), CEIL((IntToFloat(Function_19("iAdditionalMoney")) / 2.0f)));
								if (CEIL((IntToFloat(Function_19(StackVal)) / 2.0f)) >= Function_50(255))
								{
									Function_34(StackVal, CEIL((IntToFloat(Function_19(255)) / 2.0f)), 0);
								}
								Function_97(253, 1, 0, 0);
								Function_178(CEIL((IntToFloat(Function_19(StackVal)) / 2.0f)), 1);
								if (Function_19(StackVal) <= 100)
								{
									Function_164(4294966896, 1, 0);
								}
								else if (Function_19(StackVal) <= 1000)
								{
									Function_164(4294966296, 1, 0);
								}
								else
								{
									Function_164(4294965296, 1, 0);
								}
								Function_33();
								Function_163("bribe_taken", 0x41200000, 1, 0, 2, 1, 0);
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
				if (Function_181(&Param0, &Param1))
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
						SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_220(), "PLAYER_OFFER_LAW_BRIBE_URGENT", 1, 1, 2, 0);
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

void Function_163(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x7DDA / 32218
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_90(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

void Function_164(int iParam0, bool bParam1, bool bParam2) //Position: 0x7E65 / 32357
{
	int iVar0;
	bool bVar1;
	
	if (Function_64(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_177())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_50(1);
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
			Function_176(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_221(Global_119936, 1))
				{
					Function_215(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_174(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_221(Global_119936, 2))
				{
					Function_215(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_97(1, bVar1, 0, 0);
	}
	else
	{
		Function_173(1, (4294967295 * bVar1), 0);
	}
	if (Function_50(1) <= 4294962296)
	{
		Function_34(1, 4294962296, 0);
	}
	else if (Function_50(1) >= 5000)
	{
		Function_34(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_44(1));
	iVar0 = Function_50(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_166(2, Function_172(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_166(2, Function_172(Global_21369.f_244), 0);
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
				Function_166(2, Function_172(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_166(2, Function_172(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_166(2, Function_172(Global_21369.f_244), 1);
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
				Function_166(2, Function_172(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_166(2, Function_172(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_166(2, Function_172(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_166(2, Function_172(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_166(2, Function_172(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_166(2, Function_172(Global_21369.f_244), 1);
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
				Function_166(2, Function_172(Global_21369.f_244), 0);
			}
			break;
	}
	Function_165(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_165(int iParam0, int iParam1) //Position: 0x818C / 33164
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

int Function_166(int iParam0, char* cParam1) //Position: 0x83F6 / 33782
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
	Function_170(iParam0, &cParam1, 0, 1);
	iVar1 = Function_167();
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

int Function_167() //Position: 0x8586 / 34182
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
	Function_168();
	return 0;
}

void Function_168() //Position: 0x8627 / 34343
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
		Function_169(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_169(int iParam0) //Position: 0x86E5 / 34533
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

int Function_170(int iParam0, char* cParam1) //Position: 0x874B / 34635
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
		Function_171(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_171(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x8AA2 / 35490
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

var Function_172(int iParam0) //Position: 0x8B2A / 35626
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

int Function_173(int iParam0, bool bParam1, int iParam2) //Position: 0x8BCD / 35789
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
	Function_46(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_174(int iParam0, bool bParam1) //Position: 0x8DCA / 36298
{
	bool bVar0;
	int iVar1;
	
	Function_173(iParam0, bParam1, 0);
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
	iVar1 = Function_175(iParam0, 4294967295);
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
	iVar1 = Function_167();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_175(int iParam0, int iParam1) //Position: 0x8F75 / 36725
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

int Function_176(int iParam0, bool bParam1) //Position: 0x8FBA / 36794
{
	bool bVar0;
	int iVar1;
	
	Function_97(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_175(iParam0, 4294967295);
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
	iVar1 = Function_167();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

bool Function_177() //Position: 0x9166 / 37222
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_178(int iParam0, bool bParam1) //Position: 0x9191 / 37265
{
	bool bVar0;
	
	bVar0 = Function_50(0);
	if ((Function_50(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_173(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_50(0));
	return 1;
}

int Function_179(var uParam0) //Position: 0x9222 / 37410
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

int Function_180() //Position: 0x926F / 37487
{
	return Function_50(0);
}

bool Function_181(int iParam0, struct<105> Param1) //Position: 0x9279 / 37497
{
	var uVar0;
	
	if (((((((CAN_ANYONE_OF_FACTION_SEE_OBJECT(Param1.f_104, &Param1 + 96) && GET_ATTACHED_HOGTIE_VICTIM(&Param1 + 96) != "") && GET_WEAPON_IN_HAND(&Param1 + 96) != 4294967295) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && !IS_ACTOR_RAGDOLL(&Param1 + 96)) && !Function_159(Function_220(), 0, 1)) && !Function_183()) && !Function_182())
	{
		uVar0 = Function_86(&Param1 + 96, &iParam0 + 808);
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

bool Function_182() //Position: 0x9317 / 37655
{
	return Global_54082 != 3;
}

bool Function_183() //Position: 0x9322 / 37666
{
	return Global_54082 != 2;
}

int Function_184(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x932D / 37677
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
			if (Function_185(&uVar2, &uParam1, uParam2))
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

bool Function_185(var uParam0, var uParam1, bool bParam2) //Position: 0x93A6 / 37798
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

bool Function_186(var uParam0, var uParam1, bool bParam2, float fParam3) //Position: 0x94BB / 38075
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

bool Function_187(int iParam0) //Position: 0x9559 / 38233
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

var Function_188(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x9568 / 38248
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
			fVar3 = Function_189(&uVar4, &uParam1);
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

var Function_189(var uParam0, int iParam1) //Position: 0x9633 / 38451
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

void Function_190(int iParam0) //Position: 0x9728 / 38696
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_2())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_191(struct<845> Param0) //Position: 0x9761 / 38753
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&Param0 + 808))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Param0 + 536))
	{
		return 0;
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		return 0;
	}
	while (Param0.f_844 <= Param0.f_840)
	{
		uVar0 = Function_208(&Param0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_192(&Param0, &uVar0, &Param1 + 96);
			}
		}
		Param0.f_844++;
	}
	Param0.f_552 = GET_CURRENT_GAME_TIME();
	if (!Function_55(&Param0 + 808, 105, &Param1 + 96))
	{
		if (GET_WEAPON_IN_HAND(&Param1 + 96) == 4294967295)
		{
			Function_115(&Param0 + 808, "law_go_wanted_unarmed", 5.0f, Param1.f_116, 20.0f, 1, 0);
		}
		else
		{
			Function_115(&Param0 + 808, "law_go_wanted", 5.0f, Param1.f_116, 20.0f, 1, 0);
		}
	}
	return 1;
}

void Function_192(struct<1009> Param0) //Position: 0x9861 / 39009
{
	Function_193(&uParam1, Function_207(Function_19(Param0.f_1008), Param0));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam1, 31, -1.0f);
	SQUAD_JOIN(&uParam1, &Param0 + 808);
	SET_ACTOR_UPDATE_PRIORITY(&uParam1, false);
	if (!Global_42250)
	{
		MEMORY_CONSIDER_AS_ENEMY(&uParam1, &iParam2);
	}
	MEMORY_IDENTIFY(&uParam1, &iParam2);
	MEMORY_REPORT_POSITION_AUTO(&uParam1, &Global_54076, 0);
	MEMORY_REPORT_POSITION(&uParam1, &iParam2, &Param0 + 724);
	SET_ACTOR_VISION_XRAY(&uParam1, 0);
	ACTOR_DRAW_LAST_WEAPON(&uParam1, 0);
	AI_BEHAVIOR_SET_ALLOW(&uParam1, 0, 0);
	TASK_PRIORITY_SET(&uParam1, 2);
	SET_TOUGH_ACTOR(&uParam1, 1);
	if (Param0 == 2 && Param0 == 3)
	{
		AI_SET_RANGE_ACCURACY_MODIFIER(&uParam1, &iParam2, -8.0f);
	}
	AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(&uParam1), 1,5f);
	if (Param0.f_624)
	{
		DECOR_SET_BOOL(&uParam1, "CanBeLasso", 0);
	}
	if (Function_225(0x4000000))
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
			Function_32(GET_MOUNT(&uParam1), &Global_54076, -1.0f, -1.0f, 0, 0);
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

void Function_193(int iParam0, int iParam1) //Position: 0x9A4B / 39499
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_206(&iParam0);
			break;
		
		case 0x00000001:
			Function_205(&iParam0);
			break;
		
		case 0x00000002:
			Function_204(&iParam0);
			break;
		
		case 0x00000005:
			Function_203(&iParam0);
			break;
		
		case 0x00000004:
			Function_202(&iParam0);
			break;
		
		case 0x00000003:
			Function_201(&iParam0);
			break;
		
		case 0x00000006:
			Function_200(&iParam0);
			break;
		
		case 0x00000007:
			Function_199(&iParam0);
			break;
		
		case 0x00000008:
			Function_198(&iParam0);
			break;
		
		case 0x00000009:
			Function_196(&iParam0);
			break;
		
		default:
			Function_194(&iParam0);
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

void Function_194(int iParam0) //Position: 0x9B25 / 39717
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, false);
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
	Function_195(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_195(var uParam0, bool bParam1) //Position: 0x9EE3 / 40675
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

void Function_196(int iParam0) //Position: 0x9F06 / 40710
{
	Function_194(&iParam0);
	Function_197(&iParam0, 1);
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
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
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

void Function_197(int iParam0, int iParam1) //Position: 0xA0CF / 41167
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

void Function_198(int iParam0) //Position: 0xA108 / 41224
{
	Function_194(&iParam0);
	Function_197(&iParam0, 1);
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
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
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

void Function_199(int iParam0) //Position: 0xA2DD / 41693
{
	Function_194(&iParam0);
	Function_197(&iParam0, 1);
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
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
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

void Function_200(int iParam0) //Position: 0xA498 / 42136
{
	Function_194(&iParam0);
	Function_197(&iParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
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

void Function_201(int iParam0) //Position: 0xA5EA / 42474
{
	Function_194(&iParam0);
	Function_197(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, true);
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
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	return;
}

void Function_202(int iParam0) //Position: 0xA79A / 42906
{
	Function_194(&iParam0);
	Function_197(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
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

void Function_203(int iParam0) //Position: 0xA916 / 43286
{
	Function_194(&iParam0);
	Function_197(&iParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
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

void Function_204(int iParam0) //Position: 0xAA73 / 43635
{
	Function_194(&iParam0);
	Function_197(&iParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,85f);
	return;
}

void Function_205(int iParam0) //Position: 0xAA9A / 43674
{
	Function_194(&iParam0);
	Function_197(&iParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
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

void Function_206(int iParam0) //Position: 0xAC27 / 44071
{
	Function_194(&iParam0);
	Function_197(&iParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,85f);
	return;
}

int Function_207(int iParam0, int iParam1) //Position: 0xAC68 / 44136
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

var Function_208(struct<589> Param0) //Position: 0xAC91 / 44177
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
					Function_209(&uVar1, 1);
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
	Function_29(&iVar0, 1);
	return &iVar0;
}

int Function_209(bool bParam0, bool bParam1) //Position: 0xAE78 / 44664
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

bool Function_210(struct<2>[] Param0) //Position: 0xAF2A / 44842
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_214();
	iVar1 = 0;
	if (!Function_15(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_213(&(Param0[iVar02]), 8);
		}
		else if (Function_212())
		{
			iVar1 = 1;
			Function_213(&(Param0[iVar02]), 8);
		}
		Function_213(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_15(&(Param0[iVar02]), 4))
		{
			if (!Function_15(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_15(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_15(&(Param0[02]), 8) || iVar1));
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
				Function_213(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_15(&(Param0[iVar02]), 4))
		{
			if (!Function_15(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
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
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_213(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_213(&(Param0[iVar02]), 2);
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
	Function_211();
	return 1;
}

void Function_211() //Position: 0xB2EC / 45804
{
	if (!Function_102(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_212() //Position: 0xB32C / 45868
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

void Function_213(struct<13> Param0) //Position: 0xB35A / 45914
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_214() //Position: 0xB36D / 45933
{
	if (!Function_102(128))
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

void Function_215(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xB3AF / 45999
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_216(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_4(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

bool Function_216(int iParam0, var uParam1, int iParam2) //Position: 0xB424 / 46116
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
		if (Function_218(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_217(uVar0))
		{
			case 0x00000002:
				if (!Function_221(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_217(char* cParam0) //Position: 0xB4A0 / 46240
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

int Function_218(int iParam0) //Position: 0xB541 / 46401
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_219(&iVar1, 2147483648);
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

void Function_219(var uParam0, var uParam1) //Position: 0xB57E / 46462
{
	uParam0 = (uParam0 - (uParam0 && uParam1));
	return;
}

var Function_220() //Position: 0xB594 / 46484
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_221(int iParam0, int iParam1) //Position: 0xB5A9 / 46505
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_222() //Position: 0xB5BC / 46524
{
	if ((Global_6623 || Global_6625) || Global_6608)
	{
		return 0;
	}
	return 1;
}

void Function_223(int iParam0) //Position: 0xB5D3 / 46547
{
	if (!IS_LAYOUTREF_VALID(&iParam0 + 544))
	{
		(&iParam0 + 544) = &Global_46715;
	}
	return;
}

void Function_224(int iParam0) //Position: 0xB5F2 / 46578
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

bool Function_225(int iParam0) //Position: 0xB60F / 46607
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_226(struct<1009> Param0) //Position: 0xB62D / 46637
{
	Param0.f_700 = GET_CURRENT_GAME_TIME();
	Param0 = 0;
	Param0.f_1008 = StackVal;
	Param0.f_868 = 1;
	Global_21542 = 0,01f;
	Function_236(&Param0);
	Param0.f_840 = 0;
	Param0.f_848 = 0;
	*(&Param0 + 536) = CREATE_LAYOUT("WildernessLawResponse");
	Function_234(&Param0, &Param1, GET_GC_LAYOUT(), 0);
	Function_234(&Param0, &Param1, GET_AMBIENT_LAYOUT(), 0);
	Function_234(&Param0, &Param1, &Global_43578, 0);
	Function_234(&Param0, &Param1, &Global_10998, 0);
	*(&Param0 + 808) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 536, "lawSquad"));
	*(&Param0 + 816) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 536, "dogSquad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 808, 648);
	SQUAD_SET_FACTION(&Param0 + 808, Param1.f_104);
	*(&Param0 + 560) = Function_233(&Param1 + 96, 3, 0);
	if (IS_CRIME_VALID(&Param0 + 560))
	{
		GET_CRIME_POSITION(&Param0 + 560, &Param0 + 712);
		Param0.f_664 = Function_113(GET_CURRENT_GAME_TIME(), Function_113(GET_CRIME_BEGIN_TIMESTAMP(&Param0 + 560), GET_CRIME_END_TIMESTAMP(&Param0 + 560)));
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
	*(&Param0 + 632) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Param0 + 536, Function_36(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 20.0f, 30.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 632, &Param1 + 96, Function_36(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	*(&Param0 + 544) = &Global_40000 + 16;
	if (IS_OBJECTSET_VALID(&Global_98981))
	{
		CLEAN_OBJECTSET(&Global_98981);
		Param0.f_584 = GET_OBJECTSET_SIZE(&Global_98981);
		Param0.f_840 = (Param0.f_840 + Param0.f_584);
		PRINTINT(Param0.f_584);
		PRINTNL();
	}
	if (Function_222())
	{
		if (!Function_221(Global_119935, 32768))
		{
			Function_215(&Global_54076, 32768, 2, 0);
		}
	}
	Function_227();
	return;
}

void Function_227() //Position: 0xB88D / 47245
{
	if (!Function_229(25, 0))
	{
		if (!Function_221(Global_119935, 0x1000000))
		{
			Function_228(&Global_119936, 32768);
		}
	}
	return;
}

void Function_228(var uParam0, int iParam1) //Position: 0xB8B8 / 47288
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_229(var uParam0, bool bParam1) //Position: 0xB8D2 / 47314
{
	int iVar0;
	
	iVar0 = Function_231(uParam0);
	if (!Function_230(iVar0))
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

bool Function_230(int iParam0) //Position: 0xB910 / 47376
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_231(int iParam0) //Position: 0xB927 / 47399
{
	if (!Function_232(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_232(int iParam0) //Position: 0xB941 / 47425
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_233(int iParam0, int iParam1, int iParam2) //Position: 0xB957 / 47447
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
	if (!Function_120(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	iVar1 = 0;
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar3 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_119(&uVar2, &uVar3);
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

void Function_234(int iParam0, struct<105> Param1) //Position: 0xBA86 / 47750
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0 + 536);
	ITERATE_IN_LAYOUT(&uVar0, &iParam2);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
		if (GET_ACTOR_FACTION(&uVar2) != Param1.f_104 && IS_ACTOR_ALIVE(&uVar2))
		{
			bVar3 = true;
			if (bVar3)
			{
				if (Function_235(&uVar2, &Global_98981) && iParam3)
				{
					Function_192(&iParam0, &uVar2, &Param1 + 96);
				}
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

int Function_235(int iParam0, int iParam1) //Position: 0xBB18 / 47896
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

void Function_236(int iParam0) //Position: 0xBBA3 / 48035
{
	Function_237(&iParam0 + 8, "stand_surrender", 5, 0);
	Function_237(&iParam0 + 8, "custom/stand_surrender", 8, 0);
	Function_237(&iParam0 + 8, "stand_shakehands", 5, 0);
	Function_237(&iParam0 + 8, "custom/stand_shakehands", 8, 0);
	return;
}

var Function_237(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xBC2F / 48175
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_238(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_213(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_238(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xBC6D / 48237
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_15(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_213(&(Param0[iVar02]), 4);
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

