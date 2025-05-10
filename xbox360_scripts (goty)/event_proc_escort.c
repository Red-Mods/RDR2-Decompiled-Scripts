//Decompiled with MagicRDR v1.0
//Function Count : 576
//Statics Count : 468
//Natives Count : 617
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<1201> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<8> Var0;
	bool bVar8;
	vector3 vVar9;
	var uVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	struct<15> Var20;
	struct<11> Var35;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_327 = 0;
	iLocal_328 = 0;
	bLocal_386 = "";
	iLocal_403 = 0;
	iLocal_406 = 0;
	bLocal_408 = false;
	iLocal_409 = 0;
	iLocal_413 = 0;
	iLocal_414 = 0;
	iLocal_415 = 0;
	iLocal_416 = 0;
	iVar18 = 0;
	bVar19 = false;
	iLocal_326 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_326, 0, 0, 40, 0);
	bVar19 = (Function_575(1, 0) || ScriptParam_0.f_36 != 1);
	if (bVar19)
	{
		Global_3373 = GET_THIS_SCRIPT_ID();
		Global_3401 = 1;
		iLocal_21 = 0;
		iLocal_324 = 0;
		Function_574(0);
		if (Function_573(StackVal, StackVal, *(&ScriptParam_0 + 8)))
		{
			Function_572(&Var20, 1, 10.0f, 0, 4294967295);
			Function_571(StackVal, StackVal, &Var35, 0, Global_34574, 0.0f, 40.0f, 65.0f, 0, 0x40a00000, 0);
			Function_569(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var35, Var20, 1);
			vVar9 = { StackVal, StackVal, Function_569(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var35, Var20, 1) };
			if (!Function_573(StackVal, StackVal, vVar9))
			{
				*(&ScriptParam_0 + 8) = { StackVal, StackVal, vVar9 };
				*(&ScriptParam_0 + 20) = { 0.0f, RAND_FLOAT_RANGE(0.0f, 360.0f), 0.0f };
			}
			else
			{
				iLocal_21 = 5;
			}
		}
		bLocal_386 = "";
	}
	else
	{
		Function_562(16);
	}
	iLocal_326 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_326, 0, 0, 15, 0);
	Function_560(&Local_23 + 948);
	Function_560(&Local_23 + 936);
	Function_559(&Local_23 + 936);
	Function_558(&Local_23);
	Local_23.f_1012 = Function_557();
	if (Function_554(Function_556()))
	{
		Function_552(&Local_23, Function_556());
	}
	else
	{
		Function_552(&Local_23, 1);
	}
	if (IS_ACTOR_VALID(Local_23.f_1012))
	{
		GIVE_OBJECT_TO_LAYOUT(Local_23.f_1012, Local_23.f_916);
		Local_23.f_1016 = Function_551(GET_OBJECT_FROM_ACTOR(Local_23.f_1012));
	}
	else
	{
		Local_23.f_1016 = Function_550();
	}
	if (Function_549() == 1)
	{
		Function_547(&Local_23, 1);
		if (Function_545(Global_29005) == Global_30621[1])
		{
			(*&Local_23 + 1100)[0] = 465;
			(*&Local_23 + 1100)[1] = 455;
		}
		else
		{
			(*&Local_23 + 1100)[0] = 440;
			(*&Local_23 + 1100)[1] = 441;
		}
	}
	else
	{
		(*&Local_23 + 1100)[0] = Function_535(2, 0, 2, 4294967295, 1);
	}
	Function_534(&bLocal_408, 1);
	Function_534(&bLocal_408, 16);
	Function_533(&bLocal_408, 2);
	Function_533(&bLocal_408, 4);
	Function_533(&bLocal_408, 8);
	Function_532();
	if (!Function_531(Local_23.f_928, 8))
	{
		Function_529(&Local_23);
	}
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(Global_34573) || !IS_ACTOR_ALIVE(Global_34573))
		{
			Function_562(16);
		}
		else if (Global_3380 != 1 && 0 != ScriptParam_0.f_36)
		{
			Function_562(16);
		}
		else if (IS_ACTOR_VALID(Local_23.f_1012))
		{
			GET_POSITION(Local_23.f_1012, &vVar9);
			if (iLocal_21 < 0 && iLocal_21 > 3)
			{
				if ((IS_EARLIER_THAN(iLocal_326, GET_TIME_OF_DAY()) && VDIST(Global_34574, vVar9) < 85.0f) && !WOULD_ACTOR_BE_VISIBLE(false, &ScriptParam_0 + 8, 3212836864))
				{
					Function_562(16);
				}
			}
			else if (iLocal_21 == 0)
			{
				if (IS_EARLIER_THAN(iLocal_326, GET_TIME_OF_DAY()))
				{
					Function_562(16);
				}
			}
		}
		iLocal_329 = 500;
		switch (iLocal_21)
		{
			case 0x00000000:
				if (Function_516(&Local_23))
				{
					if (IS_ACTOR_VALID(Function_557()))
					{
						Function_515(Function_557());
						*(&ScriptParam_0 + 8) = { StackVal, StackVal, Function_515(Function_557()) };
						iVar17 = 1;
					}
					else
					{
						Function_514();
						if (!Function_573(StackVal, StackVal, Function_514()))
						{
							Function_514();
							*(&ScriptParam_0 + 8) = { StackVal, StackVal, Function_514() };
							iVar17 = 1;
						}
					}
					if (iVar17 == 0)
					{
						iVar17 = Function_473(&ScriptParam_0, &iLocal_329, &uVar15, &iVar18, 1);
						Function_472(&Local_23, iLocal_329);
					}
					if (iVar17 == 1)
					{
						strcpy(&Var0, "escortProc", 32);
						Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&Var0) };
						bLocal_325 = CREATE_LAYOUT(&Var0);
						if (!IS_LAYOUTREF_VALID(bLocal_325))
						{
							Function_472(&Local_23, 0);
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
							else if (!Function_466(&Local_23))
							{
								bVar8 = Function_465(&Local_23);
								if (!Function_468(bVar8) || 0 != bVar8)
								{
									if (Function_531(Local_23.f_928, 8))
									{
										bVar8 = Function_462(&Local_23, 0.0f);
									}
									else
									{
										bVar8 = Function_462(&Local_23, 0x43af0000);
									}
									if (!Function_468(bVar8))
									{
										Function_461(&Local_23);
										iLocal_21 = 5;
										LOG_ERROR("Could not set the contact region. Ending.");
									}
									else
									{
										Function_458(&Local_23, bVar8, Function_460(), 1);
									}
								}
							}
							Function_457(&Local_23, bLocal_325);
							Function_456(StackVal, StackVal, &Local_23, *(&ScriptParam_0 + 8));
						}
						Function_472(&Local_23, 0);
						iLocal_21 = 1;
					}
					else if (iVar18 == 1)
					{
						Function_472(&Local_23, 0);
						iLocal_21 = 5;
					}
				}
				break;
			
			case 0x00000001:
				if (Function_516(&Local_23))
				{
					if (Function_431(&Local_23))
					{
						iLocal_326 = GET_TIME_OF_DAY();
						ADD_TIME(&iLocal_326, 0, 0, 15, 0);
						iLocal_21 = 2;
						Function_562(1);
						Function_472(&Local_23, 0);
					}
					else
					{
						Function_562(16);
						break;
					}
					Function_472(&Local_23, 0);
					iLocal_21 = 2;
				}
				break;
			
			case 0x00000002:
				GET_POSITION(Local_23.f_1012, &vVar9);
				if (IS_ACTOR_DRIVING_VEHICLE(Global_34573) || IS_ACTOR_RIDING(Global_34573))
				{
					iLocal_328 = 0;
				}
				else if (iLocal_328 == 0)
				{
					Function_560(&Local_23 + 936);
					iLocal_328 = 1;
				}
				else if ((Function_430(&Local_23 + 936, 30.0f) && Function_430(&Local_23 + 948, 60.0f)) && VDIST(vVar9, Global_34574) < 120.0f)
				{
					Function_562(16);
				}
				if (iLocal_21 <= 5)
				{
					if (!Function_373())
					{
						Function_472(&Local_23, 0);
						Function_562(16);
						break;
					}
					else if (Global_3380 && !ScriptParam_0.f_36)
					{
						Function_472(&Local_23, 0);
						Function_562(16);
						break;
					}
					if (iLocal_327 != 1 && iLocal_21 > 3)
					{
						if (Global_29005 == Global_30628[2])
						{
							iLocal_387[0] = 478;
							iLocal_387[1] = 480;
							iLocal_387[2] = 481;
							iLocal_387[3] = 484;
							iLocal_387[4] = 485;
							iLocal_387[5] = 483;
							iLocal_403 = 6;
						}
						else if (Global_29005 != Global_30628[0] || Global_29005 != Global_30628[3])
						{
							iLocal_387[0] = 488;
							iLocal_387[1] = 489;
							iLocal_387[2] = 490;
							iLocal_387[3] = 494;
							iLocal_387[4] = 493;
							iLocal_387[5] = 492;
							iLocal_403 = 6;
						}
						else if (Global_29005 == Global_30628[1])
						{
							iLocal_387[0] = 507;
							iLocal_387[1] = 508;
							iLocal_387[2] = 509;
							iLocal_387[3] = 515;
							iLocal_387[4] = 514;
							iLocal_387[5] = 513;
							iLocal_403 = 6;
						}
						else
						{
							iLocal_403 = Function_372(8);
							if (iLocal_403 >= 6)
							{
								iLocal_403 = 6;
							}
							iVar16 = 0;
							while (iVar16 < (iLocal_403 - 1))
							{
								iLocal_387[iVar16] = Function_370(8, iVar16);
								iVar16++;
							}
						}
						Function_369();
						Function_368();
						Function_560(&Local_23 + 1172);
						Function_560(&Local_23 + 936);
						Function_472(&Local_23, 0);
						Function_562(2);
						Function_367(&Local_23);
						Local_23.f_1008 = VDIST(Global_34574, Function_367(&Local_23));
						iLocal_21 = 3;
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
				Function_324(StackVal, StackVal, ScriptParam_0.f_36, *(&ScriptParam_0 + 8));
				Function_472(&Local_23, 0);
				break;
			
			case 0x00000005:
				if (iLocal_413 == 0)
				{
					if ((IS_SCRIPT_VALID(bLocal_386) && SQUAD_IS_VALID(Local_330.f_60)) && iLocal_406 != 0)
					{
						Function_322(&Local_330);
						Function_319(&Local_330, Function_321());
						iLocal_406 = 1;
					}
					if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
					{
						CLEAR_ACTOR_MAX_SPEED(GET_MOST_RECENT_MOUNT(Global_34573));
					}
					Function_310(&Local_23, 0, 1);
					if (!IS_ACTOR_ALIVE(Global_34573) || iLocal_22 == 2)
					{
						iLocal_414 = 0;
					}
					else
					{
						iLocal_414 = 1;
					}
					if (iLocal_414 == 0)
					{
						Function_193();
						iLocal_416 = 1;
						Function_560(&iLocal_410);
					}
					iLocal_413 = 1;
				}
				else if (iLocal_416 == 0)
				{
					if (iLocal_415 == 0)
					{
						if (Function_192(&Local_23))
						{
							if (iLocal_414 == 1)
							{
								Function_90(&Local_23);
								iLocal_415 = 1;
							}
							else
							{
								LOG_ERROR("Escort: Unexpected state in EVENT_ENDING");
								Function_193();
								iLocal_416 = 1;
								Function_560(&iLocal_410);
							}
						}
					}
					if (iLocal_415 == 1)
					{
						if (Function_63(&Local_23) == 5)
						{
							Function_38(&Local_23);
							Function_193();
							iLocal_416 = 1;
							Function_560(&iLocal_410);
						}
					}
				}
				else if (Function_430(&iLocal_410, 10.0f))
				{
					if (iLocal_327 == 1)
					{
						Function_574(0);
						Function_36(0);
						Function_35(12);
					}
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				Function_472(&Local_23, 0);
				break;
		}
		WAIT(Function_34(&Local_23));
	}
	if (Local_23.f_1200)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (iLocal_327 == 1)
	{
		if (iLocal_22 == 2)
		{
			Function_12(&Local_23, 0, 1);
		}
		else
		{
			Function_12(&Local_23, 0, 0);
		}
	}
	else
	{
		Function_12(&Local_23, 1, 0);
	}
	Function_1();
	DESTROY_ITERATOR(StackVal);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x8F6 / 2294
{
	if (!(Function_10(&Local_23) != 3 || Function_10(&Local_23) != 2))
	{
		Function_461(&Local_23);
		iLocal_22 = 4;
	}
	if (Function_9())
	{
		Function_2();
	}
	RELEASE_LAYOUT_OBJECTS(bLocal_325);
	return;
}

void Function_2() //Position: 0x926 / 2342
{
	Function_4();
	Function_3(10, 3);
	return;
}

void Function_3(int iParam0, int iParam1) //Position: 0x935 / 2357
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_4() //Position: 0xA6C / 2668
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
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_321(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_321());
	UI_POP("nDebugMenu");
	return;
}

void Function_5() //Position: 0xAB7 / 2743
{
	Function_6(25, 2);
	return;
}

void Function_6(int iParam0, int iParam1) //Position: 0xAC3 / 2755
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0xCC1 / 3265
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

bool Function_8() //Position: 0xDF8 / 3576
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_531(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_9() //Position: 0xE5F / 3679
{
	return Global_30920;
}

int Function_10(bool bParam0) //Position: 0xE68 / 3688
{
	return Function_11(bParam0);
}

int Function_11(int iParam0) //Position: 0xE73 / 3699
{
	return iParam0->f_620;
}

void Function_12(bool bParam0, int iParam1, int iParam2) //Position: 0xE7E / 3710
{
	bool bVar0;
	
	Function_27(bParam0, 0, 0);
	if (IS_OBJECT_VALID(bParam0->f_1000))
	{
		DESTROY_OBJECT(bParam0->f_1000);
	}
	if (Function_531(bParam0->f_928, 4))
	{
		if (IS_VOLUME_VALID(bParam0->f_984))
		{
			if (Function_468(bParam0->f_980))
			{
				if (!StackVal != bParam0->f_984)
				{
					DESTROY_VOLUME(bParam0->f_984);
				}
			}
			else
			{
				DESTROY_VOLUME(bParam0->f_984);
			}
		}
	}
	if (IS_ACTOR_VALID(bParam0->f_1012))
	{
		TASK_CLEAR(bParam0->f_1012);
		RESET_ANIM_SET_FOR_ACTOR(bParam0->f_1012, 0);
		if (iParam1 == 1)
		{
			DESTROY_ACTOR(bParam0->f_1012);
		}
		else
		{
			DECOR_REMOVE(bParam0->f_1012, "escort_state");
			DECOR_REMOVE(bParam0->f_1012, "escort_destType");
			DECOR_REMOVE(bParam0->f_1012, "escort_blip");
			DECOR_REMOVE(bParam0->f_1012, "escort_stayout");
			if (iParam2 == 1)
			{
				if (IS_ACTOR_VALID((*bParam0 + 1088)[0]))
				{
					MEMORY_REPORT_POSITION_AUTO(bParam0->f_1012, (*bParam0 + 1088)[0], 1);
					bVar0 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(false, (*bParam0 + 1088)[0], 1.0f, 1);
					TASK_FOLLOW_ACTOR(false, (*bParam0 + 1088)[0]);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bParam0->f_1012, bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					RELEASE_ACTOR(bParam0->f_1012);
				}
			}
			else if (IS_ACTOR_VALID(GET_MOUNT(bParam0->f_1012)))
			{
				Function_24(bParam0);
			}
			else
			{
				Function_23();
				Function_22(StackVal, StackVal, bParam0->f_1012, Function_23(), 0, 0, 2, 1);
			}
		}
	}
	if (IS_ACTOR_VALID((*bParam0 + 1088)[0]))
	{
		TASK_CLEAR((*bParam0 + 1088)[0]);
		RESET_ANIM_SET_FOR_ACTOR((*bParam0 + 1088)[0], 0);
		if (iParam1 == 1)
		{
			DESTROY_ACTOR((*bParam0 + 1088)[0]);
		}
		else
		{
			Function_23();
			Function_22(StackVal, StackVal, (*bParam0 + 1088)[0], Function_23(), 0, 0, 2, 1);
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
	if (Function_531(bParam0->f_928, 128) && Function_21() != 1)
	{
		Function_20(1, 0x41200000);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	if (Function_531(bParam0->f_928, 2))
	{
		RELEASE_LAYOUT_REF(bParam0->f_916);
	}
	Function_15(bParam0);
	Function_13();
	return;
}

void Function_13() //Position: 0x111D / 4381
{
	bool bVar0;
	
	bVar0 = Function_14();
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

var Function_14() //Position: 0x1135 / 4405
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 8);
	ITERATE_ON_PARTIAL_NAME(bVar1, "escortDataObj");
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	if (!IS_OBJECT_VALID(bVar0))
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Global_28841, "escortDataObj", 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f);
		if (!IS_OBJECT_VALID(bVar0))
		{
			LOG_ERROR("ESCORT_GetExternalObject - Could not create external object?");
		}
	}
	if (IS_ITERATOR_VALID(bVar1))
	{
		DESTROY_ITERATOR(bVar1);
	}
	return bVar0;
}

void Function_15(int iParam0) //Position: 0x11E7 / 4583
{
	STREAMING_UNLOAD_BOUNDS();
	Function_16(iParam0 + 636);
	return;
}

void Function_16(int iParam0) //Position: 0x11F8 / 4600
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_17(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0x121E / 4638
{
	if (Function_19(uParam0[iParam13], 4))
	{
		if (Function_19(uParam0[iParam13], 1))
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
			Function_18(uParam0[iParam13], 1);
			Function_18(uParam0[iParam13], 2);
			Function_18(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_18(var uParam0, int iParam1) //Position: 0x134C / 4940
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_19(var uParam0, int iParam1) //Position: 0x1366 / 4966
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_20(float fParam0, float fParam1) //Position: 0x1383 / 4995
{
	if (!Function_21())
	{
		switch (fParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

bool Function_21() //Position: 0x13BA / 5050
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

void Function_22(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x13DF / 5087
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_573(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
}

vector3 Function_23() //Position: 0x14E7 / 5351
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_24(bool bParam0) //Position: 0x14F0 / 5360
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID(bParam0->f_1012))
	{
		if (!IS_ACTOR_DEAD(bParam0->f_1012))
		{
			if (!IS_ACTOR_HOGTIED(bParam0->f_1012))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0->f_1012)))
				{
					bVar1 = GET_MOUNT(bParam0->f_1012);
					if (IS_ACTOR_VALID(bVar1))
					{
						Function_25(Global_34573, 0);
						TASK_CLEAR(Global_34573);
						ACTOR_DISMOUNT_NOW(Global_34573);
					}
				}
				else if (IS_ACTOR_VALID(GET_VEHICLE(bParam0->f_1012)))
				{
					bVar2 = GET_VEHICLE(bParam0->f_1012);
					if (IS_ACTOR_VALID(bVar2))
					{
						TASK_VEHICLE_LEAVE(false);
					}
				}
				TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_OVERRIDE_SET_MOVETYPE(bParam0->f_1012, 4);
				TASK_PRIORITY_SET(bParam0->f_1012, 1);
				TASK_SEQUENCE_PERFORM(bParam0->f_1012, bVar0);
			}
		}
	}
	return;
}

void Function_25(bool bParam0, bool bParam1) //Position: 0x15A3 / 5539
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_26(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_26(bool bParam0, bool bParam1) //Position: 0x1600 / 5632
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_27(bool bParam0, int iParam1, int iParam2) //Position: 0x161F / 5663
{
	vector3 vVar0;
	struct<8> Var3;
	
	if (IS_ACTOR_VALID(bParam0->f_1012))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0->f_1012)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0->f_1012));
		}
	}
	if (Function_33(bParam0))
	{
		Function_32();
	}
	if (IS_LAYOUTREF_VALID(bParam0->f_916))
	{
		if (IS_OBJECT_VALID(bParam0->f_1004))
		{
			Function_31(bParam0->f_1004);
		}
	}
	if (iParam1 == 1)
	{
		GET_OBJECT_POSITION(bParam0->f_1000, &vVar0);
		if (!Function_573(StackVal, StackVal, vVar0))
		{
			Function_29(StackVal, StackVal, vVar0, 0, 393264, 1);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("escortGateway") };
			bParam0->f_1004 = Function_28(StackVal, StackVal, bParam0->f_916, &Var3, vVar0, 0.0f, 0.0f, 0.0f, Global_34573, 3.5f, 1, 3, 330, 4294967295, 1, -1.0f, -1.0f, 0);
		}
	}
	if (iParam2 == 1)
	{
		if (IS_ACTOR_VALID(bParam0->f_1012))
		{
			ADD_BLIP_FOR_ACTOR(bParam0->f_1012, 325, 0, 2, 0);
		}
	}
	return;
}

