//Decompiled with MagicRDR v1.0
//Function Count : 309
//Statics Count : 313
//Natives Count : 509
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
	struct<1005> Local_15 = { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	float fVar3;
	bool bVar4;
	var uVar5;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	
	iLocal_13 = 0;
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(&Global_54076, 0, "red_wanted");
	if (Function_308(0x1000000))
	{
		Function_307(0x1000000);
	}
	Function_292(&Local_15, &ScriptParam_0);
	Global_21575 = 0;
	fVar3 = GET_CURRENT_GAME_TIME();
	iLocal_14 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bVar1 = 250;
		Function_288(&Local_15 + 80);
		Function_287(&Local_15);
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
		Function_286(&Local_15);
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
		if (Function_285())
		{
			if (!Function_284(Global_119935, 0x2000000))
			{
				Function_278(Function_283(), 0x2000000, 2, 0);
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
					if (Function_288(&Local_15 + 8) && Function_277(&Local_15))
					{
						iLocal_14 = 1;
						Local_15.f_700 = GET_CURRENT_GAME_TIME();
						bVar1 = false;
					}
					Function_274(&Local_15, &ScriptParam_0);
					break;
				
				case 0x00000001:
					if (Function_272(&Local_15, &ScriptParam_0))
					{
						Local_15.f_700 = GET_CURRENT_GAME_TIME();
						PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
						fLocal_275 = GET_CURRENT_GAME_TIME();
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
					Function_256(&Local_15);
					if (GET_CURRENT_GAME_TIME() <= (Local_15.f_700 + 10.0f))
					{
						iLocal_14 = 3;
					}
					break;
				
				case 0x00000002:
					Function_256(&Local_15);
					Function_254(&Local_15, &ScriptParam_0);
					uVar2 = Function_252(&Local_15 + 808, &ScriptParam_0 + 96, 1, 0);
					if (IS_ACTOR_VALID(&uVar2))
					{
						GET_POSITION(&uVar2, &Local_15 + 652);
					}
					else
					{
						*(&Local_15 + 652) = Vector(0.0f, 0.0f, 0.0f);
					}
					if ((((!Function_251(&ScriptParam_0 + 96) && !IS_ACTOR_IN_HOGTIE(&ScriptParam_0 + 96)) && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&ScriptParam_0 + 96))) && !IS_ACTOR_RIDING_VEHICLE(&ScriptParam_0 + 96)) && !IS_ACTOR_RIDING(&ScriptParam_0 + 96))
					{
						Function_222(&Local_15, &ScriptParam_0);
						Function_215(&Local_15, &ScriptParam_0);
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_15 + 992))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Local_15 + 992);
					}
					Function_214(&Local_15, &ScriptParam_0);
					Function_212(&Local_15, &ScriptParam_0);
					Function_211(&Local_15, &ScriptParam_0);
					Function_208(&Local_15);
					Function_207(&Local_15);
					Function_202();
					Function_197(&Local_15);
					if (Function_192(&Local_15, &ScriptParam_0, 1))
					{
						Local_15.f_892 = 24;
						iLocal_14 = 3;
						bVar1 = false;
					}
					bVar12 = false;
					if (Function_191(&Local_15, 1) != 0 && Local_15.f_844 <= Local_15.f_840)
					{
						if (Local_15.f_580 != 0.0f)
						{
							Local_15.f_580 = (GET_CURRENT_GAME_TIME() + 1,5f);
						}
						else if (GET_CURRENT_GAME_TIME() <= Local_15.f_580)
						{
							bVar12 = true;
						}
					}
					else
					{
						Local_15.f_580 = 0.0f;
					}
					if (bVar12)
					{
						if (Function_191(&Local_15, 0) == 0)
						{
							Local_15.f_784 = 1;
						}
						Local_15.f_580 = GET_CURRENT_GAME_TIME();
						Local_15.f_892 = 24;
						iLocal_14 = 3;
						bVar1 = false;
					}
					if (!Global_42250)
					{
						bVar1 = Function_132(bVar1, Function_133(&Local_15, &ScriptParam_0));
						Function_127(&Local_15, &ScriptParam_0);
					}
					else
					{
						Function_120(&uVar7, &uVar8, &uVar10, &uVar11, &uVar9);
					}
					if (Local_15.f_784)
					{
						iLocal_14 = 3;
					}
					if (Local_15.f_1004)
					{
						iLocal_14 = 3;
					}
					if (Local_15.f_792)
					{
						iLocal_14 = 3;
					}
					if ((0 || (fLocal_275 + 15.0f) > GET_CURRENT_GAME_TIME()) || Function_191(&Local_15, 1) != 0)
					{
						bVar1 = Function_132(bVar1, Function_96(&Local_15, &ScriptParam_0));
					}
					Function_94(&Local_15, &ScriptParam_0);
					Function_75(&Local_15, &ScriptParam_0);
					Function_74(&Local_15, 0);
					if (!Global_42250)
					{
						Function_61(&Local_15, &ScriptParam_0);
					}
					Function_50(&Local_15);
					Function_48(&Local_15, &ScriptParam_0);
					Function_47(&Local_15);
					Function_46(&Local_15);
					bVar1 = false;
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
					if (SQUAD_GET_SIZE(&Local_15 + 808) >= 0)
					{
						bVar0 = false;
						while (bVar0 <= SQUAD_GET_SIZE(&Local_15 + 808))
						{
							bVar4 = SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0);
							GET_POSITION(&bVar4, &uVar5);
							TASK_CLEAR(&bVar4);
							MEMORY_CONSIDER_AS(&bVar4, &Global_54076, 2);
							if (!Local_15.f_780)
							{
								Function_45(&bVar4, &Global_54076, -1.0f, -1.0f, 0, 0);
							}
							else
							{
								TASK_WANDER(&bVar4, -1.0f);
							}
							DECOR_SET_BOOL(&bVar4, "CanBeLasso", 1);
							TASK_PRIORITY_SET(&bVar4, 2);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bVar4)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bVar4));
							}
							if (Function_44(&bVar4))
							{
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bVar4)))
								{
									Function_43(GET_PERS_CHAR_FROM_ACTOR(&bVar4));
								}
								DEREFERENCE_ACTOR(&bVar4);
								Function_42(&bVar4, 0);
								Local_15.f_588 = (Local_15.f_588 - 1);
							}
							else
							{
								RELEASE_ACTOR(&bVar4);
							}
							bVar0++;
						}
						Function_41(&Local_15 + 808);
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
		if (GET_CURRENT_GAME_TIME() - fVar3) < IntToFloat(Function_40(258))
		{
			Function_26(258, ROUND((GET_CURRENT_GAME_TIME() - fVar3)), 0);
		}
		WAIT(bVar1);
	}
	if (SQUAD_GET_SIZE(&Local_15 + 808) < 0 && !Local_15.f_780)
	{
		Function_23(&Local_15 + 808, 0, 0, 0);
	}
	else if (Local_15.f_780)
	{
		Function_23(&Local_15 + 808, 0, 0, 1);
	}
	if (!Local_15.f_784)
	{
		Function_21();
	}
	Function_20(&Local_15 + 816);
	Function_74(&Local_15, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Local_15 + 992))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Local_15 + 992);
	}
	if (IS_BLIP_VALID(&Local_15 + 600))
	{
		REMOVE_BLIP(&Local_15 + 600);
	}
	Function_16(0);
	Function_15(1024);
	Global_21542 = 1.0f;
	if (Local_15.f_768 || Local_15.f_776)
	{
		Function_15(2048);
		Global_40060.f_4424 = ScriptParam_0.f_116;
	}
	else if (Local_15.f_780)
	{
	}
	else if (Global_39922.f_308)
	{
		if (!Function_284(Global_119935, 524288))
		{
			Function_278(&Global_54076, 524288, 2, 0);
		}
	}
	Function_11(&Local_15 + 8);
	if (IS_OBJECT_VALID(&Local_15 + 944))
	{
		NAV_QUERY_STOP(&Local_15 + 944);
	}
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	Global_39922.f_276 = 0;
	Function_6(ScriptParam_0.f_116, 1);
	Global_21575 = 4294967295;
	if (Local_15.f_784)
	{
		if (ScriptParam_0.f_112 == Global_43789)
		{
			Function_5();
		}
	}
	Function_3(32768);
	if (!Function_284(Global_119935, 32768))
	{
		Function_1(&Global_54076, 32768, 2);
	}
	if (!Function_284(Global_119936, 32768))
	{
		Function_1(Function_283(), 32768, 3);
	}
	AI_CLEAR_DONT_HARM_ACTOR(&ScriptParam_0 + 96);
	if (((!Local_15.f_768 && !Local_15.f_776) && !Global_6638) && !HUD_IS_FADED())
	{
		PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
	}
	TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&Global_54076);
	Function_11(&Local_15 + 80);
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

