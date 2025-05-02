//Decompiled with MagicRDR v1.0
//Function Count : 576
//Statics Count : 706
//Natives Count : 611
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	struct<1893> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[32];
	bool bVar8;
	struct<2> Var9;
	var uVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	struct<8> Var18;
	struct<6> Var26;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_508 = 0;
	iLocal_509 = 0;
	iLocal_595 = "";
	iLocal_629 = 0;
	iLocal_632 = 0;
	bLocal_634 = false;
	iLocal_635 = 0;
	iLocal_640 = 0;
	iLocal_641 = 0;
	iLocal_642 = 0;
	iLocal_643 = 0;
	iVar16 = 0;
	bVar17 = false;
	uLocal_506 = GET_TIME_OF_DAY();
	ADD_TIME(&uLocal_506, 0, 0, 40, 0);
	bVar17 = (Function_575(1, 0) || ScriptParam_0.f_44 != 1);
	if (bVar17)
	{
		Global_6615 = GET_THIS_SCRIPT_ID();
		Global_6644 = 1;
		iLocal_27 = 0;
		iLocal_503 = 0;
		Function_574(0);
		if (Function_573(StackVal, (&ScriptParam_0 + 16)))
		{
			Function_572(&Var18, 1, 10.0f, 0, 4294967295);
			Function_571(StackVal, &Var26, 0, Global_54078, 0.0f, 40.0f, 65.0f, 0, 0x40a00000, 0);
			Function_569(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var26, Var18, 1);
			Var9 = Function_569(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var26, Var18, 1);
			if (!Function_573(StackVal, Var9))
			{
				*(&ScriptParam_0 + 16) = Var9;
				*(&ScriptParam_0 + 28) = Vector(0.0f, RAND_FLOAT_RANGE(0.0f, 360.0f), 0.0f);
			}
			else
			{
				iLocal_27 = 5;
			}
		}
		iLocal_595 = "";
	}
	else
	{
		Function_562(16);
	}
	uLocal_506 = GET_TIME_OF_DAY();
	ADD_TIME(&uLocal_506, 0, 0, 15, 0);
	Function_560(&Local_29 + 1520);
	Function_560(&Local_29 + 1504);
	Function_559(&Local_29 + 1504);
	Function_558(&Local_29);
	(&Local_29 + 1608) = Function_557();
	if (Function_554(Function_556()))
	{
		Function_552(&Local_29, Function_556());
	}
	else
	{
		Function_552(&Local_29, 1);
	}
	if (IS_ACTOR_VALID(&Local_29 + 1608))
	{
		GIVE_OBJECT_TO_LAYOUT(&Local_29 + 1608, &Local_29 + 1480);
		Local_29.f_1616 = Function_551(GET_OBJECT_FROM_ACTOR(&Local_29 + 1608));
	}
	else
	{
		Local_29.f_1616 = Function_550();
	}
	if (Function_549() == 1)
	{
		Function_547(&Local_29, 1);
		if (Function_545(Global_43788) == Global_46722[1])
		{
			(*&Local_29 + 1732)[0] = 465;
			(*&Local_29 + 1732)[1] = 455;
		}
		else
		{
			(*&Local_29 + 1732)[0] = 440;
			(*&Local_29 + 1732)[1] = 441;
		}
	}
	else
	{
		(*&Local_29 + 1732)[0] = Function_535(2, 0, 2, 4294967295, 1);
	}
	Function_534(&bLocal_634, 1);
	Function_534(&bLocal_634, 16);
	Function_533(&bLocal_634, 2);
	Function_533(&bLocal_634, 4);
	Function_533(&bLocal_634, 8);
	Function_532();
	if (!Function_531(Local_29.f_1496, 8))
	{
		Function_529(&Local_29);
	}
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(&Global_54076) || !IS_ACTOR_ALIVE(&Global_54076))
		{
			Function_562(16);
		}
		else if (Global_6623 != 1 && 0 != ScriptParam_0.f_44)
		{
			Function_562(16);
		}
		else if (IS_ACTOR_VALID(&Local_29 + 1608))
		{
			GET_POSITION(&Local_29 + 1608, &Var9);
			if (iLocal_27 < 0 && iLocal_27 > 3)
			{
				if ((IS_EARLIER_THAN(&uLocal_506, GET_TIME_OF_DAY()) && VDIST(Global_54078, Var9) < 85.0f) && !WOULD_ACTOR_BE_VISIBLE(false, &ScriptParam_0 + 16, 3212836864))
				{
					Function_562(16);
				}
			}
			else if (iLocal_27 == 0)
			{
				if (IS_EARLIER_THAN(&uLocal_506, GET_TIME_OF_DAY()))
				{
					Function_562(16);
				}
			}
		}
		iLocal_510 = 500;
		switch (iLocal_27)
		{
			case 0x00000000:
				if (Function_516(&Local_29))
				{
					if (IS_ACTOR_VALID(Function_557()))
					{
						Function_515(Function_557());
						*(&ScriptParam_0 + 16) = Function_515(Function_557());
						iVar15 = 1;
					}
					else
					{
						Function_514();
						if (!Function_573(StackVal, Function_514()))
						{
							Function_514();
							*(&ScriptParam_0 + 16) = Function_514();
							iVar15 = 1;
						}
					}
					if (iVar15 == 0)
					{
						iVar15 = Function_473(&ScriptParam_0, &iLocal_510, &uVar13, &iVar16, 1);
						Function_472(&Local_29, iLocal_510);
					}
					if (iVar15 == 1)
					{
						strcpy(&cVar0, "escortProc", 32);
						cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&cVar0) };
						uLocal_504 = CREATE_LAYOUT(&cVar0);
						if (!IS_LAYOUTREF_VALID(&uLocal_504))
						{
							Function_472(&Local_29, 0);
							Function_562(16);
							break;
						}
						else
						{
							if (Function_468(Function_469()))
							{
								LOG_ERROR("External regions are no longer supported.");
							}
							else if (IS_VOLUME_VALID(Function_467()))
							{
								LOG_ERROR("External volumes are no longer supported.");
							}
							else if (!Function_466(&Local_29))
							{
								bVar8 = Function_465(&Local_29);
								if (!Function_468(bVar8) || 0 != bVar8)
								{
									if (Function_531(Local_29.f_1496, 8))
									{
										bVar8 = Function_462(&Local_29, 0.0f);
									}
									else
									{
										bVar8 = Function_462(&Local_29, 0x43af0000);
									}
									if (!Function_468(bVar8))
									{
										Function_461(&Local_29);
										iLocal_27 = 5;
										LOG_ERROR("Could not set the contact region. Ending.");
									}
									else
									{
										Function_458(&Local_29, bVar8, Function_460(), 1);
									}
								}
							}
							Function_457(&Local_29, &uLocal_504);
							Function_456(StackVal, &Local_29, *(&ScriptParam_0 + 16));
						}
						Function_472(&Local_29, 0);
						iLocal_27 = 1;
					}
					else if (iVar16 == 1)
					{
						Function_472(&Local_29, 0);
						iLocal_27 = 5;
					}
				}
				break;
			
			case 0x00000001:
				if (Function_516(&Local_29))
				{
					if (Function_431(&Local_29))
					{
						uLocal_506 = GET_TIME_OF_DAY();
						ADD_TIME(&uLocal_506, 0, 0, 15, 0);
						iLocal_27 = 2;
						Function_562(1);
						Function_472(&Local_29, 0);
					}
					else
					{
						Function_562(16);
						break;
					}
					Function_472(&Local_29, 0);
					iLocal_27 = 2;
				}
				break;
			
			case 0x00000002:
				GET_POSITION(&Local_29 + 1608, &Var9);
				if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076) || IS_ACTOR_RIDING(&Global_54076))
				{
					iLocal_509 = 0;
				}
				else if (iLocal_509 == 0)
				{
					Function_560(&Local_29 + 1504);
					iLocal_509 = 1;
				}
				else if ((Function_430(&Local_29 + 1504, 30.0f) && Function_430(&Local_29 + 1520, 60.0f)) && VDIST(Var9, Global_54078) < 120.0f)
				{
					Function_562(16);
				}
				if (iLocal_27 <= 5)
				{
					if (!Function_373())
					{
						Function_472(&Local_29, 0);
						Function_562(16);
						break;
					}
					else if (Global_6623 && !ScriptParam_0.f_44)
					{
						Function_472(&Local_29, 0);
						Function_562(16);
						break;
					}
					if (iLocal_508 != 1 && iLocal_27 > 3)
					{
						if (Global_43788 == Global_46736[2])
						{
							iLocal_597[0] = 478;
							iLocal_597[1] = 480;
							iLocal_597[2] = 481;
							iLocal_597[3] = 484;
							iLocal_597[4] = 485;
							iLocal_597[5] = 483;
							iLocal_629 = 6;
						}
						else if (Global_43788 != Global_46736[0] || Global_43788 != Global_46736[3])
						{
							iLocal_597[0] = 488;
							iLocal_597[1] = 489;
							iLocal_597[2] = 490;
							iLocal_597[3] = 494;
							iLocal_597[4] = 493;
							iLocal_597[5] = 492;
							iLocal_629 = 6;
						}
						else if (Global_43788 == Global_46736[1])
						{
							iLocal_597[0] = 507;
							iLocal_597[1] = 508;
							iLocal_597[2] = 509;
							iLocal_597[3] = 515;
							iLocal_597[4] = 514;
							iLocal_597[5] = 513;
							iLocal_629 = 6;
						}
						else
						{
							iLocal_629 = Function_372(8);
							if (iLocal_629 >= 6)
							{
								iLocal_629 = 6;
							}
							iVar14 = 0;
							while (iVar14 < (iLocal_629 - 1))
							{
								iLocal_597[iVar14] = Function_370(8, iVar14);
								iVar14++;
							}
						}
						Function_369();
						Function_368();
						Function_560(&Local_29 + 1860);
						Function_560(&Local_29 + 1504);
						Function_472(&Local_29, 0);
						Function_562(2);
						Function_367(&Local_29);
						Local_29.f_1600 = VDIST(Global_54078, Function_367(&Local_29));
						iLocal_27 = 3;
					}
				}
				break;
			
			case 0x00000003:
				if (!Function_373())
				{
					LOG_ERROR("EVENT RUNNING - LOCAL UPDATE");
					Function_562(12);
					break;
				}
				Function_324(StackVal, ScriptParam_0.f_44, *(&ScriptParam_0 + 16));
				Function_472(&Local_29, 0);
				break;
			
			case 0x00000005:
				if (iLocal_640 == 0)
				{
					if ((IS_SCRIPT_VALID(&iLocal_595) && SQUAD_IS_VALID(&iLocal_511 + 80)) && iLocal_632 != 0)
					{
						Function_322(&iLocal_511);
						Function_319(&iLocal_511, Function_321());
						iLocal_632 = 1;
					}
					if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
					{
						CLEAR_ACTOR_MAX_SPEED(GET_MOST_RECENT_MOUNT(&Global_54076));
					}
					Function_310(&Local_29, 0, 1);
					if (!IS_ACTOR_ALIVE(&Global_54076) || iLocal_28 == 2)
					{
						iLocal_641 = 0;
					}
					else
					{
						iLocal_641 = 1;
					}
					if (iLocal_641 == 0)
					{
						Function_193();
						iLocal_643 = 1;
						Function_560(&iLocal_636);
					}
					iLocal_640 = 1;
				}
				else if (iLocal_643 == 0)
				{
					if (iLocal_642 == 0)
					{
						if (Function_192(&Local_29))
						{
							if (iLocal_641 == 1)
							{
								Function_90(&Local_29);
								iLocal_642 = 1;
							}
							else
							{
								LOG_ERROR("Escort: Unexpected state in EVENT_ENDING");
								Function_193();
								iLocal_643 = 1;
								Function_560(&iLocal_636);
							}
						}
					}
					if (iLocal_642 == 1)
					{
						if (Function_63(&Local_29) == 5)
						{
							Function_38(&Local_29);
							Function_193();
							iLocal_643 = 1;
							Function_560(&iLocal_636);
						}
					}
				}
				else if (Function_430(&iLocal_636, 10.0f))
				{
					if (iLocal_508 == 1)
					{
						Function_574(0);
						Function_36(0);
						Function_35(12);
					}
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				Function_472(&Local_29, 0);
				break;
		}
		WAIT(Function_34(&Local_29));
	}
	if (Local_29.f_1892)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (iLocal_508 == 1)
	{
		if (iLocal_28 == 2)
		{
			Function_12(&Local_29, 0, 1);
		}
		else
		{
			Function_12(&Local_29, 0, 0);
		}
	}
	else
	{
		Function_12(&Local_29, 1, 0);
	}
	Function_1();
	DESTROY_ITERATOR(&ScriptParam_0 + 8);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x90E / 2318
{
	if (!(Function_10(&Local_29) != 3 || Function_10(&Local_29) != 2))
	{
		Function_461(&Local_29);
		iLocal_28 = 4;
	}
	if (Function_9())
	{
		Function_2();
	}
	RELEASE_LAYOUT_OBJECTS(&uLocal_504);
	return;
}

void Function_2() //Position: 0x93F / 2367
{
	Function_4();
	Function_3(10, 3);
	return;
}

void Function_3(int iParam0, int iParam1) //Position: 0x94E / 2382
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_4() //Position: 0xA9B / 2715
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_8())
	{
		Function_7(10, 3);
	}
	else
	{
		Function_5();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_321(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_321());
	UI_POP("nDebugMenu");
	return;
}

void Function_5() //Position: 0xAE6 / 2790
{
	Function_6(25, 2);
	return;
}

void Function_6(int iParam0, int iParam1) //Position: 0xAF2 / 2802
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0xD1E / 3358
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_8() //Position: 0xE6B / 3691
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_531(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_9() //Position: 0xED3 / 3795
{
	return Global_47307;
}

int Function_10(int iParam0) //Position: 0xEDC / 3804
{
	return Function_11(&iParam0);
}

int Function_11(struct<1089> Param0) //Position: 0xEE8 / 3816
{
	return Param0.f_1088;
}

void Function_12(struct<1557> Param0) //Position: 0xEF4 / 3828
{
	int iVar0;
	
	Function_27(&Param0, 0, 0);
	if (IS_OBJECT_VALID(&Param0 + 1584))
	{
		DESTROY_OBJECT(&Param0 + 1584);
	}
	if (Function_531(Param0.f_1496, 4))
	{
		if (IS_VOLUME_VALID(&Param0 + 1560))
		{
			if (Function_468(Param0.f_1556))
			{
				if (!&Param0 + 1560 != &Global_44085[Param0.f_15569] + 8)
				{
					DESTROY_VOLUME(&Param0 + 1560);
				}
			}
			else
			{
				DESTROY_VOLUME(&Param0 + 1560);
			}
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1608))
	{
		TASK_CLEAR(&Param0 + 1608);
		RESET_ANIM_SET_FOR_ACTOR(&Param0 + 1608, 0);
		if (&iParam1 == 1)
		{
			DESTROY_ACTOR(&Param0 + 1608);
		}
		else
		{
			DECOR_REMOVE(&Param0 + 1608, "escort_state");
			DECOR_REMOVE(&Param0 + 1608, "escort_destType");
			DECOR_REMOVE(&Param0 + 1608, "escort_blip");
			DECOR_REMOVE(&Param0 + 1608, "escort_stayout");
			if (&iParam2 == 1)
			{
				if (IS_ACTOR_VALID(&Param0 + 1708[0]))
				{
					MEMORY_REPORT_POSITION_AUTO(&Param0 + 1608, &Param0 + 1708[0], 1);
					iVar0 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, &Param0 + 1708[0], 1.0f, 1);
					TASK_FOLLOW_ACTOR(0, &Param0 + 1708[0]);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Param0 + 1608, iVar0);
					TASK_SEQUENCE_RELEASE(iVar0, 1);
					RELEASE_ACTOR(&Param0 + 1608);
				}
			}
			else if (IS_ACTOR_VALID(GET_MOUNT(&Param0 + 1608)))
			{
				Function_24(&Param0);
			}
			else
			{
				Function_23();
				Function_22(StackVal, &Param0 + 1608, Function_23(), 0, 0, 2, 1);
			}
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1708[0]))
	{
		TASK_CLEAR(&Param0 + 1708[0]);
		RESET_ANIM_SET_FOR_ACTOR(&Param0 + 1708[0], 0);
		if (&iParam1 == 1)
		{
			DESTROY_ACTOR(&Param0 + 1708[0]);
		}
		else
		{
			Function_23();
			Function_22(StackVal, &Param0 + 1708[0], Function_23(), 0, 0, 2, 1);
		}
	}
	if (HAS_ANIM_SET_LOADED("gent_ride_passenger"))
	{
		REMOVE_ANIM_SET("gent_ride_passenger");
	}
	if (HAS_ANIM_SET_LOADED("stand_ambient"))
	{
		REMOVE_ANIM_SET("stand_ambient");
	}
	if (REQUEST_ACTION_TREE("custom/stand_ambient"))
	{
		REMOVE_ACTION_TREE("custom/stand_ambient");
	}
	if (Function_531(Param0.f_1496, 128) && Function_21() != 1)
	{
		Function_20(1, 0x41200000);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	if (Function_531(Param0.f_1496, 2))
	{
		RELEASE_LAYOUT_REF(&Param0 + 1480);
	}
	Function_15(&Param0);
	Function_13();
	return;
}

void Function_13() //Position: 0x11D9 / 4569
{
	int iVar0;
	
	iVar0 = Function_14();
	if (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_OBJECT(&iVar0);
	}
	return;
}

int Function_14() //Position: 0x11F4 / 4596
{
	int iVar0;
	var uVar1;
	
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar1, "escortDataObj");
	iVar0 = START_OBJECT_ITERATOR(&uVar1);
	if (!IS_OBJECT_VALID(&iVar0))
	{
		iVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Global_43578, "escortDataObj", Vector(1.0f, 1.0f, 1.0f), Vector(0.0f, 0.0f, 0.0f));
		if (!IS_OBJECT_VALID(&iVar0))
		{
			LOG_ERROR("ESCORT_GetExternalObject - Could not create external object?");
		}
	}
	if (IS_ITERATOR_VALID(&uVar1))
	{
		DESTROY_ITERATOR(&uVar1);
	}
	return &iVar0;
}

void Function_15(int iParam0) //Position: 0x12B5 / 4789
{
	STREAMING_UNLOAD_BOUNDS();
	Function_16(&iParam0 + 1104);
	return;
}

void Function_16(int iParam0) //Position: 0x12C7 / 4807
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_17(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_17(struct<2>[] Param0, int iParam1) //Position: 0x12EF / 4847
{
	if (Function_19(&(Param0[iParam12]), 4))
	{
		if (Function_19(&(Param0[iParam12]), 1))
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
			Function_18(&(Param0[iParam12]), 1);
			Function_18(&(Param0[iParam12]), 2);
			Function_18(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_18(struct<13> Param0) //Position: 0x143A / 5178
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_19(struct<13> Param0) //Position: 0x1457 / 5207
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_20(int iParam0, var uParam1) //Position: 0x1475 / 5237
{
	if (!Function_21())
	{
		switch (&iParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, &uParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, &uParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

bool Function_21() //Position: 0x14AF / 5295
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

void Function_22(float fParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x14D4 / 5332
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&fParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideCurve", &iParam3);
	}
	if (!Function_573(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&fParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&fParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&fParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&fParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&fParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&fParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&fParam0, 1);
}

struct<8> Function_23() //Position: 0x15F3 / 5619
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_24(int iParam0) //Position: 0x15FD / 5629
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (IS_ACTOR_VALID(&iParam0 + 1608))
	{
		if (!IS_ACTOR_DEAD(&iParam0 + 1608))
		{
			if (!IS_ACTOR_HOGTIED(&iParam0 + 1608))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				if (IS_ACTOR_VALID(GET_MOUNT(&iParam0 + 1608)))
				{
					uVar1 = GET_MOUNT(&iParam0 + 1608);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_25(&Global_54076, 0);
						TASK_CLEAR(&Global_54076);
						ACTOR_DISMOUNT_NOW(&Global_54076);
					}
				}
				else if (IS_ACTOR_VALID(GET_VEHICLE(&iParam0 + 1608)))
				{
					iVar2 = GET_VEHICLE(&iParam0 + 1608);
					if (IS_ACTOR_VALID(&iVar2))
					{
						TASK_VEHICLE_LEAVE(0);
					}
				}
				TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_OVERRIDE_SET_MOVETYPE(&iParam0 + 1608, 4);
				TASK_PRIORITY_SET(&iParam0 + 1608, true);
				TASK_SEQUENCE_PERFORM(&iParam0 + 1608, iVar0);
			}
		}
	}
	return;
}

void Function_25(bool bParam0, bool bParam1) //Position: 0x16CC / 5836
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&bParam0))
	{
		uVar0 = GET_MOUNT(&bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&bParam0))
	{
		uVar1 = GET_VEHICLE(&bParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_26(&bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&bParam0, 1);
	}
	return;
}

float Function_26(bool bParam0, bool bParam1) //Position: 0x1736 / 5942
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&bParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_27(int iParam0, int iParam1, int iParam2) //Position: 0x1757 / 5975
{
	struct<2> Var0;
	struct<8> Var2;
	
	if (IS_ACTOR_VALID(&iParam0 + 1608))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0 + 1608)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0 + 1608));
		}
	}
	if (Function_33(&iParam0))
	{
		Function_32();
	}
	if (IS_LAYOUTREF_VALID(&iParam0 + 1480))
	{
		if (IS_OBJECT_VALID(&iParam0 + 1592))
		{
			Function_31(&iParam0 + 1592);
		}
	}
	if (iParam1 == 1)
	{
		GET_OBJECT_POSITION(&iParam0 + 1584, &Var0);
		if (!Function_573(StackVal, Var0))
		{
			Function_29(StackVal, Var0, 0, 393264, 1);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("escortGateway") };
			*(&iParam0 + 1592) = Function_28(StackVal, StackVal, &iParam0 + 1480, &Var2, Var0, Vector(0.0f, 0.0f, 0.0f), &Global_54076, 3,5f, 1, 3, 330, 4294967295, 1, -1.0f, -1.0f, 0);
		}
	}
	if (iParam2 == 1)
	{
		if (IS_ACTOR_VALID(&iParam0 + 1608))
		{
			ADD_BLIP_FOR_ACTOR(&iParam0 + 1608, 325, 0, 2, 0);
		}
	}
	return;
}

float Function_28(var uParam0, char* cParam1, float fParam9, int iParam10, var uParam11, var uParam12, float fParam13, float fParam14, int iParam15) //Position: 0x184C / 6220
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &uParam8, &uParam11, 0, &uParam12, &iParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, &cVar3, 2,802597E-45f, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

void Function_29(struct<2> Param0, var uParam2, var uParam3, var uParam4) //Position: 0x1937 / 6455
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = uParam2;
	Global_42834.f_24 = uParam3;
	if (uParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (uParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_30(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &uParam4;
}

void Function_30(var uParam0) //Position: 0x19F8 / 6648
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

void Function_31(var uParam0) //Position: 0x1A41 / 6721
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (DECOR_CHECK_EXIST(&uParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&uParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&uParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&uParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&uParam0);
	}
	return;
}

void Function_32() //Position: 0x1AD7 / 6871
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

bool Function_33(struct<1049> Param0) //Position: 0x1B02 / 6914
{
	if (Function_531(Param0.f_1048, 16))
	{
		return 1;
	}
	return 0;
}

var Function_34(struct<1501> Param0) //Position: 0x1B1C / 6940
{
	return Param0.f_1500;
}

void Function_35(int iParam0) //Position: 0x1B28 / 6952
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_36(int iParam0) //Position: 0x1B45 / 6981
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_37(105)), 0);
	return;
}

