//Decompiled with MagicRDR v1.0
//Function Count : 619
//Statics Count : 422
//Natives Count : 644
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
	struct<1301> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar10;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_360 = 0;
	iLocal_361 = 0;
	bLocal_363 = false;
	iLocal_367 = 0;
	iLocal_368 = 0;
	iLocal_369 = 0;
	iLocal_370 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (ScriptParam_0.f_64 == 0)
	{
		ScriptParam_0.f_64 = 1;
	}
	bVar8 = (Function_618(1, 0) || ScriptParam_0.f_36 != 1);
	if (bVar8)
	{
		Global_3373 = GET_THIS_SCRIPT_ID();
		Global_3401 = 1;
		iLocal_21 = 0;
		iLocal_349 = 0;
	}
	else
	{
		Function_614(16);
	}
	iLocal_350 = 0;
	iLocal_351 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_351, 0, 0, 40, 0);
	if (Function_613(&Local_23) >= 0 || Function_613(&Local_23) <= 5)
	{
		uVar4 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)) + 1;
		Function_612(&Local_23, uVar4);
	}
	else
	{
		Function_612(&Local_23, Function_613(&Local_23));
	}
	Function_611(&Local_23, 1);
	Function_610(&bLocal_363, 1);
	Function_609(&bLocal_363, 2);
	Function_609(&bLocal_363, 4);
	Function_609(&bLocal_363, 8);
	Function_608();
	Function_606(&Local_23);
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(Global_34573) || !IS_ACTOR_ALIVE(Global_34573))
		{
			Function_614(16);
		}
		else if (Global_3380 != 1 && 0 != ScriptParam_0.f_36)
		{
			Function_614(16);
		}
		else if (Function_605(Local_23.f_780, 8))
		{
			if (IS_ACTOR_VALID(Local_23.f_952))
			{
				GET_POSITION(Local_23.f_952, &vVar1);
				if (iLocal_21 < 0 && iLocal_21 > 3)
				{
					if ((IS_EARLIER_THAN(iLocal_351, GET_TIME_OF_DAY()) && VDIST(Global_34574, vVar1) < 75.0f) && !WOULD_ACTOR_BE_VISIBLE(false, &vVar1, 3212836864))
					{
						Function_614(16);
					}
				}
			}
			else if (iLocal_21 == 2)
			{
				Function_614(16);
			}
		}
		bLocal_352 = 600;
		if (!Function_604(ScriptParam_0.f_44) || ScriptParam_0.f_44 != 0)
		{
			ScriptParam_0.f_44 = Global_29006;
		}
		if (iLocal_349 != 16 && !iLocal_21 != 5)
		{
			Function_614(16);
		}
		switch (iLocal_21)
		{
			case 0x00000000:
				Function_603(&Local_23, 1);
				Function_601();
				if (Function_596(&Local_23))
				{
					iLocal_21 = 1;
				}
				else
				{
					bLocal_352 = 600;
				}
				break;
			
			case 0x00000001:
				if (Function_590(&Local_23, ScriptParam_0.f_44))
				{
					if (IS_ACTOR_VALID(Function_589()))
					{
						Function_588(Function_589());
						*(&ScriptParam_0 + 8) = { StackVal, StackVal, Function_588(Function_589()) };
						iVar5 = 1;
					}
					else
					{
						Function_587();
						if (!Function_586(StackVal, StackVal, Function_587()))
						{
							Function_587();
							*(&ScriptParam_0 + 8) = { StackVal, StackVal, Function_587() };
							iVar5 = 1;
						}
						else if (!Function_586(StackVal, StackVal, *(&ScriptParam_0 + 8)))
						{
							iVar5 = 1;
						}
					}
					if (iVar5 == 0)
					{
						iVar5 = Function_551(&ScriptParam_0, &bLocal_352, &iVar7, &iVar6, 1);
					}
					if (iVar5 == 1)
					{
						bVar0 = Function_546();
						if (Function_604(bVar0))
						{
							if (Function_613(&Local_23) == 3)
							{
								Function_544(&Local_23, bVar0, 0);
							}
							else
							{
								Function_544(&Local_23, bVar0, 1);
							}
							Function_543(StackVal, StackVal, StackVal, StackVal, &Local_23, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
							Function_542(&Local_23);
							if (!Function_541(StackVal, StackVal, Function_542(&Local_23)) && ScriptParam_0.f_36 != 0)
							{
								Function_614(16);
								bLocal_352 = 600;
								break;
							}
							if (!Function_476(&Local_23))
							{
								Function_614(13);
								iVar6 = 1;
							}
							else
							{
								if (!Function_475(bVar0))
								{
									Function_471(bVar0);
								}
								iLocal_351 = GET_TIME_OF_DAY();
								ADD_TIME(&iLocal_351, 0, 0, 40, 0);
								Function_469(&iLocal_356);
								Function_614(1);
								iLocal_21 = 2;
							}
						}
						else
						{
							LOG_ERROR("Ending Transport: Could not set destination region.");
							Function_614(16);
						}
						bLocal_352 = false;
					}
					if (iVar6 == 1)
					{
						if (ScriptParam_0.f_36 == 1)
						{
							if (IS_OBJECT_VALID(Function_468()))
							{
							}
						}
						Function_614(17);
						bLocal_352 = false;
						break;
					}
				}
				break;
			
			case 0x00000002:
				if (iLocal_349 <= 2)
				{
					if (iLocal_360 == 0)
					{
						if (!GET_VEHICLE(Global_34573) != Local_23.f_860)
						{
							Function_461(&Local_23, 1);
							Function_457(&Local_23);
							Function_448(&Local_23, 0, 1);
						}
						iLocal_360 = 1;
					}
					iVar10 = Function_337(&Local_23, 1);
					if (Function_332())
					{
						if (iVar10 <= 12)
						{
							iVar10 = 12;
						}
					}
					switch (iVar10)
					{
						case 0x00000000:
							break;
						
						case 0x00000001:
							iLocal_359 = 1;
							if (!iLocal_349 != 16)
							{
								Function_323(&Local_23);
								Local_23.f_948 = VDIST(Global_34574, *(&Local_23 + 924));
								Function_614(2);
								iLocal_21 = 3;
							}
							break;
						
						case 0x00000002:
							if (!Function_605(Local_23.f_780, 8388608) && iLocal_361 != 0)
							{
								Function_322(&Local_23, 1);
								Function_321(&Local_23, "pm_trn_atk", 1);
								Function_610(&Local_23 + 780, 8388608);
							}
							break;
						
						case 0x00000013:
							iLocal_22 = 3;
							Function_614(12);
							break;
						
						case 0x00000008:
							LOG_ERROR("Transport proc destination volume should not be reached.");
							break;
						
						case 0x0000000A:
							LOG_ERROR("Transport: Unhandled cancellation");
							break;
						
						case 0x0000000C:
							iLocal_22 = 3;
							Function_614(6);
							break;
						
						case 0x0000000E:
						case 0x0000000F:
						case 0x00000010:
							Function_614(17);
							break;
						
						case 0x00000012:
							Function_614(17);
							break;
						
						case 0x00000016:
							Function_614(17);
							break;
						
						case 0x00000017:
							Function_614(7);
							break;
						
						case 0x00000018:
							LOG_ERROR("TRANSPORT_STATUS_ERROR_INVALID_INIT not handled");
							break;
						
						case 0x00000019:
							LOG_ERROR("TRANSPORT_STATUS_ERROR_INVALID_LAYOUT not handled");
							break;
						
						case 0x0000001A:
							LOG_ERROR("TRANSPORT_STATUS_ERROR_INVALID_PLAYER not handled");
							break;
						
						default:
							LOG_ERROR("Unhandled transport status");
							break;
						}
				}
				bLocal_352 = false;
				break;
			
			case 0x00000003:
				iVar10 = Function_337(&Local_23, 1);
				if (Function_332())
				{
					if (iVar10 <= 12)
					{
						iVar10 = 12;
					}
				}
				switch (iVar10)
				{
					case 0x00000000:
						break;
					
					case 0x00000002:
						if (!Function_605(Local_23.f_780, 8388608) && iLocal_361 != 0)
						{
							Function_322(&Local_23, 1);
							Function_321(&Local_23, "pm_trn_atk", 1);
							Function_610(&Local_23 + 780, 8388608);
						}
						break;
					
					case 0x00000003:
						if (IS_ACTOR_VALID(Local_23.f_860) && IS_ACTOR_VALID(Local_23.f_952))
						{
							SAY_SINGLE_LINE_CONTEXT(Local_23.f_952, 308, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
						break;
					
					case 0x00000011:
						Function_614(9);
						iLocal_22 = 3;
						break;
					
					case 0x00000013:
						Function_614(12);
						iLocal_22 = 3;
						break;
					
					case 0x00000004:
					case 0x00000005:
					case 0x00000006:
						break;
					
					case 0x00000008:
						Function_614(14);
						iLocal_22 = 2;
						iLocal_361 = 1;
						break;
					
					case 0x00000009:
						Function_614(18);
						break;
					
					case 0x0000000A:
					case 0x0000000B:
						Function_614(19);
						break;
					
					case 0x0000000C:
						Function_614(6);
						iLocal_22 = 3;
						break;
					
					case 0x0000000D:
						Function_322(&Local_23, 1);
						Function_321(&Local_23, "pm_esc_wdirfail", 1);
						Function_614(17);
						iLocal_22 = 3;
						break;
					
					case 0x0000000E:
					case 0x00000016:
						if (Function_613(&Local_23) == 1)
						{
							Function_614(10);
						}
						else if (Function_613(&Local_23) == 2)
						{
							Function_614(9);
						}
						else
						{
							LOG_ERROR("Unknown mission type for proc transport.");
						}
						iLocal_22 = 3;
						break;
					
					case 0x0000000F:
						Function_614(3);
						iLocal_22 = 3;
						break;
					
					case 0x00000010:
						Function_614(4);
						iLocal_22 = 3;
						break;
					
					case 0x00000012:
						Function_614(8);
						iLocal_22 = 3;
						break;
					
					case 0x00000014:
						Function_614(5);
						iLocal_22 = 3;
						break;
					
					case 0x00000015:
						Function_614(11);
						iLocal_22 = 3;
						break;
					
					case 0x00000017:
						Function_614(7);
						iLocal_22 = 3;
						break;
					
					case 0x00000018:
						break;
					
					case 0x00000019:
						break;
					
					case 0x0000001A:
						break;
					
					default:
						LOG_ERROR("Transport: Unhandled transport status!");
						break;
				}
				break;
			
			case 0x00000005:
				if (iLocal_367 == 0)
				{
					Function_448(&Local_23, 0, 0);
					if ((!IS_ACTOR_ALIVE(Global_34573) || iLocal_22 == 2) || Function_605(Local_23.f_780, 4))
					{
						iLocal_368 = 0;
					}
					else
					{
						iLocal_368 = 1;
					}
					if (iLocal_368 == 0)
					{
						Function_264();
						iLocal_370 = 1;
						Function_469(&iLocal_364);
					}
					iLocal_367 = 1;
				}
				else if (iLocal_370 == 0)
				{
					if (iLocal_369 == 0)
					{
						if (Function_263())
						{
							if (iLocal_368 == 1)
							{
								Function_164(&Local_23);
								iLocal_369 = 1;
							}
							else
							{
								LOG_ERROR("Transport: Unexpected state in EVENT_ENDING");
								Function_264();
								iLocal_370 = 1;
								Function_469(&iLocal_364);
							}
						}
					}
					else if (Function_146(&Local_23) == 5)
					{
						Function_139(&Local_23);
						Function_264();
						iLocal_370 = 1;
						Function_469(&iLocal_364);
					}
				}
				else if (Function_135(&iLocal_364, 3.0f))
				{
					if (iLocal_359 == 1)
					{
						Function_134(0);
						Function_132(0);
						Function_131(12);
					}
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
		}
		bLocal_352 = false;
		WAIT(bLocal_352);
	}
	if (Local_23.f_1300)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (iLocal_359 == 1)
	{
		Function_11(&Local_23, 0);
	}
	else
	{
		Function_11(&Local_23, 1);
	}
	Function_1();
	DESTROY_ITERATOR(StackVal);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x9E0 / 2528
{
	Function_461(&Local_23, 0);
	if (Function_10())
	{
		Function_2();
	}
	return;
}

void Function_2() //Position: 0x9F5 / 2549
{
	Function_4();
	Function_3(10, 3);
	return;
}

void Function_3(int iParam0, int iParam1) //Position: 0xA04 / 2564
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

void Function_4() //Position: 0xB3B / 2875
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_9())
	{
		Function_8(10, 3);
	}
	else
	{
		Function_6();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_5(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_5());
	UI_POP("nDebugMenu");
	return;
}

var Function_5() //Position: 0xB86 / 2950
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_6() //Position: 0xB9B / 2971
{
	Function_7(25, 2);
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0xBA7 / 2983
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

void Function_8(int iParam0, int iParam1) //Position: 0xDA5 / 3493
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

bool Function_9() //Position: 0xEDC / 3804
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
				if (!Function_605(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_10() //Position: 0xF43 / 3907
{
	return Global_34580;
}

void Function_11(bool bParam0, int iParam1) //Position: 0xF4C / 3916
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	Function_461(bParam0, 0);
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_130(), GET_AMBIENT_LAYOUT(), 4294967295, 0);
	iVar2 = 0;
	while (iVar2 < (GET_OBJECTSET_SIZE(bVar1) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar1);
		DECOR_REMOVE(bVar0, "translib_state");
		iVar2++;
	}
	DESTROY_OBJECTSET(bVar1);
	Function_129(bParam0);
	if (IS_ACTOR_VALID(bParam0->f_952))
	{
		TASK_VEHICLE_LEAVE(bParam0->f_952);
		TASK_PRIORITY_SET(bParam0->f_952, 1);
		Function_128(bParam0->f_952, 7);
		if (iParam1 == 1)
		{
			DESTROY_ACTOR(bParam0->f_952);
		}
		else
		{
			Function_127(bParam0->f_952, 4, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(bParam0->f_960))
	{
		Function_128(bParam0->f_960, 7);
		if (bParam0->f_628 == 2)
		{
			Function_127(bParam0->f_960, 4, 0, 2);
		}
		else
		{
			TASK_CLEAR(bParam0->f_960);
			TASK_VEHICLE_LEAVE(bParam0->f_960);
		}
		if (iParam1 == 1)
		{
			DESTROY_ACTOR(bParam0->f_960);
		}
		else
		{
			Function_127(bParam0->f_960, 2, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(bParam0->f_976))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0->f_976);
		Function_126(bParam0->f_976, 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(bParam0->f_860))
	{
		START_VEHICLE(bParam0->f_860);
		SET_VEHICLE_ALLOWED_TO_DRIVE(bParam0->f_860, 1);
		Function_128(bParam0->f_860, 7);
		if (iParam1 == 1)
		{
			DESTROY_ACTOR(bParam0->f_860);
		}
		else
		{
			RELEASE_ACTOR(bParam0->f_860);
		}
	}
	switch (bParam0->f_628)
	{
		case 0x00000003:
			Function_125(bParam0);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ALIVE(bParam0->f_960))
			{
				SET_ACTOR_FACTION(bParam0->f_960, 19);
			}
			break;
	}
	if (Function_605(bParam0->f_780, 512))
	{
		HUD_TIMER_DISPLAY(0);
	}
	if (IS_OBJECTSET_VALID(bParam0->f_968))
	{
		DESTROY_OBJECTSET(bParam0->f_968);
	}
	bVar3 = Function_468();
	if (IS_OBJECT_VALID(bVar3))
	{
		bVar4 = GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(bVar3, "trnsNecActors"));
		if (IS_OBJECTSET_VALID(bVar4))
		{
			DESTROY_OBJECTSET(bVar4);
		}
		DESTROY_OBJECT(bVar3);
	}
	if (IS_LAYOUTREF_VALID(bParam0->f_776))
	{
		if (!Function_605(bParam0->f_780, 1024))
		{
			RELEASE_LAYOUT_REF(bParam0->f_776);
		}
	}
	Function_121(bParam0 + 640);
	Function_120(56);
	Function_118(4);
	Function_117();
	Function_92(bParam0 + 1004);
	Function_12(bParam0);
	return;
}

void Function_12(bool bParam0) //Position: 0x1178 / 4472
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
		if (Function_605(bParam0->f_584, 32768))
		{
			Function_91(256);
		}
	}
	Function_90();
	Function_88(1);
	if (Function_605(bParam0->f_584, 32))
	{
		if (Function_86(bParam0->f_624))
		{
			switch (bParam0->f_620)
			{
				case 0x00000002:
					Function_31(bParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_28(bParam0->f_624);
					break;
				
				default:
					Function_19(bParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_13(bParam0, 0);
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
	if (Function_605(bParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_605(bParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_13(bool bParam0, bool bParam1) //Position: 0x12D5 / 4821
{
	if (SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_18(bParam0->f_568);
		Function_16(bParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_15(bParam0->f_568);
			Function_18(bParam0->f_568);
			Function_14(bParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_16(bParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(bParam0->f_568);
		DESTROY_OBJECT(bParam0->f_568);
	}
	return;
}

void Function_14(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x133A / 4922
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

void Function_15(bool bParam0) //Position: 0x13A8 / 5032
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

void Function_16(var uParam0, bool bParam1, bool bParam2) //Position: 0x13DD / 5085
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
				if (!Function_17(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_17(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1459 / 5209
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_18(bool bParam0) //Position: 0x1473 / 5235
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

void Function_19(int iParam0) //Position: 0x14A5 / 5285
{
	int iVar0;
	
	if (!Function_86(iParam0))
	{
		Function_26();
		return;
	}
	iVar0 = Function_25(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_20("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_20(char* cParam0, int iParam1) //Position: 0x14F8 / 5368
{
	struct<4> Var0;
	
	if (!Function_86(iParam1))
	{
		return;
	}
	switch (Function_25(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_21(Function_23(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_25(iParam1), Function_23(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_21(int iParam0) //Position: 0x161C / 5660
{
	char* cVar0[16];
	
	if (!Function_22())
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

bool Function_22() //Position: 0x1656 / 5718
{
	if (Function_605(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_23(int iParam0) //Position: 0x1671 / 5745
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_24(int iParam0) //Position: 0x1691 / 5777
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_25(int iParam0) //Position: 0x16A8 / 5800
{
	if (!Function_24(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_26() //Position: 0x16C3 / 5827
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
			Function_27(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_27(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x190A / 6410
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_28(int iParam0) //Position: 0x1933 / 6451
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_86(iParam0))
	{
		return;
	}
	iVar0 = Function_25(iParam0);
	if (StackVal == 2)
	{
		Function_20("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_29(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_29(int iParam0) //Position: 0x19D9 / 6617
{
	char* cVar0[16];
	
	if (!Function_22())
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

struct<24> Function_30(char* cParam0) //Position: 0x1A18 / 6680
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

void Function_31(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1C6E / 7278
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_86(iParam0))
	{
		Function_26();
		return;
	}
	bVar0 = Function_25(iParam0);
	if (!bVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_85())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_23(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_29(Global_6269) };
		}
		if (Function_85())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_79();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_85())
	{
		Function_78();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_20("DEED_COMPLETE", iParam0);
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
			Function_73(iParam0);
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
						switch (Function_23(iParam0))
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
			Function_35(1);
			Function_33(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_32(iParam0, &Var14);
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

void Function_32(int iParam0, int iParam1) //Position: 0x1EC2 / 7874
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_33(bool bParam0, int iParam1) //Position: 0x1EFC / 7932
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_34())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_34() //Position: 0x1F3E / 7998
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_35(bool bParam0) //Position: 0x1F47 / 8007
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_64();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_36();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_609(&Global_63095, 1);
		Function_609(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_36() //Position: 0x1F98 / 8088
{
	Function_62();
	Function_61();
	Function_61();
	Function_60();
	Function_60();
	Function_59();
	Function_59();
	Function_43(0);
	Function_43(0);
	if (!Function_34())
	{
		Function_41();
		Function_40();
		Function_39();
		Function_38();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_37();
	return;
}

void Function_37() //Position: 0x1FEA / 8170
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

void Function_38() //Position: 0x20F0 / 8432
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

void Function_39() //Position: 0x2123 / 8483
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

void Function_40() //Position: 0x22B1 / 8881
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

void Function_41() //Position: 0x2465 / 9317
{
	Function_42(&Global_28260, 1, 0);
	return;
}

void Function_42(int iParam0, bool bParam1, int iParam2) //Position: 0x2473 / 9331
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
	
	bVar0 = Function_5();
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

struct<8> Function_43(int iParam0) //Position: 0x2664 / 9828
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
					iVar2 = ((Function_58((50 + iVar4)) + Function_58((183 + iVar4))) + Function_58((90 + iVar4)));
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
	Function_44(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_44(int iParam0, bool bParam1, bool bParam2) //Position: 0x270A / 9994
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
		Function_57(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_56(iParam0);
	if (bParam2)
	{
		Function_45(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_45(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x29A5 / 10661
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_55(390))), 32);
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
					bVar19 = (Function_54(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_54(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_52(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_49(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_46(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_130(), &Var9);
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

var Function_46(int iParam0) //Position: 0x2FD2 / 12242
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_47(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2FE3 / 12259
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_48(char* cParam0, bool bParam1) //Position: 0x30D8 / 12504
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_49(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x30F1 / 12529
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_51(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_50(Function_51(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_50(int iParam0, int iParam1) //Position: 0x3156 / 12630
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_51(int iParam0, bool bParam1) //Position: 0x3168 / 12648
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_52(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x317A / 12666
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
	if (((Function_53(iParam0) != 19 || Function_53(iParam0) != 17) || Function_53(iParam0) != 10) || Function_53(iParam0) != 9)
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

int Function_53(int iParam0) //Position: 0x32AA / 12970
{
	return Global_35278[iParam020].f_48;
}

float Function_54(int iParam0) //Position: 0x32B9 / 12985
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_55(int iParam0) //Position: 0x32F2 / 13042
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_56(int iParam0) //Position: 0x332F / 13103
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

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x34C9 / 13513
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

int Function_58(bool bParam0) //Position: 0x370D / 14093
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_59() //Position: 0x374E / 14158
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
		iVar2 = ((Function_58((50 + iVar3) + 15) + Function_58((183 + iVar3) + 15)) + Function_58((90 + iVar3) + 15));
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
	Function_44(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_60() //Position: 0x37D7 / 14295
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
			iVar2 = ((Function_58((50 + iVar3) + 8) + Function_58((183 + iVar3) + 8)) + Function_58((90 + iVar3) + 8));
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
	Function_44(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_61() //Position: 0x386E / 14446
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
		iVar2 = ((Function_58((50 + iVar3)) + Function_58((183 + iVar3))) + Function_58((90 + iVar3)));
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
	Function_44(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_62() //Position: 0x38ED / 14573
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_63(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_44(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_63(int iParam0, bool bParam1, int iParam2) //Position: 0x3926 / 14630
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
	Function_57(iParam0, bParam1, 1);
	Function_56(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_45(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_64() //Position: 0x3B30 / 15152
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_22())
	{
		Function_70(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_70(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_65(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_65(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_586(StackVal, StackVal, vVar0))
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

vector3 Function_65(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3BEB / 15339
{
	int iVar0;
	
	iVar0 = Function_68(uParam2, uParam3);
	if (Function_67(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_610(&Global_63095, 1);
			Function_609(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_610(&Global_63095, 2);
			Function_609(&Global_63095, 1);
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
		Function_610(&Global_63095, 2);
		Function_609(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_66();
	return StackVal, StackVal, Function_66();
}

vector3 Function_66() //Position: 0x3CD2 / 15570
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_67(int iParam0) //Position: 0x3CDB / 15579
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_68(bool bParam0, bool bParam1) //Position: 0x3CF1 / 15601
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
				fVar2 = Function_69(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_69(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_67(bVar0) && !bParam1)
	{
		bVar0 = Function_68(bParam0, 1);
	}
	return bVar0;
}

float Function_69(vector3 vParam0, vector3 vParam3) //Position: 0x3DB8 / 15800
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_70(var uParam0, int iParam1) //Position: 0x3DD5 / 15829
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_72(Global_34573, &vVar4);
	if (!Function_71(Global_30640[0]))
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
	if (!Function_71(Global_30640[2]))
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
	if (!Function_71(Global_30640[1]))
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
	if (!Function_71(Global_30658[1]))
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
	if (!Function_71(Global_30658[3]))
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
	if (!Function_71(Global_30658[2]))
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
	if (!Function_71(Global_30658[4]))
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
	if (!Function_71(Global_30668[0]))
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
	if (!Function_71(Global_30668[1]))
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
	if (!Function_71(Global_30668[2]))
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
	if (!Function_71(Global_30679[0]))
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
	if (!Function_71(Global_30685[0]))
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
	if (!Function_71(Global_30685[1]))
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
	if (!Function_71(Global_30685[2]))
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
	if (!Function_71(Global_30693[0]))
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
	if (!Function_71(Global_30693[1]))
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
	if (!Function_71(Global_30693[2]))
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
	if (!Function_71(Global_30707[2]))
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
	if (!Function_71(Global_30707[3]))
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
	if (!Function_71(Global_30707[0]))
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
	if (!Function_71(Global_30717[0]))
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
	if (!Function_71(Global_30723[2]))
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
	if (!Function_71(Global_30723[1]))
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
	if (!Function_71(Global_30723[0]))
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
	if (!Function_71(Global_30679[1]))
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
	if (!Function_71(Global_30707[1]))
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
	Function_610(&Global_63095, 2);
	Function_609(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_586(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_71(int iParam0) //Position: 0x45FD / 17917
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_605(bVar0, 0x1000000) || Function_605(bVar0, 0x2000000)) || Function_605(bVar0, 0x4000000)) || !Function_605(bVar0, 0x10000000));
}

void Function_72(bool bParam0, int iParam1) //Position: 0x4638 / 17976
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_73(int iParam0) //Position: 0x4645 / 17989
{
	bool bVar0;
	int iVar1;
	
	if (!Function_24(iParam0))
	{
		return;
	}
	switch (Function_25(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_23(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_77(12, 1, 0, 0);
				Function_76(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_77(13, 1, 0, 0);
				Function_76(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_77(14, 1, 0, 0);
				Function_76(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_77(15, 1, 0, 0);
				Function_76(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_77(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_23(iParam0))
			{
				case 0x00000000:
					if (Function_75(iParam0) == 1)
					{
						bVar0 = Function_74(iParam0);
						if (Function_604(bVar0))
						{
							if (bVar0 == Global_30723[5])
							{
								Function_76(4, 18);
							}
							else if (bVar0 == Global_30693[3])
							{
								Function_76(4, 10);
							}
							else if (bVar0 == Global_30723[6])
							{
								Function_76(4, 16);
							}
							else if (bVar0 == Global_30668[3])
							{
								Function_76(4, 6);
							}
							else if (bVar0 == Global_30640[13])
							{
								Function_76(4, 3);
							}
							else if (bVar0 == Global_30693[7])
							{
								Function_76(4, 11);
							}
							else if (bVar0 == Global_30640[6])
							{
								Function_76(4, 0);
							}
							else if (bVar0 == Global_30693[10])
							{
								Function_76(4, 15);
							}
							else if (bVar0 == Global_30693[8])
							{
								Function_76(4, 14);
							}
							else if (bVar0 == Global_30640[11])
							{
								Function_76(4, 2);
							}
							else if (bVar0 == Global_30668[6])
							{
								Function_76(4, 7);
							}
							else if (bVar0 == Global_30723[3])
							{
								Function_76(4, 17);
							}
							else if (bVar0 == Global_30685[5])
							{
								Function_76(4, 8);
							}
							else if (bVar0 == Global_30693[9])
							{
								Function_76(4, 13);
							}
							else if (bVar0 == Global_30693[11])
							{
								Function_76(4, 12);
							}
							else if (bVar0 == Global_30640[7])
							{
								Function_76(4, 1);
							}
							else if (bVar0 == Global_30679[3])
							{
								Function_76(4, 5);
							}
							else if (bVar0 == Global_30693[4])
							{
								Function_76(4, 9);
							}
							else if (bVar0 == Global_30658[7])
							{
								Function_76(4, 4);
							}
							else if (bVar0 == Global_30723[4])
							{
								Function_76(4, 19);
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
								Function_77(363, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[1])
							{
								Function_77(364, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[2])
							{
								Function_77(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_74(iParam0) == 0)
			{
				if (Function_75(iParam0) == 1)
				{
					Function_77(458, 1, 0, 0);
					bVar0 = Function_23(iParam0);
					if (Function_604(bVar0))
					{
						if (bVar0 == Global_30668[2])
						{
							Function_76(2, 10);
						}
						else if (bVar0 == Global_30658[2])
						{
							Function_76(2, 11);
						}
						else if (bVar0 == Global_30640[2])
						{
							Function_76(2, 12);
						}
						else if (bVar0 == Global_30658[0])
						{
							Function_76(2, 13);
						}
						else if (bVar0 == Global_30658[3])
						{
							Function_76(2, 14);
						}
						else if (bVar0 == Global_30685[2])
						{
							Function_76(2, 15);
						}
						else if (bVar0 == Global_30685[1])
						{
							Function_76(2, 16);
						}
						else if (bVar0 == Global_30679[1])
						{
							Function_76(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_75(iParam0) == 1)
			{
				Function_77(400, 1, 0, 0);
			}
			switch (Function_23(iParam0))
			{
				case 0x00000001:
					Function_77(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_76(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_76(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_76(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_77(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_76(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_76(6, 9);
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

int Function_74(int iParam0) //Position: 0x4B21 / 19233
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 4) && 255);
}

int Function_75(int iParam0) //Position: 0x4B40 / 19264
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_76(int iParam0, bool bParam1) //Position: 0x4B5A / 19290
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

int Function_77(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4BC1 / 19393
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
	Function_57(iParam0, TO_FLOAT(bParam1), 1);
	Function_56(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_45(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_78() //Position: 0x4DE1 / 19937
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
	PLAYSTAT_INT("HC_MONEY", Function_58(0));
	PLAYSTAT_INT("HC_FAME", Function_58(3));
	PLAYSTAT_INT("HC_HONOR", Function_58(1));
	return;
}

void Function_79() //Position: 0x4F39 / 20281
{
	int iVar0;
	int iVar1;
	
	if (!Function_84(Global_6269))
	{
		return;
	}
	iVar0 = Function_58(24);
	iVar1 = Function_83(Global_6269);
	if (!Function_84(iVar0) && Function_82(iVar1) < 0)
	{
		Function_44(24, Global_6269, 0);
		Function_80(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_82(Function_83(iVar0)))
	{
		Function_44(24, Global_6269, 0);
		Function_80(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_80(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4FB9 / 20409
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
		Function_81(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_81(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x530B / 21259
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

int Function_82(int iParam0) //Position: 0x538E / 21390
{
	if (!Function_86(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_83(int iParam0) //Position: 0x53A8 / 21416
{
	if (!Function_84(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_84(int iParam0) //Position: 0x53C2 / 21442
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_85() //Position: 0x53D8 / 21464
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_86(int iParam0) //Position: 0x5403 / 21507
{
	if (!Function_24(iParam0))
	{
		return 0;
	}
	if (!Function_87(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_87(int iParam0) //Position: 0x5427 / 21543
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_88(int iParam0) //Position: 0x543C / 21564
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_89())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_89() //Position: 0x5478 / 21624
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

void Function_90() //Position: 0x549D / 21661
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_91(int iParam0) //Position: 0x54B1 / 21681
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_92(int iParam0) //Position: 0x54CE / 21710
{
	Function_93(iParam0);
	return;
}

void Function_93(int iParam0) //Position: 0x54D9 / 21721
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ITERATOR_VALID(StackVal))
	{
		DESTROY_ITERATOR(StackVal);
	}
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(iParam0->f_52) - 1))
		{
			GET_ACTOR_FROM_ACTORSET(iParam0->f_52, bVar2);
			bVar2++;
		}
		DESTROY_ACTORSET(iParam0->f_52);
	}
	if (SQUAD_IS_VALID(iParam0->f_60))
	{
		bVar2 = false;
		while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_60) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_60, bVar2);
			CLEAR_ACTOR_MAX_SPEED(bVar0);
			if (iParam0->f_160 == 0)
			{
				Function_107(iParam0, bVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(iParam0->f_60));
	}
	if (IS_ACTORSET_VALID(iParam0->f_64))
	{
		if (iParam0->f_160 == 0)
		{
			Function_98(iParam0->f_64, 2, 0, 2);
		}
		else
		{
			Function_96(iParam0->f_64);
		}
		DESTROY_ACTORSET(iParam0->f_64);
	}
	if (!Function_605(iParam0->f_92, 16))
	{
		RELEASE_LAYOUT_OBJECTS(*iParam0);
		DESTROY_LAYOUT(*iParam0);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_96))
	{
		Function_95(iParam0->f_96);
		DESTROY_OBJECTSET(iParam0->f_96);
	}
	bVar1 = Function_94(iParam0);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

var Function_94(int iParam0) //Position: 0x55EA / 21994
{
	bool bVar0;
	
	if (!IS_ITERATOR_VALID(StackVal))
	{
		return "";
	}
	bVar0 = START_OBJECT_ITERATOR(StackVal);
	return bVar0;
}

void Function_95(bool bParam0) //Position: 0x5609 / 22025
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_96(bool bParam0) //Position: 0x564E / 22094
{
	bool bVar0;
	
	Function_97(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_97(int iParam0) //Position: 0x5696 / 22166
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*iParam0, GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_98(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x56EF / 22255
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_99(bVar0, iParam1, iParam2, iParam3, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar0));
			}
			bVar1++;
		}
		DISBAND_ACTORSET(bParam0);
		return 1;
	}
	return 0;
}

int Function_99(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x5756 / 22358
{
	char* cVar0[32];
	
	Function_106();
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
	if (Function_105(bParam0) == 1)
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
	Function_104(bParam0, 0);
	Function_103(bParam0, iParam1);
	Function_102(bParam0, iParam2);
	Function_101(bParam0, iParam3);
	if (Function_100(bParam0) != 5)
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

int Function_100(bool bParam0) //Position: 0x59A4 / 22948
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x59C7 / 22983
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_102(bool bParam0, bool bParam1) //Position: 0x59EA / 23018
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_103(bool bParam0, bool bParam1) //Position: 0x5A0E / 23054
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_104(bool bParam0, bool bParam1) //Position: 0x5A34 / 23092
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_105(bool bParam0) //Position: 0x5A57 / 23127
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_106() //Position: 0x5A75 / 23157
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

int Function_107(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5ABF / 23231
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (Function_116(bParam1, uParam0->f_60, 1))
	{
		SQUAD_LEAVE(bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam1)))
		{
			if (GET_MOUNT(bParam1) != Function_108(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (iParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(bParam1));
				}
				else
				{
					Function_127(GET_MOUNT(bParam1), iParam2, 0, 2);
				}
			}
		}
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_127(bParam1, iParam2, 0, 2);
		}
	}
	else if (IS_ACTOR_IN_ACTORSET(uParam0->f_64, bParam1))
	{
		REMOVE_ACTORSET_MEMBER(uParam0->f_64, bParam1);
		if (iParam3 == 1)
		{
			DESTROY_ACTOR(bParam1);
		}
		else
		{
			Function_127(bParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_108(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7) //Position: 0x5B6B / 23403
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_115(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_114())
		{
			return "";
		}
	}
	if (!Function_112())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_111();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_588(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_588(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_588(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_588(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_110(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_110(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_34() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_130(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_130(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_586(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_130(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_130(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_109(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_34() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_109(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5EC1 / 24257
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_110(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5EFE / 24318
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

void Function_111() //Position: 0x5F99 / 24473
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

bool Function_112() //Position: 0x600B / 24587
{
	if (Function_113() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_113() //Position: 0x6021 / 24609
{
	return Global_12976.f_152;
}

bool Function_114() //Position: 0x602C / 24620
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_115(var uParam0, bool bParam1, bool bParam2) //Position: 0x604C / 24652
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_610(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_610(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_116(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6079 / 24697
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

void Function_117() //Position: 0x60B9 / 24761
{
	bool bVar0;
	
	bVar0 = Function_468();
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

void Function_118(int iParam0) //Position: 0x60D1 / 24785
{
	Function_119(&Global_28842, iParam0);
	return;
}

void Function_119(var uParam0, int iParam1) //Position: 0x60DF / 24799
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_120(int iParam0) //Position: 0x60FA / 24826
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_121(int iParam0) //Position: 0x610D / 24845
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_122(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_122(var uParam0, int iParam1) //Position: 0x6133 / 24883
{
	if (Function_124(uParam0[iParam13], 4))
	{
		if (Function_124(uParam0[iParam13], 1))
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
			Function_123(uParam0[iParam13], 1);
			Function_123(uParam0[iParam13], 2);
			Function_123(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_123(var uParam0, int iParam1) //Position: 0x6261 / 25185
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_124(var uParam0, int iParam1) //Position: 0x627B / 25211
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_125(bool bParam0) //Position: 0x6298 / 25240
{
	if (Function_605(bParam0->f_780, 0x10000000))
	{
		UI_EXIT("WHATEVA_prog");
		UI_EXIT("WHATEVA");
		HUD_TIMER_DISPLAY(0);
		UI_POP("Stagecoach_Job");
		Function_609(bParam0 + 780, 0x10000000);
	}
	return;
}

void Function_126(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x62F2 / 25330
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
	if (!Function_586(StackVal, StackVal, vParam1))
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

int Function_127(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x63FA / 25594
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
					Function_99(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_99(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_128(bool bParam0, bool bParam1) //Position: 0x64DA / 25818
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "translib_state", bParam1);
	return;
}

void Function_129(int iParam0) //Position: 0x64FC / 25852
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(iParam0->f_968))
	{
		while (GET_OBJECTSET_SIZE(iParam0->f_968) >= 0)
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_968);
			if (IS_OBJECT_VALID(bVar0))
			{
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					MAKE_ACTOR_READY_FOR_ACTION(GET_ACTOR_FROM_OBJECT(bVar0), 1);
					if (Function_605(iParam0->f_780, 0x8000000))
					{
						Function_127(GET_ACTOR_FROM_OBJECT(bVar0), 2, 0, 4);
					}
					else
					{
						Function_127(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0, 2);
					}
				}
				else
				{
					RELEASE_OBJECT_REF(bVar0);
				}
			}
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0->f_968);
			CLEAN_OBJECTSET(iParam0->f_968);
		}
	}
	return;
}

var Function_130() //Position: 0x6588 / 25992
{
	int iVar0;
	
	return iVar0;
}

void Function_131(bool bParam0) //Position: 0x6590 / 26000
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_132(int iParam0) //Position: 0x65AB / 26027
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_133(105)), 0);
	return;
}

int Function_133(int iParam0) //Position: 0x65CC / 26060
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_134(int iParam0) //Position: 0x65E2 / 26082
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_133(90)), 0);
	return;
}

bool Function_135(int iParam0, float fParam1) //Position: 0x6603 / 26115
{
	if (Function_138(iParam0))
	{
		if (Function_136(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_136(int iParam0) //Position: 0x661F / 26143
{
	if (Function_138(iParam0))
	{
		if (Function_137(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_137(int iParam0) //Position: 0x66E7 / 26343
{
	return Function_605(*iParam0, 2);
}

bool Function_138(int iParam0) //Position: 0x66F4 / 26356
{
	return Function_605(*iParam0, 1);
}

void Function_139(int iParam0) //Position: 0x6701 / 26369
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
	if (!Function_605(iParam0->f_584, 512) && Function_605(iParam0->f_584, 256))
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
						Function_145(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(bVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(bVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(iParam0->f_540);
		}
		if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
		{
			Function_145(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
		}
		*(iParam0 + 544) = { 0.0f, 0.0f, 0.0f };
		iParam0->f_556 = 0;
		Function_142(1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_141(1.0f);
		Function_140(iParam0, 5);
		if (Function_605(iParam0->f_584, 32768))
		{
			Function_91(256);
		}
		Function_610(iParam0 + 584, 512);
		Function_609(iParam0 + 584, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_140(int iParam0, int iParam1) //Position: 0x68BC / 26812
{
	iParam0->f_532 = iParam1;
	return;
}

void Function_141(bool bParam0) //Position: 0x68C9 / 26825
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

void Function_142(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x68E6 / 26854
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
		bVar0 = Function_5();
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
			if (Function_34())
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
		Function_77(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_144();
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
	Function_143(uParam9);
}

void Function_143(int iParam0) //Position: 0x69D6 / 27094
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
		Function_111();
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

void Function_144() //Position: 0x6A85 / 27269
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_145(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6A9A / 27290
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

int Function_146(int iParam0) //Position: 0x6B34 / 27444
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
			if (Function_586(StackVal, StackVal, *(iParam0 + 544)))
			{
				GET_POSITION(Global_34573, iParam0 + 544);
			}
			if (!Function_586(StackVal, StackVal, *(iParam0 + 544)))
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
					Function_162(Global_34573, 0);
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
						Function_140(iParam0, 4);
						Function_469(iParam0 + 508);
					}
					else
					{
						Function_140(iParam0, 3);
					}
					break;
				
				default:
					Function_140(iParam0, 4);
					Function_469(iParam0 + 508);
					break;
			}
			break;
		
		case 0x00000002:
			if (!Function_586(StackVal, StackVal, *(iParam0 + 544)))
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 544), 10.0f))
				{
					if (!IS_CUTSCENEOBJECT_PAUSED(iParam0->f_500) && HUD_IS_FADED())
					{
						Function_141(1.0f);
						Function_140(iParam0, 4);
						Function_469(iParam0 + 508);
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
						Function_127(GET_VEHICLE(Global_34573), 0, 0, 2);
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
				bVar1 = Function_161(iParam0, 1);
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
				Function_140(iParam0, 4);
				Function_469(iParam0 + 508);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(iParam0->f_500))
			{
				switch (iParam0->f_536)
				{
					case 0x00000003:
						if (Function_159(iParam0 + 508, 5.0f))
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
									Function_158(Global_34573);
									vVar9 = { StackVal, StackVal, Function_158(Global_34573) };
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
								Function_155(bVar2, Global_34573);
								Function_609(iParam0 + 584, 2048);
								if (IS_ACTOR_VALID(bVar0))
								{
									vVar9.x = (vVar9.x + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar0), vVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(bVar0, 5.0f, 0, 0);
								}
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_135(iParam0 + 508, 0.5f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_135(iParam0 + 508, 7.0f))
								{
									bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
									bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
									bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
									bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
									bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
									Function_154(iParam0, bVar1, bVar2, 4);
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
										Function_469(iParam0 + 508);
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
									if (Function_136(iParam0 + 508) < 0.75f && !Function_605(iParam0->f_584, 2048))
									{
										SNAP_ACTOR_TO_GRINGO(bVar2, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", 0, 0, 0);
										SET_ACTOR_UPDATE_PRIORITY(bVar2, false);
										TASK_PRIORITY_SET(bVar2, 1);
										TASK_USE_GRINGO(bVar2, iParam0->f_496, "ChildUse", 1, 1);
										Function_610(iParam0 + 584, 2048);
										Function_469(iParam0 + 508);
										iParam0->f_556++;
									}
								}
								break;
							
							case 0x00000005:
								if (Function_135(iParam0 + 508, 9.0f))
								{
									Function_140(iParam0, 5);
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
								Function_609(iParam0 + 584, 2048);
								if (IS_ACTOR_VALID(bVar0))
								{
									vVar9.x = (vVar9.x + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(bVar0), vVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(bVar0, 5.0f, 0, 0);
								}
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_135(iParam0 + 508, 0.5f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_135(iParam0 + 508, 7.0f))
								{
									bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
									bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, iParam0->f_540);
									bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540);
									bVar1 = GET_ACTOR_FROM_OBJECT(bVar4);
									bVar2 = GET_ACTOR_FROM_OBJECT(bVar6);
									Function_154(iParam0, bVar1, bVar2, 4);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(iParam0->f_496))
								{
									SNAP_ACTOR_TO_GRINGO(bVar1, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "UseCase1", 0, 0, 0);
									TASK_USE_GRINGO(bVar1, iParam0->f_496, "UseCase1", 1, 1);
									Function_469(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_136(iParam0 + 508) < 0.75f && !Function_605(iParam0->f_584, 2048))
								{
									SNAP_ACTOR_TO_GRINGO(bVar2, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", 0, 0, 0);
									SET_ACTOR_UPDATE_PRIORITY(bVar2, false);
									TASK_PRIORITY_SET(bVar2, 1);
									TASK_USE_GRINGO(bVar2, iParam0->f_496, "ChildUse", 1, 1);
									Function_610(iParam0 + 584, 2048);
									Function_469(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000005:
								if (Function_135(iParam0 + 508, 9.0f))
								{
									Function_140(iParam0, 5);
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
								if ((HAS_ACTION_TREE_LOADED("custom/stand_hostage") && HAS_ANIM_SET_LOADED("handoff")) || Function_135(iParam0 + 508, 1.0f))
								{
									Function_469(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000001:
								bVar0 = Function_161(iParam0, 1);
								if (IS_ACTOR_VALID(bVar0))
								{
									Function_72(bVar0, &vVar9);
								}
								else
								{
									vVar9 = { 0.0f, 0.0f, 0.0f };
								}
								if ((Function_135(iParam0 + 508, 0.5f) || iParam0->f_560 != 1) || VDIST(Global_34574, vVar9) > 3.0f)
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
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("bhCutsceneVol") };
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
								Function_151(bVar0, Function_161(iParam0, 0), 0, 1);
								bVar32 = false;
								while (bVar32 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
								{
									bVar0 = Function_161(iParam0, bVar32);
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
												Function_145(bVar0, 1, 1);
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
												else if (iParam0->f_536 == 7)
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
												if (!IS_ACTOR_VALID(Function_161(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_161(iParam0, 0), -1.0f, 0);
													UNK_0x2E84E682(bVar0, 0);
													GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 1, 1);
													ACTOR_DRAW_ANY_WEAPON(bVar0, 0);
													AI_GOAL_AIM_AT_OBJECT(bVar0, Function_161(iParam0, 0), 0);
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
												if (!IS_ACTOR_VALID(Function_161(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_161(iParam0, 0), -1.0f, 0);
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
												if (IS_ACTOR_VALID(Function_161(iParam0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(bVar0, 0);
													TASK_FACE_ACTOR(bVar0, Global_34573, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(bVar0, Function_161(iParam0, 0), -1.0f, 0);
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
									bVar7 = Function_150(Global_30640[0], "narmadillo", "sheriffsOffice", 1);
									bVar8 = "";
									vVar9 = { -822.845f, 93.809f, 2423.713f };
								}
								else if (iParam0->f_536 == 5)
								{
									bVar7 = Function_150(Global_30717[0], "blackwater", "policeStation01", 1);
									bVar8 = Function_150(Global_30717[0], "blackwater", "policeStation01", 2);
									vVar9 = { 761.697f, 79.456f, 1235.028f };
								}
								else if (iParam0->f_536 == 6)
								{
									bVar7 = Function_150(Global_30693[0], "nchuparosa", "cityHall01", 6);
									bVar8 = Function_150(Global_30693[0], "nchuparosa", "cityHall01", 1);
									vVar9 = { -2668.537f, 31.387f, 4253.711f };
								}
								else if (iParam0->f_536 == 7)
								{
									bVar7 = Function_150(Global_30668[0], "hennigansRanch", "stockade01", 1);
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
								Function_469(iParam0 + 508);
								iParam0->f_556++;
								break;
							
							case 0x00000003:
								if (Function_135(iParam0 + 508, 1.11f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								bVar1 = Function_161(iParam0, 0);
								if (!IS_ACTOR_VALID(bVar1))
								{
									bVar1 = Global_34573;
								}
								bVar2 = Function_161(iParam0, 1);
								bVar3 = Function_161(iParam0, 2);
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
								Function_145(bVar2, 1, 1);
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
								Function_155(bVar2, Global_34573);
								Function_155(Global_34573, bVar2);
								RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								SET_ANIM_SET_FOR_ACTOR(bVar2, "handoff", 0);
								SET_LINKED_ANIM_TARGET(bVar2, Global_34573);
								SET_ACTION_NODE_FOR_ACTOR(bVar2, "handoff");
								SAY_SINGLE_LINE_CONTEXT(bVar2, 299, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
								iParam0->f_556++;
								break;
							
							case 0x00000005:
								if (Function_135(iParam0 + 508, 7.0f))
								{
									iParam0->f_556++;
								}
								break;
							
							case 0x00000006:
								bVar2 = Function_161(iParam0, 1);
								REMOVE_ACTION_TREE("custom/stand_hostage");
								REMOVE_ACTION_TREE("custom/handoff");
								REMOVE_ANIM_SET("handoff");
								CLEAR_LINKED_ANIM_TARGET(Global_34573);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
								Function_140(iParam0, 5);
								bVar32 = false;
								while (bVar32 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
								{
									bVar0 = Function_161(iParam0, bVar32);
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
								bVar0 = Function_161(iParam0, 0);
								RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
								RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
								Function_145(bVar0, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bVar0, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, 0);
								if (IS_ACTOR_CRIPPLED(bVar0, 5))
								{
									SET_CRIPPLE_FLAG(bVar0, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutsceneGringo") };
									Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar9 = { StackVal, StackVal, Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar15 = { StackVal, StackVal, Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
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
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 6.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar12 = { StackVal, StackVal, Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar18 = { StackVal, StackVal, Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								if (!Function_586(StackVal, StackVal, vVar12))
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
								bVar0 = Function_161(iParam0, 0);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(iParam0->f_496, "Male", &vVar9);
									TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar9, GRINGO_GET_USE_COMPONENT_HEADING_EXT(iParam0->f_496, "Male"), 1, 1, 1);
									TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
									Function_469(iParam0 + 508);
									DECOR_SET_BOOL(Global_34573, "escwavReady", true);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								if (Function_135(iParam0 + 508, 2.0f))
								{
									TASK_USE_GRINGO(Global_34573, iParam0->f_496, "Male", 1, 1);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								if (Function_135(iParam0 + 508, 3.0f))
								{
									bVar0 = Function_161(iParam0, 0);
									SAY_SINGLE_LINE_CONTEXT(bVar0, 103, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
									Function_469(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_135(iParam0 + 508, 5.5f))
								{
									DECOR_REMOVE(Global_34573, "escwavReady");
									Function_140(iParam0, 5);
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
								bVar1 = Function_161(iParam0, 0);
								bVar2 = Function_161(iParam0, 1);
								vVar9 = { -3.0f, 0.0f, -1.0f };
								vVar15 = { 0.0f, 0.0f, 0.0f };
								Function_147(GET_OBJECT_FROM_ACTOR(bVar1), 1, &vVar9, &vVar15);
								Function_145(bVar2, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(bVar2, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar2, 0);
								if (IS_ACTOR_CRIPPLED(bVar2, 5))
								{
									SET_CRIPPLE_FLAG(bVar2, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
								{
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutsceneGringo") };
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
								TASK_VEHICLE_ENTER(false, bVar1, 1, 1);
								TASK_SEQUENCE_CLOSE();
								TASK_PRIORITY_SET(bVar0, 1);
								TASK_SEQUENCE_PERFORM(bVar2, bVar32);
								if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
								{
									vVar12 = { -5.0f, 0.0f, 0.0f };
									vVar18 = { 0.0f, 90.0f, 0.0f };
									Function_147(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540), 1, &vVar12, &vVar18);
									TELEPORT_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573), &vVar12, 1, 1, 1);
									SNAP_OBJECT_TO_GROUND(GET_MOST_RECENT_MOUNT(Global_34573), 100.0f, false, 1092616192);
								}
								if (IS_OBJECT_VALID(iParam0->f_504))
								{
									DESTROY_VOLUME(iParam0->f_504);
								}
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								Function_469(iParam0 + 508);
								iParam0->f_556++;
								break;
							
							case 0x00000001:
								if (Function_135(iParam0 + 508, 8.5f))
								{
									bVar1 = Function_161(iParam0, 0);
									bVar2 = Function_161(iParam0, 1);
									START_VEHICLE(bVar1);
									SET_VEHICLE_ALLOWED_TO_DRIVE(bVar1, 1);
									if (!GET_ACTOR_IN_VEHICLE_SEAT(bVar1, false) != bVar2)
									{
										SET_ACTOR_IN_VEHICLE(bVar2, bVar1, false);
									}
									TASK_CLEAR(bVar2);
									TASK_PRIORITY_SET(bVar2, 1);
									TASK_FLEE_COORD(bVar2, &Global_34574, 4, -1.0f, -1.0f, 0);
									Function_140(iParam0, 5);
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
								Function_469(iParam0 + 508);
								PLAY_CUTSCENEOBJECT(iParam0->f_500, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								if (IS_OBJECT_VALID(iParam0->f_504))
								{
									DESTROY_VOLUME(iParam0->f_504);
								}
								Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("bhCutsceneVol") };
								iParam0->f_504 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_28, &Var24, 3, *(iParam0 + 544), 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_504);
								CLEAR_AMBIENT_OBJECTS_VOLUME(iParam0->f_504, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(iParam0->f_504);
								bVar2 = Function_161(iParam0, 1);
								Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar12 = { StackVal, StackVal, Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540));
								vVar18 = { StackVal, StackVal, Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(3, iParam0->f_540)) };
								if (!Function_586(StackVal, StackVal, vVar12))
								{
									if (IS_ACTOR_VALID(bVar2))
									{
										STOP_VEHICLE(bVar2);
										TELEPORT_ACTOR_WITH_HEADING(bVar2, vVar12, GET_Y(&vVar18), 1, 1, 1);
									}
								}
								bVar1 = Function_161(iParam0, 0);
								Function_145(bVar1, 1, 1);
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
									Var24 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutsceneGringo") };
									Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar9 = { StackVal, StackVal, Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
									Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540));
									vVar15 = { StackVal, StackVal, Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(2, iParam0->f_540)) };
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
								bVar1 = Function_161(iParam0, 0);
								bVar2 = Function_161(iParam0, 1);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(iParam0->f_496, "ChildUse", &vVar9);
									SNAP_ACTOR_TO_GRINGO(bVar1, GET_OBJECT_FROM_GRINGO(iParam0->f_496), "ChildUse", 1, 0, 0);
									bVar32 = TASK_SEQUENCE_OPEN();
									TASK_USE_GRINGO(false, iParam0->f_496, "ChildUse", 1, 1);
									TASK_FACE_ACTOR(false, bVar2, 0, 3212836864);
									TASK_VEHICLE_ENTER(false, bVar2, 1, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar1, bVar32);
									TASK_SEQUENCE_RELEASE(bVar32, 1);
									TASK_PRIORITY_SET(bVar1, 1);
									Function_469(iParam0 + 508);
									DECOR_SET_BOOL(Global_34573, "transportReady", true);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000002:
								bVar1 = Function_161(iParam0, 0);
								bVar2 = Function_161(iParam0, 1);
								if (Function_135(iParam0 + 508, 5.0f))
								{
									START_VEHICLE(bVar2);
									SET_VEHICLE_ALLOWED_TO_DRIVE(bVar2, 1);
									Function_469(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000003:
								bVar1 = Function_161(iParam0, 0);
								bVar2 = Function_161(iParam0, 1);
								if (Function_135(iParam0 + 508, 2.5f))
								{
									if (!IS_ACTOR_RIDING_VEHICLE(bVar1))
									{
										TASK_CLEAR(bVar1);
										SET_ACTOR_IN_VEHICLE(bVar1, bVar2, false);
									}
									Function_469(iParam0 + 508);
									iParam0->f_556++;
								}
								break;
							
							case 0x00000004:
								if (Function_135(iParam0 + 508, 1.0f))
								{
									bVar1 = Function_161(iParam0, 0);
									bVar2 = Function_161(iParam0, 1);
									TASK_CLEAR(bVar1);
									Function_140(iParam0, 5);
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
				Function_141(1.0f);
				Function_140(iParam0, 5);
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

void Function_147(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x9686 / 38534
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_148(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
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

bool Function_148(var uParam0, int iParam1) //Position: 0x97AE / 38830
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_586(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_586(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

vector3 Function_149(bool bParam0) //Position: 0x9819 / 38937
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

var Function_150(bool bParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x9840 / 38976
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_604(bParam0))
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

int Function_151(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x98DC / 39132
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

struct<32> Function_152(bool bParam0) //Position: 0x992F / 39215
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_153("0", &cVar8, ""), 4);
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

struct<32> Function_153(char* cParam0, char* cParam1, char* cParam2) //Position: 0x9999 / 39321
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_154(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x99B8 / 39352
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
			Function_588(GET_OBJECT_FROM_ACTOR(bParam1));
			vVar0 = { StackVal, StackVal, Function_588(GET_OBJECT_FROM_ACTOR(bParam1)) };
			Function_149(GET_OBJECT_FROM_ACTOR(bParam1));
			vVar3 = { StackVal, StackVal, Function_149(GET_OBJECT_FROM_ACTOR(bParam1)) };
			if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
			{
				Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutsceneGringo") };
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

void Function_155(bool bParam0, bool bParam1) //Position: 0x9AFB / 39675
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_156(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_156(bool bParam0, vector3 vParam1) //Position: 0x9B15 / 39701
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_157(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_157(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_157(bool bParam0, vector3 vParam1) //Position: 0x9B4D / 39757
{
	vector3 vVar0;
	
	Function_158(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_158(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_158(bool bParam0) //Position: 0x9BD0 / 39888
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_159(var uParam0, float fParam1) //Position: 0x9BE1 / 39905
{
	if (Function_135(uParam0, fParam1))
	{
		Function_160(uParam0);
		return 1;
	}
	return 0;
}

void Function_160(int iParam0) //Position: 0x9BF9 / 39929
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_161(int iParam0, bool bParam1) //Position: 0x9C0D / 39949
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

void Function_162(bool bParam0, bool bParam1) //Position: 0x9C88 / 40072
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
	else if (!bParam1 || Function_163(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_163(bool bParam0, bool bParam1) //Position: 0x9CE5 / 40165
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_164(int iParam0) //Position: 0x9D04 / 40196
{
	bool bVar0;
	bool bVar1;
	
	Function_261(iParam0, iParam0->f_976, 0);
	Function_261(iParam0, iParam0->f_860, 1);
	Function_260(StackVal, StackVal, iParam0, *(iParam0 + 924));
	if (iParam0->f_916 == Global_30640[0])
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -2140.153f, 16.351f, 2605.842f, 0.0f, 270.774f, 0.0f);
		bVar1 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -4260.107f, 19.033f, 4465.096f, 0.0f, 142.267f, 0.0f);
		Function_259(iParam0, 8);
	}
	else if (iParam0->f_916 == Global_30717[0])
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), 781.004f, 78.414f, 1318.502f, 0.0f, 0.114f, 0.0f);
		bVar1 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), 785.054f, 78.306f, 1314.707f, 0.0f, 353.711f, 0.0f);
		Function_259(iParam0, 9);
	}
	else if (iParam0->f_916 == Global_30693[0])
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -2748.023f, 31.861f, 4297.732f, 0.0f, 134.077f, 0.0f);
		bVar1 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -2748.643f, 31.859f, 4301.838f, 0.0f, 236.213f, 0.0f);
		Function_259(iParam0, 10);
	}
	else if (iParam0->f_916 == Global_30685[0])
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -4262.798f, 18.816f, 4462.007f, 0.0f, 294.5f, 0.0f);
		bVar1 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -4257.874f, 18.994f, 4464.818f, 0.0f, 348.761f, 0.0f);
		Function_259(iParam0, 11);
	}
	else if (iParam0->f_916 == Global_30668[0])
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -827.779f, 92.169f, 2402.762f, 0.0f, 173.812f, 0.0f);
		bVar1 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -828.606f, 92.134f, 2405.592f, 0.0f, 260.09f, 0.0f);
		Function_259(iParam0, 12);
	}
	else if (iParam0->f_916 == Global_30723[1])
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -426.999f, 151.323f, 1619.561f, 0.0f, 332.185f, 0.0f);
		bVar1 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), -425.893f, 151.102f, 1612.597f, 0.0f, 359.771f, 0.0f);
		Function_259(iParam0, 13);
	}
	else if (iParam0->f_916 == Global_30668[1])
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), 161.43f, 73.286f, 2200.903f, 0.0f, 292.513f, 0.0f);
		bVar1 = CREATE_POINT_IN_LAYOUT(iParam0->f_776, Function_130(), 165.354f, 73.083f, 2201.864f, 0.0f, 299.439f, 0.0f);
		Function_259(iParam0, 14);
	}
	else
	{
		LOG_ERROR("TRANSPORT_START_CUTSCENE: Unhandled cutscene type");
		Function_259(iParam0, 8);
	}
	SNAP_OBJECT_TO_GROUND(bVar0, -100.0f, false, 1092616192);
	SNAP_OBJECT_TO_GROUND(bVar1, -100.0f, false, 1092616192);
	Function_261(iParam0, bVar0, 2);
	Function_261(iParam0, bVar1, 3);
	Function_165(iParam0, iParam0->f_776, 0);
	return;
}

int Function_165(int iParam0, var uParam1, bool bParam2) //Position: 0xA03A / 41018
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
			iParam0->f_500 = Function_253(uParam1, 0, bVar0, 1, 0, 0);
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
			iParam0->f_500 = Function_248(uParam1, 0, bVar0, bVar1, 1, 0, 0);
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
			iParam0->f_500 = Function_245(uParam1, 0, bVar0, 1, 0, 0);
			break;
		
		case 0x00000004:
			Function_145(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_240(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000005:
			Function_145(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_235(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000006:
			Function_145(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_230(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x00000007:
			Function_145(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
			iParam0->f_500 = Function_225(iParam0->f_28, 0, 1, 1, 0);
			break;
		
		case 0x0000000F:
			iParam0->f_500 = Function_221(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000010:
			iParam0->f_500 = Function_217(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000011:
			iParam0->f_500 = Function_213(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000012:
			iParam0->f_500 = Function_209(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000013:
			iParam0->f_500 = Function_205(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000014:
			iParam0->f_500 = Function_201(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000015:
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			iParam0->f_500 = Function_198(iParam0->f_28, 0, Global_34573, bVar0, 1, 1, 0);
			break;
		
		case 0x00000008:
			iParam0->f_500 = Function_194(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000009:
			iParam0->f_500 = Function_190(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000A:
			iParam0->f_500 = Function_186(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000B:
			iParam0->f_500 = Function_182(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000C:
			iParam0->f_500 = Function_178(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000D:
			iParam0->f_500 = Function_174(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x0000000E:
			iParam0->f_500 = Function_170(iParam0->f_28, 0, Global_34573, 1, 1, 0);
			break;
		
		case 0x00000000:
		default:
			LOG_ERROR("Unhandled Procmission Cutscene Type");
			break;
	}
	Function_140(iParam0, 1);
	if (bParam2 == 1)
	{
		Function_610(iParam0 + 584, 32768);
		Function_120(256);
	}
	if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
	{
		Function_166(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
	}
	else
	{
		Function_166(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	}
	Function_610(iParam0 + 584, 256);
	return 1;
}

void Function_166(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xA412 / 42002
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
	Function_144();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_5();
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
			if (Function_34())
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
				Function_158(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_130(), 2, Function_158(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_77(19, 1, 0, 0);
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
	if (iParam10 && !Function_22())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_169()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_169()));
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
	if (Function_168(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_167(0x4000000);
	}
	if (Function_168(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_167(0x8000000);
	}
}

void Function_167(bool bParam0) //Position: 0xA6C0 / 42688
{
	bool bVar0;
	
	if (Function_605(bParam0, 1) && Function_605(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_168(int iParam0) //Position: 0xA6F4 / 42740
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_169() //Position: 0xA710 / 42768
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

var Function_170(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA78F / 42895
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_THI", 2, 1);
	}
	Function_171(&bVar0, uParam2);
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

void Function_171(var uParam0, char* cParam1) //Position: 0xA812 / 43026
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_173(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_172(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_172(int iParam0) //Position: 0xA877 / 43127
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

void Function_173(bool bParam0) //Position: 0xA8E1 / 43233
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

var Function_174(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xA94B / 43339
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_MAN", 2, 1);
	}
	Function_175(&bVar0, uParam2);
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

void Function_175(var uParam0, char* cParam1) //Position: 0xA9CE / 43470
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_177(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_176(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_176(int iParam0) //Position: 0xAA33 / 43571
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

void Function_177(bool bParam0) //Position: 0xAA9D / 43677
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

var Function_178(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAB07 / 43783
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_HEN", 2, 1);
	}
	Function_179(&bVar0, uParam2);
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

void Function_179(var uParam0, char* cParam1) //Position: 0xAB8A / 43914
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_181(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_180(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_180(int iParam0) //Position: 0xABEF / 44015
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

void Function_181(bool bParam0) //Position: 0xAC59 / 44121
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

var Function_182(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xACC3 / 44227
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_ESC", 2, 1);
	}
	Function_183(&bVar0, uParam2);
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

void Function_183(var uParam0, char* cParam1) //Position: 0xAD46 / 44358
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_185(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_184(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_184(int iParam0) //Position: 0xADAB / 44459
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

void Function_185(bool bParam0) //Position: 0xAE15 / 44565
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

var Function_186(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xAE7F / 44671
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_CHU", 2, 1);
	}
	Function_187(&bVar0, uParam2);
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

void Function_187(var uParam0, char* cParam1) //Position: 0xAF02 / 44802
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_189(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_188(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 1, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 0, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 11.0f, 2);
	return;
}

void Function_188(int iParam0) //Position: 0xAF67 / 44903
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

void Function_189(bool bParam0) //Position: 0xAFD1 / 45009
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

var Function_190(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB03B / 45115
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_BLA", 2, 1);
	}
	Function_191(&bVar0, uParam2);
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

void Function_191(var uParam0, char* cParam1) //Position: 0xB0BE / 45246
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_193(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_192(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_192(int iParam0) //Position: 0xB123 / 45347
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

void Function_193(bool bParam0) //Position: 0xB18D / 45453
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

var Function_194(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB1F7 / 45559
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TransportDynamite_ARM", 2, 1);
	}
	Function_195(&bVar0, uParam2);
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

void Function_195(var uParam0, char* cParam1) //Position: 0xB27A / 45690
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_197(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_196(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "transportReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 11.0f, 2);
	return;
}

void Function_196(int iParam0) //Position: 0xB2DF / 45791
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

void Function_197(int iParam0) //Position: 0xB349 / 45897
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

var Function_198(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0xB3B3 / 46003
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "mAtkDef_Bandit_End", 1, 1);
	}
	Function_199(&bVar0, uParam2, uParam3);
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

void Function_199(var uParam0, var uParam1, int iParam2) //Position: 0xB435 / 46133
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_200(&bVar0, uParam1, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 8.5f, 0);
	return;
}

void Function_200(var uParam0, bool bParam1, bool bParam2) //Position: 0xB462 / 46178
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

var Function_201(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB500 / 46336
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_THI", 2, 1);
	}
	Function_202(&bVar0, uParam2);
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

void Function_202(var uParam0, char* cParam1) //Position: 0xB580 / 46464
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_204(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_203(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_203(int iParam0) //Position: 0xB5EC / 46572
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

void Function_204(bool bParam0) //Position: 0xB656 / 46678
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

var Function_205(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB6C0 / 46784
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_HEN", 2, 1);
	}
	Function_206(&bVar0, uParam2);
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

void Function_206(var uParam0, char* cParam1) //Position: 0xB740 / 46912
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_208(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_207(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_207(int iParam0) //Position: 0xB7AC / 47020
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

void Function_208(bool bParam0) //Position: 0xB816 / 47126
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

var Function_209(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB880 / 47232
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_ESC", 2, 1);
	}
	Function_210(&bVar0, uParam2);
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

void Function_210(var uParam0, char* cParam1) //Position: 0xB900 / 47360
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_212(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_211(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_211(int iParam0) //Position: 0xB96C / 47468
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

void Function_212(bool bParam0) //Position: 0xB9D6 / 47574
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

var Function_213(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBA40 / 47680
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_CHU", 2, 1);
	}
	Function_214(&bVar0, uParam2);
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

void Function_214(var uParam0, char* cParam1) //Position: 0xBAC0 / 47808
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_216(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_215(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_215(int iParam0) //Position: 0xBB2C / 47916
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

void Function_216(bool bParam0) //Position: 0xBB96 / 48022
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

var Function_217(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBC00 / 48128
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_BLA", 2, 1);
	}
	Function_218(&bVar0, uParam2);
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

void Function_218(var uParam0, char* cParam1) //Position: 0xBC80 / 48256
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_220(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_219(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_219(int iParam0) //Position: 0xBCEC / 48364
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

void Function_220(bool bParam0) //Position: 0xBD56 / 48470
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

var Function_221(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBDC0 / 48576
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "EscortWavedown_ARM", 2, 1);
	}
	Function_222(&bVar0, uParam2);
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

void Function_222(var uParam0, char* cParam1) //Position: 0xBE40 / 48704
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_224(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_223(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 3.0f, 3);
	return;
}

void Function_223(int iParam0) //Position: 0xBEAC / 48812
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

void Function_224(int iParam0) //Position: 0xBF16 / 48918
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

var Function_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xBF80 / 49024
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterHenEnd", 3, 1);
	}
	Function_226(&bVar0);
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

void Function_226(int iParam0) //Position: 0xC000 / 49152
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_229(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_228(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_227(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_227(int iParam0) //Position: 0xC069 / 49257
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

void Function_228(int iParam0) //Position: 0xC0D3 / 49363
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

void Function_229(int iParam0) //Position: 0xC13D / 49469
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

var Function_230(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC1A7 / 49575
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterChuEnd", 3, 1);
	}
	Function_231(&bVar0);
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

void Function_231(int iParam0) //Position: 0xC225 / 49701
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_234(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_233(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_232(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_232(int iParam0) //Position: 0xC28E / 49806
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

void Function_233(int iParam0) //Position: 0xC2F8 / 49912
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

void Function_234(int iParam0) //Position: 0xC362 / 50018
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

var Function_235(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC3CC / 50124
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterBlkEnd", 3, 1);
	}
	Function_236(&bVar0);
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

void Function_236(int iParam0) //Position: 0xC44A / 50250
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_239(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_238(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_237(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_237(int iParam0) //Position: 0xC4B3 / 50355
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

void Function_238(int iParam0) //Position: 0xC51D / 50461
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

void Function_239(int iParam0) //Position: 0xC587 / 50567
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

var Function_240(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xC5F1 / 50673
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "BountyHunterArmEnd", 3, 1);
	}
	Function_241(&bVar0);
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

void Function_241(int iParam0) //Position: 0xC66F / 50799
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_244(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_243(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_242(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 4.0f, 3);
	return;
}

void Function_242(int iParam0) //Position: 0xC6D8 / 50904
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

void Function_243(int iParam0) //Position: 0xC742 / 51010
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

void Function_244(bool bParam0) //Position: 0xC7AC / 51116
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

var Function_245(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC816 / 51222
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "ProcCutsceneSimple", 1, 1);
	}
	Function_246(&bVar0, uParam2);
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

void Function_246(var uParam0, int iParam1) //Position: 0xC88A / 51338
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_247(&bVar0, iParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 5.0f, 4294967295);
	return;
}

void Function_247(var uParam0, bool bParam1) //Position: 0xC8AA / 51370
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

var Function_248(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0xC93F / 51519
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "locAttackEnd1", 3, 1);
	}
	Function_249(&bVar0, uParam2, uParam3);
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

void Function_249(var uParam0, var uParam1, int iParam2) //Position: 0xC9C0 / 51648
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_252(&bVar0, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_251(&bVar0, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_250(&bVar0, uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 3.0f, 2);
	return;
}

void Function_250(var uParam0, bool bParam1) //Position: 0xCA1D / 51741
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

void Function_251(var uParam0, bool bParam1) //Position: 0xCAA2 / 51874
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

void Function_252(var uParam0, bool bParam1) //Position: 0xCB27 / 52007
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

var Function_253(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xCBAC / 52140
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "wagonPassengerThx", 4, 1);
	}
	Function_254(&bVar0, uParam2);
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

void Function_254(var uParam0, int iParam1) //Position: 0xCC2B / 52267
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_258(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_257(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_256(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_255(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 3.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 3.5f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 3, 5.0f, 3);
	return;
}

void Function_255(var uParam0, bool bParam1) //Position: 0xCCA8 / 52392
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

void Function_256(var uParam0, bool bParam1) //Position: 0xCD31 / 52529
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

void Function_257(var uParam0, bool bParam1) //Position: 0xCDBA / 52666
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

void Function_258(var uParam0, bool bParam1) //Position: 0xCE43 / 52803
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

void Function_259(int iParam0, int iParam1) //Position: 0xCECC / 52940
{
	iParam0->f_536 = iParam1;
	return;
}

void Function_260(int iParam0, vector3 vParam1) //Position: 0xCED9 / 52953
{
	*(iParam0 + 544) = { StackVal, StackVal, vParam1 };
}

void Function_261(int iParam0, bool bParam1, bool bParam2) //Position: 0xCEEC / 52972
{
	struct<8> Var0;
	
	Function_262(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_540))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutscTargets") };
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

void Function_262(var uParam0) //Position: 0xCF9A / 53146
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(uParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(&Var0) };
		uParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(uParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

bool Function_263() //Position: 0xD00F / 53263
{
	if (!IS_ACTOR_VALID(Local_23.f_976) || !IS_ACTOR_VALID(Local_23.f_860))
	{
		LOG_ERROR("TRANSPORT_PrepareForCutscene: Invalid cutscene actors");
		return 1;
	}
	switch (iLocal_350)
	{
		case 0x00000000:
			if (GET_VEHICLE(Global_34573) == Local_23.f_860)
			{
				iLocal_350 = 1;
			}
			else
			{
				iLocal_350 = 4;
			}
			break;
		
		case 0x00000001:
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
			TASK_CLEAR(Global_34573);
			if (GET_VEHICLE(Global_34573) == Local_23.f_860)
			{
				STOP_VEHICLE(GET_VEHICLE(Global_34573));
			}
			TASK_CLEAR(Local_23.f_976);
			TASK_GO_NEAR_ACTOR(Local_23.f_976, Global_34573, 5.0f, 1);
			TASK_PRIORITY_SET(Local_23.f_976, 1);
			Function_469(&Local_23 + 832);
			iLocal_350 = 2;
			break;
		
		case 0x00000002:
			if (Function_135(&Local_23 + 832, 3.0f))
			{
				TASK_CLEAR(Global_34573);
				TASK_VEHICLE_LEAVE(Global_34573);
				iLocal_350 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
			{
				TASK_CLEAR(Global_34573);
				TASK_CLEAR(Local_23.f_976);
				Function_469(&Local_23 + 832);
				iLocal_350 = 4;
			}
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

void Function_264() //Position: 0xD150 / 53584
{
	if (iLocal_22 == 2)
	{
		Function_318(&Local_23);
	}
	else if (iLocal_22 == 3)
	{
		Function_317(&Local_23);
	}
	else if (iLocal_22 == 4)
	{
		Function_265(&Local_23);
	}
	else
	{
		LOG_ERROR("This is an unhandled pass status");
	}
	Function_12(&Local_23);
	return;
}

void Function_265(bool bParam0) //Position: 0xD1AB / 53675
{
	Function_266(bParam0, 4);
	return;
}

void Function_266(bool bParam0, int iParam1) //Position: 0xD1B7 / 53687
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
				iVar0 = Function_316(bParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_315(bParam0) != 1)
				{
					Function_292(bParam0->f_488, iVar0, 1);
				}
				if (bParam0->f_484 != 1 || bParam0->f_484 != 0)
				{
					Function_289(200, 1, 0);
				}
				else
				{
					Function_270(50, 1, 0);
				}
				if (bParam0->f_332 > 0)
				{
					Function_269(bParam0->f_332, 1);
				}
				else
				{
					Function_267(bParam0->f_332, 1);
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

int Function_267(bool bParam0, bool bParam1) //Position: 0xD28C / 53900
{
	bool bVar0;
	
	bVar0 = Function_58(0);
	if ((Function_58(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_268(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_58(0));
	return 1;
}

int Function_268(int iParam0, bool bParam1, int iParam2) //Position: 0xD31C / 54044
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
	Function_56(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_45(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_269(bool bParam0, bool bParam1) //Position: 0xD517 / 54551
{
	bool bVar0;
	
	bVar0 = Function_58(0);
	if ((Function_58(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_77(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_58(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_77(597, bParam0, 0, 0);
	}
	if ((Function_58(597) + Function_58(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_270(int iParam0, bool bParam1, bool bParam2) //Position: 0xD5E2 / 54754
{
	int iVar0;
	bool bVar1;
	
	if (Function_288(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_85())
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
	iVar0 = Function_58(3);
	Function_285();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_283(3, bVar1);
		if (!bParam2)
		{
			if (!Function_282(Global_76848, 4))
			{
				Function_277(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_77(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_54(3));
	iVar0 = Function_58(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_272(4, Function_276(Global_12976.f_156), 1);
				Function_271(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_272(4, Function_276(Global_12976.f_156), 1);
				Function_271(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_272(4, Function_276(Global_12976.f_156), 1);
				Function_271(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_272(4, Function_276(Global_12976.f_156), 1);
				Function_271(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_272(4, Function_276(Global_12976.f_156), 1);
				Function_271(Global_12976.f_152, Global_12976.f_156);
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

void Function_271(int iParam0, int iParam1) //Position: 0xD7B1 / 55217
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

int Function_272(int iParam0, char* cParam1, bool bParam2) //Position: 0xDA0F / 55823
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
	Function_80(iParam0, cParam1, 0, 1);
	iVar1 = Function_273();
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

int Function_273() //Position: 0xDB94 / 56212
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
	Function_274();
	return 0;
}

void Function_274() //Position: 0xDC33 / 56371
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
		Function_275(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_275(int iParam0) //Position: 0xDCE2 / 56546
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

var Function_276(int iParam0) //Position: 0xDD40 / 56640
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

void Function_277(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xDDCF / 56783
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_279(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_278(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_278(char* cParam0, int iParam1) //Position: 0xDE3B / 56891
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

bool Function_279(bool bParam0, var uParam1, int iParam2) //Position: 0xDE72 / 56946
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
		if (Function_281(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_280(uVar0))
		{
			case 0x00000002:
				if (!Function_282(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_280(char* cParam0) //Position: 0xDEEA / 57066
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

int Function_281(int iParam0) //Position: 0xDF8B / 57227
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_609(&iVar1, 2147483648);
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

bool Function_282(var uParam0, int iParam1) //Position: 0xDFC8 / 57288
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_283(int iParam0, bool bParam1) //Position: 0xDFDB / 57307
{
	bool bVar0;
	int iVar1;
	
	Function_77(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_284(iParam0, 4294967295);
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
	iVar1 = Function_273();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_284(int iParam0, int iParam1) //Position: 0xE178 / 57720
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

void Function_285() //Position: 0xE1B9 / 57785
{
	Function_287(3, 0.0f);
	Function_286(3, 10000.0f);
	return;
}

int Function_286(int iParam0, int iParam1) //Position: 0xE1CF / 57807
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_287(int iParam0, int iParam1) //Position: 0xE20F / 57871
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_288(int iParam0) //Position: 0xE24F / 57935
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_289(int iParam0, bool bParam1, bool bParam2) //Position: 0xE25E / 57950
{
	int iVar0;
	bool bVar1;
	
	if (Function_288(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_85())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_58(1);
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
			Function_283(1, bVar1);
			if (!bParam2)
			{
				if (!Function_282(Global_76848, 1))
				{
					Function_277(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_291(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_282(Global_76848, 2))
				{
					Function_277(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_77(1, bVar1, 0, 0);
	}
	else
	{
		Function_268(1, (4294967295 * bVar1), 0);
	}
	if (Function_58(1) <= 4294962296)
	{
		Function_44(1, 4294962296, 0);
	}
	else if (Function_58(1) >= 5000)
	{
		Function_44(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_54(1));
	iVar0 = Function_58(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_272(2, Function_290(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_272(2, Function_290(Global_12976.f_152), 0);
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
				Function_272(2, Function_290(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_272(2, Function_290(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_272(2, Function_290(Global_12976.f_152), 1);
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
				Function_272(2, Function_290(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_272(2, Function_290(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_272(2, Function_290(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_272(2, Function_290(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_272(2, Function_290(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_272(2, Function_290(Global_12976.f_152), 1);
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
				Function_272(2, Function_290(Global_12976.f_152), 0);
			}
			break;
	}
	Function_271(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_290(int iParam0) //Position: 0xE57F / 58751
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

int Function_291(int iParam0, bool bParam1) //Position: 0xE622 / 58914
{
	bool bVar0;
	int iVar1;
	
	Function_268(iParam0, bParam1, 0);
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
	iVar1 = Function_284(iParam0, 4294967295);
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
	iVar1 = Function_273();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_292(int iParam0, char* cParam1, bool bParam2) //Position: 0xE7BE / 59326
{
	char* cVar0[32];
	
	if (!Function_314(3))
	{
		return;
	}
	if (Function_34())
	{
		return;
	}
	if (Function_22())
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
						if (IS_PS3() || Function_313())
						{
							Function_293(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_293(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_293(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_313())
					{
						Function_293(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_293(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_293(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_293(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_293(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xE8DA / 59610
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_312(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_314(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_311(bParam0, 2))
	{
		Function_77(456, 1, 0, 0);
		Function_310(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_309(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_308(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_310(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_307(0, 0, 1, 1))
			{
				Function_35(1);
				Function_33(1, 0);
			}
			else
			{
				Function_306();
			}
		}
		Function_301(bParam0);
		if (StackVal && !Function_605(((((!Function_300() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_605((((Function_300() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_22())
		{
			if (!Function_282(Global_76846, 2))
			{
				Function_277(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_295();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_294(3, bParam1);
				break;
			
			case 0x00000005:
				Function_294(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_294(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_294(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_294(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_294(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_76(2, 24);
				break;
			
			case 0x00000003:
				Function_76(2, 25);
				break;
			
			case 0x0000000F:
				Function_76(2, 26);
				break;
			
			case 0x0000000D:
				Function_76(2, 27);
				break;
			
			case 0x0000000E:
				Function_76(2, 28);
				break;
			}
	}
}

void Function_294(int iParam0, bool bParam1) //Position: 0xEB70 / 60272
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

void Function_295() //Position: 0xEBDB / 60379
{
	if (Function_312(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_299(Global_28180);
			Global_28180.f_8 = Function_296(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_299(Global_28180);
			Global_28180.f_8 = Function_296(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_296(int iParam0, int iParam1) //Position: 0xEC56 / 60502
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
					if (Function_298(6, 0) || Function_298(12, 0))
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
					if (Function_297(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_298(5, 0))
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
					if (Function_297(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_297(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_297(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_297(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_298(26, 0))
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
					if (Function_297(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_297(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_297(27) && iVar18)
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
					if (Function_297(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_297(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_297(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_297(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_298(17, 0) && iVar15)
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
					if (Function_297(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_298(6, 0) && Function_297(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_297(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_298(9, 0) && Function_297(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_297(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_298(8, 0) && iVar19)
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
	if (Function_586(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_586(StackVal, StackVal, vVar3))
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
	if (!Function_586(StackVal, StackVal, vVar3))
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

int Function_297(int iParam0) //Position: 0xF847 / 63559
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_298(int iParam0, bool bParam1) //Position: 0xF85C / 63580
{
	int iVar0;
	
	iVar0 = Function_83(iParam0);
	if (!Function_24(iVar0))
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

int Function_299(int iParam0) //Position: 0xF899 / 63641
{
	int iVar0;
	int iVar1;
	
	if (!Function_312(iParam0))
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

bool Function_300() //Position: 0xF8E8 / 63720
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_301(bool bParam0) //Position: 0xF915 / 63765
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
			if (Function_308(bParam0, Function_305(bVar24)))
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
			if (Function_308(bParam0, Function_305(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_304(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_303(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_302(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_302(int iParam0) //Position: 0xFAC5 / 64197
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_312(iParam0))
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

void Function_303(var uParam0, int iParam1) //Position: 0xFB1C / 64284
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

var Function_304(int iParam0) //Position: 0xFB41 / 64321
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_312(iParam0))
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

int Function_305(bool bParam0) //Position: 0xFB97 / 64407
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_306() //Position: 0xFBA3 / 64419
{
	return;
}

bool Function_307(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xFBA9 / 64425
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

bool Function_308(bool bParam0, int iParam1) //Position: 0xFC4D / 64589
{
	int iVar0;
	
	if (!Function_312(bParam0))
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

void Function_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFCAC / 64684
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_29(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_310(int iParam0, int iParam1) //Position: 0xFD27 / 64807
{
	if (!Function_312(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_311(int iParam0, int iParam1) //Position: 0xFD7C / 64892
{
	int iVar0;
	
	if (!Function_312(iParam0))
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

bool Function_312(int iParam0) //Position: 0xFDA9 / 64937
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_313() //Position: 0xFDBF / 64959
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_605(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_314(int iParam0) //Position: 0xFDEF / 65007
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_315(int iParam0) //Position: 0xFE0B / 65035
{
	return !Function_605(iParam0->f_584, 16384);
}

var Function_316(int iParam0) //Position: 0xFE1D / 65053
{
	return iParam0->f_492;
}

void Function_317(int iParam0) //Position: 0xFE28 / 65064
{
	Function_266(iParam0, 3);
	return;
}

void Function_318(bool bParam0) //Position: 0xFE34 / 65076
{
	int iVar0;
	int iVar1;
	
	switch (bParam0->f_636)
	{
		case 0x00000000:
			iVar0 = 1;
			iVar1 = 0;
			break;
		
		case 0x00000001:
			iVar0 = 1;
			iVar1 = 1;
			break;
		
		case 0x00000002:
			iVar0 = 1;
			iVar1 = 2;
			break;
		
		default:
			iVar0 = 1;
			iVar1 = 1;
			break;
	}
	if (!Function_605(bParam0->f_780, 4))
	{
		Function_269(Function_319(iVar0, iVar1, 1, 0, 0), 1);
	}
	Function_283(366, 1);
	Function_266(bParam0, 2);
	return;
}

bool Function_319(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xFEA4 / 65188
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
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_58(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_320(17), Global_34573))
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

var Function_320(bool bParam0) //Position: 0xFFA6 / 65446
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

var Function_321(int iParam0, bool bParam1, int iParam2) //Position: 0x100DB / 65755
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

void Function_322(bool bParam0, bool bParam1) //Position: 0x10154 / 65876
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

int Function_323(int iParam0) //Position: 0x1019D / 65949
{
	if (!Function_605(iParam0->f_780, 64))
	{
		LOG_ERROR("Cannot launch transport without TRANSPORT_INIT_TRANSPORT being properly called");
		return 0;
	}
	Function_331(iParam0);
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		Function_128(iParam0->f_952, 2);
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		RESET_VEHICLE_BUMP_COUNT(iParam0->f_860);
	}
	if (IS_VOLUME_VALID(iParam0->f_920))
	{
		Function_330(iParam0, iParam0->f_920);
	}
	if (iParam0->f_628 == 2)
	{
		Function_610(iParam0 + 780, 512);
	}
	if (iParam0->f_628 == 3)
	{
		Function_469(iParam0 + 784);
	}
	Function_469(iParam0 + 832);
	Function_329(iParam0 + 832);
	Function_457(iParam0);
	Function_461(iParam0, 1);
	Function_469(iParam0 + 808);
	Function_325(iParam0);
	Function_324(iParam0, 1);
	Function_610(iParam0 + 780, 128);
	return 1;
}

void Function_324(int iParam0, int iParam1) //Position: 0x102A7 / 66215
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 584, 4);
	}
	else
	{
		Function_609(iParam0 + 584, 4);
	}
	return;
}

void Function_325(int iParam0) //Position: 0x102C8 / 66248
{
	if (Function_605(iParam0->f_584, 4))
	{
		Function_328();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_327(1);
	if (Function_605(iParam0->f_584, 32))
	{
		if (Function_24(iParam0->f_624))
		{
			Function_326(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_13(iParam0, 0);
	}
	Function_610(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_605(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_266(iParam0, 1);
	return;
}

void Function_326(int iParam0, int iParam1) //Position: 0x10349 / 66377
{
	int iVar0;
	
	if (!Function_86(iParam0))
	{
		Function_26();
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
	iVar0 = Function_25(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_35(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_23(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_327(int iParam0) //Position: 0x103B0 / 66480
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_89())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_328() //Position: 0x103E5 / 66533
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_329(int iParam0) //Position: 0x103F9 / 66553
{
	if (Function_138(iParam0))
	{
		if (!Function_137(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_610(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

int Function_330(int iParam0, bool bParam1) //Position: 0x104B8 / 66744
{
	if (!IS_VOLUME_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_920 = bParam1;
	return 1;
}

void Function_331(int iParam0) //Position: 0x104D4 / 66772
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		strcpy(&Var0, "transportStructLay", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(&Var0) };
		iParam0->f_776 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_776))
		{
			LOG_ERROR("couldn't create library transport layout");
		}
		Function_609(iParam0 + 780, 1024);
	}
	return;
}

bool Function_332() //Position: 0x10558 / 66904
{
	float fVar0;
	
	fVar0 = -1.0f;
	if (IS_ACTOR_VALID(Local_23.f_952))
	{
		if (IS_ACTOR_ON_FOOT(Local_23.f_952) || IS_ACTOR_ON_FOOT(Global_34573))
		{
			if (Function_605(bLocal_363, 4))
			{
				Function_609(&bLocal_363, 4);
			}
			if (Function_605(bLocal_363, 2))
			{
				Function_609(&bLocal_363, 2);
			}
		}
		else if (IS_ACTOR_RIDING_VEHICLE(Local_23.f_952) && IS_ACTOR_RIDING_VEHICLE(Global_34573))
		{
			if (!Function_605(bLocal_363, 4))
			{
				Function_610(&bLocal_363, 4);
			}
			if (!Function_605(bLocal_363, 2))
			{
				Function_610(&bLocal_363, 2);
			}
		}
	}
	if (Function_333(Local_23.f_952, &uLocal_362, &fVar0, bLocal_363, 0, 0x40400000))
	{
		return 1;
	}
	return 0;
	return 0;
}

bool Function_333(bool bParam0, var uParam1, float fParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x105FA / 67066
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
		fVar0 = Function_336(bParam0, Global_34573);
		if (!Function_605(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_334(bParam0);
				return 1;
			}
		}
		if (!Function_605(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_334(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_334(bParam0);
				return 1;
			}
		}
		if (!Function_605(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_334(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_334(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_605(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_334(bParam0);
				return 1;
			}
		}
		if (!Function_605(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_334(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_334(bool bParam0) //Position: 0x10791 / 67473
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_335(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_335(bool bParam0) //Position: 0x107C5 / 67525
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_336(bool bParam0, bool bParam1) //Position: 0x107DC / 67548
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

int Function_337(bool bParam0, bool bParam1) //Position: 0x108CD / 67789
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	float fVar7;
	var uVar8;
	var uVar9;
	bool bVar10;
	
	iVar0 = 0;
	Function_331(bParam0);
	if (!Function_605(bParam0->f_780, 64))
	{
		return 24;
	}
	if (!IS_LAYOUTREF_VALID(bParam0->f_776))
	{
		return 25;
	}
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 26;
	}
	switch (Function_430(bParam0))
	{
		case 0x00000002:
			Function_266(bParam0, 2);
			break;
		
		case 0x00000003:
			Function_266(bParam0, 3);
			break;
		
		case 0x00000004:
			Function_266(bParam0, 4);
			break;
		
		case 0x00000001:
			break;
	}
	switch (Function_429(bParam0))
	{
		case 0x00000002:
			if (iVar0 <= 9)
			{
				return 9;
			}
			break;
		
		case 0x00000003:
			if (iVar0 <= 11)
			{
				return 11;
			}
			break;
		
		case 0x00000004:
			if (iVar0 <= 10)
			{
				return 10;
			}
			break;
	}
	if (!Function_605(bParam0->f_780, 128) && !Function_605(bParam0->f_780, 1))
	{
		Function_323(bParam0);
	}
	if (Function_428(bParam0))
	{
		if (Function_427(bParam0))
		{
			Function_457(bParam0);
			Function_461(bParam0, 1);
		}
		if (Function_159(bParam0 + 808, 5.0f))
		{
			Function_420(bParam0);
		}
		if (!Function_605(bParam0->f_780, 32768))
		{
			fVar7 = Function_419(0x3e800000);
			if (fVar7 < 0.0f)
			{
				bParam0->f_944 = (IntToFloat(FLOOR((0.09f * fVar7))) + 5.0f);
				if (Function_605(bParam0->f_780, 512))
				{
					HUD_TIMER_COUNTDOWN(bParam0->f_944);
					HUD_TIMER_DISPLAY(1);
					Function_469(bParam0 + 796);
				}
				if (Function_613(bParam0) == 3)
				{
					Function_418(bParam0);
				}
				Function_610(bParam0 + 780, 32768);
			}
		}
		if (Function_135(bParam0 + 796, bParam0->f_944))
		{
			if (iVar0 <= 17)
			{
				HUD_TIMER_DISPLAY(0);
				iVar0 = 17;
			}
		}
		if (Function_613(bParam0) == 3)
		{
			if (!Function_605(bParam0->f_780, 0x20000000))
			{
				if (Function_417(bParam0))
				{
				}
			}
			else if (VDIST(Global_34574, *(bParam0 + 924)) > 100.0f && !Function_605(bParam0->f_780, 0x40000000))
			{
				Function_416(bParam0);
			}
		}
	}
	iVar1 = Function_408(bParam0);
	if (iVar0 <= iVar1)
	{
		iVar0 = iVar1;
	}
	if (Function_605(bParam0->f_780, 8))
	{
		if (!IS_ACTOR_VALID(bParam0->f_952) || IS_ACTOR_DEAD(bParam0->f_952))
		{
			if (iVar0 <= 23)
			{
				iVar0 = 23;
			}
		}
		else
		{
			iVar1 = Function_406(bParam0);
			if (iVar0 <= iVar1)
			{
				iVar0 = iVar1;
			}
		}
	}
	if (Function_605(bParam0->f_780, 16))
	{
		if (!IS_ACTOR_VALID(bParam0->f_960) || IS_ACTOR_DEAD(bParam0->f_960))
		{
			if (iVar0 <= 22)
			{
				iVar0 = 22;
			}
		}
		else
		{
			iVar1 = Function_404(bParam0);
			if (iVar0 <= iVar1)
			{
				iVar0 = iVar1;
			}
		}
	}
	if (IS_OBJECTSET_VALID(bParam0->f_968))
	{
		bVar6 = false;
		while (bVar6 < (GET_OBJECTSET_SIZE(bParam0->f_968) - 1))
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bParam0->f_968));
			if (!IS_ACTOR_VALID(bVar2) || !IS_ACTOR_ALIVE(bVar2))
			{
				Function_610(bParam0 + 780, 0x8000000);
				Function_403(bVar2);
				Function_129(bParam0);
				if (iVar0 <= 21)
				{
					iVar0 = 21;
				}
			}
			else if (Function_333(bVar2, &uVar9, &uVar8, 0, 0, 0x40400000))
			{
				if (iVar0 <= 20)
				{
					iVar0 = 20;
				}
			}
			bVar6++;
		}
		DESTROY_OBJECTSET(bParam0->f_968);
	}
	if (Function_604(bParam0->f_916))
	{
		if (!Function_605(bParam0->f_780, 65536))
		{
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam0->f_860))
			{
				Function_402(bParam0, 0);
				Function_397(bParam0);
				Function_610(bParam0 + 780, 65536);
			}
		}
	}
	if (IS_VOLUME_VALID(bParam0->f_920))
	{
		if (IS_OBJECT_VALID(bParam0->f_940))
		{
			bVar10 = false;
			if (Function_605(bParam0->f_780, 4))
			{
				bVar10 = GATEWAY_UPDATE(bParam0->f_940);
			}
			else
			{
				bVar10 = Function_396(bParam0->f_940, 0, 1, 0, 0, 0);
			}
			if (bVar10 == 1)
			{
				if (Function_613(bParam0) == 3)
				{
					Function_125(bParam0);
				}
				if (iVar0 <= 8)
				{
					if (bParam1)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					}
					iVar0 = 8;
				}
			}
			else if (VDIST(Global_34574, *(bParam0 + 924)) > (bParam0->f_948 + 175.0f))
			{
				Function_469(bParam0 + 844);
				bParam0->f_856 = 0;
			}
			else if (Function_135(bParam0 + 844, 7.0f))
			{
				if (bParam0->f_856 > 2)
				{
					Function_266(bParam0, 3);
					return 13;
				}
				Function_322(bParam0, 1);
				Function_321(bParam0, "pm_esc_wdir", 1);
				Function_469(bParam0 + 844);
				bParam0->f_856++;
			}
		}
	}
	if (Function_395(bParam0) && IS_ACTOR_VALID(bParam0->f_860))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam0->f_952), &vVar3);
		Function_394(StackVal, StackVal, bParam0, vVar3);
	}
	if (Function_605(bParam0->f_780, 256))
	{
		iVar1 = Function_342(bParam0, bParam1);
		if (iVar0 <= iVar1)
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 > 10)
	{
		if (Function_605(bParam0->f_780, 512))
		{
			HUD_TIMER_DISPLAY(0);
		}
		if (Function_613(bParam0) == 3)
		{
			Function_125(bParam0);
		}
	}
	if (Function_428(bParam0))
	{
		Function_448(bParam0, 0, 1);
	}
	else
	{
		Function_338(StackVal, StackVal, bParam0, Global_34574, 1, 0x41c80000, 0x42c80000);
	}
	return iVar0;
}

var Function_338(bool bParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6) //Position: 0x10DBD / 69053
{
	vector3 vVar0;
	
	Function_341(bParam0);
	Function_339(bParam0);
	Function_448(bParam0, iParam4, 0);
	if (IS_OBJECT_VALID(*bParam0))
	{
		Function_588(*bParam0);
		vVar0 = { StackVal, StackVal, Function_588(*bParam0) };
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
	if (!Function_605(bParam0->f_584, 4096))
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
		Function_13(bParam0, 1);
	}
	return bParam0->f_32;
}

void Function_339(bool bParam0) //Position: 0x10EE3 / 69347
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	
	if (SQUAD_IS_VALID(bParam0->f_568) && Function_135(bParam0 + 572, 7.0f))
	{
		Function_542(bParam0);
		vVar0 = { StackVal, StackVal, Function_542(bParam0) };
		if (Function_586(StackVal, StackVal, vVar0))
		{
			bVar13 = false;
			while (bVar13 < (SQUAD_GET_SIZE(bParam0->f_568) - 1))
			{
				bVar12 = SQUAD_GET_ACTOR_BY_INDEX(bParam0->f_568, bVar13);
				vVar9 = { 0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 6.0f) };
				ROTATE_VECTOR_XZ(&vVar9, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar0, StackVal) };
				FIND_GROUND_INTERSECTION(&vVar3, 100.0f, &vVar3, &uVar6);
				TASK_BIRD_LAND_AT_COORD(bVar12, &vVar3);
				bVar13++;
			}
			Function_340(bParam0->f_568, 1);
			Function_469(bParam0 + 572);
		}
		else
		{
			Function_13(bParam0, 1);
		}
	}
	return;
}

void Function_340(bool bParam0, int iParam1) //Position: 0x10F8F / 69519
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

void Function_341(int iParam0) //Position: 0x10FCA / 69578
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

int Function_342(bool bParam0, bool bParam1) //Position: 0x10FD6 / 69590
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!Function_605(bParam0->f_780, 0x1000000) && IS_SCRIPT_VALID(bParam0->f_1000))
	{
		Function_393(bParam0 + 1004);
		if (SQUAD_IS_VALID((bParam0 + 1004)->f_60))
		{
			Function_391(bParam0, GET_ACTOR_FACTION(Function_392((bParam0 + 1004)->f_60)));
			if (bParam1)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			}
			Function_610(bParam0 + 780, 0x1000000);
		}
	}
	else if (Function_605(bParam0->f_780, 0x1000000) && !IS_SCRIPT_VALID(bParam0->f_1000))
	{
		if (!Function_605(bParam0->f_780, 262144) || bParam0->f_1296 < 0)
		{
			Function_469(bParam0 + 1256);
			Function_390(bParam0);
			Function_388(bParam0);
			Function_370(bParam0);
			Function_609(bParam0 + 780, 0x1000000);
			Function_609(bParam0 + 780, 131072);
		}
		if (bParam1)
		{
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
		}
		Function_609(bParam0 + 780, 0x1000000);
	}
	if (Function_605(bParam0->f_780, 1048576))
	{
		if (!Function_605(bParam0->f_780, 2097152))
		{
			Function_469(bParam0 + 1256);
			Function_390(bParam0);
			Function_388(bParam0);
			Function_370(bParam0);
			Function_610(bParam0 + 780, 2097152);
		}
		if (Global_29007 != 3 || Global_29007 != 4)
		{
			if (Function_605(bParam0->f_780, 0x1000000))
			{
				Function_397(bParam0);
				bParam0->f_1296++;
			}
			Function_609(bParam0 + 780, 1048576);
		}
	}
	else if (!(Global_29007 != 3 || Global_29007 != 4))
	{
		Function_610(bParam0 + 780, 1048576);
	}
	if ((((Function_135(bParam0 + 1256, bParam0->f_1268) && Function_605(bParam0->f_780, 1048576)) && !Function_605(bParam0->f_780, 0x1000000)) && !IS_SCRIPT_VALID(bParam0->f_1000)) && bParam0->f_1296 < 0)
	{
		if (Function_368(StackVal, StackVal, Global_34573, *(bParam0 + 888)) < 150.0f || Function_605(bParam0->f_780, 8388608))
		{
			Function_366(bParam0);
			if (Function_354(bParam0 + 1004))
			{
				if (!Function_605(bParam0->f_780, 131072))
				{
					if (Function_605(bParam0->f_780, 2048))
					{
						Function_353(bParam0 + 1004, 1);
						iVar1 = 0;
						while (iVar1 < 5)
						{
							if (Function_352((*bParam0 + 1228)[iVar1]) && !(*bParam0 + 1228)[iVar1] != 0)
							{
								Function_348(bParam0 + 1004, (*bParam0 + 1228)[iVar1]);
							}
							iVar1++;
						}
					}
					else
					{
						Function_345(bParam0 + 1004, 8);
					}
					Function_610(bParam0 + 780, 131072);
				}
				bParam0->f_1000 = Function_343(bParam0 + 1004);
				if (IS_SCRIPT_VALID(bParam0->f_1000))
				{
					if (iVar0 <= 2)
					{
						if (Function_605(bParam0->f_780, 262144))
						{
							bParam0->f_1296 = (bParam0->f_1296 - 1);
							if (bParam0->f_1296 < 0)
							{
								Function_160(bParam0 + 1256);
							}
						}
						iVar0 = 2;
					}
				}
				else
				{
					LOG_ERROR("Invalid transport attack script");
				}
			}
			else
			{
				bParam0->f_1268 = (bParam0->f_1268 + 1.0f);
			}
		}
	}
	return iVar0;
}

var Function_343(int iParam0) //Position: 0x112E5 / 70373
{
	int iVar0;
	
	if (!iParam0->f_172 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_344(iParam0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", iParam0, 56, 0);
	return iVar0;
}

void Function_344(int iParam0) //Position: 0x11369 / 70505
{
	int iVar0;
	int iVar1;
	
	if (Function_605(iParam0->f_92, 64))
	{
		iVar1 = 0;
		while (iVar1 <= iParam0->f_100)
		{
			if (!(*iParam0 + 100)[iVar1] != 0 && Function_352((*iParam0 + 100)[iVar1]))
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

int Function_345(int iParam0, int iParam1) //Position: 0x113C1 / 70593
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_POPSET_TYPE - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	bVar1 = false;
	bVar0 = Function_346(iParam1, bVar1);
	while (bVar0 == 0 && Function_352(bVar0))
	{
		bVar1++;
		bVar0 = Function_346(iParam1, bVar1);
		Function_348(iParam0, bVar0);
	}
	PRINTSTRING("Number of actorenums: ");
	PRINTINT(bVar1);
	PRINTNL();
	return 1;
}

bool Function_346(int iParam0, bool bParam1) //Position: 0x1148B / 70795
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_347(Global_30750[0], bParam1);
			break;
		
		case 0x00000002:
			return Function_347(Global_30750[1], bParam1);
			break;
		
		case 0x00000004:
			return Function_347(Global_30750[2], bParam1);
			break;
		
		case 0x00000008:
			return Function_347(Global_30750[3], bParam1);
			break;
		
		case 0x00000010:
			return Function_347(Global_30750[4], bParam1);
			break;
		
		case 0x00000020:
			return Function_347(Global_30750[5], bParam1);
			break;
		
		case 0x00000040:
			return Function_347(Global_30750[6], bParam1);
			break;
		
		case 0x00000080:
			return Function_347(Global_30750[7], bParam1);
			break;
		
		case 0x00000100:
			return Function_347(Global_30750[8], bParam1);
			break;
		
		case 0x00000200:
			return Function_347(Global_30750[9], bParam1);
			break;
		
		case 0x00000400:
			return Function_347(Global_30750[10], bParam1);
			break;
		
		case 0x00000800:
			return Function_347(Global_30750[11], bParam1);
			break;
		
		case 0x00001000:
			return Function_347(Global_30750[12], bParam1);
			break;
		
		case 0x00002000:
			return Function_347(Global_30750[13], bParam1);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 4294967295;
}

int Function_347(bool bParam0, bool bParam1) //Position: 0x1160A / 71178
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
	if (!Function_352(bVar1))
	{
		LOG_ERROR("Did an index on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	return bVar0;
}

int Function_348(int iParam0, bool bParam1) //Position: 0x116B7 / 71351
{
	int iVar0;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_352(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_350(iParam0, 0);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_100)
	{
		if ((*iParam0 + 100)[iVar0] != 0 || !Function_352((*iParam0 + 100)[iVar0]))
		{
			(*iParam0 + 100)[iVar0] = bParam1;
			iVar0 = iParam0->f_100;
		}
		iVar0++;
	}
	Function_349(iParam0, 0);
	return 1;
}

int Function_349(int iParam0, bool bParam1) //Position: 0x11785 / 71557
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_94(iParam0);
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
				if (Function_352((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
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

int Function_350(int iParam0, bool bParam1) //Position: 0x119C1 / 72129
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_351(iParam0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_94(iParam0);
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
				if (Function_352((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
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

void Function_351(int iParam0) //Position: 0x11BF2 / 72690
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(&Var0), 4);
		*iParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(*iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

bool Function_352(bool bParam0) //Position: 0x11C5F / 72799
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_353(int iParam0, bool bParam1) //Position: 0x11C76 / 72822
{
	if (bParam1)
	{
		Function_610(iParam0 + 92, 64);
	}
	else
	{
		Function_609(iParam0 + 92, 64);
	}
	return;
}

bool Function_354(int iParam0) //Position: 0x11C96 / 72854
{
	int iVar0;
	vector3 vVar1;
	struct<15> Var4;
	struct<11> Var19;
	
	Function_351(iParam0);
	if (iParam0->f_212 == 0)
	{
		iParam0->f_212 = 3;
		DECOR_SET_BOOL(*iParam0, "catk_bus", iParam0->f_216);
	}
	if (Function_586(StackVal, StackVal, *(iParam0 + 184)))
	{
		if (Function_586(StackVal, StackVal, *(iParam0 + 196)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_365(StackVal, StackVal, iParam0, Global_34574);
			}
			else
			{
				return 0;
			}
		}
		Function_365(StackVal, StackVal, iParam0, *(iParam0 + 196));
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
		Function_364(&Var4, 4294967295, 5.0f, 1, 4294967295);
		Function_363(StackVal, StackVal, &Var19, 0, *(iParam0 + 196), 0.0f, iParam0->f_24, iParam0->f_28, iParam0->f_32, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1);
			vVar1 = { StackVal, StackVal, Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1) };
			if (!Function_586(StackVal, StackVal, vVar1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_586(StackVal, StackVal, vVar1))
		{
			*(iParam0 + 184) = { StackVal, StackVal, *(iParam0 + 196) };
			return 0;
		}
		*(iParam0 + 184) = { StackVal, StackVal, vVar1 };
	}
	Function_344(iParam0);
	iParam0->f_172 = 1;
	if (!Function_355(iParam0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_349(iParam0, 0);
	return 1;
}

bool Function_355(int iParam0) //Position: 0x11E15 / 73237
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ncatk_dobj"), 4);
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

vector3 Function_356(struct<41> Param0) //Position: 0x11F84 / 73604
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
	else if (!Function_586(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_362(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_360();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_359(Param0.f_20);
	Function_358(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_357(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
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
	Function_66();
	return StackVal, StackVal, Function_66();
}

void Function_357(struct<33> Param0) //Position: 0x120B3 / 73907
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

void Function_358(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x121DF / 74207
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

void Function_359(bool bParam0) //Position: 0x12230 / 74288
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

void Function_360() //Position: 0x122E3 / 74467
{
	float fVar0;
	bool bVar1;
	
	Function_361(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_361(float fParam0, int iParam1) //Position: 0x122F7 / 74487
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

void Function_362(bool bParam0) //Position: 0x12380 / 74624
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

void Function_363(int iParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10) //Position: 0x123C4 / 74692
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

void Function_364(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x12400 / 74752
{
	*uParam0 = iParam1;
	uParam0->f_4 = fParam2;
	uParam0->f_8 = iParam3;
	uParam0->f_16 = iParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

int Function_365(int iParam0, vector3 vParam1) //Position: 0x12429 / 74793
{
	bool bVar0;
	
	bVar0 = Function_94(iParam0);
	if (Function_586(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_350(iParam0, bVar0);
	}
	*(iParam0 + 196) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 184) = { 0.0f, 0.0f, 0.0f };
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_349(iParam0, bVar0);
	}
	return 1;
}

void Function_366(int iParam0) //Position: 0x12488 / 74888
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (iParam0->f_1280 == 1)
	{
		vVar3 = { RAND_FLOAT_RANGE(-5.0f, 5.0f), 0.0f, RAND_FLOAT_RANGE(45.0f, 55.0f) };
	}
	else if (Function_367())
	{
		vVar3 = { RAND_FLOAT_RANGE(-2.5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f) };
	}
	else
	{
		vVar3 = { RAND_FLOAT_RANGE(0.0f, 2.5f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f) };
	}
	GET_ACTOR_OFFSET_WORLD_COORDS(iParam0->f_860, &vVar3, &vVar0);
	Function_365(StackVal, StackVal, iParam0 + 1004, vVar0);
	return;
}

bool Function_367() //Position: 0x1250E / 75022
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

float Function_368(bool bParam0, vector3 vParam1) //Position: 0x12521 / 75041
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_369(bParam0);
		vVar0 = { StackVal, StackVal, Function_369(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_369(bool bParam0) //Position: 0x1259B / 75163
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

void Function_370(int iParam0) //Position: 0x12605 / 75269
{
	Function_387(iParam0 + 1004, 3);
	Function_386(iParam0 + 1004, 2);
	Function_385(iParam0 + 1004, 1);
	Function_384(iParam0 + 1004, iParam0->f_1284);
	Function_383(iParam0 + 1004, 1);
	Function_382(iParam0 + 1004, 0.5f, 15.0f, 3.5f);
	Function_381(iParam0 + 1004, 1);
	Function_380(iParam0 + 1004, 1);
	Function_379(iParam0 + 1004, 1);
	Function_378(iParam0 + 1004, 1, 4294967295);
	Function_377(iParam0 + 1004, 1);
	Function_376(iParam0 + 1004, 1, 976, 0);
	if (IS_ACTOR_VALID(Global_34573))
	{
		Function_371(iParam0 + 1004, Global_34573);
	}
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		Function_371(iParam0 + 1004, iParam0->f_952);
	}
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		Function_371(iParam0 + 1004, iParam0->f_960);
	}
	return;
}

int Function_371(var uParam0, int iParam1) //Position: 0x126DA / 75482
{
	return Function_372(uParam0, iParam1);
}

int Function_372(var uParam0, bool bParam1) //Position: 0x126E7 / 75495
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	Function_375(uParam0);
	if (!IS_ACTOR_IN_ACTORSET(uParam0->f_52, bParam1))
	{
		DECOR_SET_BOOL(bParam1, "catk_external", true);
		ADD_ACTORSET_MEMBER(uParam0->f_52, bParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTNL();
		if (!Function_605(uParam0->f_92, 1024))
		{
			Function_373(uParam0, bParam1);
		}
	}
	return 1;
}

void Function_373(var uParam0, bool bParam1) //Position: 0x12765 / 75621
{
	var uVar0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_374(uParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("catkavol"), 4);
	bVar4 = CREATE_VOLUME_IN_LAYOUT(*uParam0, &uVar0, 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	if (IS_VOLUME_VALID(bVar4))
	{
		if (SQUAD_IS_VALID(uParam0->f_60))
		{
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar4), GET_OBJECT_FROM_ACTOR(bParam1), Function_130(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

int Function_374(int iParam0) //Position: 0x12836 / 75830
{
	var uVar0;
	
	Function_351(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_96))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("navoidVols"), 4);
		iParam0->f_96 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, *iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(iParam0->f_96))
		{
			return 0;
		}
	}
	return 1;
}

int Function_375(int iParam0) //Position: 0x1287E / 75902
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(iParam0->f_52))
	{
		Function_351(iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ntargetSet"), 4);
		iParam0->f_52 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(iParam0->f_52))
		{
			return 0;
		}
	}
	return 1;
}

int Function_376(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x128C4 / 75972
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 92, 1);
	}
	else
	{
		Function_609(iParam0 + 92, 1);
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

void Function_377(int iParam0, int iParam1) //Position: 0x1290A / 76042
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 92, 8);
	}
	else
	{
		Function_609(iParam0 + 92, 8);
	}
	return;
}

void Function_378(int iParam0, int iParam1, int iParam2) //Position: 0x1292B / 76075
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 92, 4);
	}
	else
	{
		Function_609(iParam0 + 92, 4);
	}
	iParam0->f_88 = iParam2;
	Function_610(iParam0 + 92, 128);
	return;
}

void Function_379(int iParam0, int iParam1) //Position: 0x12959 / 76121
{
	if (iParam1 == 0)
	{
		Function_610(iParam0 + 92, 4096);
	}
	else
	{
		Function_609(iParam0 + 92, 4096);
	}
	return;
}

void Function_380(int iParam0, int iParam1) //Position: 0x1297C / 76156
{
	if (iParam1 == 0)
	{
		Function_610(iParam0 + 92, 2048);
	}
	else
	{
		Function_609(iParam0 + 92, 2048);
	}
	return;
}

int Function_381(int iParam0, int iParam1) //Position: 0x1299F / 76191
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 92, 512);
	}
	else
	{
		Function_609(iParam0 + 92, 512);
	}
	return 1;
}

void Function_382(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x129C3 / 76227
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	uParam0->f_24 = fParam1;
	uParam0->f_28 = fParam2;
	uParam0->f_32 = fParam3;
}

void Function_383(int iParam0, int iParam1) //Position: 0x12A2C / 76332
{
	if (iParam1 == 0)
	{
		Function_610(iParam0 + 92, 8192);
	}
	else
	{
		Function_609(iParam0 + 92, 8192);
	}
	return;
}

int Function_384(var uParam0, int iParam1) //Position: 0x12A4F / 76367
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	uParam0->f_40 = iParam1;
	return 1;
}

void Function_385(int iParam0, int iParam1) //Position: 0x12A6A / 76394
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 92, 256);
	}
	else
	{
		Function_609(iParam0 + 92, 256);
	}
	return;
}

int Function_386(var uParam0, int iParam1) //Position: 0x12A8D / 76429
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	uParam0->f_48 = iParam1;
	return 1;
}

int Function_387(var uParam0, int iParam1) //Position: 0x12AA8 / 76456
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	uParam0->f_212 = iParam1;
	uParam0->f_216 = 1;
	return 1;
}

void Function_388(int iParam0) //Position: 0x12AC8 / 76488
{
	if (Function_605(iParam0->f_780, 524288) && (iParam0->f_1288 < 0 && iParam0->f_1292 < 1))
	{
		Function_389(iParam0, RAND_INT_RANGE(iParam0->f_1288, iParam0->f_1292));
	}
	else
	{
		Function_389(iParam0, 1);
	}
	return;
}

void Function_389(var uParam0, int iParam1) //Position: 0x12B08 / 76552
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	uParam0->f_1284 = iParam1;
	return;
}

void Function_390(int iParam0) //Position: 0x12B1E / 76574
{
	if (iParam0->f_1272 >= iParam0->f_1276)
	{
		iParam0->f_1268 = RAND_FLOAT_RANGE(iParam0->f_1272, iParam0->f_1276);
		iParam0->f_1272 = (iParam0->f_1272 + 6.0f);
		iParam0->f_1276 = (iParam0->f_1276 + 6.0f);
	}
	else
	{
		iParam0->f_1268 = 0.0f;
	}
	return;
}

void Function_391(int iParam0, int iParam1) //Position: 0x12B65 / 76645
{
	iParam0->f_492 = iParam1;
	return;
}

var Function_392(bool bParam0) //Position: 0x12B72 / 76658
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

void Function_393(int iParam0) //Position: 0x12BB8 / 76728
{
	if (IS_OBJECT_VALID(Function_94(iParam0)))
	{
		Function_350(iParam0, 0);
		Function_349(iParam0, 0);
	}
	return;
}

void Function_394(bool bParam0, vector3 vParam1) //Position: 0x12BD7 / 76759
{
	*(bParam0 + 4) = { StackVal, StackVal, vParam1 };
}

int Function_395(bool bParam0) //Position: 0x12BE9 / 76777
{
	if (Function_605(bParam0->f_780, 128))
	{
		return 1;
	}
	return 0;
}

bool Function_396(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x12C02 / 76802
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
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_162(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_163(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_163(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_148(&uVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &uVar6);
					Function_148(&uVar6, &vVar3);
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

void Function_397(bool bParam0) //Position: 0x12E14 / 77332
{
	Function_400(bParam0 + 1004);
	Function_398(bParam0 + 1004, Global_34573);
	return;
}

void Function_398(var uParam0, bool bParam1) //Position: 0x12E2D / 77357
{
	if (SQUAD_IS_VALID(uParam0->f_60))
	{
		Function_399(uParam0->f_60, 2, GET_OBJECT_FROM_ACTOR(bParam1), 4, 1);
	}
	return;
}

int Function_399(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x12E50 / 77392
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
				Function_99(bVar0, uParam1, uParam2, uParam3, uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(bParam0);
		return 1;
	}
	return 0;
}

void Function_400(int iParam0) //Position: 0x12EA8 / 77480
{
	Function_401(iParam0);
	return;
}

void Function_401(int iParam0) //Position: 0x12EB3 / 77491
{
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		DISBAND_ACTORSET(iParam0->f_52);
	}
	return;
}

void Function_402(bool bParam0, int iParam1) //Position: 0x12ECB / 77515
{
	if (iParam1 == 1)
	{
		Function_610(bParam0 + 780, 256);
	}
	else
	{
		Function_609(bParam0 + 780, 256);
	}
	return;
}

var Function_403(bool bParam0) //Position: 0x12EF0 / 77552
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "transNecType");
}

int Function_404(int iParam0) //Position: 0x12F0D / 77581
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	if (!Function_605(iParam0->f_780, 16))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(iParam0->f_960))
	{
		return 0;
	}
	Function_72(iParam0->f_960, &vVar2);
	iVar1 = Function_405(iParam0->f_960);
	switch (iVar1)
	{
		case 0x00000000:
			Function_128(iParam0->f_960, 5);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000005:
			if (VDIST(Global_34574, vVar2) < 350.0f)
			{
				if (iVar0 <= 14)
				{
					iVar0 = 14;
				}
			}
			switch (iParam0->f_628)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					if (!IS_ACTOR_RIDING_VEHICLE(iParam0->f_960) || !IS_ACTOR_ALIVE(iParam0->f_960))
					{
						KILL_ACTOR(iParam0->f_960);
						Function_128(iParam0->f_960, 7);
					}
					break;
				
				case 0x00000002:
					if (IS_ACTOR_VALID(iParam0->f_960))
					{
						if (IS_ACTOR_VALID(GET_LAST_ATTACKER(iParam0->f_960)))
						{
							KILL_ACTOR(iParam0->f_960);
							if (iVar0 <= 22)
							{
								iVar0 = 22;
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000006:
			KILL_ACTOR(iParam0->f_960);
			break;
		
		case 0x00000007:
			break;
	}
	return iVar0;
}

var Function_405(bool bParam0) //Position: 0x13042 / 77890
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "translib_state");
}

int Function_406(bool bParam0) //Position: 0x13061 / 77921
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	iVar1 = 0;
	if (!Function_605(bParam0->f_780, 8))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam0->f_952))
	{
		return 0;
	}
	iVar0 = Function_405(bParam0->f_952);
	GET_POSITION(bParam0->f_952, &vVar2);
	GET_ACTOR_VELOCITY(bParam0->f_860, &vVar5);
	if (Function_605(bParam0->f_780, 128) == 1)
	{
		if (!GET_VEHICLE(bParam0->f_952) != bParam0->f_860)
		{
			if (VDIST(Global_34574, vVar2) < 100.0f)
			{
				if (iVar1 <= 15)
				{
					iVar1 = 15;
				}
			}
			if (!Function_605(bParam0->f_780, 2))
			{
				if (Function_605(bParam0->f_780, 0x2000000))
				{
					if (VDIST(Global_34574, vVar2) > 25.0f)
					{
						Function_322(bParam0, 1);
						Function_321(bParam0, "pm_trn_wait", 1);
						Function_609(bParam0 + 780, 0x2000000);
					}
				}
				else if (VDIST(Global_34574, vVar2) < (25.0f * 2.0f))
				{
					Function_322(bParam0, 1);
					Function_321(bParam0, "pm_trn_retg", 1);
					Function_610(bParam0 + 780, 0x2000000);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			SET_ACTOR_FACTION(bParam0->f_952, 1);
			TASK_CLEAR(bParam0->f_952);
			TASK_FACE_ACTOR(bParam0->f_952, Global_34573, 1, 3212836864);
			TASK_PRIORITY_SET(bParam0->f_952, 0);
			SET_ACTOR_FACE_STYLE(bParam0->f_952, 0);
			Function_128(bParam0->f_952, 1);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000004:
			SET_ACTOR_FACTION(bParam0->f_952, GET_ACTOR_FACTION(Global_34573));
			switch (bParam0->f_628)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					GIVE_WEAPON_TO_ACTOR(bParam0->f_952, 42, 0, 1, 1);
					break;
				
				case 0x00000002:
					break;
			}
			if (!IS_ACTOR_RIDING_VEHICLE(bParam0->f_952))
			{
				Function_128(bParam0->f_952, 2);
			}
			else
			{
				Function_128(bParam0->f_952, 5);
			}
			break;
		
		case 0x00000002:
			TASK_CLEAR(bParam0->f_952);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bParam0->f_952, bParam0->f_860, 1, 2, 0);
			TASK_PRIORITY_SET(bParam0->f_952, 1);
			Function_469(bParam0 + 832);
			Function_128(bParam0->f_952, 3);
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_VEHICLE(bParam0->f_952))
			{
				Function_128(bParam0->f_952, 4);
			}
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_RIDING_VEHICLE(bParam0->f_952))
			{
				Function_128(bParam0->f_952, 2);
			}
			if (VDIST(Global_34574, vVar2) < 350.0f)
			{
				if (iVar1 <= 15)
				{
					iVar1 = 15;
				}
			}
			switch (bParam0->f_628)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(bParam0->f_952, 14))
					{
						if (!ACTOR_HAS_WEAPON_IN_HAND(bParam0->f_952, 14))
						{
							ACTOR_PUT_WEAPON_IN_HAND(bParam0->f_952, 14, 1);
							TASK_CLEAR(bParam0->f_952);
						}
					}
					break;
				
				case 0x00000002:
					if (GET_VEHICLE(Global_34573) == bParam0->f_860)
					{
						if (Function_135(bParam0 + 820, 20.0f) && VMAG(vVar5) > 9.0f)
						{
							if (iVar1 <= 3)
							{
								iVar1 = 3;
							}
							Function_469(bParam0 + 820);
						}
					}
					break;
			}
			break;
		
		case 0x00000006:
			TASK_CLEAR(bParam0->f_952);
			TASK_FLEE_ACTOR(bParam0->f_952, Global_34573, 50.0f, -1.0f, 0, 0, 0);
			Function_128(bParam0->f_952, 7);
			break;
		
		case 0x00000007:
			if (IS_BLIP_VALID(Function_407(bParam0)))
			{
				SET_BLIP_BLINK(Function_407(bParam0), 0, 0, 5f);
			}
			break;
	}
	return iVar1;
}

var Function_407(bool bParam0) //Position: 0x133BD / 78781
{
	return bParam0->f_36;
}

int Function_408(bool bParam0) //Position: 0x133C7 / 78791
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	var uVar10;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	float fVar18;
	
	iVar0 = 0;
	if (!IS_ACTOR_VALID(bParam0->f_860))
	{
		if (bParam0->f_628 != 1 && IS_ACTOR_VALID(bParam0->f_960))
		{
			KILL_ACTOR(bParam0->f_960);
		}
		if (iVar0 <= 18)
		{
			return 18;
		}
	}
	if (!Function_415(bParam0->f_860, 0, 1, 4294967295))
	{
		if (bParam0->f_628 == 3)
		{
			Function_410(bParam0);
		}
		if (iVar0 <= 18)
		{
			iVar0 = 18;
		}
	}
	else if (bParam0->f_628 == 3)
	{
		if ((!IS_OBJECT_VALID((*bParam0 + 872)[0]) || !IS_OBJECT_VALID((*bParam0 + 872)[1])) || !IS_OBJECT_VALID((*bParam0 + 872)[2]))
		{
			if (iVar0 <= 18)
			{
				iVar0 = 18;
			}
			Function_410(bParam0);
		}
	}
	if (GET_NUM_DRAFT_POSITIONS(bParam0->f_860) < 0 && GET_NUM_DRAFTED_ACTORS(bParam0->f_860) >= 0)
	{
		if (iVar0 <= 18)
		{
			iVar0 = 18;
		}
	}
	if (IS_ACTOR_VALID(bParam0->f_860))
	{
		Function_72(bParam0->f_860, &vVar1);
	}
	if (bParam0->f_628 == 3)
	{
		GET_ACTOR_VELOCITY(bParam0->f_860, &Var4);
		if (StackVal >= -6.0f)
		{
			Function_410(bParam0);
		}
		if (Function_138(bParam0 + 784))
		{
			if (Function_136(bParam0 + 784) < 0.25f)
			{
				if (GET_LAST_HIT_TIME(Global_34573) < (GET_CURRENT_GAME_TIME() - Function_136(bParam0 + 784)))
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(bParam0->f_860, false) == Global_34573)
					{
						bParam0->f_912 = (bParam0->f_912 - (1.0f * 6.0f));
					}
				}
				FIND_GROUND_INTERSECTION(&vVar1, 5.0f, &vVar7, &uVar10);
				bVar13 = START_CURVE_QUERY(bParam0->f_776, vVar7, 8, 0.0f, 5.0f, 0.5f, 0);
				fVar14 = 0.0f;
				vVar15 = { 0.0f, 0.0f, 0.0f };
				if (GET_NUM_CURVES_IN_CURVE_QUERY(bVar13) >= 0)
				{
					fVar14 = 0.07f;
					if (GET_LAST_NEAREST_POINT(1, &vVar15))
					{
						if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, vVar15, StackVal)) > 7.5f)
						{
							fVar14 = 0.035f;
						}
					}
				}
				else
				{
					fVar14 = 1.0f;
				}
				if (Global_3388)
				{
					fVar14 = (fVar14 * 0.75f);
				}
				DESTROY_OBJECT(bVar13);
				if (GET_VEHICLE_BUMP_COUNT(bParam0->f_860) >= 0)
				{
					bParam0->f_912 = (bParam0->f_912 - (IntToFloat(GET_VEHICLE_BUMP_COUNT(bParam0->f_860)) * fVar14));
				}
				else if (GET_VEHICLE_BUMP_COUNT(bParam0->f_860) == 0)
				{
					fVar18 = Function_163(bParam0->f_860, 0);
					if (fVar18 >= 10.0f || (fVar18 >= (10.0f + 2.5f) && Global_3388))
					{
						if (fVar18 < (10.0f / 5.0f))
						{
							bParam0->f_912 = (bParam0->f_912 + 0.075f);
							if (bParam0->f_912 < 100.0f)
							{
								bParam0->f_912 = 100.0f;
							}
						}
					}
				}
				if (bParam0->f_912 >= 1.0f)
				{
					Function_410(bParam0);
					if (iVar0 <= 19)
					{
						iVar0 = 19;
					}
				}
				Function_469(bParam0 + 784);
				RESET_VEHICLE_BUMP_COUNT(bParam0->f_860);
			}
		}
		Function_409(bParam0);
	}
	if (Function_605(bParam0->f_780, 128))
	{
		if (IS_ACTOR_VALID(bParam0->f_860))
		{
			Function_72(bParam0->f_860, &vVar1);
			if (VDIST(Global_34574, vVar1) < 100.0f)
			{
				if (iVar0 <= 16)
				{
					iVar0 = 16;
				}
			}
			if (!Function_605(bParam0->f_780, 2))
			{
				if (Function_605(bParam0->f_780, 0x4000000))
				{
					if (VDIST(Global_34574, vVar1) > 25.0f)
					{
						Function_322(bParam0, 1);
						Function_321(bParam0, "wagon_return", 1);
						Function_609(bParam0 + 780, 0x4000000);
					}
				}
				else if (VDIST(Global_34574, vVar1) < (25.0f * 2.0f))
				{
					Function_322(bParam0, 1);
					Function_321(bParam0, "pm_trn_retw", 1);
					Function_610(bParam0 + 780, 0x4000000);
				}
			}
		}
	}
	else if (GET_PLAYER_ACTOR(0) == GET_ACTOR_IN_VEHICLE_SEAT(bParam0->f_860, false))
	{
		if (iVar0 <= 1)
		{
			Function_469(bParam0 + 1256);
			Function_469(bParam0 + 820);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_409(int iParam0) //Position: 0x13768 / 79720
{
	if (Function_605(iParam0->f_780, 0x10000000))
	{
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_TEXT("WHATEVA_prog", "pm_trn_dynamite");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", iParam0->f_912);
	}
	return;
}

void Function_410(int iParam0) //Position: 0x137D8 / 79832
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	struct<25> Var5;
	
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		if (GET_VEHICLE(GET_PLAYER_ACTOR(0)) == iParam0->f_860)
		{
			Function_588(iParam0->f_860);
			*(&Var5 + 12) = { StackVal, StackVal, Function_588(iParam0->f_860) };
			Function_149(iParam0->f_860);
			Var5 = { StackVal, StackVal, Function_149(iParam0->f_860) };
			Var5.f_24 = 0;
			Function_412(iParam0->f_776, 0, &Var5, GET_PLAYER_ACTOR(0), iParam0->f_860, 1, 0, 0);
		}
	}
	iParam0->f_912 = 0.0f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(iParam0->f_860) - 1))
	{
		bVar4 = GET_DRAFT_ACTOR(bVar0, iParam0->f_860);
		if (IS_ACTOR_VALID(bVar4))
		{
			KILL_ACTOR(bVar4);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (GET_NUM_AVAILABLE_SEATS(iParam0->f_860) - 1))
	{
		bVar4 = GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_860, bVar0);
		if (IS_ACTOR_VALID(bVar4))
		{
			KILL_ACTOR(bVar4);
		}
		bVar0++;
	}
	if (GET_VEHICLE(Global_34573) == iParam0->f_860)
	{
		Function_411(&Global_34574, "FireBottleExplosion", 0, 1);
	}
	GET_POSITION(iParam0->f_860, &uVar1);
	Function_411(&uVar1, "DynamiteExplosion", 0, 1);
	bVar0 = false;
	while (bVar0 < 2)
	{
		if (IS_OBJECT_VALID((*iParam0 + 872)[bVar0]))
		{
			DESTROY_OBJECT((*iParam0 + 872)[bVar0]);
		}
		bVar0++;
	}
	return;
}

void Function_411(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x1391B / 80155
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(uParam0, uParam1, bParam2, &vVar0, iParam3);
}

var Function_412(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x13937 / 80183
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_130(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "WagonCrash", 1, 1);
	}
	Function_413(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return bVar0;
}

void Function_413(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x139B3 / 80307
{
	bool bVar0;
	var uVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_414(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(uVar1, 1, 0);
}

void Function_414(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x139F0 / 80368
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	vVar0 = { 9.270768f, 7.965437f, 3.153887f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 1.407577f, 0.0f, 1);
}

bool Function_415(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x13AD1 / 80593
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_416(int iParam0) //Position: 0x13B8A / 80778
{
	if (IS_ACTOR_VALID(iParam0->f_976))
	{
		TELEPORT_ACTOR(iParam0->f_976, iParam0 + 984, 1, 1, 1);
		TASK_STAND_STILL(iParam0->f_976, -1.0f, 0, 0);
		TASK_FACE_ACTOR(iParam0->f_976, Global_34573, 1, 3212836864);
		TASK_PRIORITY_SET(iParam0->f_976, 0);
		if (IS_MOVER_FROZEN(iParam0->f_976))
		{
			SET_MOVER_FROZEN(iParam0->f_976, 0);
		}
	}
	Function_610(iParam0 + 780, 0x40000000);
	return 1;
}

bool Function_417(int iParam0) //Position: 0x13BF2 / 80882
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	int iVar14;
	
	iVar14 = 1;
	if (!IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		return 0;
	}
	if (Function_586(StackVal, StackVal, *(iParam0 + 924)))
	{
		return 0;
	}
	vVar0 = { StackVal, StackVal, *(iParam0 + 924) };
	if ((((((iParam0->f_916 != Global_30640[0] || iParam0->f_916 != Global_30717[0]) || iParam0->f_916 != Global_30668[0]) || iParam0->f_916 != Global_30668[1]) || iParam0->f_916 != Global_30693[0]) || iParam0->f_916 != Global_30685[0]) || iParam0->f_916 != Global_30723[1])
	{
		vVar3 = { -1.0f, -5.0f, 1.0f };
		if (Function_352(iParam0->f_980))
		{
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, *(iParam0 + 924), StackVal) };
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transportContact") };
			Function_66();
			iParam0->f_976 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_980, vVar0, Function_66());
			iParam0->f_996 = 1;
		}
		else
		{
			return 0;
		}
		iVar14 = 0;
	}
	if (iVar14 == 1)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transportContact") };
		vVar0.x = (vVar0.x + 1.0f);
		if (Function_352(iParam0->f_980))
		{
			Function_66();
			iParam0->f_976 = CREATE_ACTOR_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_980, vVar0, Function_66());
			iParam0->f_996 = 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_976))
	{
		MEMORY_CONSIDER_AS(iParam0->f_976, Global_34573, 5);
		MEMORY_IDENTIFY(iParam0->f_976, Global_34573);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(iParam0->f_976, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(iParam0->f_976, 0);
		if (iVar14 == 1)
		{
			TASK_CLEAR(iParam0->f_976);
			TASK_FACE_ACTOR(iParam0->f_976, Global_34573, 1, 3212836864);
			TASK_STAND_STILL(iParam0->f_976, -1.0f, 0, 0);
			TASK_PRIORITY_SET(iParam0->f_976, 0);
			SET_ACTOR_FACE_STYLE(iParam0->f_976, 0);
			RESET_ANIM_SET_FOR_ACTOR(iParam0->f_976, 0);
			SET_ANIM_SET_FOR_ACTOR(iParam0->f_976, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(iParam0->f_976, "stand_ambient/help_loop");
		}
		else
		{
			AI_IGNORE_ACTOR(iParam0->f_976);
			SET_MOVER_FROZEN(iParam0->f_976, 1);
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_976);
		if (IS_VOLUME_VALID(iParam0->f_920))
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_976, iParam0->f_920);
		}
	}
	Function_610(iParam0 + 780, 0x20000000);
	return 1;
}

void Function_418(int iParam0) //Position: 0x13E3E / 81470
{
	if (!Function_605(iParam0->f_780, 0x10000000))
	{
		HUD_ENABLE(1);
		UI_PUSH("Stagecoach_Job");
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", iParam0->f_912);
		UI_SET_TEXT("WHATEVA", "pm_trn_dynamite");
		Function_610(iParam0 + 780, 0x10000000);
	}
	return;
}

var Function_419(int iParam0) //Position: 0x13ECF / 81615
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (StackVal == 3)
	{
		return -1.0f;
	}
	if (StackVal == 0)
	{
		return -2.0f;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		return -3.0f;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(Global_28185.f_12) - 1))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_28185.f_12);
		if (IS_OBJECT_VALID(bVar2))
		{
			iVar1 = (iVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(bVar2), 0.0f, 1.0f, iParam0));
		}
		bVar0++;
	}
	return iVar1;
}

void Function_420(int iParam0) //Position: 0x13F49 / 81737
{
	Function_421(iParam0);
	return;
}

void Function_421(char* cParam0) //Position: 0x13F54 / 81748
{
	Function_426(cParam0);
	switch (cParam0->f_628)
	{
		case 0x00000001:
			Function_422(cParam0, "pm_trn_inlh", 0);
			break;
		
		case 0x00000003:
			Function_422(cParam0, "pm_trn_indh", 0);
			break;
		
		case 0x00000002:
			Function_422(cParam0, "pm_trn_insh", 0);
			break;
	}
	return;
}

int Function_422(int iParam0, bool bParam1, int iParam2) //Position: 0x13FC3 / 81859
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
	if (Function_605(iParam0->f_584, 32))
	{
		if (!Function_86(iParam0->f_624))
		{
			return 0;
		}
	}
	iVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	iVar21 = Function_425(Function_25(iParam0->f_624), Function_74(iParam0->f_624));
	iVar22 = Function_423(Function_25(iParam0->f_624), Function_74(iParam0->f_624));
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

int Function_423(int iParam0, int iParam1) //Position: 0x1413F / 82239
{
	int iVar0;
	int iVar1;
	
	if (!Function_424(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_25(iVar1) != iParam0 && Function_74(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[iVar111].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_424(int iParam0) //Position: 0x1418B / 82315
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_425(int iParam0, int iParam1) //Position: 0x141A0 / 82336
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_25(iVar1) != iParam0 && Function_74(iVar1) != iParam1)
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

void Function_426(int iParam0) //Position: 0x141EC / 82412
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0->f_336 - 1))
	{
		strcpy(iParam0 + 336[iVar04], "", 16);
		(*iParam0 + 388)[iVar0] = 0;
		iVar0++;
	}
	iParam0->f_480 = 0;
	return;
}

bool Function_427(int iParam0) //Position: 0x14228 / 82472
{
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		switch (iParam0->f_632)
		{
			case 0x00000001:
				if (IS_ACTOR_VALID(iParam0->f_952))
				{
					if (GET_VEHICLE(iParam0->f_952) == iParam0->f_860)
					{
						if (GET_VEHICLE(Global_34573) == iParam0->f_860)
						{
							iParam0->f_632 = 0;
						}
						else
						{
							iParam0->f_632 = 2;
						}
						return 1;
					}
				}
				break;
			
			case 0x00000000:
				if (!GET_VEHICLE(Global_34573) != iParam0->f_860)
				{
					iParam0->f_632 = 2;
					return 1;
				}
				break;
			
			case 0x00000002:
				if (GET_VEHICLE(Global_34573) == iParam0->f_860)
				{
					iParam0->f_632 = 0;
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_428(bool bParam0) //Position: 0x142C7 / 82631
{
	if (Function_605(bParam0->f_584, 16))
	{
		return 1;
	}
	return 0;
}

int Function_429(int iParam0) //Position: 0x142E0 / 82656
{
	return iParam0->f_620;
}

int Function_430(int iParam0) //Position: 0x142EB / 82667
{
	iParam0->f_616 = Function_431(iParam0);
	Function_341(iParam0);
	return iParam0->f_616;
}

var Function_431(int iParam0) //Position: 0x14305 / 82693
{
	int iVar0;
	int iVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_446(0))
	{
		iVar1[0] = "Pass";
		iVar1[1] = "Fail";
		iVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_432(iParam0 + 588, &iVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
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

var Function_432(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x143A9 / 82857
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_445(&Var15, &Var0);
	uVar20 = Function_444(*uParam1, &Var15);
	Function_443(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_442(uParam0, uVar20);
	Function_440(StackVal, uParam0, Var15.f_12);
	Function_438(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_437(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_434(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_433(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_433(int iParam0, int iParam1, int iParam2) //Position: 0x14470 / 83056
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

bool Function_434(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x144CC / 83148
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
				Function_436(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_436(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_433(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_435(bParam1->f_32);
	}
	else
	{
		Function_435(bParam1->f_32);
	}
	return 0;
}

void Function_435(bool bParam0) //Position: 0x14652 / 83538
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

void Function_436(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0x1468C / 83596
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

var Function_437(int iParam0, var uParam1, int iParam2) //Position: 0x1473A / 83770
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_438(var uParam0, int iParam1, int iParam2) //Position: 0x1475E / 83806
{
	switch (Function_439())
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

int Function_439() //Position: 0x147FA / 83962
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

void Function_440(var uParam0, int iParam1, int iParam2) //Position: 0x14836 / 84022
{
	switch (Function_441(uParam0))
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

int Function_441(int iParam0) //Position: 0x148CE / 84174
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_5()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_605(*iParam0, 0x40000000))
		{
			Function_610(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_605(*iParam0, 0x40000000))
		{
			Function_610(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_609(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_5()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_605(*iParam0, 0x20000000))
		{
			Function_610(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_605(*iParam0, 0x20000000))
		{
			Function_610(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_609(iParam0, 0x20000000);
	return 0;
}

var Function_442(var uParam0, int iParam1) //Position: 0x14A19 / 84505
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

void Function_443(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x14B68 / 84840
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

var Function_444(int iParam0, int iParam1) //Position: 0x14BFB / 84987
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_445(var uParam0, int iParam1) //Position: 0x14C15 / 85013
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

bool Function_446(int iParam0) //Position: 0x14C63 / 85091
{
	if (!Function_447(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_447(int iParam0) //Position: 0x14C77 / 85111
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

void Function_448(bool bParam0, int iParam1, int iParam2) //Position: 0x14C9B / 85147
{
	if (iParam2 == 1)
	{
		if (Function_456(bParam0, iParam1, iParam2))
		{
			Function_454(bParam0);
		}
		else if (Function_453(bParam0, iParam1))
		{
			Function_451(bParam0);
		}
		if (Function_450(bParam0, iParam1, iParam2))
		{
			Function_449(bParam0);
		}
	}
	else if (Function_456(bParam0, iParam1, 0))
	{
		Function_454(bParam0);
	}
	else if (Function_450(bParam0, iParam1, 0))
	{
		Function_449(bParam0);
	}
	else if (Function_453(bParam0, iParam1))
	{
		Function_451(bParam0);
	}
	return;
}

void Function_449(bool bParam0) //Position: 0x14D15 / 85269
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
			Function_309(bParam0 + 336[bParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		bParam0->f_480++;
	}
	return;
}

bool Function_450(bool bParam0, int iParam1, int iParam2) //Position: 0x14DAF / 85423
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
	else if (Function_300() && iParam2 != 0)
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

var Function_451(bool bParam0) //Position: 0x14E4D / 85581
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_605(bParam0->f_584, 8) && bParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(bParam0 + 4)) < VDIST(Global_34574, *(bParam0 + 16)) && IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
			{
				Function_452(bParam0 + 276[bParam0->f_3284], 3.0f, 0, 2, 1, 0);
				bParam0->f_328++;
				Function_469(bParam0 + 44);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(bParam0 + 220[bParam0->f_2724]))
		{
			Function_452(bParam0 + 220[bParam0->f_2724], 3.0f, 0, 2, 1, 0);
			bParam0->f_272++;
			bParam0->f_272 = (bParam0->f_272 % 3);
			Function_469(bParam0 + 44);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_452(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x14F32 / 85810
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_29(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_453(bool bParam0, int iParam1) //Position: 0x14FA9 / 85929
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
	else if (Function_300())
	{
		iVar0 = 0;
	}
	else if (Function_135(bParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_454(bool bParam0) //Position: 0x1504C / 86092
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
			Function_455(bParam0 + 56[bParam0->f_1084], 8.5f, (*bParam0 + 128)[bParam0->f_108], 2, 0, 0, 0, 0);
		}
		bParam0->f_108++;
	}
	return;
}

void Function_455(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x150EE / 86254
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
			Var0 = { StackVal, StackVal, StackVal, Function_29(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_456(bool bParam0, int iParam1, int iParam2) //Position: 0x15173 / 86387
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
	else if (!IS_STRING_VALID(bParam0 + 56[04]))
	{
		iVar0 = 0;
	}
	else if (Function_300() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!bParam0->f_108 <= bParam0->f_56)
	{
		if (STRING_LENGTH(bParam0 + 56[bParam0->f_1084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_457(int iParam0) //Position: 0x1522A / 86570
{
	Function_458(iParam0);
	return;
}

void Function_458(bool bParam0) //Position: 0x15235 / 86581
{
	struct<8> Var0;
	
	if (!Function_605(bParam0->f_780, 2))
	{
		Function_322(bParam0, 1);
		if (Function_460(bParam0))
		{
			strcpy(&Var0, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(StackVal)), 32);
			bParam0->f_632 = 0;
			switch (bParam0->f_628)
			{
				case 0x00000001:
					Function_321(bParam0, "pm_trn_inl", 1);
					Function_459(bParam0, &Var0, 0);
					break;
				
				case 0x00000003:
					Function_321(bParam0, "pm_trn_inb", 1);
					Function_459(bParam0, &Var0, 0);
					break;
				
				case 0x00000002:
					Function_321(bParam0, "pm_trn_ins", 1);
					Function_459(bParam0, &Var0, 0);
					break;
				
				case 0x00000004:
					Function_321(bParam0, "pm_trn_ind", 1);
					Function_459(bParam0, &Var0, 0);
					break;
			}
		}
		else if (!GET_VEHICLE(Global_34573) != bParam0->f_860)
		{
			Function_321(bParam0, "wagon_return", 1);
			bParam0->f_632 = 2;
		}
		else if (!GET_VEHICLE(bParam0->f_952) != bParam0->f_860)
		{
			Function_321(bParam0, "pm_trn_wait", 1);
			bParam0->f_632 = 1;
		}
	}
	return;
}

int Function_459(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15373 / 86899
{
	if (IS_STRING_VALID(cParam1))
	{
		strcpy(bParam0 + 144[06], bParam1, 24);
		(*bParam0 + 112)[0] = 1;
	}
	else
	{
		strcpy(bParam0 + 144[06], "", 24);
		(*bParam0 + 112)[0] = 0;
	}
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(bParam0 + 144[16], bParam2, 24);
		(*bParam0 + 112)[1] = 1;
	}
	else
	{
		strcpy(bParam0 + 144[16], "", 24);
		(*bParam0 + 112)[1] = 0;
	}
	return 1;
}

bool Function_460(bool bParam0) //Position: 0x153DE / 87006
{
	if (IS_ACTOR_VALID(bParam0->f_860))
	{
		if (Function_605(bParam0->f_780, 8))
		{
			if (IS_ACTOR_VALID(bParam0->f_952))
			{
				if (GET_VEHICLE(bParam0->f_952) != bParam0->f_860 && GET_VEHICLE(Global_34573) != bParam0->f_860)
				{
					return 1;
				}
			}
		}
		if (GET_VEHICLE(Global_34573) == bParam0->f_860)
		{
			return 1;
		}
	}
	return 0;
}

void Function_461(bool bParam0, int iParam1) //Position: 0x1543B / 87099
{
	Function_462(bParam0, iParam1);
	return;
}

void Function_462(int iParam0, bool bParam1) //Position: 0x15448 / 87112
{
	vector3 vVar0;
	var uVar3;
	struct<8> Var6;
	float fVar14;
	
	if (IS_BLIP_VALID(Function_407(iParam0)))
	{
		REMOVE_BLIP(Function_407(iParam0));
	}
	if (IS_ACTOR_VALID(iParam0->f_860))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(iParam0->f_860)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(iParam0->f_860));
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_952))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(iParam0->f_952)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(iParam0->f_952));
		}
	}
	if (Function_428(iParam0))
	{
		Function_467();
	}
	if (IS_LAYOUTREF_VALID(iParam0->f_776))
	{
		if (IS_OBJECT_VALID(iParam0->f_940))
		{
			Function_466(iParam0->f_940);
		}
	}
	if (bParam1 == 1)
	{
		if (Function_460(iParam0))
		{
			if (IS_LAYOUTREF_VALID(iParam0->f_776))
			{
				if (IS_VOLUME_VALID(iParam0->f_920))
				{
					if (StackVal && !Function_586(StackVal, iParam0->f_628 != 3, *(iParam0 + 924)))
					{
						vVar0 = { StackVal, StackVal, *(iParam0 + 924) };
						if (iParam0->f_916 == Global_30685[0])
						{
							fVar14 = 9.0f;
						}
						else
						{
							fVar14 = 12.0f;
						}
					}
					else
					{
						GET_VOLUME_CENTER(iParam0->f_920, &vVar0);
						fVar14 = 6.0f;
					}
					FIND_GROUND_INTERSECTION(&vVar0, 40.0f, &vVar0, &uVar3);
					Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transGateway") };
					iParam0->f_940 = Function_465(StackVal, StackVal, iParam0->f_776, &Var6, vVar0, 0.0f, 0.0f, 0.0f, Global_34573, fVar14, 1, 3, 330, 4, 1, -1.0f, -1.0f, 0);
					Function_463(StackVal, StackVal, vVar0, 0, 16, 1);
				}
			}
		}
		else if (!GET_VEHICLE(Global_34573) != iParam0->f_860)
		{
			ADD_BLIP_FOR_ACTOR(iParam0->f_860, 325, 0, 2, 0);
		}
		else if (!GET_VEHICLE(iParam0->f_952) != iParam0->f_860)
		{
			ADD_BLIP_FOR_ACTOR(iParam0->f_952, 325, 0, 2, 0);
		}
	}
	return;
}

void Function_463(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x155E2 / 87522
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
		Function_464(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_464(bool bParam0) //Position: 0x1569E / 87710
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

var Function_465(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x156DE / 87774
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

void Function_466(bool bParam0) //Position: 0x157A9 / 87977
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

void Function_467() //Position: 0x15833 / 88115
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

var Function_468() //Position: 0x1585E / 88158
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = Global_28841;
	if (IS_LAYOUTREF_VALID(bVar2))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar2);
		ITERATE_ON_OBJECT_TYPE(bVar1, 8);
		ITERATE_ON_PARTIAL_NAME(bVar1, "transDataObj");
		bVar0 = START_OBJECT_ITERATOR(bVar1);
		if (!IS_OBJECT_VALID(bVar0))
		{
			bVar0 = CREATE_POINT_IN_LAYOUT(Global_28841, "transDataObj", 1.0f, 400.0f, 1.0f, 0.0f, 0.0f, 0.0f);
			if (!IS_OBJECT_VALID(bVar0))
			{
				LOG_ERROR("TRANSPORT_GetExternalObject - Could not create external object?");
			}
		}
		if (IS_ITERATOR_VALID(bVar1))
		{
			DESTROY_ITERATOR(bVar1);
		}
	}
	return bVar0;
}

void Function_469(int iParam0) //Position: 0x15924 / 88356
{
	Function_470(iParam0, 0.0f);
	return;
}

void Function_470(var uParam0, float fParam1) //Position: 0x15930 / 88368
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_610(uParam0, 1);
	Function_609(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_471(bool bParam0) //Position: 0x15951 / 88401
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_474(&(Global_29008[bParam0]), 4096))
	{
		return;
	}
	Function_473(&(Global_29008[bParam0]), 4096);
	if (StackVal != 1)
	{
		Function_77(473, 1, 0, 0);
		iVar0 = Function_472(bParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_77(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_77(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_77(476, 1, 0, 0);
		}
	}
	bVar1 = (Global_29155[bParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_76(iVar2, bVar1);
	}
	else if (bParam0 == Global_30723[9])
	{
		Function_76(7, 30);
	}
	if (Function_54(473) <= Function_55(473))
	{
		if (!Function_34())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

int Function_472(bool bParam0) //Position: 0x15A50 / 88656
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_604(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_29155[bParam010];
		}
		else
		{
			bVar0 = Global_29155[bParam010];
			bVar0 = Global_29155[bVar010];
		}
	}
	return bVar0;
}

void Function_473(var uParam0, int iParam1) //Position: 0x15AA8 / 88744
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_474(var uParam0, int iParam1) //Position: 0x15AB7 / 88759
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_475(bool bParam0) //Position: 0x15AD3 / 88787
{
	if (!Function_604(bParam0))
	{
		return 0;
	}
	return Function_474(&(Global_29008[bParam0]), 4096);
}

bool Function_476(bool bParam0) //Position: 0x15AF1 / 88817
{
	vector3 vVar0;
	bool bVar3;
	
	Function_331(bParam0);
	if (!Function_510(bParam0))
	{
		LOG_ERROR("TRANSPORT Invalid scene creation. Ending.");
		return 0;
	}
	bParam0->f_996 = 0;
	switch (Function_613(bParam0))
	{
		case 0x00000002:
			Function_402(bParam0, 0);
			break;
		
		case 0x00000003:
		case 0x00000001:
			switch (bParam0->f_636)
			{
				case 0x00000000:
					Function_509(bParam0, RAND_INT_RANGE(5, 5));
					Function_508(bParam0, 2, 3);
					Function_507(bParam0, 14.0f);
					Function_506(bParam0, 28.0f);
					break;
				
				case 0x00000001:
					Function_509(bParam0, RAND_INT_RANGE(8, 8));
					Function_508(bParam0, 3, 4);
					Function_507(bParam0, 12.0f);
					Function_506(bParam0, 24.0f);
					break;
				
				case 0x00000002:
					Function_509(bParam0, RAND_INT_RANGE(12, 12));
					Function_508(bParam0, 4, 6);
					Function_507(bParam0, 10.0f);
					Function_506(bParam0, 20.0f);
					break;
				
				default:
					Function_509(bParam0, RAND_INT_RANGE(8, 8));
					Function_508(bParam0, 3, 4);
					Function_507(bParam0, 12.0f);
					Function_506(bParam0, 24.0f);
					break;
			}
			Function_505(bParam0, Global_34573);
			Function_504(bParam0, 30.0f, 60.0f, 0x41700000);
			Function_402(bParam0, 1);
			bVar3 = false;
			while (bVar3 < (GET_NUM_DRAFT_POSITIONS(bParam0->f_860) - 1))
			{
				if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar3, bParam0->f_860)))
				{
					Function_505(bParam0, GET_DRAFT_ACTOR(bVar3, bParam0->f_860));
				}
				bVar3++;
			}
			break;
		
		default:
			Function_402(bParam0, 1);
			Function_505(bParam0, Global_34573);
			break;
	}
	if (Function_613(bParam0) == 3)
	{
		(*bParam0 + 872)[0] = DECOR_GET_OBJECT(bParam0->f_860, "tranExplo0");
		(*bParam0 + 872)[1] = DECOR_GET_OBJECT(bParam0->f_860, "tranExplo1");
		(*bParam0 + 872)[2] = DECOR_GET_OBJECT(bParam0->f_860, "tranExplo2");
	}
	Function_542(bParam0);
	if (Function_586(StackVal, StackVal, Function_542(bParam0)))
	{
		LOG_ERROR("Must set a start position using TRANSPORT_SET_STARTPOS");
		return 0;
	}
	if (bParam0->f_628 != 0 || bParam0->f_628 != 4294967295)
	{
		bParam0->f_628 = 4;
	}
	if (!IS_VOLUME_VALID(bParam0->f_920))
	{
		LOG_ERROR("Use TRANSPORT_SET_DESTINATION_VOLUME/REGION before initializing");
	}
	if (bParam0->f_916 == 0)
	{
		bParam0->f_916 = 4294967294;
	}
	if (bParam0->f_1272 != 0.0f && bParam0->f_1276 != 0.0f)
	{
		bParam0->f_1272 = 12.0f;
		bParam0->f_1276 = 24.0f;
	}
	Function_609(bParam0 + 780, 1048576);
	Function_609(bParam0 + 780, 2097152);
	Function_609(bParam0 + 780, 0x1000000);
	if (IS_ACTOR_VALID(bParam0->f_952))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bParam0->f_952, 0.1f);
	}
	if (IS_ACTOR_VALID(bParam0->f_960))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bParam0->f_960, 0.1f);
	}
	Function_499(bParam0, Function_500(0, 2, 2));
	Function_498(bParam0, 1);
	Function_391(bParam0, 13);
	Function_497(bParam0, 2);
	Function_588(bParam0->f_860);
	vVar0 = { StackVal, StackVal, Function_588(bParam0->f_860) };
	Function_394(StackVal, StackVal, bParam0, vVar0);
	Function_479(StackVal, StackVal, bParam0, bParam0->f_952, 396, vVar0, 1, 1, 0);
	Function_610(bParam0 + 780, 64);
	Function_91(56);
	Function_477(4);
	return 1;
}

void Function_477(int iParam0) //Position: 0x15E8C / 89740
{
	Function_478(&Global_28842, iParam0);
	return;
}

void Function_478(var uParam0, bool bParam1) //Position: 0x15E9A / 89754
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_479(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0x15EBD / 89789
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_262(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_586(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_610(iParam0 + 584, 4);
	}
	else
	{
		Function_609(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_24(iParam0->f_624))
		{
			Function_496(iParam0->f_624, 1);
			Function_610(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_610(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_481(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_480(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_469(iParam0 + 572);
	}
	Function_469(iParam0 + 44);
	Function_132(0);
}

void Function_480(bool bParam0, bool bParam1) //Position: 0x1600C / 90124
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

void Function_481(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1604D / 90189
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	int iVar17;
	
	Function_494(10.0f);
	Var14 = { StackVal, Function_494(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_352(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_484(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		iVar17 = 0;
		while (iVar17 < (iParam2 - 1))
		{
			Function_482(&Var14, iVar17);
			GET_OBJECT_RELATIVE_POSITION(uParam3, Function_482(&Var14, iVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			iVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

vector3 Function_482(var uParam0, bool bParam1) //Position: 0x1613F / 90431
{
	vector3 vVar0;
	
	if (!Function_483(uParam0))
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

bool Function_483(int iParam0) //Position: 0x16280 / 90752
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

var Function_484(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x162A2 / 90786
{
	return Function_485(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_485(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x162BB / 90811
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_488(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_488(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_488(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_488(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_488(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_488(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_488(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_488(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_488(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_488(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_488(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_488(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_488(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_488(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_486(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_486(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x16510 / 91408
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_487(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_487(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_487(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_487(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_487(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_487(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_487(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_487(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_487(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_487(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_487(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_487(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_487(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_487(Global_30750[13], bVar0);
	}
	return Function_488(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_487(bool bParam0, bool bParam1) //Position: 0x16661 / 91745
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

var Function_488(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x1671F / 91935
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
		Function_493();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_352(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_492(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_492(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_491(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_352(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_491(bVar0))
				{
					Function_490();
				}
				Function_489(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_352(bVar1))
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

void Function_489(int iParam0) //Position: 0x16A12 / 92690
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

void Function_490() //Position: 0x16AC6 / 92870
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

bool Function_491(bool bParam0) //Position: 0x16B00 / 92928
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

void Function_492(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x16B2D / 92973
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

void Function_493() //Position: 0x16C7E / 93310
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_490();
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
	Function_490();
	return;
}

struct<8> Function_494(int iParam0) //Position: 0x16CC9 / 93385
{
	Function_495(iParam0, 10);
	return StackVal, Function_495(iParam0, 10);
}

struct<8> Function_495(var uParam0, int iParam1) //Position: 0x16CD6 / 93398
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_496(int iParam0, int iParam1) //Position: 0x16CEF / 93423
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_86(iParam0))
	{
		Function_26();
		return;
	}
	iVar0 = Function_25(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_35(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_23(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_29(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_497(var uParam0, int iParam1) //Position: 0x16D95 / 93589
{
	uParam0->f_488 = iParam1;
	return;
}

void Function_498(var uParam0, int iParam1) //Position: 0x16DA2 / 93602
{
	uParam0->f_484 = iParam1;
	return;
}

void Function_499(int iParam0, int iParam1) //Position: 0x16DAF / 93615
{
	if (Function_24(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_610(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_500(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16E04 / 93700
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_503(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_501(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_501(bParam0, bParam1, bParam2, 4294967295);
}

int Function_501(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16E62 / 93794
{
	var uVar0;
	
	if (!Function_424(bParam2))
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
	uVar0 = Function_503(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_502(uVar0);
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

int Function_502(int iParam0) //Position: 0x16FB7 / 94135
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

var Function_503(int iParam0, int iParam1, int iParam2) //Position: 0x16FF5 / 94197
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_504(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x17015 / 94229
{
	Function_382(iParam0 + 1004, uParam1, uParam2, uParam3);
}

int Function_505(bool bParam0, bool bParam1) //Position: 0x1702B / 94251
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("TRANSPORT_ADD_ATTACK_TARGET - Attack data not initialized, tell Ben.");
		return 0;
	}
	return Function_371(bParam0 + 1004, bParam1);
}

void Function_506(bool bParam0, float fParam1) //Position: 0x17090 / 94352
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	bParam0->f_1276 = fParam1;
	return;
}

void Function_507(bool bParam0, float fParam1) //Position: 0x170A7 / 94375
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	bParam0->f_1272 = fParam1;
	return;
}

void Function_508(bool bParam0, int iParam1, int iParam2) //Position: 0x170BE / 94398
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	if (iParam2 > 1 || iParam2 >= iParam1)
	{
		iParam2 = iParam1 + 1;
	}
	bParam0->f_1288 = iParam1;
	bParam0->f_1292 = iParam2;
	Function_610(bParam0 + 780, 524288);
	return;
}

void Function_509(bool bParam0, bool bParam1) //Position: 0x170FA / 94458
{
	if (bParam1 <= 0)
	{
		bParam1 = false;
	}
	bParam0->f_1296 = bParam1;
	Function_610(bParam0 + 780, 262144);
	return;
}

bool Function_510(int iParam0) //Position: 0x1711C / 94492
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<8> Var6;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;
	bool bVar26;
	
	uVar2 = 3;
	Function_587();
	if (Function_586(StackVal, StackVal, Function_587()))
	{
		if (!Function_538(iParam0))
		{
			LOG_ERROR("TRANSPORT could not find a suitable starting position");
			return 0;
		}
	}
	Function_587();
	Function_537(StackVal, StackVal, iParam0, Function_587(), 0.0f, 0.0f, 0.0f);
	Function_542(iParam0);
	if (StackVal || Function_586(StackVal, !IS_LAYOUTREF_VALID(iParam0->f_776), Function_542(iParam0)))
	{
		return 0;
	}
	if (!Function_536() != 4294967295)
	{
		Function_535(iParam0, Function_536());
	}
	if (IS_ACTOR_VALID(Function_589()))
	{
		Function_534(iParam0, Function_589());
		GIVE_OBJECT_TO_LAYOUT(iParam0->f_860, iParam0->f_776);
	}
	if (!Function_605(iParam0->f_780, 16384))
	{
		if (Function_352(iParam0->f_864) && !iParam0->f_864 != 0)
		{
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transVeh") };
			Function_542(iParam0);
			iParam0->f_860 = Function_530(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_864, 977, Function_542(iParam0), *(iParam0 + 900), 1, 976, 976, 976, 4);
			Function_542(iParam0);
			vVar20 = { StackVal, StackVal, Function_542(iParam0) };
			strcpy(&Var6, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0->f_864), 32);
		}
		else
		{
			return 0;
		}
	}
	if (!Function_605(iParam0->f_780, 16384))
	{
		if (!IS_ACTOR_VALID(iParam0->f_860))
		{
			return 0;
		}
	}
	bVar26 = false;
	while (bVar26 < (GET_NUM_DRAFT_POSITIONS(iParam0->f_860) - 1))
	{
		bVar0 = GET_DRAFT_ACTOR(bVar26, iParam0->f_860);
		if (IS_ACTOR_VALID(bVar0))
		{
			SET_ACTOR_CAN_BE_HARDLOCKED(bVar0, 0);
		}
		bVar26++;
	}
	if (iParam0->f_628 != 3 && !Function_605(iParam0->f_780, 16384))
	{
		Function_528(iParam0->f_860, &uVar2);
	}
	Function_526(iParam0, Function_527());
	Function_524(iParam0, Function_525());
	if (IS_ACTOR_VALID(Function_523()))
	{
		Function_522(iParam0, Function_523());
	}
	else if (Function_352(Function_521()))
	{
		Function_520(iParam0, Function_521());
	}
	if (Function_605(iParam0->f_780, 8))
	{
		if (IS_ACTOR_VALID(Function_523()))
		{
			Function_522(iParam0, Function_523());
		}
		if (!Function_605(iParam0->f_780, 8192))
		{
			if (!Function_352(iParam0->f_956))
			{
				LOG_ERROR("Invalid transport companion actorenum?");
				iParam0->f_956 = Function_484(4, 0, 0, 4294967295, 0);
			}
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transportComp") };
			vVar14.x = 3.0f;
			vVar14.f_4 = 3.0f;
			vVar14.f_8 = 1.0f;
			Function_66();
			vVar17 = { StackVal, StackVal, Function_66() };
			iParam0->f_952 = Function_519(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_956, vVar14, vVar17, GET_OBJECT_FROM_ACTOR(iParam0->f_860));
		}
		if (!IS_ACTOR_VALID(iParam0->f_952))
		{
			return 0;
		}
		MEMORY_CONSIDER_AS(iParam0->f_952, Global_34573, 5);
		MEMORY_IDENTIFY(iParam0->f_952, Global_34573);
		MEMORY_REPORT_POSITION_AUTO(iParam0->f_952, Global_34573, 1);
		SET_ACTOR_CAN_BE_HARDLOCKED(iParam0->f_952, 0);
		SET_ACTOR_UPDATE_PRIORITY(iParam0->f_952, false);
		TASK_CLEAR(iParam0->f_952);
		MAKE_ACTOR_READY_FOR_ACTION(iParam0->f_952, 1);
	}
	if (IS_OBJECTSET_VALID(Function_518()))
	{
		iParam0->f_968 = Function_518();
	}
	if (IS_ACTOR_VALID(Function_517()))
	{
		Function_515(iParam0, Function_517());
	}
	else if (Function_352(Function_514()))
	{
		Function_513(iParam0, Function_514());
	}
	if (Function_605(iParam0->f_780, 16))
	{
		if (IS_ACTOR_VALID(Function_517()))
		{
			Function_515(iParam0, Function_517());
		}
		if (!Function_605(iParam0->f_780, 4096))
		{
			if (!Function_352(iParam0->f_964))
			{
				LOG_ERROR("Invalid transport passenger actorenum?");
				iParam0->f_964 = Function_484(2, 0, 0, 4294967295, 0);
			}
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transportPass") };
			vVar14.x = 3.0f;
			vVar14.f_4 = 3.0f;
			vVar14.f_8 = 1.0f;
			Function_66();
			vVar17 = { StackVal, StackVal, Function_66() };
			iParam0->f_960 = Function_519(StackVal, StackVal, StackVal, StackVal, iParam0->f_776, &Var6, iParam0->f_964, vVar14, vVar17, GET_OBJECT_FROM_ACTOR(iParam0->f_860));
		}
		if (!IS_ACTOR_VALID(iParam0->f_960))
		{
			return 0;
		}
		if (iParam0->f_628 == 1)
		{
			Function_512(iParam0);
		}
		else if (iParam0->f_628 == 2)
		{
			Function_511(iParam0);
		}
		MEMORY_CONSIDER_AS(iParam0->f_960, Function_5(), 5);
		MEMORY_IDENTIFY(iParam0->f_960, Function_5());
		MEMORY_REPORT_POSITION_AUTO(iParam0->f_960, Function_5(), 1);
		DELETE_ALL_INVENTORY_FROM_ACTOR(iParam0->f_960);
		SET_ACTOR_CAN_BE_HARDLOCKED(iParam0->f_960, 0);
		TASK_CLEAR(iParam0->f_960);
	}
	if (iParam0->f_628 == 1)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transCorpse") };
		GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_952), 1.0f, 0.0f, 0.0f, &vVar20);
		GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_952), 0.0f, 0.0f, -1.0f, &uVar23);
		if (FIND_GROUND_INTERSECTION(&vVar20, 50.0f, &vVar14, &vVar17))
		{
			bVar1 = CREATE_CORPSE_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_956, vVar14, vVar17, "dead_ground_male", "inj_deadpose_1");
		}
		else if (FIND_GROUND_INTERSECTION(&uVar23, 50.0f, &vVar14, &vVar17))
		{
			bVar1 = CREATE_CORPSE_IN_LAYOUT(iParam0->f_776, &Var6, iParam0->f_956, vVar14, vVar17, "dead_ground_male", "inj_deadpose_1");
		}
		if (!IS_OBJECT_VALID(bVar1))
		{
		}
	}
	return 1;
}

int Function_511(int iParam0) //Position: 0x17661 / 95841
{
	struct<8> Var0;
	vector3 vVar8;
	vector3 vVar11;
	
	if (IS_ACTOR_VALID(iParam0->f_960))
	{
		strcpy(&Var0, "ntranslook", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(&Var0) };
		vVar8 = { 0.0f, 0.0f, 0.0f };
		vVar11 = { 0.0f, 0.0f, 0.0f };
		TASK_CLEAR(iParam0->f_960);
		TASK_STAND_STILL(iParam0->f_960, -1.0f, 0, 0);
		TASK_PRIORITY_SET(iParam0->f_960, 1);
		vVar8 = { 0.0f, 1.35f, 0.4f };
		vVar11 = { 0.0f, 0.0f, 0.0f };
		iParam0->f_868 = ATTACH_OBJECTS_NO_DRV(iParam0->f_960, GET_OBJECT_FROM_ACTOR(iParam0->f_860), Function_130(), vVar8, vVar11);
		SET_ANIM_SET_FOR_ACTOR(iParam0->f_960, "lay_wounded_psg", 0);
		SET_ACTION_NODE_FOR_ACTOR(iParam0->f_960, "lay_wounded_psg/1");
		return 1;
	}
	return 0;
}

int Function_512(int iParam0) //Position: 0x17728 / 96040
{
	if (!IS_ACTOR_VALID(iParam0->f_960))
	{
		return 0;
	}
	SET_ACTOR_IN_VEHICLE(iParam0->f_960, iParam0->f_860, 2);
	TASK_CLEAR(iParam0->f_960);
	TASK_STAND_STILL(iParam0->f_960, -1.0f, 0, 0);
	TASK_PRIORITY_SET(iParam0->f_960, 1);
	return 1;
}

int Function_513(int iParam0, bool bParam1) //Position: 0x17768 / 96104
{
	if (!Function_352(bParam1))
	{
		return 0;
	}
	iParam0->f_964 = bParam1;
	return 1;
}

bool Function_514() //Position: 0x17781 / 96129
{
	return DECOR_GET_INT(Function_468(), "trnsPassengerAE");
}

int Function_515(int iParam0, bool bParam1) //Position: 0x1779F / 96159
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_960 = bParam1;
	iParam0->f_964 = Function_516(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_610(iParam0 + 780, 4096);
	GIVE_OBJECT_TO_LAYOUT(iParam0->f_960, iParam0->f_776);
	return 1;
}

var Function_516(bool bParam0) //Position: 0x177DE / 96222
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_517() //Position: 0x177F9 / 96249
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_468(), "trnsPassenger"));
}

var Function_518() //Position: 0x17818 / 96280
{
	return GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(Function_468(), "trnsNecActors"));
}

var Function_519(bool bParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, bool bParam9) //Position: 0x17837 / 96311
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	vVar3 = { StackVal, StackVal, vParam6 };
	Function_147(bParam9, 0, &vVar0, &vVar3);
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vVar0, vVar3);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 50.0f, false, 1092616192);
	return bVar6;
}

int Function_520(int iParam0, int iParam1) //Position: 0x17882 / 96386
{
	if (!Function_352(iParam1))
	{
		return 0;
	}
	iParam0->f_956 = iParam1;
	return 1;
}

int Function_521() //Position: 0x1789B / 96411
{
	return DECOR_GET_INT(Function_468(), "trnsCompanionAE");
}

int Function_522(int iParam0, bool bParam1) //Position: 0x178B9 / 96441
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_952 = bParam1;
	iParam0->f_956 = Function_516(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_610(iParam0 + 780, 8192);
	GIVE_OBJECT_TO_LAYOUT(iParam0->f_952, iParam0->f_776);
	return 1;
}

bool Function_523() //Position: 0x178F8 / 96504
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_468(), "trnsCompanion"));
}

void Function_524(int iParam0, int iParam1) //Position: 0x17917 / 96535
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 780, 16);
	}
	else
	{
		Function_609(iParam0 + 780, 16);
	}
	return;
}

int Function_525() //Position: 0x1793A / 96570
{
	if (DECOR_CHECK_EXIST(Function_468(), "trnsNeedPass"))
	{
		return DECOR_GET_BOOL(Function_468(), "trnsNeedPass");
	}
	return 0;
}

void Function_526(int iParam0, int iParam1) //Position: 0x17972 / 96626
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 780, 8);
	}
	else
	{
		Function_609(iParam0 + 780, 8);
	}
	return;
}

int Function_527() //Position: 0x17995 / 96661
{
	if (DECOR_CHECK_EXIST(Function_468(), "trnsNeedComp"))
	{
		return DECOR_GET_BOOL(Function_468(), "trnsNeedComp");
	}
	return 0;
}

void Function_528(bool bParam0, int iParam1) //Position: 0x179CD / 96717
{
	bool bVar0;
	bool bVar1[3];
	vector3 vVar5;
	vector3 vVar8[3];
	vector3 vVar18[3];
	struct<4> Var28[3];
	var uVar41[3];
	int iVar45;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	bVar0 = Function_529(GET_OBJECT_FROM_ACTOR(bParam0));
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		GET_POSITION(bParam0, &vVar5);
		vVar8[03] = { 0.1f, 1.22f, 0.0f };
		vVar8[13] = { 0.05f, 1.22f, 0.3f };
		vVar8[23] = { -0.1f, 1.22f, 0.45f };
		vVar18[03] = { 0.0f, 0.0f, 0.0f };
		vVar18[13] = { 0.0f, 95.0f, 0.0f };
		vVar18[23] = { 0.0f, -135.0f, 0.0f };
		memcpy(&(Var28[04]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ntransTntA"), 4);
		memcpy(&(Var28[14]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ntransTntB"), 4);
		memcpy(&(Var28[24]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ntransTntC"), 4);
		uVar41[0] = "tranExplo0";
		uVar41[1] = "tranExplo1";
		uVar41[2] = "tranExplo2";
		iVar45 = 0;
		while (iVar45 < 2)
		{
			if (!IS_OBJECT_VALID(bVar1[iVar45]))
			{
				bVar1[iVar45] = CREATE_PROP_IN_LAYOUT(bVar0, &(Var28[iVar454]), "$/fragments/p_gen_crateTnt01x", vVar5, 0.0f, 0.0f, 0.0f, 1);
				SET_OBJECT_COLLIDE_WITH_OBJECT(bVar1[iVar45], bParam0, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(bVar1[iVar45], 0);
				(*iParam1)[iVar45] = bVar1[iVar45];
				if (IS_OBJECT_VALID(bVar1[iVar45]))
				{
					ATTACH_OBJECTS(bVar1[iVar45], bParam0, Function_130(), vVar8[iVar453], vVar18[iVar453], 4294967295);
					GIVE_OBJECT_TO_ACTOR(bVar1[iVar45], bParam0);
					DECOR_SET_OBJECT(bParam0, uVar41[iVar45], bVar1[iVar45]);
				}
			}
			iVar45++;
		}
	}
	else
	{
		LOG_ERROR("TRANSPORT_ATTACH_EXPLOSIVES got an invalid layout from the object.");
	}
	return;
}

var Function_529(bool bParam0) //Position: 0x17C00 / 97280
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

var Function_530(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x17C5A / 97370
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_533(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_532(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_531(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, iVar18, 0);
			iVar18++;
		}
	}
	return bVar0;
}

bool Function_531(int iParam0, int iParam1) //Position: 0x17E8E / 97934
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_532(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x17EC0 / 97984
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_533(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17ED8 / 98008
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

int Function_534(int iParam0, bool bParam1) //Position: 0x17EFF / 98047
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iParam0->f_860 = bParam1;
	iParam0->f_864 = Function_516(GET_OBJECT_FROM_ACTOR(bParam1));
	Function_610(iParam0 + 780, 16384);
	return 1;
}

int Function_535(int iParam0, int iParam1) //Position: 0x17F30 / 98096
{
	if (!iParam0->f_628 != 0)
	{
		return 0;
	}
	if (iParam1 > 5)
	{
		LOG_ERROR("Invalid mission type passed to TRANSPORT_SET_MISSION_TYPE");
		return 0;
	}
	iParam0->f_628 = iParam1;
	return 1;
}

int Function_536() //Position: 0x17F92 / 98194
{
	if (DECOR_CHECK_EXIST(Function_468(), "trnsMissType"))
	{
		return DECOR_GET_INT(Function_468(), "trnsMissType");
	}
	return 4294967295;
}

int Function_537(int iParam0, vector3 vParam1, vector3 vParam4) //Position: 0x17FCA / 98250
{
	if (Function_586(StackVal, StackVal, vParam1))
	{
		LOG_ERROR("Invalid StartPos");
		return 0;
	}
	Function_394(StackVal, StackVal, iParam0, vParam1);
	*(iParam0 + 888) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 900) = { StackVal, StackVal, vParam4 };
	return 1;
}

bool Function_538(bool bParam0) //Position: 0x18017 / 98327
{
	struct<15> Var0;
	struct<11> Var15;
	vector3 vVar26;
	var uVar29;
	int iVar32;
	vector3 vVar33;
	var uVar36;
	var uVar39;
	vector3 vVar42;
	
	Function_542(bParam0);
	if (Function_586(StackVal, StackVal, Function_542(bParam0)))
	{
		iVar32 = 0;
		Function_364(&Var0, 1, 5.0f, 64, 4294967295);
		Function_363(StackVal, StackVal, &Var15, 0, vVar26, 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
		Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1);
		vVar26 = { StackVal, StackVal, Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1) };
		while (Function_586(StackVal, StackVal, vVar26) && iVar32 > 10)
		{
			Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1);
			vVar26 = { StackVal, StackVal, Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1) };
			if (Function_586(StackVal, StackVal, vVar26))
			{
				iVar32++;
			}
			else
			{
				iVar32 = 100;
			}
		}
		if (Function_586(StackVal, StackVal, vVar26))
		{
			LOG_ERROR("Couldn't create spawn point for transport");
			return 0;
		}
		Function_542(bParam0);
		vVar26 = { StackVal, StackVal, Function_542(bParam0) };
		if (!FIND_GROUND_INTERSECTION(&vVar26, 100.0f, &vVar26, &uVar29))
		{
			PRINTVECTOR(vVar26);
		}
		Function_542(bParam0);
		if (Function_539(StackVal, StackVal, Function_542(bParam0), 0.0f, 60.0f, &vVar33, &uVar36, &uVar39, 0x41c80000, 0))
		{
			Function_542(bParam0);
			vVar42 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar33, Function_542(bParam0), StackVal) };
			*(bParam0 + 900) = { 0.0f, 0.0f, 0.0f };
			(bParam0 + 900)->f_4 = UNK_0x9C40E671(&vVar42);
		}
	}
	return 1;
}

bool Function_539(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, float fParam8, bool bParam9) //Position: 0x18141 / 98625
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	
	Function_66();
	vVar0 = { StackVal, StackVal, Function_66() };
	bVar26 = -1.0f;
	if (bParam9)
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 2096, fParam3, fParam4, 20.0f, 0);
	}
	else
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 16, fParam3, fParam4, 2.0f, 0);
	}
	if (!IS_CURVE_QUERY_VALID(bVar7))
	{
		UNK_0xDF93BD7C(bVar7);
	}
	else if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar7) < 0)
	{
		UNK_0xDF93BD7C(bVar7);
	}
	else
	{
		iVar29 = GET_NUM_POINTS_IN_CURVE_QUERY(bVar7);
		bVar27 = false;
		while (bVar27 < (iVar29 - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar7, bVar27, &Var8);
			Function_540(&Var8);
			vVar3 = { StackVal, StackVal, Function_540(&Var8) };
			if (bVar26 > 0.0f || bVar26 < VDIST(vParam0, vVar3))
			{
				Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var8 };
				bVar26 = VDIST(vParam0, vVar3);
				bVar28 = bVar27;
				vVar0 = { StackVal, StackVal, vVar3 };
			}
			bVar27++;
		}
		bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar7, bVar28);
		*uParam5 = { StackVal, StackVal, vVar0 };
		if (fParam8 >= 0.0f)
		{
			fParam8 = 25.0f;
		}
		if (IS_OBJECT_VALID(bVar6))
		{
			UNK_0x19D652F9(bVar6, fParam8, &Var14, &iVar20);
			Function_540(&iVar20);
			*uParam6 = { StackVal, StackVal, Function_540(&iVar20) };
			UNK_0x19D652F9(bVar6, -fParam8, &Var14, &iVar20);
			Function_540(&iVar20);
			*uParam7 = { StackVal, StackVal, Function_540(&iVar20) };
		}
		else
		{
			Function_66();
			*uParam7 = { StackVal, StackVal, Function_66() };
			Function_66();
			*uParam6 = { StackVal, StackVal, Function_66() };
		}
		UNK_0xDF93BD7C(bVar7);
		return 1;
	}
	return 0;
}

vector3 Function_540(int iParam0) //Position: 0x1827D / 98941
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

bool Function_541(vector3 vParam0) //Position: 0x1829C / 98972
{
	if (VDIST(vParam0, Global_34574) > 7.0f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_542(bool bParam0) //Position: 0x182B9 / 99001
{
	return StackVal, StackVal, *(bParam0 + 4);
}

int Function_543(var uParam0, vector3 vParam1, vector3 vParam4) //Position: 0x182C5 / 99013
{
	return Function_537(StackVal, StackVal, StackVal, StackVal, uParam0, vParam1, vParam4);
}

int Function_544(bool bParam0, bool bParam1, int iParam2) //Position: 0x182DA / 99034
{
	int iVar0;
	bool bVar1;
	
	if (!Function_604(bParam1))
	{
		LOG_ERROR("Invalid region criteria passed to TRANSPORT_SET_DESTINATION_REGION");
		return (StackVal || !IS_VOLUME_VALID(false));
		LOG_ERROR("Invalid region volume found for to TRANSPORT_SET_DESTINATION_REGION");
		return 0;
	}
	bParam0->f_916 = bParam1;
	if (Function_613(bParam0) == 3)
	{
		if (bParam1 == Global_30640[0])
		{
			*(bParam0 + 924) = { -2137.573f, 16.097f, 2608.122f };
			*(bParam0 + 984) = { -2138.072f, 16.387f, 2605.557f };
		}
		else if (bParam1 == Global_30717[0])
		{
			*(bParam0 + 924) = { 786.585f, 78.306f, 1318.052f };
			*(bParam0 + 984) = { 781.586f, 78.479f, 1318.092f };
		}
		else if (bParam1 == Global_30668[0])
		{
			*(bParam0 + 924) = { -829.292f, 92.14f, 2404.836f };
			*(bParam0 + 984) = { -830.639f, 92.316f, 2401.437f };
		}
		else if (bParam1 == Global_30668[1])
		{
			*(bParam0 + 924) = { 165.194f, 73.036f, 2203.197f };
			*(bParam0 + 984) = { 166.894f, 73.755f, 2195.46f };
		}
		else if (bParam1 == Global_30693[0])
		{
			*(bParam0 + 924) = { -2749.39f, 31.862f, 4300.488f };
			*(bParam0 + 984) = { -2747.507f, 31.86f, 4297.798f };
		}
		else if (bParam1 == Global_30685[0])
		{
			*(bParam0 + 924) = { -4260.107f, 19.033f, 4465.096f };
			*(bParam0 + 984) = { -4262.798f, 18.816f, 4462.007f };
		}
		else if (bParam1 == Global_30723[1])
		{
			*(bParam0 + 924) = { -424.384f, 151.02f, 1614.085f };
			*(bParam0 + 984) = { -429.38f, 151.344f, 1615.145f };
		}
	}
	if (Function_604(bParam0->f_916) && iParam2 != 1)
	{
		bVar1 = GET_VOLUME_FROM_OBJECT(Function_545(bParam0->f_916));
		if (IS_VOLUME_VALID(bVar1))
		{
		}
		else
		{
			LOG_ERROR("Parking volume does not exist");
		}
	}
	if (IS_VOLUME_VALID(bVar1) && iParam2 != 1)
	{
		iVar0 = Function_330(bParam0, bVar1);
	}
	else
	{
		iVar0 = Function_330(StackVal, bParam0);
	}
	return iVar0;
}

var Function_545(bool bParam0) //Position: 0x185A5 / 99749
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_604(bParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[bParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

var Function_546() //Position: 0x18634 / 99892
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = 4294967295;
	if (Function_613(&Local_23) != 1 || Function_613(&Local_23) != 2)
	{
		bVar1 = Function_547(0.0f);
	}
	else
	{
		bVar1 = Function_547(0x43c80000);
	}
	if (!Function_604(bVar1))
	{
		return 4294967295;
	}
	bVar0 = StackVal;
	if (!IS_VOLUME_VALID(bVar0))
	{
		return 4294967295;
	}
	return bVar1;
}

int Function_547(float fParam0) //Position: 0x18688 / 99976
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
			if (StackVal && (StackVal || Function_550(Global_29005) != Function_550(Global_29155[iVar2010]) != 4 != 3))
			{
				Var12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_549(iVar20) };
				if (Function_548(iVar20))
				{
					GET_VOLUME_CENTER(StackVal, &vVar2);
					if (VDIST(vVar5, vVar2) < fParam0 && VDIST(vVar5, vVar2) > bVar11)
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

bool Function_548(bool bParam0) //Position: 0x1877A / 100218
{
	if (!Function_604(bParam0))
	{
		return 0;
	}
	if ((bParam0 != Global_30640[4] || bParam0 != Global_30717[1]) || bParam0 != Global_30693[2])
	{
		return 0;
	}
	switch (Function_613(&Local_23))
	{
		case 0x00000000:
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000003:
			if ((((((bParam0 != Global_30640[0] || bParam0 != Global_30717[0]) || bParam0 != Global_30668[0]) || bParam0 != Global_30668[1]) || bParam0 != Global_30693[0]) || bParam0 != Global_30685[0]) || bParam0 != Global_30723[1])
			{
				return 1;
			}
			return 0;
			break;
		
		case 0x00000001:
			if (((((bParam0 != Global_30640[0] || bParam0 != Global_30717[0]) || bParam0 != Global_30668[0]) || bParam0 != Global_30707[1]) || bParam0 != Global_30693[0]) || bParam0 != Global_30685[0])
			{
				return 1;
			}
			return 0;
			break;
		
		case 0x00000002:
			if ((bParam0 != Global_30640[0] || bParam0 != Global_30717[0]) || bParam0 != Global_30685[0])
			{
				return 1;
			}
			return 0;
			break;
		
		default:
			LOG_ERROR("Unhandled transport mission state");
			break;
	}
	return 1;
}

struct<32> Function_549(bool bParam0) //Position: 0x188C9 / 100553
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_604(bParam0))
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

int Function_550(int iParam0) //Position: 0x18986 / 100742
{
	return Function_472(iParam0);
}

int Function_551(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x18991 / 100753
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_584(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_582(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_554(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_452("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_452("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_552(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_584(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_582(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_552(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x18D23 / 101667
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
		Function_452("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_553(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_553(bVar0);
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
			Function_553(bVar0);
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

void Function_553(bool bParam0) //Position: 0x18F80 / 102272
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

bool Function_554(int iParam0) //Position: 0x18FC6 / 102342
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
			Function_581(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_580(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_580(1));
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
						bVar0 = Function_579(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_578(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_576(StackVal, StackVal, StackVal, vVar9, Function_577());
				}
				else
				{
					bVar0 = Function_575(StackVal, StackVal, StackVal, vVar9, Function_577(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_581(iParam0 + 4);
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
					if (Function_604(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_580(1))
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
				Function_574(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_573(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_573(&vVar9, &vVar6) };
				if (!Function_586(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_361(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_571(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_570(iParam0);
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
					if (!Function_569(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_568(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_605(StackVal, 131072))
				{
					if (StackVal || Function_567(StackVal, Function_567(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_566(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_562(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_561((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_561((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_540(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_540(&Var15) };
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
				if (!Function_569(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_568(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_569(StackVal, Function_568(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_605(StackVal, 131072))
			{
				if (StackVal || Function_567(StackVal, Function_567(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_562(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_559((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_556(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_556(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_555(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_555(vector3 vParam0) //Position: 0x197F0 / 104432
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

bool Function_556(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x19825 / 104485
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
								return Function_557(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_557(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_557(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_557(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_557(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_557(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_557(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_557(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_557(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_557(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_557(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_557(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_557(&Global_6704, &Global_7790, bParam3);
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
								return Function_557(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_557(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_557(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_557(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_557(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_557(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_557(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_557(&Global_7027, &Global_8268, bParam3);
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
		return Function_557(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_557(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_557(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_557(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_557(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_557(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_557(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_557(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_557(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_557(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_557(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_557(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_557(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_557(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_557(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_557(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_557(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_557(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_557(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_557(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_557(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_557(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_557(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_557(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_557(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_557(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_557(var uParam0, var uParam1, bool bParam2) //Position: 0x19E3A / 106042
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_558(uParam0[iVar02], 2))
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

bool Function_558(var uParam0, int iParam1) //Position: 0x19E8C / 106124
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_559(int iParam0) //Position: 0x19EA8 / 106152
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
			if (Function_560(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_560(bool bParam0) //Position: 0x19F03 / 106243
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_392(bParam0);
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

int Function_561(int iParam0, int iParam1) //Position: 0x19F3B / 106299
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

bool Function_562(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x19F6B / 106347
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
	Function_564(4294967295);
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
			else if (Function_563(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_563(var uParam0, int iParam1) //Position: 0x1A03B / 106555
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_564(bool bParam0) //Position: 0x1A059 / 106585
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
						Function_565(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_368(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_565(iVar0);
						}
					}
					else if (Function_368(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_565(iVar0);
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
			Function_565(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_565(int iParam0) //Position: 0x1A1BA / 106938
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

bool Function_566(vector3 vParam0) //Position: 0x1A21B / 107035
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

int Function_567(vector3 vParam0) //Position: 0x1A2BC / 107196
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

bool Function_568(vector3 vParam0) //Position: 0x1A308 / 107272
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

bool Function_569(vector3 vParam0) //Position: 0x1A361 / 107361
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

int Function_570(int iParam0) //Position: 0x1A3DE / 107486
{
	float fVar0;
	bool bVar1;
	
	Function_361(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_362(0);
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
		Function_358(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_357(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

int Function_571(int iParam0, vector3 vParam1) //Position: 0x1A579 / 107897
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_572();
	Function_362(0);
	Function_359(0);
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
		Function_358(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_357(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_572() //Position: 0x1A71B / 108315
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_573(var uParam0, int iParam1) //Position: 0x1A72A / 108330
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
		Function_540(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_540(&iVar25), StackVal) };
		Function_540(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_540(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_361(&fVar7, &fVar8);
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
			Function_540(&iVar31);
			vVar11 = { StackVal, StackVal, Function_540(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_540(&iVar25);
			vVar11 = { StackVal, StackVal, Function_540(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

int Function_574(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x1A837 / 108599
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
		if (!Function_586(StackVal, StackVal, *iParam2))
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
			if (!Function_586(StackVal, StackVal, *iParam2))
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

var Function_575(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x1A969 / 108905
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
						if (Function_562(&vVar5, &fVar4, 0, 0))
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

var Function_576(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1AA11 / 109073
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
				if (Function_562(&vVar5, &uVar4, 0, 0))
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

var Function_577() //Position: 0x1AA9A / 109210
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_361(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_578(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x1AACB / 109259
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

var Function_579(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1AB60 / 109408
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

float Function_580(bool bParam0) //Position: 0x1ABDD / 109533
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_361(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

int Function_581(int iParam0) //Position: 0x1AC18 / 109592
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_130());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_130());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_582(bool bParam0, int iParam1) //Position: 0x1AC49 / 109641
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
	Function_564(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_583(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_583(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1ADAA / 109994
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_584(bool bParam0, vector3 vParam1) //Position: 0x1AE45 / 110149
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_585(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_585(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1AE75 / 110197
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_586(vector3 vParam0) //Position: 0x1AE98 / 110232
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_587() //Position: 0x1AEB0 / 110256
{
	vector3 vVar0;
	
	vVar0.x = DECOR_GET_FLOAT(Function_468(), "trnsStartPosX");
	vVar0.f_4 = DECOR_GET_FLOAT(Function_468(), "trnsStartPosY");
	vVar0.f_8 = DECOR_GET_FLOAT(Function_468(), "trnsStartPosZ");
	return StackVal, StackVal, vVar0;
}

vector3 Function_588(bool bParam0) //Position: 0x1AF06 / 110342
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

var Function_589() //Position: 0x1AF2D / 110381
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_468(), "trnsVehicle"));
}

bool Function_590(int iParam0, int iParam1) //Position: 0x1AF4A / 110410
{
	if (!Function_591(iParam0 + 640))
	{
		return 0;
	}
	if (!Function_474(&(Global_29008[iParam1]), 8))
	{
		return 0;
	}
	PRINTSTRING("loaded streams");
	return 1;
}

bool Function_591(int iParam0) //Position: 0x1AF85 / 110469
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_595();
	iVar1 = 0;
	if (!Function_124(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_594(iParam0[iVar03], 8);
		}
		else if (Function_593())
		{
			iVar1 = 1;
			Function_594(iParam0[iVar03], 8);
		}
		Function_594(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_124(iParam0[iVar03], 4))
		{
			if (!Function_124(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_124(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_124(iParam0[03], 8) || iVar1));
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
				Function_594(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_124(iParam0[iVar03], 4))
		{
			if (!Function_124(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_594(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_594(iParam0[iVar03], 2);
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
							Function_594(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_594(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_594(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_594(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_594(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_594(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_594(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_594(iParam0[iVar03], 2);
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
	Function_592();
	return 1;
}

void Function_592() //Position: 0x1B300 / 111360
{
	if (!Function_168(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_593() //Position: 0x1B340 / 111424
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

void Function_594(var uParam0, int iParam1) //Position: 0x1B36B / 111467
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_595() //Position: 0x1B37C / 111484
{
	if (!Function_168(128))
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

bool Function_596(int iParam0) //Position: 0x1B3BE / 111550
{
	if (!Function_352(iParam0->f_864) || iParam0->f_864 != 0)
	{
		iParam0->f_864 = Function_600(iParam0->f_628);
	}
	if (!Function_352(iParam0->f_864))
	{
		iParam0->f_864 = 1199;
	}
	switch (Global_29004)
	{
		case 0x00000000:
			iParam0->f_980 = 229;
			break;
		
		case 0x00000001:
			iParam0->f_980 = 264;
			break;
		
		case 0x00000002:
			iParam0->f_980 = 6;
			break;
	}
	Function_599(iParam0 + 640, iParam0->f_980, 2, 0);
	Function_599(iParam0 + 640, iParam0->f_864, 2, 0);
	Function_597(iParam0 + 640, "shakehands_link", 1, 0);
	Function_597(iParam0 + 640, "dead_ground_male", 5, 0);
	Function_597(iParam0 + 640, "lay_wounded_psg", 5, 0);
	Function_597(iParam0 + 640, "custom/lay_wounded_psg", 8, 0);
	Function_597(iParam0 + 640, "procmissions", 10, 0);
	Function_597(iParam0 + 640, "stats", 10, 0);
	return 1;
}

var Function_597(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1B4FE / 111870
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_598(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_594(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_598(var uParam0, int iParam1, int iParam2) //Position: 0x1B536 / 111926
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_124(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_594(uParam0[iVar03], 4);
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

var Function_599(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B5FA / 112122
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_124(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_594(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_594(uParam0[iVar03], 8);
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

var Function_600(int iParam0) //Position: 0x1B6CA / 112330
{
	int iVar0;
	int iVar1[10];
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	iVar14 = 0;
	switch (iParam0)
	{
		case 0x00000003:
			iVar1[iVar14] = 1196;
			iVar14++;
			break;
		
		case 0x00000001:
			iVar1[iVar14] = 1197;
			iVar14++;
			break;
		
		case 0x00000002:
			iVar1[iVar14] = 1199;
			iVar14++;
			break;
		
		case 0x00000004:
			iVar1[iVar14] = 1177;
			iVar14++;
			iVar1[iVar14] = 1199;
			iVar14++;
			iVar1[iVar14] = 1196;
			iVar14++;
			break;
		
		default:
			LOG_ERROR("Invalid mission type found in TRANSPORT_PickVehicleAE");
			break;
	}
	iVar13 = (iVar14 - 1);
	if (iVar13 <= 0)
	{
		return iVar0;
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	iVar12 = (ROUND(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar14);
	iVar0 = iVar1[iVar12];
	return iVar0;
}

void Function_601() //Position: 0x1B7D2 / 112594
{
	switch (Global_29004)
	{
		case 0x00000000:
			if (Global_29005 == Global_30628[2])
			{
				Function_602(&Local_23, 479);
				Function_602(&Local_23, 480);
				Function_602(&Local_23, 481);
				Function_602(&Local_23, 483);
			}
			else if (Global_29005 != Global_30628[0] || Global_29005 != Global_30628[3])
			{
				Function_602(&Local_23, 486);
				Function_602(&Local_23, 490);
				Function_602(&Local_23, 491);
				Function_602(&Local_23, 492);
			}
			else if (Global_29005 == Global_30628[1])
			{
				Function_602(&Local_23, 505);
				Function_602(&Local_23, 509);
				Function_602(&Local_23, 510);
				Function_602(&Local_23, 513);
			}
			break;
		
		case 0x00000001:
			if (Function_367())
			{
				Function_602(&Local_23, 496);
				Function_602(&Local_23, 500);
				Function_602(&Local_23, 499);
				Function_602(&Local_23, 502);
			}
			else
			{
				Function_602(&Local_23, 406);
				Function_602(&Local_23, 407);
				Function_602(&Local_23, 410);
				Function_602(&Local_23, 411);
			}
			break;
		
		case 0x00000002:
			if (Function_367())
			{
				Function_602(&Local_23, 467);
				Function_602(&Local_23, 468);
				Function_602(&Local_23, 471);
				Function_602(&Local_23, 474);
			}
			else
			{
				Function_602(&Local_23, 416);
				Function_602(&Local_23, 419);
				Function_602(&Local_23, 420);
				Function_602(&Local_23, 423);
			}
			break;
	}
	return;
}

void Function_602(int iParam0, int iParam1) //Position: 0x1B923 / 112931
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_1228)
	{
		if ((*iParam0 + 1228)[iVar0] != 0 || !Function_352((*iParam0 + 1228)[iVar0]))
		{
			(*iParam0 + 1228)[iVar0] = iParam1;
			iVar0 = iParam0->f_1228;
		}
		else
		{
			iVar0++;
		}
	}
	return;
}

void Function_603(int iParam0, int iParam1) //Position: 0x1B970 / 113008
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 780, 2048);
	}
	else
	{
		Function_609(iParam0 + 780, 2048);
	}
	return;
}

bool Function_604(bool bParam0) //Position: 0x1B995 / 113045
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_605(bool bParam0, int iParam1) //Position: 0x1B9AB / 113067
{
	return (bParam0 && iParam1) == 0;
}

void Function_606(int iParam0) //Position: 0x1B9B8 / 113080
{
	int iVar0;
	int iVar1;
	
	iParam0->f_1300 = 1;
	if (Global_29004 == 0)
	{
		iVar1 = Function_607(4);
		if (iVar1 == 0)
		{
			iVar0 = "FTR_SONG_03";
		}
		else if (iVar1 == 1)
		{
			iVar0 = "FTR_SONG_04";
		}
		else if (iVar1 == 2)
		{
			iVar0 = "FTR_SONG_07";
		}
		else if (iVar1 == 3)
		{
			iVar0 = "FTR_SONG_09";
		}
	}
	else if (Global_29004 == 2)
	{
		if (Function_367())
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
		iVar1 = Function_607(3);
		if (iVar1 == 0)
		{
			iVar0 = "MEX_SONG_04";
		}
		else if (iVar1 == 1)
		{
			iVar0 = "MEX_SONG_05";
		}
		else if (iVar1 == 2)
		{
			iVar0 = "MEX_SONG_07";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(iVar0, "DRAMATIC_LOW", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

int Function_607(bool bParam0) //Position: 0x1BADC / 113372
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

void Function_608() //Position: 0x1BAF5 / 113397
{
	int iVar0;
	
	iVar0 = Function_58(366);
	switch (Global_29004)
	{
		case 0x00000000:
			if (iVar0 <= 1)
			{
				Local_23.f_636 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_23.f_636 = 1;
			}
			else
			{
				Local_23.f_636 = 2;
			}
			break;
		
		case 0x00000001:
			if (iVar0 <= 1)
			{
				Local_23.f_636 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_23.f_636 = 1;
			}
			else
			{
				Local_23.f_636 = 2;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			if (iVar0 <= 1)
			{
				Local_23.f_636 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_23.f_636 = 1;
			}
			else
			{
				Local_23.f_636 = 2;
			}
			break;
		
		default:
			Local_23.f_636 = 1;
			break;
	}
	return;
}

void Function_609(bool bParam0, int iParam1) //Position: 0x1BBA1 / 113569
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

void Function_610(bool bParam0, int iParam1) //Position: 0x1BBB4 / 113588
{
	*bParam0 = (*bParam0 || iParam1);
	return;
}

void Function_611(int iParam0, int iParam1) //Position: 0x1BBC3 / 113603
{
	if (iParam1 == 1)
	{
		Function_610(iParam0 + 780, 1);
	}
	else
	{
		Function_609(iParam0 + 780, 1);
	}
	return;
}

var Function_612(bool bParam0, int iParam1) //Position: 0x1BBE4 / 113636
{
	int iVar0;
	int iVar1;
	
	iVar1 = Function_536();
	if (iVar1 == 4294967295)
	{
		iVar0 = Function_535(bParam0, iParam1);
	}
	else
	{
		iVar0 = Function_535(bParam0, iVar1);
	}
	return iVar0;
}

int Function_613(bool bParam0) //Position: 0x1BC0C / 113676
{
	int iVar0;
	
	if (Function_536() != 4294967295)
	{
		iVar0 = Function_536();
	}
	else
	{
		iVar0 = bParam0->f_628;
	}
	return iVar0;
}

int Function_614(int iParam0) //Position: 0x1BC2A / 113706
{
	switch (iParam0)
	{
		case 0x00000001:
			Local_23.f_912 = 100.0f;
			Function_469(&uLocal_353);
			break;
		
		case 0x00000002:
			Function_617(&Local_23, 1, 0);
			break;
		
		case 0x00000003:
			if (iLocal_349 >= 1)
			{
				Function_322(&Local_23, 1);
				if (IS_ACTOR_VALID(Local_23.f_860))
				{
					if (GET_VEHICLE(Local_23.f_952) == Local_23.f_860)
					{
						Function_321(&Local_23, "pm_trn_farw", 1);
					}
					else
					{
						Function_321(&Local_23, "pm_trn_fart", 1);
					}
				}
				Function_454(&Local_23);
			}
			Function_616();
			break;
		
		case 0x00000004:
			if (iLocal_349 >= 1)
			{
				if (IS_ACTOR_VALID(Local_23.f_860))
				{
					Function_322(&Local_23, 1);
					Function_321(&Local_23, "pm_trn_farw", 1);
					Function_454(&Local_23);
				}
			}
			Function_616();
			break;
		
		case 0x00000006:
			if (iLocal_349 >= 1)
			{
				if (IS_ACTOR_VALID(Local_23.f_952))
				{
					Function_322(&Local_23, 1);
					TASK_CLEAR(Local_23.f_952);
					MEMORY_CONSIDER_AS(Local_23.f_952, Global_34573, 4);
					if (Function_613(&Local_23) == 1)
					{
						TASK_KILL_CHAR(Local_23.f_952, Global_34573);
						if (GET_LAST_ATTACKER(Local_23.f_952) == Global_34573)
						{
							Function_321(&Local_23, "pm_trn_lhit", 1);
						}
						else
						{
							Function_321(&Local_23, "pm_trn_threat", 1);
						}
					}
					else
					{
						TASK_VEHICLE_LEAVE(Local_23.f_952);
						if (GET_LAST_ATTACKER(Local_23.f_952) == Global_34573)
						{
							Function_321(&Local_23, "pm_trn_thit", 1);
						}
						else
						{
							Function_321(&Local_23, "pm_trn_scare", 1);
						}
					}
					Function_454(&Local_23);
				}
			}
			Function_616();
			break;
		
		case 0x00000007:
			if (iLocal_349 >= 1)
			{
				Function_322(&Local_23, 1);
				if (Function_613(&Local_23) == 1)
				{
					Function_321(&Local_23, "pm_trn_ldie", 1);
				}
				else
				{
					Function_321(&Local_23, "pm_trn_tdie", 1);
				}
				Function_454(&Local_23);
			}
			Function_616();
			break;
		
		case 0x00000009:
			KILL_ACTOR(Local_23.f_960);
			if (iLocal_349 >= 1)
			{
				Function_322(&Local_23, 1);
				Function_321(&Local_23, "pm_trn_sdie", 1);
			}
			Function_616();
			break;
		
		case 0x0000000A:
			KILL_ACTOR(Local_23.f_960);
			if (iLocal_349 >= 1)
			{
				Function_322(&Local_23, 1);
				Function_321(&Local_23, "pm_trn_pdie", 1);
			}
			Function_616();
			break;
		
		case 0x00000005:
			if (iLocal_349 >= 1)
			{
				Function_322(&Local_23, 1);
				switch (Function_615(&Local_23))
				{
					case 0x00000000:
						Function_321(&Local_23, "pm_trn_neca", 1);
						break;
					
					default:
						LOG_ERROR("This necessary transport actor has no name");
						break;
					}
			}
			Function_616();
			break;
		
		case 0x0000000B:
			if (iLocal_349 >= 1)
			{
				Function_322(&Local_23, 1);
				switch (Function_615(&Local_23))
				{
					case 0x00000000:
						Function_455("pm_trn_necd", 10.0f, 1, 0, 0, 0, 0, 0);
						break;
					
					case 0x00000001:
						Function_455("pm_trn_nech", 10.0f, 1, 0, 0, 0, 0, 0);
						break;
					
					default:
						LOG_ERROR("This necessary transport actor has no name");
						break;
					}
			}
			Function_616();
			break;
		
		case 0x00000008:
			if (iLocal_349 >= 1)
			{
				Function_322(&Local_23, 1);
				Function_321(&Local_23, "pm_trn_vdie", 1);
			}
			Function_616();
			break;
		
		case 0x0000000C:
			Function_616();
			break;
		
		case 0x00000012:
		case 0x0000000E:
			Function_616();
			break;
		
		case 0x00000014:
		case 0x00000013:
		case 0x0000000F:
			Function_317(&Local_23);
			Function_616();
			break;
		
		case 0x00000010:
		case 0x0000000D:
		case 0x00000011:
			Function_616();
			break;
		
		default:
			LOG_ERROR("Unhandled transport phase for AI_Notify");
			break;
	}
	iLocal_349 = iParam0;
	bLocal_352 = false;
	return 1;
}

int Function_615(bool bParam0) //Position: 0x1C071 / 114801
{
	return bParam0->f_972;
}

void Function_616() //Position: 0x1C07C / 114812
{
	Function_397(&Local_23);
	Function_461(&Local_23, 0);
	Function_448(&Local_23, 0, 0);
	iLocal_21 = 5;
	return;
}

void Function_617(int iParam0, int iParam1, int iParam2) //Position: 0x1C097 / 114839
{
	int iVar0;
	
	if (iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < (iParam0->f_220 - 1))
		{
			strcpy(iParam0 + 220[iVar04], "", 16);
			iVar0++;
		}
		iParam0->f_272 = 0;
	}
	if (iParam2 == 1)
	{
		iVar0 = 0;
		while (iVar0 < (iParam0->f_276 - 1))
		{
			strcpy(iParam0 + 276[iVar04], "", 16);
			iVar0++;
		}
		iParam0->f_328 = 0;
	}
	return;
}

int Function_618(int iParam0, int iParam1) //Position: 0x1C0FF / 114943
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