void Function_1(int iParam0, int iParam1, int iParam2) //Position: 0x753 / 1875
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	Function_2(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(&iParam0, &cVar1);
	DECOR_SET_INT(&iParam0, &cVar1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_2(char* cParam0) //Position: 0x7A7 / 1959
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

void Function_3(int iParam0) //Position: 0x7E1 / 2017
{
	Function_4(&Global_43580, iParam0);
	return;
}

void Function_4(var uParam0, var uParam1) //Position: 0x7EF / 2031
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_5() //Position: 0x80E / 2062
{
	Global_40000.f_72 = Global_40000.f_76;
	Global_40000.f_80 = (GET_CURRENT_GAME_TIME() + 1800.0f);
	return;
}

void Function_6(int iParam0, bool bParam1) //Position: 0x82C / 2092
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
	if (Function_10() > 3)
	{
		iVar0 *= 2;
	}
	if (0 && !&bParam1)
	{
		Function_8(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_8(iParam0, 0, 0, Function_7(iVar0), 0);
	}
	return;
}

var Function_7(int iParam0) //Position: 0x894 / 2196
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_8(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x8AB / 2219
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &iParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_9(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_9(bool bParam0) //Position: 0x8FB / 2299
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_10() //Position: 0x924 / 2340
{
	return Global_21369.f_248;
}

void Function_11(int iParam0) //Position: 0x92F / 2351
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_12(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_12(struct<2>[] Param0, int iParam1) //Position: 0x957 / 2391
{
	if (Function_14(&(Param0[iParam12]), 4))
	{
		if (Function_14(&(Param0[iParam12]), 1))
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
			Function_13(&(Param0[iParam12]), 1);
			Function_13(&(Param0[iParam12]), 2);
			Function_13(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_13(struct<13> Param0) //Position: 0xAA2 / 2722
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_14(struct<13> Param0) //Position: 0xABF / 2751
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_15(int iParam0) //Position: 0xADD / 2781
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_16(bool bParam0) //Position: 0xAF0 / 2800
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
		Function_17();
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

void Function_17() //Position: 0xB7F / 2943
{
	int iVar0;
	
	Global_41176 = Function_18(StackVal);
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

int Function_18(int iParam0) //Position: 0xBCD / 3021
{
	if (!Function_19(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_19(int iParam0) //Position: 0xBE5 / 3045
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_20(bool bParam0) //Position: 0xBFA / 3066
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

void Function_21() //Position: 0xC48 / 3144
{
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_22(GET_AMBIENT_LAYOUT());
	Function_22(GET_GC_LAYOUT());
	Function_22(&Global_10996);
	Function_22(&Global_10994);
	Function_22(&Global_43578);
	Function_22(&Global_10998);
	Function_22(&Global_99717);
	return;
}

void Function_22(int iParam0) //Position: 0xC81 / 3201
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
		ITERATE_IN_LAYOUT(&uVar0, &iParam0);
		iVar1 = START_OBJECT_ITERATOR(&uVar0);
		if (IS_ACTOR_VALID(Function_283()))
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
						MEMORY_CONSIDER_AS(&iVar2, Function_283(), 2);
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

void Function_23(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD35 / 3381
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) >= 0)
	{
		Function_25(&uParam0);
		Function_24(&uParam0, 0);
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
					Function_45(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
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
					Function_42(&bVar1, 0);
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bVar1)))
					{
						Function_43(GET_PERS_CHAR_FROM_ACTOR(&bVar1));
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

void Function_24(var uParam0, int iParam1) //Position: 0xEA3 / 3747
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

void Function_25(int iParam0) //Position: 0xEF3 / 3827
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

int Function_26(int iParam0, bool bParam1, bool bParam2) //Position: 0xF2B / 3883
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
		Function_39(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_38(iParam0);
	if (&bParam2)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_27(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, int iParam7) //Position: 0x11C7 / 4551
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_37(390))), 32);
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
					fVar19 = (Function_36(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_36(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_34(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &fParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_32(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_29(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_28(), &Var9);
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

var Function_28() //Position: 0x1805 / 6149
{
	int iVar0;
	
	return &iVar0;
}

var Function_29(int iParam0) //Position: 0x180E / 6158
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_30(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x181F / 6175
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_31(char* cParam0) //Position: 0x1916 / 6422
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_32(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1931 / 6449
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_132(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_33(Function_132(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_33(int iParam0, int iParam1) //Position: 0x1998 / 6552
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_34(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x19AA / 6570
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_35(int iParam0) //Position: 0x1ADE / 6878
{
	return Global_55480[iParam016].f_96;
}

float Function_36(int iParam0) //Position: 0x1AED / 6893
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_37(int iParam0) //Position: 0x1B26 / 6950
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_38(int iParam0) //Position: 0x1B63 / 7011
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

int Function_39(int iParam0, float fParam1, bool bParam2) //Position: 0x1CFD / 7421
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

int Function_40(int iParam0) //Position: 0x1F41 / 8001
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_41(int iParam0) //Position: 0x1F82 / 8066
{
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	SQUAD_MAKE_EMPTY(&iParam0);
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x1F99 / 8089
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

int Function_43(int iParam0) //Position: 0x1FDA / 8154
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

bool Function_44(bool bParam0) //Position: 0x2083 / 8323
{
	return DECOR_CHECK_EXIST(&bParam0, "nsharedlaw");
}

void Function_45(bool bParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x209B / 8347
{
	if (IS_ACTOR_VALID(&bParam0) && IS_ACTOR_VALID(&iParam1))
	{
		TASK_FLEE_ACTOR(&bParam0, &iParam1, fParam2, fParam3, &iParam4, &iParam5, 0);
	}
}

void Function_46(int iParam0) //Position: 0x20C7 / 8391
{
	return;
}

void Function_47(int iParam0) //Position: 0x20CD / 8397
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
								Function_42(&bVar1, 0);
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bVar1)))
								{
									Function_43(GET_PERS_CHAR_FROM_ACTOR(&bVar1));
									Function_45(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
									DEREFERENCE_ACTOR(&bVar1);
								}
								else
								{
									Function_45(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
									RELEASE_ACTOR(&bVar1);
								}
							}
							else
							{
								Function_45(&bVar1, &Global_54076, -1.0f, -1.0f, 0, 0);
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

void Function_48(struct<893> Param0) //Position: 0x228F / 8847
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
				Function_49(&Param0 + 808, 109, &iParam1 + 96);
			}
			else if (iVar0 <= 6666)
			{
				Function_49(&Param0 + 808, 58, &iParam1 + 96);
			}
			else
			{
				Function_49(&Param0 + 808, 105, &iParam1 + 96);
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

bool Function_49(var uParam0, bool bParam1, int iParam2) //Position: 0x24B1 / 9393
{
	DECOR_SET_INT(&uParam0, "nextspeech", bParam1);
	DECOR_SET_INT(&uParam0, "nextspeechtarget", &iParam2);
	return 1;
}

void Function_50(int iParam0) //Position: 0x24EB / 9451
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 808))
	{
		Function_56(&iParam0, SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 808, bVar0));
		bVar0++;
	}
	Function_51(&iParam0);
	return;
}

void Function_51(struct<1025> Param0) //Position: 0x2524 / 9508
{
	struct<9> Var0;
	
	if (Global_6629)
	{
		if (!IS_OBJECT_VALID(&Param0 + 1016) || GET_CURRENT_GAME_TIME() <= Param0.f_1024)
		{
			(&Param0 + 1016) = Function_53(&Global_54076, 4);
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
		if ((Global_6629 && Function_52()) && IS_OBJECT_VALID(&Param0 + 1016))
		{
			GET_OBJECT_POSITION(&Param0 + 1016, &Param0 + 608);
			*(&Param0 + 600) = ADD_BLIP_FOR_COORD(&Param0 + 608, 440, 0, 2, 0);
		}
		else
		{
			*(&Param0 + 600) = ADD_BLIP_FOR_COORD(&Param0 + 652, 440, 0, 2, 0);
		}
	}
	if ((Global_6629 && Function_52()) && IS_OBJECT_VALID(&Param0 + 1016))
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

int Function_52() //Position: 0x26BA / 9914
{
	if (StackVal != 5 || Global_43789 != Global_46894[3])
	{
		return 0;
	}
	return 1;
}

var Function_53(int iParam0, int iParam1) //Position: 0x26DD / 9949
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
			if (Function_55(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
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
	Function_54(&iVar8);
	ITERATE_IN_LAYOUT(&iVar8, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&iVar8, 10);
	iVar6 = START_OBJECT_ITERATOR(&iVar8);
	while (IS_OBJECT_VALID(&iVar6))
	{
		if (DECOR_CHECK_EXIST(&iVar6, "locflag"))
		{
			if (Function_55(GET_VOLUME_FROM_OBJECT(&iVar6), &iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&iVar6), &Var3);
				if (VDIST(Var1, Var3) > bVar0)
				{
					iVar5 = &iVar6;
					bVar0 = VDIST(Var1, Var3);
				}
			}
		}
		Function_54(&iVar9);
		ITERATE_IN_LAYOUT(&iVar9, &Global_46715);
		ITERATE_IN_VOLUME_SET(&iVar9, GET_VOLUME_FROM_OBJECT(&iVar6));
		uVar7 = START_OBJECT_ITERATOR(&iVar9);
		while (IS_OBJECT_VALID(&uVar7))
		{
			if (DECOR_CHECK_EXIST(&uVar7, "locflag"))
			{
				if (Function_55(GET_VOLUME_FROM_OBJECT(&uVar7), &iParam1))
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

int Function_54(int iParam0) //Position: 0x28C5 / 10437
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_28());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_28());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_55(float fParam0, int iParam1) //Position: 0x28FB / 10491
{
	if (!DECOR_CHECK_EXIST(&fParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(&fParam0, "locflag") && iParam1) < 0;
}

void Function_56(struct<573> Param0) //Position: 0x292C / 10540
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
					Function_59(&iParam1);
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
			if (GET_CURRENT_GAME_TIME() < (Param0.f_572 + (Function_57(&Param0) / 1,5f)))
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

float Function_57(struct<873> Param0) //Position: 0x2A46 / 10822
{
	bool bVar0;
	int iVar1;
	
	if (Function_191(&Param0, 1) == 0)
	{
		return 10.0f;
	}
	if (Param0.f_872 && !Function_58(0))
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

bool Function_58(int iParam0) //Position: 0x2AD3 / 10963
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_59(var uParam0) //Position: 0x2AE2 / 10978
{
	Function_60(&uParam0);
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

void Function_60(var uParam0) //Position: 0x2B31 / 11057
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

void Function_61(struct<1033> Param0) //Position: 0x2B64 / 11108
{
	bool bVar0;
	var uVar1;
	
	if (GET_CURRENT_GAME_TIME() <= Param0.f_1032)
	{
		if ((!Param0.f_892 != 11 && !Param0.f_892 != 5) && !Param0.f_892 != 7)
		{
			return;
		}
		if (Global_43790 == 2)
		{
			return;
		}
		if ((!IS_ACTOR_RIDING(&iParam1 + 96) && !IS_ACTOR_DRIVING_VEHICLE(&iParam1 + 96)) && !IS_ACTOR_RIDING_VEHICLE(&iParam1 + 96))
		{
			return;
		}
		if (!Function_73(&(Global_46972[6]), 0, 4294967295, 0))
		{
			return;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 808))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_62(&uVar1, &Param0);
			}
			bVar0++;
		}
		Param0.f_1032 = (GET_CURRENT_GAME_TIME() + 3.0f);
	}
	return;
}

void Function_62(bool bParam0, int iParam1) //Position: 0x2C1E / 11294
{
	struct<2> Var0;
	struct<2> Var2;
	struct<6> Var4;
	int iVar10;
	
	if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
	{
		return;
	}
	if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bParam0), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam1 + 808)))
	{
		return;
	}
	GET_POSITION(&bParam0, &Var0);
	if (VDIST(Var0, (&iParam1 + 640)) > 20.0f)
	{
		return;
	}
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ON_SCREEN_TIME_FOR_ACTOR(&bParam0)) > 5.0f)
	{
		return;
	}
	if (WOULD_ACTOR_BE_VISIBLE(976, &Var0, 3212836864))
	{
		return;
	}
	if (Function_72(GET_OBJECT_FROM_ACTOR(&bParam0), 258) != "")
	{
		return;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var2);
	Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_71() };
	iVar10 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iParam1 + 536, Function_63(&Var4, &(Global_46972[6]), Var0, 0, 0, 23, 0), Var0, Var2);
	ACCESSORIZE_HORSE(&iVar10, 3);
	ACTOR_MOUNT_ACTOR(&bParam0, &iVar10);
	AI_CLEAR_NAV_MATERIAL_USAGE(&bParam0);
	return;
}

var Function_63(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2CEF / 11503
{
	return Function_64(StackVal, &uParam0, uParam3, &uParam4, &uParam5, &uParam6, 1, Param1);
}

var Function_64(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x2D0D / 11533
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_70();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_69(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_68(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_68(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_67(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_69(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_67(bVar0))
				{
					Function_66();
				}
				Function_65(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_69(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_65(int iParam0) //Position: 0x3006 / 12294
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_66() //Position: 0x30BA / 12474
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_67(bool bParam0) //Position: 0x30F5 / 12533
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_68(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x3122 / 12578
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

bool Function_69(bool bParam0) //Position: 0x327D / 12925
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_70() //Position: 0x3294 / 12948
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_66();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_66();
	return;
}

struct<24> Function_71() //Position: 0x32E0 / 13024
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

int Function_72(bool bParam0, int iParam1) //Position: 0x331B / 13083
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	int iVar4;
	
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return "";
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	if (GET_OBJECT_TYPE(&bParam0) == 3)
	{
		uVar1 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bParam0));
	}
	if (!IS_OBJECT_VALID(&uVar1))
	{
		uVar1 = &bParam0;
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
			if (Function_55(GET_VOLUME_FROM_OBJECT(&iVar4), &iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(&bParam0, GET_VOLUME_FROM_OBJECT(&iVar4)))
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
	Function_54(&uVar0);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 10);
	iVar4 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar4))
	{
		if (DECOR_CHECK_EXIST(&iVar4, "locflag"))
		{
			if (Function_55(GET_VOLUME_FROM_OBJECT(&iVar4), &iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(&bParam0, GET_VOLUME_FROM_OBJECT(&iVar4)))
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

bool Function_73(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x34E9 / 13545
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

void Function_74(int iParam0, bool bParam1) //Position: 0x3515 / 13589
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
										Function_45(&bVar6, Function_283(), -1.0f, -1.0f, 0, 0);
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

int Function_75(struct<693> Param0) //Position: 0x362D / 13869
{
	if (GET_CURRENT_GAME_TIME() <= Param0.f_692)
	{
		Function_76(&Param0, &iParam1, GET_GC_LAYOUT(), 1);
		Function_76(&Param0, &iParam1, GET_AMBIENT_LAYOUT(), 1);
		Function_76(&Param0, &iParam1, &Global_43578, 1);
		Function_76(&Param0, &iParam1, &Global_10998, 1);
		Param0.f_692 = (GET_CURRENT_GAME_TIME() + 3.0f);
	}
	return 0;
}

void Function_76(int iParam0, struct<105> Param1) //Position: 0x3682 / 13954
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
				if (Function_93(&uVar2, &Global_98981) && iParam3)
				{
					Function_77(&iParam0, &uVar2, &Param1 + 96);
				}
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_77(struct<1009> Param0) //Position: 0x3714 / 14100
{
	Function_78(&uParam1, Function_92(Function_18(Param0.f_1008), Param0));
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
	if (Function_308(0x4000000))
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
			Function_45(GET_MOUNT(&uParam1), &Global_54076, -1.0f, -1.0f, 0, 0);
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

void Function_78(int iParam0, int iParam1) //Position: 0x38FE / 14590
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_91(&iParam0);
			break;
		
		case 0x00000001:
			Function_90(&iParam0);
			break;
		
		case 0x00000002:
			Function_89(&iParam0);
			break;
		
		case 0x00000005:
			Function_88(&iParam0);
			break;
		
		case 0x00000004:
			Function_87(&iParam0);
			break;
		
		case 0x00000003:
			Function_86(&iParam0);
			break;
		
		case 0x00000006:
			Function_85(&iParam0);
			break;
		
		case 0x00000007:
			Function_84(&iParam0);
			break;
		
		case 0x00000008:
			Function_83(&iParam0);
			break;
		
		case 0x00000009:
			Function_81(&iParam0);
			break;
		
		default:
			Function_79(&iParam0);
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

void Function_79(int iParam0) //Position: 0x39D8 / 14808
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
	Function_80(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_80(var uParam0, bool bParam1) //Position: 0x3D96 / 15766
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

void Function_81(int iParam0) //Position: 0x3DB9 / 15801
{
	Function_79(&iParam0);
	Function_82(&iParam0, 1);
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

void Function_82(int iParam0, int iParam1) //Position: 0x3F82 / 16258
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

void Function_83(int iParam0) //Position: 0x3FBB / 16315
{
	Function_79(&iParam0);
	Function_82(&iParam0, 1);
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

void Function_84(int iParam0) //Position: 0x4192 / 16786
{
	Function_79(&iParam0);
	Function_82(&iParam0, 1);
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

void Function_85(int iParam0) //Position: 0x434D / 17229
{
	Function_79(&iParam0);
	Function_82(&iParam0, 1);
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

void Function_86(int iParam0) //Position: 0x449F / 17567
{
	Function_79(&iParam0);
	Function_82(&iParam0, 1);
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

void Function_87(int iParam0) //Position: 0x464F / 17999
{
	Function_79(&iParam0);
	Function_82(&iParam0, 1);
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

void Function_88(int iParam0) //Position: 0x47CB / 18379
{
	Function_79(&iParam0);
	Function_82(&iParam0, 1);
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

void Function_89(int iParam0) //Position: 0x4928 / 18728
{
	Function_79(&iParam0);
	Function_82(&iParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,85f);
	return;
}

void Function_90(int iParam0) //Position: 0x494F / 18767
{
	Function_79(&iParam0);
	Function_82(&iParam0, 0);
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

void Function_91(int iParam0) //Position: 0x4ADC / 19164
{
	Function_79(&iParam0);
	Function_82(&iParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0,85f);
	return;
}

int Function_92(int iParam0, int iParam1) //Position: 0x4B1D / 19229
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

int Function_93(int iParam0, int iParam1) //Position: 0x4B46 / 19270
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

int Function_94(struct<845> Param0) //Position: 0x4BD1 / 19409
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar4;
	bool bVar5;
	
	if (GET_CURRENT_GAME_TIME() <= Param0.f_688)
	{
		if (GET_OBJECTSET_SIZE(&Global_98981) < 0)
		{
			return 0;
		}
		bVar1 = false;
		while (bVar1 <= GET_OBJECTSET_SIZE(&Global_98981))
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &Global_98981);
			uVar4 = "";
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar0, "lateSharedLaw"))
				{
					if (GET_OBJECT_TYPE(&uVar0) == 15)
					{
						uVar4 = GET_ACTOR_FROM_OBJECT(&uVar0);
						if (IS_ACTOR_VALID(&uVar4))
						{
							REFERENCE_ACTOR(&uVar4);
							TASK_CLEAR(&uVar4);
							MEMORY_REPORT_POSITION_AUTO(&uVar4, &Global_54076, 0);
							TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar4);
							DECOR_REMOVE(&uVar0, "lateSharedLaw");
						}
					}
					else if (GET_OBJECT_TYPE(&uVar0) == 24)
					{
						bVar5 = GET_PERS_CHAR_FROM_OBJECT(&uVar0);
						GET_OBJECT_POSITION(&bVar5, &uVar2);
						if (!WOULD_ACTOR_BE_VISIBLE(false, &uVar2, 3212836864) || IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&bVar5)))
						{
							ACTIVATE_ACTOR_FOR_PERS_CHAR(&bVar5);
							uVar4 = GET_ACTOR_FROM_PERS_CHAR(&bVar5);
							if (IS_ACTOR_VALID(&uVar4))
							{
								REFERENCE_ACTOR(&uVar4);
								TASK_CLEAR(&uVar4);
								MEMORY_REPORT_POSITION_AUTO(&uVar4, &Global_54076, 0);
								Function_95(&bVar5, 1);
								TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar4);
								DECOR_REMOVE(&uVar0, "lateSharedLaw");
							}
						}
					}
				}
			}
			if (IS_ACTOR_VALID(&uVar4))
			{
				if (IS_ACTOR_ALIVE(&uVar4))
				{
					Function_77(&Param0, &uVar4, &iParam1 + 96);
				}
				Param0.f_844++;
			}
			bVar1++;
		}
		Param0.f_688 = (GET_CURRENT_GAME_TIME() + 3.0f);
	}
	return 0;
}

int Function_95(bool bParam0, bool bParam1) //Position: 0x4D5C / 19804
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

bool Function_96(struct<877> Param0) //Position: 0x4E0E / 19982
{
	int iVar0;
	
	if (!Function_117(1))
	{
		return 250;
	}
	if (Param1.f_112 != Global_43789)
	{
		return 250;
	}
	iVar0 = 16;
	if (Function_191(&Param0, 1) <= Param0.f_836 || SQUAD_GET_SIZE(&Param0 + 808) <= iVar0)
	{
		return 250;
	}
	if (!IS_ACTOR_VALID(Function_97(&Param0, &Param0 + 536, &Param0 + 808, &Param0 + 840, &Param1 + 96, 1)))
	{
		return 250;
	}
	Param0.f_552 = GET_CURRENT_GAME_TIME();
	Param0.f_876 = Param1.f_88;
	return 0;
}

var Function_97(struct<965> Param0) //Position: 0x4E93 / 20115
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar11;
	
	if (!SQUAD_IS_VALID(&uParam2))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		return "";
	}
	if ((!Param0.f_936 != 2 && !Param0.f_936 != 3) && Param0.f_588 <= Param0.f_584)
	{
		return "";
	}
	if (Param0.f_936 == 3)
	{
		Param0.f_936 = 0;
		return "";
	}
	if (Param0.f_844 <= uParam3 && 1)
	{
		if (SQUAD_GET_SIZE(&Param0 + 808) <= 1)
		{
			Param0.f_892 = 24;
		}
		return "";
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		return "";
	}
	Function_116(&Param0 + 640, 40.0f, &Var3, 10);
	Function_116(&Param0 + 952, 40.0f, &Var1, 10);
	if (Param0.f_936 == 2)
	{
		if (Function_114(StackVal, Var1))
		{
			Param0.f_936 = 0;
			return "";
		}
	}
	Var5 = Vector(StackVal, StackVal, StackVal) - Vector(Var1, Var3, StackVal);
	Var5 = Vector(0.0f, UNK_0x9C40E671(&Var5), 0.0f);
	if (Param0.f_588 <= Param0.f_584)
	{
		bVar8 = true;
		if (!Param0.f_964)
		{
			bVar7 = true;
		}
	}
	else if (!Global_47006[23])
	{
		bVar7 = false;
	}
	else
	{
		bVar7 = true;
	}
	if (bVar7)
	{
		if (Param0.f_892 != 13 || Param0.f_892 != 14)
		{
			bVar7 = false;
		}
	}
	if (!bVar8)
	{
		if (bVar7)
		{
			if (!Function_113(2))
			{
				bVar7 = false;
				if (!Function_113(1))
				{
					return "";
				}
			}
		}
		if (!Function_113(1))
		{
			return "";
		}
	}
	iVar9 = 1;
	if (!Function_112(StackVal, Var1) || bVar8)
	{
		if (Function_111(&Var1, &Param0 + 640) > Function_110(&Param0, bVar7))
		{
			bVar0 = Function_98(StackVal, StackVal, &Param0, &uParam1, Var1, Var5, &iVar9, iVar11, bVar8, bVar7, &bParam5);
		}
		else if (Param0.f_936 == 2)
		{
			Param0.f_936 = 0;
		}
	}
	if (IS_ACTOR_VALID(&bVar0))
	{
		Param0.f_936 = 0;
		if (IS_ACTOR_ALIVE(&bVar0))
		{
			Function_77(&Param0, &bVar0, &iParam4);
		}
		Param0.f_844++;
	}
	return &bVar0;
}

int Function_98(struct<833> Param0) //Position: 0x50A7 / 20647
{
	var uVar0;
	char* cVar1[32];
	int iVar9;
	struct<6> Var10;
	
	if (&bParam8)
	{
		uVar0 = Function_109(&Param0);
	}
	if (!IS_ACTOR_VALID(&uVar0) && !(bParam8 && !&bParam10))
	{
		Function_104(&Param0);
		if (Param0.f_832 > 0)
		{
			strcpy(&cVar1, Function_28(), 32);
			if (!&bParam9)
			{
				uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam1, &cVar1, Function_103(&Param0), Param2, Param4);
			}
			else
			{
				iVar9 = Function_102(StackVal, &(Global_46972[6]), Param2, 4, 23, 0);
				if (Function_101(iVar9, &iParam6))
				{
					iVar9 = 976;
				}
				iParam6[iParam7] = iVar9;
				Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_71() };
				uVar0 = Function_100(StackVal, StackVal, &uParam1, &cVar1, Function_103(&Param0), &Var10, iVar9, Param2, Param4);
			}
		}
		if (IS_ACTOR_VALID(&uVar0))
		{
			Function_99(&Param0);
		}
	}
	return &uVar0;
}

void Function_99(struct<861> Param0) //Position: 0x5172 / 20850
{
	if (Param0.f_832 > 0)
	{
		Param0.f_860++;
		(*&Param0 + 280)[Param0.f_832] = Param0.f_860;
	}
	return;
}

var Function_100(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x51A4 / 20900
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_69(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_69(bParam4))
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

bool Function_101(int iParam0, bool[] bParam1) //Position: 0x52DC / 21212
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_102(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x5310 / 21264
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

var Function_103(struct<833> Param0) //Position: 0x532C / 21292
{
	int iVar0;
	
	iVar0 = &Param0 + 80[Param0.f_8322];
	if (Function_69(iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

void Function_104(struct<833> Param0) //Position: 0x534E / 21326
{
	Param0.f_832 = Function_105(&Param0, 1);
	return;
}

int Function_105(int iParam0, bool bParam1) //Position: 0x5361 / 21345
{
	int iVar0;
	int iVar1;
	
	iVar1 = RAND_INT_RANGE(0, 11);
	iVar0 = iVar1;
	while (iVar0 < 11)
	{
		if (Function_108(&iParam0, iVar0))
		{
			if (!Function_107(&iParam0, iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Function_108(&iParam0, iVar0))
		{
			if (!Function_107(&iParam0, iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	if (&bParam1)
	{
		Function_106(&iParam0);
		return Function_105(&iParam0, 0);
	}
	return 4294967295;
}

void Function_106(struct<861> Param0) //Position: 0x53DF / 21471
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

bool Function_107(int iParam0, int iParam1) //Position: 0x545F / 21599
{
	if ((*&iParam0 + 280)[iParam1] >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_108(int iParam0, int iParam1) //Position: 0x5476 / 21622
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

var Function_109(struct<589> Param0) //Position: 0x549A / 21658
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
					Function_95(&uVar1, 1);
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
	Function_42(&iVar0, 1);
	return &iVar0;
}

float Function_110(int iParam0, bool bParam1) //Position: 0x5681 / 22145
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

float Function_111(struct<2> Param0) //Position: 0x56E0 / 22240
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_112(vector3 vParam0) //Position: 0x56FF / 22271
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_113(int iParam0) //Position: 0x5717 / 22295
{
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) > iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_114(vector3 vParam0) //Position: 0x5730 / 22320
{
	var uVar0;
	int iVar2;
	
	uVar0 = Vector(vParam0.x, (vParam0.y + 0,5f), vParam0.z);
	iVar2 = GET_MATERIAL_AT_VECTOR(&uVar0);
	if (iVar2 >= 0 || Function_115(iVar2, 1024))
	{
		return 1;
	}
	return 0;
}

bool Function_115(var uParam0, int iParam1) //Position: 0x5764 / 22372
{
	return (uParam0 && iParam1) == 0;
}

int Function_116(struct<2> Param0, struct<5> Param2) //Position: 0x5771 / 22385
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
		if (!Function_112(StackVal, Param2))
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
			if (!Function_112(StackVal, Param2))
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

bool Function_117(bool bParam0) //Position: 0x58B4 / 22708
{
	if (Function_308(256))
	{
		return 0;
	}
	if (Function_308(262144))
	{
		return 0;
	}
	if (Function_119())
	{
		return 0;
	}
	if (!Function_308(1))
	{
		return 0;
	}
	if (!Function_308(4096))
	{
		return 0;
	}
	if (bParam0 && Function_118(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_308(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_118(int iParam0) //Position: 0x592A / 22826
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_119() //Position: 0x593B / 22843
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_120(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x5954 / 22868
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar4;
	struct<9> Var6;
	
	if (!uParam1)
	{
		uParam3 = (GET_CURRENT_GAME_TIME() + 0,5f);
		uParam1 = 1;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&Local_15 + 808))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_126(&uVar1, 20.0f, -1.0f, -1.0f);
			}
			bVar0++;
		}
	}
	else if (IS_ACTOR_RIDING(Function_283()))
	{
		if (GET_CURRENT_GAME_TIME() <= uParam3)
		{
			if (!uParam0)
			{
				SQUAD_GOALS_CLEAR(&Local_15 + 808);
				Function_125(&Local_15 + 808);
				Function_124(&Local_15 + 808, 1);
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(&Local_15 + 808))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						if (!IS_ACTOR_RIDING(&uVar1))
						{
							RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
						}
						MEMORY_CONSIDER_AS_ENEMY(&uVar1, Function_283());
						if (bVar0 == 0)
						{
							uVar2 = Vector(-3678,53f, 8,23f, 3498,37f);
						}
						else if (bVar0 == 1)
						{
							uVar2 = Vector(-3676,03f, 8,2f, 3486,63f);
						}
						TASK_SHOOT_FROM_POSITION(&uVar1, Function_283(), &uVar2);
					}
					bVar0++;
				}
				uParam2 = (GET_CURRENT_GAME_TIME() + 25.0f);
				Function_123(Function_283());
				uVar4 = Function_123(Function_283());
				uParam0 = 1;
			}
			else
			{
				Function_123(Function_283());
				vVar6 = Function_123(Function_283());
				if (!iParam4)
				{
					if (IS_ACTOR_VALID(Function_283()))
					{
						if (vVar6.x >= -3688,8f)
						{
							bVar0 = false;
							while (bVar0 <= SQUAD_GET_SIZE(&Local_15 + 808))
							{
								uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0);
								if (IS_ACTOR_VALID(&uVar1))
								{
									if (bVar0 == 0)
									{
										uVar8 = Vector(-3693.0f, 8,2f, 3501,8f);
									}
									else if (bVar0 == 1)
									{
										uVar8 = Vector(-3686,24f, 8,23f, 3492,59f);
									}
									TASK_SHOOT_FROM_POSITION(&uVar1, Function_283(), &uVar8);
								}
								bVar0++;
							}
							iParam4 = 1;
						}
					}
				}
				Function_123(Function_283());
				if ((VDIST(StackVal, Vector(-3686,99f, 8,89f, 3494,36f), Function_123(Function_283())) <= 16.0f || vVar6.z > 3480,35f) || GET_CURRENT_GAME_TIME() <= uParam2)
				{
					Function_121();
				}
			}
		}
	}
	else
	{
		Function_121();
	}
}

void Function_121() //Position: 0x5B72 / 23410
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&Local_15 + 808))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_15 + 808, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_RIDING(&uVar1))
			{
				RESET_ANIM_SET_FOR_ACTOR(&uVar1, 1);
			}
			MEMORY_CONSIDER_AS_ENEMY(&uVar1, Function_283());
			Function_126(&uVar1, 70.0f, -1.0f, -1.0f);
		}
		bVar0++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
	Function_122(&Local_15 + 808, 0);
	Global_42250 = 0;
	return;
}

void Function_122(var uParam0, int iParam1) //Position: 0x5BE6 / 23526
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
				MEMORY_PREFER_MELEE(&uVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

struct<8> Function_123(int iParam0) //Position: 0x5C35 / 23605
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_124(var uParam0, int iParam1) //Position: 0x5C47 / 23623
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
				MEMORY_ALLOW_SHOOTING(&uVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_125(int iParam0) //Position: 0x5C96 / 23702
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

void Function_126(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x5CCB / 23755
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

var Function_127(struct<845> Param0) //Position: 0x5D1C / 23836
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
				fVar4 = Function_110(&Param0, !GET_MOUNT(&bVar6) != "");
				bVar5 = VDIST(Var2, (&Param0 + 640));
				if (!bVar8)
				{
					if (!Function_44(&bVar6))
					{
						if (Function_130(&bVar6, bVar5, fVar4, bVar7))
						{
							Param0.f_844 = (Param0.f_844 - 1);
							iVar0 = 1;
							bVar8 = true;
						}
					}
				}
				Function_128(&Param0, &bVar6, bVar5, fVar4, &iParam1 + 96);
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
				fVar4 = Function_110(&Param0, 0);
				bVar5 = VDIST(Var2, *(&Param0 + 640));
				if (Function_130(&bVar6, bVar5, fVar4, bVar7))
				{
					bVar8 = true;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_128(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4) //Position: 0x5E69 / 24169
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
	if (!Function_129(&iParam0))
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
			Function_45(GET_MOUNT(&uParam1), &uParam1, -1.0f, -1.0f, 0, 0);
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

bool Function_129(struct<641> Param0) //Position: 0x5F7E / 24446
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

bool Function_130(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x5FCD / 24525
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
			if (!Function_131(&bParam0, 1.0f, (fParam2 + 10.0f), 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
				{
					Function_45(GET_MOUNT(&bParam0), &Global_54076, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(&bParam0));
				}
				if (IS_ACTOR_VALID(&bParam0))
				{
					SQUAD_LEAVE(&bParam0);
					TASK_CLEAR(&bParam0);
					MEMORY_CONSIDER_AS(&bParam0, &Global_54076, 2);
					Function_45(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bParam0)))
					{
						Function_43(GET_PERS_CHAR_FROM_ACTOR(&bParam0));
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
			if (!Function_131(&bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
				{
					Function_45(GET_MOUNT(&bParam0), &Global_54076, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(&bParam0));
				}
				if (IS_ACTOR_VALID(&bParam0))
				{
					SQUAD_LEAVE(&bParam0);
					TASK_CLEAR(&bParam0);
					MEMORY_CONSIDER_AS(&bParam0, &Global_54076, 2);
					Function_45(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(&bParam0)))
					{
						Function_43(GET_PERS_CHAR_FROM_ACTOR(&bParam0));
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

bool Function_131(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x61FA / 25082
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

int Function_132(int iParam0, bool bParam1) //Position: 0x621A / 25114
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_133(struct<1005> Param0) //Position: 0x622C / 25132
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
	Function_116(&Param0 + 748, 10.0f, &Param0 + 748, 10);
	switch (Param0.f_892)
	{
		case 0x00000000:
			Function_190("LAW_AI_STATE: INIT", 11);
			iVar0 = (Function_191(&Param0, 1) / 2);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_125(&Param0 + 808);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 2, iVar0);
			TASK_GO_TO_COORD_NONSTOP(0, &Param0 + 748, 3, 10.0f);
			*(&Param0 + 896) = SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 2, 4294967295);
			TASK_GO_NEAR_COORD(0, &Param0 + 712, 10.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_189(&Param0 + 808, 1);
			Param0.f_892 = 1;
		
		case 0x00000001:
			Function_188(&Param0, &Param1, 0);
			if (!Function_129(&Param0))
			{
				if (Function_187(Param1.f_104, &Param1 + 96, 1))
				{
					Param0.f_892 = 4;
					return 0;
				}
				if (Function_185(&Param0 + 808, &Param1 + 96, 20.0f, 1))
				{
					Param0.f_892 = 4;
					return 0;
				}
				if (Function_185(&Param0 + 816, &Param1 + 96, 20.0f, 1))
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
			Function_125(&Param0 + 808);
			Function_190("LAW_AI_STATE: ARREST - SHOOT", 11);
			if (!Function_129(&Param0) && Global_21542 >= 0,2f)
			{
				SQUAD_GOAL_ADD_COMBAT(&Param0 + 808, 2, 4294967295, 0);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 808, 1, &Param0 + 632, 3, 0);
				Function_189(&Param0 + 808, 1);
				Param0.f_628 = 0;
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 1, 4294967295);
				TASK_KILL_CHAR(false, &Param1 + 96);
				if (!Function_129(&Param0))
				{
					Function_189(&Param0 + 808, 0);
				}
				else
				{
					Function_189(&Param0 + 808, 1);
				}
				Param0.f_628 = 1;
				Param0.f_708 = GET_CURRENT_GAME_TIME();
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_125(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 816, 1, &Param0 + 632, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			if (&Param0 + 760 > 0.0f)
			{
				if (Param0 != 0 || Param0 != 1)
				{
					Function_188(&Param0, &Param1, 1);
				}
			}
			Param0.f_892 = 5;
		
		case 0x00000005:
			if (Function_181(&Param0))
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
				if (!Function_187(Param1.f_104, &Param1 + 96, 1))
				{
					if (!Function_180(&Param0, 5.0f))
					{
						if (!Function_178(StackVal, &Param0 + 808, *(&Param0 + 640), 20.0f))
						{
							if (!Param0.f_796 && !Function_129(&Param0))
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
							if (StackVal && !Function_178((StackVal && Function_178(Function_180(&Param0, 10.0f), &Param0 + 808, *(&Param0 + 640), 15.0f)), &Param0 + 808, *(&Param0 + 640), 5.0f))
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
				if (!Function_177(&Param0 + 808, &Param1 + 96, 0))
				{
					if (!Param0.f_796 && !Function_129(&Param0))
					{
						Param0.f_892 = 6;
						return 0;
					}
				}
			}
			if (Param0.f_704 != 0.0f)
			{
				if (Function_185(&Param0 + 808, Function_283(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_125(&Param0 + 808);
			Function_190("LAW_AI_STATE: GIVE CHASE", 11);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 1, 4294967295);
			TASK_GO_NEAR_ACTOR(0, &Param1 + 96, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_125(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 816, 1, &Param0 + 632, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_189(&Param0 + 808, 1);
			Param0.f_892 = 7;
		
		case 0x00000007:
			if (Function_181(&Param0))
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
			if (!Function_129(&Param0))
			{
				if (Function_178(StackVal, &Param0 + 808, *(&Param0 + 640), 20.0f))
				{
					if (!Param0.f_796)
					{
						Param0.f_892 = 4;
						return 0;
					}
				}
			}
			if (Function_178(StackVal, &Param0 + 808, *(&Param0 + 640), 80.0f))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (!bVar15)
			{
				if (Function_187(Param1.f_104, &Param1 + 96, 1))
				{
					if (!Param0.f_796)
					{
						Param0.f_892 = 4;
						return 0;
					}
				}
				if (!Function_180(&Param0, 20.0f) && !Global_43789 != Global_46866[1])
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
				if (Function_177(&Param0 + 808, &Param1 + 96, 0))
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
				if (Function_185(&Param0 + 808, Function_283(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_176(&Param0))
			{
				Param0.f_892 = 4;
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_190("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_125(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 920))
			{
				*(&Param0 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 536, Function_28(), *(&Param0 + 748), Vector(0.0f, 0.0f, 0.0f));
			}
			else
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
			TASK_SEARCH_FOR_OBJECT(0, &Param1 + 96, 0, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_125(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_189(&Param0 + 808, 1);
			Function_175(&Param0, 0);
			Param0.f_892 = 9;
		
		case 0x00000009:
			if (Function_181(&Param0))
			{
				return 0;
			}
			iVar18 = Function_172(&Param1 + 96, 3);
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
				if (Function_171(&Param0 + 816) >= 0)
				{
					SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 640));
				}
				else
				{
					SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
				}
			}
			if (Function_180(&Param0, 0x3f800000))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (!Function_180(&Param0, 20.0f) && !Global_6629)
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 10;
					return 0;
				}
			}
			break;
		
		case 0x0000000A:
			Function_190("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_125(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 920))
			{
				*(&Param0 + 920) = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 536, Function_28(), *(&Param0 + 748), Vector(0.0f, 0.0f, 0.0f));
			}
			else
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Param0 + 920, 30.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_125(&Param0 + 816);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Param0 + 920, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_189(&Param0 + 808, 1);
			Param0.f_892 = 11;
		
		case 0x0000000B:
			if (Function_181(&Param0))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(&Param0 + 920))
			{
				SET_OBJECT_POSITION(&Param0 + 920, *(&Param0 + 748));
			}
			if (Function_180(&Param0, 0x3f800000))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					return 0;
				}
			}
			if (Function_180(&Param0, 15.0f))
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 8;
					return 0;
				}
			}
			break;
		
		case 0x0000000D:
			Function_190("LAW_AI_STATE: SURROUND", 11);
			if (!Function_49(&Param0 + 808, 95, &Param1 + 96))
			{
				Function_169(&Param0 + 808, "law_surround", 5.0f, Param1.f_116, 30.0f, 0, 0);
			}
			Function_175(&Param0, 0);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_125(&Param0 + 808);
			if (!IS_OBJECT_VALID(&Param0 + 928))
			{
				*(&Param0 + 928) = Function_53(&Param1 + 96, 256);
			}
			if (!Function_168(&Param0))
			{
				if (IS_OBJECT_VALID(&Param0 + 928) && GET_OBJECT_TYPE(&Param0 + 928) != 9)
				{
					GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(&Param0 + 928), &vVar3);
					GET_OBJECT_POSITION(&Param0 + 928, &Var5);
					fVar13 = (5.0f + (Function_167(vVar3.x, vVar3.z) / 2.0f));
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
						fVar13 = (fVar13 + Function_167((5.0f + (Function_167(vVar3.x, vVar3.z) / 2.0f)), 20.0f));
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
				uVar9 = Function_164(&Param0 + 536, 2, fVar13);
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
					iVar14 = Function_162(StackVal, StackVal, Var7, Var5);
					Function_116(&Var7, 15.0f, &vVar3, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, (5 + bVar2), 1, 1);
					TASK_GO_TO_COORD_AND_STAY(0, &vVar3, 4, iVar14);
					bVar2++;
				}
				Function_24(&Param0 + 808, 1);
			}
			else
			{
				Function_190("LAW_AI_STATE: SURROUND (RIVERBOAT)", 11);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&Param0 + 808, 0, &Param0 + 632, 3, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 1, 0, 4294967295);
				TASK_KILL_CHAR(false, &Param1 + 96);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			}
			Function_160(&Param0 + 808);
			Function_159(&Param0 + 808, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
			SQUAD_GOALS_CLEAR(&Param0 + 816);
			Function_125(&Param0 + 816);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 816, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Param1 + 96, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 816, 15);
			Function_189(&Param0 + 808, 1);
			Param0.f_892 = 14;
		
		case 0x0000000E:
			if (!Param0.f_788)
			{
				if (!Param0.f_796)
				{
					Param0.f_892 = 4;
					Function_159(&Param0 + 808, 0);
					Function_24(&Param0 + 808, 0);
					return 0;
				}
			}
			if (!Function_168(&Param0))
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
				if (Function_185(&Param0 + 808, Function_283(), 25.0f, 0))
				{
					Param0.f_704 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000F:
			Function_190("LAW_AI_STATE: SUBMIT CUTSCENE", 11);
			Param0.f_892 = 16;
			Function_158(&Global_119935, 0x1000000);
			Function_154(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0x3f800000, 0);
			Function_153(&Param0 + 808, &Param1 + 96, 2);
		
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
				Function_15(2048);
			}
			iVar1 = 250;
			break;
		
		case 0x00000011:
			if (HUD_IS_FADED())
			{
				Function_147(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
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
			Function_190("LAW_AI_STATE: BRIBE CUTSCENE", 11);
			Function_144("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			Param0.f_892 = 22;
			iVar11 = Function_142(&Param1 + 96, &Param0 + 808);
			GET_POSITION(&Param1 + 96, &Param0 + 724);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			SQUAD_GOAL_ADD_MEET_AT_POSITION(&Param0 + 808, 1, &Param0 + 724, 4294967295, 5.0f, 1);
			ACTOR_HOLSTER_WEAPON(&Param1 + 96, 1);
			Function_154(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			if (IS_ACTOR_HOGTIED(&iVar11))
			{
				FREE_FROM_HOGTIE(&iVar11);
			}
			if (Function_138(&fVar22, &Var23))
			{
				SET_ACTOR_HEADING(&Param1 + 96, fVar22, 1);
			}
			else
			{
				fVar22 = Function_137(&Param1 + 96);
				Function_123(&iVar11);
				Var23 = Function_123(&iVar11);
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
			AUDIO_STOP_PAIN(Function_283());
			SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_283(), "PLAYER_OFFER_LAW_BRIBE", 1, 1, 0, 0);
			*(&Param0 + 984) = Function_134(StackVal, &Param1 + 96, fVar22, Var23);
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
			Function_147(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (&Param0 + 984 != "")
			{
				REMOVE_CAMERA_FROM_CHANNEL(&Param0 + 984, 0);
				DESTROY_OBJECT(&Param0 + 984);
				RELEASE_OBJECT_REF(&Param0 + 984);
			}
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
			iVar11 = Function_142(&Param1 + 96, &Param0 + 808);
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
			Function_190("LAW_AI_STATE: CLEANUP", 11);
			SQUAD_GOALS_CLEAR(&Param0 + 808);
			Function_125(&Param0 + 808);
			Function_24(&Param0 + 808, 0);
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

int Function_134(int iParam0, var uParam1, struct<2> Param2) //Position: 0x7648 / 30280
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	uVar0 = CREATE_CAMERA_IN_LAYOUT(&Global_39918, Function_28(), 0);
	INIT_CAMERA_FROM_GAME_CAMERA(&uVar0);
	GET_CAMERA_POSITION(&uVar0, &Var5);
	Function_123(&iParam0);
	Function_135(StackVal, StackVal, StackVal, Function_123(&iParam0), uParam1, Param2, Var5, &Var1, &Var3);
	SET_CAMERA_POSITION(&uVar0, Var1);
	SET_CAMERA_TARGET_POSITION(&uVar0, Var3, 0);
	if (!Function_112(StackVal, Var1))
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

int Function_135(struct<2> Param0, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, struct<2> Param8) //Position: 0x76CE / 30414
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
		if (!Function_112(StackVal, Var14[iVar352]))
		{
			if (FIND_INTERSECTION(&(Var14[iVar352]), &Var0, &uVar31, &uVar33, 1, 4294967295, 4194304))
			{
				Var14[iVar352] = Vector(0.0f, 0.0f, 0.0f);
			}
		}
		iVar35++;
	}
	if (!Function_112(StackVal, Var14[02]))
	{
		Var14[02].f_4 = StackVal;
	}
	if (!Function_112(StackVal, Var14[12]))
	{
		Var14[12].f_4 = StackVal;
	}
	if (!Function_112(StackVal, Var14[22]))
	{
		Var14[22].f_4 = StackVal;
	}
	if (!Function_112(StackVal, Var14[32]))
	{
		Var14[32].f_4 = StackVal;
	}
	if (!Function_112(StackVal, Var14[42]))
	{
		Var14[42].f_4 = StackVal;
	}
	if (!Function_112(StackVal, Var14[52]))
	{
		Var14[52].f_4 = StackVal;
	}
	if (!Function_112(StackVal, Var14[62]))
	{
		Var14[62].f_4 = StackVal;
	}
	if (!Function_112(StackVal, Var14[72]))
	{
		Var14[72].f_4 = StackVal;
	}
	Function_136(StackVal, Param5, &Var14);
	uParam7 = Function_136(StackVal, Param5, &Var14);
	return 1;
}

struct<8> Function_136(struct<2> Param0, struct<2>[] Param2) //Position: 0x79D2 / 31186
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	
	bVar3 = 1E+08.0f;
	iVar2 = 0;
	while (iVar2 <= Param2)
	{
		if (!Function_112(StackVal, Param2[iVar22]))
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

float Function_137(int iParam0) //Position: 0x7A3C / 31292
{
	return GET_HEADING(&iParam0);
}

bool Function_138(var uParam0, int iParam1) //Position: 0x7A48 / 31304
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
	
	Function_123(GET_PLAYER_ACTOR(0));
	Var2 = Function_123(GET_PLAYER_ACTOR(0));
	uVar4 = Function_137(GET_PLAYER_ACTOR(0));
	uVar5 = Vector(0.0f, 0.0f, -1,7f);
	GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &uVar5, &Var0);
	if (Function_141(StackVal, StackVal, Var0, Var2))
	{
		if (Function_140(StackVal, StackVal, Var0, Var2) > 0,1f)
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
		Function_139(StackVal, StackVal, Var0, Var2, 10.0f);
		Var0 = Function_139(StackVal, StackVal, Var0, Var2, 10.0f);
		if (Function_141(StackVal, StackVal, Var0, Var2))
		{
			fVar11 = Function_140(StackVal, StackVal, Var0, Var2);
			if (fVar8 > 0.0f || fVar11 > fVar8)
			{
				iVar7 = Function_162(StackVal, StackVal, Var2, Var0);
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

struct<8> Function_139(vector3 vParam0) //Position: 0x7B25 / 31525
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

float Function_140(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7B9F / 31647
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

bool Function_141(vector3 vParam0) //Position: 0x7BDF / 31711
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

var Function_142(bool bParam0, int iParam1) //Position: 0x7C4A / 31818
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
		if (Function_143(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &bParam0) > fVar2)
		{
			fVar2 = Function_143(SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0), &bParam0);
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

float Function_143(bool bParam0, bool bParam1) //Position: 0x7D0D / 32013
{
	var uVar0;
	int iVar2;
	bool bVar4;
	
	GET_POSITION(&bParam0, &uVar0);
	GET_POSITION(&bParam1, &iVar2);
	bVar4 = Function_111(&uVar0, &iVar2);
	return bVar4;
}

void Function_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x7D2E / 32046
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_145(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_145(int iParam0) //Position: 0x7DB3 / 32179
{
	char* cVar0[16];
	
	if (!Function_146())
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

bool Function_146() //Position: 0x7DF2 / 32242
{
	if (Function_115(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_147(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x7E0D / 32269
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
		uVar0 = Function_283();
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
		Function_151(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_150();
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
	Function_148(&iParam9, &iParam10);
}

void Function_148(var uParam0, bool bParam1) //Position: 0x7EDC / 32476
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
		Function_149();
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

void Function_149() //Position: 0x7FAB / 32683
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

void Function_150() //Position: 0x8040 / 32832
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_151(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x8055 / 32853
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
	Function_39(iParam0, TO_FLOAT(bParam1), 1);
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_152(iParam0);
	return 1;
}

void Function_152(int iParam0) //Position: 0x827D / 33405
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

void Function_153(var uParam0, var uParam1, bool bParam2) //Position: 0x831B / 33563
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

void Function_154(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x8367 / 33639
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
	Function_150();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_283();
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
				Function_123(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_28(), 2,802597E-45f, Function_123(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_151(19, 1, 0, 0);
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
	if (iParam10 && !Function_146())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_157()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_157()));
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
	if (Function_156(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_155(0x4000000);
	}
	if (Function_156(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_155(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_155(int iParam0) //Position: 0x8619 / 34329
{
	int iVar0;
	
	if (Function_115(iParam0, 1) && Function_115(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_156(int iParam0) //Position: 0x864D / 34381
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_157() //Position: 0x8669 / 34409
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

void Function_158(var uParam0, int iParam1) //Position: 0x86F7 / 34551
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_159(var uParam0, int iParam1) //Position: 0x8708 / 34568
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

void Function_160(bool bParam0) //Position: 0x8757 / 34647
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	uVar0 = Function_161();
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

var Function_161() //Position: 0x87C5 / 34757
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

float Function_162(struct<2> Param0, struct<2> Param2) //Position: 0x8836 / 34870
{
	var uVar0;
	
	Function_163(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_163(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x8850 / 34896
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

var Function_164(var uParam0, int iParam1, float fParam2) //Position: 0x8874 / 34932
{
	struct<8> Var0;
	int iVar8;
	bool bVar9;
	struct<2> Var10;
	
	if (!IS_OBJECT_VALID(&(Global_39559[iParam1])))
	{
		return "";
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("llr") };
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

struct<32> Function_165(char* cParam0) //Position: 0x88F2 / 35058
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_166("0", &cVar8, ""), 4);
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

struct<32> Function_166(char* cParam0) //Position: 0x895E / 35166
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_167(int iParam0, int iParam1) //Position: 0x8980 / 35200
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_168(struct<641> Param0) //Position: 0x8993 / 35219
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

void Function_169(int iParam0, char* cParam1) //Position: 0x89B7 / 35255
{
	int iVar0;
	
	iVar0 = Function_170();
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

var Function_170() //Position: 0x8A20 / 35360
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

int Function_171(int iParam0) //Position: 0x8A5F / 35423
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

var Function_172(int iParam0, int iParam1) //Position: 0x8AB5 / 35509
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
	if (!Function_174(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
	iVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_173(&uVar1, &iVar2);
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

void Function_173(var uParam0, int iParam1) //Position: 0x8B68 / 35688
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

bool Function_174(int iParam0) //Position: 0x8B9E / 35742
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_175(struct<677> Param0) //Position: 0x8BB3 / 35763
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

bool Function_176(struct<1009> Param0) //Position: 0x8BE5 / 35813
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

bool Function_177(int iParam0, int iParam1, bool bParam2) //Position: 0x8C2A / 35882
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

bool Function_178(var uParam0, struct<2> Param1, float fParam3) //Position: 0x8C9D / 35997
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (Function_112(StackVal, Param1))
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
				Function_179(&uVar1);
				if (VDIST(Function_179(&uVar1), Param1) >= fParam3)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

struct<8> Function_179(int iParam0) //Position: 0x8D12 / 36114
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

bool Function_180(struct<573> Param0) //Position: 0x8D7E / 36222
{
	if ((GET_CURRENT_GAME_TIME() - Param0.f_572) > &fParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_181(struct<1009> Param0) //Position: 0x8D98 / 36248
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
			Function_182(&Param0);
			Var1 = Function_182(&Param0);
			if (!Function_112(StackVal, Var1))
			{
				if (SQUAD_IS_VALID(&Param0 + 808))
				{
					SQUAD_GOALS_CLEAR(&Param0 + 808);
					Function_125(&Param0 + 808);
					Function_190("LAW_AI_STATE: STAY IN COUNTRY", 11);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Param0 + 808, 0, 0, 4294967295);
					TASK_GO_NEAR_COORD(0, &Var1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 808, 15);
				}
				if (SQUAD_IS_VALID(&Param0 + 816))
				{
					SQUAD_GOALS_CLEAR(&Param0 + 816);
					Function_125(&Param0 + 816);
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

struct<8> Function_182(struct<1009> Param0) //Position: 0x8EB4 / 36532
{
	int iVar0;
	
	iVar0 = Function_184(&Param0);
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
	Function_183();
	return StackVal, Function_183();
}

struct<8> Function_183() //Position: 0x8F92 / 36754
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

var Function_184(int iParam0) //Position: 0x8F9C / 36764
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

bool Function_185(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x9047 / 36935
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
					if (!Function_186(&uVar1, 1) || iParam3)
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

bool Function_186(int iParam0, int iParam1) //Position: 0x90EC / 37100
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

bool Function_187(int iParam0, int iParam1, bool bParam2) //Position: 0x913E / 37182
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
		Function_54(&Global_39554);
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
		Function_54(&Global_39554);
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

void Function_188(int iParam0, struct<117> Param1) //Position: 0x92CE / 37582
{
	if (&iParam0 + 760 > 0.0f)
	{
		if ((Function_185(&iParam0 + 808, &Param1 + 96, 20.0f, 1) || Function_180(&iParam0, 0x3f800000)) || iParam2)
		{
			if (!Function_49(&iParam0 + 808, 59, &Param1 + 96))
			{
				if (GET_WEAPON_IN_HAND(&Param1 + 96) == 4294967295)
				{
					Function_169(&iParam0 + 808, "law_give_up_unarmed", 2,5f, Param1.f_116, 20.0f, 1, 0);
				}
				else
				{
					Function_169(&iParam0 + 808, "law_give_up", 2,5f, Param1.f_116, 20.0f, 1, 0);
				}
			}
			Function_175(&iParam0, 1);
		}
	}
	return;
}

void Function_189(var uParam0, int iParam1) //Position: 0x9390 / 37776
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

void Function_190(struct<16> Param0) //Position: 0x93DC / 37852
{
	if (!Function_156(128))
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

int Function_191(int iParam0, bool bParam1) //Position: 0x9419 / 37913
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

bool Function_192(struct<673> Param0) //Position: 0x94A1 / 38049
{
	int iVar0;
	float fVar1;
	
	fVar1 = Function_195(&Param0, &Param1 + 96);
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
			if (!Function_284(Global_119935, 8))
			{
				Function_278(&Global_54076, 8, 2, 0);
			}
		}
	}
	if (&bParam2)
	{
		if (Global_6629 && Global_6648)
		{
			if (Function_187(Param1.f_108, GET_OBJECT_FROM_ACTOR(&Param1 + 96), 1))
			{
				Global_6648 = 0;
				*(&Param0 + 724) = *(&Param0 + 640);
				GET_ACTOR_VELOCITY(&Param1 + 96, &Param0 + 736);
				Param0.f_672 = GET_CURRENT_GAME_TIME();
				Function_194(&Param0 + 808, &Param1 + 96, 0);
				if (!Function_284(Global_119935, 16))
				{
					Function_278(&Global_54076, 16, 2, 0);
				}
			}
		}
	}
	Param0.f_572 = Function_167(Function_167(Param0.f_664, Param0.f_668), Param0.f_672);
	Global_42254 = Function_57(&Param0);
	Global_42255 = Param0.f_572;
	if (GET_CURRENT_GAME_TIME() < (Param0.f_572 + Global_42254))
	{
		if (Function_193(&Param0 + 808) >= 0)
		{
			if (!Function_49(&Param0 + 808, 22, &Param1 + 96))
			{
				Function_169(&Param0 + 808, "law_go_unwanted", 5.0f, Param1.f_116, 20.0f, 0, 0);
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
				if (!Function_284(Global_119935, 4096))
				{
					Function_278(&Global_54076, 4096, 2, 0);
				}
			}
		}
		if (GET_CURRENT_GAME_TIME() < (Param0.f_568 + 20.0f))
		{
			if (Function_193(&Param0 + 808) >= 0)
			{
				if (!Function_49(&Param0 + 808, 22, &Param1 + 96))
				{
					Function_169(&Param0 + 808, "law_wanted_lost_track", 2,5f, Param1.f_116, 20.0f, 0, 1);
				}
			}
			Param0.f_568 = GET_CURRENT_GAME_TIME();
		}
	}
	return iVar0;
}

int Function_193(int iParam0) //Position: 0x96DB / 38619
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

void Function_194(var uParam0, var uParam1, bool bParam2) //Position: 0x972E / 38702
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

var Function_195(int iParam0, int iParam1) //Position: 0x97A6 / 38822
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
	uVar0 = GET_LASSO_TARGET(Function_283());
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (Function_196(&uVar0, &iParam0 + 808, 0))
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
				iVar3 = Function_167(MEMORY_GET_POSITION_LAST_KNOWN_TIME(&uVar2, &iParam1), iVar3);
			}
		}
		bVar1++;
	}
	return iVar3;
}

bool Function_196(int iParam0, int iParam1, bool bParam2) //Position: 0x9861 / 39009
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

void Function_197(struct<1009> Param0) //Position: 0x98A9 / 39081
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (Param0.f_856 <= 12)
	{
		if (Param0.f_844 > 1)
		{
			iVar0 = Function_201(Param0.f_1008, Param0);
			if (Param0.f_856 <= iVar0)
			{
				if (Param0.f_860 < (Param0.f_856 - 2) && Param0.f_844 > Param0.f_840)
				{
					iVar1 = RAND_INT_RANGE(0, (iVar0 - 1));
					iVar2 = 0;
					bVar3 = false;
					while (iVar2 > iVar0 && !bVar3)
					{
						if (!(*&Param0 + 384)[iVar1])
						{
							bVar3 = true;
						}
						else
						{
							iVar1++;
							iVar2++;
							if (iVar1 > iVar0)
							{
								iVar1 = 0;
							}
						}
					}
					Function_198(&Param0, iVar1, 0);
					(*&Param0 + 384)[iVar1] = 1;
					Param0.f_856++;
				}
			}
		}
	}
	return;
}

void Function_198(struct<1009> Param0) //Position: 0x9969 / 39273
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
								Function_199(&Param0 + 80, 184, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 185, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 186, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 187, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 188, 3, 0);
								break;
						}
					}
					else if (Global_43787 == 2)
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_199(&Param0 + 80, 438, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 424, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 426, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 434, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 435, 3, 0);
								break;
							
							case 0x00000005:
								Function_199(&Param0 + 80, 447, 3, 0);
								break;
							
							case 0x00000006:
								Function_199(&Param0 + 80, 448, 3, 0);
								break;
							
							case 0x00000007:
								Function_199(&Param0 + 80, 184, 3, 0);
								break;
							
							case 0x00000008:
								Function_199(&Param0 + 80, 185, 3, 0);
								break;
							
							case 0x00000009:
								Function_199(&Param0 + 80, 186, 3, 0);
								break;
							
							case 0x0000000A:
								Function_199(&Param0 + 80, 187, 3, 0);
								break;
							
							case 0x0000000B:
								Function_199(&Param0 + 80, 188, 3, 0);
								break;
						}
					}
					else if (Global_43787 == 0)
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_199(&Param0 + 80, 436, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 437, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 440, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 441, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 442, 3, 0);
								break;
							
							case 0x00000005:
								Function_199(&Param0 + 80, 443, 3, 0);
								break;
							
							case 0x00000006:
								Function_199(&Param0 + 80, 444, 3, 0);
								break;
							
							case 0x00000007:
								Function_199(&Param0 + 80, 445, 3, 0);
								break;
							
							case 0x00000008:
								Function_199(&Param0 + 80, 446, 3, 0);
								break;
							
							case 0x00000009:
								Function_199(&Param0 + 80, 425, 3, 0);
								break;
							
							case 0x0000000A:
								Function_199(&Param0 + 80, 427, 3, 0);
								break;
							
							case 0x0000000B:
								Function_199(&Param0 + 80, 428, 3, 0);
								break;
							
							case 0x0000000C:
								Function_199(&Param0 + 80, 429, 3, 0);
								break;
							
							case 0x0000000D:
								Function_199(&Param0 + 80, 430, 3, 0);
								break;
							
							case 0x0000000E:
								Function_199(&Param0 + 80, 431, 3, 0);
								break;
							
							case 0x0000000F:
								Function_199(&Param0 + 80, 432, 3, 0);
								break;
							
							case 0x00000010:
								Function_199(&Param0 + 80, 433, 3, 0);
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
								Function_199(&Param0 + 80, 521, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 522, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 523, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 529, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 530, 3, 0);
								break;
							
							case 0x00000005:
								Function_199(&Param0 + 80, 531, 3, 0);
								break;
						}
					}
					else if (Global_43789 == Global_46850[0])
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_199(&Param0 + 80, 461, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 462, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 463, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 464, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 465, 3, 0);
								break;
							
							case 0x00000005:
								Function_199(&Param0 + 80, 466, 3, 0);
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0x00000000:
								Function_199(&Param0 + 80, 455, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 456, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 457, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 458, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 459, 3, 0);
								break;
							
							case 0x00000005:
								Function_199(&Param0 + 80, 460, 3, 0);
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
							Function_199(&Param0 + 80, 449, 3, 0);
							break;
						
						case 0x00000001:
							Function_199(&Param0 + 80, 450, 3, 0);
							break;
						
						case 0x00000002:
							Function_199(&Param0 + 80, 451, 3, 0);
							break;
						
						case 0x00000003:
							Function_199(&Param0 + 80, 452, 3, 0);
							break;
						
						case 0x00000004:
							Function_199(&Param0 + 80, 453, 3, 0);
							break;
						
						case 0x00000005:
							Function_199(&Param0 + 80, 454, 3, 0);
							break;
					}
				}
				else if (Param0.f_1008 == 1)
				{
					switch (iParam1)
					{
						case 0x00000000:
							Function_199(&Param0 + 80, 379, 3, 0);
							break;
						
						case 0x00000001:
							Function_199(&Param0 + 80, 380, 3, 0);
							break;
						
						case 0x00000002:
							Function_199(&Param0 + 80, 381, 3, 0);
							break;
						
						case 0x00000003:
							Function_199(&Param0 + 80, 391, 3, 0);
							break;
						
						case 0x00000004:
							Function_199(&Param0 + 80, 392, 3, 0);
							break;
						
						case 0x00000005:
							Function_199(&Param0 + 80, 393, 3, 0);
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
								Function_199(&Param0 + 80, 397, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 398, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 399, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 400, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 401, 3, 0);
								break;
							
							case 0x00000005:
								Function_199(&Param0 + 80, 402, 3, 0);
								break;
							
							case 0x00000006:
								Function_199(&Param0 + 80, 403, 3, 0);
								break;
							
							case 0x00000007:
								Function_199(&Param0 + 80, 404, 3, 0);
								break;
							
							case 0x00000008:
								Function_199(&Param0 + 80, 405, 3, 0);
								break;
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								Function_199(&Param0 + 80, 415, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 416, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 417, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 418, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 419, 3, 0);
								break;
							
							case 0x00000005:
								Function_199(&Param0 + 80, 420, 3, 0);
								break;
							
							case 0x00000006:
								Function_199(&Param0 + 80, 421, 3, 0);
								break;
							
							case 0x00000007:
								Function_199(&Param0 + 80, 422, 3, 0);
								break;
							
							case 0x00000008:
								Function_199(&Param0 + 80, 423, 3, 0);
								break;
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								Function_199(&Param0 + 80, 406, 3, 0);
								break;
							
							case 0x00000001:
								Function_199(&Param0 + 80, 407, 3, 0);
								break;
							
							case 0x00000002:
								Function_199(&Param0 + 80, 408, 3, 0);
								break;
							
							case 0x00000003:
								Function_199(&Param0 + 80, 409, 3, 0);
								break;
							
							case 0x00000004:
								Function_199(&Param0 + 80, 410, 3, 0);
								break;
							
							case 0x00000005:
								Function_199(&Param0 + 80, 411, 3, 0);
								break;
							
							case 0x00000006:
								Function_199(&Param0 + 80, 412, 3, 0);
								break;
							
							case 0x00000007:
								Function_199(&Param0 + 80, 413, 3, 0);
								break;
							
							case 0x00000008:
								Function_199(&Param0 + 80, 414, 3, 0);
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
					Function_199(&Param0 + 80, 184, 3, 0);
					break;
				
				case 0x00000001:
					Function_199(&Param0 + 80, 185, 3, 0);
					break;
				
				case 0x00000002:
					Function_199(&Param0 + 80, 186, 3, 0);
					break;
				
				case 0x00000003:
					Function_199(&Param0 + 80, 187, 3, 0);
					break;
				
				case 0x00000004:
					Function_199(&Param0 + 80, 188, 3, 0);
					break;
			}
		}
		else if (Global_43787 == 2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					Function_199(&Param0 + 80, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_199(&Param0 + 80, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_199(&Param0 + 80, 438, 3, 0);
					break;
				
				case 0x00000003:
					Function_199(&Param0 + 80, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_199(&Param0 + 80, 443, 3, 0);
					break;
				
				case 0x00000005:
					Function_199(&Param0 + 80, 447, 3, 0);
					break;
				
				case 0x00000006:
					Function_199(&Param0 + 80, 448, 3, 0);
					break;
				
				case 0x00000007:
					Function_199(&Param0 + 80, 184, 3, 0);
					break;
				
				case 0x00000008:
					Function_199(&Param0 + 80, 185, 3, 0);
					break;
				
				case 0x00000009:
					Function_199(&Param0 + 80, 186, 3, 0);
					break;
				
				case 0x0000000A:
					Function_199(&Param0 + 80, 187, 3, 0);
					break;
				
				case 0x0000000B:
					Function_199(&Param0 + 80, 188, 3, 0);
					break;
			}
		}
		else if (Global_43787 == 0)
		{
			switch (iParam1)
			{
				case 0x00000000:
					Function_199(&Param0 + 80, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_199(&Param0 + 80, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_199(&Param0 + 80, 440, 3, 0);
					break;
				
				case 0x00000003:
					Function_199(&Param0 + 80, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_199(&Param0 + 80, 442, 3, 0);
					break;
				
				case 0x00000005:
					Function_199(&Param0 + 80, 443, 3, 0);
					break;
				
				case 0x00000006:
					Function_199(&Param0 + 80, 444, 3, 0);
					break;
				
				case 0x00000007:
					Function_199(&Param0 + 80, 445, 3, 0);
					break;
				
				case 0x00000008:
					Function_199(&Param0 + 80, 446, 3, 0);
					break;
				
				case 0x00000009:
					Function_199(&Param0 + 80, 425, 3, 0);
					break;
				
				case 0x0000000A:
					Function_199(&Param0 + 80, 427, 3, 0);
					break;
				
				case 0x0000000B:
					Function_199(&Param0 + 80, 428, 3, 0);
					break;
				}
		}
	}
	else if (Param0.f_1008 == 1)
	{
		switch (iParam1)
		{
			case 0x00000000:
				Function_199(&Param0 + 80, 379, 3, 0);
				break;
			
			case 0x00000001:
				Function_199(&Param0 + 80, 380, 3, 0);
				break;
			
			case 0x00000002:
				Function_199(&Param0 + 80, 381, 3, 0);
				break;
			
			case 0x00000003:
				Function_199(&Param0 + 80, 391, 3, 0);
				break;
			
			case 0x00000004:
				Function_199(&Param0 + 80, 392, 3, 0);
				break;
			
			case 0x00000005:
				Function_199(&Param0 + 80, 393, 3, 0);
				break;
			
			case 0x00000006:
				Function_199(&Param0 + 80, 395, 3, 0);
				break;
			
			case 0x00000007:
				Function_199(&Param0 + 80, 396, 3, 0);
				break;
			}
	}
	return;
}

var Function_199(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA639 / 42553
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_14(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_200(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_200(&(Param0[iVar02]), 8);
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

void Function_200(struct<13> Param0) //Position: 0xA715 / 42773
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

int Function_201(int iParam0, int iParam1) //Position: 0xA728 / 42792
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

void Function_202() //Position: 0xA82F / 43055
{
	if (Global_6629)
	{
		if (Function_205(32768))
		{
			Function_203(32768);
		}
	}
	else if (!Function_205(32768))
	{
		Function_3(32768);
	}
	return;
}

void Function_203(int iParam0) //Position: 0xA861 / 43105
{
	Function_204(&Global_43580, iParam0);
	return;
}

void Function_204(var uParam0, int iParam1) //Position: 0xA86F / 43119
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_205(int iParam0) //Position: 0xA897 / 43159
{
	return Function_206(&Global_43580, iParam0);
}

int Function_206(var uParam0, int iParam1) //Position: 0xA8A5 / 43173
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_207(int iParam0) //Position: 0xA8C2 / 43202
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

void Function_208(struct<845> Param0) //Position: 0xA923 / 43299
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(&Param0 + 808))
	{
		iVar0 = Function_210(&Param0);
		iVar1 = (8 - SQUAD_GET_SIZE(&Param0 + 808));
		iVar2 = (Param0.f_840 - Param0.f_844);
		if (iVar1 <= 3)
		{
			iVar1 = 3;
		}
		if (((iVar2 + SQUAD_GET_SIZE(&Param0 + 808)) - 3) < 8)
		{
			iVar1 = 8;
		}
		if (iVar0 > iVar1)
		{
			if (!Param0.f_624)
			{
				Function_209(&Param0, 0);
				Param0.f_624 = 1;
			}
		}
		else if (Param0.f_624)
		{
			Function_209(&Param0, 1);
			Param0.f_624 = 0;
		}
	}
	return;
}

void Function_209(int iParam0, int iParam1) //Position: 0xA9B6 / 43446
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
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					DECOR_SET_BOOL(&uVar1, "CanBeLasso", iParam1);
				}
			}
			bVar0++;
		}
	}
	return;
}

var Function_210(int iParam0) //Position: 0xAA1B / 43547
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	if (SQUAD_IS_VALID(&iParam0 + 808))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0 + 808))
		{
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 808, bVar0);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (IS_ACTOR_ALIVE(&uVar2))
				{
					if (IS_ACTOR_HOGTIED(&uVar2))
					{
						iVar1++;
					}
				}
			}
			bVar0++;
		}
	}
	return iVar1;
}

void Function_211(struct<893> Param0) //Position: 0xAA7E / 43646
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

void Function_212(struct<893> Param0) //Position: 0xAAB9 / 43705
{
	if ((((((Param0.f_772 || Param0.f_768) || Param0.f_776) || Param0.f_780) || Param0.f_796) || Param0.f_800) || Param0.f_892 < 14)
	{
		return;
	}
	if ((((Global_40060[Param1.f_116] <= 15 || (GET_CURRENT_GAME_TIME() <= (Param0.f_704 + 20.0f) && Param0.f_704 < 0.0f)) || Param0 != 2) || Param0 != 3) || 0)
	{
		Function_213(&Param0, &Param1);
	}
	return;
}

void Function_213(struct<773> Param0) //Position: 0xAB39 / 43833
{
	bool bVar0;
	var uVar1;
	
	if (!Function_284(Global_119935, 8192))
	{
		Function_278(&Global_54076, 8192, 2, 0);
	}
	Function_49(&Param0 + 808, 58, &iParam1 + 96);
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

void Function_214(struct<1029> Param0) //Position: 0xABDB / 43995
{
	int iVar0;
	bool bVar1;
	
	if (GET_CURRENT_GAME_TIME() <= Param0.f_1028)
	{
		iVar0 = &Param0 + 928;
		if (IS_LAYOUTREF_VALID(&Global_46715))
		{
			*(&Param0 + 928) = Function_72(&iParam1 + 96, 258);
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

void Function_215(struct<1001> Param0) //Position: 0xAD1A / 44314
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
		if (!Function_284(Global_119936, 32768))
		{
			Function_278(Function_283(), 32768, 3, 0);
		}
	}
	if ((((((Function_219(&Param1 + 96, 0, 0) || Global_6648) || Function_191(&Param0, 1) != 0) || Global_99146) || Param0.f_780) || IS_ACTOR_RAGDOLL(&Param1 + 96)) || !IS_ACTOR_ALIVE(&Param1 + 96))
	{
		if (Param0.f_796 && !Param0.f_768)
		{
			Param0.f_796 = 0;
			Param0.f_800 = 0;
			RESET_ANIM_SET_FOR_ACTOR(&Param1 + 96, 0);
			Function_218(&Param0, &Param1);
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
			Function_218(&Param0, &Param1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96));
		return;
	}
	fVar0 = Function_217(GET_TIME_SINCE_LAST_MOVESTICK_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96)), GET_TIME_SINCE_LAST_BUTTON_INPUT(GET_PLAYER_PADINDEX(&Param1 + 96)));
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
								Function_123(&iVar2);
								Var4 = Function_123(&iVar2);
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
				AUDIO_STOP_PAIN(Function_283());
				if (Function_216() > 3)
				{
					SAY_SINGLE_LINE_STRING(Function_283(), "PLAYER_ARRESTED_HONORABLE", true, true, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING(Function_283(), "PLAYER_ARRESTED_DISHONORABLE", true, true, 0, 0, true, false);
				}
				AI_DONT_HARM_ACTOR(&Param1 + 96);
				Function_125(&Param0 + 808);
				SQUAD_GOALS_CLEAR(&Param0 + 808);
				bVar8 = false;
				while (bVar8 <= SQUAD_GET_SIZE(&Param0 + 808))
				{
					iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 808, bVar8);
					if (IS_ACTOR_VALID(&iVar2))
					{
						Function_123(&iVar2);
						Function_123(&Param1 + 96);
						bVar9 = VDIST(Function_123(&iVar2), Function_123(&Param1 + 96));
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
					iVar11 = Function_142(&Param1 + 96, &Param0 + 808);
					if (IS_ACTOR_VALID(&iVar11))
					{
						if (Function_216() >= 4)
						{
							SAY_SINGLE_LINE_CONTEXT(&iVar11, true, &Param1 + 96, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_216() <= 2)
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
	else if (((((fVar0 < 0,5f && GET_WEAPON_IN_HAND(&Param1 + 96) != 4294967295) && Function_18(Param1.f_116) >= 1500) && !Param0.f_800) && !Param0.f_768) && !Param0.f_796)
	{
		AI_DONT_HARM_ACTOR(&Param1 + 96);
		Param0.f_800 = 1;
	}
	else
	{
		if (Param0.f_796 && !Param0.f_768)
		{
			Param0.f_796 = 0;
			Function_218(&Param0, &Param1);
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

int Function_216() //Position: 0xB269 / 45673
{
	return Global_21369.f_244;
}

var Function_217(int iParam0, int iParam1) //Position: 0xB274 / 45684
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_218(struct<893> Param0) //Position: 0xB287 / 45703
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

bool Function_219(int iParam0, bool bParam1, bool bParam2) //Position: 0xB2BF / 45759
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
	if (Function_251(&iParam0))
	{
		return 1;
	}
	if (Function_221(&iParam0))
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
	if (Function_220())
	{
		return 1;
	}
	return 0;
}

bool Function_220() //Position: 0xB383 / 45955
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_221(int iParam0) //Position: 0xB39A / 45978
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

void Function_222(struct<893> Param0) //Position: 0xB3A6 / 45990
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	if (!Function_308(524288))
	{
		if (Function_185(&Param0 + 808, &Param1 + 96, 10.0f, 1))
		{
			if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(Param1.f_104, &Param1 + 96))
			{
				Param0.f_596 = 1.0f;
			}
			if (!Function_284(Global_119935, 32))
			{
				Function_278(&Global_54076, 32, 2, 0);
			}
		}
		return;
	}
	if (((((!Param0.f_768 && !Param0.f_796) && !Param0.f_776) && !Param0.f_780) && Function_308(0x2000000)) && Function_191(&Param0, 1) < 0)
	{
		if (Function_250(&Param0 + 808, &Param1 + 96, 10.0f, 0,5f))
		{
			bVar1 = false;
			if (Function_248(&Param0 + 808, &Param1 + 96, 25.0f, 0) == 1)
			{
				if (Function_245(&Param0, &Param1))
				{
					Global_6651 = 1;
					bVar1 = true;
					bVar2 = CEIL((IntToFloat(Function_18(Param1.f_116)) / 2.0f));
					if (Function_10() > 2)
					{
						bVar2 = CEIL((IntToFloat(bVar2) * 0,75f));
					}
					if (Function_244() > bVar2)
					{
						bVar1 = false;
						if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 992))
						{
							if (Global_39922.f_308)
							{
								if (!Function_284(Global_119936, 16384))
								{
									Function_278(Function_283(), 16384, 3, 0);
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
							if (Function_244() > bVar2)
							{
								Function_21();
								DECOR_SET_INT(StackVal, Function_243(&Param0 + 808), CEIL((IntToFloat(Function_18("iAdditionalMoney")) / 2.0f)));
								if (CEIL((IntToFloat(Function_18(StackVal)) / 2.0f)) >= Function_40(255))
								{
									Function_26(StackVal, CEIL((IntToFloat(Function_18(255)) / 2.0f)), 0);
								}
								Function_151(253, 1, 0, 0);
								Function_242(CEIL((IntToFloat(Function_18(StackVal)) / 2.0f)), 1);
								if (Function_18(StackVal) <= 100)
								{
									Function_228(4294966896, 1, 0);
								}
								else if (Function_18(StackVal) <= 1000)
								{
									Function_228(4294966296, 1, 0);
								}
								else
								{
									Function_228(4294965296, 1, 0);
								}
								Function_224();
								Function_223("bribe_taken", 0x41200000, 1, 0, 2, 1, 0);
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
				if (Function_245(&Param0, &Param1))
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
						SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_283(), "PLAYER_OFFER_LAW_BRIBE_URGENT", 1, 1, 2, 0);
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

void Function_223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xB791 / 46993
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_145(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

void Function_224() //Position: 0xB81C / 47132
{
	int iVar0;
	int iVar1;
	
	Function_226(StackVal, Global_41176);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_40060 + 68[iVar0181][35])[(*&Global_41176 + 4)[iVar0]] = StackVal;
			iVar1 = Function_225(Global_41252[iVar011]);
			if (iVar1 != 4294967295)
			{
				Function_26(iVar1, (*&Global_41176 + 4)[iVar0], 0);
			}
		}
		iVar0++;
	}
	Function_17();
	return;
}

int Function_225(int iParam0) //Position: 0xB88F / 47247
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

void Function_226(int iParam0, bool bParam1) //Position: 0xBA16 / 47638
{
	if (!Function_19(iParam0))
	{
		return;
	}
	Global_40060[iParam0] = bParam1;
	Function_227((*&Global_40060 + 4428)[iParam0], TO_FLOAT(bParam1), 0);
	Function_227(222, TO_FLOAT((Function_40(223) + Function_40(224))), 0);
	return;
}

int Function_227(int iParam0, float fParam1, bool bParam2) //Position: 0xBA57 / 47703
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
		Function_39(iParam0, fParam1, 0);
	}
	Global_54086[iParam0] = fParam1;
	Function_38(iParam0);
	if (&bParam2)
	{
		Function_27(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_228(int iParam0, bool bParam1, bool bParam2) //Position: 0xBCC4 / 48324
{
	int iVar0;
	bool bVar1;
	
	if (Function_58(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_241())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_40(1);
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
			Function_240(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_284(Global_119936, 1))
				{
					Function_278(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_238(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_284(Global_119936, 2))
				{
					Function_278(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_151(1, bVar1, 0, 0);
	}
	else
	{
		Function_237(1, (4294967295 * bVar1), 0);
	}
	if (Function_40(1) <= 4294962296)
	{
		Function_26(1, 4294962296, 0);
	}
	else if (Function_40(1) >= 5000)
	{
		Function_26(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_36(1));
	iVar0 = Function_40(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_230(2, Function_236(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_230(2, Function_236(Global_21369.f_244), 0);
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
				Function_230(2, Function_236(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_230(2, Function_236(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_230(2, Function_236(Global_21369.f_244), 1);
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
				Function_230(2, Function_236(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_230(2, Function_236(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_230(2, Function_236(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_230(2, Function_236(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_230(2, Function_236(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_230(2, Function_236(Global_21369.f_244), 1);
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
				Function_230(2, Function_236(Global_21369.f_244), 0);
			}
			break;
	}
	Function_229(Global_21369.f_244, Global_21369.f_248);
	return;
}

void Function_229(int iParam0, int iParam1) //Position: 0xBFEB / 49131
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

int Function_230(int iParam0, char* cParam1) //Position: 0xC263 / 49763
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
	Function_234(iParam0, &cParam1, 0, 1);
	iVar1 = Function_231();
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

int Function_231() //Position: 0xC3F3 / 50163
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
	Function_232();
	return 0;
}

void Function_232() //Position: 0xC494 / 50324
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
		Function_233(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_233(int iParam0) //Position: 0xC552 / 50514
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

int Function_234(int iParam0, char* cParam1) //Position: 0xC5B8 / 50616
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
		Function_235(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_235(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0xC90F / 51471
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

var Function_236(int iParam0) //Position: 0xC997 / 51607
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

int Function_237(int iParam0, bool bParam1, int iParam2) //Position: 0xCA3A / 51770
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
	Function_38(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_238(int iParam0, bool bParam1) //Position: 0xCC37 / 52279
{
	bool bVar0;
	int iVar1;
	
	Function_237(iParam0, bParam1, 0);
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
	iVar1 = Function_239(iParam0, 4294967295);
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
	iVar1 = Function_231();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_239(int iParam0, int iParam1) //Position: 0xCDE2 / 52706
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

int Function_240(int iParam0, bool bParam1) //Position: 0xCE27 / 52775
{
	bool bVar0;
	int iVar1;
	
	Function_151(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_239(iParam0, 4294967295);
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
	iVar1 = Function_231();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

bool Function_241() //Position: 0xCFD3 / 53203
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_242(int iParam0, bool bParam1) //Position: 0xCFFE / 53246
{
	bool bVar0;
	
	bVar0 = Function_40(0);
	if ((Function_40(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_237(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (iParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_40(0));
	return 1;
}

int Function_243(var uParam0) //Position: 0xD08F / 53391
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

int Function_244() //Position: 0xD0DC / 53468
{
	return Function_40(0);
}

bool Function_245(int iParam0, struct<105> Param1) //Position: 0xD0E6 / 53478
{
	var uVar0;
	
	if (((((((CAN_ANYONE_OF_FACTION_SEE_OBJECT(Param1.f_104, &Param1 + 96) && GET_ATTACHED_HOGTIE_VICTIM(&Param1 + 96) != "") && GET_WEAPON_IN_HAND(&Param1 + 96) != 4294967295) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && !IS_ACTOR_RAGDOLL(&Param1 + 96)) && !Function_219(Function_283(), 0, 1)) && !Function_247()) && !Function_246())
	{
		uVar0 = Function_142(&Param1 + 96, &iParam0 + 808);
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

bool Function_246() //Position: 0xD184 / 53636
{
	return Global_54082 != 3;
}

bool Function_247() //Position: 0xD18F / 53647
{
	return Global_54082 != 2;
}

int Function_248(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xD19A / 53658
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
			if (Function_249(&uVar2, &uParam1, uParam2))
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

bool Function_249(var uParam0, var uParam1, bool bParam2) //Position: 0xD213 / 53779
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

bool Function_250(var uParam0, var uParam1, bool bParam2, float fParam3) //Position: 0xD328 / 54056
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

bool Function_251(int iParam0) //Position: 0xD3C6 / 54214
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

var Function_252(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0xD3D5 / 54229
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
			fVar3 = Function_253(&uVar4, &uParam1);
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

var Function_253(var uParam0, int iParam1) //Position: 0xD4A0 / 54432
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

void Function_254(struct<837> Param0) //Position: 0xD595 / 54677
{
	if (Param1.f_88 > Function_18(Param1.f_116))
	{
		return;
	}
	Param1.f_88 = Function_18(Param1.f_116);
	Param0.f_836 = Function_33(Function_255(Param1.f_116, Param1.f_88), Param0.f_836);
	if (!Function_284(Global_119935, 2048))
	{
		Function_278(&Global_54076, 2048, 2, 0);
	}
	return;
}

int Function_255(int iParam0, int iParam1) //Position: 0xD5EF / 54767
{
	int iVar0;
	int iVar1;
	
	if (Function_19(iParam0))
	{
		if (!(*&Global_39922 + 244)[iParam0] != 0)
		{
			return (*&Global_39922 + 244)[iParam0];
		}
		if (Function_308(0x4000000))
		{
			iVar0 = RAND_INT_RANGE(0, true);
			if (iVar0 == 0)
			{
				return 1;
			}
			return 2;
		}
	}
	if (iParam1 <= 75)
	{
		iVar1 = 2;
	}
	else if (iParam1 <= 180)
	{
		iVar1 = 3;
	}
	else if (iParam1 <= 380)
	{
		iVar1 = 4;
	}
	else if (iParam1 <= 700)
	{
		iVar1 = 5;
	}
	else if (iParam1 <= 1700)
	{
		iVar1 = 6;
	}
	else
	{
		iVar1 = 8;
	}
	if ((((((((Global_43789 != Global_46816[0] || Global_43789 != Global_46796[4]) || Global_43789 != Global_46796[1]) || Global_43789 != Global_46760[1]) || Global_43789 != Global_46760[4]) || Global_43789 != Global_46838[0]) || Global_43789 != Global_46926[1]) || Global_43789 != Global_46926[2]) || Global_43789 != Global_46894[0])
	{
		iVar1 = (iVar1 - 1);
	}
	if (iVar1 <= 2)
	{
		iVar1 = 2;
	}
	return iVar1;
}

void Function_256(struct<973> Param0) //Position: 0xD6F3 / 55027
{
	bool bVar0;
	struct<2> Var1;
	
	switch (Param0.f_936)
	{
		case 0x00000000:
			bVar0 = Function_114(StackVal, (&Param0 + 640));
			if (Param0.f_972 > 3)
			{
				bVar0 = true;
			}
			if (Param0.f_864 <= 3)
			{
				Function_269(StackVal, StackVal, &Param0, *(&Param0 + 640), *(&Param0 + 724), bVar0);
				*(&Param0 + 952) = Function_269(StackVal, StackVal, &Param0, *(&Param0 + 640), *(&Param0 + 724), bVar0);
			}
			if (Function_112(StackVal, *(&Param0 + 952)))
			{
				Function_264(0);
				*(&Param0 + 952) = Function_264(0);
			}
			if (Function_112(StackVal, *(&Param0 + 952)))
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
			*(&Param0 + 944) = CREATE_NAV_QUERY(&Param0 + 536, Function_28());
			if (!bVar0)
			{
				Var1 = *(&Param0 + 640);
			}
			else if (Global_43789 != Global_46866[0])
			{
				if (Function_258(StackVal, *(&Param0 + 640), 2096, 0.0f, 150.0f, &Var1, 0) != "")
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
			if (Function_257(StackVal, *(&Param0 + 952), 1.0f, 75.0f, 1, 1, 0))
			{
				Param0.f_936 = 0;
			}
			break;
	}
	return;
}

bool Function_257(struct<2> Param0, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) //Position: 0xD97D / 55677
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &fParam2, &fParam3, &iParam4, &iParam5, &iParam6);
}

int Function_258(struct<2> Param0, int iParam2, float fParam3, float fParam4, var uParam5, bool bParam6) //Position: 0xD99E / 55710
{
	struct<2> Var0;
	var uVar2;
	struct<9> Var3;
	
	bVar6 = -1.0f;
	Function_183();
	uParam5 = Function_183();
	uVar2 = START_CURVE_QUERY(&Global_43578, Param0, iParam2, fParam3, fParam4, Function_217(((fParam4 - fParam3) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) < 0)
	{
		Function_260(StackVal, &uVar2, Param0, iParam2, fParam3, fParam4, Function_217(((fParam4 - fParam3) / 5.0f), 20.0f));
	}
	else
	{
		iVar7 = 0;
		while (iVar7 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar2, iVar7, &vVar3);
			if (!&bParam6 || !Function_259(&vVar3))
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

bool Function_259(struct<13> Param0) //Position: 0xDA87 / 55943
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_260(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0xDAAA / 55978
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
	Function_261(&uParam0);
}

void Function_261(int iParam0) //Position: 0xDB64 / 56164
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
		Function_262(StackVal, StackVal, vVar1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&iParam0, iVar0)));
		PRINTNL();
		iVar0++;
	}
	return;
}

void Function_262(struct<17> Param0) //Position: 0xDBD8 / 56280
{
	Function_263(&Param0);
	PRINTVECTOR(Function_263(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

struct<8> Function_263(vector3 vParam0) //Position: 0xDC0B / 56331
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

struct<8> Function_264(bool bParam0) //Position: 0xDC2D / 56365
{
	struct<2> Var0;
	
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_267();
	Function_266(0);
	Function_265(bParam0);
	UNK_0x0AC99007(5.0f, 5.0f);
	UNK_0x30C67D05(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_183();
	return StackVal, Function_183();
}

void Function_265(bool bParam0) //Position: 0xDC68 / 56424
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

void Function_266(float fParam0) //Position: 0xDD1B / 56603
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

void Function_267() //Position: 0xDD62 / 56674
{
	float fVar0;
	bool bVar1;
	
	Function_268(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_268(var uParam0, bool bParam1) //Position: 0xDD76 / 56694
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

struct<8> Function_269(int iParam0, struct<2> Param1, struct<2> Param3, bool bParam5) //Position: 0xDE07 / 56839
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
				iVar8 = Function_270(StackVal, &uVar7, Param3, 4.0f, 0);
			}
			else
			{
				iVar8 = Function_270(StackVal, &uVar7, Param3, 18.0f, 0);
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
	Function_263(&iVar0);
	Var9 = Function_263(&iVar0);
	return StackVal, Var9;
}

int Function_270(var uParam0, struct<2> Param1, float fParam3, int iParam4) //Position: 0xDEFD / 57085
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
			while ((StackVal || !(StackVal || FABS(((Function_259(&Var3) || !bVar6) - &fParam3 != -1.0f)) > &fParam3)) && iVar1 > 10)
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
				Function_263(&Var3);
				bVar8 = VDIST(Function_263(&Var3), Param1);
				if (StackVal && (StackVal || FABS((((bVar8 > bVar7 && !Function_259(&Var3)) && !Function_271(&Var3)) - &fParam3 != -1.0f)) > &fParam3))
				{
					Function_262(StackVal, StackVal, Var3);
					PRINTNL();
					bVar7 = bVar8;
					iVar0 = iVar2;
				}
				else
				{
					Function_262(StackVal, StackVal, Var3);
					PRINTNL();
					if (bVar8 < bVar7)
					{
					}
					else if (Function_259(&Var3))
					{
					}
					else if (Function_271(&Var3))
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
				Function_263(&Var3);
				bVar8 = VDIST(Function_263(&Var3), Param1);
				if (StackVal && (StackVal || FABS((((bVar8 < bVar7 && !Function_259(&Var3)) && !Function_271(&Var3)) - &fParam3 != -1.0f)) > &fParam3))
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
	if (Function_259(&Var3))
	{
		return 4294967295;
	}
	if (Function_271(&Var3))
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
			Function_263(&iVar9);
			iVar12 = Function_263(&iVar9);
			iVar2++;
		}
		Function_263(&Var3);
		iVar12 = Function_263(&Var3);
	}
	return iVar0;
}

bool Function_271(struct<21> Param0) //Position: 0xE173 / 57715
{
	return ((((StackVal && (StackVal && Param0 != 0.0f != 0.0f) != 0.0f) && Param0.f_12 != 0.0f) && Param0.f_16 != 0.0f) && Param0.f_20 != 4294967295);
}

bool Function_272(struct<977> Param0) //Position: 0xE1A7 / 57767
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	if (Param0.f_976)
	{
		iVar0 = 0;
	}
	if (Param0.f_868 && iVar0)
	{
		if (!IS_ACTOR_VALID(Function_273(&Param0, &Param1, &Param0 + 536, &Param0 + 808, Param0.f_840, &Param1 + 96, 1)))
		{
			iVar0 = 0;
			if (!IS_ACTOR_VALID(Function_97(&Param0, &Param0 + 536, &Param0 + 808, &Param0 + 840, &Param1 + 96, 1)))
			{
				return 0;
			}
		}
	}
	if (!IS_ACTOR_VALID(Function_97(&Param0, &Param0 + 536, &Param0 + 808, &Param0 + 840, &Param1 + 96, 1)))
	{
		return 0;
	}
	if (Param0.f_588 <= Param0.f_584)
	{
		iVar2 = (Param0.f_584 - Param0.f_588);
		iVar1 = 0;
		while (iVar1 <= iVar2)
		{
			if (Param0.f_868 && iVar0)
			{
				Function_273(&Param0, &Param1, &Param0 + 536, &Param0 + 808, Param0.f_840, &Param1 + 96, 0);
			}
			else
			{
				Function_97(&Param0, &Param0 + 536, &Param0 + 808, &Param0 + 840, &Param1 + 96, 0);
			}
			iVar1++;
		}
	}
	Param0.f_552 = GET_CURRENT_GAME_TIME();
	if (!Function_49(&Param0 + 808, 59, &Param1 + 96))
	{
		if (GET_WEAPON_IN_HAND(&Param1 + 96) == 4294967295)
		{
			Function_169(&Param0 + 808, "law_go_wanted_unarmed", 5.0f, Param1.f_116, 20.0f, 1, 0);
		}
		else
		{
			Function_169(&Param0 + 808, "law_go_wanted", 5.0f, Param1.f_116, 20.0f, 1, 0);
		}
	}
	return 1;
}

var Function_273(struct<977> Param0) //Position: 0xE35A / 58202
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	bool bVar8;
	bool bVar9;
	var uVar10;
	var uVar12;
	
	if (!SQUAD_IS_VALID(&uParam3))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&uParam2))
	{
		return "";
	}
	if ((!Param0.f_936 != 2 && !Param0.f_936 != 3) && Param0.f_588 <= Param0.f_584)
	{
		return "";
	}
	if (Param0.f_936 == 3)
	{
		Param0.f_936 = 0;
		return "";
	}
	if (Param0.f_844 <= iParam4 && Param0.f_588 <= Param0.f_584)
	{
		if (SQUAD_GET_SIZE(&Param0 + 808) <= 1)
		{
			Param0.f_892 = 24;
		}
		return "";
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		return "";
	}
	if ((GET_MOUNT(&iParam1 + 96) != "" && GET_VEHICLE(&iParam1 + 96) != "") && Param0.f_844 > 6)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	Function_116(&Param0 + 724, 40.0f, &Var4, 10);
	if (Param0.f_964)
	{
		Var2 = (&Param0 + 952);
	}
	else
	{
		Function_116(&Param0 + 952, 40.0f, &Var2, 10);
	}
	if (Param0.f_936 == 2)
	{
		if (Function_114(StackVal, Var2))
		{
			Param0.f_936 = 0;
			return "";
		}
	}
	Var6 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var4, StackVal);
	Var6 = Vector(0.0f, UNK_0x9C40E671(&Var6), 0.0f);
	if (Param0.f_588 <= Param0.f_584)
	{
		bVar9 = true;
		if (!Param0.f_964)
		{
			bVar8 = true;
		}
	}
	else if (!bVar1 || !Global_47006[23])
	{
		bVar8 = false;
	}
	else
	{
		bVar8 = true;
	}
	if (bVar8)
	{
		if (Param0.f_892 != 13 || Param0.f_892 != 14)
		{
			bVar8 = false;
		}
	}
	if (!bVar9)
	{
		if (bVar8)
		{
			if (!Function_113(2))
			{
				bVar8 = false;
				if (!Function_113(1))
				{
					return "";
				}
			}
		}
		if (!Function_113(1))
		{
			return "";
		}
	}
	uVar10 = 1;
	if (!Function_112(StackVal, Var2) || bVar9)
	{
		if (Function_111(&Var2, &Param0 + 640) > Function_110(&Param0, bVar8))
		{
			uVar0 = Function_98(StackVal, StackVal, &Param0, &uParam2, Var2, Var6, &uVar10, uVar12, bVar9, bVar8, &iParam6);
		}
		else
		{
			Param0.f_976 = 1;
		}
	}
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_936 = 0;
		if (IS_ACTOR_ALIVE(&uVar0))
		{
			Function_77(&Param0, &uVar0, &iParam5);
		}
		Param0.f_844++;
	}
	return &uVar0;
}

void Function_274(struct<1009> Param0) //Position: 0xE5B7 / 58807
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	struct<2> Var3;
	struct<9> Var5;
	
	switch (Param0.f_936)
	{
		case 0x00000000:
			bVar2 = Function_114(StackVal, (&Param0 + 640));
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
			if (Function_308(0x1000000) && Global_21575 == 1)
			{
				Function_307(0x1000000);
				Function_183();
				(&Global_39922 + 280) = Function_183();
			}
			if (StackVal && !Function_112(Function_308(0x1000000), *(&Global_39922 + 280)))
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
				uVar1 = Function_276(&Param0, "nlaw_spawn");
				if (IS_OBJECT_VALID(&uVar1))
				{
					GET_OBJECT_POSITION(&uVar1, &Param0 + 952);
					Param0.f_964 = 1;
					if (Function_112(StackVal, *(&Param0 + 952)) || VDIST(*(&Param0 + 952), *(&Param0 + 640)) < (110.0f * 0,75f))
					{
						Function_275(0);
						*(&Param0 + 952) = Function_275(0);
					}
				}
			}
			else if (Param0 == 3)
			{
				Function_275(0);
				*(&Param0 + 952) = Function_275(0);
			}
			else
			{
				Function_269(StackVal, StackVal, &Param0, *(&Param0 + 640), *(&Param0 + 724), bVar2);
				*(&Param0 + 952) = Function_269(StackVal, StackVal, &Param0, *(&Param0 + 640), *(&Param0 + 724), bVar2);
			}
			Function_183();
			*(&Global_39922 + 280) = Function_183();
			if (Function_112(StackVal, *(&Param0 + 952)))
			{
				Function_275(0);
				*(&Param0 + 952) = Function_275(0);
			}
			if (Function_112(StackVal, *(&Param0 + 952)))
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
					Function_123(&iParam1 + 96);
					Var3 = Function_123(&iParam1 + 96);
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
			*(&Param0 + 944) = CREATE_NAV_QUERY(&Param0 + 536, Function_28());
			if (!bVar2)
			{
				Var7 = *(&Param0 + 640);
			}
			else if (Global_43789 != Global_46866[0])
			{
				if (Function_258(StackVal, *(&Param0 + 640), 2096, 0.0f, 150.0f, &Var7, 0) != "")
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
			if (Function_257(StackVal, *(&Param0 + 952), 1.0f, 50.0f, 1, 1, 0))
			{
				Param0.f_936 = 0;
			}
			break;
	}
	return;
}

struct<8> Function_275(int iParam0) //Position: 0xEA3A / 59962
{
	struct<2> Var0;
	
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_267();
	Function_266(0);
	Function_265(iParam0);
	UNK_0x0AC99007(5.0f, 5.0f);
	UNK_0x30C67D05(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_183();
	return StackVal, Function_183();
}

var Function_276(int iParam0, int iParam1) //Position: 0xEA75 / 60021
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

int Function_277(int iParam0) //Position: 0xEACA / 60106
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Function_108(&iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_278(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEAF1 / 60145
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_279(&uParam0, iParam1, &iParam2) && !&bParam3)
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

bool Function_279(int iParam0, var uParam1, int iParam2) //Position: 0xEB66 / 60262
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
		if (Function_281(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_280(uVar0))
		{
			case 0x00000002:
				if (!Function_284(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_280(char* cParam0) //Position: 0xEBE2 / 60386
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

int Function_281(int iParam0) //Position: 0xEC83 / 60547
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_282(&iVar1, 2147483648);
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

void Function_282(var uParam0, var uParam1) //Position: 0xECC0 / 60608
{
	uParam0 = (uParam0 - (uParam0 && uParam1));
	return;
}

int Function_283() //Position: 0xECD6 / 60630
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_284(int iParam0, int iParam1) //Position: 0xECEB / 60651
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_285() //Position: 0xECFE / 60670
{
	if ((Global_6623 || Global_6625) || Global_6608)
	{
		return 0;
	}
	return 1;
}

void Function_286(int iParam0) //Position: 0xED15 / 60693
{
	if (!IS_LAYOUTREF_VALID(&iParam0 + 544))
	{
		(&iParam0 + 544) = &Global_46715;
	}
	return;
}

void Function_287(struct<857> Param0) //Position: 0xED34 / 60724
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

int Function_288(struct<2>[] Param0) //Position: 0xED60 / 60768
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_291();
	iVar1 = 0;
	if (!Function_14(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_200(&(Param0[iVar02]), 8);
		}
		else if (Function_290())
		{
			iVar1 = 1;
			Function_200(&(Param0[iVar02]), 8);
		}
		Function_200(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_14(&(Param0[iVar02]), 4))
		{
			if (!Function_14(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_14(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_14(&(Param0[02]), 8) || iVar1));
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
				Function_200(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_14(&(Param0[iVar02]), 4))
		{
			if (!Function_14(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
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
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_200(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_200(&(Param0[iVar02]), 2);
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
	Function_289();
	return 1;
}

void Function_289() //Position: 0xF122 / 61730
{
	if (!Function_156(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_290() //Position: 0xF162 / 61794
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

void Function_291() //Position: 0xF190 / 61840
{
	if (!Function_156(128))
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

void Function_292(struct<1009> Param0) //Position: 0xF1D2 / 61906
{
	Param0.f_700 = GET_CURRENT_GAME_TIME();
	Param0 = 0;
	Param0.f_1008 = StackVal;
	Param0.f_868 = 1;
	Global_21542 = 0,01f;
	Function_304(&Param0);
	Param0.f_872 = Function_58(0);
	Param0.f_848 = 0;
	*(&Param0 + 536) = Function_303("LocalLawResponse");
	Function_76(&Param0, &Param1, GET_GC_LAYOUT(), 0);
	Function_76(&Param0, &Param1, GET_AMBIENT_LAYOUT(), 0);
	Function_76(&Param0, &Param1, &Global_43578, 0);
	Function_76(&Param0, &Param1, &Global_10998, 0);
	if (Param1.f_120 == 0)
	{
		Param0.f_836 = Function_33(Function_255(Param1.f_116, Param1.f_88), Function_302(1));
	}
	else
	{
		Param0.f_836 = Param1.f_120;
	}
	Param0.f_840 = Param1.f_124;
	Function_301(&Param0, Param0.f_836, 0);
	*(&Param0 + 808) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 536, "lawSquad"));
	*(&Param0 + 816) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 536, "dogSquad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 808, 648);
	SQUAD_SET_FACTION(&Param0 + 808, Param1.f_104);
	*(&Param0 + 560) = Function_300(&Param1 + 96, 3, 0);
	if (IS_CRIME_VALID(&Param0 + 560))
	{
		GET_CRIME_POSITION(&Param0 + 560, &Param0 + 712);
		Param0.f_664 = Function_167(GET_CURRENT_GAME_TIME(), Function_167(GET_CRIME_BEGIN_TIMESTAMP(&Param0 + 560), GET_CRIME_END_TIMESTAMP(&Param0 + 560)));
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
	*(&Param0 + 632) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Param0 + 536, Function_28(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(30.0f, 20.0f, 30.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &Param0 + 632, &Param1 + 96, Function_28(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	*(&Param0 + 544) = &Global_40000 + 16;
	Function_299(&Param0, &Param1);
	if (IS_OBJECTSET_VALID(&Global_98981))
	{
		CLEAN_OBJECTSET(&Global_98981);
		Param0.f_584 = GET_OBJECTSET_SIZE(&Global_98981);
		PRINTINT(Param0.f_584);
		PRINTNL();
	}
	if (Function_285())
	{
		if (!Function_284(Global_119935, 32768))
		{
			Function_278(&Global_54076, 32768, 2, 0);
		}
	}
	Function_293();
	return;
}

void Function_293() //Position: 0xF46F / 62575
{
	if (!Function_295(25, 0))
	{
		if (!Function_284(Global_119935, 0x1000000))
		{
			Function_294(&Global_119936, 32768);
		}
	}
	return;
}

void Function_294(var uParam0, int iParam1) //Position: 0xF49A / 62618
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_295(var uParam0, bool bParam1) //Position: 0xF4B4 / 62644
{
	int iVar0;
	
	iVar0 = Function_297(uParam0);
	if (!Function_296(iVar0))
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

bool Function_296(int iParam0) //Position: 0xF4F2 / 62706
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_297(int iParam0) //Position: 0xF509 / 62729
{
	if (!Function_298(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_298(int iParam0) //Position: 0xF523 / 62755
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_299(int iParam0, struct<117> Param1) //Position: 0xF539 / 62777
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

var Function_300(int iParam0, int iParam1, int iParam2) //Position: 0xF758 / 63320
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
	if (!Function_174(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	iVar1 = 0;
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar3 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_173(&uVar2, &uVar3);
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

void Function_301(struct<1009> Param0) //Position: 0xF887 / 63623
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
		iVar3 = Function_201(Param0.f_1008, Param0);
	}
	else
	{
		iVar3 = Function_201(Param0.f_1008, 5);
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
				Function_198(&Param0, iVar5, 0);
			}
			else
			{
				Function_198(&Param0, iVar5, 1);
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

int Function_302(bool bParam0) //Position: 0xF992 / 63890
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar4;
	
	if (!IS_OBJECTSET_VALID(&Global_98981))
	{
		return 0;
	}
	if (GET_OBJECTSET_SIZE(&Global_98981) < 0)
	{
		return 0;
	}
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_98981))
	{
		uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_98981);
		if (IS_OBJECT_VALID(&uVar4))
		{
			if (GET_OBJECT_TYPE(&uVar4) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar4)))
				{
					iVar1++;
				}
			}
			else if (GET_OBJECT_TYPE(&uVar4) == 24)
			{
				if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(&uVar4)))
				{
					if (&bParam0)
					{
						GET_OBJECT_POSITION(GET_PERS_CHAR_FROM_OBJECT(&uVar4), &uVar2);
						if (!WOULD_ACTOR_BE_VISIBLE(false, &uVar2, 3212836864) || IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar4))))
						{
							ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar4));
						}
					}
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar4))))
					{
						iVar1++;
					}
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

var Function_303(int iParam0) //Position: 0xFA6C / 64108
{
	int iVar0;
	
	iVar0 = CREATE_LAYOUT(&iParam0);
	return &iVar0;
}

void Function_304(int iParam0) //Position: 0xFA7E / 64126
{
	Function_305(&iParam0 + 8, "stand_surrender", 5, 0);
	Function_305(&iParam0 + 8, "custom/stand_surrender", 8, 0);
	Function_305(&iParam0 + 8, "stand_shakehands", 5, 0);
	Function_305(&iParam0 + 8, "custom/stand_shakehands", 8, 0);
	return;
}

var Function_305(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xFB0A / 64266
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_306(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_200(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_306(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xFB48 / 64328
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_14(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_200(&(Param0[iVar02]), 4);
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

void Function_307(int iParam0) //Position: 0xFC17 / 64535
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

bool Function_308(int iParam0) //Position: 0xFC34 / 64564
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