int Function_37(int iParam0) //Position: 0x1B68 / 7016
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_38(struct<1049> Param0) //Position: 0x1B7F / 7039
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
		{
			uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &Param0 + 992);
			if (GET_OBJECT_TYPE(&uVar2) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar2)))
				{
					if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&uVar2)) && GET_ACTOR_FROM_OBJECT(&uVar2) == &Global_54076)
					{
						ACTOR_END_FORCE_HOLSTER(GET_ACTOR_FROM_OBJECT(&uVar2));
					}
				}
			}
			bVar1++;
		}
	}
	if (!Function_531(Param0.f_1048, 512) && Function_531(Param0.f_1048, 256))
	{
		if (IS_OBJECT_VALID(&Param0 + 936))
		{
			DESTROY_OBJECT(&Param0 + 936);
		}
		if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 928));
		}
		if (IS_OBJECT_VALID(&Param0 + 944))
		{
			DESTROY_VOLUME(&Param0 + 944);
		}
		while (GET_OBJECTSET_SIZE(&Param0 + 992) >= 0)
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			if (IS_OBJECT_VALID(&uVar0))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &Param0 + 992);
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar0)))
					{
						Function_62(GET_ACTOR_FROM_OBJECT(&uVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(&uVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(&uVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(&Param0 + 992);
		}
		if (((Param0.f_988 != 4 || Param0.f_988 != 5) || Param0.f_988 != 6) || Param0.f_988 != 7)
		{
			Function_62(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
		}
		*(&Param0 + 1000) = Vector(0.0f, 0.0f, 0.0f);
		Param0.f_1012 = 0;
		Function_42(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_41(1.0f);
		Function_40(&Param0, 5);
		if (Function_531(Param0.f_1048, 32768))
		{
			Function_39(256);
		}
		Function_534(&Param0 + 1048, 512);
		Function_533(&Param0 + 1048, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_39(int iParam0) //Position: 0x1D73 / 7539
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_40(struct<985> Param0) //Position: 0x1D90 / 7568
{
	Param0.f_984 = iParam1;
	return;
}

void Function_41(bool bParam0) //Position: 0x1D9E / 7582
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_42(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x1DBB / 7611
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
		uVar0 = Function_321();
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
		Function_46(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_45();
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
	Function_43(&uParam9, &uParam10);
}

void Function_43(var uParam0, bool bParam1) //Position: 0x1E8A / 7818
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
		Function_44();
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

void Function_44() //Position: 0x1F59 / 8025
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

void Function_45() //Position: 0x1FD1 / 8145
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_46(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1FE6 / 8166
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
		Function_48(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_47(iParam0);
	return 1;
}

void Function_47(bool bParam0) //Position: 0x220E / 8718
{
	switch (bParam0)
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

void Function_48(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x22AC / 8876
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_53(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_50(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_49(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_49() //Position: 0x28EA / 10474
{
	int iVar0;
	
	return &iVar0;
}

var Function_50(int iParam0) //Position: 0x28F3 / 10483
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_51(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2904 / 10500
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_52(char* cParam0) //Position: 0x29FB / 10747
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_53(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A16 / 10774
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_55(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_54(Function_55(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_54(int iParam0, int iParam1) //Position: 0x2A7D / 10877
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_55(int iParam0, bool bParam1) //Position: 0x2A8F / 10895
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_56(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2AA1 / 10913
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

int Function_57(int iParam0) //Position: 0x2BD5 / 11221
{
	return Global_55480[iParam016].f_96;
}

float Function_58(int iParam0) //Position: 0x2BE4 / 11236
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_59(int iParam0) //Position: 0x2C1D / 11293
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_60(int iParam0) //Position: 0x2C5A / 11354
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

int Function_61(int iParam0, float fParam1, bool bParam2) //Position: 0x2DF4 / 11764
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

void Function_62(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3038 / 12344
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&bParam0))
		{
			FIRE_STOP_ON_ACTOR(&bParam0);
		}
		SET_ACTOR_INVULNERABILITY(&bParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(&bParam0);
		CLEAR_ACTOR_MAX_SPEED(&bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bParam0);
		RESET_ACTOR_GAITS(&bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&bParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&bParam0);
		SET_ACTOR_INVULNERABILITY(&bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
	}
	return;
}

int Function_63(struct<1049> Param0) //Position: 0x30E8 / 12520
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	var uVar6;
	char[] cVar7[4];
	var uVar8;
	char* cVar9[8];
	struct<2> Var11;
	struct<2> Var13;
	struct<2> Var15;
	struct<2> Var17;
	struct<8> Var19;
	int iVar27;
	
	switch (Param0.f_984)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (Function_573(StackVal, *(&Param0 + 1000)))
			{
				GET_POSITION(&Global_54076, &Param0 + 1000);
			}
			if (!Function_573(StackVal, *(&Param0 + 1000)))
			{
				STREAMING_LOAD_BOUNDS(*(&Param0 + 1000), 10.0f, 0);
			}
			switch (Param0.f_988)
			{
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					if (IS_ACTOR_PLAYER(&Global_54076))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
					}
					Function_25(&Global_54076, 0);
					REQUEST_ACTION_TREE("custom/stand_hostage");
					REQUEST_ACTION_TREE("custom/handoff");
					REQUEST_ANIM_SET("handoff", 0);
					if (IS_PLAYER_DEADEYE(0))
					{
						CANCEL_DEADEYE();
						CANCEL_TIME_WARP(1);
					}
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&Global_54076), "procStop", 1);
					if (Param0.f_1016 == 1)
					{
						Function_40(&Param0, 4);
						Function_560(&Param0 + 952);
					}
					else
					{
						Function_40(&Param0, 3);
					}
					break;
				
				default:
					Function_40(&Param0, 4);
					Function_560(&Param0 + 952);
					break;
			}
			break;
		
		case 0x00000002:
			if (!Function_573(StackVal, *(&Param0 + 1000)))
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 1000), 10.0f))
				{
					if (!IS_CUTSCENEOBJECT_PAUSED(&Param0 + 936) && HUD_IS_FADED())
					{
						Function_41(1.0f);
						Function_40(&Param0, 4);
						Function_560(&Param0 + 952);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procStop") == 1)
			{
				GET_ACTOR_VELOCITY(&Global_54076, &Var15);
				if (VMAG(Var15) > 1.0f)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj", GET_MOUNT(&Global_54076));
						TASK_CLEAR(&Global_54076);
						TASK_DISMOUNT(&Global_54076, 1);
						TASK_PRIORITY_SET(&Global_54076, true);
					}
					else if (IS_ACTOR_VALID(GET_VEHICLE(&Global_54076)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj", GET_VEHICLE(&Global_54076));
						Function_81(GET_VEHICLE(&Global_54076), 0, 0, 2);
						TASK_CLEAR(&Global_54076);
						TASK_VEHICLE_LEAVE(&Global_54076);
						TASK_PRIORITY_SET(&Global_54076, true);
					}
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
				}
			}
			else if (!(((GET_TASK_STATUS(&Global_54076, 12) != 1 || GET_TASK_STATUS(&Global_54076, 12) != 3) || GET_TASK_STATUS(&Global_54076, 55) != 1) || GET_TASK_STATUS(&Global_54076, 55) != 3))
			{
				if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))))
				{
					START_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj")));
				}
				bVar1 = Function_80(&Param0, 1);
				if (IS_ACTOR_VALID(&bVar1))
				{
					TASK_CLEAR(&Global_54076);
					TASK_GO_NEAR_ACTOR(&Global_54076, &bVar1, 2,5f, 1);
					TASK_PRIORITY_SET(&Global_54076, true);
				}
				else
				{
					LOG_ERROR("Cutscene could not find actor for player to greet");
				}
				Function_40(&Param0, 4);
				Function_560(&Param0 + 952);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&Param0 + 936))
			{
				switch (Param0.f_988)
				{
					case 0x00000003:
						if (Function_78(&Param0 + 952, 5.0f))
						{
							fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
							fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
							GET_OBJECT_POSITION(&fVar4, &cVar9);
							CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
							GET_OBJECT_RELATIVE_POSITION(StackVal, &fVar4, Vector(-3,285f, 0.0f, -3,285f), &cVar9);
							GET_OBJECT_POSITION(&fVar5, &Var11);
							cVar9.f_4 = (StackVal + FABS((StackVal - StackVal)));
							FIND_GROUND_INTERSECTION(&cVar9, 100.0f, &cVar9, &Var13);
							CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
							if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar5))))
							{
								bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar5));
								ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&fVar5));
							}
							if (IS_ACTOR_VALID(&bVar0))
							{
								ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&fVar5));
								TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&fVar5), cVar9, 0.0f, 1, 1, 1);
							}
							if (IS_ACTOR_VALID(&bVar0))
							{
								cVar9 = (cVar9 + 3.0f);
								TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&bVar0), cVar9, 0.0f, 1, 1, 1);
								TASK_STAND_STILL(&bVar0, 5.0f, 0, 0);
							}
							SNAP_OBJECT_TO_GROUND(&bVar0, 20.0f, 0, 1092616192);
							SNAP_OBJECT_TO_GROUND(&fVar5, 20.0f, 0, 1092616192);
						}
						break;
					
					case 0x00000001:
						fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
						uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
						bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
						iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
						switch (Param0.f_1012)
						{
							case 0x00000000:
								cVar9 = Global_54078;
								CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
								GET_OBJECT_POSITION(&fVar5, &Var17);
								bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar4));
								if (IS_ACTOR_VALID(&bVar0))
								{
									bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar4));
									ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&fVar4));
									Function_77(&Global_54076);
									cVar9 = Function_77(&Global_54076);
									cVar9 = (cVar9 + 3.0f);
									TELEPORT_ACTOR(&bVar0, &cVar9, 1, 1, 1);
								}
								ACTOR_START_FORCE_HOLSTER(&bVar1, 0, 0);
								ACTOR_START_FORCE_HOLSTER(&iVar2, 0, 0);
								SNAP_OBJECT_TO_GROUND(&bVar1, 20.0f, 0, 1092616192);
								TASK_STAND_STILL(&bVar1, -1.0f, 0, 0);
								CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
								Var13 = Vector(0.0f, 1.0f, 0.0f);
								ROTATE_OBJECT_AROUND_AXIS(&bVar1, &Var13, 165.0f);
								Var11 = Global_54078;
								GET_OBJECT_RELATIVE_POSITION(StackVal, &bVar1, Vector(0.0f, 0.0f, -1.0f), &Var11);
								TELEPORT_ACTOR_WITH_HEADING(&iVar2, Var11, 180.0f, 1, 1, 1);
								TASK_STAND_STILL(&iVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(&iVar2, 20.0f, 0, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(&iVar2, &Var13, 165.0f);
								Function_74(&iVar2, &Global_54076);
								Function_533(&Param0 + 1048, 2048);
								if (IS_ACTOR_VALID(&bVar0))
								{
									cVar9 = (cVar9 + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&bVar0), cVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(&bVar0, 5.0f, 0, 0);
								}
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_430(&Param0 + 952, 0,5f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_430(&Param0 + 952, 7.0f))
								{
									fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
									fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
									uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
									bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
									iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
									Function_73(&Param0, &bVar1, &iVar2, 4);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(&Param0 + 928))
								{
									if (GRINGO_ACTOR_CAN_USE(&Param0 + 928, "UseCase1", &bVar1))
									{
										SNAP_ACTOR_TO_GRINGO(&bVar1, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", false, 0, 0);
										TASK_USE_GRINGO(&bVar1, &Param0 + 928, "UseCase1", 1, 1);
										Function_560(&Param0 + 952);
									}
									else
									{
										LOG_ERROR("Cannot use this cutscene gringo?");
									}
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iVar2)))
								{
									if (Function_70(&Param0 + 952) < 0,75f && !Function_531(Param0.f_1048, 2048))
									{
										SNAP_ACTOR_TO_GRINGO(&iVar2, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", false, 0, 0);
										SET_ACTOR_UPDATE_PRIORITY(&iVar2, false);
										TASK_PRIORITY_SET(&iVar2, true);
										TASK_USE_GRINGO(&iVar2, &Param0 + 928, "ChildUse", 1, 1);
										Function_534(&Param0 + 1048, 2048);
										Function_560(&Param0 + 952);
										Param0.f_1012++;
									}
								}
								break;
							
							case 0x00000005:
								if (Function_430(&Param0 + 952, 9.0f))
								{
									Function_40(&Param0, 5);
									Param0.f_1012++;
								}
								break;
						}
						break;
					
					case 0x00000002:
						fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
						fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
						uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
						bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
						iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
						switch (Param0.f_1012)
						{
							case 0x00000000:
								GET_OBJECT_POSITION(&fVar5, &cVar9);
								CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
								GET_OBJECT_POSITION(&fVar5, &Var17);
								Var15 = Vector(-5,348521f, 0.0f, -3,826143f);
								cVar9 = Vector(StackVal, StackVal, StackVal) + Vector(Var15, Var17, StackVal);
								FIND_GROUND_INTERSECTION(&cVar9, 20.0f, &cVar9, &Var13);
								if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar4))))
								{
									bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&fVar4));
									ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&fVar4));
								}
								ACTOR_START_FORCE_HOLSTER(&bVar1, 0, 0);
								ACTOR_START_FORCE_HOLSTER(&iVar2, 0, 0);
								TELEPORT_ACTOR_WITH_HEADING(&bVar1, cVar9, 0.0f, 1, 1, 1);
								SNAP_OBJECT_TO_GROUND(&bVar1, 20.0f, 0, 1092616192);
								TASK_STAND_STILL(&bVar1, -1.0f, 0, 0);
								CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
								Var13 = Vector(0.0f, 1.0f, 0.0f);
								ROTATE_OBJECT_AROUND_AXIS(&bVar1, &Var13, 165.0f);
								Var11 = cVar9;
								GET_OBJECT_RELATIVE_POSITION(StackVal, &bVar1, Vector(0.0f, 0.0f, -1.0f), &Var11);
								TELEPORT_ACTOR_WITH_HEADING(&iVar2, Var11, 180.0f, 1, 1, 1);
								TASK_STAND_STILL(&iVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(&iVar2, 20.0f, 0, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(&iVar2, &Var13, 165.0f);
								Function_533(&Param0 + 1048, 2048);
								if (IS_ACTOR_VALID(&bVar0))
								{
									cVar9 = (cVar9 + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&bVar0), cVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(&bVar0, 5.0f, 0, 0);
								}
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_430(&Param0 + 952, 0,5f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_430(&Param0 + 952, 7.0f))
								{
									fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
									fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
									uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
									bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
									iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
									Function_73(&Param0, &bVar1, &iVar2, 4);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(&Param0 + 928))
								{
									SNAP_ACTOR_TO_GRINGO(&bVar1, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", false, 0, 0);
									TASK_USE_GRINGO(&bVar1, &Param0 + 928, "UseCase1", 1, 1);
									Function_560(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_70(&Param0 + 952) < 0,75f && !Function_531(Param0.f_1048, 2048))
								{
									SNAP_ACTOR_TO_GRINGO(&iVar2, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", false, 0, 0);
									SET_ACTOR_UPDATE_PRIORITY(&iVar2, false);
									TASK_PRIORITY_SET(&iVar2, true);
									TASK_USE_GRINGO(&iVar2, &Param0 + 928, "ChildUse", 1, 1);
									Function_534(&Param0 + 1048, 2048);
									Function_560(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000005:
								if (Function_430(&Param0 + 952, 9.0f))
								{
									Function_40(&Param0, 5);
									Param0.f_1012++;
								}
								break;
						}
						break;
					
					case 0x00000004:
					case 0x00000005:
					case 0x00000006:
					case 0x00000007:
						switch (Param0.f_1012)
						{
							case 0x00000000:
								if ((HAS_ACTION_TREE_LOADED("custom/stand_hostage") && HAS_ANIM_SET_LOADED("handoff")) || Function_430(&Param0 + 952, 1.0f))
								{
									Function_560(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000001:
								bVar0 = Function_80(&Param0, 1);
								if (IS_ACTOR_VALID(&bVar0))
								{
									Function_69(&bVar0, &cVar9);
								}
								else
								{
									cVar9 = Vector(0.0f, 0.0f, 0.0f);
								}
								if ((Function_430(&Param0 + 952, 0,5f) || Param0.f_1016 != 1) || VDIST(Global_54078, cVar9) > 3.0f)
								{
									if (IS_OBJECT_VALID(&Param0 + 944))
									{
										DESTROY_VOLUME(&Param0 + 944);
									}
									if (Param0.f_988 == 4)
									{
										cVar9 = Vector(-2096,014f, 16,449f, 2603,359f);
									}
									else if (Param0.f_988 == 5)
									{
										cVar9 = Vector(761,411f, 79,458f, 1232,734f);
									}
									else if (Param0.f_988 == 6)
									{
										cVar9 = Vector(-2671,387f, 31,363f, 4253,713f);
									}
									else if (Param0.f_988 == 7)
									{
										cVar9 = Vector(-821,7f, 93,222f, 2418,31f);
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad value");
									}
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("bhCutsceneVol") };
									*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, cVar9, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
									if (Param0.f_988 == 4)
									{
										cVar9 = Vector(-2104,648f, 16,46f, 2605,749f);
										Var13 = Vector(0.0f, 216.0f, 0.0f);
									}
									else if (Param0.f_988 == 5)
									{
										cVar9 = Vector(751,328f, 78,525f, 1233,59f);
										Var13 = Vector(0.0f, 235.0f, 0.0f);
									}
									else if (Param0.f_988 == 6)
									{
										cVar9 = Vector(-2680,063f, 31,548f, 4255,704f);
										Var13 = Vector(0.0f, 251.0f, 0.0f);
									}
									else if (Param0.f_988 == 7)
									{
										cVar9 = Vector(-824,746f, 92,129f, 2406,763f);
										Var13 = Vector(0.0f, 236.0f, 0.0f);
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad handshaker(1) position value");
									}
									TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 1, 1);
									PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								if (Param0.f_988 == 4)
								{
									cVar9 = Vector(-2096,996f, 16,449f, 2605,508f);
									Var13 = Vector(0.0f, 167.0f, 0.0f);
								}
								else if (Param0.f_988 == 5)
								{
									cVar9 = Vector(754,635f, 78,525f, 1234,821f);
									Var13 = Vector(0.0f, 352,531f, 0.0f);
								}
								else if (Param0.f_988 == 6)
								{
									cVar9 = Vector(-2672,115f, 31,384f, 4254,054f);
									Var13 = Vector(0.0f, -10.0f, 0.0f);
								}
								else if (Param0.f_988 == 7)
								{
									cVar9 = Vector(-821,642f, 93,294f, 2419,156f);
									Var13 = Vector(0.0f, 90.0f, 0.0f);
								}
								else
								{
									LOG_ERROR("Procmission Cutscene Update got a bad value");
								}
								*(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, "handoffGringo", "$/content/scripting/gringo/simplegringo/handoff", cVar9, Var13));
								Function_68(&bVar0, Function_80(&Param0, 0), 0, 1);
								iVar27 = 0;
								while (iVar27 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
								{
									bVar0 = Function_80(&Param0, iVar27);
									if (IS_ACTOR_VALID(&bVar0))
									{
										if (!IS_ACTOR_PLAYER(&bVar0))
										{
											SET_ACTOR_UPDATE_PRIORITY(&bVar0, false);
											TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
										}
										switch (iVar27)
										{
											case 0x00000000:
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2094,226f, 16,449f, 2608,347f);
													Var13 = Vector(0.0f, 298,712f, 0.0f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(757,028f, 78,525f, 1235,217f);
													Var13 = Vector(0.0f, 346.0f, 0.0f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2668,537f, 31,387f, 4253,711f);
													Var13 = Vector(0.0f, 234,172f, 0.0f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-821,477f, 93,365f, 2420,748f);
													Var13 = Vector(0.0f, 173,273f, 0.0f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad victim position value");
												}
												REMOVE_OBJECT_FROM_ATTACHMENT(&bVar0);
												FREE_FROM_HOGTIE(&bVar0);
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 0, 1);
												Function_62(&bVar0, 1, 1);
												SET_ANIM_SET_FOR_ACTOR(&bVar0, "stand_hostage", 0);
												SET_ACTION_NODE_FOR_ACTOR(&bVar0, "stand_hostage/walk_pose");
												DELETE_ACCESSORY("ANKLE_BIND", &bVar0);
												SET_ACTOR_MAX_SPEED(&bVar0, 1);
												MEMORY_CLEAR_ALL(&bVar0);
												TASK_CLEAR(&bVar0);
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2091,603f, 16,962f, 2605,353f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(757,973f, 78,525f, 1234,922f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2657,971f, 31,386f, 4258,836f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-823,57f, 93,809f, 2427,074f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad victim face actor value");
												}
												TASK_FACE_COORD(&bVar0, &cVar9, 1);
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000001:
												MEMORY_CONSIDER_AS(&bVar0, &Global_54076, false);
												ACTOR_HOLSTER_WEAPON(&bVar0, 0);
												TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000002:
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2095,837f, 16,449f, 2608,938f);
													Var13 = Vector(0.0f, 298,712f, 0.0f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(756,759f, 78,525f, 1237,865f);
													Var13 = Vector(0.0f, 59,078f, 0.0f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2668,258f, 31,387f, 4252,612f);
													Var13 = Vector(0.0f, 218,528f, 0.0f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-819,311f, 93,365f, 2421,17f);
													Var13 = Vector(0.0f, 135,445f, 0.0f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 1, 1);
												TASK_CLEAR(&bVar0);
												if (!IS_ACTOR_VALID(Function_80(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_80(&Param0, 0), -1.0f, 0);
													UNK_0x2E84E682(&bVar0, 0);
													GIVE_WEAPON_TO_ACTOR(&bVar0, 40, 0.0f, 1, 1);
													ACTOR_DRAW_ANY_WEAPON(&bVar0, 0);
													AI_GOAL_AIM_AT_OBJECT(&bVar0, Function_80(&Param0, 0), 0);
												}
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000003:
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2091,431f, 16,963f, 2603,127f);
													Var13 = Vector(0.0f, 167.0f, 0.0f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(756,564f, 78,525f, 1232,389f);
													Var13 = Vector(0.0f, 169,678f, 0.0f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2661,205f, 31,386f, 4254,576f);
													Var13 = Vector(0.0f, 0.0f, 0.0f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-824,301f, 93,365f, 2421,301f);
													Var13 = Vector(0.0f, 263,273f, 0.0f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 1, 1);
												TASK_CLEAR(&bVar0);
												if (!IS_ACTOR_VALID(Function_80(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_80(&Param0, 0), -1.0f, 0);
												}
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000004:
												if (Param0.f_988 == 4)
												{
													cVar9 = Vector(-2091,729f, 16,449f, 2610,241f);
													Var13 = Vector(0.0f, 13.0f, 0.0f);
												}
												else if (Param0.f_988 == 5)
												{
													cVar9 = Vector(763,822f, 79,456f, 1234,328f);
													Var13 = Vector(0.0f, 93,67f, 0.0f);
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2668,106f, 31,387f, 4256,549f);
													Var13 = Vector(0.0f, 0.0f, 0.0f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-823,502f, 93,809f, 2430,243f);
													Var13 = Vector(0.0f, 353,273f, 0.0f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, cVar9, 1, 1, 1);
												TASK_CLEAR(&bVar0);
												if (IS_ACTOR_VALID(Function_80(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_80(&Param0, 0), -1.0f, 0);
												}
												TASK_PRIORITY_SET(&bVar0, true);
												break;
											
											case 0x00000005:
												if (Param0.f_988 == 4)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (Param0.f_988 == 5)
												{
													LOG_ERROR("Blackwater does not have a rooftop actor.");
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2669,659f, 35,673f, 4252,948f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-826,75f, 96,959f, 2425,077f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad rooftop (1) position value");
												}
												TASK_CLEAR(&bVar0);
												TASK_GO_NEAR_COORD(&bVar0, &cVar9, 0,3f, 1);
												break;
											
											case 0x00000006:
												if (Param0.f_988 == 4)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (Param0.f_988 == 5)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (Param0.f_988 == 6)
												{
													cVar9 = Vector(-2670,716f, 35,673f, 4255,13f);
												}
												else if (Param0.f_988 == 7)
												{
													cVar9 = Vector(-824,29f, 96,959f, 2427,185f);
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad rooftop (1) position value");
												}
												TASK_CLEAR(&bVar0);
												TASK_GO_NEAR_COORD(&bVar0, &cVar9, 0,3f, 1);
												break;
											
											default:
												LOG_ERROR("Unknown actor index for PROCMISSION_CUTSCENE_TYPE_BOUNTY_");
												break;
											}
									}
									iVar27++;
								}
								if (Param0.f_988 == 4)
								{
									cVar7 = Function_67(Global_46760[0], "narmadillo", "sheriffsOffice", 1);
									uVar8 = "";
									cVar9 = Vector(-822,845f, 93,809f, 2423,713f);
								}
								else if (Param0.f_988 == 5)
								{
									cVar7 = Function_67(Global_46914[0], "blackwater", "policeStation01", 1);
									uVar8 = Function_67(Global_46914[0], "blackwater", "policeStation01", 2);
									cVar9 = Vector(761,697f, 79,456f, 1235,028f);
								}
								else if (Param0.f_988 == 6)
								{
									cVar7 = Function_67(Global_46866[0], "nchuparosa", "cityHall01", 6);
									uVar8 = Function_67(Global_46866[0], "nchuparosa", "cityHall01", 1);
									cVar9 = Vector(-2668,537f, 31,387f, 4253,711f);
								}
								else if (Param0.f_988 == 7)
								{
									cVar7 = Function_67(Global_46816[0], "hennigansRanch", "stockade01", 1);
									uVar8 = "";
									cVar9 = Vector(-822,845f, 93,809f, 2423,713f);
								}
								else
								{
									LOG_ERROR("Procmission Cutscene Update got a bad door open position");
								}
								if (IS_DOOR_VALID(&cVar7))
								{
									OPEN_DOOR(&cVar7, &cVar9, 4.0f);
								}
								if (IS_DOOR_VALID(&uVar8))
								{
									OPEN_DOOR(&uVar8, &cVar9, 4.0f);
								}
								if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
								{
									bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"));
									if (IS_OBJECT_VALID(&bVar0))
									{
										if (Param0.f_988 == 4)
										{
											if (IS_ACTOR_VALID(&bVar0))
											{
												if (IS_ACTOR_VEHICLE(&bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-2090,139f, 16,44f, 2595,838f), 128,422f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-2093,36f, 16,449f, 2598,952f), 215,238f, 1, 1, 1);
												}
											}
										}
										else if (Param0.f_988 == 5)
										{
											if (IS_ACTOR_VALID(&bVar0))
											{
												if (IS_ACTOR_VEHICLE(&bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(752,488f, 78,553f, 1226,634f), 174,158f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(752,488f, 78,553f, 1226,634f), 174,158f, 1, 1, 1);
												}
											}
										}
										else if (Param0.f_988 == 6)
										{
											if (IS_ACTOR_VALID(&bVar0))
											{
												if (IS_ACTOR_VEHICLE(&bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-2676,581f, 31,359f, 4246,866f), 72.0f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-2676,581f, 31,359f, 4246,866f), 72.0f, 1, 1, 1);
												}
											}
										}
										else if (Param0.f_988 == 7)
										{
											if (IS_ACTOR_VALID(&bVar0))
											{
												if (IS_ACTOR_VEHICLE(&bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-816,61f, 92,886f, 2418,169f), 40.0f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &bVar0, Vector(-818,287f, 93,25f, 2419,963f), 355.0f, 1, 1, 1);
												}
											}
										}
										else
										{
											LOG_ERROR("Procmission Cutscene horse/vehicle position not defined");
										}
									}
								}
								Function_560(&Param0 + 952);
								Param0.f_1012++;
								break;
							
							case 0x00000003:
								if (Function_430(&Param0 + 952, 1,11f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								bVar1 = Function_80(&Param0, 0);
								if (!IS_ACTOR_VALID(&bVar1))
								{
									bVar1 = &Global_54076;
								}
								iVar2 = Function_80(&Param0, 1);
								uVar3 = Function_80(&Param0, 2);
								if (!IS_ACTOR_PLAYER(&bVar1))
								{
									TASK_FOLLOW_OBJECT_AT_DISTANCE(&uVar3, &bVar1, 0,5f, 1);
									TASK_PRIORITY_SET(&uVar3, true);
									if (Param0.f_988 == 4)
									{
										cVar9 = Vector(-2086,59f, 16,964f, 2603,988f);
									}
									else if (Param0.f_988 == 5)
									{
										cVar9 = Vector(764,435f, 79,455f, 1236,632f);
									}
									else if (Param0.f_988 == 6)
									{
										cVar9 = Vector(-2659,724f, 31,386f, 4255,178f);
									}
									else if (Param0.f_988 == 7)
									{
										cVar9 = Vector(-824,114f, 93,809f, 2428,695f);
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad go to coord value");
									}
									SET_ACTOR_MAX_SPEED(&bVar1, 1);
									TASK_GO_NEAR_COORD(&bVar1, &cVar9, 1.0f, 1);
									TASK_PRIORITY_SET(&bVar1, true);
								}
								Function_62(&iVar2, 1, 1);
								if (Param0.f_988 == 4)
								{
									cVar9 = Vector(-2096,996f, 16,449f, 2605,508f);
									TELEPORT_ACTOR(&Global_54076, &cVar9, 1, 1, 1);
									cVar9 = Vector(-2097,315f, 16,4494f, 2606,89f);
									TELEPORT_ACTOR(&iVar2, &cVar9, 1, 1, 1);
								}
								else if (Param0.f_988 == 6)
								{
									cVar9 = Vector(-2672,348f, 31,387f, 4252,322f);
									TELEPORT_ACTOR_WITH_HEADING(&Global_54076, cVar9, 150,228f, 1, 1, 1);
									cVar9 = Vector(-2672,115f, 31,384f, 4254,054f);
									TELEPORT_ACTOR_WITH_HEADING(&iVar2, cVar9, 351,93f, 1, 1, 1);
								}
								else if (Param0.f_988 == 7)
								{
									cVar9 = Vector(-821,642f, 93,294f, 2419,156f);
									TELEPORT_ACTOR(&Global_54076, &cVar9, 1, 1, 1);
									cVar9 = Vector(-823,061f, 93,29355f, 2419,155f);
									TELEPORT_ACTOR(&iVar2, &cVar9, 1, 1, 1);
								}
								else if (Param0.f_988 == 5)
								{
									cVar9 = Vector(754,635f, 78,525f, 1234,821f);
									TELEPORT_ACTOR(&Global_54076, &cVar9, 1, 1, 1);
									cVar9 = Vector(754,8007f, 78,52634f, 1233,557f);
									TELEPORT_ACTOR(&iVar2, &cVar9, 1, 1, 1);
								}
								Function_74(&iVar2, &Global_54076);
								Function_74(&Global_54076, &iVar2);
								RESET_ANIM_SET_FOR_ACTOR(&iVar2, 0);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								SET_ANIM_SET_FOR_ACTOR(&iVar2, "handoff", 0);
								SET_LINKED_ANIM_TARGET(&iVar2, &Global_54076);
								SET_ACTION_NODE_FOR_ACTOR(&iVar2, "handoff");
								SAY_SINGLE_LINE_CONTEXT(&iVar2, 299, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
								Param0.f_1012++;
								break;
							
							case 0x00000005:
								if (Function_430(&Param0 + 952, 7.0f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000006:
								iVar2 = Function_80(&Param0, 1);
								REMOVE_ACTION_TREE("custom/stand_hostage");
								REMOVE_ACTION_TREE("custom/handoff");
								REMOVE_ANIM_SET("handoff");
								CLEAR_LINKED_ANIM_TARGET(&Global_54076);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								RESET_ANIM_SET_FOR_ACTOR(&iVar2, 0);
								Function_40(&Param0, 5);
								iVar27 = 0;
								while (iVar27 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
								{
									bVar0 = Function_80(&Param0, iVar27);
									if (IS_ACTOR_VALID(&bVar0))
									{
										MEMORY_CLEAR_ALL(&bVar0);
									}
									iVar27++;
								}
								Param0.f_1012++;
								break;
							
							case 0x00000007:
								break;
						}
						break;
					
					case 0x0000000F:
					case 0x00000010:
					case 0x00000011:
					case 0x00000012:
					case 0x00000013:
					case 0x00000014:
						switch (Param0.f_1012)
						{
							case 0x00000000:
								PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								bVar0 = Function_80(&Param0, 0);
								RESET_ANIM_SET_FOR_ACTOR(&bVar0, 0);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								Function_62(&bVar0, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(&bVar0, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar0, 0);
								if (IS_ACTOR_CRIPPLED(&bVar0, 5))
								{
									SET_CRIPPLE_FLAG(&bVar0, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutsceneGringo") };
									Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									cVar9 = Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Var13 = Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, &Var19, "$/content/scripting/gringo/simplegringo/hug_link", cVar9, Var13));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&Param0 + 928), 100.0f, 0, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								if (IS_OBJECT_VALID(&Param0 + 944))
								{
									DESTROY_VOLUME(&Param0 + 944);
								}
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 6.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var11 = Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var15 = Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								if (!Function_573(StackVal, Var11))
								{
									if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
									{
										TELEPORT_ACTOR_WITH_HEADING(GET_MOST_RECENT_MOUNT(&Global_54076), Var11, GET_Y(&Var15), 1, 1, 1);
										TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&Global_54076), -1.0f, 0, 0);
									}
								}
								SNAP_ACTOR_TO_GRINGO(&bVar0, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", true, 1, 0);
								TASK_USE_GRINGO(&bVar0, &Param0 + 928, "UseCase1", 1, 1);
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								bVar0 = Function_80(&Param0, 0);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bVar0)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(&Param0 + 928, "Male", &cVar9);
									TELEPORT_ACTOR_WITH_HEADING(&Global_54076, cVar9, GRINGO_GET_USE_COMPONENT_HEADING_EXT(&Param0 + 928, "Male"), 1, 1, 1);
									TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
									Function_560(&Param0 + 952);
									DECOR_SET_BOOL(&Global_54076, "escwavReady", 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_430(&Param0 + 952, 2.0f))
								{
									TASK_USE_GRINGO(&Global_54076, &Param0 + 928, "Male", 1, 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (Function_430(&Param0 + 952, 3.0f))
								{
									bVar0 = Function_80(&Param0, 0);
									SAY_SINGLE_LINE_CONTEXT(&bVar0, 103, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
									Function_560(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_430(&Param0 + 952, 5,5f))
								{
									DECOR_REMOVE(&Global_54076, "escwavReady");
									Function_40(&Param0, 5);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000005:
								break;
						}
						break;
					
					case 0x00000015:
						switch (Param0.f_1012)
						{
							case 0x00000000:
								bVar1 = Function_80(&Param0, 0);
								iVar2 = Function_80(&Param0, 1);
								cVar9 = Vector(-3.0f, 0.0f, -1.0f);
								Var13 = Vector(0.0f, 0.0f, 0.0f);
								Function_64(GET_OBJECT_FROM_ACTOR(&bVar1), 1, &cVar9, &Var13);
								Function_62(&iVar2, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(&iVar2, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(&iVar2, 0);
								if (IS_ACTOR_CRIPPLED(&iVar2, 5))
								{
									SET_CRIPPLE_FLAG(&iVar2, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutsceneGringo") };
									*(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, &Var19, "$/content/scripting/gringo/simplegringo/shakehands_link", cVar9, Var13));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&Param0 + 928), 100.0f, 0, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								SNAP_ACTOR_TO_GRINGO(&Global_54076, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", true, 0, 0);
								SNAP_ACTOR_TO_GRINGO(&iVar2, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", true, 0, 0);
								TASK_PRIORITY_SET(&Global_54076, true);
								TASK_CLEAR(&Global_54076);
								TASK_USE_GRINGO(&Global_54076, &Param0 + 928, "UseCase1", 1, 1);
								iVar27 = TASK_SEQUENCE_OPEN();
								TASK_CLEAR(false);
								TASK_USE_GRINGO(false, &Param0 + 928, "ChildUse", 1, 1);
								TASK_VEHICLE_ENTER(0, &bVar1, 1, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_PRIORITY_SET(&bVar0, true);
								TASK_SEQUENCE_PERFORM(&iVar2, iVar27);
								if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
								{
									Var11 = Vector(-5.0f, 0.0f, 0.0f);
									Var15 = Vector(0.0f, 90.0f, 0.0f);
									Function_64(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992), 1, &Var11, &Var15);
									TELEPORT_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076), &Var11, 1, 1, 1);
									SNAP_OBJECT_TO_GROUND(GET_MOST_RECENT_MOUNT(&Global_54076), 100.0f, 0, 1092616192);
								}
								if (IS_OBJECT_VALID(&Param0 + 944))
								{
									DESTROY_VOLUME(&Param0 + 944);
								}
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								Function_560(&Param0 + 952);
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_430(&Param0 + 952, 8,5f))
								{
									bVar1 = Function_80(&Param0, 0);
									iVar2 = Function_80(&Param0, 1);
									START_VEHICLE(&bVar1);
									SET_VEHICLE_ALLOWED_TO_DRIVE(&bVar1, 1);
									if (!GET_ACTOR_IN_VEHICLE_SEAT(&bVar1, false) != &iVar2)
									{
										SET_ACTOR_IN_VEHICLE(&iVar2, &bVar1, 0);
									}
									TASK_CLEAR(&iVar2);
									TASK_PRIORITY_SET(&iVar2, true);
									TASK_FLEE_COORD(&iVar2, &Global_54078, 4, -1.0f, -1.0f, 0);
									Function_40(&Param0, 5);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								break;
						}
						break;
					
					case 0x00000008:
					case 0x00000009:
					case 0x0000000A:
					case 0x0000000B:
					case 0x0000000C:
					case 0x0000000D:
					case 0x0000000E:
						switch (Param0.f_1012)
						{
							case 0x00000000:
								Function_560(&Param0 + 952);
								PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								if (IS_OBJECT_VALID(&Param0 + 944))
								{
									DESTROY_VOLUME(&Param0 + 944);
								}
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								iVar2 = Function_80(&Param0, 1);
								Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var11 = Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var15 = Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								if (!Function_573(StackVal, Var11))
								{
									if (IS_ACTOR_VALID(&iVar2))
									{
										STOP_VEHICLE(&iVar2);
										TELEPORT_ACTOR_WITH_HEADING(&iVar2, Var11, GET_Y(&Var15), 1, 1, 1);
									}
								}
								bVar1 = Function_80(&Param0, 0);
								Function_62(&bVar1, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(&bVar1, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
								SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(&bVar1, 1);
								if (IS_ACTOR_CRIPPLED(&bVar1, 5))
								{
									SET_CRIPPLE_FLAG(&bVar1, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									SNAP_OBJECT_TO_GROUND(&Param0 + 992, 5.0f, 0, 5.0f);
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutsceneGringo") };
									Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									cVar9 = Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Var13 = Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									*(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, &Var19, "$/content/scripting/gringo/simplegringo/shakehands_link", cVar9, Var13));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&Param0 + 928), 100.0f, 0, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								SNAP_ACTOR_TO_GRINGO(&Global_54076, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", true, 0, 0);
								TASK_PRIORITY_SET(&Global_54076, true);
								TASK_CLEAR(&Global_54076);
								TASK_USE_GRINGO(&Global_54076, &Param0 + 928, "UseCase1", 1, 1);
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								bVar1 = Function_80(&Param0, 0);
								iVar2 = Function_80(&Param0, 1);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(&Param0 + 928, "ChildUse", &cVar9);
									SNAP_ACTOR_TO_GRINGO(&bVar1, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", true, 0, 0);
									iVar27 = TASK_SEQUENCE_OPEN();
									TASK_USE_GRINGO(false, &Param0 + 928, "ChildUse", 1, 1);
									TASK_FACE_ACTOR(0, &iVar2, 0, 3212836864);
									TASK_VEHICLE_ENTER(0, &iVar2, 1, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(&bVar1, iVar27);
									TASK_SEQUENCE_RELEASE(iVar27, 1);
									TASK_PRIORITY_SET(&bVar1, true);
									Function_560(&Param0 + 952);
									DECOR_SET_BOOL(&Global_54076, "transportReady", 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								bVar1 = Function_80(&Param0, 0);
								iVar2 = Function_80(&Param0, 1);
								if (Function_430(&Param0 + 952, 5.0f))
								{
									START_VEHICLE(&iVar2);
									SET_VEHICLE_ALLOWED_TO_DRIVE(&iVar2, 1);
									Function_560(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								bVar1 = Function_80(&Param0, 0);
								iVar2 = Function_80(&Param0, 1);
								if (Function_430(&Param0 + 952, 2,5f))
								{
									if (!IS_ACTOR_RIDING_VEHICLE(&bVar1))
									{
										TASK_CLEAR(&bVar1);
										SET_ACTOR_IN_VEHICLE(&bVar1, &iVar2, 0);
									}
									Function_560(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_430(&Param0 + 952, 1.0f))
								{
									bVar1 = Function_80(&Param0, 0);
									iVar2 = Function_80(&Param0, 1);
									TASK_CLEAR(&bVar1);
									Function_40(&Param0, 5);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000005:
								break;
						}
						break;
					
					case 0x00000000:
					default:
						LOG_ERROR("Undefined cutscene type");
						break;
				}
			}
			else
			{
				Function_41(1.0f);
				Function_40(&Param0, 5);
			}
			break;
		
		case 0x00000005:
			break;
		
		default:
			LOG_ERROR("Unhandled cutscene case");
			break;
	}
	return Param0.f_984;
}

void Function_64(bool bParam0, bool bParam1, struct<2> Param2) //Position: 0x5F5C / 24412
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&bParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_65(&Var0, &Param2))
			{
				Param2 = Var0;
			}
		}
		else
		{
			Param2 = Var0;
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&bParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_65(vector3 vParam0) //Position: 0x6089 / 24713
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_573(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_573(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

struct<8> Function_66(bool bParam0) //Position: 0x60FF / 24831
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_67(bool bParam0, char* cParam1, bool bParam3) //Position: 0x6128 / 24872
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_468(bParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[bParam09] + 56))
	{
		return "";
	}
	cParam1 = &cParam1;
	strcpy(&cVar0, "door", 8);
	if (bParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, bParam3, 8);
	memcpy(&cVar2, &Global_44085[bParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[bParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

int Function_68(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x61CD / 25037
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_69(var uParam0, int iParam1) //Position: 0x622D / 25133
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

float Function_70(vector3 vParam0) //Position: 0x623C / 25148
{
	if (Function_72(&vParam0))
	{
		if (Function_71(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_71(int iParam0) //Position: 0x6309 / 25353
{
	return Function_531(iParam0, 2);
}

bool Function_72(int iParam0) //Position: 0x6317 / 25367
{
	return Function_531(iParam0, 1);
}

void Function_73(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x6325 / 25381
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	
	if (!IS_ACTOR_MALE(&uParam2))
	{
		bParam3 = 2;
	}
	switch (bParam3)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000004:
		case 0x00000003:
			Function_515(GET_OBJECT_FROM_ACTOR(&uParam1));
			Var0 = Function_515(GET_OBJECT_FROM_ACTOR(&uParam1));
			Function_66(GET_OBJECT_FROM_ACTOR(&uParam1));
			Var2 = Function_66(GET_OBJECT_FROM_ACTOR(&uParam1));
			if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&iParam0 + 928)))
			{
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutsceneGringo") };
				(&iParam0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&iParam0 + 32, &Var4, "$/content/scripting/gringo/simplegringo/shakehands_link", Var0, Var2));
			}
			if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&iParam0 + 928)))
			{
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(&iParam0 + 928), 100.0f, 0, 1092616192);
			}
			else
			{
				LOG_ERROR("PROCMISSION_PERFORM_ENDING_ANIM - Invalid procmission cutscene gringo?");
			}
			break;
	}
}

void Function_74(int iParam0, int iParam1) //Position: 0x6473 / 25715
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_75(StackVal, &iParam0, Var0);
	return;
}

void Function_75(int iParam0, struct<2> Param1) //Position: 0x648F / 25743
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_76(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_76(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_76(int iParam0, struct<2> Param1) //Position: 0x64CA / 25802
{
	struct<2> Var0;
	
	Function_77(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_77(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_77(int iParam0) //Position: 0x654B / 25931
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_78(int iParam0, float fParam1) //Position: 0x655D / 25949
{
	if (Function_430(&iParam0, fParam1))
	{
		Function_79(&iParam0);
		return 1;
	}
	return 0;
}

void Function_79(vector3 vParam0) //Position: 0x6577 / 25975
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_80(int iParam0, int iParam1) //Position: 0x658E / 25998
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = "";
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&iParam0 + 992) - 1))
	{
		iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 992);
		if (IS_OBJECT_VALID(&iVar1))
		{
			if (GET_OBJECT_TYPE(&iVar1) == 15)
			{
				uVar3 = GET_ACTOR_FROM_OBJECT(&iVar1);
				if (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&uVar3), "procCutsceneIdx") == iParam1)
				{
					iVar2 = &uVar3;
					bVar0 = GET_OBJECTSET_SIZE(&iParam0 + 992) + 1;
				}
			}
		}
		bVar0++;
	}
	return &iVar2;
}

int Function_81(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6619 / 26137
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_82(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_82(&uParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6707 / 26375
{
	char* cVar0[32];
	
	Function_89();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_88(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_87(&uParam0, 0);
	Function_86(&uParam0, iParam1);
	Function_85(&uParam0, &iParam2);
	Function_84(&uParam0, iParam3);
	if (Function_83(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_83(int iParam0) //Position: 0x6973 / 26995
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_84(var uParam0, bool bParam1) //Position: 0x6997 / 27031
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_85(var uParam0, int iParam1) //Position: 0x69BB / 27067
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_86(var uParam0, bool bParam1) //Position: 0x69E1 / 27105
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_87(var uParam0, bool bParam1) //Position: 0x6A08 / 27144
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_88(bool bParam0) //Position: 0x6A2C / 27180
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_89() //Position: 0x6A4B / 27211
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

void Function_90(struct<1557> Param0) //Position: 0x6A9A / 27290
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (IS_ACTOR_VALID(&Param0 + 1708[iVar2]))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Param0 + 1708[iVar2]);
			if (IS_MOVER_FROZEN(&Param0 + 1708[iVar2]))
			{
				SET_MOVER_FROZEN(&Param0 + 1708[iVar2], 0);
			}
		}
		iVar2++;
	}
	Function_191(StackVal, &Param0, (&Param0 + 1568));
	Function_190(&Param0, 1);
	if (!Function_531(Param0.f_1496, 8))
	{
		if (Param0.f_1556 == Global_46760[0])
		{
			uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(-2165,563f, 12,324f, 2607,706f), Vector(0.0f, 182,189f, 0.0f));
			uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(-2161,82f, 16,449f, 2608,107f), Vector(0.0f, 349,417f, 0.0f));
			Function_189(&Param0, 15);
		}
		else if (Param0.f_1556 == Global_46914[0])
		{
			uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(792,785f, 78,306f, 1250,872f), Vector(0.0f, 123,505f, 0.0f));
			uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(793,597f, 79,173f, 1257,776f), Vector(0.0f, 93,857f, 0.0f));
			Function_189(&Param0, 16);
		}
		else if (Param0.f_1556 == Global_46866[0])
		{
			uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(-2686,292f, 31,548f, 4253,565f), Vector(0.0f, 308,231f, 0.0f));
			uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(-2684,374f, 31,367f, 4244,392f), Vector(0.0f, 81,639f, 0.0f));
			Function_189(&Param0, 17);
		}
		else if (Param0.f_1556 == Global_46850[0])
		{
			uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(-4339,046f, 27,233f, 4412,788f), Vector(0.0f, 194,885f, 0.0f));
			uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(-4340,432f, 26,887f, 4417,906f), Vector(0.0f, 61,019f, 0.0f));
			Function_189(&Param0, 18);
		}
		else if (Param0.f_1556 == Global_46816[0])
		{
			uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(-941,504f, 90,254f, 2425,321f), Vector(0.0f, 276,449f, 0.0f));
			uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(-935,218f, 90,201f, 2422,399f), Vector(0.0f, 221,523f, 0.0f));
			Function_189(&Param0, 19);
		}
		else if (Param0.f_1556 == Global_46816[1])
		{
			uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(124,45f, 73,286f, 2290,57f), Vector(0.0f, 92,725f, 0.0f));
			uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1480, Function_49(), Vector(118,563f, 73,286f, 2291,014f), Vector(0.0f, 357,567f, 0.0f));
			Function_189(&Param0, 20);
		}
		SNAP_OBJECT_TO_GROUND(&uVar0, 100.0f, 1, 1092616192);
		SNAP_OBJECT_TO_GROUND(&uVar1, 100.0f, 1, 1092616192);
		Function_187(&Param0, &Param0 + 1608, 0);
		Function_187(&Param0, &Param0 + 1708[0], 1);
		Function_187(&Param0, &uVar0, 2);
		Function_187(&Param0, &uVar1, 3);
	}
	else
	{
		Function_187(&Param0, &Param0 + 1608, 0);
		Function_187(&Param0, &Param0 + 1708[0], 1);
		Function_187(&Param0, &Param0 + 1708[1], 2);
		if (Param0.f_1556 == Global_46760[0])
		{
			Function_191(StackVal, &Param0, Vector(-2092,281f, 16,677f, 2606,116f));
			Function_189(&Param0, 4);
		}
		else if (Param0.f_1556 == Global_46914[0])
		{
			Function_191(StackVal, &Param0, Vector(757,028f, 78,525f, 1235,217f));
			Function_189(&Param0, 5);
		}
		else if (Param0.f_1556 == Global_46816[0])
		{
			Function_191(StackVal, &Param0, Vector(-823,682f, 97,037f, 2424,659f));
			Function_189(&Param0, 7);
		}
		else if (Param0.f_1556 == Global_46866[0])
		{
			Function_191(StackVal, &Param0, Vector(-2666,908f, 35,673f, 4254,63f));
			Function_189(&Param0, 6);
		}
	}
	Function_91(&Param0, &Param0 + 1480, 0);
	Function_472(&Param0, 0);
	return;
}

int Function_91(struct<989> Param0) //Position: 0x6EE7 / 28391
{
	var uVar0;
	var uVar1;
	
	switch (Param0.f_988)
	{
		case 0x00000003:
			if (!IS_OBJECTSET_VALID(&Param0 + 992))
			{
				return 0;
			}
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			*(&Param0 + 936) = Function_181(&uParam1, 0, &uVar0, 1, 0, 0);
			break;
		
		case 0x00000002:
			if (!IS_OBJECTSET_VALID(&Param0 + 992))
			{
				return 0;
			}
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
			if (!IS_OBJECT_VALID(&uVar0))
			{
			}
			if (!IS_OBJECT_VALID(&uVar1))
			{
			}
			REFERENCE_OBJECT(&uVar0);
			REFERENCE_OBJECT(&uVar1);
			*(&Param0 + 936) = Function_176(&uParam1, 0, &uVar0, &uVar1, 1, 0, 0);
			break;
		
		case 0x00000001:
			if (!IS_OBJECTSET_VALID(&Param0 + 992))
			{
				return 0;
			}
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
			if (!IS_OBJECT_VALID(&uVar0))
			{
			}
			REFERENCE_OBJECT(&uVar0);
			*(&Param0 + 936) = Function_173(&uParam1, 0, &uVar0, 1, 0, 0);
			break;
		
		case 0x00000004:
			Function_62(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_168(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000005:
			Function_62(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_163(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000006:
			Function_62(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_158(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000007:
			Function_62(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_153(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x0000000F:
			*(&Param0 + 936) = Function_149(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000010:
			*(&Param0 + 936) = Function_145(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000011:
			*(&Param0 + 936) = Function_141(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000012:
			*(&Param0 + 936) = Function_137(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000013:
			*(&Param0 + 936) = Function_133(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000014:
			*(&Param0 + 936) = Function_129(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000015:
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			*(&Param0 + 936) = Function_126(&Param0 + 32, 0, &Global_54076, &uVar0, 1, 1, 0);
			break;
		
		case 0x00000008:
			*(&Param0 + 936) = Function_122(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000009:
			*(&Param0 + 936) = Function_118(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000A:
			*(&Param0 + 936) = Function_114(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000B:
			*(&Param0 + 936) = Function_110(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000C:
			*(&Param0 + 936) = Function_106(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000D:
			*(&Param0 + 936) = Function_102(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000E:
			*(&Param0 + 936) = Function_98(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000000:
		default:
			LOG_ERROR("Unhandled Procmission Cutscene Type");
			break;
	}
	Function_40(&Param0, 1);
	if (&iParam2 == 1)
	{
		Function_534(&Param0 + 1048, 32768);
		Function_97(256);
	}
	if (((Param0.f_988 != 4 || Param0.f_988 != 5) || Param0.f_988 != 6) || Param0.f_988 != 7)
	{
		Function_92(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0x3f800000, 0);
	}
	else
	{
		Function_92(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	}
	Function_534(&Param0 + 1048, 256);
	return 1;
}

void Function_92(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x7362 / 29538
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_45();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_321();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
			AI_IGNORE_ACTOR(&uVar1);
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
				Function_77(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_49(), 2,802597E-45f, Function_77(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_46(19, 1, 0, 0);
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
	if (iParam10 && !Function_96())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_95()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_95()));
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
	if (Function_94(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_93(0x4000000);
	}
	if (Function_94(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_93(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_93(bool bParam0) //Position: 0x7614 / 30228
{
	bool bVar0;
	
	if (Function_531(bParam0, 1) && Function_531(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_94(int iParam0) //Position: 0x7648 / 30280
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_95() //Position: 0x7664 / 30308
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

bool Function_96() //Position: 0x76F2 / 30450
{
	if (Function_531(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_97(bool bParam0) //Position: 0x770D / 30477
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

var Function_98(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7720 / 30496
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_THI", 2, 1);
	}
	Function_99(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_99(var uParam0, int iParam1) //Position: 0x77B2 / 30642
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_101(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_100(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_100(int iParam0) //Position: 0x7820 / 30752
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 57,57088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(162,8414f, 74,79659f, 2201,986f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,047225f, 0,550466f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_101(bool bParam0) //Position: 0x7895 / 30869
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 43,50317f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(162,698f, 74,86543f, 2201,977f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,530979f, 0,889932f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_102(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x790A / 30986
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_MAN", 2, 1);
	}
	Function_103(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_103(var uParam0, int iParam1) //Position: 0x799C / 31132
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_105(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_104(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_104(int iParam0) //Position: 0x7A0A / 31242
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-425,0981f, 152,7598f, 1619,76f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,078849f, 1,100348f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_105(bool bParam0) //Position: 0x7A7F / 31359
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 40,42704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-426,3903f, 153,0767f, 1620,322f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,173728f, 1,59284f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_106(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7AF4 / 31476
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_HEN", 2, 1);
	}
	Function_107(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_107(var uParam0, int iParam1) //Position: 0x7B86 / 31622
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_109(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_108(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_108(int iParam0) //Position: 0x7BF4 / 31732
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,59192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-825,5594f, 93,69975f, 2404,281f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,05595f, 0,472653f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_109(bool bParam0) //Position: 0x7C69 / 31849
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 50,24756f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-824,426f, 95,18665f, 2404,868f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,08302f, 0,444165f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_110(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7CDE / 31966
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_ESC", 2, 1);
	}
	Function_111(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_111(var uParam0, int iParam1) //Position: 0x7D70 / 32112
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_113(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_112(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_112(int iParam0) //Position: 0x7DDE / 32222
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 51,94207f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4261,643f, 20,3573f, 4463,194f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,012928f, 0,297036f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_113(bool bParam0) //Position: 0x7E53 / 32339
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 19,91502f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-4263,063f, 21,06406f, 4462,477f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,063559f, 0,279046f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_114(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7EC8 / 32456
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_CHU", 2, 1);
	}
	Function_115(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_115(var uParam0, int iParam1) //Position: 0x7F5A / 32602
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_117(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_116(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 1, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 0, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 11.0f, 2);
	return;
}

void Function_116(int iParam0) //Position: 0x7FC8 / 32712
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 38,18072f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2753,704f, 34,86351f, 4297,391f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,183378f, -1,228742f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_117(bool bParam0) //Position: 0x803E / 32830
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-2749,547f, 33,27492f, 4299,523f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,013343f, -0,862829f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_118(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x80B3 / 32947
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_BLA", 2, 1);
	}
	Function_119(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_119(var uParam0, int iParam1) //Position: 0x8145 / 33093
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_121(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_120(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_120(int iParam0) //Position: 0x81B3 / 33203
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 52,41039f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(783,2053f, 80,20029f, 1318,624f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,050953f, 1,436288f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_121(bool bParam0) //Position: 0x8228 / 33320
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 46,1938f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(783,3696f, 80,22123f, 1319,231f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,436726f, 1,348244f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_122(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x829D / 33437
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_ARM", 2, 1);
	}
	Function_123(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_123(var uParam0, int iParam1) //Position: 0x832F / 33583
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_125(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_124(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_124(int iParam0) //Position: 0x839D / 33693
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 53,82149f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2139,764f, 17,80296f, 2607,612f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,011908f, -0,292308f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_125(int iParam0) //Position: 0x8412 / 33810
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,38674f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2140,938f, 17,70445f, 2607,843f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,564788f, -0,140291f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_126(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x8487 / 33927
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "mAtkDef_Bandit_End", 1, 1);
	}
	Function_127(&uVar0, &uParam2, &uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_127(var uParam0, var uParam1, int iParam2) //Position: 0x8519 / 34073
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_128(&uVar0, &uParam1, &iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 8,5f, 0);
	return;
}

void Function_128(int iParam0, var uParam1, bool bParam2) //Position: 0x854C / 34124
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &bParam2, Vector(-3,3f, 1,1f, 3,5f), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,7f, 1,5f, -2,1f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 1,1f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_129(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8600 / 34304
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_THI", 2, 1);
	}
	Function_130(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_130(var uParam0, int iParam1) //Position: 0x868F / 34447
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_132(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_131(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_131(int iParam0) //Position: 0x8705 / 34565
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 47,90799f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(123,7456f, 74,61844f, 2289,153f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,064519f, -3,13974f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_132(bool bParam0) //Position: 0x877A / 34682
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 47,90799f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(123,4807f, 75,50849f, 2289,178f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,102356f, 3,123572f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_133(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x87EF / 34799
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_HEN", 2, 1);
	}
	Function_134(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_134(var uParam0, int iParam1) //Position: 0x887E / 34942
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_136(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_135(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_135(int iParam0) //Position: 0x88F4 / 35060
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,76859f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-940,4845f, 91,59863f, 2427,075f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,028671f, 0,140625f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_136(bool bParam0) //Position: 0x8969 / 35177
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 49,76859f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-940,9657f, 91,59235f, 2426,499f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,223395f, 1,435132f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_137(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x89DE / 35294
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_ESC", 2, 1);
	}
	Function_138(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_138(var uParam0, int iParam1) //Position: 0x8A6D / 35437
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_140(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_139(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_139(int iParam0) //Position: 0x8AE3 / 35555
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4337,654f, 28,6333f, 4413,195f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,051522f, 1,741209f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_140(bool bParam0) //Position: 0x8B58 / 35672
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-4337,393f, 28,47409f, 4413,315f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,237212f, 0,27196f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_141(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8BCD / 35789
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_CHU", 2, 1);
	}
	Function_142(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_142(var uParam0, int iParam1) //Position: 0x8C5C / 35932
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_144(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_143(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_143(int iParam0) //Position: 0x8CD2 / 36050
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,83229f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2686,198f, 32,92673f, 4252,22f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,059351f, -2,488272f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_144(bool bParam0) //Position: 0x8D47 / 36167
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 50,83229f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-2686,344f, 32,90821f, 4251,939f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,314003f, -1,549275f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_145(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8DBC / 36284
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_BLA", 2, 1);
	}
	Function_146(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_146(var uParam0, int iParam1) //Position: 0x8E4B / 36427
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_148(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_147(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_147(int iParam0) //Position: 0x8EC1 / 36545
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(792,6249f, 79,85516f, 1252,059f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,06254f, 0,304932f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_148(bool bParam0) //Position: 0x8F36 / 36662
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(792,5955f, 80,12923f, 1252,088f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,114017f, -1,37546f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_149(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8FAB / 36779
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_ARM", 2, 1);
	}
	Function_150(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_150(var uParam0, int iParam1) //Position: 0x903A / 36922
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_152(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_151(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_151(int iParam0) //Position: 0x90B0 / 37040
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 54,45026f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2164,691f, 17,65717f, 2608,284f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,029581f, 1,729471f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_152(int iParam0) //Position: 0x9125 / 37157
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 48,26846f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2162,461f, 17,90104f, 2608,195f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,502309f, 1,032155f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_153(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x919A / 37274
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterHenEnd", 3, 1);
	}
	Function_154(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_154(int iParam0) //Position: 0x9226 / 37414
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_157(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_156(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_155(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_155(int iParam0) //Position: 0x929A / 37530
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-821,4233f, 94,62658f, 2416,133f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,067727f, 3,024179f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_156(int iParam0) //Position: 0x930F / 37647
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-822,0323f, 97,13247f, 2418,075f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,200845f, 2,875035f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_157(int iParam0) //Position: 0x9384 / 37764
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-822,0323f, 97,13247f, 2418,075f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,200845f, 2,875035f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_158(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x93F9 / 37881
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterChuEnd", 3, 1);
	}
	Function_159(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_159(int iParam0) //Position: 0x9485 / 38021
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_162(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_161(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_160(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_160(int iParam0) //Position: 0x94F9 / 38137
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2674,524f, 32,73464f, 4254,771f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,000952f, -0,990258f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_161(int iParam0) //Position: 0x956E / 38254
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2676,129f, 33,07767f, 4255,418f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,413944f, -1,379618f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_162(int iParam0) //Position: 0x95E3 / 38371
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2676,129f, 33,07767f, 4255,418f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,413944f, -1,379618f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_163(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x9658 / 38488
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterBlkEnd", 3, 1);
	}
	Function_164(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_164(int iParam0) //Position: 0x96E4 / 38628
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_167(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_166(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_165(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_165(int iParam0) //Position: 0x9758 / 38744
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(748,9062f, 81,73605f, 1234,963f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,257523f, -1,606308f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_166(int iParam0) //Position: 0x97CD / 38861
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(751,9528f, 83,93945f, 1234,901f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,150277f, -1,565241f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_167(int iParam0) //Position: 0x9842 / 38978
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(751,9528f, 83,93945f, 1234,901f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,150277f, -1,565241f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_168(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x98B7 / 39095
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterArmEnd", 3, 1);
	}
	Function_169(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_169(int iParam0) //Position: 0x9943 / 39235
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_172(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_171(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_170(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_170(int iParam0) //Position: 0x99B7 / 39351
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,12474f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2099,827f, 17,38087f, 2604,925f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,030594f, -1,801368f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_171(int iParam0) //Position: 0x9A2C / 39468
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2095,281f, 19,51133f, 2602,912f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,193957f, -2,376076f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_172(bool bParam0) //Position: 0x9AA1 / 39585
{
	SET_CAMERASHOT_PERSPECTIVE(&bParam0, 1);
	SET_CAMERASHOT_FOV(&bParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&bParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &bParam0, Vector(-2095,281f, 19,51134f, 2602,913f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &bParam0, Vector(0,193962f, -2,376065f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&bParam0);
	return;
}

var Function_173(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9B16 / 39702
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ProcCutsceneSimple", 1, 1);
	}
	Function_174(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else if (&bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_174(var uParam0, var uParam1) //Position: 0x9B98 / 39832
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_175(&uVar0, &uParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 5.0f, 4294967295);
	return;
}

void Function_175(var uParam0, int iParam1) //Position: 0x9BBC / 39868
{
	SET_CAMERASHOT_ASPECT_RATIO(&uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,3f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&uParam0, 2800.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &iParam1, Vector(-2,556153f, 1,335263f, -0,635139f), Vector(-4,660204f, -90,73022f, 2,7E-05f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,098891f, 1,118835f, -0,601317f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_176(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x9C62 / 40034
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "locAttackEnd1", 3, 1);
	}
	Function_177(&uVar0, &uParam2, &uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 3,5f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_177(var uParam0, var uParam1, int iParam2) //Position: 0x9CF3 / 40179
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_180(&uVar0, &iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_179(&uVar0, &iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_178(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 3.0f, 2);
	return;
}

void Function_178(int iParam0, int iParam1) //Position: 0x9D5D / 40285
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,984598f, 1,751382f, 3,841003f), Vector(-3,190401f, -10,46822f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,251156f, 1,526337f, -0,132944f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_179(int iParam0, var uParam1) //Position: 0x9DF2 / 40434
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(1,407119f, 0,716825f, 4,948927f), Vector(0,589058f, 32,04071f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-1,210278f, 0,767547f, 0,766793f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_180(var uParam0, bool bParam1) //Position: 0x9E87 / 40583
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,258072f, 0,525107f, 3,572455f), Vector(-5,64203f, 24,82975f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,33126f, 0,151176f, 0,136963f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

var Function_181(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9F1C / 40732
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_49(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "wagonPassengerThx", 4, 1);
	}
	Function_182(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_182(var uParam0, int iParam1) //Position: 0x9FAA / 40874
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_186(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_185(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_184(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_183(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 3.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 3,5f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 3, 5.0f, 3);
	return;
}

void Function_183(int iParam0, int iParam1) //Position: 0xA038 / 41016
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(0,845357f, 3,854301f, 0,253096f), Vector(-28,59214f, 52,87982f, 0,06165f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,953756f, 2,628656f, -1,107103f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_184(int iParam0, var uParam1) //Position: 0xA0D1 / 41169
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-2,94109f, 1,784494f, -0,938111f), Vector(18,55518f, -86,90154f, -0,005787f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,894216f, 2,476595f, -1,048975f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_185(int iParam0, var uParam1) //Position: 0xA16A / 41322
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-2,981397f, 1,783026f, -0,065402f), Vector(-2,721607f, -95,76204f, 0,009683f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,051467f, 1,643226f, 0,240611f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_186(int iParam0, int iParam1) //Position: 0xA203 / 41475
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-3,254722f, 1,778463f, 2,641411f), Vector(-2,721607f, -95,76204f, 0,009683f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,221859f, 1,638663f, 2,947425f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_187(int iParam0, var uParam1, bool bParam2) //Position: 0xA29C / 41628
{
	struct<8> Var0;
	
	Function_188(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 992))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutscTargets") };
		(&iParam0 + 992) = CREATE_OBJECTSET_IN_LAYOUT(&Var0, &iParam0 + 32, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam1, &iParam0 + 992);
		DECOR_SET_INT(&uParam1, "procCutsceneIdx", bParam2);
	}
	else
	{
		LOG_ERROR("PROCMISSION_CUTSCENE_ADD_TARGET - Invalid target passed in");
	}
	return;
}

void Function_188(int iParam0) //Position: 0xA356 / 41814
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
	{
		strcpy(&cVar0, "procMisslayout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&cVar0) };
		*(&iParam0 + 32) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_189(struct<989> Param0) //Position: 0xA3D1 / 41937
{
	Param0.f_988 = iParam1;
	return;
}

void Function_190(struct<1017> Param0) //Position: 0xA3DF / 41951
{
	Param0.f_1016 = iParam1;
	return;
}

void Function_191(int iParam0, struct<2> Param1) //Position: 0xA3ED / 41965
{
	*(&iParam0 + 1000) = Param1;
	return;
}

bool Function_192(int iParam0) //Position: 0xA3FE / 41982
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (!(GET_TASK_STATUS(&Global_54076, 12) != 1 || GET_TASK_STATUS(&Global_54076, 12) != 3))
			{
				if (GET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(&Global_54076)) == 0,5f)
				{
					AI_ACTOR_FORCE_SPEED(GET_MOUNT(&Global_54076), 5);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(&Global_54076), 0,5f);
				}
				if (Function_26(GET_MOUNT(&Global_54076), 0) > 4.0f)
				{
					Function_25(GET_MOUNT(&Global_54076), 0);
					TASK_CLEAR(&Global_54076);
					TASK_DISMOUNT(&Global_54076, 1);
				}
			}
			return 0;
		}
		if (IS_ACTOR_INSIDE_VEHICLE(&Global_54076))
		{
			if (!(GET_TASK_STATUS(&Global_54076, 55) != 1 || GET_TASK_STATUS(&Global_54076, 55) != 3))
			{
				STOP_VEHICLE(GET_VEHICLE(&Global_54076));
				TASK_CLEAR(&Global_54076);
				TASK_VEHICLE_LEAVE(&Global_54076);
			}
			return 0;
		}
		if (IS_ACTOR_ON_FOOT(&Global_54076) && IS_ACTOR_ON_GROUND(&Global_54076))
		{
			if (!Function_72(&iParam0 + 1672))
			{
				TASK_CLEAR(&Global_54076);
				TASK_CLEAR(&iParam0 + 1608);
				if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
				{
					CLEAR_ACTOR_MAX_SPEED(GET_MOST_RECENT_MOUNT(&Global_54076));
				}
				if (IS_ACTOR_VALID(GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076)))
				{
					START_VEHICLE(GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076));
				}
				Function_560(&iParam0 + 1672);
				return 0;
			}
			if (Function_430(&iParam0 + 1672, 0,25f))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	LOG_ERROR("ESCORT_DISMOUNT_PLAYER - Invalid player");
	return 0;
}

void Function_193() //Position: 0xA585 / 42373
{
	int iVar0;
	int iVar1;
	
	if (Function_531(Local_29.f_1496, 8))
	{
		if (IS_ACTOR_VALID(&Local_29 + 1608) && iLocal_28 != 2)
		{
			if (IS_ACTOR_VALID(&Local_29 + 1708[0]))
			{
				Function_69(&Local_29 + 1608, &iVar1);
				TASK_GO_NEAR_COORD(&Local_29 + 1708[0], &iVar1, 1.0f, 1);
				TASK_PRIORITY_SET(&Local_29 + 1708[0], true);
			}
			DESTROY_ACTOR(&Local_29 + 1608);
		}
	}
	else
	{
		if (IS_ACTOR_VALID(&Local_29 + 1608))
		{
			if (iLocal_28 == 2)
			{
				if (IS_ACTOR_VALID(&Local_29 + 1708[0]))
				{
					iVar0 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, &Local_29 + 1708[0], 1.0f, 1);
					TASK_FOLLOW_ACTOR(0, &Local_29 + 1708[0]);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&Local_29 + 1608, iVar0);
					TASK_SEQUENCE_RELEASE(iVar0, 1);
					Function_309(&Local_29 + 1608);
				}
				else
				{
					Function_22(StackVal, &Local_29 + 1608, Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
				}
			}
			else if (iLocal_28 == 3)
			{
				Function_24(&Local_29);
			}
			else
			{
				Function_22(StackVal, &Local_29 + 1608, Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
			}
		}
		if (IS_ACTOR_VALID(&Local_29 + 1708[0]))
		{
			RELEASE_ACTOR_AS_AMBIENT(&Local_29 + 1708[0]);
		}
	}
	if (iLocal_28 == 2)
	{
		Function_306(&Local_29);
	}
	else if (iLocal_28 == 3)
	{
		Function_254(&Local_29);
	}
	else if (iLocal_28 == 4)
	{
		Function_461(&Local_29);
	}
	else
	{
		LOG_ERROR("This is an unhandled cutscene status?");
	}
	Function_194(&Local_29);
	return;
}

void Function_194(struct<1093> Param0) //Position: 0xA6F6 / 42742
{
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj");
	}
	if (Param0.f_984 == 5)
	{
		if (Function_531(Param0.f_1048, 32768))
		{
			Function_39(256);
		}
	}
	Function_253();
	Function_252(1);
	if (Function_531(Param0.f_1048, 32))
	{
		if (Function_250(Param0.f_1092))
		{
			switch (Param0.f_1088)
			{
				case 0x00000002:
					Function_212(Param0.f_1092, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_209(Param0.f_1092);
					break;
				
				default:
					Function_201(Param0.f_1092);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_195(&Param0, 0);
	}
	if (IS_VOLUME_VALID(&Param0 + 944))
	{
		DESTROY_VOLUME(&Param0 + 944);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		DESTROY_OBJECTSET(&Param0 + 992);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 32))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0 + 32);
		DESTROY_LAYOUT(&Param0 + 32);
	}
	if (Function_531(Param0.f_1048, 64))
	{
		Global_21575 = 0;
	}
	if (Function_531(Param0.f_1048, 16))
	{
		Global_6625 = 0;
	}
	return;
}

void Function_195(int iParam0, bool bParam1) //Position: 0xA876 / 43126
{
	if (SQUAD_IS_VALID(&iParam0 + 1024))
	{
		Function_200(&iParam0 + 1024);
		Function_198(&iParam0 + 1024, 1, 0);
		if (&bParam1 == 1)
		{
			Function_197(&iParam0 + 1024);
			Function_200(&iParam0 + 1024);
			Function_196(&iParam0 + 1024, &Global_54076, -1.0f, -1.0f, 0, 1);
		}
		Function_198(&iParam0 + 1024, 0, 0);
		SQUAD_MAKE_EMPTY(&iParam0 + 1024);
		DESTROY_OBJECT(&iParam0 + 1024);
	}
	return;
}

void Function_196(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xA8ED / 43245
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_197(int iParam0) //Position: 0xA966 / 43366
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

void Function_198(var uParam0, bool bParam1, bool bParam2) //Position: 0xA99E / 43422
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_199(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
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

bool Function_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xAA27 / 43559
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_200(int iParam0) //Position: 0xAA47 / 43591
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

void Function_201(int iParam0) //Position: 0xAA7C / 43644
{
	int iVar0;
	
	if (!Function_250(iParam0))
	{
		Function_207();
		return;
	}
	iVar0 = Function_206(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_202("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_202(var uParam0, int iParam1) //Position: 0xAACF / 43727
{
	struct<4> Var0;
	
	if (!Function_250(iParam1))
	{
		return;
	}
	switch (Function_206(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_203(Function_204(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_206(iParam1), Function_204(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_203(int iParam0) //Position: 0xABF9 / 44025
{
	char* cVar0[16];
	
	if (!Function_96())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_204(int iParam0) //Position: 0xAC33 / 44083
{
	if (!Function_205(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_205(int iParam0) //Position: 0xAC53 / 44115
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_206(int iParam0) //Position: 0xAC6A / 44138
{
	if (!Function_205(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_207() //Position: 0xAC85 / 44165
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_208(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_208(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAECC / 44748
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_209(int iParam0) //Position: 0xAEF8 / 44792
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_250(iParam0))
	{
		return;
	}
	iVar0 = Function_206(iParam0);
	if (StackVal == 2)
	{
		Function_202("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_211(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_210(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_210(int iParam0) //Position: 0xAF9E / 44958
{
	char* cVar0[16];
	
	if (!Function_96())
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

struct<24> Function_211(char* cParam0) //Position: 0xAFDD / 45021
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_212(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB233 / 45619
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_250(iParam0))
	{
		Function_207();
		return;
	}
	bVar0 = Function_206(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_249())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_204(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_211(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_210(Global_10966) };
		}
		if (Function_249())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_243();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_249())
	{
		Function_242();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_202("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_238(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
			{
				switch (bVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_204(iParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_215(1);
			Function_214(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_213(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_213(int iParam0, struct<41> Param1) //Position: 0xB491 / 46225
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_214(bool bParam0, int iParam1) //Position: 0xB4CF / 46287
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_215(bool bParam0) //Position: 0xB50E / 46350
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_231();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_216();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_533(&Global_99144, 1);
		Function_533(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_216() //Position: 0xB563 / 46435
{
	Function_229();
	Function_228();
	Function_228();
	Function_227();
	Function_227();
	Function_226();
	Function_226();
	Function_223(0);
	Function_223(0);
	Function_221();
	Function_220();
	Function_219();
	Function_218();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_217();
	return;
}

void Function_217() //Position: 0xB5AE / 46510
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_218() //Position: 0xB6B4 / 46772
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_131716 = fVar0;
	return;
}

void Function_219() //Position: 0xB6E7 / 46823
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_220() //Position: 0xB87A / 47226
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_221() //Position: 0xBA33 / 47667
{
	Function_222(&Global_42918, 1, 0);
	return;
}

void Function_222(struct<2317> Param0) //Position: 0xBA41 / 47681
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_321();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_223(int iParam0) //Position: 0xBC5E / 48222
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_225((50 + iVar4)) + Function_225((183 + iVar4))) + Function_225((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_224(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_224(int iParam0, bool bParam1, bool bParam2) //Position: 0xBD05 / 48389
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
		Function_48(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_225(bool bParam0) //Position: 0xBFA1 / 49057
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_226() //Position: 0xBFE2 / 49122
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 > 4)
	{
		iVar2 = ((Function_225((50 + iVar3) + 15) + Function_225((183 + iVar3) + 15)) + Function_225((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_224(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_227() //Position: 0xC06D / 49261
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_225((50 + iVar3) + 8) + Function_225((183 + iVar3) + 8)) + Function_225((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_224(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_228() //Position: 0xC104 / 49412
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_225((50 + iVar3)) + Function_225((183 + iVar3))) + Function_225((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_224(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_229() //Position: 0xC183 / 49539
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_230(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_224(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_230(int iParam0, float fParam1, int iParam2) //Position: 0xC1C0 / 49600
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_61(iParam0, fParam1, 1);
	Function_60(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_48(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_231() //Position: 0xC3CC / 50124
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_96())
	{
		Function_236(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_236(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_232(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_232(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_573(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_232(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC483 / 50307
{
	int iVar0;
	
	iVar0 = Function_234(&uParam2, &uParam3);
	if (Function_233(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_534(&Global_99144, 1);
			Function_533(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_534(&Global_99144, 2);
			Function_533(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_534(&Global_99144, 2);
		Function_533(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_23();
	return StackVal, Function_23();
}

bool Function_233(int iParam0) //Position: 0xC57B / 50555
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_234(bool bParam0, bool bParam1) //Position: 0xC591 / 50577
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_235(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_235(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_233(iVar0) && !&bParam1)
	{
		iVar0 = Function_234(&bParam0, 1);
	}
	return iVar0;
}

float Function_235(struct<2> Param0, struct<2> Param2) //Position: 0xC65D / 50781
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_236(float fParam0, int iParam1) //Position: 0xC67A / 50810
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_69(&Global_54076, &Var3);
	if (!Function_237(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_237(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_534(&Global_99144, 2);
	Function_533(&Global_99144, 1);
	iParam1 = 0;
	if (Function_573(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_237(int iParam0) //Position: 0xCEA6 / 52902
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_531(bVar0, 0x1000000) || Function_531(bVar0, 0x2000000)) || Function_531(bVar0, 0x4000000)) || !Function_531(bVar0, 0x10000000));
}

void Function_238(int iParam0) //Position: 0xCEE1 / 52961
{
	bool bVar0;
	int iVar1;
	
	if (!Function_205(iParam0))
	{
		return;
	}
	switch (Function_206(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_204(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_46(12, 1, 0, 0);
				Function_241(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_46(13, 1, 0, 0);
				Function_241(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_46(14, 1, 0, 0);
				Function_241(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_46(15, 1, 0, 0);
				Function_241(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_46(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_204(iParam0))
			{
				case 0x00000000:
					if (Function_240(iParam0) == 1)
					{
						bVar0 = Function_239(iParam0);
						if (Function_468(bVar0))
						{
							if (bVar0 == Global_46926[5])
							{
								Function_241(4, 18);
							}
							else if (bVar0 == Global_46866[3])
							{
								Function_241(4, 10);
							}
							else if (bVar0 == Global_46926[6])
							{
								Function_241(4, 16);
							}
							else if (bVar0 == Global_46816[3])
							{
								Function_241(4, 6);
							}
							else if (bVar0 == Global_46760[13])
							{
								Function_241(4, 3);
							}
							else if (bVar0 == Global_46866[7])
							{
								Function_241(4, 11);
							}
							else if (bVar0 == Global_46760[6])
							{
								Function_241(4, 0);
							}
							else if (bVar0 == Global_46866[10])
							{
								Function_241(4, 15);
							}
							else if (bVar0 == Global_46866[8])
							{
								Function_241(4, 14);
							}
							else if (bVar0 == Global_46760[11])
							{
								Function_241(4, 2);
							}
							else if (bVar0 == Global_46816[6])
							{
								Function_241(4, 7);
							}
							else if (bVar0 == Global_46926[3])
							{
								Function_241(4, 17);
							}
							else if (bVar0 == Global_46850[5])
							{
								Function_241(4, 8);
							}
							else if (bVar0 == Global_46866[9])
							{
								Function_241(4, 13);
							}
							else if (bVar0 == Global_46866[11])
							{
								Function_241(4, 12);
							}
							else if (bVar0 == Global_46760[7])
							{
								Function_241(4, 1);
							}
							else if (bVar0 == Global_46838[3])
							{
								Function_241(4, 5);
							}
							else if (bVar0 == Global_46866[4])
							{
								Function_241(4, 9);
							}
							else if (bVar0 == Global_46796[7])
							{
								Function_241(4, 4);
							}
							else if (bVar0 == Global_46926[4])
							{
								Function_241(4, 19);
							}
							if (StackVal == 1)
							{
								bVar0 = bVar0;
							}
							else if (StackVal == 2)
							{
								bVar0 = Global_44085[bVar09];
							}
							else
							{
								bVar0 = Global_44085[bVar09];
								bVar0 = Global_44085[bVar09];
							}
							if (bVar0 == Global_46722[0])
							{
								Function_46(363, 1, 0, 0);
							}
							else if (bVar0 == Global_46722[1])
							{
								Function_46(364, 1, 0, 0);
							}
							else if (bVar0 == Global_46722[2])
							{
								Function_46(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_239(iParam0) == 0)
			{
				if (Function_240(iParam0) == 1)
				{
					Function_46(458, 1, 0, 0);
					bVar0 = Function_204(iParam0);
					if (Function_468(bVar0))
					{
						if (bVar0 == Global_46816[2])
						{
							Function_241(2, 10);
						}
						else if (bVar0 == Global_46796[2])
						{
							Function_241(2, 11);
						}
						else if (bVar0 == Global_46760[2])
						{
							Function_241(2, 12);
						}
						else if (bVar0 == Global_46796[0])
						{
							Function_241(2, 13);
						}
						else if (bVar0 == Global_46796[3])
						{
							Function_241(2, 14);
						}
						else if (bVar0 == Global_46850[2])
						{
							Function_241(2, 15);
						}
						else if (bVar0 == Global_46850[1])
						{
							Function_241(2, 16);
						}
						else if (bVar0 == Global_46838[1])
						{
							Function_241(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_240(iParam0) == 1)
			{
				Function_46(400, 1, 0, 0);
			}
			switch (Function_204(iParam0))
			{
				case 0x00000001:
					Function_46(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_241(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_241(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_241(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_46(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_241(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_241(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_239(int iParam0) //Position: 0xD3BD / 54205
{
	if (!Function_205(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_240(int iParam0) //Position: 0xD3DC / 54236
{
	if (!Function_205(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_241(int iParam0, int iParam1) //Position: 0xD3F6 / 54262
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_242() //Position: 0xD460 / 54368
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_225(0));
	PLAYSTAT_INT("HC_FAME", Function_225(3));
	PLAYSTAT_INT("HC_HONOR", Function_225(1));
	return;
}

void Function_243() //Position: 0xD5C2 / 54722
{
	int iVar0;
	int iVar1;
	
	if (!Function_248(Global_10966))
	{
		return;
	}
	iVar0 = Function_225(24);
	iVar1 = Function_247(Global_10966);
	if (!Function_248(iVar0) && Function_246(iVar1) < 0)
	{
		Function_224(24, Global_10966, 0);
		Function_244(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_246(Function_247(iVar0)))
	{
		Function_224(24, Global_10966, 0);
		Function_244(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_244(int iParam0, char* cParam1) //Position: 0xD642 / 54850
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
		Function_245(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_245(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0xD999 / 55705
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

int Function_246(int iParam0) //Position: 0xDA21 / 55841
{
	if (!Function_250(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_247(int iParam0) //Position: 0xDA3B / 55867
{
	if (!Function_248(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_248(int iParam0) //Position: 0xDA55 / 55893
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_249() //Position: 0xDA6B / 55915
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_250(int iParam0) //Position: 0xDA96 / 55958
{
	if (!Function_205(iParam0))
	{
		return 0;
	}
	if (!Function_251(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_251(int iParam0) //Position: 0xDABA / 55994
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_252(int iParam0) //Position: 0xDACF / 56015
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_21())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

void Function_253() //Position: 0xDB0F / 56079
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_254(int iParam0) //Position: 0xDB25 / 56101
{
	Function_255(&iParam0, 3);
	return;
}

void Function_255(struct<1089> Param0) //Position: 0xDB32 / 56114
{
	int iVar0;
	
	if (Param0.f_1088 != 0 && iParam1 != 1)
	{
		Param0.f_1088 = iParam1;
	}
	else if (Param0.f_1088 == 1)
	{
		Param0.f_1088 = iParam1;
		if (Param0.f_916 != 4294967295)
		{
			if (Param0.f_1088 == 2)
			{
				iVar0 = Function_305(&Param0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_304(&Param0) != 1)
				{
					Function_281(Param0.f_916, iVar0, 1);
				}
				if (Param0.f_912 != 1 || Param0.f_912 != 0)
				{
					Function_278(200, 1, 0);
				}
				else
				{
					Function_259(50, 1, 0);
				}
				if (Param0.f_616 > 0)
				{
					Function_258(Param0.f_616, 1, 1);
				}
				else
				{
					Function_256(Param0.f_616, 1);
				}
			}
			else if (Param0.f_1088 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

int Function_256(bool bParam0, bool bParam1) //Position: 0xDC17 / 56343
{
	bool bVar0;
	
	bVar0 = Function_225(0);
	if ((Function_225(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_257(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_225(0));
	return 1;
}

int Function_257(int iParam0, bool bParam1, int iParam2) //Position: 0xDCA8 / 56488
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
		Function_48(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_258(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDEA5 / 56997
{
	bool bVar0;
	
	bVar0 = Function_225(0);
	if ((Function_225(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_46(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_225(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_46(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_225(597) + Function_225(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_259(int iParam0, bool bParam1, bool bParam2) //Position: 0xDF77 / 57207
{
	int iVar0;
	bool bVar1;
	
	if (Function_277(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_249())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_225(3);
	Function_274();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_272(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_271(Global_119936, 4))
			{
				Function_266(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_46(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_58(3));
	iVar0 = Function_225(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_261(4, Function_265(Global_21369.f_248), 1);
				Function_260(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_261(4, Function_265(Global_21369.f_248), 1);
				Function_260(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_261(4, Function_265(Global_21369.f_248), 1);
				Function_260(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_261(4, Function_265(Global_21369.f_248), 1);
				Function_260(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_261(4, Function_265(Global_21369.f_248), 1);
				Function_260(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_260(int iParam0, int iParam1) //Position: 0xE14B / 57675
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

int Function_261(int iParam0, char* cParam1) //Position: 0xE3B5 / 58293
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
	Function_244(iParam0, &cParam1, 0, 1);
	iVar1 = Function_262();
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

int Function_262() //Position: 0xE545 / 58693
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
	Function_263();
	return 0;
}

void Function_263() //Position: 0xE5E6 / 58854
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
		Function_264(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_264(int iParam0) //Position: 0xE6A4 / 59044
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

var Function_265(int iParam0) //Position: 0xE70A / 59146
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

void Function_266(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE799 / 59289
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_268(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_267(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_267(char* cParam0) //Position: 0xE80E / 59406
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

bool Function_268(int iParam0, var uParam1, int iParam2) //Position: 0xE848 / 59464
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
		if (Function_270(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_269(uVar0))
		{
			case 0x00000002:
				if (!Function_271(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_269(char* cParam0) //Position: 0xE8C4 / 59588
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

int Function_270(int iParam0) //Position: 0xE965 / 59749
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_533(&iVar1, 2147483648);
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

bool Function_271(var uParam0, int iParam1) //Position: 0xE9A2 / 59810
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_272(int iParam0, bool bParam1) //Position: 0xE9B5 / 59829
{
	bool bVar0;
	int iVar1;
	
	Function_46(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_273(iParam0, 4294967295);
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
	iVar1 = Function_262();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_273(int iParam0, int iParam1) //Position: 0xEB61 / 60257
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

void Function_274() //Position: 0xEBA6 / 60326
{
	Function_276(3, 0.0f);
	Function_275(3, 10000.0f);
	return;
}

int Function_275(int iParam0, int iParam1) //Position: 0xEBBC / 60348
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_276(int iParam0, int iParam1) //Position: 0xEBFC / 60412
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_277(int iParam0) //Position: 0xEC3C / 60476
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_278(int iParam0, bool bParam1, bool bParam2) //Position: 0xEC4B / 60491
{
	int iVar0;
	bool bVar1;
	
	if (Function_277(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_249())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_225(1);
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
			Function_272(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_271(Global_119936, 1))
				{
					Function_266(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_280(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_271(Global_119936, 2))
				{
					Function_266(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_46(1, bVar1, 0, 0);
	}
	else
	{
		Function_257(1, (4294967295 * bVar1), 0);
	}
	if (Function_225(1) <= 4294962296)
	{
		Function_224(1, 4294962296, 0);
	}
	else if (Function_225(1) >= 5000)
	{
		Function_224(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_58(1));
	iVar0 = Function_225(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_261(2, Function_279(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_261(2, Function_279(Global_21369.f_244), 0);
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
				Function_261(2, Function_279(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_261(2, Function_279(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_261(2, Function_279(Global_21369.f_244), 1);
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
				Function_261(2, Function_279(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_261(2, Function_279(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_261(2, Function_279(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_261(2, Function_279(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_261(2, Function_279(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_261(2, Function_279(Global_21369.f_244), 1);
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
				Function_261(2, Function_279(Global_21369.f_244), 0);
			}
			break;
	}
	Function_260(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_279(int iParam0) //Position: 0xEF72 / 61298
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

int Function_280(int iParam0, bool bParam1) //Position: 0xF015 / 61461
{
	bool bVar0;
	int iVar1;
	
	Function_257(iParam0, bParam1, 0);
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
	iVar1 = Function_273(iParam0, 4294967295);
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
	iVar1 = Function_262();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_281(int iParam0, char* cParam1, bool bParam2) //Position: 0xF1C0 / 61888
{
	char* cVar0[32];
	
	if (!Function_303(3))
	{
		return;
	}
	if (Function_96())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (&bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_302())
						{
							Function_282(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_282(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_282(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_302())
					{
						Function_282(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_282(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_282(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_282(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_282(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xF2D6 / 62166
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_301(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_303(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_300(bParam0, 2))
	{
		Function_46(456, 1, 0, 0);
		Function_299(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_298(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_297(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_299(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_296(0, 0, 1, 1))
			{
				Function_215(1);
				Function_214(1, 0);
			}
			else
			{
				Function_295();
			}
		}
		Function_290(bParam0);
		if (StackVal && !Function_531(((((!Function_289() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_531((((Function_289() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_96())
		{
			if (!Function_271(Global_119934, 2))
			{
				Function_266(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_284();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_283(3, bParam1);
				break;
			
			case 0x00000005:
				Function_283(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_283(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_283(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_283(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_283(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_241(2, 24);
				break;
			
			case 0x00000003:
				Function_241(2, 25);
				break;
			
			case 0x0000000F:
				Function_241(2, 26);
				break;
			
			case 0x0000000D:
				Function_241(2, 27);
				break;
			
			case 0x0000000E:
				Function_241(2, 28);
				break;
			}
	}
}

void Function_283(int iParam0, bool bParam1) //Position: 0xF575 / 62837
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_284() //Position: 0xF5E4 / 62948
{
	if (Function_301(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_288(Global_42827);
			*(&Global_42827 + 8) = Function_285(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_288(Global_42827);
			*(&Global_42827 + 8) = Function_285(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_285(int iParam0, int iParam1) //Position: 0xF664 / 63076
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_287(6, 0) || Function_287(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_286(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_287(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_286(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_286(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_286(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_286(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_287(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_286(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_286(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_286(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_286(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_286(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_286(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_286(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_287(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_286(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_287(6, 0) && Function_286(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_286(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_287(9, 0) && Function_286(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_286(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_287(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_573(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_573(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_573(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_286(int iParam0) //Position: 0x102D6 / 66262
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_287(int iParam0, bool bParam1) //Position: 0x102EB / 66283
{
	int iVar0;
	
	iVar0 = Function_247(iParam0);
	if (!Function_205(iVar0))
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

int Function_288(int iParam0) //Position: 0x10329 / 66345
{
	int iVar0;
	int iVar1;
	
	if (!Function_301(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_289() //Position: 0x10378 / 66424
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_290(bool bParam0) //Position: 0x103A5 / 66469
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_297(bParam0, Function_294(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_297(bParam0, Function_294(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_293(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_292(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_291(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_291(int iParam0) //Position: 0x10555 / 66901
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_301(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_292(var uParam0, int iParam1) //Position: 0x105AC / 66988
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_293(int iParam0) //Position: 0x105D1 / 67025
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_301(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

int Function_294(bool bParam0) //Position: 0x10627 / 67111
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_295() //Position: 0x10633 / 67123
{
	return;
}

bool Function_296(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x10639 / 67129
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_297(bool bParam0, int iParam1) //Position: 0x106E8 / 67304
{
	int iVar0;
	
	if (!Function_301(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_298(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x10747 / 67399
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_210(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_299(int iParam0, int iParam1) //Position: 0x107D2 / 67538
{
	if (!Function_301(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_300(int iParam0, int iParam1) //Position: 0x10827 / 67623
{
	int iVar0;
	
	if (!Function_301(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_301(int iParam0) //Position: 0x10854 / 67668
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_302() //Position: 0x1086A / 67690
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_531(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_303(int iParam0) //Position: 0x1089A / 67738
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

int Function_304(struct<1049> Param0) //Position: 0x108B6 / 67766
{
	return !Function_531(Param0.f_1048, 16384);
}

var Function_305(struct<921> Param0) //Position: 0x108C9 / 67785
{
	return Param0.f_920;
}

void Function_306(struct<1101> Param0) //Position: 0x108D5 / 67797
{
	int iVar0;
	
	switch (Param0.f_1100)
	{
		case 0x00000000:
			iVar0 = 0;
			break;
		
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000002:
			iVar0 = 2;
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	Function_272(369, 1);
	Function_258(Function_307(iVar0, 1, 1, 0, 0), 1, 1);
	Function_255(&Param0, 2);
	return;
}

bool Function_307(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1092E / 67886
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			fVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			fVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			fVar0 = (fVar0 * 0,75f);
			break;
		
		case 0x00000001:
			fVar0 = (fVar0 * 1.0f);
			break;
		
		case 0x00000002:
			fVar0 = (fVar0 * 1,25f);
			break;
		
		default:
			fVar0 = (fVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_225(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_308(17), &Global_54076))
		{
			fVar0 = (fVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		fVar0 = (fVar0 * 1,1f);
	}
	if (ROUND(fVar0) <= 1)
	{
		fVar0 = 1.0f;
	}
	return ROUND(fVar0);
}

var Function_308(bool bParam0) //Position: 0x10A35 / 68149
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_309(int iParam0) //Position: 0x10B29 / 68393
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "nnostickup"))
		{
			DECOR_REMOVE(&iParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&iParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&iParam0, 0);
		TASK_PRIORITY_SET(&iParam0, 2);
	}
	return;
}

void Function_310(bool bParam0, int iParam1, int iParam2) //Position: 0x10B7C / 68476
{
	if (&iParam2 == 1)
	{
		if (Function_318(&bParam0, &iParam1, &iParam2))
		{
			Function_316(&bParam0);
		}
		else if (Function_315(&bParam0, &iParam1))
		{
			Function_313(&bParam0);
		}
		if (Function_312(&bParam0, &iParam1, &iParam2))
		{
			Function_311(&bParam0);
		}
	}
	else if (Function_318(&bParam0, &iParam1, 0))
	{
		Function_316(&bParam0);
	}
	else if (Function_312(&bParam0, &iParam1, 0))
	{
		Function_311(&bParam0);
	}
	else if (Function_315(&bParam0, &iParam1))
	{
		Function_313(&bParam0);
	}
	return;
}

void Function_311(struct<909> Param0) //Position: 0x10C0B / 68619
{
	char* cVar0[32];
	
	if (Param0.f_908 <= Param0.f_620)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, &Param0 + 620[Param0.f_9084], 32);
		if ((*&Param0 + 724)[Param0.f_908] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, &Param0 + 620[Param0.f_9084], &Param0 + 756[Param0.f_9086], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_298(&Param0 + 620[Param0.f_9084], 0x41200000, 1, 0, 2, 1, 0);
		}
		Param0.f_908++;
	}
	return;
}

bool Function_312(struct<909> Param0) //Position: 0x10CB3 / 68787
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_54078, (&Param0 + 8));
	bVar3 = VDIST(Global_54078, *(&Param0 + 20));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_99146 != 1 || Global_6637 != 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_289() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_908 <= Param0.f_756)
	{
		if (STRING_LENGTH(&Param0 + 620[Param0.f_9084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_313(struct<1049> Param0) //Position: 0x10D5A / 68954
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_531(Param0.f_1048, 8) && Param0.f_612 > 3)
	{
		if (VDIST(Global_54078, *(&Param0 + 8)) < VDIST(Global_54078, *(&Param0 + 20)) && IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
			{
				Function_314(&Param0 + 508[Param0.f_6124], 3.0f, 0, 2, 1, 0);
				Param0.f_612++;
				Function_560(&Param0 + 60);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(&Param0 + 400[Param0.f_5044]))
		{
			Function_314(&Param0 + 400[Param0.f_5044], 3.0f, 0, 2, 1, 0);
			Param0.f_504++;
			Param0.f_504 = (Param0.f_504 % 3);
			Function_560(&Param0 + 60);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_314(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10E57 / 69207
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_210(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

bool Function_315(bool bParam0, int iParam1) //Position: 0x10EDC / 69340
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, (&bParam0 + 8)) >= VDIST(Global_54078, *(&bParam0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&bParam0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&bParam0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&bParam0 + 400[04]))
	{
		iVar0 = 0;
	}
	else if (Function_289())
	{
		iVar0 = 0;
	}
	else if (Function_430(&bParam0 + 60, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_316(struct<181> Param0) //Position: 0x10F88 / 69512
{
	char* cVar0[32];
	
	if (Param0.f_180 <= Param0.f_76)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, &Param0 + 76[Param0.f_1804], 32);
		if ((*&Param0 + 184)[Param0.f_180] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7,5f, &Param0 + 76[Param0.f_1804], &Param0 + 248[Param0.f_1806], "", "", "", "", 0, (*&Param0 + 216)[Param0.f_180], 0, 0);
		}
		else
		{
			Function_317(&Param0 + 76[Param0.f_1804], 8,5f, (*&Param0 + 216)[Param0.f_180], 2, 0, 0, 0, 0);
		}
		Param0.f_180++;
	}
	return;
}

void Function_317(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x1103C / 69692
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_210(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

bool Function_318(struct<181> Param0) //Position: 0x110D1 / 69841
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, (&Param0 + 8)) >= VDIST(Global_54078, *(&Param0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&Param0 + 76[04]))
	{
		iVar0 = 0;
	}
	else if (Function_289() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_180 <= Param0.f_76)
	{
		if (STRING_LENGTH(&Param0 + 76[Param0.f_1804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_319(int iParam0, int iParam1) //Position: 0x11194 / 70036
{
	if (SQUAD_IS_VALID(&iParam0 + 80))
	{
		Function_320(&iParam0 + 80, 2, GET_OBJECT_FROM_ACTOR(&iParam1), 4, 1);
	}
	return;
}

int Function_320(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x111BC / 70076
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar2 = SQUAD_GET_SIZE(&uParam0);
		bVar1 = false;
		while (bVar1 < (iVar2 - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_82(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(&uParam0);
		return 1;
	}
	return 0;
}

int Function_321() //Position: 0x1121F / 70175
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_322(int iParam0) //Position: 0x11234 / 70196
{
	Function_323(&iParam0);
	return;
}

void Function_323(int iParam0) //Position: 0x11240 / 70208
{
	if (IS_ACTORSET_VALID(&iParam0 + 64))
	{
		DISBAND_ACTORSET(&iParam0 + 64);
	}
	return;
}

void Function_324(int iParam0, struct<2> Param1) //Position: 0x1125C / 70236
{
	struct<2> Var0;
	var uVar2;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	if ((&iLocal_595 != "" && Local_29.f_1488 < 0) && iLocal_630 < 0)
	{
		if (Function_430(&Local_29 + 1860, fLocal_631) && !(Global_43790 != 3 || Global_43790 != 4))
		{
			if (Function_365(StackVal, &Global_54076, Param1) < 150.0f || Function_531(Local_29.f_1496, 16384))
			{
				if (Function_364())
				{
					uVar2 = Vector(RAND_FLOAT_RANGE(-2,5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(40.0f, 50.0f));
				}
				else
				{
					uVar2 = Vector(RAND_FLOAT_RANGE(0.0f, 2,5f), 0.0f, RAND_FLOAT_RANGE(40.0f, 50.0f));
				}
				GET_ACTOR_OFFSET_WORLD_COORDS(&Global_54076, &uVar2, &Var0);
				switch (Local_29.f_1100)
				{
					case 0x00000000:
						iVar4 = RAND_INT_RANGE(2, 3);
						break;
					
					case 0x00000001:
						iVar4 = RAND_INT_RANGE(3, 4);
						break;
					
					case 0x00000002:
						iVar4 = RAND_INT_RANGE(4, 6);
						break;
					
					default:
						iVar4 = 1;
						break;
				}
				Function_363(&iLocal_511, 3);
				Function_362(&iLocal_511, 2);
				Function_361(&iLocal_511, 1);
				Function_360(&iLocal_511, 0);
				Function_359(&iLocal_511, iVar4);
				Function_358(StackVal, &iLocal_511, Var0);
				Function_357(&iLocal_511, 1);
				Function_356(&iLocal_511, 0,5f, 15.0f, 3.0f);
				Function_355(&iLocal_511, 1);
				Function_354(&iLocal_511, 1);
				Function_353(&iLocal_511, 1);
				Function_352(&iLocal_511, 1, 4294967295);
				Function_351(&iLocal_511, 1);
				Function_350(&iLocal_511, 1, 4294967295, 0);
				Function_345(&iLocal_511, &Global_54076);
				if (iParam0 == 1)
				{
					Function_344(&iLocal_511, 1);
				}
				if (Function_342(&iLocal_511))
				{
					iVar5 = 0;
					while (iVar5 < (iLocal_629 - 1))
					{
						Function_341(&iLocal_511, iLocal_597[iVar5]);
						iVar5++;
					}
					Function_534(&iLocal_511 + 128, 64);
					if (!Function_531(Local_29.f_1496, 16384))
					{
						if (Function_531(Local_29.f_1496, 8))
						{
							Function_340(&Local_29, "pm_esc_def", 1);
						}
						else
						{
							Function_340(&Local_29, "pm_esc_pro", 1);
						}
						Function_534(&Local_29 + 1496, 16384);
					}
					iLocal_595 = Function_338(&iLocal_511);
					Function_534(&Local_29 + 1496, 512);
					if (IS_SCRIPT_VALID(&iLocal_595))
					{
						Function_369();
					}
				}
				else
				{
					fLocal_631 = (fLocal_631 + 3,5f);
				}
			}
		}
		else
		{
			Function_533(&Local_29 + 1496, 512);
		}
	}
	else if (Function_531(Local_29.f_1496, 512))
	{
		if (IS_SCRIPT_VALID(&iLocal_595))
		{
			Function_332(&iLocal_511);
			if (SQUAD_IS_VALID(&iLocal_511 + 80))
			{
				Function_330(&Local_29, GET_ACTOR_FACTION(Function_331(&iLocal_511 + 80)));
				Function_533(&Local_29 + 1496, 512);
			}
		}
	}
	else if (!IS_SCRIPT_VALID(&iLocal_595) && !SQUAD_IS_VALID(&iLocal_511 + 80))
	{
		iLocal_595 = "";
		iLocal_630 = (iLocal_630 - 1);
		Function_369();
		Function_560(&Local_29 + 1860);
	}
	else if (Global_43790 != 3 || Global_43790 != 4)
	{
		Function_322(&iLocal_511);
		Function_319(&iLocal_511, Function_321());
		if (!Function_531(Local_29.f_1496, 1048576))
		{
			Function_326(&Local_29, "pm_esc_bflee", 0);
			Function_534(&Local_29 + 1496, 1048576);
		}
	}
	else if (IS_ACTOR_VALID(&Local_29 + 1608))
	{
		iVar7 = 0;
		bVar6 = false;
		while (bVar6 < (SQUAD_GET_SIZE(&iLocal_511 + 80) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_511 + 80, bVar6)))
			{
				if (Function_325(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_511 + 80, bVar6), 0))
				{
					if (!Function_72(&Local_29 + 1640) || Function_430(&Local_29 + 1640, 15.0f))
					{
						iVar7 = 1;
						Function_560(&Local_29 + 1640);
					}
				}
			}
			bVar6++;
		}
		if (iVar7 == 1)
		{
			if (!IS_AMBIENT_SPEECH_PLAYING(&Local_29 + 1608))
			{
				if (iLocal_635 <= 2)
				{
					SAY_SINGLE_LINE_CONTEXT(&Local_29 + 1608, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
					iLocal_635++;
				}
				else if (iLocal_635 <= 4)
				{
					SAY_SINGLE_LINE_CONTEXT(&Local_29 + 1608, 63, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
					iLocal_635++;
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(&Local_29 + 1608, 333, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
				}
			}
		}
	}
	return;
}

bool Function_325(var uParam0, bool bParam1) //Position: 0x1165A / 71258
{
	int iVar0;
	
	iVar0 = 0;
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&uParam0)) > 1.0f)
	{
		switch (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&uParam0)))
		{
			case 0x0000002F:
				if (&bParam1)
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000029:
				iVar0 = 1;
				break;
			
			case 0x00000027:
				iVar0 = 1;
				break;
			
			case 0x00000028:
				iVar0 = 1;
				break;
			
			case 0x0000002A:
				iVar0 = 1;
				break;
			
			case 0x0000002B:
				iVar0 = 1;
				break;
			
			case 0x0000002C:
				iVar0 = 1;
				break;
			
			case 0x00000031:
				iVar0 = 1;
				break;
			}
	}
	return iVar0;
}

int Function_326(struct<1093> Param0) //Position: 0x116E8 / 71400
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(&cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_531(Param0.f_1048, 32))
	{
		if (!Function_250(Param0.f_1092))
		{
			return 0;
		}
	}
	uVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	uVar21 = Function_329(Function_206(Param0.f_1092), Function_239(Param0.f_1092));
	iVar22 = Function_327(Function_206(Param0.f_1092), Function_239(Param0.f_1092));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(&uVar21, &uVar20))
	{
		ADD_TIME(&uVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(&uVar21, GET_TIME_OF_DAY()))
		{
			bVar19 = true;
		}
	}
	else
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!IS_STRING_VALID(&Param0 + 620[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(&Param0 + 620[iVar174], &cParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(&Param0 + 620[iVar174], &cParam1, 16);
			if (&iParam2 == 1)
			{
				(*&Param0 + 724)[iVar17] = &iParam2;
			}
			iVar18 = 1;
		}
		else
		{
			iVar18 = 0;
		}
	}
	else
	{
		iVar18 = 0;
	}
	return iVar18;
}

int Function_327(int iParam0, int iParam1) //Position: 0x1185C / 71772
{
	int iVar0;
	int iVar1;
	
	if (!Function_328(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_206(iVar1) != iParam0 && Function_239(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_21684[iVar17].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_328(int iParam0) //Position: 0x118A8 / 71848
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_329(int iParam0, int iParam1) //Position: 0x118BD / 71869
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_206(iVar1) != iParam0 && Function_239(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(&Global_21684[iVar17] + 40, &iVar0))
			{
				iVar0 = &Global_21684[iVar17] + 40;
			}
		}
		iVar1++;
	}
	return &iVar0;
}

void Function_330(struct<921> Param0) //Position: 0x1190E / 71950
{
	Param0.f_920 = iParam1;
	return;
}

var Function_331(var uParam0) //Position: 0x1191C / 71964
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

void Function_332(int iParam0) //Position: 0x11969 / 72041
{
	if (IS_OBJECT_VALID(Function_337(&iParam0)))
	{
		Function_335(&iParam0, 0);
		Function_333(&iParam0, 0);
	}
	return;
}

int Function_333(struct<329> Param0) //Position: 0x1198B / 72075
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_337(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			DECOR_SET_BOOL(&iParam1, "catk_bdi", Param0.f_272);
			DECOR_SET_FLOAT(&iParam1, "catk_spx", Param0.f_284);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spz");
			DECOR_SET_FLOAT(&iParam1, "catk_scx", Param0.f_296);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scz");
			DECOR_SET_BOOL(&iParam1, "catk_krd", Param0.f_276);
			DECOR_SET_BOOL(&iParam1, "catk_krt", Param0.f_280);
			DECOR_SET_OBJECT(&iParam1, "catk_atv", &Param0 + 312);
			DECOR_SET_INT(&iParam1, "catk_ats", Param0.f_320);
			DECOR_SET_BOOL(&iParam1, "catk_bus", Param0.f_324);
			DECOR_SET_OBJECT(&iParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(&Param0 + 80));
			DECOR_SET_INT(&iParam1, "catk_wtm", Param0.f_328);
			DECOR_SET_BOOL(&iParam1, "catk_ovr", Param0.f_260);
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_334((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(&iParam1, &cVar5, (*&Param0 + 144)[bVar0]);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncWrite - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncWrite - invalid write attempted");
	}
	return 1;
}

bool Function_334(bool bParam0) //Position: 0x11BFF / 72703
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_335(struct<329> Param0) //Position: 0x11C16 / 72726
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_336(&Param0);
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_337(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			Param0.f_272 = DECOR_GET_BOOL(&iParam1, "catk_bdi");
			Param0.f_284 = DECOR_GET_FLOAT(&iParam1, "catk_spx");
			(&Param0 + 284)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_spy");
			(&Param0 + 284)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_spz");
			Param0.f_296 = DECOR_GET_FLOAT(&iParam1, "catk_scx");
			(&Param0 + 296)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_scy");
			(&Param0 + 296)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_scz");
			Param0.f_276 = DECOR_GET_BOOL(&iParam1, "catk_krd");
			Param0.f_280 = DECOR_GET_BOOL(&iParam1, "catk_krt");
			(&Param0 + 312) = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_atv"));
			Param0.f_320 = DECOR_GET_INT(&iParam1, "catk_ats");
			Param0.f_324 = DECOR_GET_BOOL(&iParam1, "catk_bus");
			*(&Param0 + 80) = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_asq"));
			Param0.f_328 = DECOR_GET_INT(&iParam1, "catk_wtm");
			Param0.f_260 = DECOR_GET_BOOL(&iParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_334((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*&Param0 + 144)[bVar0] = DECOR_GET_INT(&iParam1, &cVar5);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncRead - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncRead - invalid read attempted");
	}
	return 1;
}

void Function_336(int iParam0) //Position: 0x11E80 / 73344
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&Var0), 4);
		iParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(&iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

var Function_337(int iParam0) //Position: 0x11EF0 / 73456
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(&iParam0 + 16);
	return &iVar0;
}

var Function_338(struct<273> Param0) //Position: 0x11F15 / 73493
{
	int iVar0;
	
	if (!Param0.f_272 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_339(&Param0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", &Param0, 84, 0);
	return &iVar0;
}

void Function_339(struct<201> Param0) //Position: 0x11F9F / 73631
{
	int iVar0;
	int iVar1;
	
	if (Function_531(Param0.f_128, 64))
	{
		iVar1 = 0;
		while (iVar1 <= Param0.f_144)
		{
			if (!(*&Param0 + 144)[iVar1] != 0 && Function_334((*&Param0 + 144)[iVar1]))
			{
				iVar0++;
			}
			iVar1++;
		}
		Param0.f_200 = iVar0;
	}
	else
	{
		Param0.f_200 = Param0.f_144;
	}
	return;
}

var Function_340(bool bParam0, char* cParam1) //Position: 0x11FFE / 73726
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(&bParam0 + 76[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(&bParam0 + 76[iVar24], &cParam1, 16);
			iVar1 = 3;
		}
		iVar1++;
	}
	if (iVar2 <= 3)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		iVar0 = 0;
	}
	strcpy(&bParam0 + 76[iVar24], &cParam1, 16);
	(*&bParam0 + 184)[iVar2] = 0;
	(*&bParam0 + 216)[iVar2] = &iParam2;
	return iVar0;
}

int Function_341(struct<273> Param0) //Position: 0x12080 / 73856
{
	int iVar0;
	
	if (Param0.f_272 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_334(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_335(&Param0, 0);
	iVar0 = 0;
	while (iVar0 <= Param0.f_144)
	{
		if ((*&Param0 + 144)[iVar0] != 0 || !Function_334((*&Param0 + 144)[iVar0]))
		{
			(*&Param0 + 144)[iVar0] = bParam1;
			iVar0 = Param0.f_144;
		}
		iVar0++;
	}
	Function_333(&Param0, 0);
	return 1;
}

bool Function_342(struct<325> Param0) //Position: 0x12157 / 74071
{
	int iVar0;
	struct<2> Var1;
	struct<8> Var3;
	struct<6> Var11;
	
	Function_336(&Param0);
	if (Param0.f_320 == 0)
	{
		Param0.f_320 = 3;
		DECOR_SET_BOOL(&Param0, "catk_bus", Param0.f_324);
	}
	if (Function_573(StackVal, (&Param0 + 284)))
	{
		if (Function_573(StackVal, *(&Param0 + 296)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_358(StackVal, &Param0, Global_54078);
			}
			else
			{
				return 0;
			}
		}
		Function_358(StackVal, &Param0, *(&Param0 + 296));
		if (Param0.f_36 > 0,5f)
		{
			Param0.f_36 = 0,5f;
		}
		if ((Param0.f_40 - Param0.f_36) > 6.0f)
		{
			Param0.f_40 = (Param0.f_36 + 6.0f);
		}
		if (Param0.f_44 >= 0.0f)
		{
			Param0.f_44 = 15.0f;
		}
		Function_572(&Var3, 4294967295, 5.0f, 1, 4294967295);
		Function_571(StackVal, &Var11, 0, *(&Param0 + 296), 0.0f, Param0.f_36, Param0.f_40, Param0.f_44, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_569(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			Var1 = Function_569(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			if (!Function_573(StackVal, Var1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_573(StackVal, Var1))
		{
			*(&Param0 + 284) = *(&Param0 + 296);
			return 0;
		}
		*(&Param0 + 284) = Var1;
	}
	Function_339(&Param0);
	Param0.f_272 = 1;
	if (!Function_343(&Param0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_333(&Param0, 0);
	return 1;
}

bool Function_343(int iParam0) //Position: 0x122FA / 74490
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0 + 8))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("ncatk_dobj"), 4);
		*(&iParam0 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, &iParam0, &uVar0, *(&iParam0 + 284), Vector(0.0f, 0.0f, 0.0f));
		if (!IS_OBJECT_VALID(&iParam0 + 8))
		{
			LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data object");
			return 0;
		}
	}
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		*(&iParam0 + 16) = CREATE_OBJECT_ITERATOR(&iParam0);
	}
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data iterator");
		return 0;
	}
	ITERATE_ON_OBJECT_TYPE(&iParam0 + 16, 8);
	ITERATE_ON_PARTIAL_NAME(&iParam0 + 16, "ncatk_dobj");
	PRINTSTRING("data obj =  ");
	PRINTSTRING(GET_OBJECT_NAME(START_OBJECT_ITERATOR(&iParam0 + 16)));
	PRINTNL();
	return 1;
}

int Function_344(struct<97> Param0) //Position: 0x12481 / 74881
{
	Param0.f_96 = iParam1;
	return 1;
}

int Function_345(var uParam0, var uParam1) //Position: 0x1248F / 74895
{
	return Function_346(&uParam0, &uParam1);
}

int Function_346(struct<129> Param0) //Position: 0x1249E / 74910
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	Function_349(&Param0);
	if (!IS_ACTOR_IN_ACTORSET(&Param0 + 64, &iParam1))
	{
		DECOR_SET_BOOL(&iParam1, "catk_external", 1);
		ADD_ACTORSET_MEMBER(&Param0 + 64, &iParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(&iParam1));
		PRINTNL();
		if (!Function_531(Param0.f_128, 1024))
		{
			Function_347(&Param0, &iParam1);
		}
	}
	return 1;
}

void Function_347(int iParam0, var uParam1) //Position: 0x12529 / 75049
{
	var uVar0;
	int iVar4;
	bool bVar5;
	var uVar6;
	
	Function_348(&iParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("catkavol"), 4);
	iVar4 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, &uVar0, 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
	if (IS_VOLUME_VALID(&iVar4))
	{
		if (SQUAD_IS_VALID(&iParam0 + 80))
		{
			ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&iVar4), GET_OBJECT_FROM_ACTOR(&uParam1), Function_49(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			bVar5 = false;
			while (bVar5 < (SQUAD_GET_SIZE(&iParam0 + 80) - 1))
			{
				uVar6 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 80, bVar5);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar6, &iVar4);
				bVar5++;
			}
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_AddAvoidanceVolume got an invalid volume somehow?");
	}
	return;
}

int Function_348(int iParam0) //Position: 0x1260E / 75278
{
	var uVar0;
	
	Function_336(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 136))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("navoidVols"), 4);
		*(&iParam0 + 136) = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, &iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(&iParam0 + 136))
		{
			return 0;
		}
	}
	return 1;
}

int Function_349(int iParam0) //Position: 0x1265E / 75358
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(&iParam0 + 64))
	{
		Function_336(&iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("ntargetSet"), 4);
		*(&iParam0 + 64) = CREATE_ACTORSET_IN_LAYOUT(&iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(&iParam0 + 64))
		{
			return 0;
		}
	}
	return 1;
}

int Function_350(struct<121> Param0) //Position: 0x126AC / 75436
{
	if (iParam1 == 1)
	{
		Function_534(&Param0 + 128, 1);
	}
	else
	{
		Function_533(&Param0 + 128, 1);
	}
	if (&iParam2 > 976 || &iParam2 <= 1050)
	{
		Param0.f_116 = 4294967295;
	}
	else
	{
		Param0.f_116 = &iParam2;
	}
	Param0.f_120 = &uParam3;
	return 1;
}

void Function_351(int iParam0, int iParam1) //Position: 0x126FB / 75515
{
	if (iParam1 == 1)
	{
		Function_534(&iParam0 + 128, 8);
	}
	else
	{
		Function_533(&iParam0 + 128, 8);
	}
	return;
}

void Function_352(struct<125> Param0) //Position: 0x1271E / 75550
{
	if (iParam1 == 1)
	{
		Function_534(&Param0 + 128, 4);
	}
	else
	{
		Function_533(&Param0 + 128, 4);
	}
	Param0.f_124 = &iParam2;
	Function_534(&Param0 + 128, 128);
	return;
}

void Function_353(int iParam0, int iParam1) //Position: 0x12751 / 75601
{
	if (&iParam1 == 0)
	{
		Function_534(&iParam0 + 128, 4096);
	}
	else
	{
		Function_533(&iParam0 + 128, 4096);
	}
	return;
}

void Function_354(int iParam0, int iParam1) //Position: 0x12777 / 75639
{
	if (&iParam1 == 0)
	{
		Function_534(&iParam0 + 128, 2048);
	}
	else
	{
		Function_533(&iParam0 + 128, 2048);
	}
	return;
}

int Function_355(int iParam0, int iParam1) //Position: 0x1279D / 75677
{
	if (iParam1 == 1)
	{
		Function_534(&iParam0 + 128, 512);
	}
	else
	{
		Function_533(&iParam0 + 128, 512);
	}
	return 1;
}

void Function_356(struct<45> Param0) //Position: 0x127C3 / 75715
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	Param0.f_36 = fParam1;
	Param0.f_40 = fParam2;
	Param0.f_44 = &uParam3;
}

void Function_357(int iParam0, int iParam1) //Position: 0x12830 / 75824
{
	if (&iParam1 == 0)
	{
		Function_534(&iParam0 + 128, 8192);
	}
	else
	{
		Function_533(&iParam0 + 128, 8192);
	}
	return;
}

int Function_358(struct<273> Param0) //Position: 0x12856 / 75862
{
	int iVar0;
	
	iVar0 = Function_337(&Param0);
	if (Function_573(StackVal, Param1))
	{
		return 0;
	}
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_335(&Param0, &iVar0);
	}
	*(&Param0 + 296) = Param1;
	*(&Param0 + 284) = Vector(0.0f, 0.0f, 0.0f);
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_333(&Param0, &iVar0);
	}
	return 1;
}

int Function_359(struct<53> Param0) //Position: 0x128C0 / 75968
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	Param0.f_52 = iParam1;
	return 1;
}

void Function_360(struct<277> Param0) //Position: 0x128DC / 75996
{
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(Function_337(&Param0)))
	{
		Function_335(&Param0, 0);
	}
	Param0.f_276 = iParam1;
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(Function_337(&Param0)))
	{
		Function_333(&Param0, 0);
	}
	return;
}

void Function_361(int iParam0, int iParam1) //Position: 0x12924 / 76068
{
	if (iParam1 == 1)
	{
		Function_534(&iParam0 + 128, 256);
	}
	else
	{
		Function_533(&iParam0 + 128, 256);
	}
	return;
}

int Function_362(struct<61> Param0) //Position: 0x12949 / 76105
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	Param0.f_60 = iParam1;
	return 1;
}

int Function_363(struct<325> Param0) //Position: 0x12965 / 76133
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	Param0.f_320 = iParam1;
	Param0.f_324 = 1;
	return 1;
}

bool Function_364() //Position: 0x12989 / 76169
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

float Function_365(var uParam0, struct<2> Param1) //Position: 0x1299C / 76188
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_366(&uParam0);
		Var0 = Function_366(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_366(int iParam0) //Position: 0x12A13 / 76307
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

struct<8> Function_367(int iParam0) //Position: 0x12A7F / 76415
{
	struct<2> Var0;
	
	Function_23();
	Var0 = Function_23();
	if (IS_OBJECT_VALID(&iParam0 + 1584))
	{
		GET_OBJECT_POSITION(&iParam0 + 1584, &Var0);
	}
	return StackVal, Var0;
}

void Function_368() //Position: 0x12AA9 / 76457
{
	switch (Local_29.f_1100)
	{
		case 0x00000000:
			iLocal_630 = RAND_INT_RANGE(5, 5);
			break;
		
		case 0x00000001:
			iLocal_630 = RAND_INT_RANGE(8, 8);
			break;
		
		case 0x00000002:
			iLocal_630 = RAND_INT_RANGE(12, 12);
			break;
		
		default:
			iLocal_630 = RAND_INT_RANGE(8, 8);
			break;
	}
	return;
}

void Function_369() //Position: 0x12AFA / 76538
{
	fLocal_631 = RAND_FLOAT_RANGE(Local_29.f_1876, Local_29.f_1880);
	Local_29.f_1876 = (Local_29.f_1876 + 6.0f);
	Local_29.f_1880 = (Local_29.f_1880 + 6.0f);
	return;
}

int Function_370(int iParam0, int iParam1) //Position: 0x12B28 / 76584
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_371(&(Global_46972[0]), iParam1);
			break;
		
		case 0x00000002:
			return Function_371(&(Global_46972[1]), iParam1);
			break;
		
		case 0x00000004:
			return Function_371(&(Global_46972[2]), iParam1);
			break;
		
		case 0x00000008:
			return Function_371(&(Global_46972[3]), iParam1);
			break;
		
		case 0x00000010:
			return Function_371(&(Global_46972[4]), iParam1);
			break;
		
		case 0x00000020:
			return Function_371(&(Global_46972[5]), iParam1);
			break;
		
		case 0x00000040:
			return Function_371(&(Global_46972[6]), iParam1);
			break;
		
		case 0x00000080:
			return Function_371(&(Global_46972[7]), iParam1);
			break;
		
		case 0x00000100:
			return Function_371(&(Global_46972[8]), iParam1);
			break;
		
		case 0x00000200:
			return Function_371(&(Global_46972[9]), iParam1);
			break;
		
		case 0x00000400:
			return Function_371(&(Global_46972[10]), iParam1);
			break;
		
		case 0x00000800:
			return Function_371(&(Global_46972[11]), iParam1);
			break;
		
		case 0x00001000:
			return Function_371(&(Global_46972[12]), iParam1);
			break;
		
		case 0x00002000:
			return Function_371(&(Global_46972[13]), iParam1);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 4294967295;
}

int Function_371(var uParam0, int iParam1) //Position: 0x12CB5 / 76981
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get an indexed member of an invalid popset");
		return 4294967295;
	}
	iVar2 = GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0);
	if (iParam1 > iVar2 && iParam1 <= 0)
	{
		bVar1 = GET_ACTORENUM_IN_POPULATION(&uParam0, iParam1);
	}
	else
	{
		return 4294967295;
	}
	if (!Function_334(bVar1))
	{
		LOG_ERROR("Did an index on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	return bVar0;
}

int Function_372(int iParam0) //Position: 0x12D65 / 77157
{
	switch (iParam0)
	{
		case 0x00000001:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0]));
			break;
		
		case 0x00000002:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[1]));
			break;
		
		case 0x00000004:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[2]));
			break;
		
		case 0x00000008:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[3]));
			break;
		
		case 0x00000010:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[4]));
			break;
		
		case 0x00000020:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[5]));
			break;
		
		case 0x00000040:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[6]));
			break;
		
		case 0x00000080:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[7]));
			break;
		
		case 0x00000100:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[8]));
			break;
		
		case 0x00000200:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[9]));
			break;
		
		case 0x00000400:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[10]));
			break;
		
		case 0x00000800:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[11]));
			break;
		
		case 0x00001000:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[12]));
			break;
		
		case 0x00002000:
			return GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[13]));
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 1;
}

bool Function_373() //Position: 0x12ED6 / 77526
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = 1;
	fVar2 = -1.0f;
	if (!Local_29.f_1892)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (GET_ACTOR_HOGTIE_STATE(&Local_29 + 1608) == 4)
			{
				if (GET_HOGTIED_MASTER(&Local_29 + 1608) == GET_MOUNT(&Global_54076))
				{
					Function_529(&Local_29);
				}
			}
		}
	}
	iVar0 = Function_380(&Local_29);
	if (!Function_531(Local_29.f_1496, 8))
	{
		if (IS_ACTOR_VALID(&Local_29 + 1608))
		{
			if (IS_ACTOR_ON_FOOT(&Local_29 + 1608) && IS_ACTOR_ON_FOOT(&Global_54076))
			{
				if (&iLocal_595 == "")
				{
					Function_379(1);
				}
				else
				{
					Function_379(0);
				}
			}
			else if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Local_29 + 1608) || IS_ACTOR_RIDING_VEHICLE(&Local_29 + 1608))
			{
				Function_379(0);
			}
		}
		if (Function_375(&Local_29 + 1608, &uLocal_633, &fVar2, bLocal_634, 0, 0x40400000))
		{
			if (iVar0 <= 14)
			{
				iVar0 = 14;
				Function_255(&Local_29, 3);
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			iLocal_508 = 1;
			break;
		
		case 0x00000002:
			Function_472(&Local_29, 10);
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			Function_562(16);
			break;
		
		case 0x00000007:
			Function_562(16);
			iLocal_28 = 3;
			iVar1 = 0;
			break;
		
		case 0x00000008:
			Function_374(&Local_29, 1);
			if (Function_531(Local_29.f_1496, 8))
			{
				Function_340(&Local_29, "pm_esc_awyb", 1);
			}
			else
			{
				Function_340(&Local_29, "pm_esc_awyg", 1);
			}
			if (Function_531(Local_29.f_1496, 8))
			{
				if (IS_ACTOR_VALID(&Local_29 + 1608))
				{
					DESTROY_ACTOR(&Local_29 + 1608);
				}
			}
			Function_562(16);
			iLocal_28 = 3;
			break;
		
		case 0x00000009:
			Function_374(&Local_29, 1);
			Function_340(&Local_29, "pm_esc_wdirfail", 1);
			Function_562(16);
			iLocal_28 = 3;
			break;
		
		case 0x0000000A:
			Function_562(4);
			iLocal_28 = 3;
			break;
		
		case 0x0000000B:
			Function_562(5);
			iLocal_28 = 3;
			break;
		
		case 0x0000000C:
			Function_562(6);
			iLocal_28 = 3;
			break;
		
		case 0x0000000D:
			Function_562(7);
			iLocal_28 = 3;
			break;
		
		case 0x0000000E:
			Function_562(8);
			iLocal_28 = 3;
			break;
		
		case 0x0000000F:
			Function_562(9);
			iLocal_28 = 3;
			break;
		
		case 0x00000010:
			Function_562(10);
			iLocal_28 = 3;
			break;
		
		case 0x00000011:
			Function_562(11);
			break;
		
		case 0x00000012:
			Function_562(3);
			iLocal_28 = 2;
			break;
		
		case 0x00000013:
			iVar1 = 0;
			break;
		
		case 0x00000014:
			iVar1 = 0;
			break;
		
		case 0x00000016:
			if (iLocal_503 < 2)
			{
				Function_562(16);
			}
			else
			{
				Function_562(10);
			}
			iVar1 = 0;
			break;
	}
	return iVar1;
}

void Function_374(struct<181> Param0) //Position: 0x13189 / 78217
{
	int iVar0;
	
	if (&bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (Param0.f_76 - 1))
	{
		strcpy(&Param0 + 76[iVar04], "", 16);
		(*&Param0 + 184)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_180 = 0;
	return;
}

bool Function_375(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x131D7 / 78295
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_378(&iParam0, &Global_54076);
		if (!Function_531(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_376(&iParam0);
				return 1;
			}
		}
		if (!Function_531(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_376(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_376(&iParam0);
				return 1;
			}
		}
		if (!Function_531(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_376(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_376(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_531(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_376(&iParam0);
				return 1;
			}
		}
		if (!Function_531(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_376(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_376(int iParam0) //Position: 0x133A0 / 78752
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_377(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_377(int iParam0) //Position: 0x133DD / 78813
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_378(var uParam0, int iParam1) //Position: 0x133F6 / 78838
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

void Function_379(int iParam0) //Position: 0x134EB / 79083
{
	if (iParam0 == 1)
	{
		if (Function_531(bLocal_634, 4))
		{
			Function_533(&bLocal_634, 4);
		}
		if (Function_531(bLocal_634, 2))
		{
			Function_533(&bLocal_634, 2);
		}
	}
	else
	{
		if (!Function_531(bLocal_634, 4))
		{
			Function_534(&bLocal_634, 4);
		}
		if (!Function_531(bLocal_634, 2))
		{
			Function_534(&bLocal_634, 2);
		}
	}
	return;
}

int Function_380(struct<1705> Param0) //Position: 0x13540 / 79168
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	struct<2> Var10;
	int iVar12;
	bool bVar13;
	int iVar14;
	
	bVar1 = false;
	iVar2 = 0;
	iVar12 = 0;
	if (!Function_531(Param0.f_1496, 64))
	{
		LOG_ERROR("Cannot update escort without ESCORT_INIT_ESCORT being properly called");
		bVar1 = 19;
		return bVar1;
	}
	if (!IS_LAYOUTREF_VALID(&Param0 + 1480))
	{
		SCRIPT_BREAKPOINT("Invalid layout for escort traveler, tell Ben");
		bVar1 = 19;
		return bVar1;
	}
	switch (Function_412(&Param0))
	{
		case 0x00000002:
			Function_255(&Param0, 2);
			break;
		
		case 0x00000003:
			Function_255(&Param0, 3);
			break;
		
		case 0x00000004:
			Function_255(&Param0, 4);
			break;
		
		case 0x00000001:
			break;
	}
	switch (Function_11(&Param0))
	{
		case 0x00000004:
			if (bVar1 <= 6)
			{
				bVar1 = 6;
			}
			break;
		
		case 0x00000002:
			if (bVar1 <= 17)
			{
				bVar1 = 17;
			}
			break;
		
		case 0x00000003:
			if (bVar1 <= 7)
			{
				bVar1 = 7;
			}
			break;
	}
	Function_472(&Param0, 600);
	if (Function_531(Param0.f_1496, 2048) && Function_531(Param0.f_1496, 4096))
	{
		bVar13 = false;
		while (bVar13 < 1)
		{
			if ((*&Param0 + 1820)[bVar13] == 1)
			{
				if (!IS_ACTOR_VALID(&Param0 + 1708[bVar13]))
				{
					if (bVar1 <= 21)
					{
						bVar1 = 21;
						Function_255(&Param0, 3);
					}
				}
				else if (IS_ACTOR_DEAD(&Param0 + 1708[bVar13]))
				{
					if (bVar1 <= 11)
					{
						if (GET_LAST_ATTACKER(&Param0 + 1708[bVar13]) == &Global_54076)
						{
							Function_534(&Param0 + 1496, 262144);
						}
						bVar1 = 11;
						Function_255(&Param0, 3);
					}
				}
				else if (GET_LAST_ATTACKER(&Param0 + 1708[bVar13]) != &Global_54076 && !Function_531(Param0.f_1496, 8))
				{
					if (bVar1 <= 10)
					{
						bVar1 = 10;
						Function_255(&Param0, 3);
					}
				}
			}
			bVar13++;
		}
	}
	if (IS_OBJECTSET_VALID(&Param0 + 1848))
	{
		bVar13 = false;
		while (bVar13 < (GET_OBJECTSET_SIZE(&Param0 + 1848) - 1))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &Param0 + 1848));
			if (IS_ACTOR_VALID(&iVar3))
			{
				iVar14 = 0;
				if (IS_ACTOR_DEAD(&iVar3))
				{
					if (bVar1 <= 13)
					{
						bVar1 = 13;
						iVar14 = 1;
					}
				}
				else if (GET_LAST_ATTACKER(&iVar3) == &Global_54076)
				{
					if (!Function_411(&iVar3) != 0)
					{
						if (bVar1 <= 12)
						{
							bVar1 = 12;
							iVar14 = 1;
						}
					}
				}
				else if (Function_378(&Param0 + 1608, &iVar3) < 200.0f)
				{
					REMOVE_OBJECT_FROM_OBJECTSET(&iVar3, &Param0 + 1848);
					RELEASE_ACTOR(&iVar3);
				}
				if (iVar14 == 1)
				{
					Function_255(&Param0, 3);
					Function_410(&Param0, Function_411(&iVar3));
				}
			}
			bVar13++;
		}
	}
	if (Function_531(Param0.f_1496, 32))
	{
		if (!IS_ACTOR_VALID(&Param0 + 1608))
		{
			if (bVar1 <= 22)
			{
				bVar1 = 22;
				Function_255(&Param0, 3);
			}
		}
		else if (IS_ACTOR_DEAD(&Param0 + 1608))
		{
			if (bVar1 <= 16)
			{
				if (GET_LAST_ATTACKER(&Param0 + 1608) == &Global_54076)
				{
					Function_534(&Param0 + 1496, 262144);
				}
				bVar1 = 16;
				Function_255(&Param0, 3);
			}
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1608) && IS_ACTOR_ALIVE(&Param0 + 1608))
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var6);
		GET_POSITION(&Param0 + 1608, &Var8);
		iVar0 = Function_409(&Param0 + 1608);
		if (VDIST(Var6, Var8) < 100.0f)
		{
			if (bVar1 <= 8)
			{
				bVar1 = 8;
				TASK_CLEAR(&Param0 + 1608);
				Function_255(&Param0, 3);
			}
		}
		if (Function_408(&Param0) == 1)
		{
			if (Function_531(Param0.f_1496, 65536))
			{
				if (Function_407(StackVal, &Param0, Var8))
				{
					Function_405(&Param0, 1);
					Function_27(&Param0, 1, 0);
					Function_533(&Param0 + 1496, 65536);
				}
			}
			else if (!Function_531(Param0.f_1496, 131072))
			{
				if (VDIST(Global_54078, Var8) < 25.0f)
				{
					Function_405(&Param0, 0);
					Function_27(&Param0, 0, 1);
					Function_534(&Param0 + 1496, 65536);
				}
			}
			if (!Function_531(Param0.f_1496, 8))
			{
				if (Function_531(Param0.f_1496, 524288))
				{
					if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
					{
						Function_405(&Param0, 1);
						Function_27(&Param0, 1, 0);
						Function_533(&Param0 + 1496, 524288);
					}
				}
				else if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(GET_VEHICLE(&Global_54076), false) != &Global_54076 || (GET_ACTOR_IN_VEHICLE_SEAT(GET_VEHICLE(&Global_54076), true) != &Global_54076 && !IS_SEAT_OCCUPIED(GET_VEHICLE(&Global_54076), false)))
					{
					}
					else
					{
						Function_405(&Param0, 0);
						Function_27(&Param0, 0, 1);
						Function_534(&Param0 + 1496, 524288);
					}
				}
			}
		}
		if (IS_ACTOR_VALID(&Param0 + 1608))
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Param0.f_1096 == 1)
					{
						if (!IS_ACTOR_VALID(GET_MOUNT(&Param0 + 1608)))
						{
							TASK_CLEAR(&Param0 + 1608);
							TASK_FACE_ACTOR(&Param0 + 1608, &Global_54076, 1, 3212836864);
							TASK_PRIORITY_SET(&Param0 + 1608, false);
							SET_ACTOR_FACE_STYLE(&Param0 + 1608, 0);
						}
					}
					else if (Param0.f_1096 == 0)
					{
						HOGTIE_ACTOR(&Param0 + 1608);
					}
					Function_404(&Param0 + 1608, 1);
					break;
				
				case 0x00000001:
					if (!Function_531(Param0.f_1496, 128))
					{
						Function_397(&Param0);
					}
					if (IS_ACTOR_VALID(&Param0 + 1608))
					{
						if (Function_531(Param0.f_1496, 8))
						{
							MEMORY_CONSIDER_AS(&Param0 + 1608, &Global_54076, 2);
						}
						else
						{
							MEMORY_CONSIDER_AS(&Param0 + 1608, &Global_54076, 5);
						}
						MEMORY_IDENTIFY(&Param0 + 1608, &Global_54076);
						MEMORY_REPORT_POSITION_AUTO(&Param0 + 1608, &Global_54076, 1);
						SET_ACTOR_CAN_BE_HARDLOCKED(&Param0 + 1608, 0);
						SET_ACTOR_UPDATE_PRIORITY(&Param0 + 1608, false);
						SET_ALLOW_EXECUTE(&Param0 + 1608, 0);
					}
					if (bVar1 <= 1)
					{
						bVar1 = true;
					}
					if (Function_531(Param0.f_1496, 8))
					{
						Function_404(&Param0 + 1608, 3);
					}
					else
					{
						Function_404(&Param0 + 1608, 2);
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_HOGTIED(&Param0 + 1608))
					{
						if (!Function_531(Param0.f_1496, 131072))
						{
							if (IS_OBJECTSET_VALID(&Param0 + 1848))
							{
								bVar13 = false;
								while (bVar13 < (GET_OBJECTSET_SIZE(&Param0 + 1848) - 1))
								{
									iVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, &Param0 + 1848));
									if (IS_ACTOR_VALID(&iVar3))
									{
										if (Function_411(&iVar3) == 3)
										{
											if (MEMORY_GET_IS_VISIBLE(&iVar3, &Global_54076))
											{
												TASK_KILL_CHAR(&iVar3, &Global_54076);
											}
										}
									}
									bVar13++;
								}
							}
							TASK_CLEAR(&Param0 + 1608);
							TASK_FLEE_ACTOR(&Param0 + 1608, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
							TASK_PRIORITY_SET(&Param0 + 1608, true);
							Function_405(&Param0, 0);
							Function_27(&Param0, 0, 1);
							Function_534(&Param0 + 1496, 131072);
						}
						else if (Function_531(Param0.f_1496, 32768))
						{
							if (VDIST(Global_54078, Var8) > 5.0f)
							{
								Function_533(&Param0 + 1496, 32768);
							}
						}
						else if (VDIST(Global_54078, Var8) < (25.0f * 2.0f))
						{
							Function_374(&Param0, 1);
							Function_340(&Param0, "pm_esc_escape", 1);
							Function_534(&Param0 + 1496, 32768);
						}
					}
					else if (Function_531(Param0.f_1496, 131072))
					{
						TASK_CLEAR(&Param0 + 1608);
						Function_405(&Param0, 0);
						Function_533(&Param0 + 1496, 131072);
						Function_534(&Param0 + 1496, 65536);
					}
					break;
				
				case 0x00000002:
					if (Function_531(Param0.f_1496, 256))
					{
						if (Function_396(&(Global_43791[Param0.f_1556]), 16))
						{
							Function_533(&Param0 + 1496, 256);
						}
					}
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						iVar3 = GET_MOUNT(&Global_54076);
						if (IS_ACTOR_VALID(&iVar3))
						{
							if (IS_ACTOR_ALIVE(&iVar3))
							{
								if (IS_ACTOR_HORSE(&iVar3))
								{
									if (!GET_MOUNT(&Param0 + 1608) != &iVar3)
									{
										if (!(GET_TASK_STATUS(&Param0 + 1608, 11) != 1 || GET_TASK_STATUS(&Param0 + 1608, 11) != 3))
										{
											TASK_CLEAR(&Param0 + 1608);
											TASK_MOUNT(&Param0 + 1608, &iVar3, 0, 1, 2, 2147483647);
											TASK_PRIORITY_SET(&Param0 + 1608, true);
										}
									}
									else if (GET_TASK_STATUS(&Param0 + 1608, 11) == 0)
									{
										TASK_CLEAR(&Param0 + 1608);
										SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 1608, 0);
									}
								}
								else if (IS_ACTOR_MULE(GET_MOUNT(&Global_54076)))
								{
								}
							}
						}
					}
					else if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
					{
						iVar3 = GET_VEHICLE(&Global_54076);
						if (IS_ACTOR_VALID(&iVar3))
						{
							if (!GET_ACTOR_IN_VEHICLE_SEAT(&iVar3, false) != &Global_54076)
							{
							}
							else if (!GET_VEHICLE(&Param0 + 1608) != &iVar3)
							{
								if (GET_NUM_AVAILABLE_SEATS(&iVar3) >= 0)
								{
									if (!IS_SEAT_OCCUPIED(&iVar3, true))
									{
										if (!(GET_TASK_STATUS(&Param0 + 1608, 53) != 1 || GET_TASK_STATUS(&Param0 + 1608, 53) != 3))
										{
											TASK_CLEAR(&Param0 + 1608);
											TASK_VEHICLE_ENTER(&Param0 + 1608, &iVar3, 2, 4);
											TASK_PRIORITY_SET(&Param0 + 1608, true);
											SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 1608, 0);
										}
									}
								}
							}
						}
					}
					else if (IS_ACTOR_RIDING_VEHICLE(&Param0 + 1608))
					{
						if (!(GET_TASK_STATUS(&Param0 + 1608, 55) != 1 || GET_TASK_STATUS(&Param0 + 1608, 55) != 3))
						{
							TASK_CLEAR(&Param0 + 1608);
							TASK_VEHICLE_LEAVE(&Param0 + 1608);
							TASK_PRIORITY_SET(&Param0 + 1608, true);
						}
					}
					else if (!(GET_TASK_STATUS(&Param0 + 1608, 7) != 1 || GET_TASK_STATUS(&Param0 + 1608, 7) != 3))
					{
						TASK_CLEAR(&Param0 + 1608);
						TASK_FOLLOW_ACTOR(&Param0 + 1608, &Global_54076);
						TASK_PRIORITY_SET(&Param0 + 1608, true);
						SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 1608, 1);
					}
					GET_ACTOR_VELOCITY(&Global_54076, &Var4);
					if (!VMAG(Var4) > 0,5f)
					{
						Function_560(&Param0 + 1656);
					}
					if (!Function_531(Param0.f_1496, 65536))
					{
						GET_OBJECT_POSITION(&Param0 + 1584, &Var4);
						Var10 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var4, StackVal);
						Function_367(&Param0);
						if (VDIST(Global_54078, Function_367(&Param0)) > (Param0.f_1600 + 175.0f))
						{
							Function_560(&Param0 + 1688);
							Param0.f_1704 = 0;
						}
						else if (Function_430(&Param0 + 1688, 7.0f))
						{
							if (Param0.f_1704 > 2)
							{
								Function_24(&Param0);
								Function_255(&Param0, 3);
								return 9;
							}
							Function_374(&Param0, 1);
							Function_340(&Param0, "pm_esc_wdir", 1);
							iVar2 = 4;
							Function_560(&Param0 + 1688);
							Param0.f_1704++;
						}
						if (iVar2 == 0)
						{
							if (VMAG(Var10) < 300.0f)
							{
								iVar2 = 3;
							}
							else if (VMAG(Var10) < 150.0f)
							{
								iVar2 = 2;
							}
							else if (VMAG(Var10) < 30.0f)
							{
								iVar2 = 1;
							}
							else
							{
								iVar2 = 0;
							}
						}
					}
					if (Function_409(&Param0 + 1608) >= 1)
					{
						if (Function_430(&Param0 + 1656, 15.0f))
						{
							Function_560(&Param0 + 1656);
							Function_560(&Param0 + 1624);
						}
						else if (Function_430(&Param0 + 1624, 14.0f) || iVar2 != 4)
						{
							if (!IS_AMBIENT_SPEECH_PLAYING(&Param0 + 1608))
							{
								Function_560(&Param0 + 1656);
								Function_560(&Param0 + 1624);
								if (Function_531(Param0.f_1496, 8192))
								{
									Function_533(&Param0 + 1496, 8192);
									switch (iVar2)
									{
										case 0x00000004:
											SAY_SINGLE_LINE_CONTEXT(&Param0 + 1608, 135, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
											break;
										
										case 0x00000001:
											SAY_SINGLE_LINE_CONTEXT(&Param0 + 1608, 133, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
											break;
										
										case 0x00000002:
											SAY_SINGLE_LINE_CONTEXT(&Param0 + 1608, 136, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
											break;
										
										case 0x00000003:
											SAY_SINGLE_LINE_CONTEXT(&Param0 + 1608, 134, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
											break;
										
										case 0x00000000:
										default:
											break;
									}
								}
								else
								{
									Function_534(&Param0 + 1496, 8192);
								}
							}
						}
					}
					break;
				
				case 0x00000006:
					break;
				}
		}
		if (Function_531(Param0.f_1496, 1024) && !Function_531(Param0.f_1496, 2048))
		{
			if (Function_409(&Param0 + 1608) >= 1)
			{
				if (Function_393(&Param0))
				{
				}
			}
		}
		if (Function_531(Param0.f_1496, 2048))
		{
			GET_OBJECT_POSITION(&Param0 + 1584, &Var4);
			if (VDIST(Global_54078, Var4) > 100.0f && !Function_531(Param0.f_1496, 4096))
			{
				Function_392(&Param0);
			}
			iVar12 = Function_387(&Param0, 0);
		}
		if (iVar12 == 1)
		{
			if (!IS_ACTOR_VALID(GET_HOGTIED_MASTER(&Param0 + 1608)) && !IS_ACTOR_VALID(GET_MOUNT(&Param0 + 1608)))
			{
				Function_386(&Param0 + 1708[0]);
			}
			DECOR_SET_BOOL(&Param0 + 1584, "escort_reached", 1);
			if (bVar1 <= 18)
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				bVar1 = 18;
			}
		}
	}
	if (Function_33(&Param0))
	{
		Function_310(&Param0, 0, 1);
	}
	else
	{
		Function_381(StackVal, &Param0, Global_54078, 1, Param0.f_1548, 0x42c80000);
	}
	return bVar1;
}

var Function_381(struct<1049> Param0) //Position: 0x142D0 / 82640
{
	var uVar0;
	
	Function_385(&Param0);
	Function_382(&Param0);
	Function_310(&Param0, &iParam3, 0);
	if (IS_OBJECT_VALID(&Param0))
	{
		Function_515(&Param0);
		uVar0 = Function_515(&Param0);
		if (!IS_BLIP_VALID(&Param0 + 48))
		{
			if (WOULD_ACTOR_BE_VISIBLE(false, &uVar0, 3212836864) || VDIST(Param1, (&Param0 + 8)) > &fParam4)
			{
				Param0.f_40 = 1;
			}
		}
	}
	if (VDIST(Param1, *(&Param0 + 8)) < &fParam5)
	{
		Param0.f_40 = 0;
	}
	else if ((!IS_BLIP_VALID(&Param0 + 48) && Param0.f_40 != 0) && IS_OBJECT_VALID(&Param0))
	{
		*(&Param0 + 48) = ADD_BLIP_FOR_OBJECT(&Param0, Param0.f_56, 0f, 2, 0);
	}
	if (!Function_531(Param0.f_1048, 4096))
	{
		if (!Param0.f_56 != 4294967295)
		{
			if ((!IS_BLIP_VALID(&Param0 + 48) && Param0.f_40 != 1) && IS_OBJECT_VALID(&Param0))
			{
				*(&Param0 + 48) = ADD_BLIP_FOR_OBJECT(&Param0, Param0.f_56, 0f, 2, 0);
				SET_BLIP_BLINK(&Param0 + 48, 1, 0, 5f);
			}
		}
		if (Param0.f_40 != 0 && IS_BLIP_VALID(&Param0 + 48))
		{
			REMOVE_BLIP(&Param0 + 48);
		}
	}
	if (Param0.f_40 != 1 && SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_195(&Param0, 1);
	}
	return Param0.f_40;
}

void Function_382(int iParam0) //Position: 0x14421 / 82977
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	struct<2> Var6;
	var uVar8;
	bool bVar9;
	
	if (SQUAD_IS_VALID(&iParam0 + 1024) && Function_430(&iParam0 + 1032, 7.0f))
	{
		Function_384(&iParam0);
		Var0 = Function_384(&iParam0);
		if (Function_573(StackVal, Var0))
		{
			bVar9 = false;
			while (bVar9 < (SQUAD_GET_SIZE(&iParam0 + 1024) - 1))
			{
				uVar8 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 1024, bVar9);
				Var6 = Vector(0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 6.0f));
				ROTATE_VECTOR_XZ(&Var6, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
				uVar2 = Vector(StackVal, StackVal, StackVal) + Vector(Var6, Var0, StackVal);
				FIND_GROUND_INTERSECTION(&uVar2, 100.0f, &uVar2, &uVar4);
				TASK_BIRD_LAND_AT_COORD(&uVar8, &uVar2);
				bVar9++;
			}
			Function_383(&iParam0 + 1024, 1);
			Function_560(&iParam0 + 1032);
		}
		else
		{
			Function_195(&iParam0, 1);
		}
	}
	return;
}

void Function_383(var uParam0, bool bParam1) //Position: 0x144D9 / 83161
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

struct<8> Function_384(int iParam0) //Position: 0x1451A / 83226
{
	return StackVal, *(&iParam0 + 8);
}

void Function_385(int iParam0) //Position: 0x14527 / 83239
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

void Function_386(int iParam0) //Position: 0x14533 / 83251
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 0);
		TASK_CLEAR(&iParam0);
	}
	return;
}

int Function_387(struct<1497> Param0) //Position: 0x1454F / 83279
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (!IS_ACTOR_VALID(&Param0 + 1608))
	{
		return 0;
	}
	if (Function_409(&Param0 + 1608) >= 1)
	{
		bVar0 = DECOR_GET_INT(&Param0 + 1584, "escort_destType");
		if (&bParam1 == 1)
		{
			if (IS_ACTOR_VALID(GET_MOUNT(&Param0 + 1608)))
			{
				return 0;
			}
		}
		switch (bVar0)
		{
			case 0x00000001:
			case 0x00000003:
				if (IS_OBJECT_VALID(&Param0 + 1592))
				{
					if (Function_531(Param0.f_1496, 8))
					{
						if (IS_ACTOR_VALID(&Param0 + 1608) && IS_ACTOR_VALID(&Param0 + 1708[0]))
						{
							if (IS_ACTOR_ON_FOOT(&Global_54076))
							{
								fVar1 = 3,5f;
							}
							else if (Function_26(GET_MOUNT(&Global_54076), 0) > 2.0f)
							{
								fVar1 = 3,5f;
							}
							else if (Function_26(GET_MOUNT(&Global_54076), 0) > 6.0f)
							{
								fVar1 = 3.0f;
							}
							else if (Function_26(GET_MOUNT(&Global_54076), 0) > 10.0f)
							{
								fVar1 = 4.0f;
							}
							else if (Function_26(GET_MOUNT(&Global_54076), 0) > 14.0f)
							{
								fVar1 = 8.0f;
							}
							else if (Function_26(GET_MOUNT(&Global_54076), 0) > 18.0f)
							{
								fVar1 = 10.0f;
							}
							else
							{
								fVar1 = 16.0f;
							}
							if (Function_390(&Global_54076, &Param0 + 1592) > fVar1)
							{
								SET_PLAYER_CONTROL(0, 0, 0, 0);
								if (IS_PLAYER_DEADEYE(0))
								{
									CANCEL_DEADEYE();
									CANCEL_TIME_WARP(1);
								}
								Function_31(&Param0 + 1592);
								Function_389(&Param0, 0);
								bVar2 = true;
							}
						}
					}
					else if (Function_388(&Param0 + 1592, 0, 1, 0, 0, 0) == 1)
					{
						Function_31(&Param0 + 1592);
						Function_389(&Param0, 0);
						bVar2 = true;
					}
				}
				break;
			
			case 0x00000002:
				if (Function_531(Param0.f_1496, 2048))
				{
					if (IS_OBJECT_VALID(&Param0 + 1592))
					{
						if (Function_388(&Param0 + 1592, 0, 1, 0, 0, 0) == 1)
						{
							Function_389(&Param0, 0);
							bVar2 = true;
						}
					}
				}
				break;
			
			case 0x00000004:
				if (DECOR_GET_BOOL(&Param0 + 1584, "escort_stayout") == 1)
				{
					if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Param0 + 1560))
					{
						bVar2 = true;
					}
				}
				else if (IS_OBJECT_VALID(&Param0 + 1592))
				{
					if (IS_OBJECT_VALID(&Param0 + 1592))
					{
						if (Function_388(&Param0 + 1592, 0, 1, 0, 0, 0) == 1)
						{
							Function_389(&Param0, 0);
							bVar2 = true;
						}
					}
				}
				else if (IS_ACTOR_IN_VOLUME(&Global_54076, &Param0 + 1560))
				{
					bVar2 = true;
				}
				break;
			
			default:
				LOG_ERROR("Unsupported ESCORT_DESTINATION_TYPE");
				break;
			}
	}
	return bVar2;
}

int Function_388(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x147FF / 83967
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&bVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&bVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &iParam1, &iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_25(&bVar1, &bParam5);
			}
			else if (IS_ACTOR_RIDING(&bVar1))
			{
				if (Function_26(&bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&bVar1))
			{
				iVar2 = TASK_SEQUENCE_OPEN();
				if (Function_26(&bVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&bVar1, &iVar3, &uVar5);
					Function_65(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&bVar1, &iVar3, &uVar5);
					Function_65(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, iVar2);
				TASK_SEQUENCE_RELEASE(iVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void Function_389(struct<1501> Param0) //Position: 0x14A34 / 84532
{
	if (iParam1 <= 0)
	{
		Param0.f_1500 = 0;
	}
	else if (iParam1 <= Param0.f_1500)
	{
		Param0.f_1500 = iParam1;
	}
	return;
}

float Function_390(int iParam0, var uParam1) //Position: 0x14A5D / 84573
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_366(&iParam0);
			Var0 = Function_366(&iParam0);
			Function_391(&uParam1);
			Var2 = Function_391(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_391(int iParam0) //Position: 0x14AFF / 84735
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_392(struct<1557> Param0) //Position: 0x14B6D / 84845
{
	int iVar0;
	
	if (Function_531(Param0.f_1496, 8))
	{
		if (Param0.f_1556 == Global_46760[0])
		{
			*(&Param0 + 1756[02]) = Vector(-2097,577f, 16,449f, 2606,162f);
			*(&Param0 + 1756[12]) = Vector(-2094,824f, 16,449f, 2609,479f);
		}
		else if (Param0.f_1556 == Global_46914[0])
		{
			*(&Param0 + 1756[02]) = Vector(755,386f, 78,525f, 1234,835f);
			*(&Param0 + 1756[12]) = Vector(755,883f, 78,525f, 1231,911f);
		}
		else if (Param0.f_1556 == Global_46866[0])
		{
			*(&Param0 + 1756[02]) = Vector(-2673,739f, 31,431f, 4253,147f);
			*(&Param0 + 1756[12]) = Vector(-2667,778f, 31,387f, 4253,858f);
		}
		else if (Param0.f_1556 == Global_46816[0])
		{
			*(&Param0 + 1756[02]) = Vector(-821,297f, 93,361f, 2419,951f);
			*(&Param0 + 1756[12]) = Vector(-819,546f, 93,365f, 2421,278f);
		}
	}
	else if (Param0.f_1556 == Global_46760[0])
	{
		*(&Param0 + 1756[02]) = Vector(-2166,994f, 16,849f, 2604,392f);
	}
	else if (Param0.f_1556 == Global_46914[0])
	{
		*(&Param0 + 1756[02]) = Vector(847,9f, 78,455f, 1247,044f);
	}
	else if (Param0.f_1556 == Global_46866[0])
	{
		*(&Param0 + 1756[02]) = Vector(-2683,038f, 31,548f, 4253,351f);
	}
	else if (Param0.f_1556 == Global_46850[0])
	{
		*(&Param0 + 1756[02]) = Vector(-4337,184f, 27,212f, 4410,499f);
	}
	else if (Param0.f_1556 == Global_46816[0])
	{
		*(&Param0 + 1756[02]) = Vector(-944,492f, 90,313f, 2426,561f);
	}
	else if (Param0.f_1556 == Global_46816[1])
	{
		*(&Param0 + 1756[02]) = Vector(129,229f, 73,7f, 2289,391f);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (IS_ACTOR_VALID(&Param0 + 1708[iVar0]))
		{
			SET_OBJECT_POSITION(&Param0 + 1708[iVar0], *(&Param0 + 1756[iVar02]));
			Function_23();
			*(&Param0 + 1796[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, &Param0 + 1480, Function_49(), 4,203895E-45f, *(&Param0 + 1756[iVar02]), Function_23(), Vector(4.0f, 4.0f, 4.0f));
			SET_ACTOR_STAY_WITHIN_VOLUME(&Param0 + 1708[iVar0], &Param0 + 1796[iVar0], 1, 2);
			if (IS_MOVER_FROZEN(&Param0 + 1708[iVar0]))
			{
				SET_MOVER_FROZEN(&Param0 + 1708[iVar0], 0);
			}
			AI_GOAL_LOOK_CLEAR(&Param0 + 1708[iVar0]);
			TASK_FACE_ACTOR(&Param0 + 1708[iVar0], &Global_54076, 1, 3212836864);
			TASK_PRIORITY_SET(&Param0 + 1708[iVar0], false);
		}
		iVar0++;
	}
	Function_534(&Param0 + 1496, 4096);
	return 1;
}

bool Function_393(struct<1497> Param0) //Position: 0x14E84 / 85636
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3[2];
	struct<8> Var8;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (!IS_LAYOUTREF_VALID(&Param0 + 1480))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&Param0 + 1584))
	{
		return 0;
	}
	GET_OBJECT_POSITION(&Param0 + 1584, &Var1);
	Var3[02] = Vector(-1.0f, -5.0f, 1.0f);
	Var3[12] = Vector(0.0f, -5.0f, 0.0f);
	if (Function_531(Param0.f_1496, 8))
	{
		iVar16 = 2;
	}
	else
	{
		iVar16 = 1;
	}
	iVar17 = 0;
	while (iVar17 < (iVar16 - 1))
	{
		if (Function_334((*&Param0 + 1732)[iVar17]))
		{
			GET_OBJECT_POSITION(&Param0 + 1584, &Var1);
			Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Var3[iVar172], Var1, StackVal);
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("escortContact") };
			Function_23();
			*(&Param0 + 1708[iVar17]) = CREATE_ACTOR_IN_LAYOUT(&Param0 + 1480, &Var8, (*&Param0 + 1732)[iVar17], Var1, Function_23());
			(*&Param0 + 1820)[iVar17] = 1;
		}
		else
		{
			return 0;
		}
		iVar17++;
	}
	iVar17 = 0;
	while (iVar17 < (iVar16 - 1))
	{
		if (IS_ACTOR_VALID(&Param0 + 1708[iVar17]))
		{
			bVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&Param0 + 1708[iVar17]), "escNecType");
			if (bVar0 == 3)
			{
				Function_395(&Param0 + 1708[iVar17], 0);
			}
			MEMORY_CONSIDER_AS(&Param0 + 1708[iVar17], &Global_54076, 5);
			MEMORY_IDENTIFY(&Param0 + 1708[iVar17], &Global_54076);
			iVar18 = 0;
			while (iVar18 < (iVar16 - 1))
			{
				if (!iVar17 != iVar18)
				{
					if (IS_ACTOR_VALID(&Param0 + 1708[iVar18]))
					{
						Function_68(&Param0 + 1708[iVar17], &Param0 + 1708[iVar18], 0, 0);
					}
				}
				iVar18++;
			}
			if (IS_ACTOR_VALID(&Param0 + 1608))
			{
				Function_68(&Param0 + 1708[iVar17], &Param0 + 1608, 2, 1);
			}
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Param0 + 1708[iVar17], 1);
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&Param0 + 1708[iVar17], 0);
			AI_GOAL_LOOK_AT_ACTOR_NEW(&Param0 + 1708[iVar17], &Global_54076, -1.0f, 1);
			AI_IGNORE_ACTOR(&Param0 + 1708[iVar17]);
			SET_MOVER_FROZEN(&Param0 + 1708[iVar17], 1);
			REFERENCE_ACTOR(&Param0 + 1708[iVar17]);
		}
		iVar17++;
	}
	Function_394(&Param0);
	Function_534(&Param0 + 1496, 2048);
	return 1;
}

int Function_394(int iParam0) //Position: 0x150E4 / 86244
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(&iParam0 + 1584))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (IS_ACTOR_VALID(&iParam0 + 1708[iVar0]))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0 + 1708[iVar0]);
			if (IS_VOLUME_VALID(&iParam0 + 1560))
			{
				ADD_ACTOR_STAY_WITHIN_VOLUME(&iParam0 + 1708[iVar0], &iParam0 + 1560);
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_395(int iParam0, int iParam1) //Position: 0x1514E / 86350
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

bool Function_396(var uParam0, int iParam1) //Position: 0x151D9 / 86489
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_397(struct<1549> Param0) //Position: 0x151F6 / 86518
{
	if (Function_531(Param0.f_1496, 128))
	{
		return 1;
	}
	Function_403(&Param0);
	Function_558(&Param0);
	if (!Function_531(Param0.f_1496, 64))
	{
		LOG_ERROR("Cannot launch escort without ESCORT_INIT_ESCORT being properly called");
		return 0;
	}
	if (!IS_ACTOR_VALID(&Param0 + 1608))
	{
		LOG_ERROR("Tried to run ESCORT_LAUNCH_ESCORT escort before getting a valid traveler.");
		return 0;
	}
	if (Param0.f_1548 != 0.0f)
	{
		Function_402(&Param0, 25.0f);
	}
	Function_398(&Param0);
	Function_534(&Param0 + 1496, 128);
	return 1;
}

void Function_398(struct<1093> Param0) //Position: 0x152FB / 86779
{
	if (Function_531(Param0.f_1048, 4))
	{
		Function_401();
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Function_400(1);
	if (Function_531(Param0.f_1048, 32))
	{
		if (Function_205(Param0.f_1092))
		{
			Function_399(Param0.f_1092, 1);
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_195(&Param0, 0);
	}
	Function_534(&Param0 + 1048, 16);
	Global_6625 = 1;
	if (Function_531(Param0.f_1048, 64))
	{
		Global_21575 = 4294967295;
	}
	Function_255(&Param0, 1);
	return;
}

void Function_399(int iParam0, int iParam1) //Position: 0x1538A / 86922
{
	int iVar0;
	
	if (!Function_250(iParam0))
	{
		Function_207();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_206(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_215(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_204(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_400(int iParam0) //Position: 0x153F2 / 87026
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_21())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_401() //Position: 0x1542B / 87083
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_402(struct<1549> Param0) //Position: 0x15441 / 87105
{
	Param0.f_1548 = iParam1;
	return;
}

void Function_403(int iParam0) //Position: 0x1544F / 87119
{
	char* cVar0[32];
	
	if (!IS_OBJECT_VALID(&iParam0 + 1584))
	{
		Function_558(&iParam0);
		strcpy(&cVar0, "escoLocObj", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&cVar0) };
		(&iParam0 + 1584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iParam0 + 1480, &cVar0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	}
	return;
}

void Function_404(var uParam0, bool bParam1) //Position: 0x1549F / 87199
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "escort_state", bParam1);
	return;
}

void Function_405(char* cParam0) //Position: 0x154C0 / 87232
{
	Function_374(&cParam0, 1);
	if (iParam1 == 1)
	{
		if (!Function_531(cParam0.f_1496, 8))
		{
			Function_340(&cParam0, "pm_esc_stg", 1);
		}
		else
		{
			Function_340(&cParam0, "pm_esc_stb", 1);
		}
		Function_406(&cParam0, GET_OBJECT_NAME(&Global_44085[cParam0.f_15569] + 8), 0);
	}
	else if (!Function_531(cParam0.f_1496, 8))
	{
		if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
		{
			if (!GET_ACTOR_IN_VEHICLE_SEAT(GET_VEHICLE(&Global_54076), false) != &Global_54076)
			{
				Function_340(&cParam0, "pm_esc_exit", 1);
			}
		}
		else
		{
			Function_340(&cParam0, "pm_esc_retg", 1);
		}
	}
	else if (GET_ACTOR_HOGTIE_STATE(&cParam0 + 1608) == 4)
	{
		Function_340(&cParam0, "pm_esc_retbh", 1);
	}
	else if (IS_ACTOR_HOGTIED(&cParam0 + 1608))
	{
		Function_340(&cParam0, "pm_esc_retb", 1);
	}
	else
	{
		Function_340(&cParam0, "pm_esc_hogtie", 1);
	}
	return;
}

int Function_406(int iParam0, char* cParam1) //Position: 0x155F0 / 87536
{
	if (IS_STRING_VALID(&cParam1))
	{
		strcpy(&iParam0 + 248[06], &cParam1, 24);
		(*&iParam0 + 184)[0] = 1;
	}
	else
	{
		strcpy(&iParam0 + 248[06], "", 24);
		(*&iParam0 + 184)[0] = 0;
	}
	if (IS_STRING_VALID(&cParam2))
	{
		strcpy(&iParam0 + 248[16], &cParam2, 24);
		(*&iParam0 + 184)[1] = 1;
	}
	else
	{
		strcpy(&iParam0 + 248[16], "", 24);
		(*&iParam0 + 184)[1] = 0;
	}
	return 1;
}

bool Function_407(struct<1497> Param0) //Position: 0x15667 / 87655
{
	if (!IS_ACTOR_VALID(&Param0 + 1608))
	{
		LOG_ERROR("Invalid traveller actor");
		return 0;
	}
	if (Function_531(Param0.f_1496, 8))
	{
		if (GET_ACTOR_HOGTIE_STATE(&Param0 + 1608) == 3)
		{
			if (GET_HOGTIED_MASTER(&Param0 + 1608) == &Global_54076)
			{
				return 1;
			}
		}
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (GET_ACTOR_HOGTIE_STATE(&Param0 + 1608) == 4)
			{
				if (GET_HOGTIED_MASTER(&Param0 + 1608) == GET_MOUNT(&Global_54076))
				{
					return 1;
				}
			}
		}
	}
	if (IS_ACTOR_RIDING(&Global_54076) && IS_ACTOR_RIDING(&Param0 + 1608))
	{
		if (GET_MOUNT(&Global_54076) == GET_MOUNT(&Param0 + 1608))
		{
			return 1;
		}
	}
	if (IS_ACTOR_RIDING_VEHICLE(&Global_54076) && IS_ACTOR_RIDING_VEHICLE(&Param0 + 1608))
	{
		if (GET_VEHICLE(&Global_54076) == GET_VEHICLE(&Param0 + 1608))
		{
			return 1;
		}
	}
	if (IS_ACTOR_ON_FOOT(&Global_54076) && IS_ACTOR_ON_FOOT(&Param0 + 1608))
	{
		if (VDIST(Global_54078, Param1) > 5.0f)
		{
			return 1;
		}
	}
	return 0;
}

int Function_408(struct<1497> Param0) //Position: 0x15779 / 87929
{
	if (Function_531(Param0.f_1496, 128))
	{
		return 1;
	}
	return 0;
}

int Function_409(int iParam0) //Position: 0x15793 / 87955
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "escort_state");
}

void Function_410(struct<1857> Param0) //Position: 0x157B1 / 87985
{
	Param0.f_1856 = iParam1;
	return;
}

int Function_411(int iParam0) //Position: 0x157BF / 87999
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "escNecType");
}

int Function_412(struct<1085> Param0) //Position: 0x157DB / 88027
{
	Param0.f_1084 = Function_413(&Param0);
	Function_385(&Param0);
	return Param0.f_1084;
}

var Function_413(int iParam0) //Position: 0x157F9 / 88057
{
	int iVar0;
	var uVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_428(0))
	{
		uVar1[0] = "Pass";
		uVar1[1] = "Fail";
		uVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_414(&iParam0 + 1052, &uVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
		if (iVar21 == 0)
		{
			Function_2();
			iVar0 = 2;
		}
		else if (iVar21 == 1)
		{
			Function_2();
			iVar0 = 3;
		}
		else if (iVar21 == 2)
		{
			Function_2();
			iVar0 = 4;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_414(struct<17> Param0) //Position: 0x158A1 / 88225
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_427(&Var12, &Var0);
	uVar15 = Function_426(uParam1, &Var12);
	Function_425(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_424(&Param0, uVar15);
	Function_422(StackVal, &Param0, Var12.f_12);
	Function_420(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_419(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_416(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_415(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_415(int iParam0, int iParam1, int iParam2) //Position: 0x15995 / 88469
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_416(struct<17> Param0) //Position: 0x159F5 / 88565
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_418(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					*(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_418(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_415(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_417(Param1.f_64);
	}
	else
	{
		Function_417(Param1.f_64);
	}
	return 0;
}

void Function_417(bool bParam0) //Position: 0x15B88 / 88968
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_418(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x15BC6 / 89030
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_419(int iParam0, struct<21> Param1) //Position: 0x15C7C / 89212
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_420(vector3 vParam0) //Position: 0x15CA3 / 89251
{
	switch (Function_421())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_421() //Position: 0x15D4F / 89423
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_422(vector3 vParam0) //Position: 0x15D8B / 89483
{
	switch (Function_423(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_423(int iParam0) //Position: 0x15E34 / 89652
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_531(iParam0, 0x40000000))
		{
			Function_534(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_531(iParam0, 0x40000000))
		{
			Function_534(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_533(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_531(iParam0, 0x20000000))
		{
			Function_534(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_531(iParam0, 0x20000000))
		{
			Function_534(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_533(&iParam0, 0x20000000);
	return 0;
}

var Function_424(struct<21> Param0) //Position: 0x15F54 / 89940
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_425(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1610E / 90382
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_426(int iParam0, struct<13> Param1) //Position: 0x161AA / 90538
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_427(struct<17> Param0) //Position: 0x161C6 / 90566
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_428(int iParam0) //Position: 0x16220 / 90656
{
	if (!Function_429(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_429(int iParam0) //Position: 0x16235 / 90677
{
	if (iParam0 && !IS_SCRIPT_VALID(&Global_47308))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == &Global_47308)
	{
		return 1;
	}
	return 0;
}

bool Function_430(int iParam0, float fParam1) //Position: 0x1625C / 90716
{
	if (Function_72(&iParam0))
	{
		if (Function_70(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_431(struct<1493> Param0) //Position: 0x1627A / 90746
{
	int iVar0;
	struct<2> Var1;
	
	if (Function_516(&Param0) == 0)
	{
		LOG_ERROR("Next time check ESCORT_IS_READY_TO_INIT before calling ESCORT_INIT_ESCORT.");
	}
	Function_558(&Param0);
	Function_403(&Param0);
	if (!IS_LAYOUTREF_VALID(&Param0 + 1480))
	{
		LOG_ERROR("A layout must be set by ESCORT_SET_LAYOUT before calling ESCORT_INIT");
		return 0;
	}
	if (!IS_OBJECT_VALID(&Param0 + 1584))
	{
		LOG_ERROR("A destination must be set by ESCORT_SET_DESTINATION_* before calling ESCORT_INIT");
		return 0;
	}
	if (!Function_448(&Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		(*&Param0 + 1820)[iVar0] = 0;
		iVar0++;
	}
	Function_447(&Param0, 1);
	Function_330(&Param0, 13);
	Function_446(&Param0, 3);
	Function_441(&Param0, Function_442(Param0.f_1096, 3, 2));
	Function_433(StackVal, &Param0, &Param0 + 1608, 4294967295, Vector(0.0f, 0.0f, 0.0f), 1, 1, Param0.f_1492);
	Function_384(&Param0);
	if (Function_573(StackVal, Function_384(&Param0)))
	{
		GET_OBJECT_POSITION(&Param0 + 1608, &Var1);
		Function_432(StackVal, &Param0, Var1);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,1f);
	Function_534(&Param0 + 1496, 64);
	return 1;
}

void Function_432(int iParam0, struct<2> Param1) //Position: 0x16447 / 91207
{
	*(&iParam0 + 8) = Param1;
	return;
}

void Function_433(struct<1093> Param0) //Position: 0x16457 / 91223
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_188(&Param0);
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0 = &uParam1;
		uVar8 = &uParam1;
	}
	Param0.f_56 = uParam2;
	if (!Function_573(StackVal, Param3))
	{
		*(&Param0 + 8) = Param3;
	}
	if (&iParam5 == 1)
	{
		Function_534(&Param0 + 1048, 4);
	}
	else
	{
		Function_533(&Param0 + 1048, 4);
	}
	if (&bParam6)
	{
		if (Function_205(Param0.f_1092))
		{
			Function_440(Param0.f_1092, 1);
			Function_534(&Param0 + 1048, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_534(&Param0 + 1048, 1024);
	Param0.f_1020 = &iParam7;
	if (&iParam7 >= 0)
	{
		if (!IS_OBJECT_VALID(&uVar8))
		{
			uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 32, &Var0, Param3, Vector(0.0f, 0.0f, 0.0f));
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("nbirdSquad") };
		*(&Param0 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 32, &Var0));
		if (SQUAD_IS_VALID(&Param0 + 1024))
		{
			Function_435(&Param0 + 32, &Param0 + 1024, &iParam7, &uVar8, 1129, 0x41200000);
			Function_434(&Param0 + 1024, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(&uVar8);
		}
		Function_560(&Param0 + 1032);
	}
	Function_560(&Param0 + 60);
	Function_36(0);
}

void Function_434(var uParam0, bool bParam1) //Position: 0x165CE / 91598
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_435(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x16615 / 91669
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	
	Function_438(10.0f);
	Var12 = { StackVal, Function_438(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_334(&bParam4) || &bParam4 != 0)
		{
			bVar14 = Function_535(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &bParam4;
		}
		iVar15 = 0;
		while (iVar15 < (iParam2 - 1))
		{
			Function_436(&Var12, iVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_436(&Var12, iVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			iVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

struct<8> Function_436(vector3 vParam0) //Position: 0x1670F / 91919
{
	struct<2> Var0;
	
	if (!Function_437(&vParam0))
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

bool Function_437(int iParam0) //Position: 0x1685C / 92252
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

struct<8> Function_438(int iParam0) //Position: 0x16880 / 92288
{
	Function_439(iParam0, 10);
	return StackVal, Function_439(iParam0, 10);
}

struct<8> Function_439(var uParam0, int iParam1) //Position: 0x1688D / 92301
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_440(int iParam0, int iParam1) //Position: 0x168A8 / 92328
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_250(iParam0))
	{
		Function_207();
		return;
	}
	iVar0 = Function_206(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_215(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_204(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_211(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_210(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_441(struct<1093> Param0) //Position: 0x1694F / 92495
{
	if (Function_205(iParam1))
	{
		Param0.f_1092 = iParam1;
		Function_534(&Param0 + 1048, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_442(bool bParam0, bool bParam1, bool bParam2) //Position: 0x169A6 / 92582
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_445(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_443(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_443(bParam0, bParam1, bParam2, 4294967295);
}

int Function_443(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x16A04 / 92676
{
	var uVar0;
	
	if (!Function_328(bParam2))
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
	uVar0 = Function_445(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_444(uVar0);
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

var Function_444(int iParam0) //Position: 0x16B68 / 93032
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

var Function_445(int iParam0, int iParam1, int iParam2) //Position: 0x16BA6 / 93094
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_446(struct<917> Param0) //Position: 0x16BC6 / 93126
{
	Param0.f_916 = iParam1;
	return;
}

void Function_447(struct<913> Param0) //Position: 0x16BD4 / 93140
{
	Param0.f_912 = iParam1;
	return;
}

bool Function_448(struct<1617> Param0) //Position: 0x16BE2 / 93154
{
	char* cVar0[32];
	struct<2> Var8;
	var uVar10;
	struct<2> Var12;
	struct<5> Var14;
	
	if (!IS_LAYOUTREF_VALID(&Param0 + 1480))
	{
		LOG_ERROR("ESCORT_CreateScene got invalid layout");
		return 0;
	}
	Function_455(&Param0);
	if (Function_573(StackVal, Function_455(&Param0)))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&Param0 + 1608), &Var14);
		Function_454(StackVal, &Param0, Var14);
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 1608))
	{
		Function_453(&Param0, &Param0 + 1608);
	}
	if (Function_452() >= 0)
	{
		Function_451(&Param0, 2);
	}
	if (IS_OBJECTSET_VALID(Function_450()))
	{
		*(&Param0 + 1848) = Function_450();
	}
	if (IS_ACTOR_VALID(&Param0 + 1608))
	{
		GET_POSITION(&Param0 + 1608, &Var12);
		if (Function_573(StackVal, Var12))
		{
			Function_455(&Param0);
			SET_OBJECT_POSITION(&Param0 + 1608, Function_455(&Param0));
		}
	}
	else
	{
		if (Function_334(Function_550()) && Function_550() == 0)
		{
			Function_449(&Param0, Function_550());
		}
		if (Function_334(Param0.f_1616) && Param0.f_1616 == 0)
		{
			strcpy(&cVar0, "nescortGuy", 32);
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&cVar0) };
			Function_455(&Param0);
			Var12 = Function_455(&Param0);
			Function_455(&Param0);
			Var14 = Function_455(&Param0);
			Var14.f_4 = (StackVal + 2.0f);
			if (!FIND_GROUND_INTERSECTION(&Var14, 100.0f, &Var12, &uVar10))
			{
				return 0;
			}
			CLEAR_AREA_OF_TREE_TYPE(Var12, 5.0f, "");
			CLEAR_AREA_OF_GRASS(Var12, 5.0f);
			Var8 = Vector(0.0f, RAND_FLOAT_RANGE(0.0f, 360.0f), 0.0f);
			*(&Param0 + 1608) = CREATE_ACTOR_IN_LAYOUT(&Param0 + 1480, &cVar0, Param0.f_1616, Var12, Var8);
			SET_ANIM_SET_FOR_ACTOR(&Param0 + 1608, "fema_ride_passenger", 0);
			SET_MOUNTS_AS_PASSENGER(&Param0 + 1608, 1);
			if (IS_ACTOR_VALID(&Param0 + 1608))
			{
				Function_534(&Param0 + 1496, 32);
			}
			else
			{
				LOG_ERROR("Invalid traveler creation");
				return 0;
			}
			MEMORY_CONSIDER_AS(&Param0 + 1608, &Global_54076, 5);
			MEMORY_IDENTIFY(&Param0 + 1608, &Global_54076);
			MEMORY_REPORT_POSITION_AUTO(&Param0 + 1608, &Global_54076, 1);
			SET_ACTOR_CAN_BE_HARDLOCKED(&Param0 + 1608, 0);
			SET_ACTOR_UPDATE_PRIORITY(&Param0 + 1608, false);
			SET_ANIM_SET_FOR_ACTOR(&Param0 + 1608, "gent_ride_passenger", 0);
			SET_MOUNTS_AS_PASSENGER(&Param0 + 1608, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&Param0 + 1608);
			Function_404(&Param0 + 1608, 0);
		}
		else
		{
			LOG_ERROR("ESCORT_CreateScene found an invalid actor template for traveler");
			return 0;
		}
	}
	if (!IS_ACTOR_VALID(&Param0 + 1608))
	{
		return 0;
	}
	Function_534(&Param0 + 1496, 32);
	return 1;
}

int Function_449(struct<1617> Param0) //Position: 0x16ECF / 93903
{
	if (!Function_334(bParam1))
	{
		LOG_ERROR("Invalid traveler actor enum passed in");
		return 0;
	}
	Param0.f_1616 = bParam1;
	return 1;
}

var Function_450() //Position: 0x16F14 / 93972
{
	return GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(Function_14(), "escNecActors"));
}

void Function_451(struct<1489> Param0) //Position: 0x16F32 / 94002
{
	int iVar0;
	
	iVar0 = Function_452();
	if (iVar0 > 0)
	{
		iParam1 = iVar0;
	}
	else if (iParam1 <= 0)
	{
		iParam1 = 0;
	}
	Param0.f_1488 = iParam1;
	return;
}

int Function_452() //Position: 0x16F5B / 94043
{
	var uVar0;
	
	uVar0 = Function_14();
	if (!DECOR_CHECK_EXIST(&uVar0, "escortNumEnemies"))
	{
		return 0;
	}
	return DECOR_GET_INT(&uVar0, "escortNumEnemies");
}

int Function_453(struct<1617> Param0) //Position: 0x16FA2 / 94114
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Invalid traveler actor passed in");
		return 0;
	}
	*(&Param0 + 1608) = &iParam1;
	Param0.f_1616 = GET_ACTOR_ENUM(&iParam1);
	return 1;
}

int Function_454(int iParam0, struct<2> Param1) //Position: 0x16FF1 / 94193
{
	if (Function_573(StackVal, Param1))
	{
		LOG_ERROR("ESCORT_SetStartPosition was passed an invalid position");
		return 0;
	}
	*(&iParam0 + 1536) = Param1;
	return 1;
}

struct<8> Function_455(int iParam0) //Position: 0x1704B / 94283
{
	return StackVal, *(&iParam0 + 1536);
}

int Function_456(var uParam0, struct<2> Param1) //Position: 0x17059 / 94297
{
	return Function_454(StackVal, &uParam0, Param1);
}

int Function_457(int iParam0, int iParam1) //Position: 0x17069 / 94313
{
	if (&iParam1 == "")
	{
		Function_558(&iParam0);
	}
	else if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("ESCORT_SET_LAYOUT was passed an invalid layout");
		return 0;
	}
	(&iParam0 + 1480) = &iParam1;
	return 1;
}

int Function_458(struct<1557> Param0) //Position: 0x170CB / 94411
{
	struct<2> Var0;
	
	Function_558(&Param0);
	Function_403(&Param0);
	if (Function_468(bParam1))
	{
		Param0.f_1556 = bParam1;
		*(&Param0 + 1560) = &Global_44085[Param0.f_15569] + 8;
	}
	else
	{
		LOG_ERROR("ESCORT_SET_DESTINATION_REGION was passed an invalid region");
		return 0;
	}
	GET_VOLUME_CENTER(&Param0 + 1560, &Var0);
	SET_OBJECT_POSITION_ON_GROUND(&Param0 + 1584, Var0);
	DECOR_SET_INT(&Param0 + 1584, "escort_destType", 2);
	DECOR_SET_BOOL(&Param0 + 1584, "escort_stayout", &uParam2);
	DECOR_SET_BOOL(&Param0 + 1584, "escort_reached", 0);
	Function_459(&Param0, bParam1);
	if (&iParam3 == 1)
	{
		Function_534(&Param0 + 1496, 1024);
	}
	else
	{
		Function_533(&Param0 + 1496, 1024);
	}
	Function_534(&Param0 + 1496, 256);
	return 1;
}

int Function_459(struct<1557> Param0) //Position: 0x171F8 / 94712
{
	if (Function_531(Param0.f_1496, 8))
	{
		if (iParam1 == Global_46760[0])
		{
			*(&Param0 + 1568) = Vector(-2096,062f, 16,449f, 2604,464f);
		}
		else if (iParam1 == Global_46914[0])
		{
			*(&Param0 + 1568) = Vector(757,994f, 78,525f, 1238,79f);
		}
		else if (iParam1 == Global_46816[0])
		{
			*(&Param0 + 1568) = Vector(-818,625f, 93,221f, 2419,609f);
		}
		else if (iParam1 == Global_46894[1])
		{
			*(&Param0 + 1568) = Vector(-741,825f, 63,847f, 3287,016f);
		}
		else if (iParam1 == Global_46866[0])
		{
			*(&Param0 + 1568) = Vector(-2673,32f, 31,399f, 4253,287f);
		}
		else if (iParam1 == Global_46850[0])
		{
			*(&Param0 + 1568) = Vector(-4345,849f, 30,118f, 4383,994f);
		}
		else
		{
			LOG_ERROR("Invalid dropoff location");
			return 0;
		}
	}
	if (iParam1 == Global_46760[0])
	{
		*(&Param0 + 1568) = Vector(-2165,189f, 16,249f, 2608,163f);
	}
	else if (iParam1 == Global_46914[0])
	{
		*(&Param0 + 1568) = Vector(792,785f, 78,306f, 1250,872f);
	}
	else if (iParam1 == Global_46866[0])
	{
		*(&Param0 + 1568) = Vector(-2684,435f, 31,548f, 4250,658f);
	}
	else if (Param0.f_1556 == Global_46850[0])
	{
		*(&Param0 + 1568) = Vector(-4339,271f, 27,076f, 4415,416f);
	}
	else if (iParam1 == Global_46816[0])
	{
		*(&Param0 + 1568) = Vector(-940,652f, 90,224f, 2424,541f);
	}
	else if (iParam1 == Global_46816[1])
	{
		*(&Param0 + 1568) = Vector(124,938f, 73,286f, 2290,731f);
	}
	else
	{
		LOG_ERROR("Invalid dropoff location");
		return 0;
	}
	Function_558(&Param0);
	Function_403(&Param0);
	SET_OBJECT_POSITION(&Param0 + 1584, *(&Param0 + 1568));
	DECOR_SET_INT(&Param0 + 1584, "escort_destType", 3);
	DECOR_SET_BOOL(&Param0 + 1584, "escort_reached", 0);
	Function_534(&Param0 + 1496, 4);
	return 1;
}

int Function_460() //Position: 0x17474 / 95348
{
	var uVar0;
	
	uVar0 = Function_14();
	if (!DECOR_CHECK_EXIST(&uVar0, "escort_stayout"))
	{
		return 0;
	}
	return DECOR_GET_BOOL(&uVar0, "escort_stayout");
}

void Function_461(int iParam0) //Position: 0x174B7 / 95415
{
	Function_255(&iParam0, 4);
	return;
}

bool Function_462(var uParam0, float fParam1) //Position: 0x174C4 / 95428
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	bVar8 = 99999.0f;
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var4);
	iVar17 = 0;
	while (iVar17 < 145)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar179] + 8))
		{
			if (Function_545(Global_43788) == Function_545(Global_44085[iVar179]))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_464(iVar17) };
					if (Function_463(&uParam0, iVar17))
					{
						GET_VOLUME_CENTER(&Global_44085[iVar179] + 8, &Var2);
						if (VDIST(Var4, Var2) < &fParam1 && VDIST(Var4, Var2) > bVar8)
						{
							iVar0 = iVar17;
							bVar8 = VDIST(Var4, Var2);
						}
						else
						{
							iVar1 = iVar17;
						}
					}
				}
			}
		}
		iVar17++;
	}
	if (iVar0 == 4294967295)
	{
		if (!iVar1 != 4294967295)
		{
			iVar0 = iVar1;
		}
	}
	if (!iVar0 != 4294967295)
	{
		GET_VOLUME_CENTER(&Global_44085[iVar09] + 8, &uVar6);
	}
	return iVar0;
}

bool Function_463(struct<1497> Param0) //Position: 0x175BB / 95675
{
	if (!Function_468(bParam1))
	{
		return 0;
	}
	if ((bParam1 != Global_46760[4] || bParam1 != Global_46914[1]) || bParam1 != Global_46866[2])
	{
		return 0;
	}
	if (Function_531(Param0.f_1496, 8))
	{
		if (((bParam1 != Global_46760[0] || bParam1 != Global_46914[0]) || bParam1 != Global_46816[0]) || bParam1 != Global_46866[0])
		{
			return 1;
		}
		return 0;
	}
	if (((((bParam1 != Global_46760[0] || bParam1 != Global_46914[0]) || bParam1 != Global_46866[0]) || bParam1 != Global_46850[0]) || bParam1 != Global_46816[0]) || bParam1 != Global_46816[1])
	{
		return 1;
	}
	return 0;
}

struct<32> Function_464(bool bParam0) //Position: 0x17674 / 95860
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_468(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[bParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[bParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[bParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[bParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[bParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_465(struct<1557> Param0) //Position: 0x17736 / 96054
{
	return Param0.f_1556;
}

bool Function_466(int iParam0) //Position: 0x17742 / 96066
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0 + 1584))
	{
		if (DECOR_CHECK_EXIST(&iParam0 + 1584, "escort_destType"))
		{
			GET_OBJECT_POSITION(&iParam0 + 1584, &Var0);
			if (!Function_573(StackVal, Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var Function_467() //Position: 0x1778F / 96143
{
	var uVar0;
	
	uVar0 = Function_14();
	if (!DECOR_CHECK_EXIST(&uVar0, "escort_destVolume"))
	{
		return "";
	}
	return GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&uVar0, "escort_destVolume"));
}

bool Function_468(bool bParam0) //Position: 0x177DC / 96220
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_469() //Position: 0x177F2 / 96242
{
	var uVar0;
	
	uVar0 = Function_14();
	if (!DECOR_CHECK_EXIST(&uVar0, "escort_destRegion"))
	{
		return 4294967294;
	}
	return DECOR_GET_INT(&uVar0, "escort_destRegion");
}

struct<32> Function_470(struct<8> Param0) //Position: 0x1783D / 96317
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_471("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_471(char* cParam0) //Position: 0x178A9 / 96425
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_472(int iParam0, int iParam1) //Position: 0x178CB / 96459
{
	Function_389(&iParam0, iParam1);
	return;
}

int Function_473(struct<65> Param0) //Position: 0x178D9 / 96473
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector((&Param0 + 16), Function_512(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_510(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_476(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_314("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (uParam2 >= 20)
		{
			uParam3 = 1;
			Global_39619++;
		}
		uParam2++;
		uParam1 = 1000;
		*(&Param0 + 16) = Vector(0.0f, 0.0f, 0.0f);
		return 0;
	}
	if (Param0.f_40)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_6642 = 0;
		Function_314("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_474(Param0.f_64, 0, 1, 0, 0))
		{
			uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (Param0.f_60 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_512(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_510(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_474(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x17C97 / 97431
{
	int iVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	uParam1 = &uParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_314("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		iVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_475(&iVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_475(&iVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&iVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&iVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_475(&iVar0);
		}
		*(&Global_27462[iParam052] + 376) = &iVar0;
		Global_26652[iParam04] = &iVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_475(int iParam0) //Position: 0x17F03 / 98051
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

bool Function_476(struct<73> Param0) //Position: 0x17F4D / 98125
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	float fVar9;
	float fVar10;
	bool bVar11;
	struct<17> Var12;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var7);
	switch (Param0.f_72)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(&Global_46715);
				}
				else
				{
					return 0;
				}
			}
			Function_509(&Param0 + 8);
			switch ((&Param0 + 72 + 36)->f_28)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(&Param0 + 8, &Global_46715);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if ((&Param0 + 72 + 36)->f_16 < 0.0f)
			{
				Var3 = Vector(0.0f, 0.0f, Function_508(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_508(1));
			}
			if (!STRINGS_ARE_EQUAL(&Param0 + 72 + 36, ""))
			{
				ITERATE_ON_PARTIAL_NAME(&Param0 + 8, &Param0 + 72 + 36);
			}
			if (!4294967295 != (&Param0 + 72 + 36)->f_20)
			{
				ITERATE_ON_OBJECT_TYPE(&Param0 + 8, (&Param0 + 72 + 36)->f_20);
			}
			if (GET_NUM_ITERATOR_MATCHES(&Param0 + 8) >= 0)
			{
				if (StackVal & 512 == 0 || Param0.f_44 != 1)
				{
					if ((&Param0 + 72 + 36)->f_24 == 0)
					{
						uVar0 = Function_507(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_506(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_504(StackVal, &Param0 + 8, Var7, Function_505());
				}
				else
				{
					uVar0 = Function_503(StackVal, &Param0 + 8, Var7, Function_505(), "locflag", (&Param0 + 72 + 36)->f_24);
				}
				if (IS_OBJECT_VALID(&uVar0))
				{
					GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
					GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
					Param0.f_56 = &uVar0;
					DESTROY_ITERATOR(&Param0 + 8);
				}
				else
				{
					DESTROY_ITERATOR(&Param0 + 8);
					return 0;
				}
			}
			DESTROY_ITERATOR(&Param0 + 8);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_509(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			fVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_468(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_508(1))
								{
									uVar0 = &uVar1;
								}
							}
						}
					}
				}
				uVar1 = OBJECT_ITERATOR_NEXT(&Param0 + 8);
			}
			if (IS_OBJECT_VALID(&uVar0))
			{
				GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
				Function_502(&Param0 + 16, 99.0f, &Param0 + 16, 10);
				GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
				Param0.f_56 = DECOR_GET_INT(&uVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(&Param0 + 8);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_6629 && Global_6631) && ARE_CURVES_IN_RANGE(48, Var7, 100.0f)) && 8) != 8)
			{
				uVar5 = Vector(0.0f, 0.0f, -10.0f);
				ROTATE_VECTOR_XZ(&uVar5, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_501(&Var7, &uVar5);
				Var3 = Function_501(&Var7, &uVar5);
				if (!Function_573(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_500(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_497(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_493(&Param0);
			}
			if (iVar2 == 1)
			{
				if ((&Param0 + 72)->f_156 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(&Param0 + 16)))
							{
								return 0;
							}
						}
					}
				}
				if ((&Param0 + 72)->f_156 == 5)
				{
				}
				if (Param0.f_68 == 2)
				{
					if (!Function_492(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_491(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_531(StackVal, 131072))
				{
					if (StackVal || Function_490(Function_490(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_489(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_485(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar10 = 120.0f;
				fVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + fVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_484((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_484((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_483(&Var12);
				*(&Param0 + 16) = Function_483(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, iVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_492(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_491(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_492(Function_491(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_531(StackVal, 131072))
			{
				if (StackVal || Function_490(Function_490(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_485(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_481((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_478(StackVal, Global_43787, Global_43788, Global_43789, 1);
					if (IS_PERS_CHAR_VALID(&iVar18))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar18))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar16 = 0;
					while (StackVal <= (StackVal - iVar16) + 1)
					{
						iVar18 = Function_478(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
						if (IS_PERS_CHAR_VALID(&iVar18))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar18))
							{
								iVar19++;
							}
						}
						iVar16++;
					}
					if (iVar19 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					Param0.f_56 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_477(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_477(struct<2> Param0) //Position: 0x18823 / 100387
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_39246))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_478(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1885A / 100442
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!&bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_479(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_479(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_479(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_479(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_479(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_479(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_479(&Global_11826, &Global_13998, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_479(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_479(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_479(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_479(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_479(&Global_12472, &Global_14954, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_46760[0])
	{
		return Function_479(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_479(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_479(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_479(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_479(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_479(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_479(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_479(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_479(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_479(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_479(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_479(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_479(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_479(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_479(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_479(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_479(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_479(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_479(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_479(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_479(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_479(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_479(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_479(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_479(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_479(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_479(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x18E70 / 102000
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_480(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_480(var uParam0, int iParam1) //Position: 0x18ECA / 102090
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_481(int iParam0) //Position: 0x18EE7 / 102119
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_482(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_482(int iParam0) //Position: 0x18F4F / 102223
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_331(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

struct<8> Function_483(vector3 vParam0) //Position: 0x18F8D / 102285
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_484(int iParam0, int iParam1) //Position: 0x18FAF / 102319
{
	if (&iParam1 != 0)
	{
		return &iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

bool Function_485(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x18FE1 / 102369
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_487(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = fParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_486(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_486(struct<2> Param0) //Position: 0x190BD / 102589
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_487(int iParam0) //Position: 0x190DC / 102620
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_488(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_365(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_488(iVar0);
						}
					}
					else if (Function_365(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_488(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_488(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_488(int iParam0) //Position: 0x1924A / 102986
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_489(struct<2> Param0) //Position: 0x192B2 / 103090
{
	struct<9> Var0;
	
	iVar5 = 0;
	while (iVar5 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar59] + 8))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(&Global_44085[iVar59] + 8) == 9)
				{
					GET_VOLUME_SCALE(&Global_44085[iVar59] + 8, &vVar0);
					GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
					bVar4 = VDIST(Param0, Var2);
					if ((bVar4 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar5++;
	}
	return 0;
}

int Function_490(struct<2> Param0) //Position: 0x19357 / 103255
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_491(struct<2> Param0) //Position: 0x193A5 / 103333
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_492(struct<2> Param0) //Position: 0x19400 / 103424
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_493(bool bParam0) //Position: 0x1947F / 103551
{
	float fVar0;
	bool bVar1;
	
	Function_500(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_496(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((&bParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&bParam0 + 72 + 84)->f_44, (&bParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_495(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
	}
	if ((&bParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&bParam0 + 72 + 84)->f_52, (&bParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_52);
		}
	}
	Function_494(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&bParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&bParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&bParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&bParam0 + 72 + 84)->f_36, (&bParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&bParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_494(struct<33> Param0) //Position: 0x19631 / 103985
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_47151[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_495(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x1975D / 104285
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_496(float fParam0) //Position: 0x197AE / 104366
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

int Function_497(int iParam0, struct<2> Param1) //Position: 0x197F5 / 104437
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_499();
	Function_496(0);
	Function_498(0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_495(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_494(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_498(bool bParam0) //Position: 0x199AA / 104874
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

void Function_499() //Position: 0x19A5D / 105053
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

void Function_500(float fParam0, int iParam1) //Position: 0x19A6C / 105068
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

struct<8> Function_501(struct<2> Param0) //Position: 0x19AFD / 105213
{
	var uVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	var uVar12;
	var uVar14;
	var uVar16;
	int iVar18;
	int iVar21;
	
	uVar7 = START_CURVE_QUERY(&Global_43578, Param0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar7) < 0)
	{
		UNK_0xDF93BD7C(&uVar7);
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		return StackVal, Var8;
	}
	GET_POINT_FROM_CURVE_QUERY(&uVar7, 0, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, 0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_483(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_483(&iVar18), StackVal);
		Function_483(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_483(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_500(&fVar4, &fVar5);
		fVar6 = ((fVar4 + fVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_483(&iVar21);
			Var8 = Function_483(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_483(&iVar18);
			Var8 = Function_483(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_502(struct<2> Param0, struct<5> Param2) //Position: 0x19C17 / 105495
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
		if (!Function_573(StackVal, Param2))
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
			if (!Function_573(StackVal, Param2))
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

var Function_503(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x19D5A / 105818
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<2> Var5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_485(&Var5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							uVar1 = &fVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_504(var uParam0, struct<2> Param1, float fParam3) //Position: 0x19E0F / 105999
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_485(&Var5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					uVar1 = &fVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_505() //Position: 0x19EA1 / 106145
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_500(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_506(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x19ED2 / 106194
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						uVar1 = &fVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_507(var uParam0, struct<2> Param1, float fParam3) //Position: 0x19F74 / 106356
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

float Function_508(bool bParam0) //Position: 0x19FFA / 106490
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_500(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

int Function_509(int iParam0) //Position: 0x1A036 / 106550
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_49());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_49());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_510(var uParam0, int iParam1) //Position: 0x1A06C / 106604
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_487(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_511(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_511(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1A1D6 / 106966
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_512(var uParam0, struct<2> Param1) //Position: 0x1A27E / 107134
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_513(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_513(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1A2AC / 107180
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<8> Function_514() //Position: 0x1A2D0 / 107216
{
	struct<2> Var0;
	
	Var0 = DECOR_GET_FLOAT(Function_14(), "escortStartPosX");
	Var0.f_4 = DECOR_GET_FLOAT(Function_14(), "escortStartPosY");
	Var0.f_8 = DECOR_GET_FLOAT(Function_14(), "escortStartPosZ");
	return StackVal, Var0;
}

struct<8> Function_515(bool bParam0) //Position: 0x1A32C / 107308
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_516(struct<1497> Param0) //Position: 0x1A355 / 107349
{
	if (!Function_531(Param0.f_1496, 16))
	{
		if (!Function_531(Param0.f_1496, 1))
		{
			if (Function_523(&Param0))
			{
				Function_534(&Param0 + 1496, 1);
			}
		}
		if (Function_531(Param0.f_1496, 1))
		{
			if (Function_517(&Param0))
			{
				Function_534(&Param0 + 1496, 16);
			}
		}
	}
	return Function_531(Param0.f_1496, 16);
}

bool Function_517(int iParam0) //Position: 0x1A3BA / 107450
{
	if (!Function_518(&iParam0 + 1104))
	{
		return 0;
	}
	return 1;
}

bool Function_518(struct<2>[] Param0) //Position: 0x1A3D3 / 107475
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_522();
	iVar1 = 0;
	if (!Function_19(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_521(&(Param0[iVar02]), 8);
		}
		else if (Function_520())
		{
			iVar1 = 1;
			Function_521(&(Param0[iVar02]), 8);
		}
		Function_521(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_19(&(Param0[iVar02]), 4))
		{
			if (!Function_19(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_19(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_19(&(Param0[02]), 8) || iVar1));
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
				Function_521(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_19(&(Param0[iVar02]), 4))
		{
			if (!Function_19(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_521(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_521(&(Param0[iVar02]), 2);
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
							Function_521(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_521(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_521(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_521(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_521(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_521(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_521(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_521(&(Param0[iVar02]), 2);
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
	Function_519();
	return 1;
}

void Function_519() //Position: 0x1A795 / 108437
{
	if (!Function_94(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_520() //Position: 0x1A7D5 / 108501
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

void Function_521(struct<13> Param0) //Position: 0x1A803 / 108547
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_522() //Position: 0x1A816 / 108566
{
	if (!Function_94(128))
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

bool Function_523(struct<1617> Param0) //Position: 0x1A858 / 108632
{
	int iVar0;
	
	REQUEST_ANIM_SET("gent_ride_passenger", 0);
	REQUEST_ANIM_SET("stand_ambient", 0);
	REQUEST_ACTION_TREE("custom/stand_ambient");
	if (!Function_334(Param0.f_1616) || Param0.f_1616 != 0)
	{
		if (!StackVal != 5)
		{
			if (!Function_527(2, 0, 4294967295, 0))
			{
				return 0;
			}
			Param0.f_1616 = Function_535(2, 0, 1, 4294967295, 1);
		}
	}
	Function_526(&Param0 + 1104, Param0.f_1616, 2, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Function_334((*&Param0 + 1732)[iVar0]))
		{
			Function_526(&Param0 + 1104, (*&Param0 + 1732)[iVar0], 2, 0);
		}
		iVar0++;
	}
	Function_524(&Param0 + 1104, "fema_ride_passenger", 5, 0);
	Function_524(&Param0 + 1104, "gent_ride_passenger", 5, 0);
	Function_524(&Param0 + 1104, "talking_stand", 5, 0);
	Function_524(&Param0 + 1104, "stand_ambient", 5, 0);
	Function_524(&Param0 + 1104, "stand_shakehands", 5, 0);
	Function_524(&Param0 + 1104, "custom/talking_stand", 8, 0);
	Function_524(&Param0 + 1104, "custom/stand_ambient", 8, 0);
	Function_524(&Param0 + 1104, "custom/stand_shakehands", 8, 0);
	Function_524(&Param0 + 1104, "stand_hostage", 5, 0);
	Function_524(&Param0 + 1104, "custom/stand_hostage", 8, 0);
	Function_524(&Param0 + 1104, "$/content/scripting/gringo/simplegringo/handoff", 1, 0);
	Function_524(&Param0 + 1104, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
	Function_524(&Param0 + 1104, "$/content/scripting/gringo/simplegringo/hug_link", 1, 0);
	Function_524(&Param0 + 1104, "procmissions", 10, 0);
	Function_524(&Param0 + 1104, "stats", 10, 0);
	Function_384(&Param0);
	STREAMING_LOAD_BOUNDS(Function_384(&Param0), 30.0f, 0);
	return 1;
}

var Function_524(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1AB80 / 109440
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_525(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_521(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_525(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1ABBE / 109502
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_19(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_521(&(Param0[iVar02]), 4);
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

var Function_526(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x1AC8D / 109709
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_19(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_521(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_521(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_527(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1AD69 / 109929
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_528(&(Global_46972[0]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_528(&(Global_46972[1]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_528(&(Global_46972[2]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_528(&(Global_46972[3]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_528(&(Global_46972[4]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_528(&(Global_46972[5]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_528(&(Global_46972[6]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_528(&(Global_46972[7]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_528(&(Global_46972[8]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_528(&(Global_46972[9]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_528(&(Global_46972[10]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_528(&(Global_46972[11]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_528(&(Global_46972[12]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_528(&(Global_46972[13]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x40000000:
			iVar0 = 0;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int Function_528(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x1AF69 / 110441
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

void Function_529(struct<1893> Param0) //Position: 0x1AF95 / 110485
{
	int iVar0;
	int iVar1;
	
	Param0.f_1892 = 1;
	if (Global_43787 == 0)
	{
		iVar1 = Function_530(3);
		if (iVar1 == 0)
		{
			iVar0 = "FTR_SONG_04";
		}
		else if (iVar1 == 1)
		{
			iVar0 = "FTR_SONG_05";
		}
		else if (iVar1 == 2)
		{
			iVar0 = "FTR_SONG_08";
		}
	}
	else if (Global_43787 == 2)
	{
		if (Function_364())
		{
			iVar0 = "NRT_SONG_04";
		}
		else
		{
			iVar0 = "NRT_SONG_05";
		}
	}
	else if (Global_43787 == 1)
	{
		iVar1 = Function_530(3);
		if (iVar1 == 0)
		{
			iVar0 = "MEX_SONG_02";
		}
		else if (iVar1 == 1)
		{
			iVar0 = "MEX_SONG_06";
		}
		else if (iVar1 == 2)
		{
			iVar0 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(&iVar0, "DRAMATIC", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

int Function_530(bool bParam0) //Position: 0x1B0A6 / 110758
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_531(bool bParam0, bool bParam1) //Position: 0x1B0BF / 110783
{
	return (bParam0 && bParam1) == 0;
}

void Function_532() //Position: 0x1B0CC / 110796
{
	int iVar0;
	
	iVar0 = Function_225(369);
	switch (Global_43787)
	{
		case 0x00000000:
			if (iVar0 <= 1)
			{
				Local_29.f_1100 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_29.f_1100 = 1;
			}
			else
			{
				Local_29.f_1100 = 2;
			}
			break;
		
		case 0x00000001:
			if (iVar0 <= 1)
			{
				Local_29.f_1100 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_29.f_1100 = 1;
			}
			else
			{
				Local_29.f_1100 = 2;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			if (iVar0 <= 1)
			{
				Local_29.f_1100 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_29.f_1100 = 1;
			}
			else
			{
				Local_29.f_1100 = 2;
			}
			break;
		
		default:
			Local_29.f_1100 = 1;
			break;
	}
	switch (Local_29.f_1100)
	{
		case 0x00000000:
			Local_29.f_1876 = 14.0f;
			Local_29.f_1880 = 28.0f;
			break;
		
		case 0x00000001:
			Local_29.f_1876 = 12.0f;
			Local_29.f_1880 = 24.0f;
			break;
		
		case 0x00000002:
			Local_29.f_1876 = 10.0f;
			Local_29.f_1880 = 20.0f;
			break;
		
		default:
			Local_29.f_1876 = 12.0f;
			Local_29.f_1880 = 24.0f;
			break;
	}
	return;
}

void Function_533(bool bParam0, int iParam1) //Position: 0x1B1F0 / 111088
{
	bParam0 = (bParam0 - (bParam0 && iParam1));
	return;
}

void Function_534(bool bParam0, int iParam1) //Position: 0x1B206 / 111110
{
	bParam0 = (bParam0 || iParam1);
	return;
}

var Function_535(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1B217 / 111127
{
	return Function_536(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_536(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x1B234 / 111156
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_539(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_539(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_539(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_539(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_539(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_539(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_539(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_539(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_539(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_539(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_539(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_539(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_539(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_539(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_537(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_537(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x1B497 / 111767
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_538(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_538(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_538(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_538(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_538(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_538(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_538(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_538(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_538(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_538(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_538(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_538(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_538(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_538(&(Global_46972[13]), &bVar0);
	}
	return Function_539(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_538(var uParam0, bool bParam1) //Position: 0x1B606 / 112134
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_539(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x1B6CA / 112330
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_544();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_334(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_543(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_543(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_542(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_334(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_542(bVar0))
				{
					Function_541();
				}
				Function_540(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_334(bVar1))
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

void Function_540(int iParam0) //Position: 0x1B9C3 / 113091
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

void Function_541() //Position: 0x1BA77 / 113271
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

bool Function_542(bool bParam0) //Position: 0x1BAB2 / 113330
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

void Function_543(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x1BADF / 113375
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

void Function_544() //Position: 0x1BC3A / 113722
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_541();
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
	Function_541();
	return;
}

int Function_545(int iParam0) //Position: 0x1BC86 / 113798
{
	return Function_546(iParam0);
}

int Function_546(int iParam0) //Position: 0x1BC91 / 113809
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_468(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

void Function_547(var uParam0, int iParam1) //Position: 0x1BCE9 / 113897
{
	Function_548(&uParam0, iParam1);
	return;
}

void Function_548(int iParam0, int iParam1) //Position: 0x1BCF7 / 113911
{
	if (iParam1 == 1)
	{
		Function_534(&iParam0 + 1496, 8);
	}
	else
	{
		Function_533(&iParam0 + 1496, 8);
	}
	return;
}

int Function_549() //Position: 0x1BD1C / 113948
{
	return DECOR_GET_BOOL(Function_14(), "escortCriminal");
}

bool Function_550() //Position: 0x1BD39 / 113977
{
	return DECOR_GET_INT(Function_14(), "escortTravelerAE");
}

var Function_551(int iParam0) //Position: 0x1BD58 / 114008
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

int Function_552(int iParam0, int iParam1) //Position: 0x1BD75 / 114037
{
	return Function_553(&iParam0, iParam1);
}

int Function_553(struct<1097> Param0) //Position: 0x1BD83 / 114051
{
	if (iParam1 <= 2)
	{
		Param0.f_1096 = iParam1;
		return 1;
	}
	return 0;
}

bool Function_554(int iParam0) //Position: 0x1BD9D / 114077
{
	return Function_555(iParam0);
}

int Function_555(int iParam0) //Position: 0x1BDA8 / 114088
{
	if (iParam0 > 0 || iParam0 <= 2)
	{
		return 0;
	}
	return 1;
}

int Function_556() //Position: 0x1BDC0 / 114112
{
	if (DECOR_CHECK_EXIST(Function_14(), "escortMissType"))
	{
		return DECOR_GET_INT(Function_14(), "escortMissType");
	}
	return 2;
}

var Function_557() //Position: 0x1BDFC / 114172
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_14(), "escortTraveler"));
}

void Function_558(int iParam0) //Position: 0x1BE1C / 114204
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 1480))
	{
		strcpy(&cVar0, "escortLiblayout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&cVar0) };
		*(&iParam0 + 1480) = CREATE_LAYOUT(&cVar0);
		Function_534(&iParam0 + 1496, 2);
		if (IS_LAYOUTREF_VALID(&iParam0 + 1480))
		{
		}
		else
		{
			LOG_ERROR("escort couldn't create internal escort layout");
		}
	}
	return;
}

void Function_559(vector3 vParam0) //Position: 0x1BEA9 / 114345
{
	if (Function_72(&vParam0))
	{
		if (!Function_71(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_534(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_560(int iParam0) //Position: 0x1BF6D / 114541
{
	Function_561(&iParam0, 0.0f);
	return;
}

void Function_561(vector3 vParam0) //Position: 0x1BF7A / 114554
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_534(&vParam0, 1);
	Function_533(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_562(int iParam0) //Position: 0x1BF9F / 114591
{
	var uVar0;
	
	if (!iLocal_503 != iParam0)
	{
		switch (iParam0)
		{
			case 0x00000001:
				break;
			
			case 0x00000002:
				uVar0 = Function_465(&Local_29);
				if (!Function_568(uVar0))
				{
					Function_566(uVar0);
				}
				Function_405(&Local_29, 1);
				Function_27(&Local_29, 1, 0);
				Function_560(&Local_29 + 1860);
				Function_560(&Local_29 + 1624);
				if (Function_531(Local_29.f_1496, 8))
				{
					Function_404(&Local_29 + 1608, 3);
				}
				else
				{
					Function_404(&Local_29 + 1608, 2);
				}
				break;
			
			case 0x00000003:
				Function_565(&Local_29);
				Function_564();
				break;
			
			case 0x00000004:
				Function_374(&Local_29, 1);
				Function_340(&Local_29, "pm_esc_chit", 1);
				Function_24(&Local_29);
				Function_564();
				break;
			
			case 0x00000005:
				Function_374(&Local_29, 1);
				if (Function_531(Local_29.f_1496, 262144))
				{
					Function_340(&Local_29, "pm_esc_ckill", 1);
				}
				else
				{
					Function_340(&Local_29, "pm_esc_cdie", 1);
				}
				Function_24(&Local_29);
				Function_564();
				break;
			
			case 0x00000006:
				Function_374(&Local_29, 1);
				switch (Function_563(&Local_29))
				{
					case 0x00000001:
						Function_406(&Local_29, "pm_esc_fhit", 0);
						break;
					
					case 0x00000002:
						Function_406(&Local_29, "pm_esc_hhit", 0);
						break;
					
					case 0x00000003:
						Function_406(&Local_29, "pm_esc_lhit", 0);
						break;
					
					default:
						LOG_ERROR("This necessary escort actor has no name");
						break;
				}
				Function_24(&Local_29);
				Function_564();
				break;
			
			case 0x00000007:
				Function_374(&Local_29, 1);
				switch (Function_563(&Local_29))
				{
					case 0x00000000:
						Function_340(&Local_29, "pm_esc_bdie", 1);
						break;
					
					case 0x00000001:
						Function_340(&Local_29, "pm_esc_fdie", 1);
						break;
					
					case 0x00000002:
						Function_340(&Local_29, "pm_esc_hdie", 1);
						break;
					
					case 0x00000003:
						Function_340(&Local_29, "pm_esc_ldie", 1);
						break;
					
					default:
						LOG_ERROR("This necessary escort actor has no name");
						break;
				}
				Function_24(&Local_29);
				Function_564();
				break;
			
			case 0x00000008:
				Function_374(&Local_29, 1);
				Function_340(&Local_29, "pm_esc_aggro", 1);
				if (IS_ACTOR_VALID(&Local_29 + 1608))
				{
					TASK_CLEAR(&Local_29 + 1608);
					MEMORY_CONSIDER_AS(&Local_29 + 1608, &Global_54076, 3);
					if (GET_MOUNT(&Local_29 + 1608) == GET_MOUNT(&Global_54076))
					{
						TASK_DISMOUNT(&Local_29 + 1608, 1);
					}
					else
					{
						TASK_FLEE_ACTOR(&Local_29 + 1608, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					}
				}
				Function_24(&Local_29);
				Function_564();
				break;
			
			case 0x00000009:
				Function_374(&Local_29, 1);
				Function_340(&Local_29, "pm_esc_ghit", 1);
				if (IS_ACTOR_VALID(&Local_29 + 1608))
				{
					MEMORY_CONSIDER_AS(&Local_29 + 1608, &Global_54076, 3);
					TASK_FLEE_ACTOR(&Local_29 + 1608, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				Function_24(&Local_29);
				Function_564();
				break;
			
			case 0x0000000A:
				Function_374(&Local_29, 1);
				if (!Function_531(Local_29.f_1496, 8))
				{
					if (Function_531(Local_29.f_1496, 262144))
					{
						Function_340(&Local_29, "pm_esc_gkill", 1);
					}
					else
					{
						Function_340(&Local_29, "pm_esc_gdie", 1);
					}
				}
				else if (Function_531(Local_29.f_1496, 262144))
				{
					Function_340(&Local_29, "pm_esc_bkill", 1);
				}
				else
				{
					Function_340(&Local_29, "pm_esc_bdie", 1);
				}
				Function_564();
				break;
			
			case 0x0000000E:
			case 0x0000000B:
				iLocal_28 = 2;
				Function_565(&Local_29);
				Function_564();
				break;
			
			case 0x0000000F:
			case 0x0000000C:
				iLocal_28 = 3;
				Function_24(&Local_29);
				Function_564();
				break;
			
			case 0x00000010:
				Function_564();
				break;
		}
		iLocal_503 = iParam0;
	}
	return 1;
}

int Function_563(struct<1857> Param0) //Position: 0x1C433 / 115763
{
	return Param0.f_1856;
}

void Function_564() //Position: 0x1C43F / 115775
{
	Function_27(&Local_29, 0, 0);
	iLocal_27 = 5;
	return;
}

void Function_565(int iParam0) //Position: 0x1C44F / 115791
{
	if (!IS_ACTOR_HOGTIED(&iParam0 + 1608))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(&iParam0 + 1608)))
		{
			if (!(GET_TASK_STATUS(&iParam0 + 1608, 12) != 1 || GET_TASK_STATUS(&iParam0 + 1608, 12) != 3))
			{
				TASK_CLEAR(&iParam0 + 1608);
				TASK_DISMOUNT(&iParam0 + 1608, 1);
				TASK_PRIORITY_SET(&iParam0 + 1608, true);
			}
		}
		else if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0 + 1608)))
		{
			if (IS_ACTOR_VALID(&iParam0 + 1708[0]))
			{
				TASK_CLEAR(&iParam0 + 1608);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0 + 1608, GET_OBJECT_FROM_ACTOR(&iParam0 + 1708[0]), 3.0f, 1);
				TASK_PRIORITY_SET(&iParam0 + 1608, false);
			}
			else
			{
				TASK_WANDER_IN_VOLUME(&iParam0 + 1608, &iParam0 + 1560, -1f);
			}
			SET_MOUNTS_AS_PASSENGER(&iParam0 + 1608, 0);
			RESET_ANIM_SET_FOR_ACTOR(&iParam0 + 1608, 0);
		}
	}
	return;
}

void Function_566(int iParam0) //Position: 0x1C535 / 116021
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_396(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_567(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_46(473, 1, 0, 0);
		iVar0 = Function_546(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_46(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_46(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_46(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_241(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_241(7, 30);
	}
	if (Function_58(473) <= Function_59(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

void Function_567(var uParam0, int iParam1) //Position: 0x1C626 / 116262
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_568(int iParam0) //Position: 0x1C637 / 116279
{
	if (!Function_468(iParam0))
	{
		return 0;
	}
	return Function_396(&(Global_43791[iParam0]), 4096);
}

struct<8> Function_569(struct<45> Param0) //Position: 0x1C655 / 116309
{
	struct<2> Var0;
	
	if (&bParam14)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		GET_OBJECT_POSITION(&Param0, &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(&Param0));
	}
	else if (!Function_573(StackVal, *(&Param0 + 8)))
	{
		if (Global_47151[34])
		{
			PRINTVECTOR(*(&Param0 + 8));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 8));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_496(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_570();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_498(Param0.f_24);
	Function_495(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_494(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	if (Param6.f_28 == 0.0f)
	{
		Param0.f_44 = Param6.f_28;
	}
	if (Param0.f_44 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_44, (-1.0f * Param0.f_44));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_23();
	return StackVal, Function_23();
}

void Function_570() //Position: 0x1C788 / 116616
{
	float fVar0;
	bool bVar1;
	
	Function_500(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_571(struct<45> Param0) //Position: 0x1C79C / 116636
{
	Param0.f_24 = iParam1;
	*(&Param0 + 8) = Param2;
	Param0.f_20 = fParam4;
	Param0.f_28 = uParam5;
	Param0.f_32 = uParam6;
	Param0.f_36 = &iParam9;
	Param0.f_40 = &uParam7;
	Param0.f_44 = &iParam8;
}

void Function_572(struct<21> Param0) //Position: 0x1C7E2 / 116706
{
	Param0 = iParam1;
	Param0.f_4 = fParam2;
	Param0.f_8 = iParam3;
	Param0.f_16 = iParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

bool Function_573(char* cParam0) //Position: 0x1C811 / 116753
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

void Function_574(int iParam0) //Position: 0x1C829 / 116777
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_37(90)), 0);
	return;
}

int Function_575(int iParam0, int iParam1) //Position: 0x1C84C / 116812
{
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6623)
	{
		return 0;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	iParam0 = &iParam0;
	if (!IS_EARLIER_THAN(&Global_21369 + 8, 0) && &iParam1 != 0)
	{
		return 0;
	}
	return 1;
}