var Function_28(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x16FB / 5883
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, uParam8, iParam10, iParam13, 0, iParam14, iParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (iParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, iParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_29(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x17C6 / 6086
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = uParam3;
	Global_28185.f_16 = uParam4;
	if (uParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (uParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_30(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_30(bool bParam0) //Position: 0x1882 / 6274
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

void Function_31(bool bParam0) //Position: 0x18C2 / 6338
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_32() //Position: 0x194C / 6476
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

bool Function_33(bool bParam0) //Position: 0x1977 / 6519
{
	if (Function_531(bParam0->f_584, 16))
	{
		return 1;
	}
	return 0;
}

var Function_34(int iParam0) //Position: 0x1990 / 6544
{
	return iParam0->f_932;
}

void Function_35(bool bParam0) //Position: 0x199B / 6555
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_36(int iParam0) //Position: 0x19B6 / 6582
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_37(105)), 0);
	return;
}

int Function_37(int iParam0) //Position: 0x19D7 / 6615
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_38(int iParam0) //Position: 0x19ED / 6637
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(iParam0->f_540))
	{
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_540);
			if (GET_OBJECT_TYPE(bVar2) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar2)))
				{
					if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar2)) && GET_ACTOR_FROM_OBJECT(bVar2) == Global_34573)
					{
						ACTOR_END_FORCE_HOLSTER(GET_ACTOR_FROM_OBJECT(bVar2));
					}
				}
			}
			bVar1++;
		}
	}
	if (!Function_531(iParam0->f_584, 512) && Function_531(iParam0->f_584, 256))
	{
		if (IS_OBJECT_VALID(iParam0->f_500))
		{
			DESTROY_OBJECT(iParam0->f_500);
		}
		if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_496));
		}
		if (IS_OBJECT_VALID(iParam0->f_504))
		{
			DESTROY_VOLUME(iParam0->f_504);
		}
		while (GET_OBJECTSET_SIZE(iParam0->f_540) >= 0)
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			if (IS_OBJECT_VALID(bVar0))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0->f_540);
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar0)))
					{
						Function_62(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(bVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(bVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(iParam0->f_540);
		}
		if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
		{
			Function_62(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
		}
		*(iParam0 + 544) = { 0.0f, 0.0f, 0.0f };
		iParam0->f_556 = 0;
		Function_42(1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_41(1.0f);
		Function_40(iParam0, 5);
		if (Function_531(iParam0->f_584, 32768))
		{
			Function_39(256);
		}
		Function_534(iParam0 + 584, 512);
		Function_533(iParam0 + 584, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_39(int iParam0) //Position: 0x1BA8 / 7080
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_40(int iParam0, int iParam1) //Position: 0x1BC5 / 7109
{
	iParam0->f_532 = iParam1;
	return;
}

void Function_41(bool bParam0) //Position: 0x1BD2 / 7122
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

void Function_42(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x1BEF / 7151
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
		bVar0 = Function_321();
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
			if (Function_61())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_46(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_45();
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
	Function_43(uParam9);
}

void Function_43(int iParam0) //Position: 0x1CDF / 7391
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_44();
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

void Function_44() //Position: 0x1D8E / 7566
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_45() //Position: 0x1E00 / 7680
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_46(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1E15 / 7701
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
	Function_60(iParam0, TO_FLOAT(bParam1), 1);
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_47(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2035 / 8245
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_58(390))), 32);
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
					bVar19 = (Function_57(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_57(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_55(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_52(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_49(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_48(), &Var9);
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

var Function_48() //Position: 0x2662 / 9826
{
	int iVar0;
	
	return iVar0;
}

var Function_49(int iParam0) //Position: 0x266A / 9834
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_50(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x267B / 9851
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_51(char* cParam0, bool bParam1) //Position: 0x2770 / 10096
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_52(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2789 / 10121
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_54(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_53(Function_54(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_53(int iParam0, int iParam1) //Position: 0x27EE / 10222
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_54(int iParam0, bool bParam1) //Position: 0x2800 / 10240
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_55(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2812 / 10258
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
	if (((Function_56(iParam0) != 19 || Function_56(iParam0) != 17) || Function_56(iParam0) != 10) || Function_56(iParam0) != 9)
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

int Function_56(int iParam0) //Position: 0x2942 / 10562
{
	return Global_35278[iParam020].f_48;
}

float Function_57(int iParam0) //Position: 0x2951 / 10577
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_58(int iParam0) //Position: 0x298A / 10634
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_59(int iParam0) //Position: 0x29C7 / 10695
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

int Function_60(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B61 / 11105
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
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

bool Function_61() //Position: 0x2DA5 / 11685
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_62(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2DAE / 11694
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			FIRE_STOP_ON_ACTOR(bParam0);
		}
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(bParam0);
		CLEAR_ACTOR_MAX_SPEED(bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
		RESET_ACTOR_GAITS(bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(bParam0), 0);
		}
		if (bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

int Function_63(int iParam0) //Position: 0x2E48 / 11848
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	struct<8> Var24;
	bool bVar32;
	
	switch (iParam0->f_532)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (Function_573(StackVal, StackVal, *(iParam0 + 544)))
			{
				GET_POSITION(Global_34573, iParam0 + 544);
			}
			if (!Function_573(StackVal, StackVal, *(iParam0 + 544)))
			{
				STREAMING_LOAD_BOUNDS(*(iParam0 + 544), 10.0f, 0);
			}
			switch (iParam0->f_536)
			{
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					if (IS_ACTOR_PLAYER(Global_34573))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
					}
					Function_25(Global_34573, 0);
					REQUEST_ACTION_TREE("custom/stand_hostage");
					REQUEST_ACTION_TREE("custom/handoff");
					REQUEST_ANIM_SET("handoff", 0);
					if (IS_PLAYER_DEADEYE(0))
					{
						CANCEL_DEADEYE();
						CANCEL_TIME_WARP(1);
					}
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Global_34573), "procStop", true);
					if (iParam0->f_560 == 1)
					{
						Function_40(iParam0, 4);
						Function_560(iParam0 + 508);
					}
					else
					{
						Function_40(iParam0, 3);
					}
					break;
				
				default:
					Function_40(iParam0, 4);
					Function_560(iParam0 + 508);
					break;
			}
			break;
		
		case 0x00000002:
			if (!Function_573(StackVal, StackVal, *(iParam0 + 544)))
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 544), 10.0f))
				{
					if (!IS_CUTSCENEOBJECT_PAUSED(iParam0->f_500) && HUD_IS_FADED())
					{
						Function_41(1.0f);
						Function_40(iParam0, 4);
						Function_560(iParam0 + 508);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procStop") == 1)
			{
				GET_ACTOR_VELOCITY(Global_34573, &vVar18);
				if (VMAG(vVar18) > 1.0f)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj", GET_MOUNT(Global_34573));
						TASK_CLEAR(Global_34573);
						TASK_DISMOUNT(Global_34573, 1);
						TASK_PRIORITY_SET(Global_34573, 1);
					}
					else if (IS_ACTOR_VALID(GET_VEHICLE(Global_34573)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj", GET_VEHICLE(Global_34573));
						Function_81(GET_VEHICLE(Global_34573), 0, 0, 2);
						TASK_CLEAR(Global_34573);
						TASK_VEHICLE_LEAVE(Global_34573);
						TASK_PRIORITY_SET(Global_34573, 1);
					}
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
				}
			}
			else if (!(((GET_TASK_STATUS(Global_34573, 12) != 1 || GET_TASK_STATUS(Global_34573, 12) != 3) || GET_TASK_STATUS(Global_34573, 55) != 1) || GET_TASK_STATUS(Global_34573, 55) != 3))
			{
				if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))))
				{
					START_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj")));
				}
				bVar1 = Function_80(iParam0, 1);
				if (IS_ACTOR_VALID(bVar1))
				{
					TASK_CLEAR(Global_34573);
					TASK_GO_NEAR_ACTOR(Global_34573, bVar1, 2.5f, 1);
					TASK_PRIORITY_SET(Global_34573, 1);
				}
				else
				{
					LOG_ERROR("Cutscene could not find actor for player to greet");
				}
				Function_40(iParam0, 4);
				Function_560(iParam0 + 508);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(iParam0->f_500))
			{
				switch (iParam0->f_536)
				{
					case 0x00000003:
						if (Function_78(iParam0 + 508, 5.0f))
						{
							bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
							bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
							GET_OBJECT_POSITION(bVar4, &vVar9);
							CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
							GET_OBJECT_RELATIVE_POSITION(bVar4, -3.285f, 0.0f, -3.285f, &vVar9);
							GET_OBJECT_POSITION(bVar5, &vVar12);
							vVar9.f_4 = (vVar9.y + FABS((vVar9.y - vVar12.y)));
							FIND_GROUND_INTERSECTION(&vVar9, 100.0f, &vVar9, &vVar15);
							CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
							if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar5))))
							{
								bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar5));
								ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bVar5));
							}
							if (IS_ACTOR_VALID(bVar0))
							{
								ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bVar5));
								TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar5), vVar9, 0.0f, 1, 1, 1);
							}
							if (IS_ACTOR_VALID(bVar0))
							{
								vVar9.x = (vVar9.x + 3.0f);
								TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar0), vVar9, 0.0f, 1, 1, 1);
								TASK_STAND_STILL(bVar0, 5.0f, 0, 0);
							}
							SNAP_OBJECT_TO_GROUND(bVar0, 20.0f, false, 1092616192);
							SNAP_OBJECT_TO_GROUND(bVar5, 20.0f, false, 1092616192);
						}
						break;
					
					case 0x00000001:
						bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
						bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
						bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
						bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
						switch (iParam0->f_556)
						{
							case 0x00000000:
								vVar9 = { StackVal, StackVal, Global_34574 };
								CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
								GET_OBJECT_POSITION(bVar5, &vVar21);
								bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar4));
								if (IS_ACTOR_VALID(bVar0))
								{
									bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar4));
									ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bVar4));
									Function_77(Global_34573);
									vVar9 = { StackVal, StackVal, Function_77(Global_34573) };
									vVar9.x = (vVar9.x + 3.0f);
									TELEPORT_ACTOR(bVar0, &vVar9, 1, 1, 1);
								}
								ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
								ACTOR_START_FORCE_HOLSTER(bVar2, 0, 0);
								SNAP_OBJECT_TO_GROUND(bVar1, 20.0f, false, 1092616192);
								TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
								CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
								vVar15 = { 0.0f, 1.0f, 0.0f };
								ROTATE_OBJECT_AROUND_AXIS(bVar1, &vVar15, 165.0f);
								vVar12 = { StackVal, StackVal, Global_34574 };
								GET_OBJECT_RELATIVE_POSITION(bVar1, 0.0f, 0.0f, -1.0f, &vVar12);
								TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar12, 180.0f, 1, 1, 1);
								TASK_STAND_STILL(bVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(bVar2, 20.0f, false, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(bVar2, &vVar15, 165.0f);
								Function_74(bVar2, Global_34573);
								Function_533(iParam0 + 584, 2048);
								if (IS_ACTOR_VALID(bVar0))
								{
									vVar9.x = (vVar9.x + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar0), vVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(bVar0, 5.0f, 0, 0);
								}
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_430(iParam0 + 508, 0.5f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_430(iParam0 + 508, 7.0f))
								{
									bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
									bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
									bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
									bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
									bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
									Function_73(iParam0, bVar1, bVar2, 4);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(iParam0->f_496))
								{
									if (GRINGO_ACTOR_CAN_USE(iParam0->f_496, "UseCase1", bVar1))
									{
										SNAP_ACTOR_TO_GRINGO(bVar1, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", 0, 0, 0);
										TASK_USE_GRINGO(bVar1, iParam0->f_496, "UseCase1", 1, 1);
										Function_560(iParam0 + 508);
									}
									else
									{
										LOG_ERROR("Cannot use this cutscene gringo?");
									}
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar2)))
								{
									if (Function_70(iParam0 + 508) < 0.75f && !Function_531(iParam0->f_584, 2048))
									{
										SNAP_ACTOR_TO_GRINGO(bVar2, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", 0, 0, 0);
										SET_ACTOR_UPDATE_PRIORITY(bVar2, false);
										TASK_PRIORITY_SET(bVar2, 1);
										TASK_USE_GRINGO(bVar2, iParam0->f_496, "ChildUse", 1, 1);
										Function_534(iParam0 + 584, 2048);
										Function_560(iParam0 + 508);
										iParam0->f_556++;
									}
								}
								break;
							
							case 0x00000005:
								if (Function_430(iParam0 + 508, 9.0f))
								{
									Function_40(iParam0, 5);
									iParam0->f_556++;
								}
								break;
						}
						break;
					
					case 0x00000002:
						bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
						bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
						bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
						bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
						bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
						switch (iParam0->f_556)
						{
							case 0x00000000:
								GET_OBJECT_POSITION(bVar5, &vVar9);
								CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
								GET_OBJECT_POSITION(bVar5, &vVar21);
								vVar18 = { -5.348521f, 0.0f, -3.826143f };
								vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar18, vVar21, StackVal) };
								FIND_GROUND_INTERSECTION(&vVar9, 20.0f, &vVar9, &vVar15);
								if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar4))))
								{
									bVar0 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(bVar4));
									ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(bVar4));
								}
								ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
								ACTOR_START_FORCE_HOLSTER(bVar2, 0, 0);
								TELEPORT_ACTOR_WITH_HEADING(bVar1, vVar9, 0.0f, 1, 1, 1);
								SNAP_OBJECT_TO_GROUND(bVar1, 20.0f, false, 1092616192);
								TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
								CLEAR_AREA_OF_GRASS(vVar9, 10.0f);
								vVar15 = { 0.0f, 1.0f, 0.0f };
								ROTATE_OBJECT_AROUND_AXIS(bVar1, &vVar15, 165.0f);
								vVar12 = { StackVal, StackVal, vVar9 };
								GET_OBJECT_RELATIVE_POSITION(bVar1, 0.0f, 0.0f, -1.0f, &vVar12);
								TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar12, 180.0f, 1, 1, 1);
								TASK_STAND_STILL(bVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(bVar2, 20.0f, false, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(bVar2, &vVar15, 165.0f);
								Function_533(iParam0 + 584, 2048);
								if (IS_ACTOR_VALID(bVar0))
								{
									vVar9.x = (vVar9.x + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar0), vVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(bVar0, 5.0f, 0, 0);
								}
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_430(iParam0 + 508, 0.5f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_430(iParam0 + 508, 7.0f))
								{
									bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
									bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
									bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
									bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
									bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
									Function_73(iParam0, bVar1, bVar2, 4);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(iParam0->f_496))
								{
									SNAP_ACTOR_TO_GRINGO(bVar1, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", 0, 0, 0);
									TASK_USE_GRINGO(bVar1, iParam0->f_496, "UseCase1", 1, 1);
									Function_560(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_70(iParam0 + 508) < 0.75f && !Function_531(iParam0->f_584, 2048))
								{
									SNAP_ACTOR_TO_GRINGO(bVar2, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", 0, 0, 0);
									SET_ACTOR_UPDATE_PRIORITY(bVar2, false);
									TASK_PRIORITY_SET(bVar2, 1);
									TASK_USE_GRINGO(bVar2, iParam0->f_496, "ChildUse", 1, 1);
									Function_534(iParam0 + 584, 2048);
									Function_560(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000005:
								if (Function_430(iParam0 + 508, 9.0f))
								{
									Function_40(iParam0, 5);
									iParam0->f_556++;
								}
								break;
						}
						break;
					
					case 0x00000004:
					case 0x00000005:
					case 0x00000006:
					case 0x00000007:
						switch (iParam0->f_556)
						{
							case 0x00000000:
								if ((HAS_ACTION_TREE_LOADED("custom/stand_hostage") && HAS_ANIM_SET_LOADED("handoff")) || Function_430(iParam0 + 508, 1.0f))
								{
									Function_560(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000001:
								bVar0 = Function_80(iParam0, 1);
								if (IS_ACTOR_VALID(bVar0))
								{
									Function_69(bVar0, &vVar9);
								}
								else
								{
									vVar9 = { 0.0f, 0.0f, 0.0f };
								}
								if ((Function_430(iParam0 + 508, 0.5f) || iParam0->f_560 != 1) || VDIST(Global_34574, vVar9) > 3.0f)
								{
									if (IS_OBJECT_VALID(iParam0->f_504))
									{
										DESTROY_VOLUME(iParam0->f_504);
									}
									if (iParam0->f_536 == 4)
									{
										vVar9 = { -2096.014f, 16.449f, 2603.359f };
									}
									else if (iParam0->f_536 == 5)
									{
										vVar9 = { 761.411f, 79.458f, 1232.734f };
									}
									else if (iParam0->f_536 == 6)
									{
										vVar9 = { -2671.387f, 31.363f, 4253.713f };
									}
									else if (iParam0->f_536 == 7)
									{
										vVar9 = { -821.7f, 93.222f, 2418.31f };
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad value");
									}
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("bhCutsceneVol") };
									iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, vVar9, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
									if (iParam0->f_536 == 4)
									{
										vVar9 = { -2104.648f, 16.46f, 2605.749f };
										vVar15 = { 0.0f, 216.0f, 0.0f };
									}
									else if (iParam0->f_536 == 5)
									{
										vVar9 = { 751.328f, 78.525f, 1233.59f };
										vVar15 = { 0.0f, 235.0f, 0.0f };
									}
									else if (iParam0->f_536 == 6)
									{
										vVar9 = { -2680.063f, 31.548f, 4255.704f };
										vVar15 = { 0.0f, 251.0f, 0.0f };
									}
									else if (iParam0->f_536 == 7)
									{
										vVar9 = { -824.746f, 92.129f, 2406.763f };
										vVar15 = { 0.0f, 236.0f, 0.0f };
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad handshaker(1) position value");
									}
									TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, 1, 1);
									PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								if (iParam0->f_536 == 4)
								{
									vVar9 = { -2096.996f, 16.449f, 2605.508f };
									vVar15 = { 0.0f, 167.0f, 0.0f };
								}
								else if (iParam0->f_536 == 5)
								{
									vVar9 = { 754.635f, 78.525f, 1234.821f };
									vVar15 = { 0.0f, 352.531f, 0.0f };
								}
								else if (iParam0->f_536 == 6)
								{
									vVar9 = { -2672.115f, 31.384f, 4254.054f };
									vVar15 = { 0.0f, -10.0f, 0.0f };
								}
								else if (iParam0->f_536 == 7)
								{
									vVar9 = { -821.642f, 93.294f, 2419.156f };
									vVar15 = { 0.0f, 90.0f, 0.0f };
								}
								else
								{
									LOG_ERROR("Procmission Cutscene Update got a bad value");
								}
								iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, "handoffGringo", "$/content/scripting/gringo/simplegringo/handoff", vVar9, vVar15));
								Function_68(bVar0, Function_80(iParam0, 0), 0, 1);
								bVar32 = false;
								while (bVar32 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
								{
									bVar0 = Function_80(iParam0, bVar32);
									if (IS_ACTOR_VALID(bVar0))
									{
										if (!IS_ACTOR_PLAYER(bVar0))
										{
											SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
											TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
										}
										switch (bVar32)
										{
											case 0x00000000:
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2094.226f, 16.449f, 2608.347f };
													vVar15 = { 0.0f, 298.712f, 0.0f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 757.028f, 78.525f, 1235.217f };
													vVar15 = { 0.0f, 346.0f, 0.0f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2668.537f, 31.387f, 4253.711f };
													vVar15 = { 0.0f, 234.172f, 0.0f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -821.477f, 93.365f, 2420.748f };
													vVar15 = { 0.0f, 173.273f, 0.0f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad victim position value");
												}
												REMOVE_OBJECT_FROM_ATTACHMENT(bVar0);
												FREE_FROM_HOGTIE(bVar0);
												TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, 0, 1);
												Function_62(bVar0, 1, 1);
												SET_ANIM_SET_FOR_ACTOR(bVar0, "stand_hostage", 0);
												SET_ACTION_NODE_FOR_ACTOR(bVar0, "stand_hostage/walk_pose");
												DELETE_ACCESSORY("ANKLE_BIND", bVar0);
												SET_ACTOR_MAX_SPEED(bVar0, 1);
												MEMORY_CLEAR_ALL(bVar0);
												TASK_CLEAR(bVar0);
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2091.603f, 16.962f, 2605.353f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 757.973f, 78.525f, 1234.922f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2657.971f, 31.386f, 4258.836f };
												}
												else if (iParam0->f_536 != 7)
												{
													vVar9 = { -823.57f, 93.809f, 2427.074f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad victim face actor value");
												}
												TASK_FACE_COORD(bVar0, &vVar9, 1);
												TASK_PRIORITY_SET(bVar0, 1);
												break;
											
											case 0x00000001:
												MEMORY_CONSIDER_AS(bVar0, Global_34573, false);
												ACTOR_HOLSTER_WEAPON(bVar0, 0);
												TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												TASK_PRIORITY_SET(bVar0, 1);
												break;
											
											case 0x00000002:
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2095.837f, 16.449f, 2608.938f };
													vVar15 = { 0.0f, 298.712f, 0.0f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 756.759f, 78.525f, 1237.865f };
													vVar15 = { 0.0f, 59.078f, 0.0f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2668.258f, 31.387f, 4252.612f };
													vVar15 = { 0.0f, 218.528f, 0.0f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -819.311f, 93.365f, 2421.17f };
													vVar15 = { 0.0f, 135.445f, 0.0f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, 1, 1);
												TASK_CLEAR(bVar0);
												if (!IS_ACTOR_VALID(Function_80(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_80(iParam0, 0), -1.0f, 0);
													UNK_0x2E84E682(bVar0, 0);
													GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 1, 1);
													ACTOR_DRAW_ANY_WEAPON(bVar0, 0);
													AI_GOAL_AIM_AT_OBJECT(bVar0, Function_80(iParam0, 0), 0);
												}
												TASK_PRIORITY_SET(bVar0, 1);
												break;
											
											case 0x00000003:
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2091.431f, 16.963f, 2603.127f };
													vVar15 = { 0.0f, 167.0f, 0.0f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 756.564f, 78.525f, 1232.389f };
													vVar15 = { 0.0f, 169.678f, 0.0f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2661.205f, 31.386f, 4254.576f };
													vVar15 = { 0.0f, 0.0f, 0.0f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -824.301f, 93.365f, 2421.301f };
													vVar15 = { 0.0f, 263.273f, 0.0f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, 1, 1);
												TASK_CLEAR(bVar0);
												if (!IS_ACTOR_VALID(Function_80(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_80(iParam0, 0), -1.0f, 0);
												}
												TASK_PRIORITY_SET(bVar0, 1);
												break;
											
											case 0x00000004:
												if (iParam0->f_536 == 4)
												{
													vVar9 = { -2091.729f, 16.449f, 2610.241f };
													vVar15 = { 0.0f, 13.0f, 0.0f };
												}
												else if (iParam0->f_536 == 5)
												{
													vVar9 = { 763.822f, 79.456f, 1234.328f };
													vVar15 = { 0.0f, 93.67f, 0.0f };
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2668.106f, 31.387f, 4256.549f };
													vVar15 = { 0.0f, 0.0f, 0.0f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -823.502f, 93.809f, 2430.243f };
													vVar15 = { 0.0f, 353.273f, 0.0f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad gunner(2) position value");
												}
												TELEPORT_ACTOR_WITH_HEADING(bVar0, vVar9, vVar15.y, 1, 1, 1);
												TASK_CLEAR(bVar0);
												if (IS_ACTOR_VALID(Function_80(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_80(iParam0, 0), -1.0f, 0);
												}
												TASK_PRIORITY_SET(bVar0, 1);
												break;
											
											case 0x00000005:
												if (iParam0->f_536 == 4)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (iParam0->f_536 == 5)
												{
													LOG_ERROR("Blackwater does not have a rooftop actor.");
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2669.659f, 35.673f, 4252.948f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -826.75f, 96.959f, 2425.077f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad rooftop (1) position value");
												}
												TASK_CLEAR(bVar0);
												TASK_GO_NEAR_COORD(bVar0, &vVar9, 0.3f, 1);
												break;
											
											case 0x00000006:
												if (iParam0->f_536 == 4)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (iParam0->f_536 == 5)
												{
													LOG_ERROR("Armadillo does not have a rooftop actor.");
												}
												else if (iParam0->f_536 == 6)
												{
													vVar9 = { -2670.716f, 35.673f, 4255.13f };
												}
												else if (iParam0->f_536 == 7)
												{
													vVar9 = { -824.29f, 96.959f, 2427.185f };
												}
												else
												{
													LOG_ERROR("Procmission Cutscene Update got a bad rooftop (1) position value");
												}
												TASK_CLEAR(bVar0);
												TASK_GO_NEAR_COORD(bVar0, &vVar9, 0.3f, 1);
												break;
											
											default:
												LOG_ERROR("Unknown actor index for PROCMISSION_CUTSCENE_TYPE_BOUNTY_");
												break;
											}
									}
									bVar32++;
								}
								if (iParam0->f_536 == 4)
								{
									bVar7 = Function_67(Global_30640[0], "narmadillo", "sheriffsOffice", 1);
									bVar8 = "";
									vVar9 = { -822.845f, 93.809f, 2423.713f };
								}
								else if (iParam0->f_536 == 5)
								{
									bVar7 = Function_67(Global_30717[0], "blackwater", "policeStation01", 1);
									bVar8 = Function_67(Global_30717[0], "blackwater", "policeStation01", 2);
									vVar9 = { 761.697f, 79.456f, 1235.028f };
								}
								else if (iParam0->f_536 == 6)
								{
									bVar7 = Function_67(Global_30693[0], "nchuparosa", "cityHall01", 6);
									bVar8 = Function_67(Global_30693[0], "nchuparosa", "cityHall01", 1);
									vVar9 = { -2668.537f, 31.387f, 4253.711f };
								}
								else if (iParam0->f_536 == 7)
								{
									bVar7 = Function_67(Global_30668[0], "hennigansRanch", "stockade01", 1);
									bVar8 = "";
									vVar9 = { -822.845f, 93.809f, 2423.713f };
								}
								else
								{
									LOG_ERROR("Procmission Cutscene Update got a bad door open position");
								}
								if (IS_DOOR_VALID(bVar7))
								{
									OPEN_DOOR(bVar7, &vVar9, 4.0f);
								}
								if (IS_DOOR_VALID(bVar8))
								{
									OPEN_DOOR(bVar8, &vVar9, 4.0f);
								}
								if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
								{
									bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"));
									if (IS_OBJECT_VALID(bVar0))
									{
										if (iParam0->f_536 == 4)
										{
											if (IS_ACTOR_VALID(bVar0))
											{
												if (IS_ACTOR_VEHICLE(bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -2090.139f, 16.44f, 2595.838f, 128.422f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -2093.36f, 16.449f, 2598.952f, 215.238f, 1, 1, 1);
												}
											}
										}
										else if (iParam0->f_536 == 5)
										{
											if (IS_ACTOR_VALID(bVar0))
											{
												if (IS_ACTOR_VEHICLE(bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, 752.488f, 78.553f, 1226.634f, 174.158f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, 752.488f, 78.553f, 1226.634f, 174.158f, 1, 1, 1);
												}
											}
										}
										else if (iParam0->f_536 == 6)
										{
											if (IS_ACTOR_VALID(bVar0))
											{
												if (IS_ACTOR_VEHICLE(bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -2676.581f, 31.359f, 4246.866f, 72.0f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -2676.581f, 31.359f, 4246.866f, 72.0f, 1, 1, 1);
												}
											}
										}
										else if (iParam0->f_536 == 7)
										{
											if (IS_ACTOR_VALID(bVar0))
											{
												if (IS_ACTOR_VEHICLE(bVar0))
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -816.61f, 92.886f, 2418.169f, 40.0f, 1, 1, 1);
												}
												else
												{
													TELEPORT_ACTOR_WITH_HEADING(bVar0, -818.287f, 93.25f, 2419.963f, 355.0f, 1, 1, 1);
												}
											}
										}
										else
										{
											LOG_ERROR("Procmission Cutscene horse/vehicle position not defined");
										}
									}
								}
								Function_560(iParam0 + 508);
								iParam0->f_556++;
								break;
							
							case 0x00000003:
								if (Function_430(iParam0 + 508, 1.11f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								bVar1 = Function_80(iParam0, 0);
								if (!IS_ACTOR_VALID(bVar1))
								{
									bVar1 = Global_34573;
								}
								bVar2 = Function_80(iParam0, 1);
								bVar3 = Function_80(iParam0, 2);
								if (!IS_ACTOR_PLAYER(bVar1))
								{
									TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar3, bVar1, 0.5f, 1);
									TASK_PRIORITY_SET(bVar3, 1);
									if (iParam0->f_536 == 4)
									{
										vVar9 = { -2086.59f, 16.964f, 2603.988f };
									}
									else if (iParam0->f_536 == 5)
									{
										vVar9 = { 764.435f, 79.455f, 1236.632f };
									}
									else if (iParam0->f_536 == 6)
									{
										vVar9 = { -2659.724f, 31.386f, 4255.178f };
									}
									else if (iParam0->f_536 == 7)
									{
										vVar9 = { -824.114f, 93.809f, 2428.695f };
									}
									else
									{
										LOG_ERROR("Procmission Cutscene Update got a bad go to coord value");
									}
									SET_ACTOR_MAX_SPEED(bVar1, 1);
									TASK_GO_NEAR_COORD(bVar1, &vVar9, 1.0f, 1);
									TASK_PRIORITY_SET(bVar1, 1);
								}
								Function_62(bVar2, 1, 1);
								if (iParam0->f_536 == 4)
								{
									vVar9 = { -2096.996f, 16.449f, 2605.508f };
									TELEPORT_ACTOR(Global_34573, &vVar9, 1, 1, 1);
									vVar9 = { -2097.315f, 16.4494f, 2606.89f };
									TELEPORT_ACTOR(bVar2, &vVar9, 1, 1, 1);
								}
								else if (iParam0->f_536 == 6)
								{
									vVar9 = { -2672.348f, 31.387f, 4252.322f };
									TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar9, 150.228f, 1, 1, 1);
									vVar9 = { -2672.115f, 31.384f, 4254.054f };
									TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar9, 351.93f, 1, 1, 1);
								}
								else if (iParam0->f_536 == 7)
								{
									vVar9 = { -821.642f, 93.294f, 2419.156f };
									TELEPORT_ACTOR(Global_34573, &vVar9, 1, 1, 1);
									vVar9 = { -823.061f, 93.29355f, 2419.155f };
									TELEPORT_ACTOR(bVar2, &vVar9, 1, 1, 1);
								}
								else if (iParam0->f_536 == 5)
								{
									vVar9 = { 754.635f, 78.525f, 1234.821f };
									TELEPORT_ACTOR(Global_34573, &vVar9, 1, 1, 1);
									vVar9 = { 754.8007f, 78.52634f, 1233.557f };
									TELEPORT_ACTOR(bVar2, &vVar9, 1, 1, 1);
								}
								Function_74(bVar2, Global_34573);
								Function_74(Global_34573, bVar2);
								RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								SET_ANIM_SET_FOR_ACTOR(bVar2, "handoff", 0);
								SET_LINKED_ANIM_TARGET(bVar2, Global_34573);
								SET_ACTION_NODE_FOR_ACTOR(bVar2, "handoff");
								SAY_SINGLE_LINE_CONTEXT(bVar2, 299, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
								iParam0->f_556++;
								break;
							
							case 0x00000005:
								if (Function_430(iParam0 + 508, 7.0f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000006:
								bVar2 = Function_80(iParam0, 1);
								REMOVE_ACTION_TREE("custom/stand_hostage");
								REMOVE_ACTION_TREE("custom/handoff");
								REMOVE_ANIM_SET("handoff");
								CLEAR_LINKED_ANIM_TARGET(Global_34573);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
								Function_40(iParam0, 5);
								bVar32 = false;
								while (bVar32 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
								{
									bVar0 = Function_80(iParam0, bVar32);
									if (IS_ACTOR_VALID(bVar0))
									{
										MEMORY_CLEAR_ALL(bVar0);
									}
									bVar32++;
								}
								iParam0->f_556++;
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
						switch (iParam0->f_556)
						{
							case 0x00000000:
								PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								bVar0 = Function_80(iParam0, 0);
								RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								Function_62(bVar0, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bVar0, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, 0);
								if (IS_ACTOR_CRIPPLED(bVar0, 5))
								{
									SET_CRIPPLE_FLAG(bVar0, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutsceneGringo") };
									Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar9 = { StackVal, StackVal, Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar15 = { StackVal, StackVal, Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, &Var24, "$/content/scripting/gringo/simplegringo/hug_link", vVar9, vVar15));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(iParam0->f_496), 100.0f, false, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								if (IS_OBJECT_VALID(iParam0->f_504))
								{
									DESTROY_VOLUME(iParam0->f_504);
								}
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar12 = { StackVal, StackVal, Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar18 = { StackVal, StackVal, Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								if (!Function_573(StackVal, StackVal, vVar12))
								{
									if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
									{
										TELEPORT_ACTOR_WITH_HEADING(GET_MOST_RECENT_MOUNT(Global_34573), vVar12, GET_Y(&vVar18), 1, 1, 1);
										TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(Global_34573), -1.0f, 0, 0);
									}
								}
								SNAP_ACTOR_TO_GRINGO(bVar0, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", 1, 1, 0);
								TASK_USE_GRINGO(bVar0, iParam0->f_496, "UseCase1", 1, 1);
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								bVar0 = Function_80(iParam0, 0);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(iParam0->f_496, "Male", &vVar9);
									TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar9, GRINGO_GET_USE_COMPONENT_HEADING_EXT(iParam0->f_496, "Male"), 1, 1, 1);
									TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
									Function_560(iParam0 + 508);
									DECOR_SET_BOOL(Global_34573, "escwavReady", true);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_430(iParam0 + 508, 2.0f))
								{
									TASK_USE_GRINGO(Global_34573, iParam0->f_496, "Male", 1, 1);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (Function_430(iParam0 + 508, 3.0f))
								{
									bVar0 = Function_80(iParam0, 0);
									SAY_SINGLE_LINE_CONTEXT(bVar0, 103, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
									Function_560(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_430(iParam0 + 508, 5.5f))
								{
									DECOR_REMOVE(Global_34573, "escwavReady");
									Function_40(iParam0, 5);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000005:
								break;
						}
						break;
					
					case 0x00000015:
						switch (iParam0->f_556)
						{
							case 0x00000000:
								bVar1 = Function_80(iParam0, 0);
								bVar2 = Function_80(iParam0, 1);
								vVar9 = { -3.0f, 0.0f, -1.0f };
								vVar15 = { 0.0f, 0.0f, 0.0f };
								Function_64(GET_OBJECT_FROM_ACTOR(bVar1), 1, &vVar9, &vVar15);
								Function_62(bVar2, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bVar2, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar2, 0);
								if (IS_ACTOR_CRIPPLED(bVar2, 5))
								{
									SET_CRIPPLE_FLAG(bVar2, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutsceneGringo") };
									iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, &Var24, "$/content/scripting/gringo/simplegringo/shakehands_link", vVar9, vVar15));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(iParam0->f_496), 100.0f, false, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								SNAP_ACTOR_TO_GRINGO(Global_34573, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", 1, 0, 0);
								SNAP_ACTOR_TO_GRINGO(bVar2, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", 1, 0, 0);
								TASK_PRIORITY_SET(Global_34573, 1);
								TASK_CLEAR(Global_34573);
								TASK_USE_GRINGO(Global_34573, iParam0->f_496, "UseCase1", 1, 1);
								bVar32 = TASK_SEQUENCE_OPEN();
								TASK_CLEAR(false);
								TASK_USE_GRINGO(false, iParam0->f_496, "ChildUse", 1, 1);
								TASK_VEHICLE_ENTER(0, bVar1, 1, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_PRIORITY_SET(bVar0, 1);
								TASK_SEQUENCE_PERFORM(bVar2, bVar32);
								if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
								{
									vVar12 = { -5.0f, 0.0f, 0.0f };
									vVar18 = { 0.0f, 90.0f, 0.0f };
									Function_64(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540), 1, &vVar12, &vVar18);
									TELEPORT_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573), &vVar12, 1, 1, 1);
									SNAP_OBJECT_TO_GROUND(GET_MOST_RECENT_MOUNT(Global_34573), 100.0f, false, 1092616192);
								}
								if (IS_OBJECT_VALID(iParam0->f_504))
								{
									DESTROY_VOLUME(iParam0->f_504);
								}
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								Function_560(iParam0 + 508);
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_430(iParam0 + 508, 8.5f))
								{
									bVar1 = Function_80(iParam0, 0);
									bVar2 = Function_80(iParam0, 1);
									START_VEHICLE(bVar1);
									SET_VEHICLE_ALLOWED_TO_DRIVE(bVar1, 1);
									if (!GET_ACTOR_IN_VEHICLE_SEAT(bVar1, false) != bVar2)
									{
										SET_ACTOR_IN_VEHICLE(bVar2, bVar1, 0);
									}
									TASK_CLEAR(bVar2);
									TASK_PRIORITY_SET(bVar2, 1);
									TASK_FLEE_COORD(bVar2, &Global_34574, 4, -1.0f, -1.0f, 0);
									Function_40(iParam0, 5);
									iParam0->f_556++;
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
						switch (iParam0->f_556)
						{
							case 0x00000000:
								Function_560(iParam0 + 508);
								PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								if (IS_OBJECT_VALID(iParam0->f_504))
								{
									DESTROY_VOLUME(iParam0->f_504);
								}
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								bVar2 = Function_80(iParam0, 1);
								Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar12 = { StackVal, StackVal, Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar18 = { StackVal, StackVal, Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								if (!Function_573(StackVal, StackVal, vVar12))
								{
									if (IS_ACTOR_VALID(bVar2))
									{
										STOP_VEHICLE(bVar2);
										TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar12, GET_Y(&vVar18), 1, 1, 1);
									}
								}
								bVar1 = Function_80(iParam0, 0);
								Function_62(bVar1, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bVar1, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar1, 0);
								SET_ACTOR_AUTO_TRANSITION_TO_DRIVER_SEAT(bVar1, 1);
								if (IS_ACTOR_CRIPPLED(bVar1, 5))
								{
									SET_CRIPPLE_FLAG(bVar1, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									SNAP_OBJECT_TO_GROUND(iParam0->f_540, 5.0f, false, 5.0f);
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutsceneGringo") };
									Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar9 = { StackVal, StackVal, Function_515(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar15 = { StackVal, StackVal, Function_66(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, &Var24, "$/content/scripting/gringo/simplegringo/shakehands_link", vVar9, vVar15));
								}
								if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(iParam0->f_496), 100.0f, false, 1092616192);
								}
								else
								{
									LOG_ERROR("PROCMISSION_CUTSCENE_TYPE_ESCORT: Invalid procmission cutscene gringo?");
								}
								SNAP_ACTOR_TO_GRINGO(Global_34573, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", 1, 0, 0);
								TASK_PRIORITY_SET(Global_34573, 1);
								TASK_CLEAR(Global_34573);
								TASK_USE_GRINGO(Global_34573, iParam0->f_496, "UseCase1", 1, 1);
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								bVar1 = Function_80(iParam0, 0);
								bVar2 = Function_80(iParam0, 1);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(iParam0->f_496, "ChildUse", &vVar9);
									SNAP_ACTOR_TO_GRINGO(bVar1, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", 1, 0, 0);
									bVar32 = TASK_SEQUENCE_OPEN();
									TASK_USE_GRINGO(false, iParam0->f_496, "ChildUse", 1, 1);
									TASK_FACE_ACTOR(false, bVar2, 0, 3212836864);
									TASK_VEHICLE_ENTER(0, bVar2, 1, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar1, bVar32);
									TASK_SEQUENCE_RELEASE(bVar32, 1);
									TASK_PRIORITY_SET(bVar1, 1);
									Function_560(iParam0 + 508);
									DECOR_SET_BOOL(Global_34573, "transportReady", true);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								bVar1 = Function_80(iParam0, 0);
								bVar2 = Function_80(iParam0, 1);
								if (Function_430(iParam0 + 508, 5.0f))
								{
									START_VEHICLE(bVar2);
									SET_VEHICLE_ALLOWED_TO_DRIVE(bVar2, 1);
									Function_560(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								bVar1 = Function_80(iParam0, 0);
								bVar2 = Function_80(iParam0, 1);
								if (Function_430(iParam0 + 508, 2.5f))
								{
									if (!IS_ACTOR_RIDING_VEHICLE(bVar1))
									{
										TASK_CLEAR(bVar1);
										SET_ACTOR_IN_VEHICLE(bVar1, bVar2, 0);
									}
									Function_560(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_430(iParam0 + 508, 1.0f))
								{
									bVar1 = Function_80(iParam0, 0);
									bVar2 = Function_80(iParam0, 1);
									TASK_CLEAR(bVar1);
									Function_40(iParam0, 5);
									iParam0->f_556++;
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
				Function_40(iParam0, 5);
			}
			break;
		
		case 0x00000005:
			break;
		
		default:
			LOG_ERROR("Unhandled cutscene case");
			break;
	}
	return iParam0->f_532;
}

void Function_64(bool bParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x599B / 22939
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *iParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_65(&vVar0, iParam2))
			{
				*iParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*iParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_65(var uParam0, int iParam1) //Position: 0x5AC3 / 23235
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_573(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_573(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

vector3 Function_66(bool bParam0) //Position: 0x5B2E / 23342
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_67(bool bParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x5B55 / 23381
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_468(bParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[bParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[bParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

int Function_68(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5BF1 / 23537
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, bParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, bParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

void Function_69(bool bParam0, int iParam1) //Position: 0x5C44 / 23620
{
	GET_POSITION(bParam0, iParam1);
	return;
}

float Function_70(int iParam0) //Position: 0x5C51 / 23633
{
	if (Function_72(iParam0))
	{
		if (Function_71(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_71(int iParam0) //Position: 0x5D19 / 23833
{
	return Function_531(*iParam0, 2);
}

bool Function_72(int iParam0) //Position: 0x5D26 / 23846
{
	return Function_531(*iParam0, 1);
}

void Function_73(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5D33 / 23859
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	
	if (!IS_ACTOR_MALE(bParam2))
	{
		iParam3 = 2;
	}
	switch (iParam3)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000004:
		case 0x00000003:
			Function_515(GET_OBJECT_FROM_ACTOR(bParam1));
			vVar0 = { StackVal, StackVal, Function_515(GET_OBJECT_FROM_ACTOR(bParam1)) };
			Function_66(GET_OBJECT_FROM_ACTOR(bParam1));
			vVar3 = { StackVal, StackVal, Function_66(GET_OBJECT_FROM_ACTOR(bParam1)) };
			if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
			{
				Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutsceneGringo") };
				iParam0->f_496 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(iParam0->f_28, &Var6, "$/content/scripting/gringo/simplegringo/shakehands_link", vVar0, vVar3));
			}
			if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
			{
				SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_GRINGO(iParam0->f_496), 100.0f, false, 1092616192);
			}
			else
			{
				LOG_ERROR("PROCMISSION_PERFORM_ENDING_ANIM - Invalid procmission cutscene gringo?");
			}
			break;
	}
}

void Function_74(bool bParam0, bool bParam1) //Position: 0x5E76 / 24182
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_75(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_75(bool bParam0, vector3 vParam1) //Position: 0x5E90 / 24208
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_76(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_76(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_76(bool bParam0, vector3 vParam1) //Position: 0x5EC8 / 24264
{
	vector3 vVar0;
	
	Function_77(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_77(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_77(bool bParam0) //Position: 0x5F4B / 24395
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_78(int iParam0, bool bParam1) //Position: 0x5F5C / 24412
{
	if (Function_430(iParam0, bParam1))
	{
		Function_79(iParam0);
		return 1;
	}
	return 0;
}

void Function_79(int iParam0) //Position: 0x5F74 / 24436
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_80(int iParam0, bool bParam1) //Position: 0x5F88 / 24456
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = "";
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0->f_540);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) == 15)
			{
				bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bVar3), "procCutsceneIdx") == bParam1)
				{
					bVar2 = bVar3;
					bVar0 = GET_OBJECTSET_SIZE(iParam0->f_540) + 1;
				}
			}
		}
		bVar0++;
	}
	return bVar2;
}

int Function_81(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6003 / 24579
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_82(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_82(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x60E3 / 24803
{
	char* cVar0[32];
	
	Function_89();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_88(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_87(bParam0, 0);
	Function_86(bParam0, iParam1);
	Function_85(bParam0, iParam2);
	Function_84(bParam0, iParam3);
	if (Function_83(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_83(bool bParam0) //Position: 0x6331 / 25393
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_84(bool bParam0, bool bParam1) //Position: 0x6354 / 25428
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_85(bool bParam0, bool bParam1) //Position: 0x6377 / 25463
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_86(bool bParam0, bool bParam1) //Position: 0x639B / 25499
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_87(bool bParam0, bool bParam1) //Position: 0x63C1 / 25537
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_88(bool bParam0) //Position: 0x63E4 / 25572
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_89() //Position: 0x6402 / 25602
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

void Function_90(bool bParam0) //Position: 0x644C / 25676
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (IS_ACTOR_VALID((*bParam0 + 1088)[iVar2]))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*bParam0 + 1088)[iVar2]);
			if (IS_MOVER_FROZEN((*bParam0 + 1088)[iVar2]))
			{
				SET_MOVER_FROZEN((*bParam0 + 1088)[iVar2], 0);
			}
		}
		iVar2++;
	}
	Function_191(StackVal, StackVal, bParam0, *(bParam0 + 988));
	Function_190(bParam0, 1);
	if (!Function_531(bParam0->f_928, 8))
	{
		if (bParam0->f_980 == Global_30640[0])
		{
			bVar0 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), -2165.563f, 12.324f, 2607.706f, 0.0f, 182.189f, 0.0f);
			bVar1 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), -2161.82f, 16.449f, 2608.107f, 0.0f, 349.417f, 0.0f);
			Function_189(bParam0, 15);
		}
		else if (bParam0->f_980 == Global_30717[0])
		{
			bVar0 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), 792.785f, 78.306f, 1250.872f, 0.0f, 123.505f, 0.0f);
			bVar1 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), 793.597f, 79.173f, 1257.776f, 0.0f, 93.857f, 0.0f);
			Function_189(bParam0, 16);
		}
		else if (bParam0->f_980 == Global_30693[0])
		{
			bVar0 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), -2686.292f, 31.548f, 4253.565f, 0.0f, 308.231f, 0.0f);
			bVar1 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), -2684.374f, 31.367f, 4244.392f, 0.0f, 81.639f, 0.0f);
			Function_189(bParam0, 17);
		}
		else if (bParam0->f_980 == Global_30685[0])
		{
			bVar0 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), -4339.046f, 27.233f, 4412.788f, 0.0f, 194.885f, 0.0f);
			bVar1 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), -4340.432f, 26.887f, 4417.906f, 0.0f, 61.019f, 0.0f);
			Function_189(bParam0, 18);
		}
		else if (bParam0->f_980 == Global_30668[0])
		{
			bVar0 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), -941.504f, 90.254f, 2425.321f, 0.0f, 276.449f, 0.0f);
			bVar1 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), -935.218f, 90.201f, 2422.399f, 0.0f, 221.523f, 0.0f);
			Function_189(bParam0, 19);
		}
		else if (bParam0->f_980 == Global_30668[1])
		{
			bVar0 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), 124.45f, 73.286f, 2290.57f, 0.0f, 92.725f, 0.0f);
			bVar1 = CREATE_POINT_IN_LAYOUT(bParam0->f_916, Function_48(), 118.563f, 73.286f, 2291.014f, 0.0f, 357.567f, 0.0f);
			Function_189(bParam0, 20);
		}
		SNAP_OBJECT_TO_GROUND(bVar0, 100.0f, true, 1092616192);
		SNAP_OBJECT_TO_GROUND(bVar1, 100.0f, true, 1092616192);
		Function_187(bParam0, bParam0->f_1012, 0);
		Function_187(bParam0, (*bParam0 + 1088)[0], 1);
		Function_187(bParam0, bVar0, 2);
		Function_187(bParam0, bVar1, 3);
	}
	else
	{
		Function_187(bParam0, bParam0->f_1012, 0);
		Function_187(bParam0, (*bParam0 + 1088)[0], 1);
		Function_187(bParam0, (*bParam0 + 1088)[1], 2);
		if (bParam0->f_980 == Global_30640[0])
		{
			Function_191(bParam0, -2092.281f, 16.677f, 2606.116f);
			Function_189(bParam0, 4);
		}
		else if (bParam0->f_980 == Global_30717[0])
		{
			Function_191(bParam0, 757.028f, 78.525f, 1235.217f);
			Function_189(bParam0, 5);
		}
		else if (bParam0->f_980 == Global_30668[0])
		{
			Function_191(bParam0, -823.682f, 97.037f, 2424.659f);
			Function_189(bParam0, 7);
		}
		else if (bParam0->f_980 == Global_30693[0])
		{
			Function_191(bParam0, -2666.908f, 35.673f, 4254.63f);
			Function_189(bParam0, 6);
		}
	}
	Function_91(bParam0, bParam0->f_916, 0);
	Function_472(bParam0, 0);
	return;
}

int Function_91(int iParam0, var uParam1, bool bParam2) //Position: 0x681C / 26652
{
	bool bVar0;
	bool bVar1;
	
	switch (iParam0->f_536)
	{
		case 0x00000003:
			if (!IS_OBJECTSET_VALID(iParam0->f_540))
			{
				return 0;
			}
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			iParam0->f_500 = Function_181(uParam1, 0, bVar0, 1, 0, 0);
			break;
		
		case 0x00000002:
			if (!IS_OBJECTSET_VALID(iParam0->f_540))
			{
				return 0;
			}
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			if (!IS_OBJECT_VALID(bVar1))
			{
			}
			REFERENCE_OBJECT(bVar0);
			REFERENCE_OBJECT(bVar1);
			iParam0->f_500 = Function_176(uParam1, 0, bVar0, bVar1, 1, 0, 0);
			break;
		
		case 0x00000001:
			if (!IS_OBJECTSET_VALID(iParam0->f_540))
			{
				return 0;
			}
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
			if (!IS_OBJECT_VALID(bVar0))
			{
			}
			REFERENCE_OBJECT(bVar0);
			iParam0->f_500 = Function_173(uParam1, 0, bVar0, 1, 0, 0);
			break;
		
		case 0x00000004:
			Function_62(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_168(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000005:
			Function_62(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_163(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000006:
			Function_62(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_158(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000007:
			Function_62(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_153(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x0000000F:
			iParam0->f_500 = Function_149(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000010:
			iParam0->f_500 = Function_145(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000011:
			iParam0->f_500 = Function_141(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000012:
			iParam0->f_500 = Function_137(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000013:
			iParam0->f_500 = Function_133(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000014:
			iParam0->f_500 = Function_129(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000015:
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			iParam0->f_500 = Function_126(iParam0->f_28, 0, Global_34573, bVar0, 1, 1, 0);
			break;
		
		case 0x00000008:
			iParam0->f_500 = Function_122(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000009:
			iParam0->f_500 = Function_118(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000A:
			iParam0->f_500 = Function_114(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000B:
			iParam0->f_500 = Function_110(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000C:
			iParam0->f_500 = Function_106(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000D:
			iParam0->f_500 = Function_102(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000E:
			iParam0->f_500 = Function_98(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000000:
		default:
			LOG_ERROR("Unhandled Procmission Cutscene Type");
			break;
	}
	Function_40(iParam0, 1);
	if (bParam2 == 1)
	{
		Function_534(iParam0 + 584, 32768);
		Function_97(256);
	}
	if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
	{
		Function_92(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	}
	else
	{
		Function_92(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	}
	Function_534(iParam0 + 584, 256);
	return 1;
}

void Function_92(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x6BF4 / 27636
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
	HUD_ENABLE(0);
	Function_45();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_321();
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
			if (Function_61())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
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
				Function_77(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_48(), 2, Function_77(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_46(19, 1, 0, 0);
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
	if (iParam10 && !Function_96())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_95()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_95()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
}

void Function_93(bool bParam0) //Position: 0x6EA2 / 28322
{
	bool bVar0;
	
	if (Function_531(bParam0, 1) && Function_531(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_94(int iParam0) //Position: 0x6ED6 / 28374
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_95() //Position: 0x6EF2 / 28402
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

bool Function_96() //Position: 0x6F71 / 28529
{
	if (Function_531(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_97(bool bParam0) //Position: 0x6F8C / 28556
{
	Global_26316.f_56 = (Global_26316.f_56 || bParam0);
	return;
}

var Function_98(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6F9F / 28575
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_THI", 2, 1);
	}
	Function_99(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_99(var uParam0, char* cParam1) //Position: 0x7022 / 28706
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_101(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_100(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_100(int iParam0) //Position: 0x7087 / 28807
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 57.57088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 162.8414f, 74.79659f, 2201.986f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.047225f, 0.550466f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_101(bool bParam0) //Position: 0x70F1 / 28913
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 43.50317f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 162.698f, 74.86543f, 2201.977f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.530979f, 0.889932f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_102(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x715B / 29019
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_MAN", 2, 1);
	}
	Function_103(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_103(var uParam0, char* cParam1) //Position: 0x71DE / 29150
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_105(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_104(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_104(int iParam0) //Position: 0x7243 / 29251
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -425.0981f, 152.7598f, 1619.76f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.078849f, 1.100348f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_105(bool bParam0) //Position: 0x72AD / 29357
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 40.42704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -426.3903f, 153.0767f, 1620.322f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.173728f, 1.59284f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_106(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7317 / 29463
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_HEN", 2, 1);
	}
	Function_107(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_107(var uParam0, char* cParam1) //Position: 0x739A / 29594
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_109(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_108(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_108(int iParam0) //Position: 0x73FF / 29695
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53.59192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -825.5594f, 93.69975f, 2404.281f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.05595f, 0.472653f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_109(bool bParam0) //Position: 0x7469 / 29801
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 50.24756f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -824.426f, 95.18665f, 2404.868f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.08302f, 0.444165f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_110(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x74D3 / 29907
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_ESC", 2, 1);
	}
	Function_111(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_111(var uParam0, char* cParam1) //Position: 0x7556 / 30038
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_113(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_112(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_112(int iParam0) //Position: 0x75BB / 30139
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51.94207f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4261.643f, 20.3573f, 4463.194f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.012928f, 0.297036f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_113(bool bParam0) //Position: 0x7625 / 30245
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 19.91502f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4263.063f, 21.06406f, 4462.477f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.063559f, 0.279046f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_114(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x768F / 30351
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_CHU", 2, 1);
	}
	Function_115(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_115(var uParam0, char* cParam1) //Position: 0x7712 / 30482
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_117(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_116(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 0, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 11.0f, 2);
	return;
}

void Function_116(int iParam0) //Position: 0x7777 / 30583
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 38.18072f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2753.704f, 34.86351f, 4297.391f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.183378f, -1.228742f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_117(bool bParam0) //Position: 0x77E1 / 30689
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2749.547f, 33.27492f, 4299.523f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.013343f, -0.862829f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_118(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x784B / 30795
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_BLA", 2, 1);
	}
	Function_119(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_119(var uParam0, char* cParam1) //Position: 0x78CE / 30926
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_121(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_120(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_120(int iParam0) //Position: 0x7933 / 31027
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52.41039f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 783.2053f, 80.20029f, 1318.624f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.050953f, 1.436288f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_121(bool bParam0) //Position: 0x799D / 31133
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 46.1938f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 783.3696f, 80.22123f, 1319.231f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.436726f, 1.348244f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_122(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7A07 / 31239
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_ARM", 2, 1);
	}
	Function_123(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_123(var uParam0, char* cParam1) //Position: 0x7A8A / 31370
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_125(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_124(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_124(int iParam0) //Position: 0x7AEF / 31471
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53.82149f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2139.764f, 17.80296f, 2607.612f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.011908f, -0.292308f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_125(int iParam0) //Position: 0x7B59 / 31577
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.38674f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2140.938f, 17.70445f, 2607.843f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.564788f, -0.140291f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_126(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x7BC3 / 31683
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "mAtkDef_Bandit_End", 1, 1);
	}
	Function_127(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_127(var uParam0, var uParam1, int iParam2) //Position: 0x7C45 / 31813
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_128(&bVar0, uParam1, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 8.5f, 0);
	return;
}

void Function_128(var uParam0, bool bParam1, bool bParam2) //Position: 0x7C72 / 31858
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, -3.3f, 1.1f, 3.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.7f, 1.5f, -2.1f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.1f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_129(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7D10 / 32016
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_THI", 2, 1);
	}
	Function_130(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_130(var uParam0, char* cParam1) //Position: 0x7D90 / 32144
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_132(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_131(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_131(int iParam0) //Position: 0x7DFC / 32252
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 47.90799f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 123.7456f, 74.61844f, 2289.153f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.064519f, -3.13974f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_132(bool bParam0) //Position: 0x7E66 / 32358
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 47.90799f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 123.4807f, 75.50849f, 2289.178f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.102356f, 3.123572f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_133(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7ED0 / 32464
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_HEN", 2, 1);
	}
	Function_134(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_134(var uParam0, char* cParam1) //Position: 0x7F50 / 32592
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_136(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_135(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_135(int iParam0) //Position: 0x7FBC / 32700
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.76859f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -940.4845f, 91.59863f, 2427.075f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.028671f, 0.140625f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_136(bool bParam0) //Position: 0x8028 / 32808
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 49.76859f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -940.9657f, 91.59235f, 2426.499f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.223395f, 1.435132f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_137(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8092 / 32914
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_ESC", 2, 1);
	}
	Function_138(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_138(var uParam0, char* cParam1) //Position: 0x8112 / 33042
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_140(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_139(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_139(int iParam0) //Position: 0x817E / 33150
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -4337.654f, 28.6333f, 4413.195f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.051522f, 1.741209f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_140(bool bParam0) //Position: 0x81E8 / 33256
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -4337.393f, 28.47409f, 4413.315f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.237212f, 0.27196f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_141(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8252 / 33362
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_CHU", 2, 1);
	}
	Function_142(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_142(var uParam0, char* cParam1) //Position: 0x82D2 / 33490
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_144(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_143(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_143(int iParam0) //Position: 0x833E / 33598
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 50.83229f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2686.198f, 32.92673f, 4252.22f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.059351f, -2.488272f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_144(bool bParam0) //Position: 0x83A8 / 33704
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 50.83229f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2686.344f, 32.90821f, 4251.939f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.314003f, -1.549275f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_145(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x8412 / 33810
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_BLA", 2, 1);
	}
	Function_146(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_146(var uParam0, char* cParam1) //Position: 0x8492 / 33938
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_148(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_147(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_147(int iParam0) //Position: 0x84FE / 34046
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 792.6249f, 79.85516f, 1252.059f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.06254f, 0.304932f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_148(bool bParam0) //Position: 0x8568 / 34152
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 792.5955f, 80.12923f, 1252.088f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.114017f, -1.37546f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_149(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x85D2 / 34258
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_ARM", 2, 1);
	}
	Function_150(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_150(var uParam0, char* cParam1) //Position: 0x8652 / 34386
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_152(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_151(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_151(int iParam0) //Position: 0x86BE / 34494
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 54.45026f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2164.691f, 17.65717f, 2608.284f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.029581f, 1.729471f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_152(int iParam0) //Position: 0x8728 / 34600
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 48.26846f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2162.461f, 17.90104f, 2608.195f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.502309f, 1.032155f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_153(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x8792 / 34706
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterHenEnd", 3, 1);
	}
	Function_154(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_154(int iParam0) //Position: 0x8810 / 34832
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_157(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_156(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_155(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_155(int iParam0) //Position: 0x8879 / 34937
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -821.4233f, 94.62658f, 2416.133f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.067727f, 3.024179f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_156(int iParam0) //Position: 0x88E3 / 35043
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -822.0323f, 97.13247f, 2418.075f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.200845f, 2.875035f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_157(int iParam0) //Position: 0x894D / 35149
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.07314f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -822.0323f, 97.13247f, 2418.075f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.200845f, 2.875035f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x89B7 / 35255
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterChuEnd", 3, 1);
	}
	Function_159(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_159(int iParam0) //Position: 0x8A35 / 35381
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_162(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_161(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_160(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_160(int iParam0) //Position: 0x8A9E / 35486
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2674.524f, 32.73464f, 4254.771f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.000952f, -0.990258f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_161(int iParam0) //Position: 0x8B08 / 35592
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2676.129f, 33.07767f, 4255.418f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.413944f, -1.379618f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_162(int iParam0) //Position: 0x8B72 / 35698
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2676.129f, 33.07767f, 4255.418f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.413944f, -1.379618f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_163(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x8BDC / 35804
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterBlkEnd", 3, 1);
	}
	Function_164(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_164(int iParam0) //Position: 0x8C5A / 35930
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_167(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_166(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_165(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_165(int iParam0) //Position: 0x8CC3 / 36035
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 748.9062f, 81.73605f, 1234.963f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.257523f, -1.606308f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_166(int iParam0) //Position: 0x8D2D / 36141
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 751.9528f, 83.93945f, 1234.901f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.150277f, -1.565241f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_167(int iParam0) //Position: 0x8D97 / 36247
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.5001f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 751.9528f, 83.93945f, 1234.901f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.150277f, -1.565241f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_168(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x8E01 / 36353
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterArmEnd", 3, 1);
	}
	Function_169(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_169(int iParam0) //Position: 0x8E7F / 36479
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_172(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_171(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_170(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_170(int iParam0) //Position: 0x8EE8 / 36584
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43.12474f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2099.827f, 17.38087f, 2604.925f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.030594f, -1.801368f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_171(int iParam0) //Position: 0x8F52 / 36690
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2095.281f, 19.51133f, 2602.912f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.193957f, -2.376076f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_172(bool bParam0) //Position: 0x8FBC / 36796
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2095.281f, 19.51134f, 2602.913f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.193962f, -2.376065f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_173(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9026 / 36902
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ProcCutsceneSimple", 1, 1);
	}
	Function_174(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_174(var uParam0, int iParam1) //Position: 0x909A / 37018
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_175(&bVar0, iParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 5.0f, 4294967295);
	return;
}

void Function_175(var uParam0, bool bParam1) //Position: 0x90BA / 37050
{
	SET_CAMERASHOT_ASPECT_RATIO(*uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.3f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*uParam0, 2800.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.556153f, 1.335263f, -0.635139f, -4.660204f, -90.73022f, 2.7E-05f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.098891f, 1.118835f, -0.601317f, 0.0f, 0.0f, 0.0f, 0);
	return;
}

var Function_176(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x914F / 37199
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "locAttackEnd1", 3, 1);
	}
	Function_177(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 3.5f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_177(var uParam0, var uParam1, int iParam2) //Position: 0x91D0 / 37328
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_180(&bVar0, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_179(&bVar0, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_178(&bVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 3.0f, 2);
	return;
}

void Function_178(var uParam0, bool bParam1) //Position: 0x922D / 37421
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.984598f, 1.751382f, 3.841003f, -3.190401f, -10.46822f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.251156f, 1.526337f, -0.132944f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_179(var uParam0, bool bParam1) //Position: 0x92B2 / 37554
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.407119f, 0.716825f, 4.948927f, 0.589058f, 32.04071f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -1.210278f, 0.767547f, 0.766793f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_180(var uParam0, bool bParam1) //Position: 0x9337 / 37687
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 1.258072f, 0.525107f, 3.572455f, -5.64203f, 24.82975f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.33126f, 0.151176f, 0.136963f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

var Function_181(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x93BC / 37820
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_48(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "wagonPassengerThx", 4, 1);
	}
	Function_182(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_182(var uParam0, int iParam1) //Position: 0x943B / 37947
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_186(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_185(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_184(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_183(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 3.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 3.5f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 3, 5.0f, 3);
	return;
}

void Function_183(var uParam0, bool bParam1) //Position: 0x94B8 / 38072
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0.845357f, 3.854301f, 0.253096f, -28.59214f, 52.87982f, 0.06165f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.953756f, 2.628656f, -1.107103f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_184(var uParam0, bool bParam1) //Position: 0x9541 / 38209
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.94109f, 1.784494f, -0.938111f, 18.55518f, -86.90154f, -0.005787f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.894216f, 2.476595f, -1.048975f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_185(var uParam0, bool bParam1) //Position: 0x95CA / 38346
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2.981397f, 1.783026f, -0.065402f, -2.721607f, -95.76204f, 0.009683f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.051467f, 1.643226f, 0.240611f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_186(var uParam0, bool bParam1) //Position: 0x9653 / 38483
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -3.254722f, 1.778463f, 2.641411f, -2.721607f, -95.76204f, 0.009683f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0.221859f, 1.638663f, 2.947425f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_187(int iParam0, bool bParam1, bool bParam2) //Position: 0x96DC / 38620
{
	struct<8> Var0;
	
	Function_188(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_540))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("cutscTargets") };
		iParam0->f_540 = CREATE_OBJECTSET_IN_LAYOUT(&Var0, iParam0->f_28, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam1, iParam0->f_540);
		DECOR_SET_INT(bParam1, "procCutsceneIdx", bParam2);
	}
	else
	{
		LOG_ERROR("PROCMISSION_CUTSCENE_ADD_TARGET - Invalid target passed in");
	}
	return;
}

void Function_188(int iParam0) //Position: 0x978A / 38794
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_189(int iParam0, int iParam1) //Position: 0x97FF / 38911
{
	iParam0->f_536 = iParam1;
	return;
}

void Function_190(var uParam0, int iParam1) //Position: 0x980C / 38924
{
	uParam0->f_560 = iParam1;
	return;
}

void Function_191(int iParam0, vector3 vParam1) //Position: 0x9819 / 38937
{
	*(iParam0 + 544) = { StackVal, StackVal, vParam1 };
}

bool Function_192(int iParam0) //Position: 0x982C / 38956
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (!(GET_TASK_STATUS(Global_34573, 12) != 1 || GET_TASK_STATUS(Global_34573, 12) != 3))
			{
				if (GET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(Global_34573)) == 0.5f)
				{
					AI_ACTOR_FORCE_SPEED(GET_MOUNT(Global_34573), 5);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(GET_MOUNT(Global_34573), 0.5f);
				}
				if (Function_26(GET_MOUNT(Global_34573), 0) > 4.0f)
				{
					Function_25(GET_MOUNT(Global_34573), 0);
					TASK_CLEAR(Global_34573);
					TASK_DISMOUNT(Global_34573, 1);
				}
			}
			return 0;
		}
		if (IS_ACTOR_INSIDE_VEHICLE(Global_34573))
		{
			if (!(GET_TASK_STATUS(Global_34573, 55) != 1 || GET_TASK_STATUS(Global_34573, 55) != 3))
			{
				STOP_VEHICLE(GET_VEHICLE(Global_34573));
				TASK_CLEAR(Global_34573);
				TASK_VEHICLE_LEAVE(Global_34573);
			}
			return 0;
		}
		if (IS_ACTOR_ON_FOOT(Global_34573) && IS_ACTOR_ON_GROUND(Global_34573))
		{
			if (!Function_72(iParam0 + 1060))
			{
				TASK_CLEAR(Global_34573);
				TASK_CLEAR(iParam0->f_1012);
				if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
				{
					CLEAR_ACTOR_MAX_SPEED(GET_MOST_RECENT_MOUNT(Global_34573));
				}
				if (IS_ACTOR_VALID(GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573)))
				{
					START_VEHICLE(GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573));
				}
				Function_560(iParam0 + 1060);
				return 0;
			}
			if (Function_430(iParam0 + 1060, 0.25f))
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

void Function_193() //Position: 0x9996 / 39318
{
	bool bVar0;
	int iVar1;
	
	if (Function_531(Local_23.f_928, 8))
	{
		if (IS_ACTOR_VALID(Local_23.f_1012) && iLocal_22 != 2)
		{
			if (IS_ACTOR_VALID((*&Local_23 + 1088)[0]))
			{
				Function_69(Local_23.f_1012, &iVar1);
				TASK_GO_NEAR_COORD((*&Local_23 + 1088)[0], &iVar1, 1.0f, 1);
				TASK_PRIORITY_SET((*&Local_23 + 1088)[0], 1);
			}
			DESTROY_ACTOR(Local_23.f_1012);
		}
	}
	else
	{
		if (IS_ACTOR_VALID(Local_23.f_1012))
		{
			if (iLocal_22 == 2)
			{
				if (IS_ACTOR_VALID((*&Local_23 + 1088)[0]))
				{
					bVar0 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(false, (*&Local_23 + 1088)[0], 1.0f, 1);
					TASK_FOLLOW_ACTOR(false, (*&Local_23 + 1088)[0]);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Local_23.f_1012, bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					Function_309(Local_23.f_1012);
				}
				else
				{
					Function_22(Local_23.f_1012, 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
				}
			}
			else if (iLocal_22 == 3)
			{
				Function_24(&Local_23);
			}
			else
			{
				Function_22(Local_23.f_1012, 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
			}
		}
		if (IS_ACTOR_VALID((*&Local_23 + 1088)[0]))
		{
			RELEASE_ACTOR_AS_AMBIENT((*&Local_23 + 1088)[0]);
		}
	}
	if (iLocal_22 == 2)
	{
		Function_306(&Local_23);
	}
	else if (iLocal_22 == 3)
	{
		Function_254(&Local_23);
	}
	else if (iLocal_22 == 4)
	{
		Function_461(&Local_23);
	}
	else
	{
		LOG_ERROR("This is an unhandled cutscene status?");
	}
	Function_194(&Local_23);
	return;
}

void Function_194(bool bParam0) //Position: 0x9AF5 / 39669
{
	if (IS_BLIP_VALID(bParam0->f_36))
	{
		REMOVE_BLIP(bParam0->f_36);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj");
	}
	if (bParam0->f_532 == 5)
	{
		if (Function_531(bParam0->f_584, 32768))
		{
			Function_39(256);
		}
	}
	Function_253();
	Function_252(1);
	if (Function_531(bParam0->f_584, 32))
	{
		if (Function_250(bParam0->f_624))
		{
			switch (bParam0->f_620)
			{
				case 0x00000002:
					Function_212(bParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_209(bParam0->f_624);
					break;
				
				default:
					Function_201(bParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_195(bParam0, 0);
	}
	if (IS_VOLUME_VALID(bParam0->f_504))
	{
		DESTROY_VOLUME(bParam0->f_504);
	}
	if (IS_OBJECTSET_VALID(bParam0->f_540))
	{
		DESTROY_OBJECTSET(bParam0->f_540);
	}
	if (IS_LAYOUTREF_VALID(bParam0->f_28))
	{
		RELEASE_LAYOUT_OBJECTS(bParam0->f_28);
		DESTROY_LAYOUT(bParam0->f_28);
	}
	if (Function_531(bParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_531(bParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_195(bool bParam0, bool bParam1) //Position: 0x9C52 / 40018
{
	if (SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_200(bParam0->f_568);
		Function_198(bParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_197(bParam0->f_568);
			Function_200(bParam0->f_568);
			Function_196(bParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_198(bParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(bParam0->f_568);
		DESTROY_OBJECT(bParam0->f_568);
	}
	return;
}

void Function_196(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x9CB7 / 40119
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

void Function_197(bool bParam0) //Position: 0x9D25 / 40229
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

void Function_198(var uParam0, bool bParam1, bool bParam2) //Position: 0x9D5A / 40282
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
			if (bParam2)
			{
				if (!Function_199(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
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

bool Function_199(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9DD6 / 40406
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_200(bool bParam0) //Position: 0x9DF0 / 40432
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

void Function_201(int iParam0) //Position: 0x9E22 / 40482
{
	int iVar0;
	
	if (!Function_250(iParam0))
	{
		Function_207();
		return;
	}
	iVar0 = Function_206(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_202("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_202(char* cParam0, int iParam1) //Position: 0x9E75 / 40565
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
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_206(iParam1), Function_204(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_206(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_203(int iParam0) //Position: 0x9F99 / 40857
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

int Function_204(int iParam0) //Position: 0x9FD3 / 40915
{
	if (!Function_205(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_205(int iParam0) //Position: 0x9FF3 / 40947
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_206(int iParam0) //Position: 0xA00A / 40970
{
	if (!Function_205(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_207() //Position: 0xA025 / 40997
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
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
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_208(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_208(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA26C / 41580
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_209(int iParam0) //Position: 0xA295 / 41621
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
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_211(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_210(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_210(int iParam0) //Position: 0xA33B / 41787
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

struct<24> Function_211(char* cParam0) //Position: 0xA37A / 41850
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

void Function_212(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA5D0 / 42448
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
		Global_13172[iParam011].f_12++;
		if (Function_249())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_204(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_211(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_210(Global_6269) };
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
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_202("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_238(iParam0);
		}
		if (bParam1)
		{
			if (bParam2)
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
			Function_214(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_213(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_213(int iParam0, int iParam1) //Position: 0xA824 / 43044
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_214(bool bParam0, int iParam1) //Position: 0xA85E / 43102
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_61())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_215(bool bParam0) //Position: 0xA8A0 / 43168
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_231();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_216();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_533(&Global_63095, 1);
		Function_533(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_216() //Position: 0xA8F1 / 43249
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
	if (!Function_61())
	{
		Function_221();
		Function_220();
		Function_219();
		Function_218();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_217();
	return;
}

void Function_217() //Position: 0xA943 / 43331
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_218() //Position: 0xAA49 / 43593
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
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
	Global_83815 = fVar0;
	return;
}

void Function_219() //Position: 0xAA7C / 43644
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_220() //Position: 0xAC0A / 44042
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_221() //Position: 0xADBE / 44478
{
	Function_222(&Global_28260, 1, 0);
	return;
}

void Function_222(int iParam0, bool bParam1, int iParam2) //Position: 0xADCC / 44492
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_321();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_223(int iParam0) //Position: 0xAFBD / 44989
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

int Function_224(int iParam0, bool bParam1, bool bParam2) //Position: 0xB063 / 45155
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
		Function_60(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_59(iParam0);
	if (bParam2)
	{
		Function_47(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_225(bool bParam0) //Position: 0xB2FE / 45822
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_226() //Position: 0xB33F / 45887
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
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

struct<8> Function_227() //Position: 0xB3C8 / 46024
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

struct<8> Function_228() //Position: 0xB45F / 46175
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

void Function_229() //Position: 0xB4DE / 46302
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_230(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_224(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_230(int iParam0, bool bParam1, int iParam2) //Position: 0xB517 / 46359
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_60(iParam0, bParam1, 1);
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_47(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_231() //Position: 0xB721 / 46881
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_96())
	{
		Function_236(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_236(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_232(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_232(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_573(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

vector3 Function_232(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB7DC / 47068
{
	int iVar0;
	
	iVar0 = Function_234(uParam2, uParam3);
	if (Function_233(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_534(&Global_63095, 1);
			Function_533(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_534(&Global_63095, 2);
			Function_533(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_534(&Global_63095, 2);
		Function_533(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_23();
	return StackVal, StackVal, Function_23();
}

bool Function_233(int iParam0) //Position: 0xB8C3 / 47299
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_234(bool bParam0, bool bParam1) //Position: 0xB8D9 / 47321
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_235(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_233(bVar0) && !bParam1)
	{
		bVar0 = Function_234(bParam0, 1);
	}
	return bVar0;
}

float Function_235(vector3 vParam0, vector3 vParam3) //Position: 0xB9A0 / 47520
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_236(var uParam0, int iParam1) //Position: 0xB9BD / 47549
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_69(Global_34573, &vVar4);
	if (!Function_237(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_534(&Global_63095, 2);
	Function_533(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_573(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_237(int iParam0) //Position: 0xC1E4 / 49636
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_531(bVar0, 0x1000000) || Function_531(bVar0, 0x2000000)) || Function_531(bVar0, 0x4000000)) || !Function_531(bVar0, 0x10000000));
}

void Function_238(int iParam0) //Position: 0xC21F / 49695
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
							if (bVar0 == Global_30723[5])
							{
								Function_241(4, 18);
							}
							else if (bVar0 == Global_30693[3])
							{
								Function_241(4, 10);
							}
							else if (bVar0 == Global_30723[6])
							{
								Function_241(4, 16);
							}
							else if (bVar0 == Global_30668[3])
							{
								Function_241(4, 6);
							}
							else if (bVar0 == Global_30640[13])
							{
								Function_241(4, 3);
							}
							else if (bVar0 == Global_30693[7])
							{
								Function_241(4, 11);
							}
							else if (bVar0 == Global_30640[6])
							{
								Function_241(4, 0);
							}
							else if (bVar0 == Global_30693[10])
							{
								Function_241(4, 15);
							}
							else if (bVar0 == Global_30693[8])
							{
								Function_241(4, 14);
							}
							else if (bVar0 == Global_30640[11])
							{
								Function_241(4, 2);
							}
							else if (bVar0 == Global_30668[6])
							{
								Function_241(4, 7);
							}
							else if (bVar0 == Global_30723[3])
							{
								Function_241(4, 17);
							}
							else if (bVar0 == Global_30685[5])
							{
								Function_241(4, 8);
							}
							else if (bVar0 == Global_30693[9])
							{
								Function_241(4, 13);
							}
							else if (bVar0 == Global_30693[11])
							{
								Function_241(4, 12);
							}
							else if (bVar0 == Global_30640[7])
							{
								Function_241(4, 1);
							}
							else if (bVar0 == Global_30679[3])
							{
								Function_241(4, 5);
							}
							else if (bVar0 == Global_30693[4])
							{
								Function_241(4, 9);
							}
							else if (bVar0 == Global_30658[7])
							{
								Function_241(4, 4);
							}
							else if (bVar0 == Global_30723[4])
							{
								Function_241(4, 19);
							}
							if (StackVal == 1)
							{
								bVar0 = bVar0;
							}
							else if (StackVal == 2)
							{
								bVar0 = Global_29155[bVar010];
							}
							else
							{
								bVar0 = Global_29155[bVar010];
								bVar0 = Global_29155[bVar010];
							}
							if (bVar0 == Global_30621[0])
							{
								Function_46(363, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[1])
							{
								Function_46(364, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[2])
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
						if (bVar0 == Global_30668[2])
						{
							Function_241(2, 10);
						}
						else if (bVar0 == Global_30658[2])
						{
							Function_241(2, 11);
						}
						else if (bVar0 == Global_30640[2])
						{
							Function_241(2, 12);
						}
						else if (bVar0 == Global_30658[0])
						{
							Function_241(2, 13);
						}
						else if (bVar0 == Global_30658[3])
						{
							Function_241(2, 14);
						}
						else if (bVar0 == Global_30685[2])
						{
							Function_241(2, 15);
						}
						else if (bVar0 == Global_30685[1])
						{
							Function_241(2, 16);
						}
						else if (bVar0 == Global_30679[1])
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
					if (Global_29006 == Global_30668[0])
					{
						Function_241(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_241(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_241(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_46(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_241(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
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

int Function_239(int iParam0) //Position: 0xC6FB / 50939
{
	if (!Function_205(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 4) && 255);
}

int Function_240(int iParam0) //Position: 0xC71A / 50970
{
	if (!Function_205(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_241(int iParam0, bool bParam1) //Position: 0xC734 / 50996
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

void Function_242() //Position: 0xC79B / 51099
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_225(0));
	PLAYSTAT_INT("HC_FAME", Function_225(3));
	PLAYSTAT_INT("HC_HONOR", Function_225(1));
	return;
}

void Function_243() //Position: 0xC8F3 / 51443
{
	int iVar0;
	int iVar1;
	
	if (!Function_248(Global_6269))
	{
		return;
	}
	iVar0 = Function_225(24);
	iVar1 = Function_247(Global_6269);
	if (!Function_248(iVar0) && Function_246(iVar1) < 0)
	{
		Function_224(24, Global_6269, 0);
		Function_244(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_246(Function_247(iVar0)))
	{
		Function_224(24, Global_6269, 0);
		Function_244(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_244(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xC973 / 51571
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
		Function_245(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_245(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xCCC5 / 52421
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

int Function_246(int iParam0) //Position: 0xCD48 / 52552
{
	if (!Function_250(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_247(int iParam0) //Position: 0xCD62 / 52578
{
	if (!Function_248(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_248(int iParam0) //Position: 0xCD7C / 52604
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_249() //Position: 0xCD92 / 52626
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_250(int iParam0) //Position: 0xCDBD / 52669
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

bool Function_251(int iParam0) //Position: 0xCDE1 / 52705
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_252(int iParam0) //Position: 0xCDF6 / 52726
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
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

void Function_253() //Position: 0xCE32 / 52786
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_254(bool bParam0) //Position: 0xCE46 / 52806
{
	Function_255(bParam0, 3);
	return;
}

void Function_255(bool bParam0, int iParam1) //Position: 0xCE52 / 52818
{
	int iVar0;
	
	if (bParam0->f_620 != 0 && iParam1 != 1)
	{
		bParam0->f_620 = iParam1;
	}
	else if (bParam0->f_620 == 1)
	{
		bParam0->f_620 = iParam1;
		if (bParam0->f_488 != 4294967295)
		{
			if (bParam0->f_620 == 2)
			{
				iVar0 = Function_305(bParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_304(bParam0) != 1)
				{
					Function_281(bParam0->f_488, iVar0, 1);
				}
				if (bParam0->f_484 != 1 || bParam0->f_484 != 0)
				{
					Function_278(200, 1, 0);
				}
				else
				{
					Function_259(50, 1, 0);
				}
				if (bParam0->f_332 > 0)
				{
					Function_258(bParam0->f_332, 1);
				}
				else
				{
					Function_256(bParam0->f_332, 1);
				}
			}
			else if (bParam0->f_620 == 3)
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

int Function_256(bool bParam0, bool bParam1) //Position: 0xCF27 / 53031
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
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_225(0));
	return 1;
}

int Function_257(int iParam0, bool bParam1, int iParam2) //Position: 0xCFB7 / 53175
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
	Function_59(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_47(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_258(bool bParam0, bool bParam1) //Position: 0xD1B2 / 53682
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
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_46(597, bParam0, 0, 0);
	}
	if ((Function_225(597) + Function_225(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_259(int iParam0, bool bParam1, bool bParam2) //Position: 0xD27D / 53885
{
	int iVar0;
	bool bVar1;
	
	if (Function_277(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_249())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
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
	if (bParam1)
	{
		Function_272(3, bVar1);
		if (!bParam2)
		{
			if (!Function_271(Global_76848, 4))
			{
				Function_266(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_46(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_57(3));
	iVar0 = Function_225(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_261(4, Function_265(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_261(4, Function_265(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_261(4, Function_265(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_261(4, Function_265(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_261(4, Function_265(Global_12976.f_156), 1);
				Function_260(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
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

void Function_260(int iParam0, int iParam1) //Position: 0xD44C / 54348
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
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
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_261(int iParam0, char* cParam1, bool bParam2) //Position: 0xD6AA / 54954
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
	Function_244(iParam0, cParam1, 0, 1);
	iVar1 = Function_262();
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

int Function_262() //Position: 0xD82F / 55343
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
	Function_263();
	return 0;
}

void Function_263() //Position: 0xD8CE / 55502
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
		Function_264(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_264(int iParam0) //Position: 0xD97D / 55677
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

var Function_265(int iParam0) //Position: 0xD9DB / 55771
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

void Function_266(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xDA6A / 55914
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_268(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_267(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_267(char* cParam0, int iParam1) //Position: 0xDAD6 / 56022
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

bool Function_268(bool bParam0, var uParam1, int iParam2) //Position: 0xDB0D / 56077
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
		if (Function_270(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_269(uVar0))
		{
			case 0x00000002:
				if (!Function_271(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_269(char* cParam0) //Position: 0xDB85 / 56197
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

int Function_270(int iParam0) //Position: 0xDC26 / 56358
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

bool Function_271(var uParam0, int iParam1) //Position: 0xDC63 / 56419
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_272(int iParam0, bool bParam1) //Position: 0xDC76 / 56438
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
	iVar1 = Function_262();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_273(int iParam0, int iParam1) //Position: 0xDE13 / 56851
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

void Function_274() //Position: 0xDE54 / 56916
{
	Function_276(3, 0.0f);
	Function_275(3, 10000.0f);
	return;
}

int Function_275(int iParam0, int iParam1) //Position: 0xDE6A / 56938
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_276(int iParam0, int iParam1) //Position: 0xDEAA / 57002
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_277(int iParam0) //Position: 0xDEEA / 57066
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_278(int iParam0, bool bParam1, bool bParam2) //Position: 0xDEF9 / 57081
{
	int iVar0;
	bool bVar1;
	
	if (Function_277(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_249())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
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
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_272(1, bVar1);
			if (!bParam2)
			{
				if (!Function_271(Global_76848, 1))
				{
					Function_266(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_280(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_271(Global_76848, 2))
				{
					Function_266(Global_34573, 2, 3, 0);
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
	SET_PLAYER_CURRENT_HONOR(0, Function_57(1));
	iVar0 = Function_225(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_261(2, Function_279(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_261(2, Function_279(Global_12976.f_152), 0);
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
				Function_261(2, Function_279(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_261(2, Function_279(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_261(2, Function_279(Global_12976.f_152), 1);
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
				Function_261(2, Function_279(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_261(2, Function_279(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_261(2, Function_279(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_261(2, Function_279(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_261(2, Function_279(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_261(2, Function_279(Global_12976.f_152), 1);
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
				Function_261(2, Function_279(Global_12976.f_152), 0);
			}
			break;
	}
	Function_260(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_279(int iParam0) //Position: 0xE21A / 57882
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

int Function_280(int iParam0, bool bParam1) //Position: 0xE2BD / 58045
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
	iVar1 = Function_262();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_281(int iParam0, char* cParam1, bool bParam2) //Position: 0xE459 / 58457
{
	char* cVar0[32];
	
	if (!Function_303(3))
	{
		return;
	}
	if (Function_61())
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
			if (bParam2)
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

void Function_282(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xE575 / 58741
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_301(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_303(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_300(bParam0, 2))
	{
		Function_46(456, 1, 0, 0);
		Function_299(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_298(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_297(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_299(bParam0, 1048576);
		if (bParam4)
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
		if (StackVal && !Function_531(((((!Function_289() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_531((((Function_289() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_96())
		{
			if (!Function_271(Global_76846, 2))
			{
				Function_266(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_284();
		}
		Global_28180.f_12 = 1;
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

void Function_283(int iParam0, bool bParam1) //Position: 0xE80B / 59403
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_284() //Position: 0xE876 / 59510
{
	if (Function_301(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_288(Global_28180);
			Global_28180.f_8 = Function_285(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_288(Global_28180);
			Global_28180.f_8 = Function_285(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_285(int iParam0, int iParam1) //Position: 0xE8F1 / 59633
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_287(6, 0) || Function_287(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_286(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_287(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_286(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_286(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_286(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_286(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_287(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_286(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_286(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_286(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_286(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_286(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_286(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_286(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_287(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_286(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_287(6, 0) && Function_286(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_286(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_287(9, 0) && Function_286(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_286(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_287(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_573(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_573(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_573(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_286(int iParam0) //Position: 0xF4E2 / 62690
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_287(int iParam0, bool bParam1) //Position: 0xF4F7 / 62711
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
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_288(int iParam0) //Position: 0xF534 / 62772
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
	while (iVar1 <= Global_27774[iParam013].f_28)
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

bool Function_289() //Position: 0xF583 / 62851
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_290(bool bParam0) //Position: 0xF5B0 / 62896
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_297(bParam0, Function_294(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_297(bParam0, Function_294(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_293(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_292(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_291(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_291(int iParam0) //Position: 0xF760 / 63328
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
	while (iVar1 <= Global_27774[iParam013].f_28)
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

void Function_292(var uParam0, int iParam1) //Position: 0xF7B7 / 63415
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

var Function_293(int iParam0) //Position: 0xF7DC / 63452
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
	while (iVar1 <= Global_27774[iParam013].f_28)
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

int Function_294(bool bParam0) //Position: 0xF832 / 63538
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_295() //Position: 0xF83E / 63550
{
	return;
}

bool Function_296(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xF844 / 63556
{
	uParam0 = uParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && uParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_297(bool bParam0, int iParam1) //Position: 0xF8E8 / 63720
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

void Function_298(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xF947 / 63815
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_210(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_299(int iParam0, int iParam1) //Position: 0xF9C2 / 63938
{
	if (!Function_301(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_300(int iParam0, int iParam1) //Position: 0xFA17 / 64023
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

bool Function_301(int iParam0) //Position: 0xFA44 / 64068
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_302() //Position: 0xFA5A / 64090
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_531(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_303(int iParam0) //Position: 0xFA8A / 64138
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_304(int iParam0) //Position: 0xFAA6 / 64166
{
	return !Function_531(iParam0->f_584, 16384);
}

var Function_305(int iParam0) //Position: 0xFAB8 / 64184
{
	return iParam0->f_492;
}

void Function_306(bool bParam0) //Position: 0xFAC3 / 64195
{
	int iVar0;
	
	switch (bParam0->f_632)
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
	Function_258(Function_307(iVar0, 1, 1, 0, 0), 1);
	Function_255(bParam0, 2);
	return;
}

bool Function_307(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xFB19 / 64281
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_225(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_308(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_308(bool bParam0) //Position: 0xFC1B / 64539
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_309(bool bParam0) //Position: 0xFD0C / 64780
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

void Function_310(bool bParam0, int iParam1, int iParam2) //Position: 0xFD58 / 64856
{
	if (iParam2 == 1)
	{
		if (Function_318(bParam0, iParam1, iParam2))
		{
			Function_316(bParam0);
		}
		else if (Function_315(bParam0, iParam1))
		{
			Function_313(bParam0);
		}
		if (Function_312(bParam0, iParam1, iParam2))
		{
			Function_311(bParam0);
		}
	}
	else if (Function_318(bParam0, iParam1, 0))
	{
		Function_316(bParam0);
	}
	else if (Function_312(bParam0, iParam1, 0))
	{
		Function_311(bParam0);
	}
	else if (Function_315(bParam0, iParam1))
	{
		Function_313(bParam0);
	}
	return;
}

void Function_311(bool bParam0) //Position: 0xFDD2 / 64978
{
	char* cVar0[32];
	
	if (bParam0->f_480 <= bParam0->f_336)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, bParam0 + 336[bParam0->f_4804], 32);
		if ((*bParam0 + 388)[bParam0->f_480] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, bParam0 + 336[bParam0->f_4804], bParam0 + 404[bParam0->f_4806], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_298(bParam0 + 336[bParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		bParam0->f_480++;
	}
	return;
}

bool Function_312(bool bParam0, int iParam1, int iParam2) //Position: 0xFE6C / 65132
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_34574, *(bParam0 + 4));
	bVar3 = VDIST(Global_34574, *(bParam0 + 16));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_63096 != 1 || Global_3394 != 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_289() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!bParam0->f_480 <= bParam0->f_404)
	{
		if (STRING_LENGTH(bParam0 + 336[bParam0->f_4804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_313(bool bParam0) //Position: 0xFF0A / 65290
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_531(bParam0->f_584, 8) && bParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(bParam0 + 4)) < VDIST(Global_34574, *(bParam0 + 16)) && IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
			{
				Function_314(bParam0 + 276[bParam0->f_3284], 3.0f, 0, 2, 1, 0);
				bParam0->f_328++;
				Function_560(bParam0 + 44);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(bParam0 + 220[bParam0->f_2724]))
		{
			Function_314(bParam0 + 220[bParam0->f_2724], 3.0f, 0, 2, 1, 0);
			bParam0->f_272++;
			bParam0->f_272 = (bParam0->f_272 % 3);
			Function_560(bParam0 + 44);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_314(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFFEF / 65519
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_210(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_315(bool bParam0, int iParam1) //Position: 0x10067 / 65639
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(bParam0 + 4)) >= VDIST(Global_34574, *(bParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(bParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(bParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(bParam0 + 220[04]))
	{
		iVar0 = 0;
	}
	else if (Function_289())
	{
		iVar0 = 0;
	}
	else if (Function_430(bParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_316(bool bParam0) //Position: 0x1010A / 65802
{
	char* cVar0[32];
	
	if (bParam0->f_108 <= bParam0->f_56)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, bParam0 + 56[bParam0->f_1084], 32);
		if ((*bParam0 + 112)[bParam0->f_108] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7.5f, bParam0 + 56[bParam0->f_1084], bParam0 + 144[bParam0->f_1086], "", "", "", "", 0, (*bParam0 + 128)[bParam0->f_108], 0, 0);
		}
		else
		{
			Function_317(bParam0 + 56[bParam0->f_1084], 8.5f, (*bParam0 + 128)[bParam0->f_108], 2, 0, 0, 0, 0);
		}
		bParam0->f_108++;
	}
	return;
}

void Function_317(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x101AC / 65964
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_210(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_318(int iParam0, int iParam1, int iParam2) //Position: 0x10231 / 66097
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 56[04]))
	{
		iVar0 = 0;
	}
	else if (Function_289() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_108 <= iParam0->f_56)
	{
		if (STRING_LENGTH(iParam0 + 56[iParam0->f_1084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_319(int iParam0, bool bParam1) //Position: 0x102E8 / 66280
{
	if (SQUAD_IS_VALID(iParam0->f_60))
	{
		Function_320(iParam0->f_60, 2, GET_OBJECT_FROM_ACTOR(bParam1), 4, 1);
	}
	return;
}

int Function_320(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1030B / 66315
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar2 = SQUAD_GET_SIZE(bParam0);
		bVar1 = false;
		while (bVar1 < (iVar2 - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_82(bVar0, uParam1, uParam2, uParam3, uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(bParam0);
		return 1;
	}
	return 0;
}

bool Function_321() //Position: 0x10363 / 66403
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_322(int iParam0) //Position: 0x10378 / 66424
{
	Function_323(iParam0);
	return;
}

void Function_323(int iParam0) //Position: 0x10383 / 66435
{
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		DISBAND_ACTORSET(iParam0->f_52);
	}
	return;
}

void Function_324(int iParam0, vector3 vParam1) //Position: 0x1039B / 66459
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	if ((bLocal_386 != "" && Local_23.f_920 < 0) && iLocal_404 < 0)
	{
		if (Function_430(&Local_23 + 1172, fLocal_405) && !(Global_29007 != 3 || Global_29007 != 4))
		{
			if (Function_365(StackVal, StackVal, Global_34573, vParam1) < 150.0f || Function_531(Local_23.f_928, 16384))
			{
				if (Function_364())
				{
					vVar3 = { RAND_FLOAT_RANGE(-2.5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(40.0f, 50.0f) };
				}
				else
				{
					vVar3 = { RAND_FLOAT_RANGE(0.0f, 2.5f), 0.0f, RAND_FLOAT_RANGE(40.0f, 50.0f) };
				}
				GET_ACTOR_OFFSET_WORLD_COORDS(Global_34573, &vVar3, &vVar0);
				switch (Local_23.f_632)
				{
					case 0x00000000:
						bVar6 = RAND_INT_RANGE(2, 3);
						break;
					
					case 0x00000001:
						bVar6 = RAND_INT_RANGE(3, 4);
						break;
					
					case 0x00000002:
						bVar6 = RAND_INT_RANGE(4, 6);
						break;
					
					default:
						bVar6 = true;
						break;
				}
				Function_363(&Local_330, 3);
				Function_362(&Local_330, 2);
				Function_361(&Local_330, 1);
				Function_360(&Local_330, 0);
				Function_359(&Local_330, bVar6);
				Function_358(StackVal, StackVal, &Local_330, vVar0);
				Function_357(&Local_330, 1);
				Function_356(&Local_330, 0.5f, 15.0f, 3.0f);
				Function_355(&Local_330, 1);
				Function_354(&Local_330, 1);
				Function_353(&Local_330, 1);
				Function_352(&Local_330, 1, 4294967295);
				Function_351(&Local_330, 1);
				Function_350(&Local_330, 1, 4294967295, 0);
				Function_345(&Local_330, Global_34573);
				if (iParam0 == 1)
				{
					Function_344(&Local_330, 1);
				}
				if (Function_342(&Local_330))
				{
					iVar7 = 0;
					while (iVar7 < (iLocal_403 - 1))
					{
						Function_341(&Local_330, iLocal_387[iVar7]);
						iVar7++;
					}
					Function_534(&Local_330 + 92, 64);
					if (!Function_531(Local_23.f_928, 16384))
					{
						if (Function_531(Local_23.f_928, 8))
						{
							Function_340(&Local_23, "pm_esc_def", 1);
						}
						else
						{
							Function_340(&Local_23, "pm_esc_pro", 1);
						}
						Function_534(&Local_23 + 928, 16384);
					}
					bLocal_386 = Function_338(&Local_330);
					Function_534(&Local_23 + 928, 512);
					if (IS_SCRIPT_VALID(bLocal_386))
					{
						Function_369();
					}
				}
				else
				{
					fLocal_405 = (fLocal_405 + 3.5f);
				}
			}
		}
		else
		{
			Function_533(&Local_23 + 928, 512);
		}
	}
	else if (Function_531(Local_23.f_928, 512))
	{
		if (IS_SCRIPT_VALID(bLocal_386))
		{
			Function_332(&Local_330);
			if (SQUAD_IS_VALID(Local_330.f_60))
			{
				Function_330(&Local_23, GET_ACTOR_FACTION(Function_331(Local_330.f_60)));
				Function_533(&Local_23 + 928, 512);
			}
		}
	}
	else if (!IS_SCRIPT_VALID(bLocal_386) && !SQUAD_IS_VALID(Local_330.f_60))
	{
		bLocal_386 = "";
		iLocal_404 = (iLocal_404 - 1);
		Function_369();
		Function_560(&Local_23 + 1172);
	}
	else if (Global_29007 != 3 || Global_29007 != 4)
	{
		Function_322(&Local_330);
		Function_319(&Local_330, Function_321());
		if (!Function_531(Local_23.f_928, 1048576))
		{
			Function_326(&Local_23, "pm_esc_bflee", 0);
			Function_534(&Local_23 + 928, 1048576);
		}
	}
	else if (IS_ACTOR_VALID(Local_23.f_1012))
	{
		iVar9 = 0;
		bVar8 = false;
		while (bVar8 < (SQUAD_GET_SIZE(Local_330.f_60) - 1))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_330.f_60, bVar8)))
			{
				if (Function_325(SQUAD_GET_ACTOR_BY_INDEX(Local_330.f_60, bVar8), 0))
				{
					if (!Function_72(&Local_23 + 1036) || Function_430(&Local_23 + 1036, 15.0f))
					{
						iVar9 = 1;
						Function_560(&Local_23 + 1036);
					}
				}
			}
			bVar8++;
		}
		if (iVar9 == 1)
		{
			if (!IS_AMBIENT_SPEECH_PLAYING(Local_23.f_1012))
			{
				if (iLocal_409 <= 2)
				{
					SAY_SINGLE_LINE_CONTEXT(Local_23.f_1012, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
					iLocal_409++;
				}
				else if (iLocal_409 <= 4)
				{
					SAY_SINGLE_LINE_CONTEXT(Local_23.f_1012, 63, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
					iLocal_409++;
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Local_23.f_1012, 333, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
				}
			}
		}
	}
}

bool Function_325(bool bParam0, bool bParam1) //Position: 0x10784 / 67460
{
	int iVar0;
	
	iVar0 = 0;
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bParam0)) > 1.0f)
	{
		switch (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(bParam0)))
		{
			case 0x0000002F:
				if (bParam1)
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

int Function_326(int iParam0, bool bParam1, int iParam2) //Position: 0x1080F / 67599
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_531(iParam0->f_584, 32))
	{
		if (!Function_250(iParam0->f_624))
		{
			return 0;
		}
	}
	iVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	iVar21 = Function_329(Function_206(iParam0->f_624), Function_239(iParam0->f_624));
	iVar22 = Function_327(Function_206(iParam0->f_624), Function_239(iParam0->f_624));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(iVar21, iVar20))
	{
		ADD_TIME(&iVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(iVar21, GET_TIME_OF_DAY()))
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
			if (!IS_STRING_VALID(iParam0 + 336[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(iParam0 + 336[iVar174], bParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(iParam0 + 336[iVar174], bParam1, 16);
			if (iParam2 == 1)
			{
				(*iParam0 + 388)[iVar17] = iParam2;
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

int Function_327(int iParam0, int iParam1) //Position: 0x1096E / 67950
{
	int iVar0;
	int iVar1;
	
	if (!Function_328(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_206(iVar1) != iParam0 && Function_239(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[iVar111].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_328(int iParam0) //Position: 0x109BA / 68026
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_329(int iParam0, int iParam1) //Position: 0x109CF / 68047
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_206(iVar1) != iParam0 && Function_239(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(Global_13172[iVar111].f_36, iVar0))
			{
				iVar0 = Global_13172[iVar111].f_36;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void Function_330(var uParam0, int iParam1) //Position: 0x10A1B / 68123
{
	uParam0->f_492 = iParam1;
	return;
}

var Function_331(bool bParam0) //Position: 0x10A28 / 68136
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

void Function_332(int iParam0) //Position: 0x10A6E / 68206
{
	if (IS_OBJECT_VALID(Function_337(iParam0)))
	{
		Function_335(iParam0, 0);
		Function_333(iParam0, 0);
	}
	return;
}

int Function_333(int iParam0, bool bParam1) //Position: 0x10A8D / 68237
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_337(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			DECOR_SET_BOOL(bParam1, "catk_bdi", iParam0->f_172);
			DECOR_SET_FLOAT(bParam1, "catk_spx", iParam0->f_184);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spz");
			DECOR_SET_FLOAT(bParam1, "catk_scx", iParam0->f_196);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scz");
			DECOR_SET_BOOL(bParam1, "catk_krd", iParam0->f_176);
			DECOR_SET_BOOL(bParam1, "catk_krt", iParam0->f_180);
			DECOR_SET_OBJECT(bParam1, "catk_atv", iParam0->f_208);
			DECOR_SET_INT(bParam1, "catk_ats", iParam0->f_212);
			DECOR_SET_BOOL(bParam1, "catk_bus", iParam0->f_216);
			DECOR_SET_OBJECT(bParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(iParam0->f_60));
			DECOR_SET_INT(bParam1, "catk_wtm", iParam0->f_220);
			DECOR_SET_BOOL(bParam1, "catk_ovr", iParam0->f_160);
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_334((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(bParam1, &cVar5, (*iParam0 + 100)[bVar0]);
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

bool Function_334(bool bParam0) //Position: 0x10CC9 / 68809
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_335(int iParam0, bool bParam1) //Position: 0x10CE0 / 68832
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_336(iParam0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_337(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			iParam0->f_172 = DECOR_GET_BOOL(bParam1, "catk_bdi");
			iParam0->f_184 = DECOR_GET_FLOAT(bParam1, "catk_spx");
			(iParam0 + 184)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_spy");
			(iParam0 + 184)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_spz");
			iParam0->f_196 = DECOR_GET_FLOAT(bParam1, "catk_scx");
			(iParam0 + 196)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_scy");
			(iParam0 + 196)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_scz");
			iParam0->f_176 = DECOR_GET_BOOL(bParam1, "catk_krd");
			iParam0->f_180 = DECOR_GET_BOOL(bParam1, "catk_krt");
			iParam0->f_208 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_atv"));
			iParam0->f_212 = DECOR_GET_INT(bParam1, "catk_ats");
			iParam0->f_216 = DECOR_GET_BOOL(bParam1, "catk_bus");
			iParam0->f_60 = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_asq"));
			iParam0->f_220 = DECOR_GET_INT(bParam1, "catk_wtm");
			iParam0->f_160 = DECOR_GET_BOOL(bParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_334((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*iParam0 + 100)[bVar0] = DECOR_GET_INT(bParam1, &cVar5);
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

void Function_336(int iParam0) //Position: 0x10F11 / 69393
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&Var0), 4);
		*iParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(*iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

var Function_337(int iParam0) //Position: 0x10F7E / 69502
{
	bool bVar0;
	
	if (!IS_ITERATOR_VALID(StackVal))
	{
		return "";
	}
	bVar0 = START_OBJECT_ITERATOR(StackVal);
	return bVar0;
}

var Function_338(int iParam0) //Position: 0x10F9D / 69533
{
	int iVar0;
	
	if (!iParam0->f_172 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_339(iParam0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", iParam0, 56, 0);
	return iVar0;
}

void Function_339(int iParam0) //Position: 0x11021 / 69665
{
	int iVar0;
	int iVar1;
	
	if (Function_531(iParam0->f_92, 64))
	{
		iVar1 = 0;
		while (iVar1 <= iParam0->f_100)
		{
			if (!(*iParam0 + 100)[iVar1] != 0 && Function_334((*iParam0 + 100)[iVar1]))
			{
				iVar0++;
			}
			iVar1++;
		}
		iParam0->f_128 = iVar0;
	}
	else
	{
		iParam0->f_128 = iParam0->f_100;
	}
	return;
}

var Function_340(int iParam0, bool bParam1, int iParam2) //Position: 0x11079 / 69753
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(iParam0 + 56[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(iParam0 + 56[iVar24], bParam1, 16);
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
	if (!IS_STRING_VALID(bParam1))
	{
		iVar0 = 0;
	}
	strcpy(iParam0 + 56[iVar24], bParam1, 16);
	(*iParam0 + 112)[iVar2] = 0;
	(*iParam0 + 128)[iVar2] = iParam2;
	return iVar0;
}

int Function_341(int iParam0, bool bParam1) //Position: 0x110F2 / 69874
{
	int iVar0;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_334(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_335(iParam0, 0);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_100)
	{
		if ((*iParam0 + 100)[iVar0] != 0 || !Function_334((*iParam0 + 100)[iVar0]))
		{
			(*iParam0 + 100)[iVar0] = bParam1;
			iVar0 = iParam0->f_100;
		}
		iVar0++;
	}
	Function_333(iParam0, 0);
	return 1;
}

bool Function_342(int iParam0) //Position: 0x111C0 / 70080
{
	int iVar0;
	vector3 vVar1;
	struct<15> Var4;
	struct<11> Var19;
	
	Function_336(iParam0);
	if (iParam0->f_212 == 0)
	{
		iParam0->f_212 = 3;
		DECOR_SET_BOOL(*iParam0, "catk_bus", iParam0->f_216);
	}
	if (Function_573(StackVal, StackVal, *(iParam0 + 184)))
	{
		if (Function_573(StackVal, StackVal, *(iParam0 + 196)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_358(StackVal, StackVal, iParam0, Global_34574);
			}
			else
			{
				return 0;
			}
		}
		Function_358(StackVal, StackVal, iParam0, *(iParam0 + 196));
		if (iParam0->f_24 > 0.5f)
		{
			iParam0->f_24 = 0.5f;
		}
		if ((iParam0->f_28 - iParam0->f_24) > 6.0f)
		{
			iParam0->f_28 = (iParam0->f_24 + 6.0f);
		}
		if (iParam0->f_32 >= 0.0f)
		{
			iParam0->f_32 = 15.0f;
		}
		Function_572(&Var4, 4294967295, 5.0f, 1, 4294967295);
		Function_571(StackVal, StackVal, &Var19, 0, *(iParam0 + 196), 0.0f, iParam0->f_24, iParam0->f_28, iParam0->f_32, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_569(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1);
			vVar1 = { StackVal, StackVal, Function_569(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1) };
			if (!Function_573(StackVal, StackVal, vVar1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_573(StackVal, StackVal, vVar1))
		{
			*(iParam0 + 184) = { StackVal, StackVal, *(iParam0 + 196) };
			return 0;
		}
		*(iParam0 + 184) = { StackVal, StackVal, vVar1 };
	}
	Function_339(iParam0);
	iParam0->f_172 = 1;
	if (!Function_343(iParam0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_333(iParam0, 0);
	return 1;
}

bool Function_343(int iParam0) //Position: 0x1133F / 70463
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("ncatk_dobj"), 4);
		iParam0->f_4 = CREATE_POINT_IN_LAYOUT(*iParam0, &uVar0, *(iParam0 + 184), 0.0f, 0.0f, 0.0f);
		if (!IS_OBJECT_VALID(StackVal))
		{
			LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data object");
			return 0;
		}
	}
	if (!IS_ITERATOR_VALID(StackVal))
	{
		iParam0->f_8 = CREATE_OBJECT_ITERATOR(*iParam0);
	}
	if (!IS_ITERATOR_VALID(StackVal))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data iterator");
		return 0;
	}
	ITERATE_ON_OBJECT_TYPE(StackVal, 8);
	ITERATE_ON_PARTIAL_NAME(StackVal, "ncatk_dobj");
	PRINTSTRING("data obj =  ");
	PRINTSTRING(GET_OBJECT_NAME(START_OBJECT_ITERATOR(StackVal)));
	PRINTNL();
	return 1;
}

int Function_344(var uParam0, int iParam1) //Position: 0x114AE / 70830
{
	uParam0->f_68 = iParam1;
	return 1;
}

int Function_345(var uParam0, int iParam1) //Position: 0x114BB / 70843
{
	return Function_346(uParam0, iParam1);
}

int Function_346(var uParam0, bool bParam1) //Position: 0x114C8 / 70856
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	Function_349(uParam0);
	if (!IS_ACTOR_IN_ACTORSET(uParam0->f_52, bParam1))
	{
		DECOR_SET_BOOL(bParam1, "catk_external", true);
		ADD_ACTORSET_MEMBER(uParam0->f_52, bParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTNL();
		if (!Function_531(uParam0->f_92, 1024))
		{
			Function_347(uParam0, bParam1);
		}
	}
	return 1;
}

void Function_347(var uParam0, bool bParam1) //Position: 0x11546 / 70982
{
	var uVar0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_348(uParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("catkavol"), 4);
	bVar4 = CREATE_VOLUME_IN_LAYOUT(*uParam0, &uVar0, 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	if (IS_VOLUME_VALID(bVar4))
	{
		if (SQUAD_IS_VALID(uParam0->f_60))
		{
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar4), GET_OBJECT_FROM_ACTOR(bParam1), Function_48(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			bVar5 = false;
			while (bVar5 < (SQUAD_GET_SIZE(uParam0->f_60) - 1))
			{
				bVar6 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_60, bVar5);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar6, bVar4);
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

int Function_348(int iParam0) //Position: 0x11617 / 71191
{
	var uVar0;
	
	Function_336(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_96))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("navoidVols"), 4);
		iParam0->f_96 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, *iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(iParam0->f_96))
		{
			return 0;
		}
	}
	return 1;
}

int Function_349(int iParam0) //Position: 0x1165F / 71263
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(iParam0->f_52))
	{
		Function_336(iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("ntargetSet"), 4);
		iParam0->f_52 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(iParam0->f_52))
		{
			return 0;
		}
	}
	return 1;
}

int Function_350(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x116A5 / 71333
{
	if (iParam1 == 1)
	{
		Function_534(iParam0 + 92, 1);
	}
	else
	{
		Function_533(iParam0 + 92, 1);
	}
	if (iParam2 > 976 || iParam2 <= 1050)
	{
		iParam0->f_80 = 4294967295;
	}
	else
	{
		iParam0->f_80 = iParam2;
	}
	iParam0->f_84 = uParam3;
	return 1;
}

void Function_351(int iParam0, int iParam1) //Position: 0x116EB / 71403
{
	if (iParam1 == 1)
	{
		Function_534(iParam0 + 92, 8);
	}
	else
	{
		Function_533(iParam0 + 92, 8);
	}
	return;
}

void Function_352(int iParam0, int iParam1, int iParam2) //Position: 0x1170C / 71436
{
	if (iParam1 == 1)
	{
		Function_534(iParam0 + 92, 4);
	}
	else
	{
		Function_533(iParam0 + 92, 4);
	}
	iParam0->f_88 = iParam2;
	Function_534(iParam0 + 92, 128);
	return;
}

void Function_353(int iParam0, int iParam1) //Position: 0x1173A / 71482
{
	if (iParam1 == 0)
	{
		Function_534(iParam0 + 92, 4096);
	}
	else
	{
		Function_533(iParam0 + 92, 4096);
	}
	return;
}

void Function_354(int iParam0, int iParam1) //Position: 0x1175D / 71517
{
	if (iParam1 == 0)
	{
		Function_534(iParam0 + 92, 2048);
	}
	else
	{
		Function_533(iParam0 + 92, 2048);
	}
	return;
}

int Function_355(int iParam0, int iParam1) //Position: 0x11780 / 71552
{
	if (iParam1 == 1)
	{
		Function_534(iParam0 + 92, 512);
	}
	else
	{
		Function_533(iParam0 + 92, 512);
	}
	return 1;
}

void Function_356(var uParam0, float fParam1, float fParam2, var uParam3) //Position: 0x117A4 / 71588
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	uParam0->f_24 = fParam1;
	uParam0->f_28 = fParam2;
	uParam0->f_32 = uParam3;
}

void Function_357(int iParam0, int iParam1) //Position: 0x1180D / 71693
{
	if (iParam1 == 0)
	{
		Function_534(iParam0 + 92, 8192);
	}
	else
	{
		Function_533(iParam0 + 92, 8192);
	}
	return;
}

int Function_358(int iParam0, vector3 vParam1) //Position: 0x11830 / 71728
{
	bool bVar0;
	
	bVar0 = Function_337(iParam0);
	if (Function_573(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_335(iParam0, bVar0);
	}
	*(iParam0 + 196) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 184) = { 0.0f, 0.0f, 0.0f };
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_333(iParam0, bVar0);
	}
	return 1;
}

int Function_359(var uParam0, int iParam1) //Position: 0x1188F / 71823
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	uParam0->f_40 = iParam1;
	return 1;
}

void Function_360(int iParam0, int iParam1) //Position: 0x118AA / 71850
{
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_337(iParam0)))
	{
		Function_335(iParam0, 0);
	}
	iParam0->f_176 = iParam1;
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_337(iParam0)))
	{
		Function_333(iParam0, 0);
	}
	return;
}

void Function_361(int iParam0, int iParam1) //Position: 0x118E8 / 71912
{
	if (iParam1 == 1)
	{
		Function_534(iParam0 + 92, 256);
	}
	else
	{
		Function_533(iParam0 + 92, 256);
	}
	return;
}

int Function_362(var uParam0, int iParam1) //Position: 0x1190B / 71947
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	uParam0->f_48 = iParam1;
	return 1;
}

int Function_363(int iParam0, int iParam1) //Position: 0x11926 / 71974
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	iParam0->f_212 = iParam1;
	iParam0->f_216 = 1;
	return 1;
}

bool Function_364() //Position: 0x11946 / 72006
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

float Function_365(bool bParam0, vector3 vParam1) //Position: 0x11959 / 72025
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_366(bParam0);
		vVar0 = { StackVal, StackVal, Function_366(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_366(bool bParam0) //Position: 0x119D3 / 72147
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

vector3 Function_367(bool bParam0) //Position: 0x11A3D / 72253
{
	vector3 vVar0;
	
	Function_23();
	vVar0 = { StackVal, StackVal, Function_23() };
	if (IS_OBJECT_VALID(bParam0->f_1000))
	{
		GET_OBJECT_POSITION(bParam0->f_1000, &vVar0);
	}
	return StackVal, StackVal, vVar0;
}

void Function_368() //Position: 0x11A64 / 72292
{
	switch (Local_23.f_632)
	{
		case 0x00000000:
			iLocal_404 = RAND_INT_RANGE(5, 5);
			break;
		
		case 0x00000001:
			iLocal_404 = RAND_INT_RANGE(8, 8);
			break;
		
		case 0x00000002:
			iLocal_404 = RAND_INT_RANGE(12, 12);
			break;
		
		default:
			iLocal_404 = RAND_INT_RANGE(8, 8);
			break;
	}
	return;
}

void Function_369() //Position: 0x11AB5 / 72373
{
	fLocal_405 = RAND_FLOAT_RANGE(Local_23.f_1184, Local_23.f_1188);
	Local_23.f_1184 = (Local_23.f_1184 + 6.0f);
	Local_23.f_1188 = (Local_23.f_1188 + 6.0f);
	return;
}

int Function_370(int iParam0, bool bParam1) //Position: 0x11AE3 / 72419
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_371(Global_30750[0], bParam1);
			break;
		
		case 0x00000002:
			return Function_371(Global_30750[1], bParam1);
			break;
		
		case 0x00000004:
			return Function_371(Global_30750[2], bParam1);
			break;
		
		case 0x00000008:
			return Function_371(Global_30750[3], bParam1);
			break;
		
		case 0x00000010:
			return Function_371(Global_30750[4], bParam1);
			break;
		
		case 0x00000020:
			return Function_371(Global_30750[5], bParam1);
			break;
		
		case 0x00000040:
			return Function_371(Global_30750[6], bParam1);
			break;
		
		case 0x00000080:
			return Function_371(Global_30750[7], bParam1);
			break;
		
		case 0x00000100:
			return Function_371(Global_30750[8], bParam1);
			break;
		
		case 0x00000200:
			return Function_371(Global_30750[9], bParam1);
			break;
		
		case 0x00000400:
			return Function_371(Global_30750[10], bParam1);
			break;
		
		case 0x00000800:
			return Function_371(Global_30750[11], bParam1);
			break;
		
		case 0x00001000:
			return Function_371(Global_30750[12], bParam1);
			break;
		
		case 0x00002000:
			return Function_371(Global_30750[13], bParam1);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 4294967295;
}

int Function_371(bool bParam0, bool bParam1) //Position: 0x11C62 / 72802
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get an indexed member of an invalid popset");
		return 4294967295;
	}
	iVar2 = GET_NUM_ACTORENUMS_IN_POPULATION(bParam0);
	if (bParam1 > iVar2 && bParam1 <= 0)
	{
		bVar1 = GET_ACTORENUM_IN_POPULATION(bParam0, bParam1);
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

int Function_372(int iParam0) //Position: 0x11D0F / 72975
{
	switch (iParam0)
	{
		case 0x00000001:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]);
			break;
		
		case 0x00000002:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[1]);
			break;
		
		case 0x00000004:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[2]);
			break;
		
		case 0x00000008:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[3]);
			break;
		
		case 0x00000010:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[4]);
			break;
		
		case 0x00000020:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[5]);
			break;
		
		case 0x00000040:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[6]);
			break;
		
		case 0x00000080:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[7]);
			break;
		
		case 0x00000100:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[8]);
			break;
		
		case 0x00000200:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[9]);
			break;
		
		case 0x00000400:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[10]);
			break;
		
		case 0x00000800:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[11]);
			break;
		
		case 0x00001000:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[12]);
			break;
		
		case 0x00002000:
			return GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[13]);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 1;
}

bool Function_373() //Position: 0x11E72 / 73330
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = 1;
	fVar2 = -1.0f;
	if (!Local_23.f_1200)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (GET_ACTOR_HOGTIE_STATE(Local_23.f_1012) == 4)
			{
				if (GET_HOGTIED_MASTER(Local_23.f_1012) == GET_MOUNT(Global_34573))
				{
					Function_529(&Local_23);
				}
			}
		}
	}
	iVar0 = Function_380(&Local_23);
	if (!Function_531(Local_23.f_928, 8))
	{
		if (IS_ACTOR_VALID(Local_23.f_1012))
		{
			if (IS_ACTOR_ON_FOOT(Local_23.f_1012) && IS_ACTOR_ON_FOOT(Global_34573))
			{
				if (bLocal_386 == "")
				{
					Function_379(1);
				}
				else
				{
					Function_379(0);
				}
			}
			else if (IS_ACTOR_RIDING_AND_IN_SADDLE(Local_23.f_1012) || IS_ACTOR_RIDING_VEHICLE(Local_23.f_1012))
			{
				Function_379(0);
			}
		}
		if (Function_375(Local_23.f_1012, &uLocal_407, &fVar2, bLocal_408, 0, 0x40400000))
		{
			if (iVar0 <= 14)
			{
				iVar0 = 14;
				Function_255(&Local_23, 3);
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			iLocal_327 = 1;
			break;
		
		case 0x00000002:
			Function_472(&Local_23, 10);
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
			iLocal_22 = 3;
			iVar1 = 0;
			break;
		
		case 0x00000008:
			Function_374(&Local_23, 1);
			if (Function_531(Local_23.f_928, 8))
			{
				Function_340(&Local_23, "pm_esc_awyb", 1);
			}
			else
			{
				Function_340(&Local_23, "pm_esc_awyg", 1);
			}
			if (Function_531(Local_23.f_928, 8))
			{
				if (IS_ACTOR_VALID(Local_23.f_1012))
				{
					DESTROY_ACTOR(Local_23.f_1012);
				}
			}
			Function_562(16);
			iLocal_22 = 3;
			break;
		
		case 0x00000009:
			Function_374(&Local_23, 1);
			Function_340(&Local_23, "pm_esc_wdirfail", 1);
			Function_562(16);
			iLocal_22 = 3;
			break;
		
		case 0x0000000A:
			Function_562(4);
			iLocal_22 = 3;
			break;
		
		case 0x0000000B:
			Function_562(5);
			iLocal_22 = 3;
			break;
		
		case 0x0000000C:
			Function_562(6);
			iLocal_22 = 3;
			break;
		
		case 0x0000000D:
			Function_562(7);
			iLocal_22 = 3;
			break;
		
		case 0x0000000E:
			Function_562(8);
			iLocal_22 = 3;
			break;
		
		case 0x0000000F:
			Function_562(9);
			iLocal_22 = 3;
			break;
		
		case 0x00000010:
			Function_562(10);
			iLocal_22 = 3;
			break;
		
		case 0x00000011:
			Function_562(11);
			break;
		
		case 0x00000012:
			Function_562(3);
			iLocal_22 = 2;
			break;
		
		case 0x00000013:
			iVar1 = 0;
			break;
		
		case 0x00000014:
			iVar1 = 0;
			break;
		
		case 0x00000016:
			if (iLocal_324 < 2)
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

void Function_374(bool bParam0, bool bParam1) //Position: 0x12118 / 74008
{
	int iVar0;
	
	if (bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (bParam0->f_56 - 1))
	{
		strcpy(bParam0 + 56[iVar04], "", 16);
		(*bParam0 + 112)[iVar0] = 0;
		iVar0++;
	}
	bParam0->f_108 = 0;
	return;
}

bool Function_375(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x12161 / 74081
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_378(bParam0, Global_34573);
		if (!Function_531(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_376(bParam0);
				return 1;
			}
		}
		if (!Function_531(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_376(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_376(bParam0);
				return 1;
			}
		}
		if (!Function_531(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_376(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_376(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_531(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_376(bParam0);
				return 1;
			}
		}
		if (!Function_531(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_376(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_376(bool bParam0) //Position: 0x122F8 / 74488
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_377(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_377(bool bParam0) //Position: 0x1232C / 74540
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

float Function_378(bool bParam0, bool bParam1) //Position: 0x12343 / 74563
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

void Function_379(int iParam0) //Position: 0x12434 / 74804
{
	if (iParam0 == 1)
	{
		if (Function_531(bLocal_408, 4))
		{
			Function_533(&bLocal_408, 4);
		}
		if (Function_531(bLocal_408, 2))
		{
			Function_533(&bLocal_408, 2);
		}
	}
	else
	{
		if (!Function_531(bLocal_408, 4))
		{
			Function_534(&bLocal_408, 4);
		}
		if (!Function_531(bLocal_408, 2))
		{
			Function_534(&bLocal_408, 2);
		}
	}
	return;
}

int Function_380(bool bParam0) //Position: 0x12489 / 74889
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	int iVar16;
	bool bVar17;
	int iVar18;
	
	iVar1 = 0;
	iVar2 = 0;
	iVar16 = 0;
	if (!Function_531(bParam0->f_928, 64))
	{
		LOG_ERROR("Cannot update escort without ESCORT_INIT_ESCORT being properly called");
		iVar1 = 19;
		return iVar1;
	}
	if (!IS_LAYOUTREF_VALID(bParam0->f_916))
	{
		SCRIPT_BREAKPOINT("Invalid layout for escort traveler, tell Ben");
		iVar1 = 19;
		return iVar1;
	}
	switch (Function_412(bParam0))
	{
		case 0x00000002:
			Function_255(bParam0, 2);
			break;
		
		case 0x00000003:
			Function_255(bParam0, 3);
			break;
		
		case 0x00000004:
			Function_255(bParam0, 4);
			break;
		
		case 0x00000001:
			break;
	}
	switch (Function_11(bParam0))
	{
		case 0x00000004:
			if (iVar1 <= 6)
			{
				iVar1 = 6;
			}
			break;
		
		case 0x00000002:
			if (iVar1 <= 17)
			{
				iVar1 = 17;
			}
			break;
		
		case 0x00000003:
			if (iVar1 <= 7)
			{
				iVar1 = 7;
			}
			break;
	}
	Function_472(bParam0, 600);
	if (Function_531(bParam0->f_928, 2048) && Function_531(bParam0->f_928, 4096))
	{
		bVar17 = false;
		while (bVar17 < 1)
		{
			if ((*bParam0 + 1152)[bVar17] == 1)
			{
				if (!IS_ACTOR_VALID((*bParam0 + 1088)[bVar17]))
				{
					if (iVar1 <= 21)
					{
						iVar1 = 21;
						Function_255(bParam0, 3);
					}
				}
				else if (IS_ACTOR_DEAD((*bParam0 + 1088)[bVar17]))
				{
					if (iVar1 <= 11)
					{
						if (GET_LAST_ATTACKER((*bParam0 + 1088)[bVar17]) == Global_34573)
						{
							Function_534(bParam0 + 928, 262144);
						}
						iVar1 = 11;
						Function_255(bParam0, 3);
					}
				}
				else if (GET_LAST_ATTACKER((*bParam0 + 1088)[bVar17]) != Global_34573 && !Function_531(bParam0->f_928, 8))
				{
					if (iVar1 <= 10)
					{
						iVar1 = 10;
						Function_255(bParam0, 3);
					}
				}
			}
			bVar17++;
		}
	}
	if (IS_OBJECTSET_VALID(bParam0->f_1164))
	{
		bVar17 = false;
		while (bVar17 < (GET_OBJECTSET_SIZE(bParam0->f_1164) - 1))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar17, bParam0->f_1164));
			if (IS_ACTOR_VALID(bVar3))
			{
				iVar18 = 0;
				if (IS_ACTOR_DEAD(bVar3))
				{
					if (iVar1 <= 13)
					{
						iVar1 = 13;
						iVar18 = 1;
					}
				}
				else if (GET_LAST_ATTACKER(bVar3) == Global_34573)
				{
					if (!Function_411(bVar3) != 0)
					{
						if (iVar1 <= 12)
						{
							iVar1 = 12;
							iVar18 = 1;
						}
					}
				}
				else if (Function_378(bParam0->f_1012, bVar3) < 200.0f)
				{
					REMOVE_OBJECT_FROM_OBJECTSET(bVar3, bParam0->f_1164);
					RELEASE_ACTOR(bVar3);
				}
				if (iVar18 == 1)
				{
					Function_255(bParam0, 3);
					Function_410(bParam0, Function_411(bVar3));
				}
			}
			bVar17++;
		}
	}
	if (Function_531(bParam0->f_928, 32))
	{
		if (!IS_ACTOR_VALID(bParam0->f_1012))
		{
			if (iVar1 <= 22)
			{
				iVar1 = 22;
				Function_255(bParam0, 3);
			}
		}
		else if (IS_ACTOR_DEAD(bParam0->f_1012))
		{
			if (iVar1 <= 16)
			{
				if (GET_LAST_ATTACKER(bParam0->f_1012) == Global_34573)
				{
					Function_534(bParam0 + 928, 262144);
				}
				iVar1 = 16;
				Function_255(bParam0, 3);
			}
		}
	}
	if (IS_ACTOR_VALID(bParam0->f_1012) && IS_ACTOR_ALIVE(bParam0->f_1012))
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar7);
		GET_POSITION(bParam0->f_1012, &vVar10);
		iVar0 = Function_409(bParam0->f_1012);
		if (VDIST(vVar7, vVar10) < 100.0f)
		{
			if (iVar1 <= 8)
			{
				iVar1 = 8;
				TASK_CLEAR(bParam0->f_1012);
				Function_255(bParam0, 3);
			}
		}
		if (Function_408(bParam0) == 1)
		{
			if (Function_531(bParam0->f_928, 65536))
			{
				if (Function_407(StackVal, StackVal, bParam0, vVar10))
				{
					Function_405(bParam0, 1);
					Function_27(bParam0, 1, 0);
					Function_533(bParam0 + 928, 65536);
				}
			}
			else if (!Function_531(bParam0->f_928, 131072))
			{
				if (VDIST(Global_34574, vVar10) < 25.0f)
				{
					Function_405(bParam0, 0);
					Function_27(bParam0, 0, 1);
					Function_534(bParam0 + 928, 65536);
				}
			}
			if (!Function_531(bParam0->f_928, 8))
			{
				if (Function_531(bParam0->f_928, 524288))
				{
					if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
					{
						Function_405(bParam0, 1);
						Function_27(bParam0, 1, 0);
						Function_533(bParam0 + 928, 524288);
					}
				}
				else if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(GET_VEHICLE(Global_34573), false) != Global_34573 || (GET_ACTOR_IN_VEHICLE_SEAT(GET_VEHICLE(Global_34573), true) != Global_34573 && !IS_SEAT_OCCUPIED(GET_VEHICLE(Global_34573), false)))
					{
					}
					else
					{
						Function_405(bParam0, 0);
						Function_27(bParam0, 0, 1);
						Function_534(bParam0 + 928, 524288);
					}
				}
			}
		}
		if (IS_ACTOR_VALID(bParam0->f_1012))
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (bParam0->f_628 == 1)
					{
						if (!IS_ACTOR_VALID(GET_MOUNT(bParam0->f_1012)))
						{
							TASK_CLEAR(bParam0->f_1012);
							TASK_FACE_ACTOR(bParam0->f_1012, Global_34573, 1, 3212836864);
							TASK_PRIORITY_SET(bParam0->f_1012, 0);
							SET_ACTOR_FACE_STYLE(bParam0->f_1012, 0);
						}
					}
					else if (bParam0->f_628 == 0)
					{
						HOGTIE_ACTOR(bParam0->f_1012);
					}
					Function_404(bParam0->f_1012, 1);
					break;
				
				case 0x00000001:
					if (!Function_531(bParam0->f_928, 128))
					{
						Function_397(bParam0);
					}
					if (IS_ACTOR_VALID(bParam0->f_1012))
					{
						if (Function_531(bParam0->f_928, 8))
						{
							MEMORY_CONSIDER_AS(bParam0->f_1012, Global_34573, 2);
						}
						else
						{
							MEMORY_CONSIDER_AS(bParam0->f_1012, Global_34573, 5);
						}
						MEMORY_IDENTIFY(bParam0->f_1012, Global_34573);
						MEMORY_REPORT_POSITION_AUTO(bParam0->f_1012, Global_34573, 1);
						SET_ACTOR_CAN_BE_HARDLOCKED(bParam0->f_1012, 0);
						SET_ACTOR_UPDATE_PRIORITY(bParam0->f_1012, false);
						SET_ALLOW_EXECUTE(bParam0->f_1012, 0);
					}
					if (iVar1 <= 1)
					{
						iVar1 = 1;
					}
					if (Function_531(bParam0->f_928, 8))
					{
						Function_404(bParam0->f_1012, 3);
					}
					else
					{
						Function_404(bParam0->f_1012, 2);
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_HOGTIED(bParam0->f_1012))
					{
						if (!Function_531(bParam0->f_928, 131072))
						{
							if (IS_OBJECTSET_VALID(bParam0->f_1164))
							{
								bVar17 = false;
								while (bVar17 < (GET_OBJECTSET_SIZE(bParam0->f_1164) - 1))
								{
									bVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar17, bParam0->f_1164));
									if (IS_ACTOR_VALID(bVar3))
									{
										if (Function_411(bVar3) == 3)
										{
											if (MEMORY_GET_IS_VISIBLE(bVar3, Global_34573))
											{
												TASK_KILL_CHAR(bVar3, Global_34573);
											}
										}
									}
									bVar17++;
								}
							}
							TASK_CLEAR(bParam0->f_1012);
							TASK_FLEE_ACTOR(bParam0->f_1012, Global_34573, -1.0f, -1.0f, 0, 0, 0);
							TASK_PRIORITY_SET(bParam0->f_1012, 1);
							Function_405(bParam0, 0);
							Function_27(bParam0, 0, 1);
							Function_534(bParam0 + 928, 131072);
						}
						else if (Function_531(bParam0->f_928, 32768))
						{
							if (VDIST(Global_34574, vVar10) > 5.0f)
							{
								Function_533(bParam0 + 928, 32768);
							}
						}
						else if (VDIST(Global_34574, vVar10) < (25.0f * 2.0f))
						{
							Function_374(bParam0, 1);
							Function_340(bParam0, "pm_esc_escape", 1);
							Function_534(bParam0 + 928, 32768);
						}
					}
					else if (Function_531(bParam0->f_928, 131072))
					{
						TASK_CLEAR(bParam0->f_1012);
						Function_405(bParam0, 0);
						Function_533(bParam0 + 928, 131072);
						Function_534(bParam0 + 928, 65536);
					}
					break;
				
				case 0x00000002:
					if (Function_531(bParam0->f_928, 256))
					{
						if (Function_396(&(Global_29008[bParam0->f_980]), 16))
						{
							Function_533(bParam0 + 928, 256);
						}
					}
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
					{
						bVar3 = GET_MOUNT(Global_34573);
						if (IS_ACTOR_VALID(bVar3))
						{
							if (IS_ACTOR_ALIVE(bVar3))
							{
								if (IS_ACTOR_HORSE(bVar3))
								{
									if (!GET_MOUNT(bParam0->f_1012) != bVar3)
									{
										if (!(GET_TASK_STATUS(bParam0->f_1012, 11) != 1 || GET_TASK_STATUS(bParam0->f_1012, 11) != 3))
										{
											TASK_CLEAR(bParam0->f_1012);
											TASK_MOUNT(bParam0->f_1012, bVar3, 0, 1, 2, 2147483647);
											TASK_PRIORITY_SET(bParam0->f_1012, 1);
										}
									}
									else if (GET_TASK_STATUS(bParam0->f_1012, 11) == 0)
									{
										TASK_CLEAR(bParam0->f_1012);
										SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0->f_1012, 0);
									}
								}
								else if (IS_ACTOR_MULE(GET_MOUNT(Global_34573)))
								{
								}
							}
						}
					}
					else if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
					{
						bVar3 = GET_VEHICLE(Global_34573);
						if (IS_ACTOR_VALID(bVar3))
						{
							if (!GET_ACTOR_IN_VEHICLE_SEAT(bVar3, false) != Global_34573)
							{
							}
							else if (!GET_VEHICLE(bParam0->f_1012) != bVar3)
							{
								if (GET_NUM_AVAILABLE_SEATS(bVar3) >= 0)
								{
									if (!IS_SEAT_OCCUPIED(bVar3, true))
									{
										if (!(GET_TASK_STATUS(bParam0->f_1012, 53) != 1 || GET_TASK_STATUS(bParam0->f_1012, 53) != 3))
										{
											TASK_CLEAR(bParam0->f_1012);
											TASK_VEHICLE_ENTER(bParam0->f_1012, bVar3, 2, 4);
											TASK_PRIORITY_SET(bParam0->f_1012, 1);
											SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0->f_1012, 0);
										}
									}
								}
							}
						}
					}
					else if (IS_ACTOR_RIDING_VEHICLE(bParam0->f_1012))
					{
						if (!(GET_TASK_STATUS(bParam0->f_1012, 55) != 1 || GET_TASK_STATUS(bParam0->f_1012, 55) != 3))
						{
							TASK_CLEAR(bParam0->f_1012);
							TASK_VEHICLE_LEAVE(bParam0->f_1012);
							TASK_PRIORITY_SET(bParam0->f_1012, 1);
						}
					}
					else if (!(GET_TASK_STATUS(bParam0->f_1012, 7) != 1 || GET_TASK_STATUS(bParam0->f_1012, 7) != 3))
					{
						TASK_CLEAR(bParam0->f_1012);
						TASK_FOLLOW_ACTOR(bParam0->f_1012, Global_34573);
						TASK_PRIORITY_SET(bParam0->f_1012, 1);
						SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0->f_1012, 1);
					}
					GET_ACTOR_VELOCITY(Global_34573, &vVar4);
					if (!VMAG(vVar4) > 0.5f)
					{
						Function_560(bParam0 + 1048);
					}
					if (!Function_531(bParam0->f_928, 65536))
					{
						GET_OBJECT_POSITION(bParam0->f_1000, &vVar4);
						vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar7, vVar4, StackVal) };
						Function_367(bParam0);
						if (VDIST(Global_34574, Function_367(bParam0)) > (bParam0->f_1008 + 175.0f))
						{
							Function_560(bParam0 + 1072);
							bParam0->f_1084 = 0;
						}
						else if (Function_430(bParam0 + 1072, 7.0f))
						{
							if (bParam0->f_1084 > 2)
							{
								Function_24(bParam0);
								Function_255(bParam0, 3);
								return 9;
							}
							Function_374(bParam0, 1);
							Function_340(bParam0, "pm_esc_wdir", 1);
							iVar2 = 4;
							Function_560(bParam0 + 1072);
							bParam0->f_1084++;
						}
						if (iVar2 == 0)
						{
							if (VMAG(vVar13) < 300.0f)
							{
								iVar2 = 3;
							}
							else if (VMAG(vVar13) < 150.0f)
							{
								iVar2 = 2;
							}
							else if (VMAG(vVar13) < 30.0f)
							{
								iVar2 = 1;
							}
							else
							{
								iVar2 = 0;
							}
						}
					}
					if (Function_409(bParam0->f_1012) >= 1)
					{
						if (Function_430(bParam0 + 1048, 15.0f))
						{
							Function_560(bParam0 + 1048);
							Function_560(bParam0 + 1024);
						}
						else if (Function_430(bParam0 + 1024, 14.0f) || iVar2 != 4)
						{
							if (!IS_AMBIENT_SPEECH_PLAYING(bParam0->f_1012))
							{
								Function_560(bParam0 + 1048);
								Function_560(bParam0 + 1024);
								if (Function_531(bParam0->f_928, 8192))
								{
									Function_533(bParam0 + 928, 8192);
									switch (iVar2)
									{
										case 0x00000004:
											SAY_SINGLE_LINE_CONTEXT(bParam0->f_1012, 135, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
											break;
										
										case 0x00000001:
											SAY_SINGLE_LINE_CONTEXT(bParam0->f_1012, 133, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
											break;
										
										case 0x00000002:
											SAY_SINGLE_LINE_CONTEXT(bParam0->f_1012, 136, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
											break;
										
										case 0x00000003:
											SAY_SINGLE_LINE_CONTEXT(bParam0->f_1012, 134, Global_34573, 1, 0, 1, 4294967295, 4294967295, 0, 1);
											break;
										
										case 0x00000000:
										default:
											break;
									}
								}
								else
								{
									Function_534(bParam0 + 928, 8192);
								}
							}
						}
					}
					break;
				
				case 0x00000006:
					break;
				}
		}
		if (Function_531(bParam0->f_928, 1024) && !Function_531(bParam0->f_928, 2048))
		{
			if (Function_409(bParam0->f_1012) >= 1)
			{
				if (Function_393(bParam0))
				{
				}
			}
		}
		if (Function_531(bParam0->f_928, 2048))
		{
			GET_OBJECT_POSITION(bParam0->f_1000, &vVar4);
			if (VDIST(Global_34574, vVar4) > 100.0f && !Function_531(bParam0->f_928, 4096))
			{
				Function_392(bParam0);
			}
			iVar16 = Function_387(bParam0, 0);
		}
		if (iVar16 == 1)
		{
			if (!IS_ACTOR_VALID(GET_HOGTIED_MASTER(bParam0->f_1012)) && !IS_ACTOR_VALID(GET_MOUNT(bParam0->f_1012)))
			{
				Function_386((*bParam0 + 1088)[0]);
			}
			DECOR_SET_BOOL(bParam0->f_1000, "escort_reached", true);
			if (iVar1 <= 18)
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iVar1 = 18;
			}
		}
	}
	if (Function_33(bParam0))
	{
		Function_310(bParam0, 0, 1);
	}
	else
	{
		Function_381(StackVal, StackVal, bParam0, Global_34574, 1, bParam0->f_972, 0x42c80000);
	}
	return iVar1;
}

var Function_381(bool bParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6) //Position: 0x130D4 / 78036
{
	vector3 vVar0;
	
	Function_385(bParam0);
	Function_382(bParam0);
	Function_310(bParam0, iParam4, 0);
	if (IS_OBJECT_VALID(*bParam0))
	{
		Function_515(*bParam0);
		vVar0 = { StackVal, StackVal, Function_515(*bParam0) };
		if (!IS_BLIP_VALID(bParam0->f_36))
		{
			if (WOULD_ACTOR_BE_VISIBLE(false, &vVar0, 3212836864) || VDIST(vParam1, *(bParam0 + 4)) > fParam5)
			{
				bParam0->f_32 = 1;
			}
		}
	}
	if (VDIST(vParam1, *(bParam0 + 4)) < fParam6)
	{
		bParam0->f_32 = 0;
	}
	else if ((!IS_BLIP_VALID(bParam0->f_36) && bParam0->f_32 != 0) && IS_OBJECT_VALID(*bParam0))
	{
		bParam0->f_36 = ADD_BLIP_FOR_OBJECT(*bParam0, bParam0->f_40, 0f, 2, 0);
	}
	if (!Function_531(bParam0->f_584, 4096))
	{
		if (!bParam0->f_40 != 4294967295)
		{
			if ((!IS_BLIP_VALID(bParam0->f_36) && bParam0->f_32 != 1) && IS_OBJECT_VALID(*bParam0))
			{
				bParam0->f_36 = ADD_BLIP_FOR_OBJECT(*bParam0, bParam0->f_40, 0f, 2, 0);
				SET_BLIP_BLINK(bParam0->f_36, 1, 0, 5f);
			}
		}
		if (bParam0->f_32 != 0 && IS_BLIP_VALID(bParam0->f_36))
		{
			REMOVE_BLIP(bParam0->f_36);
		}
	}
	if (bParam0->f_32 != 1 && SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_195(bParam0, 1);
	}
	return bParam0->f_32;
}

void Function_382(int iParam0) //Position: 0x131FA / 78330
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	if (SQUAD_IS_VALID(iParam0->f_568) && Function_430(iParam0 + 572, 7.0f))
	{
		Function_384(iParam0);
		vVar0 = { StackVal, StackVal, Function_384(iParam0) };
		if (Function_573(StackVal, StackVal, vVar0))
		{
			bVar13 = false;
			while (bVar13 < (SQUAD_GET_SIZE(iParam0->f_568) - 1))
			{
				bVar12 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_568, bVar13);
				vVar9 = { 0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 6.0f) };
				ROTATE_VECTOR_XZ(&vVar9, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar0, StackVal) };
				FIND_GROUND_INTERSECTION(&vVar3, 100.0f, &vVar3, &uVar6);
				TASK_BIRD_LAND_AT_COORD(bVar12, &vVar3);
				bVar13++;
			}
			Function_383(iParam0->f_568, 1);
			Function_560(iParam0 + 572);
		}
		else
		{
			Function_195(iParam0, 1);
		}
	}
	return;
}

void Function_383(bool bParam0, int iParam1) //Position: 0x132A6 / 78502
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

vector3 Function_384(int iParam0) //Position: 0x132E1 / 78561
{
	return StackVal, StackVal, *(iParam0 + 4);
}

void Function_385(int iParam0) //Position: 0x132ED / 78573
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

void Function_386(bool bParam0) //Position: 0x132F9 / 78585
{
	if (IS_ACTOR_VALID(bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 0);
		TASK_CLEAR(bParam0);
	}
	return;
}

int Function_387(int iParam0, bool bParam1) //Position: 0x13312 / 78610
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (!IS_ACTOR_VALID(iParam0->f_1012))
	{
		return 0;
	}
	if (Function_409(iParam0->f_1012) >= 1)
	{
		bVar0 = DECOR_GET_INT(iParam0->f_1000, "escort_destType");
		if (bParam1 == 1)
		{
			if (IS_ACTOR_VALID(GET_MOUNT(iParam0->f_1012)))
			{
				return 0;
			}
		}
		switch (bVar0)
		{
			case 0x00000001:
			case 0x00000003:
				if (IS_OBJECT_VALID(iParam0->f_1004))
				{
					if (Function_531(iParam0->f_928, 8))
					{
						if (IS_ACTOR_VALID(iParam0->f_1012) && IS_ACTOR_VALID((*iParam0 + 1088)[0]))
						{
							if (IS_ACTOR_ON_FOOT(Global_34573))
							{
								fVar1 = 3.5f;
							}
							else if (Function_26(GET_MOUNT(Global_34573), 0) > 2.0f)
							{
								fVar1 = 3.5f;
							}
							else if (Function_26(GET_MOUNT(Global_34573), 0) > 6.0f)
							{
								fVar1 = 3.0f;
							}
							else if (Function_26(GET_MOUNT(Global_34573), 0) > 10.0f)
							{
								fVar1 = 4.0f;
							}
							else if (Function_26(GET_MOUNT(Global_34573), 0) > 14.0f)
							{
								fVar1 = 8.0f;
							}
							else if (Function_26(GET_MOUNT(Global_34573), 0) > 18.0f)
							{
								fVar1 = 10.0f;
							}
							else
							{
								fVar1 = 16.0f;
							}
							if (Function_390(Global_34573, iParam0->f_1004) > fVar1)
							{
								SET_PLAYER_CONTROL(0, 0, 0, 0);
								if (IS_PLAYER_DEADEYE(0))
								{
									CANCEL_DEADEYE();
									CANCEL_TIME_WARP(1);
								}
								Function_31(iParam0->f_1004);
								Function_389(iParam0, 0);
								bVar2 = true;
							}
						}
					}
					else if (Function_388(iParam0->f_1004, 0, 1, 0, 0, 0) == 1)
					{
						Function_31(iParam0->f_1004);
						Function_389(iParam0, 0);
						bVar2 = true;
					}
				}
				break;
			
			case 0x00000002:
				if (Function_531(iParam0->f_928, 2048))
				{
					if (IS_OBJECT_VALID(iParam0->f_1004))
					{
						if (Function_388(iParam0->f_1004, 0, 1, 0, 0, 0) == 1)
						{
							Function_389(iParam0, 0);
							bVar2 = true;
						}
					}
				}
				break;
			
			case 0x00000004:
				if (DECOR_GET_BOOL(iParam0->f_1000, "escort_stayout") == 1)
				{
					if (!IS_ACTOR_IN_VOLUME(Global_34573, iParam0->f_984))
					{
						bVar2 = true;
					}
				}
				else if (IS_OBJECT_VALID(iParam0->f_1004))
				{
					if (IS_OBJECT_VALID(iParam0->f_1004))
					{
						if (Function_388(iParam0->f_1004, 0, 1, 0, 0, 0) == 1)
						{
							Function_389(iParam0, 0);
							bVar2 = true;
						}
					}
				}
				else if (IS_ACTOR_IN_VOLUME(Global_34573, iParam0->f_984))
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

int Function_388(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1358C / 79244
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_25(bVar1, bParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_26(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_26(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_65(&uVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_65(&uVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void Function_389(int iParam0, int iParam1) //Position: 0x1379E / 79774
{
	if (iParam1 <= 0)
	{
		iParam0->f_932 = 0;
	}
	else if (iParam1 <= iParam0->f_932)
	{
		iParam0->f_932 = iParam1;
	}
	return;
}

float Function_390(bool bParam0, bool bParam1) //Position: 0x137C4 / 79812
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_366(bParam0);
			vVar0 = { StackVal, StackVal, Function_366(bParam0) };
			Function_391(bParam1);
			vVar3 = { StackVal, StackVal, Function_391(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_391(bool bParam0) //Position: 0x13864 / 79972
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

int Function_392(int iParam0) //Position: 0x138D0 / 80080
{
	int iVar0;
	
	if (Function_531(iParam0->f_928, 8))
	{
		if (iParam0->f_980 == Global_30640[0])
		{
			*(iParam0 + 1112[03]) = { -2097.577f, 16.449f, 2606.162f };
			*(iParam0 + 1112[13]) = { -2094.824f, 16.449f, 2609.479f };
		}
		else if (iParam0->f_980 == Global_30717[0])
		{
			*(iParam0 + 1112[03]) = { 755.386f, 78.525f, 1234.835f };
			*(iParam0 + 1112[13]) = { 755.883f, 78.525f, 1231.911f };
		}
		else if (iParam0->f_980 == Global_30693[0])
		{
			*(iParam0 + 1112[03]) = { -2673.739f, 31.431f, 4253.147f };
			*(iParam0 + 1112[13]) = { -2667.778f, 31.387f, 4253.858f };
		}
		else if (iParam0->f_980 == Global_30668[0])
		{
			*(iParam0 + 1112[03]) = { -821.297f, 93.361f, 2419.951f };
			*(iParam0 + 1112[13]) = { -819.546f, 93.365f, 2421.278f };
		}
	}
	else if (iParam0->f_980 == Global_30640[0])
	{
		*(iParam0 + 1112[03]) = { -2166.994f, 16.849f, 2604.392f };
	}
	else if (iParam0->f_980 == Global_30717[0])
	{
		*(iParam0 + 1112[03]) = { 847.9f, 78.455f, 1247.044f };
	}
	else if (iParam0->f_980 == Global_30693[0])
	{
		*(iParam0 + 1112[03]) = { -2683.038f, 31.548f, 4253.351f };
	}
	else if (iParam0->f_980 == Global_30685[0])
	{
		*(iParam0 + 1112[03]) = { -4337.184f, 27.212f, 4410.499f };
	}
	else if (iParam0->f_980 == Global_30668[0])
	{
		*(iParam0 + 1112[03]) = { -944.492f, 90.313f, 2426.561f };
	}
	else if (iParam0->f_980 == Global_30668[1])
	{
		*(iParam0 + 1112[03]) = { 129.229f, 73.7f, 2289.391f };
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (IS_ACTOR_VALID((*iParam0 + 1088)[iVar0]))
		{
			SET_OBJECT_POSITION((*iParam0 + 1088)[iVar0], *(iParam0 + 1112[iVar03]));
			Function_23();
			(*iParam0 + 1140)[1] = CREATE_VOLUME_IN_LAYOUT(iParam0->f_916, Function_48(), 3, *(iParam0 + 1112[iVar03]), Function_23(), 4.0f, 4.0f, 4.0f);
			SET_ACTOR_STAY_WITHIN_VOLUME((*iParam0 + 1088)[iVar0], (*iParam0 + 1140)[iVar0], 1, 2);
			if (IS_MOVER_FROZEN((*iParam0 + 1088)[iVar0]))
			{
				SET_MOVER_FROZEN((*iParam0 + 1088)[iVar0], 0);
			}
			AI_GOAL_LOOK_CLEAR((*iParam0 + 1088)[iVar0]);
			TASK_FACE_ACTOR((*iParam0 + 1088)[iVar0], Global_34573, 1, 3212836864);
			TASK_PRIORITY_SET((*iParam0 + 1088)[iVar0], 0);
		}
		iVar0++;
	}
	Function_534(iParam0 + 928, 4096);
	return 1;
}

bool Function_393(int iParam0) //Position: 0x13BB3 / 80819
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4[2];
	struct<8> Var11;
	int iVar19;
	int iVar20;
	int iVar21;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_916))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(iParam0->f_1000))
	{
		return 0;
	}
	GET_OBJECT_POSITION(iParam0->f_1000, &vVar1);
	vVar4[03] = { -1.0f, -5.0f, 1.0f };
	vVar4[13] = { 0.0f, -5.0f, 0.0f };
	if (Function_531(iParam0->f_928, 8))
	{
		iVar19 = 2;
	}
	else
	{
		iVar19 = 1;
	}
	iVar20 = 0;
	while (iVar20 < (iVar19 - 1))
	{
		if (Function_334((*iParam0 + 1100)[iVar20]))
		{
			GET_OBJECT_POSITION(iParam0->f_1000, &vVar1);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar4[iVar203], vVar1, StackVal) };
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("escortContact") };
			Function_23();
			(*iParam0 + 1088)[iVar20] = CREATE_ACTOR_IN_LAYOUT(iParam0->f_916, &Var11, (*iParam0 + 1100)[iVar20], vVar1, Function_23());
			(*iParam0 + 1152)[iVar20] = 1;
		}
		else
		{
			return 0;
		}
		iVar20++;
	}
	iVar20 = 0;
	while (iVar20 < (iVar19 - 1))
	{
		if (IS_ACTOR_VALID((*iParam0 + 1088)[iVar20]))
		{
			bVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR((*iParam0 + 1088)[iVar20]), "escNecType");
			if (bVar0 == 3)
			{
				Function_395((*iParam0 + 1088)[iVar20], 0);
			}
			MEMORY_CONSIDER_AS((*iParam0 + 1088)[iVar20], Global_34573, 5);
			MEMORY_IDENTIFY((*iParam0 + 1088)[iVar20], Global_34573);
			iVar21 = 0;
			while (iVar21 < (iVar19 - 1))
			{
				if (!iVar20 != iVar21)
				{
					if (IS_ACTOR_VALID((*iParam0 + 1088)[iVar21]))
					{
						Function_68((*iParam0 + 1088)[iVar20], (*iParam0 + 1088)[iVar21], 0, 0);
					}
				}
				iVar21++;
			}
			if (IS_ACTOR_VALID(iParam0->f_1012))
			{
				Function_68((*iParam0 + 1088)[iVar20], iParam0->f_1012, 2, 1);
			}
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED((*iParam0 + 1088)[iVar20], 1);
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS((*iParam0 + 1088)[iVar20], 0);
			AI_GOAL_LOOK_AT_ACTOR_NEW((*iParam0 + 1088)[iVar20], Global_34573, -1.0f, 1);
			AI_IGNORE_ACTOR((*iParam0 + 1088)[iVar20]);
			SET_MOVER_FROZEN((*iParam0 + 1088)[iVar20], 1);
			REFERENCE_ACTOR((*iParam0 + 1088)[iVar20]);
		}
		iVar20++;
	}
	Function_394(iParam0);
	Function_534(iParam0 + 928, 2048);
	return 1;
}

int Function_394(int iParam0) //Position: 0x13DDD / 81373
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(iParam0->f_1000))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (IS_ACTOR_VALID((*iParam0 + 1088)[iVar0]))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME((*iParam0 + 1088)[iVar0]);
			if (IS_VOLUME_VALID(iParam0->f_984))
			{
				ADD_ACTOR_STAY_WITHIN_VOLUME((*iParam0 + 1088)[iVar0], iParam0->f_984);
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_395(bool bParam0, bool bParam1) //Position: 0x13E3B / 81467
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

bool Function_396(var uParam0, int iParam1) //Position: 0x13EB4 / 81588
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_397(int iParam0) //Position: 0x13ED0 / 81616
{
	if (Function_531(iParam0->f_928, 128))
	{
		return 1;
	}
	Function_403(iParam0);
	Function_558(iParam0);
	if (!Function_531(iParam0->f_928, 64))
	{
		LOG_ERROR("Cannot launch escort without ESCORT_INIT_ESCORT being properly called");
		return 0;
	}
	if (!IS_ACTOR_VALID(iParam0->f_1012))
	{
		LOG_ERROR("Tried to run ESCORT_LAUNCH_ESCORT escort before getting a valid traveler.");
		return 0;
	}
	if (iParam0->f_972 != 0.0f)
	{
		Function_402(iParam0, 25.0f);
	}
	Function_398(iParam0);
	Function_534(iParam0 + 928, 128);
	return 1;
}

void Function_398(int iParam0) //Position: 0x13FCB / 81867
{
	if (Function_531(iParam0->f_584, 4))
	{
		Function_401();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_400(1);
	if (Function_531(iParam0->f_584, 32))
	{
		if (Function_205(iParam0->f_624))
		{
			Function_399(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_195(iParam0, 0);
	}
	Function_534(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_531(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_255(iParam0, 1);
	return;
}

void Function_399(int iParam0, int iParam1) //Position: 0x1404E / 81998
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
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_215(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_204(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_400(bool bParam0) //Position: 0x140B5 / 82101
{
	if (!Global_8717[bParam0])
	{
		Global_8717[bParam0] = 1;
		if (bParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_21())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_401() //Position: 0x140EA / 82154
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_402(var uParam0, int iParam1) //Position: 0x140FE / 82174
{
	uParam0->f_972 = iParam1;
	return;
}

void Function_403(int iParam0) //Position: 0x1410B / 82187
{
	struct<8> Var0;
	
	if (!IS_OBJECT_VALID(iParam0->f_1000))
	{
		Function_558(iParam0);
		strcpy(&Var0, "escoLocObj", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&Var0) };
		iParam0->f_1000 = CREATE_POINT_IN_LAYOUT(iParam0->f_916, &Var0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	}
	return;
}

void Function_404(bool bParam0, bool bParam1) //Position: 0x14152 / 82258
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "escort_state", bParam1);
	return;
}

void Function_405(bool bParam0, int iParam1) //Position: 0x14172 / 82290
{
	Function_374(bParam0, 1);
	if (iParam1 == 1)
	{
		if (!Function_531(bParam0->f_928, 8))
		{
			Function_340(bParam0, "pm_esc_stg", 1);
		}
		else
		{
			Function_340(bParam0, "pm_esc_stb", 1);
		}
		Function_406(StackVal, GET_OBJECT_NAME(bParam0), 0);
	}
	else if (!Function_531(bParam0->f_928, 8))
	{
		if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (!GET_ACTOR_IN_VEHICLE_SEAT(GET_VEHICLE(Global_34573), false) != Global_34573)
			{
				Function_340(bParam0, "pm_esc_exit", 1);
			}
		}
		else
		{
			Function_340(bParam0, "pm_esc_retg", 1);
		}
	}
	else if (GET_ACTOR_HOGTIE_STATE(bParam0->f_1012) == 4)
	{
		Function_340(bParam0, "pm_esc_retbh", 1);
	}
	else if (IS_ACTOR_HOGTIED(bParam0->f_1012))
	{
		Function_340(bParam0, "pm_esc_retb", 1);
	}
	else
	{
		Function_340(bParam0, "pm_esc_hogtie", 1);
	}
	return;
}

int Function_406(int iParam0, bool bParam1, bool bParam2) //Position: 0x1428E / 82574
{
	if (IS_STRING_VALID(bParam1))
	{
		strcpy(iParam0 + 144[06], bParam1, 24);
		(*iParam0 + 112)[0] = 1;
	}
	else
	{
		strcpy(iParam0 + 144[06], "", 24);
		(*iParam0 + 112)[0] = 0;
	}
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(iParam0 + 144[16], bParam2, 24);
		(*iParam0 + 112)[1] = 1;
	}
	else
	{
		strcpy(iParam0 + 144[16], "", 24);
		(*iParam0 + 112)[1] = 0;
	}
	return 1;
}

bool Function_407(var uParam0, vector3 vParam1) //Position: 0x142F9 / 82681
{
	if (!IS_ACTOR_VALID(uParam0->f_1012))
	{
		LOG_ERROR("Invalid traveller actor");
		return 0;
	}
	if (Function_531(uParam0->f_928, 8))
	{
		if (GET_ACTOR_HOGTIE_STATE(uParam0->f_1012) == 3)
		{
			if (GET_HOGTIED_MASTER(uParam0->f_1012) == Global_34573)
			{
				return 1;
			}
		}
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (GET_ACTOR_HOGTIE_STATE(uParam0->f_1012) == 4)
			{
				if (GET_HOGTIED_MASTER(uParam0->f_1012) == GET_MOUNT(Global_34573))
				{
					return 1;
				}
			}
		}
	}
	if (IS_ACTOR_RIDING(Global_34573) && IS_ACTOR_RIDING(uParam0->f_1012))
	{
		if (GET_MOUNT(Global_34573) == GET_MOUNT(uParam0->f_1012))
		{
			return 1;
		}
	}
	if (IS_ACTOR_RIDING_VEHICLE(Global_34573) && IS_ACTOR_RIDING_VEHICLE(uParam0->f_1012))
	{
		if (GET_VEHICLE(Global_34573) == GET_VEHICLE(uParam0->f_1012))
		{
			return 1;
		}
	}
	if (IS_ACTOR_ON_FOOT(Global_34573) && IS_ACTOR_ON_FOOT(uParam0->f_1012))
	{
		if (VDIST(Global_34574, vParam1) > 5.0f)
		{
			return 1;
		}
	}
	return 0;
}

int Function_408(int iParam0) //Position: 0x143FC / 82940
{
	if (Function_531(iParam0->f_928, 128))
	{
		return 1;
	}
	return 0;
}

int Function_409(bool bParam0) //Position: 0x14415 / 82965
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "escort_state");
}

void Function_410(var uParam0, int iParam1) //Position: 0x14432 / 82994
{
	uParam0->f_1168 = iParam1;
	return;
}

int Function_411(bool bParam0) //Position: 0x1443F / 83007
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "escNecType");
}

int Function_412(int iParam0) //Position: 0x1445A / 83034
{
	iParam0->f_616 = Function_413(iParam0);
	Function_385(iParam0);
	return iParam0->f_616;
}

var Function_413(int iParam0) //Position: 0x14474 / 83060
{
	int iVar0;
	int iVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_428(0))
	{
		iVar1[0] = "Pass";
		iVar1[1] = "Fail";
		iVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_414(iParam0 + 588, &iVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
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

var Function_414(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x14518 / 83224
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_427(&Var15, &Var0);
	uVar20 = Function_426(*uParam1, &Var15);
	Function_425(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_424(uParam0, uVar20);
	Function_422(StackVal, uParam0, Var15.f_12);
	Function_420(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_419(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_416(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_415(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_415(int iParam0, int iParam1, int iParam2) //Position: 0x145DF / 83423
{
	char* cVar0;
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
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_416(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x1463B / 83515
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_418(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_418(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_415(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_417(bParam1->f_32);
	}
	else
	{
		Function_417(bParam1->f_32);
	}
	return 0;
}

void Function_417(bool bParam0) //Position: 0x147C1 / 83905
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_418(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x147FB / 83963
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

var Function_419(int iParam0, var uParam1, int iParam2) //Position: 0x148A9 / 84137
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_420(var uParam0, int iParam1, int iParam2) //Position: 0x148CD / 84173
{
	switch (Function_421())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_421() //Position: 0x14969 / 84329
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

void Function_422(var uParam0, int iParam1, int iParam2) //Position: 0x149A5 / 84389
{
	switch (Function_423(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_423(int iParam0) //Position: 0x14A3D / 84541
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_321()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_531(*iParam0, 0x40000000))
		{
			Function_534(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_531(*iParam0, 0x40000000))
		{
			Function_534(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_533(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_321()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_531(*iParam0, 0x20000000))
		{
			Function_534(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_531(*iParam0, 0x20000000))
		{
			Function_534(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_533(iParam0, 0x20000000);
	return 0;
}

var Function_424(var uParam0, int iParam1) //Position: 0x14B88 / 84872
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_425(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x14CD7 / 85207
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

var Function_426(int iParam0, int iParam1) //Position: 0x14D6A / 85354
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_427(var uParam0, int iParam1) //Position: 0x14D84 / 85380
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1.6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_428(int iParam0) //Position: 0x14DD2 / 85458
{
	if (!Function_429(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_429(int iParam0) //Position: 0x14DE6 / 85478
{
	if (iParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

bool Function_430(int iParam0, bool bParam1) //Position: 0x14E0A / 85514
{
	if (Function_72(iParam0))
	{
		if (Function_70(iParam0) < bParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_431(int iParam0) //Position: 0x14E26 / 85542
{
	int iVar0;
	vector3 vVar1;
	
	if (Function_516(iParam0) == 0)
	{
		LOG_ERROR("Next time check ESCORT_IS_READY_TO_INIT before calling ESCORT_INIT_ESCORT.");
	}
	Function_558(iParam0);
	Function_403(iParam0);
	if (!IS_LAYOUTREF_VALID(iParam0->f_916))
	{
		LOG_ERROR("A layout must be set by ESCORT_SET_LAYOUT before calling ESCORT_INIT");
		return 0;
	}
	if (!IS_OBJECT_VALID(iParam0->f_1000))
	{
		LOG_ERROR("A destination must be set by ESCORT_SET_DESTINATION_* before calling ESCORT_INIT");
		return 0;
	}
	if (!Function_448(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		(*iParam0 + 1152)[iVar0] = 0;
		iVar0++;
	}
	Function_447(iParam0, 1);
	Function_330(iParam0, 13);
	Function_446(iParam0, 3);
	Function_441(iParam0, Function_442(iParam0->f_628, 3, 2));
	Function_433(iParam0, iParam0->f_1012, 4294967295, 0.0f, 0.0f, 0.0f, 1, 1, iParam0->f_924);
	Function_384(iParam0);
	if (Function_573(StackVal, StackVal, Function_384(iParam0)))
	{
		GET_OBJECT_POSITION(iParam0->f_1012, &vVar1);
		Function_432(StackVal, StackVal, iParam0, vVar1);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.1f);
	Function_534(iParam0 + 928, 64);
	return 1;
}

void Function_432(int iParam0, vector3 vParam1) //Position: 0x14FDB / 85979
{
	*(iParam0 + 4) = { StackVal, StackVal, vParam1 };
}

void Function_433(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0x14FED / 85997
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_188(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_573(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_534(iParam0 + 584, 4);
	}
	else
	{
		Function_533(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_205(iParam0->f_624))
		{
			Function_440(iParam0->f_624, 1);
			Function_534(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_534(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_435(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_434(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_560(iParam0 + 572);
	}
	Function_560(iParam0 + 44);
	Function_36(0);
}

void Function_434(bool bParam0, bool bParam1) //Position: 0x1513C / 86332
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_435(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1517D / 86397
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_438(10.0f);
	Var14 = { StackVal, Function_438(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_334(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_535(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_436(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_436(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_436(var uParam0, bool bParam1) //Position: 0x1526F / 86639
{
	vector3 vVar0;
	
	if (!Function_437(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, bParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_437(int iParam0) //Position: 0x153B0 / 86960
{
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(*iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_438(int iParam0) //Position: 0x153D2 / 86994
{
	Function_439(iParam0, 10);
	return StackVal, Function_439(iParam0, 10);
}

struct<8> Function_439(var uParam0, int iParam1) //Position: 0x153DF / 87007
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_440(int iParam0, int iParam1) //Position: 0x153F8 / 87032
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
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_215(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_204(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_211(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_210(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_441(int iParam0, int iParam1) //Position: 0x1549E / 87198
{
	if (Function_205(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_534(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_442(bool bParam0, bool bParam1, bool bParam2) //Position: 0x154F3 / 87283
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_445(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_443(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_443(bParam0, bParam1, bParam2, 4294967295);
}

int Function_443(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15551 / 87377
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
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_444(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_444(int iParam0) //Position: 0x156A6 / 87718
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

var Function_445(int iParam0, int iParam1, int iParam2) //Position: 0x156E4 / 87780
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_446(var uParam0, int iParam1) //Position: 0x15704 / 87812
{
	uParam0->f_488 = iParam1;
	return;
}

void Function_447(var uParam0, int iParam1) //Position: 0x15711 / 87825
{
	uParam0->f_484 = iParam1;
	return;
}

bool Function_448(int iParam0) //Position: 0x1571E / 87838
{
	struct<8> Var0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	struct<5> Var17;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_916))
	{
		LOG_ERROR("ESCORT_CreateScene got invalid layout");
		return 0;
	}
	Function_455(iParam0);
	if (Function_573(StackVal, StackVal, Function_455(iParam0)))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_1012), &Var17);
		Function_454(StackVal, StackVal, iParam0, Var17);
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_1012))
	{
		Function_453(iParam0, iParam0->f_1012);
	}
	if (Function_452() >= 0)
	{
		Function_451(iParam0, 2);
	}
	if (IS_OBJECTSET_VALID(Function_450()))
	{
		iParam0->f_1164 = Function_450();
	}
	if (IS_ACTOR_VALID(iParam0->f_1012))
	{
		GET_POSITION(iParam0->f_1012, &vVar14);
		if (Function_573(StackVal, StackVal, vVar14))
		{
			Function_455(iParam0);
			SET_OBJECT_POSITION(iParam0->f_1012, Function_455(iParam0));
		}
	}
	else
	{
		if (Function_334(Function_550()) && Function_550() == 0)
		{
			Function_449(iParam0, Function_550());
		}
		if (Function_334(iParam0->f_1016) && iParam0->f_1016 == 0)
		{
			strcpy(&Var0, "nescortGuy", 32);
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&Var0) };
			Function_455(iParam0);
			vVar14 = { StackVal, StackVal, Function_455(iParam0) };
			Function_455(iParam0);
			Var17 = { StackVal, StackVal, Function_455(iParam0) };
			Var17.f_4 = (StackVal + 2.0f);
			if (!FIND_GROUND_INTERSECTION(&Var17, 100.0f, &vVar14, &uVar11))
			{
				return 0;
			}
			CLEAR_AREA_OF_TREE_TYPE(vVar14, 5.0f, "");
			CLEAR_AREA_OF_GRASS(vVar14, 5.0f);
			vVar8 = { 0.0f, RAND_FLOAT_RANGE(0.0f, 360.0f), 0.0f };
			iParam0->f_1012 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_916, &Var0, iParam0->f_1016, vVar14, vVar8);
			SET_ANIM_SET_FOR_ACTOR(iParam0->f_1012, "fema_ride_passenger", 0);
			SET_MOUNTS_AS_PASSENGER(iParam0->f_1012, 1);
			if (IS_ACTOR_VALID(iParam0->f_1012))
			{
				Function_534(iParam0 + 928, 32);
			}
			else
			{
				LOG_ERROR("Invalid traveler creation");
				return 0;
			}
			MEMORY_CONSIDER_AS(iParam0->f_1012, Global_34573, 5);
			MEMORY_IDENTIFY(iParam0->f_1012, Global_34573);
			MEMORY_REPORT_POSITION_AUTO(iParam0->f_1012, Global_34573, 1);
			SET_ACTOR_CAN_BE_HARDLOCKED(iParam0->f_1012, 0);
			SET_ACTOR_UPDATE_PRIORITY(iParam0->f_1012, false);
			SET_ANIM_SET_FOR_ACTOR(iParam0->f_1012, "gent_ride_passenger", 0);
			SET_MOUNTS_AS_PASSENGER(iParam0->f_1012, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(iParam0->f_1012);
			Function_404(iParam0->f_1012, 0);
		}
		else
		{
			LOG_ERROR("ESCORT_CreateScene found an invalid actor template for traveler");
			return 0;
		}
	}
	if (!IS_ACTOR_VALID(iParam0->f_1012))
	{
		return 0;
	}
	Function_534(iParam0 + 928, 32);
	return 1;
}

int Function_449(int iParam0, bool bParam1) //Position: 0x159CF / 88527
{
	if (!Function_334(bParam1))
	{
		LOG_ERROR("Invalid traveler actor enum passed in");
		return 0;
	}
	iParam0->f_1016 = bParam1;
	return 1;
}

var Function_450() //Position: 0x15A13 / 88595
{
	return GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(Function_14(), "escNecActors"));
}

void Function_451(var uParam0, int iParam1) //Position: 0x15A31 / 88625
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
	uParam0->f_920 = iParam1;
	return;
}

int Function_452() //Position: 0x15A59 / 88665
{
	bool bVar0;
	
	bVar0 = Function_14();
	if (!DECOR_CHECK_EXIST(bVar0, "escortNumEnemies"))
	{
		return 0;
	}
	return DECOR_GET_INT(bVar0, "escortNumEnemies");
}

int Function_453(var uParam0, bool bParam1) //Position: 0x15A9D / 88733
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Invalid traveler actor passed in");
		return 0;
	}
	uParam0->f_1012 = bParam1;
	uParam0->f_1016 = GET_ACTOR_ENUM(bParam1);
	return 1;
}

int Function_454(int iParam0, vector3 vParam1) //Position: 0x15AE6 / 88806
{
	if (Function_573(StackVal, StackVal, vParam1))
	{
		LOG_ERROR("ESCORT_SetStartPosition was passed an invalid position");
		return 0;
	}
	*(iParam0 + 960) = { StackVal, StackVal, vParam1 };
	return 1;
}

vector3 Function_455(int iParam0) //Position: 0x15B44 / 88900
{
	return StackVal, StackVal, *(iParam0 + 960);
}

int Function_456(var uParam0, vector3 vParam1) //Position: 0x15B51 / 88913
{
	return Function_454(StackVal, StackVal, uParam0, vParam1);
}

int Function_457(int iParam0, bool bParam1) //Position: 0x15B62 / 88930
{
	if (bParam1 == "")
	{
		Function_558(iParam0);
	}
	else if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("ESCORT_SET_LAYOUT was passed an invalid layout");
		return 0;
	}
	iParam0->f_916 = bParam1;
	return 1;
}

int Function_458(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x15BBE / 89022
{
	vector3 vVar0;
	
	Function_558(iParam0);
	Function_403(iParam0);
	if (Function_468(bParam1))
	{
		iParam0->f_980 = bParam1;
		iParam0->f_984 = StackVal;
	}
	else
	{
		LOG_ERROR("ESCORT_SET_DESTINATION_REGION was passed an invalid region");
		return 0;
	}
	GET_VOLUME_CENTER(iParam0->f_984, &vVar0);
	SET_OBJECT_POSITION_ON_GROUND(iParam0->f_1000, vVar0);
	DECOR_SET_INT(iParam0->f_1000, "escort_destType", 2);
	DECOR_SET_BOOL(iParam0->f_1000, "escort_stayout", bParam2);
	DECOR_SET_BOOL(iParam0->f_1000, "escort_reached", false);
	Function_459(iParam0, bParam1);
	if (iParam3 == 1)
	{
		Function_534(iParam0 + 928, 1024);
	}
	else
	{
		Function_533(iParam0 + 928, 1024);
	}
	Function_534(iParam0 + 928, 256);
	return 1;
}

int Function_459(int iParam0, int iParam1) //Position: 0x15CD4 / 89300
{
	if (Function_531(iParam0->f_928, 8))
	{
		if (iParam1 == Global_30640[0])
		{
			*(iParam0 + 988) = { -2096.062f, 16.449f, 2604.464f };
		}
		else if (iParam1 == Global_30717[0])
		{
			*(iParam0 + 988) = { 757.994f, 78.525f, 1238.79f };
		}
		else if (iParam1 == Global_30668[0])
		{
			*(iParam0 + 988) = { -818.625f, 93.221f, 2419.609f };
		}
		else if (iParam1 == Global_30707[1])
		{
			*(iParam0 + 988) = { -741.825f, 63.847f, 3287.016f };
		}
		else if (iParam1 == Global_30693[0])
		{
			*(iParam0 + 988) = { -2673.32f, 31.399f, 4253.287f };
		}
		else if (iParam1 == Global_30685[0])
		{
			*(iParam0 + 988) = { -4345.849f, 30.118f, 4383.994f };
		}
		else
		{
			LOG_ERROR("Invalid dropoff location");
			return 0;
		}
	}
	if (iParam1 == Global_30640[0])
	{
		*(iParam0 + 988) = { -2165.189f, 16.249f, 2608.163f };
	}
	else if (iParam1 == Global_30717[0])
	{
		*(iParam0 + 988) = { 792.785f, 78.306f, 1250.872f };
	}
	else if (iParam1 == Global_30693[0])
	{
		*(iParam0 + 988) = { -2684.435f, 31.548f, 4250.658f };
	}
	else if (iParam0->f_980 == Global_30685[0])
	{
		*(iParam0 + 988) = { -4339.271f, 27.076f, 4415.416f };
	}
	else if (iParam1 == Global_30668[0])
	{
		*(iParam0 + 988) = { -940.652f, 90.224f, 2424.541f };
	}
	else if (iParam1 == Global_30668[1])
	{
		*(iParam0 + 988) = { 124.938f, 73.286f, 2290.731f };
	}
	else
	{
		LOG_ERROR("Invalid dropoff location");
		return 0;
	}
	Function_558(iParam0);
	Function_403(iParam0);
	SET_OBJECT_POSITION(iParam0->f_1000, *(iParam0 + 988));
	DECOR_SET_INT(iParam0->f_1000, "escort_destType", 3);
	DECOR_SET_BOOL(iParam0->f_1000, "escort_reached", false);
	Function_534(iParam0 + 928, 4);
	return 1;
}

int Function_460() //Position: 0x15F38 / 89912
{
	bool bVar0;
	
	bVar0 = Function_14();
	if (!DECOR_CHECK_EXIST(bVar0, "escort_stayout"))
	{
		return 0;
	}
	return DECOR_GET_BOOL(bVar0, "escort_stayout");
}

void Function_461(bool bParam0) //Position: 0x15F78 / 89976
{
	Function_255(bParam0, 4);
	return;
}

bool Function_462(var uParam0, float fParam1) //Position: 0x15F84 / 89988
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	bool bVar11;
	struct<8> Var12;
	int iVar20;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	bVar11 = 99999.0f;
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar5);
	iVar20 = 0;
	while (iVar20 < 145)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (Function_545(Global_29005) == Function_545(Global_29155[iVar2010]))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_464(iVar20) };
					if (Function_463(uParam0, iVar20))
					{
						GET_VOLUME_CENTER(StackVal, &vVar2);
						if (VDIST(vVar5, vVar2) < fParam1 && VDIST(vVar5, vVar2) > bVar11)
						{
							iVar0 = iVar20;
							bVar11 = VDIST(vVar5, vVar2);
						}
						else
						{
							iVar1 = iVar20;
						}
					}
				}
			}
		}
		iVar20++;
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
		GET_VOLUME_CENTER(StackVal, &uVar8);
	}
	return iVar0;
}

bool Function_463(int iParam0, bool bParam1) //Position: 0x16076 / 90230
{
	if (!Function_468(bParam1))
	{
		return 0;
	}
	if ((bParam1 != Global_30640[4] || bParam1 != Global_30717[1]) || bParam1 != Global_30693[2])
	{
		return 0;
	}
	if (Function_531(iParam0->f_928, 8))
	{
		if (((bParam1 != Global_30640[0] || bParam1 != Global_30717[0]) || bParam1 != Global_30668[0]) || bParam1 != Global_30693[0])
		{
			return 1;
		}
		return 0;
	}
	if (((((bParam1 != Global_30640[0] || bParam1 != Global_30717[0]) || bParam1 != Global_30693[0]) || bParam1 != Global_30685[0]) || bParam1 != Global_30668[0]) || bParam1 != Global_30668[1])
	{
		return 1;
	}
	return 0;
}

struct<32> Function_464(bool bParam0) //Position: 0x1612E / 90414
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_468(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[bParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_465(int iParam0) //Position: 0x161EB / 90603
{
	return iParam0->f_980;
}

bool Function_466(int iParam0) //Position: 0x161F6 / 90614
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(iParam0->f_1000))
	{
		if (DECOR_CHECK_EXIST(iParam0->f_1000, "escort_destType"))
		{
			GET_OBJECT_POSITION(iParam0->f_1000, &vVar0);
			if (!Function_573(StackVal, StackVal, vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var Function_467() //Position: 0x1623D / 90685
{
	bool bVar0;
	
	bVar0 = Function_14();
	if (!DECOR_CHECK_EXIST(bVar0, "escort_destVolume"))
	{
		return "";
	}
	return GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bVar0, "escort_destVolume"));
}

bool Function_468(bool bParam0) //Position: 0x16287 / 90759
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_469() //Position: 0x1629D / 90781
{
	bool bVar0;
	
	bVar0 = Function_14();
	if (!DECOR_CHECK_EXIST(bVar0, "escort_destRegion"))
	{
		return 4294967294;
	}
	return DECOR_GET_INT(bVar0, "escort_destRegion");
}

struct<32> Function_470(bool bParam0) //Position: 0x162E5 / 90853
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_471("0", &cVar8, ""), 4);
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

struct<32> Function_471(char* cParam0, char* cParam1, char* cParam2) //Position: 0x1634F / 90959
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_472(bool bParam0, int iParam1) //Position: 0x1636E / 90990
{
	Function_389(bParam0, iParam1);
	return;
}

int Function_473(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1637B / 91003
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_512(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_510(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_476(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_314("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_314("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_474(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_512(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_510(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_474(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1670D / 91917
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	uParam1 = uParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_314("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_475(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_475(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_475(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_475(bool bParam0) //Position: 0x1696A / 92522
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

bool Function_476(int iParam0) //Position: 0x169B0 / 92592
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_509(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_508(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_508(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_507(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_506(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_504(StackVal, StackVal, StackVal, vVar9, Function_505());
				}
				else
				{
					bVar0 = Function_503(StackVal, StackVal, StackVal, vVar9, Function_505(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_509(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			fVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_468(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_508(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_502(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_501(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_501(&vVar9, &vVar6) };
				if (!Function_573(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_500(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_497(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_493(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_492(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_491(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_531(StackVal, 131072))
				{
					if (StackVal || Function_490(StackVal, Function_490(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_489(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_485(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				fVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_484((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_484((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_483(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_483(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar23, bVar21);
				UNK_0xDF93BD7C(bVar23);
			}
			else
			{
				UNK_0xDF93BD7C(bVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_492(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_491(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_492(StackVal, Function_491(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_531(StackVal, 131072))
			{
				if (StackVal || Function_490(StackVal, Function_490(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_485(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_481((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_478(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_478(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
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
					iParam0->f_48 = StackVal;
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
	if (Function_477(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_477(vector3 vParam0) //Position: 0x171DA / 94682
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_478(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1720F / 94735
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
	if (!bParam4)
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
								return Function_479(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_479(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_479(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_479(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_479(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_479(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_479(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_479(&Global_6704, &Global_7790, bParam3);
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
								return Function_479(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_479(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_479(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_479(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_479(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_479(&Global_7027, &Global_8268, bParam3);
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
	else if (bVar1 == Global_30640[0])
	{
		return Function_479(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_479(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_479(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_479(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_479(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_479(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_479(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_479(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_479(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_479(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_479(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_479(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_479(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_479(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_479(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_479(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_479(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_479(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_479(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_479(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_479(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_479(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_479(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_479(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_479(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_479(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_479(var uParam0, var uParam1, bool bParam2) //Position: 0x17824 / 96292
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_480(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_480(var uParam0, int iParam1) //Position: 0x17876 / 96374
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_481(int iParam0) //Position: 0x17892 / 96402
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_482(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_482(bool bParam0) //Position: 0x178ED / 96493
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_331(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

vector3 Function_483(int iParam0) //Position: 0x17925 / 96549
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_484(int iParam0, int iParam1) //Position: 0x17944 / 96580
{
	if (iParam1 != 0)
	{
		return iParam1;
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

bool Function_485(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x17974 / 96628
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_487(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_486(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_486(var uParam0, int iParam1) //Position: 0x17A44 / 96836
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_487(bool bParam0) //Position: 0x17A62 / 96866
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_488(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_365(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_488(iVar0);
						}
					}
					else if (Function_365(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_488(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
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

void Function_488(int iParam0) //Position: 0x17BC3 / 97219
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_489(vector3 vParam0) //Position: 0x17C24 / 97316
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_490(vector3 vParam0) //Position: 0x17CC5 / 97477
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

bool Function_491(vector3 vParam0) //Position: 0x17D11 / 97553
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

bool Function_492(vector3 vParam0) //Position: 0x17D6A / 97642
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

int Function_493(int iParam0) //Position: 0x17DE7 / 97767
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
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_495(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_494(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_494(struct<33> Param0) //Position: 0x17F82 / 98178
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
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
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_495(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x180B1 / 98481
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

void Function_496(bool bParam0) //Position: 0x18102 / 98562
{
	if (bParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_497(int iParam0, vector3 vParam1) //Position: 0x18146 / 98630
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_499();
	Function_496(0);
	Function_498(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_495(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_494(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_498(bool bParam0) //Position: 0x182E8 / 99048
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

void Function_499() //Position: 0x1839B / 99227
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

void Function_500(float fParam0, int iParam1) //Position: 0x183AA / 99242
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

vector3 Function_501(var uParam0, int iParam1) //Position: 0x18433 / 99379
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar10) < 0)
	{
		UNK_0xDF93BD7C(bVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(bVar10, false, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar10, false);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_483(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_483(&iVar25), StackVal) };
		Function_483(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_483(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_500(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(bVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_483(&iVar31);
			vVar11 = { StackVal, StackVal, Function_483(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_483(&iVar25);
			vVar11 = { StackVal, StackVal, Function_483(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

int Function_502(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x18540 / 99648
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
		if (!Function_573(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_573(StackVal, StackVal, *iParam2))
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

var Function_503(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x18672 / 99954
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_485(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_504(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1871A / 100122
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_485(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_505() //Position: 0x187A3 / 100259
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
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

var Function_506(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x187D4 / 100308
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						bVar1 = bVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_507(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x18869 / 100457
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

float Function_508(bool bParam0) //Position: 0x188E6 / 100582
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
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

int Function_509(int iParam0) //Position: 0x18921 / 100641
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_48());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_48());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_510(bool bParam0, int iParam1) //Position: 0x18952 / 100690
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_487(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_511(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_511(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x18AB3 / 101043
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_512(bool bParam0, vector3 vParam1) //Position: 0x18B4E / 101198
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_513(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_513(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x18B7E / 101246
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_514() //Position: 0x18BA1 / 101281
{
	vector3 vVar0;
	
	vVar0.x = DECOR_GET_FLOAT(Function_14(), "escortStartPosX");
	vVar0.f_4 = DECOR_GET_FLOAT(Function_14(), "escortStartPosY");
	vVar0.f_8 = DECOR_GET_FLOAT(Function_14(), "escortStartPosZ");
	return StackVal, StackVal, vVar0;
}

vector3 Function_515(bool bParam0) //Position: 0x18BFD / 101373
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_516(int iParam0) //Position: 0x18C24 / 101412
{
	if (!Function_531(iParam0->f_928, 16))
	{
		if (!Function_531(iParam0->f_928, 1))
		{
			if (Function_523(iParam0))
			{
				Function_534(iParam0 + 928, 1);
			}
		}
		if (Function_531(iParam0->f_928, 1))
		{
			if (Function_517(iParam0))
			{
				Function_534(iParam0 + 928, 16);
			}
		}
	}
	return Function_531(iParam0->f_928, 16);
}

bool Function_517(int iParam0) //Position: 0x18C81 / 101505
{
	if (!Function_518(iParam0 + 636))
	{
		return 0;
	}
	return 1;
}

bool Function_518(int iParam0) //Position: 0x18C99 / 101529
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_522();
	iVar1 = 0;
	if (!Function_19(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_521(iParam0[iVar03], 8);
		}
		else if (Function_520())
		{
			iVar1 = 1;
			Function_521(iParam0[iVar03], 8);
		}
		Function_521(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_19(iParam0[iVar03], 4))
		{
			if (!Function_19(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_19(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_19(iParam0[03], 8) || iVar1));
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
				Function_521(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_19(iParam0[iVar03], 4))
		{
			if (!Function_19(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_521(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_521(iParam0[iVar03], 2);
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
							Function_521(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_521(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_521(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_521(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_521(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_521(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_521(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_521(iParam0[iVar03], 2);
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

void Function_519() //Position: 0x19014 / 102420
{
	if (!Function_94(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_520() //Position: 0x19054 / 102484
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

void Function_521(var uParam0, int iParam1) //Position: 0x1907F / 102527
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_522() //Position: 0x19090 / 102544
{
	if (!Function_94(128))
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

bool Function_523(int iParam0) //Position: 0x190D2 / 102610
{
	int iVar0;
	
	REQUEST_ANIM_SET("gent_ride_passenger", 0);
	REQUEST_ANIM_SET("stand_ambient", 0);
	REQUEST_ACTION_TREE("custom/stand_ambient");
	if (!Function_334(iParam0->f_1016) || iParam0->f_1016 != 0)
	{
		if (!StackVal != 5)
		{
			if (!Function_527(2, 0, 4294967295, 0))
			{
				return 0;
			}
			iParam0->f_1016 = Function_535(2, 0, 1, 4294967295, 1);
		}
	}
	Function_526(iParam0 + 636, iParam0->f_1016, 2, 0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Function_334((*iParam0 + 1100)[iVar0]))
		{
			Function_526(iParam0 + 636, (*iParam0 + 1100)[iVar0], 2, 0);
		}
		iVar0++;
	}
	Function_524(iParam0 + 636, "fema_ride_passenger", 5, 0);
	Function_524(iParam0 + 636, "gent_ride_passenger", 5, 0);
	Function_524(iParam0 + 636, "talking_stand", 5, 0);
	Function_524(iParam0 + 636, "stand_ambient", 5, 0);
	Function_524(iParam0 + 636, "stand_shakehands", 5, 0);
	Function_524(iParam0 + 636, "custom/talking_stand", 8, 0);
	Function_524(iParam0 + 636, "custom/stand_ambient", 8, 0);
	Function_524(iParam0 + 636, "custom/stand_shakehands", 8, 0);
	Function_524(iParam0 + 636, "stand_hostage", 5, 0);
	Function_524(iParam0 + 636, "custom/stand_hostage", 8, 0);
	Function_524(iParam0 + 636, "$/content/scripting/gringo/simplegringo/handoff", 1, 0);
	Function_524(iParam0 + 636, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
	Function_524(iParam0 + 636, "$/content/scripting/gringo/simplegringo/hug_link", 1, 0);
	Function_524(iParam0 + 636, "procmissions", 10, 0);
	Function_524(iParam0 + 636, "stats", 10, 0);
	Function_384(iParam0);
	STREAMING_LOAD_BOUNDS(Function_384(iParam0), 30.0f, 0);
	return 1;
}

var Function_524(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x193E2 / 103394
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_525(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_521(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_525(var uParam0, int iParam1, int iParam2) //Position: 0x1941A / 103450
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_19(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_521(uParam0[iVar03], 4);
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

var Function_526(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x194DE / 103646
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_19(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_521(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_521(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_527(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x195AE / 103854
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_528(Global_30750[0], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_528(Global_30750[1], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_528(Global_30750[2], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_528(Global_30750[3], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_528(Global_30750[4], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_528(Global_30750[5], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_528(Global_30750[6], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_528(Global_30750[7], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_528(Global_30750[8], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_528(Global_30750[9], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_528(Global_30750[10], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_528(Global_30750[11], bParam1, bParam2, bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_528(Global_30750[12], bParam1, bParam2, bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_528(Global_30750[13], bParam1, bParam2, bParam3);
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

int Function_528(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x19776 / 104310
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_529(int iParam0) //Position: 0x1979D / 104349
{
	int iVar0;
	int iVar1;
	
	iParam0->f_1200 = 1;
	if (Global_29004 == 0)
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
	else if (Global_29004 == 2)
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
	else if (Global_29004 == 1)
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
	AUDIO_MUSIC_FORCE_TRACK(iVar0, "DRAMATIC", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

int Function_530(bool bParam0) //Position: 0x198A4 / 104612
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_531(bool bParam0, bool bParam1) //Position: 0x198BD / 104637
{
	return (bParam0 && bParam1) == 0;
}

void Function_532() //Position: 0x198CA / 104650
{
	int iVar0;
	
	iVar0 = Function_225(369);
	switch (Global_29004)
	{
		case 0x00000000:
			if (iVar0 <= 1)
			{
				Local_23.f_632 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_23.f_632 = 1;
			}
			else
			{
				Local_23.f_632 = 2;
			}
			break;
		
		case 0x00000001:
			if (iVar0 <= 1)
			{
				Local_23.f_632 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_23.f_632 = 1;
			}
			else
			{
				Local_23.f_632 = 2;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			if (iVar0 <= 1)
			{
				Local_23.f_632 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_23.f_632 = 1;
			}
			else
			{
				Local_23.f_632 = 2;
			}
			break;
		
		default:
			Local_23.f_632 = 1;
			break;
	}
	switch (Local_23.f_632)
	{
		case 0x00000000:
			Local_23.f_1184 = 14.0f;
			Local_23.f_1188 = 28.0f;
			break;
		
		case 0x00000001:
			Local_23.f_1184 = 12.0f;
			Local_23.f_1188 = 24.0f;
			break;
		
		case 0x00000002:
			Local_23.f_1184 = 10.0f;
			Local_23.f_1188 = 20.0f;
			break;
		
		default:
			Local_23.f_1184 = 12.0f;
			Local_23.f_1188 = 24.0f;
			break;
	}
	return;
}

void Function_533(bool bParam0, int iParam1) //Position: 0x199EE / 104942
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_534(bool bParam0, int iParam1) //Position: 0x19A01 / 104961
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

var Function_535(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x19A10 / 104976
{
	return Function_536(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_536(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x19A29 / 105001
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_539(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_539(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_539(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_539(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_539(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_539(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_539(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_539(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_539(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_539(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_539(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_539(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_539(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_539(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_537(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_537(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x19C7E / 105598
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_538(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_538(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_538(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_538(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_538(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_538(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_538(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_538(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_538(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_538(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_538(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_538(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_538(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_538(Global_30750[13], bVar0);
	}
	return Function_539(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_538(bool bParam0, bool bParam1) //Position: 0x19DCF / 105935
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_539(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x19E8D / 106125
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_544();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_334(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_543(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_543(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_542(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
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
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_334(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
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

void Function_540(int iParam0) //Position: 0x1A180 / 106880
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_541() //Position: 0x1A234 / 107060
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_542(bool bParam0) //Position: 0x1A26E / 107118
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_543(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1A29B / 107163
{
	bool bVar0;
	
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
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

void Function_544() //Position: 0x1A3EC / 107500
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_541();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_541();
	return;
}

int Function_545(int iParam0) //Position: 0x1A437 / 107575
{
	return Function_546(iParam0);
}

int Function_546(int iParam0) //Position: 0x1A442 / 107586
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
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

void Function_547(var uParam0, int iParam1) //Position: 0x1A49A / 107674
{
	Function_548(uParam0, iParam1);
	return;
}

void Function_548(int iParam0, int iParam1) //Position: 0x1A4A7 / 107687
{
	if (iParam1 == 1)
	{
		Function_534(iParam0 + 928, 8);
	}
	else
	{
		Function_533(iParam0 + 928, 8);
	}
	return;
}

int Function_549() //Position: 0x1A4CA / 107722
{
	return DECOR_GET_BOOL(Function_14(), "escortCriminal");
}

bool Function_550() //Position: 0x1A4E7 / 107751
{
	return DECOR_GET_INT(Function_14(), "escortTravelerAE");
}

var Function_551(bool bParam0) //Position: 0x1A506 / 107782
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

int Function_552(var uParam0, int iParam1) //Position: 0x1A521 / 107809
{
	return Function_553(uParam0, iParam1);
}

int Function_553(var uParam0, int iParam1) //Position: 0x1A52E / 107822
{
	if (iParam1 <= 2)
	{
		uParam0->f_628 = iParam1;
		return 1;
	}
	return 0;
}

bool Function_554(int iParam0) //Position: 0x1A547 / 107847
{
	return Function_555(iParam0);
}

int Function_555(int iParam0) //Position: 0x1A552 / 107858
{
	if (iParam0 > 0 || iParam0 <= 2)
	{
		return 0;
	}
	return 1;
}

int Function_556() //Position: 0x1A56A / 107882
{
	if (DECOR_CHECK_EXIST(Function_14(), "escortMissType"))
	{
		return DECOR_GET_INT(Function_14(), "escortMissType");
	}
	return 2;
}

var Function_557() //Position: 0x1A5A6 / 107942
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_14(), "escortTraveler"));
}

void Function_558(int iParam0) //Position: 0x1A5C6 / 107974
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_916))
	{
		strcpy(&Var0, "escortLiblayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_470(&Var0) };
		iParam0->f_916 = CREATE_LAYOUT(&Var0);
		Function_534(iParam0 + 928, 2);
		if (IS_LAYOUTREF_VALID(iParam0->f_916))
		{
		}
		else
		{
			LOG_ERROR("escort couldn't create internal escort layout");
		}
	}
	return;
}

void Function_559(int iParam0) //Position: 0x1A64C / 108108
{
	if (Function_72(iParam0))
	{
		if (!Function_71(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_534(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_560(int iParam0) //Position: 0x1A70B / 108299
{
	Function_561(iParam0, 0.0f);
	return;
}

void Function_561(var uParam0, float fParam1) //Position: 0x1A717 / 108311
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_534(uParam0, 1);
	Function_533(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

int Function_562(int iParam0) //Position: 0x1A738 / 108344
{
	var uVar0;
	
	if (!iLocal_324 != iParam0)
	{
		switch (iParam0)
		{
			case 0x00000001:
				break;
			
			case 0x00000002:
				uVar0 = Function_465(&Local_23);
				if (!Function_568(uVar0))
				{
					Function_566(uVar0);
				}
				Function_405(&Local_23, 1);
				Function_27(&Local_23, 1, 0);
				Function_560(&Local_23 + 1172);
				Function_560(&Local_23 + 1024);
				if (Function_531(Local_23.f_928, 8))
				{
					Function_404(Local_23.f_1012, 3);
				}
				else
				{
					Function_404(Local_23.f_1012, 2);
				}
				break;
			
			case 0x00000003:
				Function_565(&Local_23);
				Function_564();
				break;
			
			case 0x00000004:
				Function_374(&Local_23, 1);
				Function_340(&Local_23, "pm_esc_chit", 1);
				Function_24(&Local_23);
				Function_564();
				break;
			
			case 0x00000005:
				Function_374(&Local_23, 1);
				if (Function_531(Local_23.f_928, 262144))
				{
					Function_340(&Local_23, "pm_esc_ckill", 1);
				}
				else
				{
					Function_340(&Local_23, "pm_esc_cdie", 1);
				}
				Function_24(&Local_23);
				Function_564();
				break;
			
			case 0x00000006:
				Function_374(&Local_23, 1);
				switch (Function_563(&Local_23))
				{
					case 0x00000001:
						Function_406(&Local_23, "pm_esc_fhit", 0);
						break;
					
					case 0x00000002:
						Function_406(&Local_23, "pm_esc_hhit", 0);
						break;
					
					case 0x00000003:
						Function_406(&Local_23, "pm_esc_lhit", 0);
						break;
					
					default:
						LOG_ERROR("This necessary escort actor has no name");
						break;
				}
				Function_24(&Local_23);
				Function_564();
				break;
			
			case 0x00000007:
				Function_374(&Local_23, 1);
				switch (Function_563(&Local_23))
				{
					case 0x00000000:
						Function_340(&Local_23, "pm_esc_bdie", 1);
						break;
					
					case 0x00000001:
						Function_340(&Local_23, "pm_esc_fdie", 1);
						break;
					
					case 0x00000002:
						Function_340(&Local_23, "pm_esc_hdie", 1);
						break;
					
					case 0x00000003:
						Function_340(&Local_23, "pm_esc_ldie", 1);
						break;
					
					default:
						LOG_ERROR("This necessary escort actor has no name");
						break;
				}
				Function_24(&Local_23);
				Function_564();
				break;
			
			case 0x00000008:
				Function_374(&Local_23, 1);
				Function_340(&Local_23, "pm_esc_aggro", 1);
				if (IS_ACTOR_VALID(Local_23.f_1012))
				{
					TASK_CLEAR(Local_23.f_1012);
					MEMORY_CONSIDER_AS(Local_23.f_1012, Global_34573, 3);
					if (GET_MOUNT(Local_23.f_1012) == GET_MOUNT(Global_34573))
					{
						TASK_DISMOUNT(Local_23.f_1012, 1);
					}
					else
					{
						TASK_FLEE_ACTOR(Local_23.f_1012, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					}
				}
				Function_24(&Local_23);
				Function_564();
				break;
			
			case 0x00000009:
				Function_374(&Local_23, 1);
				Function_340(&Local_23, "pm_esc_ghit", 1);
				if (IS_ACTOR_VALID(Local_23.f_1012))
				{
					MEMORY_CONSIDER_AS(Local_23.f_1012, Global_34573, 3);
					TASK_FLEE_ACTOR(Local_23.f_1012, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				Function_24(&Local_23);
				Function_564();
				break;
			
			case 0x0000000A:
				Function_374(&Local_23, 1);
				if (!Function_531(Local_23.f_928, 8))
				{
					if (Function_531(Local_23.f_928, 262144))
					{
						Function_340(&Local_23, "pm_esc_gkill", 1);
					}
					else
					{
						Function_340(&Local_23, "pm_esc_gdie", 1);
					}
				}
				else if (Function_531(Local_23.f_928, 262144))
				{
					Function_340(&Local_23, "pm_esc_bkill", 1);
				}
				else
				{
					Function_340(&Local_23, "pm_esc_bdie", 1);
				}
				Function_564();
				break;
			
			case 0x0000000E:
			case 0x0000000B:
				iLocal_22 = 2;
				Function_565(&Local_23);
				Function_564();
				break;
			
			case 0x0000000F:
			case 0x0000000C:
				iLocal_22 = 3;
				Function_24(&Local_23);
				Function_564();
				break;
			
			case 0x00000010:
				Function_564();
				break;
		}
		iLocal_324 = iParam0;
	}
	return 1;
}

int Function_563(bool bParam0) //Position: 0x1AB6C / 109420
{
	return bParam0->f_1168;
}

void Function_564() //Position: 0x1AB77 / 109431
{
	Function_27(&Local_23, 0, 0);
	iLocal_21 = 5;
	return;
}

void Function_565(bool bParam0) //Position: 0x1AB87 / 109447
{
	if (!IS_ACTOR_HOGTIED(bParam0->f_1012))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0->f_1012)))
		{
			if (!(GET_TASK_STATUS(bParam0->f_1012, 12) != 1 || GET_TASK_STATUS(bParam0->f_1012, 12) != 3))
			{
				TASK_CLEAR(bParam0->f_1012);
				TASK_DISMOUNT(bParam0->f_1012, 1);
				TASK_PRIORITY_SET(bParam0->f_1012, 1);
			}
		}
		else if (!IS_ACTOR_VALID(GET_MOUNT(bParam0->f_1012)))
		{
			if (IS_ACTOR_VALID((*bParam0 + 1088)[0]))
			{
				TASK_CLEAR(bParam0->f_1012);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bParam0->f_1012, GET_OBJECT_FROM_ACTOR((*bParam0 + 1088)[0]), 3.0f, 1);
				TASK_PRIORITY_SET(bParam0->f_1012, 0);
			}
			else
			{
				TASK_WANDER_IN_VOLUME(bParam0->f_1012, bParam0->f_984, -1f);
			}
			SET_MOUNTS_AS_PASSENGER(bParam0->f_1012, 0);
			RESET_ANIM_SET_FOR_ACTOR(bParam0->f_1012, 0);
		}
	}
	return;
}

void Function_566(int iParam0) //Position: 0x1AC4B / 109643
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_396(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_567(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_46(473, 1, 0, 0);
		iVar0 = Function_546(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_46(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_46(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_46(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
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
	else if (iParam0 == Global_30723[9])
	{
		Function_241(7, 30);
	}
	if (Function_57(473) <= Function_58(473))
	{
		if (!Function_61())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

void Function_567(var uParam0, int iParam1) //Position: 0x1AD4A / 109898
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_568(int iParam0) //Position: 0x1AD59 / 109913
{
	if (!Function_468(iParam0))
	{
		return 0;
	}
	return Function_396(&(Global_29008[iParam0]), 4096);
}

vector3 Function_569(struct<41> Param0) //Position: 0x1AD77 / 109943
{
	vector3 vVar0;
	
	if (bParam26)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(Param0))
	{
		GET_OBJECT_POSITION(Param0, &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(Param0));
	}
	else if (!Function_573(StackVal, StackVal, *(&Param0 + 4)))
	{
		if (Global_30842[34])
		{
			PRINTVECTOR(*(&Param0 + 4));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 4));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_496(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_570();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_498(Param0.f_20);
	Function_495(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_494(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param11.f_28 == 0.0f)
	{
		Param0.f_40 = Param11.f_28;
	}
	if (Param0.f_40 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_40, (-1.0f * Param0.f_40));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_23();
	return StackVal, StackVal, Function_23();
}

void Function_570() //Position: 0x1AEA6 / 110246
{
	float fVar0;
	bool bVar1;
	
	Function_500(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_571(int iParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10) //Position: 0x1AEBA / 110266
{
	iParam0->f_20 = iParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = fParam5;
	iParam0->f_24 = uParam6;
	iParam0->f_28 = uParam7;
	iParam0->f_32 = iParam10;
	iParam0->f_36 = uParam8;
	iParam0->f_40 = iParam9;
}

void Function_572(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1AEF6 / 110326
{
	*uParam0 = iParam1;
	uParam0->f_4 = fParam2;
	uParam0->f_8 = iParam3;
	uParam0->f_16 = iParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

bool Function_573(vector3 vParam0) //Position: 0x1AF1F / 110367
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_574(int iParam0) //Position: 0x1AF37 / 110391
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_37(90)), 0);
	return;
}

int Function_575(int iParam0, int iParam1) //Position: 0x1AF58 / 110424
{
	if (Global_3403)
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Global_3382)
	{
		return 0;
	}
	if (Global_3392)
	{
		return 0;
	}
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3380)
	{
		return 0;
	}
	if (Global_3393)
	{
		return 0;
	}
	if (Global_3395 || Global_3396)
	{
		return 0;
	}
	iParam0 = iParam0;
	if (!IS_EARLIER_THAN(StackVal, 0) && iParam1 != 0)
	{
		return 0;
	}
	return 1;
}

