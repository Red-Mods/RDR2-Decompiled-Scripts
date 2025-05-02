//Decompiled with MagicRDR v1.0
//Function Count : 619
//Statics Count : 637
//Natives Count : 637
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
	struct<2073> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	struct<2> Var1;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar9;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_563 = 0;
	iLocal_564 = 0;
	bLocal_566 = false;
	iLocal_571 = 0;
	iLocal_572 = 0;
	iLocal_573 = 0;
	iLocal_574 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	bVar7 = false;
	if (ScriptParam_0.f_72 == 0)
	{
		ScriptParam_0.f_72 = 1;
	}
	bVar7 = (Function_618(1, 0) || ScriptParam_0.f_44 != 1);
	if (bVar7)
	{
		Global_6615 = GET_THIS_SCRIPT_ID();
		Global_6644 = 1;
		iLocal_27 = 0;
		iLocal_549 = 0;
	}
	else
	{
		Function_614(16);
	}
	iLocal_550 = 0;
	uLocal_551 = GET_TIME_OF_DAY();
	ADD_TIME(&uLocal_551, 0, 0, 40, 0);
	if (Function_613(&Local_29) >= 0 || Function_613(&Local_29) <= 5)
	{
		uVar3 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)) + 1;
		Function_612(&Local_29, uVar3);
	}
	else
	{
		Function_612(&Local_29, Function_613(&Local_29));
	}
	Function_611(&Local_29, 1);
	Function_610(&bLocal_566, 1);
	Function_609(&bLocal_566, 2);
	Function_609(&bLocal_566, 4);
	Function_609(&bLocal_566, 8);
	Function_608();
	Function_606(&Local_29);
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(&Global_54076) || !IS_ACTOR_ALIVE(&Global_54076))
		{
			Function_614(16);
		}
		else if (Global_6623 != 1 && 0 != ScriptParam_0.f_44)
		{
			Function_614(16);
		}
		else if (Function_605(Local_29.f_1304, 8))
		{
			if (IS_ACTOR_VALID(&Local_29 + 1544))
			{
				GET_POSITION(&Local_29 + 1544, &Var1);
				if (iLocal_27 < 0 && iLocal_27 > 3)
				{
					if ((IS_EARLIER_THAN(&uLocal_551, GET_TIME_OF_DAY()) && VDIST(Global_54078, Var1) < 75.0f) && !WOULD_ACTOR_BE_VISIBLE(false, &Var1, 3212836864))
					{
						Function_614(16);
					}
				}
			}
			else if (iLocal_27 == 2)
			{
				Function_614(16);
			}
		}
		bLocal_553 = 600;
		if (!Function_604(ScriptParam_0.f_52) || ScriptParam_0.f_52 != 0)
		{
			ScriptParam_0.f_52 = Global_43789;
		}
		if (iLocal_549 != 16 && !iLocal_27 != 5)
		{
			Function_614(16);
		}
		switch (iLocal_27)
		{
			case 0x00000000:
				Function_603(&Local_29, 1);
				Function_601();
				if (Function_596(&Local_29))
				{
					iLocal_27 = 1;
				}
				else
				{
					bLocal_553 = 600;
				}
				break;
			
			case 0x00000001:
				if (Function_590(&Local_29, ScriptParam_0.f_52))
				{
					if (IS_ACTOR_VALID(Function_589()))
					{
						Function_588(Function_589());
						*(&ScriptParam_0 + 16) = Function_588(Function_589());
						iVar4 = 1;
					}
					else
					{
						Function_587();
						if (!Function_586(StackVal, Function_587()))
						{
							Function_587();
							*(&ScriptParam_0 + 16) = Function_587();
							iVar4 = 1;
						}
						else if (!Function_586(StackVal, *(&ScriptParam_0 + 16)))
						{
							iVar4 = 1;
						}
					}
					if (iVar4 == 0)
					{
						iVar4 = Function_551(&ScriptParam_0, &bLocal_553, &iVar6, &iVar5, 1);
					}
					if (iVar4 == 1)
					{
						bVar0 = Function_546();
						if (Function_604(bVar0))
						{
							if (Function_613(&Local_29) == 3)
							{
								Function_544(&Local_29, bVar0, 0);
							}
							else
							{
								Function_544(&Local_29, bVar0, 1);
							}
							Function_543(StackVal, StackVal, &Local_29, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28));
							Function_542(&Local_29);
							if (!Function_541(StackVal, Function_542(&Local_29)) && ScriptParam_0.f_44 != 0)
							{
								Function_614(16);
								bLocal_553 = 600;
								break;
							}
							if (!Function_476(&Local_29))
							{
								Function_614(13);
								iVar5 = 1;
							}
							else
							{
								if (!Function_475(bVar0))
								{
									Function_471(bVar0);
								}
								uLocal_551 = GET_TIME_OF_DAY();
								ADD_TIME(&uLocal_551, 0, 0, 40, 0);
								Function_469(&iLocal_558);
								Function_614(1);
								iLocal_27 = 2;
							}
						}
						else
						{
							LOG_ERROR("Ending Transport: Could not set destination region.");
							Function_614(16);
						}
						bLocal_553 = false;
					}
					if (iVar5 == 1)
					{
						if (ScriptParam_0.f_44 == 1)
						{
							if (IS_OBJECT_VALID(Function_468()))
							{
							}
						}
						Function_614(17);
						bLocal_553 = false;
						break;
					}
				}
				break;
			
			case 0x00000002:
				if (iLocal_549 <= 2)
				{
					if (iLocal_563 == 0)
					{
						if (!GET_VEHICLE(&Global_54076) != &Local_29 + 1408)
						{
							Function_461(&Local_29, 1);
							Function_457(&Local_29);
							Function_448(&Local_29, 0, 1);
						}
						iLocal_563 = 1;
					}
					iVar9 = Function_337(&Local_29, 1);
					if (Function_332())
					{
						if (iVar9 <= 12)
						{
							iVar9 = 12;
						}
					}
					switch (iVar9)
					{
						case 0x00000000:
							break;
						
						case 0x00000001:
							iLocal_562 = 1;
							if (!iLocal_549 != 16)
							{
								Function_323(&Local_29);
								Local_29.f_1540 = VDIST(Global_54078, *(&Local_29 + 1504));
								Function_614(2);
								iLocal_27 = 3;
							}
							break;
						
						case 0x00000002:
							if (!Function_605(Local_29.f_1304, 8388608) && iLocal_564 != 0)
							{
								Function_322(&Local_29, 1);
								Function_321(&Local_29, "pm_trn_atk", 1);
								Function_610(&Local_29 + 1304, 8388608);
							}
							break;
						
						case 0x00000013:
							iLocal_28 = 3;
							Function_614(12);
							break;
						
						case 0x00000008:
							LOG_ERROR("Transport proc destination volume should not be reached.");
							break;
						
						case 0x0000000A:
							LOG_ERROR("Transport: Unhandled cancellation");
							break;
						
						case 0x0000000C:
							iLocal_28 = 3;
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
				bLocal_553 = false;
				break;
			
			case 0x00000003:
				iVar9 = Function_337(&Local_29, 1);
				if (Function_332())
				{
					if (iVar9 <= 12)
					{
						iVar9 = 12;
					}
				}
				switch (iVar9)
				{
					case 0x00000000:
						break;
					
					case 0x00000002:
						if (!Function_605(Local_29.f_1304, 8388608) && iLocal_564 != 0)
						{
							Function_322(&Local_29, 1);
							Function_321(&Local_29, "pm_trn_atk", 1);
							Function_610(&Local_29 + 1304, 8388608);
						}
						break;
					
					case 0x00000003:
						if (IS_ACTOR_VALID(&Local_29 + 1408) && IS_ACTOR_VALID(&Local_29 + 1544))
						{
							SAY_SINGLE_LINE_CONTEXT(&Local_29 + 1544, 308, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
						break;
					
					case 0x00000011:
						Function_614(9);
						iLocal_28 = 3;
						break;
					
					case 0x00000013:
						Function_614(12);
						iLocal_28 = 3;
						break;
					
					case 0x00000004:
					case 0x00000005:
					case 0x00000006:
						break;
					
					case 0x00000008:
						Function_614(14);
						iLocal_28 = 2;
						iLocal_564 = 1;
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
						iLocal_28 = 3;
						break;
					
					case 0x0000000D:
						Function_322(&Local_29, 1);
						Function_321(&Local_29, "pm_esc_wdirfail", 1);
						Function_614(17);
						iLocal_28 = 3;
						break;
					
					case 0x0000000E:
					case 0x00000016:
						if (Function_613(&Local_29) == 1)
						{
							Function_614(10);
						}
						else if (Function_613(&Local_29) == 2)
						{
							Function_614(9);
						}
						else
						{
							LOG_ERROR("Unknown mission type for proc transport.");
						}
						iLocal_28 = 3;
						break;
					
					case 0x0000000F:
						Function_614(3);
						iLocal_28 = 3;
						break;
					
					case 0x00000010:
						Function_614(4);
						iLocal_28 = 3;
						break;
					
					case 0x00000012:
						Function_614(8);
						iLocal_28 = 3;
						break;
					
					case 0x00000014:
						Function_614(5);
						iLocal_28 = 3;
						break;
					
					case 0x00000015:
						Function_614(11);
						iLocal_28 = 3;
						break;
					
					case 0x00000017:
						Function_614(7);
						iLocal_28 = 3;
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
				if (iLocal_571 == 0)
				{
					Function_448(&Local_29, 0, 0);
					if ((!IS_ACTOR_ALIVE(&Global_54076) || iLocal_28 == 2) || Function_605(Local_29.f_1304, 4))
					{
						iLocal_572 = 0;
					}
					else
					{
						iLocal_572 = 1;
					}
					if (iLocal_572 == 0)
					{
						Function_264();
						iLocal_574 = 1;
						Function_469(&iLocal_567);
					}
					iLocal_571 = 1;
				}
				else if (iLocal_574 == 0)
				{
					if (iLocal_573 == 0)
					{
						if (Function_263())
						{
							if (iLocal_572 == 1)
							{
								Function_164(&Local_29);
								iLocal_573 = 1;
							}
							else
							{
								LOG_ERROR("Transport: Unexpected state in EVENT_ENDING");
								Function_264();
								iLocal_574 = 1;
								Function_469(&iLocal_567);
							}
						}
					}
					else if (Function_146(&Local_29) == 5)
					{
						Function_139(&Local_29);
						Function_264();
						iLocal_574 = 1;
						Function_469(&iLocal_567);
					}
				}
				else if (Function_135(&iLocal_567, 3.0f))
				{
					if (iLocal_562 == 1)
					{
						Function_134(0);
						Function_132(0);
						Function_131(12);
					}
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
		}
		bLocal_553 = false;
		WAIT(bLocal_553);
	}
	if (Local_29.f_2072)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (iLocal_562 == 1)
	{
		Function_11(&Local_29, 0);
	}
	else
	{
		Function_11(&Local_29, 1);
	}
	Function_1();
	DESTROY_ITERATOR(&ScriptParam_0 + 8);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x9EE / 2542
{
	Function_461(&Local_29, 0);
	if (Function_10())
	{
		Function_2();
	}
	return;
}

void Function_2() //Position: 0xA03 / 2563
{
	Function_4();
	Function_3(10, 3);
	return;
}

void Function_3(int iParam0, int iParam1) //Position: 0xA12 / 2578
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

void Function_4() //Position: 0xB5F / 2911
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
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_5(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_5());
	UI_POP("nDebugMenu");
	return;
}

var Function_5() //Position: 0xBAA / 2986
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_6() //Position: 0xBBF / 3007
{
	Function_7(25, 2);
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0xBCB / 3019
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

void Function_8(int iParam0, int iParam1) //Position: 0xDF7 / 3575
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

bool Function_9() //Position: 0xF44 / 3908
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
				if (!Function_605(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_10() //Position: 0xFAC / 4012
{
	return Global_54085;
}

void Function_11(struct<1305> Param0) //Position: 0xFB5 / 4021
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	Function_461(&Param0, 0);
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_130(), GET_AMBIENT_LAYOUT(), 4294967295, 0);
	iVar2 = 0;
	while (iVar2 < (GET_OBJECTSET_SIZE(&uVar1) - 1))
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar1);
		DECOR_REMOVE(&uVar0, "translib_state");
		iVar2++;
	}
	DESTROY_OBJECTSET(&uVar1);
	Function_129(&Param0);
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		TASK_VEHICLE_LEAVE(&Param0 + 1544);
		TASK_PRIORITY_SET(&Param0 + 1544, true);
		Function_128(&Param0 + 1544, 7);
		if (&iParam1 == 1)
		{
			DESTROY_ACTOR(&Param0 + 1544);
		}
		else
		{
			Function_127(&Param0 + 1544, 4, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1560))
	{
		Function_128(&Param0 + 1560, 7);
		if (Param0.f_1096 == 2)
		{
			Function_127(&Param0 + 1560, 4, 0, 2);
		}
		else
		{
			TASK_CLEAR(&Param0 + 1560);
			TASK_VEHICLE_LEAVE(&Param0 + 1560);
		}
		if (&iParam1 == 1)
		{
			DESTROY_ACTOR(&Param0 + 1560);
		}
		else
		{
			Function_127(&Param0 + 1560, 2, 0, 2);
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1592))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Param0 + 1592);
		Function_126(StackVal, &Param0 + 1592, Vector(0.0f, 0.0f, 0.0f), 0, 0, 2, 1);
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		START_VEHICLE(&Param0 + 1408);
		SET_VEHICLE_ALLOWED_TO_DRIVE(&Param0 + 1408, 1);
		Function_128(&Param0 + 1408, 7);
		if (&iParam1 == 1)
		{
			DESTROY_ACTOR(&Param0 + 1408);
		}
		else
		{
			RELEASE_ACTOR(&Param0 + 1408);
		}
	}
	switch (Param0.f_1096)
	{
		case 0x00000003:
			Function_125(&Param0);
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ALIVE(&Param0 + 1560))
			{
				SET_ACTOR_FACTION(&Param0 + 1560, 19);
			}
			break;
	}
	if (Function_605(Param0.f_1304, 512))
	{
		HUD_TIMER_DISPLAY(0);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 1576))
	{
		DESTROY_OBJECTSET(&Param0 + 1576);
	}
	uVar3 = Function_468();
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar4 = GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(&uVar3, "trnsNecActors"));
		if (IS_OBJECTSET_VALID(&uVar4))
		{
			DESTROY_OBJECTSET(&uVar4);
		}
		DESTROY_OBJECT(&uVar3);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 1296))
	{
		if (!Function_605(Param0.f_1304, 1024))
		{
			RELEASE_LAYOUT_REF(&Param0 + 1296);
		}
	}
	Function_121(&Param0 + 1108);
	Function_120(56);
	Function_118(4);
	Function_117();
	Function_92(&Param0 + 1632);
	Function_12(&Param0);
	return;
}

void Function_12(struct<1093> Param0) //Position: 0x1234 / 4660
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
		if (Function_605(Param0.f_1048, 32768))
		{
			Function_91(256);
		}
	}
	Function_90();
	Function_88(1);
	if (Function_605(Param0.f_1048, 32))
	{
		if (Function_86(Param0.f_1092))
		{
			switch (Param0.f_1088)
			{
				case 0x00000002:
					Function_31(Param0.f_1092, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_28(Param0.f_1092);
					break;
				
				default:
					Function_19(Param0.f_1092);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_13(&Param0, 0);
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
	if (Function_605(Param0.f_1048, 64))
	{
		Global_21575 = 0;
	}
	if (Function_605(Param0.f_1048, 16))
	{
		Global_6625 = 0;
	}
	return;
}

void Function_13(bool bParam0, bool bParam1) //Position: 0x13B4 / 5044
{
	if (SQUAD_IS_VALID(&bParam0 + 1024))
	{
		Function_18(&bParam0 + 1024);
		Function_16(&bParam0 + 1024, 1, 0);
		if (&bParam1 == 1)
		{
			Function_15(&bParam0 + 1024);
			Function_18(&bParam0 + 1024);
			Function_14(&bParam0 + 1024, &Global_54076, -1.0f, -1.0f, 0, 1);
		}
		Function_16(&bParam0 + 1024, 0, 0);
		SQUAD_MAKE_EMPTY(&bParam0 + 1024);
		DESTROY_OBJECT(&bParam0 + 1024);
	}
	return;
}

void Function_14(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x142B / 5163
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

void Function_15(int iParam0) //Position: 0x14A4 / 5284
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

void Function_16(var uParam0, bool bParam1, bool bParam2) //Position: 0x14DC / 5340
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
				if (!Function_17(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_17(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1565 / 5477
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_18(int iParam0) //Position: 0x1585 / 5509
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

void Function_19(int iParam0) //Position: 0x15BA / 5562
{
	int iVar0;
	
	if (!Function_86(iParam0))
	{
		Function_26();
		return;
	}
	iVar0 = Function_25(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_20("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x160D / 5645
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
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_25(iParam1), Function_23(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_25(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_21(int iParam0) //Position: 0x1737 / 5943
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

bool Function_22() //Position: 0x1771 / 6001
{
	if (Function_605(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_23(int iParam0) //Position: 0x178C / 6028
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_24(int iParam0) //Position: 0x17AC / 6060
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_25(int iParam0) //Position: 0x17C3 / 6083
{
	if (!Function_24(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_26() //Position: 0x17DE / 6110
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
			Function_27(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_27(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1A25 / 6693
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_28(int iParam0) //Position: 0x1A51 / 6737
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
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_29(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_29(int iParam0) //Position: 0x1AF7 / 6903
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

struct<24> Function_30(char* cParam0) //Position: 0x1B36 / 6966
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

void Function_31(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1D8C / 7564
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
		Global_21684[iParam07].f_12++;
		if (Function_85())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_23(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_29(Global_10966) };
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
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_20("DEED_COMPLETE", iParam0);
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
			Function_72(iParam0);
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
			Function_34(1);
			Function_33(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_32(iParam0, &Var14);
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

void Function_32(int iParam0, struct<41> Param1) //Position: 0x1FEA / 8170
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_33(bool bParam0, int iParam1) //Position: 0x2028 / 8232
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

void Function_34(bool bParam0) //Position: 0x2067 / 8295
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_63();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_35();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_609(&Global_99144, 1);
		Function_609(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_35() //Position: 0x20BC / 8380
{
	Function_61();
	Function_60();
	Function_60();
	Function_59();
	Function_59();
	Function_58();
	Function_58();
	Function_42(0);
	Function_42(0);
	Function_40();
	Function_39();
	Function_38();
	Function_37();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_36();
	return;
}

void Function_36() //Position: 0x2107 / 8455
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

void Function_37() //Position: 0x220D / 8717
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

void Function_38() //Position: 0x2240 / 8768
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

void Function_39() //Position: 0x23D3 / 9171
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

void Function_40() //Position: 0x258C / 9612
{
	Function_41(&Global_42918, 1, 0);
	return;
}

void Function_41(struct<2317> Param0) //Position: 0x259A / 9626
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
	
	uVar0 = Function_5();
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

struct<8> Function_42(int iParam0) //Position: 0x27B7 / 10167
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
					iVar2 = ((Function_57((50 + iVar4)) + Function_57((183 + iVar4))) + Function_57((90 + iVar4)));
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
	Function_43(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_43(int iParam0, bool bParam1, bool bParam2) //Position: 0x285E / 10334
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
		Function_56(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_55(iParam0);
	if (&bParam2)
	{
		Function_44(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_44(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2AFA / 11002
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_54(390))), 32);
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
					fVar19 = (Function_53(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_53(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_51(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_48(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_45(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_130(), &Var9);
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

var Function_45(int iParam0) //Position: 0x3138 / 12600
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_46(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3149 / 12617
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_47(char* cParam0) //Position: 0x3240 / 12864
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_48(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x325B / 12891
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_50(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_49(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_49(int iParam0, int iParam1) //Position: 0x32C2 / 12994
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_50(int iParam0, bool bParam1) //Position: 0x32D4 / 13012
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_51(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x32E6 / 13030
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
	if (((Function_52(iParam0) != 19 || Function_52(iParam0) != 17) || Function_52(iParam0) != 10) || Function_52(iParam0) != 9)
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

int Function_52(int iParam0) //Position: 0x341A / 13338
{
	return Global_55480[iParam016].f_96;
}

float Function_53(int iParam0) //Position: 0x3429 / 13353
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_54(int iParam0) //Position: 0x3462 / 13410
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_55(int iParam0) //Position: 0x349F / 13471
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

int Function_56(int iParam0, float fParam1, bool bParam2) //Position: 0x3639 / 13881
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

int Function_57(bool bParam0) //Position: 0x387D / 14461
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_58() //Position: 0x38BE / 14526
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
		iVar2 = ((Function_57((50 + iVar3) + 15) + Function_57((183 + iVar3) + 15)) + Function_57((90 + iVar3) + 15));
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
	Function_43(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_59() //Position: 0x3947 / 14663
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
			iVar2 = ((Function_57((50 + iVar3) + 8) + Function_57((183 + iVar3) + 8)) + Function_57((90 + iVar3) + 8));
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
	Function_43(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_60() //Position: 0x39DE / 14814
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
		iVar2 = ((Function_57((50 + iVar3)) + Function_57((183 + iVar3))) + Function_57((90 + iVar3)));
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
	Function_43(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_61() //Position: 0x3A5D / 14941
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_62(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_43(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_62(int iParam0, float fParam1, int iParam2) //Position: 0x3A9A / 15002
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
	Function_56(iParam0, fParam1, 1);
	Function_55(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_44(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_63() //Position: 0x3CA6 / 15526
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_22())
	{
		Function_69(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_69(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_64(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_64(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_586(StackVal, Var0))
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

struct<8> Function_64(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3D5D / 15709
{
	int iVar0;
	
	iVar0 = Function_67(&uParam2, &fParam3);
	if (Function_66(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_610(&Global_99144, 1);
			Function_609(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_610(&Global_99144, 2);
			Function_609(&Global_99144, 1);
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
		Function_610(&Global_99144, 2);
		Function_609(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_65();
	return StackVal, Function_65();
}

struct<8> Function_65() //Position: 0x3E55 / 15957
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_66(int iParam0) //Position: 0x3E5F / 15967
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_67(bool bParam0, bool bParam1) //Position: 0x3E75 / 15989
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
				fVar2 = Function_68(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_68(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_66(iVar0) && !&bParam1)
	{
		iVar0 = Function_67(&bParam0, 1);
	}
	return iVar0;
}

float Function_68(struct<2> Param0, struct<2> Param2) //Position: 0x3F41 / 16193
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_69(float fParam0, int iParam1) //Position: 0x3F5E / 16222
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_71(&Global_54076, &Var3);
	if (!Function_70(Global_46760[0]))
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
	if (!Function_70(Global_46760[2]))
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
	if (!Function_70(Global_46760[1]))
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
	if (!Function_70(Global_46796[1]))
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
	if (!Function_70(Global_46796[3]))
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
	if (!Function_70(Global_46796[2]))
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
	if (!Function_70(Global_46796[4]))
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
	if (!Function_70(Global_46816[0]))
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
	if (!Function_70(Global_46816[1]))
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
	if (!Function_70(Global_46816[2]))
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
	if (!Function_70(Global_46838[0]))
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
	if (!Function_70(Global_46850[0]))
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
	if (!Function_70(Global_46850[1]))
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
	if (!Function_70(Global_46850[2]))
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
	if (!Function_70(Global_46866[0]))
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
	if (!Function_70(Global_46866[1]))
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
	if (!Function_70(Global_46866[2]))
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
	if (!Function_70(Global_46894[2]))
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
	if (!Function_70(Global_46894[3]))
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
	if (!Function_70(Global_46894[0]))
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
	if (!Function_70(Global_46914[0]))
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
	if (!Function_70(Global_46926[2]))
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
	if (!Function_70(Global_46926[1]))
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
	if (!Function_70(Global_46926[0]))
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
	if (!Function_70(Global_46838[1]))
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
	if (!Function_70(Global_46894[1]))
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
	Function_610(&Global_99144, 2);
	Function_609(&Global_99144, 1);
	iParam1 = 0;
	if (Function_586(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_70(int iParam0) //Position: 0x478A / 18314
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_605(bVar0, 0x1000000) || Function_605(bVar0, 0x2000000)) || Function_605(bVar0, 0x4000000)) || !Function_605(bVar0, 0x10000000));
}

void Function_71(var uParam0, int iParam1) //Position: 0x47C5 / 18373
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_72(int iParam0) //Position: 0x47D4 / 18388
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
				Function_76(12, 1, 0, 0);
				Function_75(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_76(13, 1, 0, 0);
				Function_75(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_76(14, 1, 0, 0);
				Function_75(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_76(15, 1, 0, 0);
				Function_75(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_76(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_23(iParam0))
			{
				case 0x00000000:
					if (Function_74(iParam0) == 1)
					{
						bVar0 = Function_73(iParam0);
						if (Function_604(bVar0))
						{
							if (bVar0 == Global_46926[5])
							{
								Function_75(4, 18);
							}
							else if (bVar0 == Global_46866[3])
							{
								Function_75(4, 10);
							}
							else if (bVar0 == Global_46926[6])
							{
								Function_75(4, 16);
							}
							else if (bVar0 == Global_46816[3])
							{
								Function_75(4, 6);
							}
							else if (bVar0 == Global_46760[13])
							{
								Function_75(4, 3);
							}
							else if (bVar0 == Global_46866[7])
							{
								Function_75(4, 11);
							}
							else if (bVar0 == Global_46760[6])
							{
								Function_75(4, 0);
							}
							else if (bVar0 == Global_46866[10])
							{
								Function_75(4, 15);
							}
							else if (bVar0 == Global_46866[8])
							{
								Function_75(4, 14);
							}
							else if (bVar0 == Global_46760[11])
							{
								Function_75(4, 2);
							}
							else if (bVar0 == Global_46816[6])
							{
								Function_75(4, 7);
							}
							else if (bVar0 == Global_46926[3])
							{
								Function_75(4, 17);
							}
							else if (bVar0 == Global_46850[5])
							{
								Function_75(4, 8);
							}
							else if (bVar0 == Global_46866[9])
							{
								Function_75(4, 13);
							}
							else if (bVar0 == Global_46866[11])
							{
								Function_75(4, 12);
							}
							else if (bVar0 == Global_46760[7])
							{
								Function_75(4, 1);
							}
							else if (bVar0 == Global_46838[3])
							{
								Function_75(4, 5);
							}
							else if (bVar0 == Global_46866[4])
							{
								Function_75(4, 9);
							}
							else if (bVar0 == Global_46796[7])
							{
								Function_75(4, 4);
							}
							else if (bVar0 == Global_46926[4])
							{
								Function_75(4, 19);
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
								Function_76(363, 1, 0, 0);
							}
							else if (bVar0 == Global_46722[1])
							{
								Function_76(364, 1, 0, 0);
							}
							else if (bVar0 == Global_46722[2])
							{
								Function_76(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_73(iParam0) == 0)
			{
				if (Function_74(iParam0) == 1)
				{
					Function_76(458, 1, 0, 0);
					bVar0 = Function_23(iParam0);
					if (Function_604(bVar0))
					{
						if (bVar0 == Global_46816[2])
						{
							Function_75(2, 10);
						}
						else if (bVar0 == Global_46796[2])
						{
							Function_75(2, 11);
						}
						else if (bVar0 == Global_46760[2])
						{
							Function_75(2, 12);
						}
						else if (bVar0 == Global_46796[0])
						{
							Function_75(2, 13);
						}
						else if (bVar0 == Global_46796[3])
						{
							Function_75(2, 14);
						}
						else if (bVar0 == Global_46850[2])
						{
							Function_75(2, 15);
						}
						else if (bVar0 == Global_46850[1])
						{
							Function_75(2, 16);
						}
						else if (bVar0 == Global_46838[1])
						{
							Function_75(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_74(iParam0) == 1)
			{
				Function_76(400, 1, 0, 0);
			}
			switch (Function_23(iParam0))
			{
				case 0x00000001:
					Function_76(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_75(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_75(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_75(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_76(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_75(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_75(6, 9);
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

int Function_73(int iParam0) //Position: 0x4CB0 / 19632
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_74(int iParam0) //Position: 0x4CCF / 19663
{
	if (!Function_24(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_75(int iParam0, int iParam1) //Position: 0x4CE9 / 19689
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

int Function_76(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4D53 / 19795
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
	Function_56(iParam0, TO_FLOAT(bParam1), 1);
	Function_55(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_44(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_77(iParam0);
	return 1;
}

void Function_77(int iParam0) //Position: 0x4F7B / 20347
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

void Function_78() //Position: 0x5019 / 20505
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
	PLAYSTAT_INT("HC_MONEY", Function_57(0));
	PLAYSTAT_INT("HC_FAME", Function_57(3));
	PLAYSTAT_INT("HC_HONOR", Function_57(1));
	return;
}

void Function_79() //Position: 0x517B / 20859
{
	int iVar0;
	int iVar1;
	
	if (!Function_84(Global_10966))
	{
		return;
	}
	iVar0 = Function_57(24);
	iVar1 = Function_83(Global_10966);
	if (!Function_84(iVar0) && Function_82(iVar1) < 0)
	{
		Function_43(24, Global_10966, 0);
		Function_80(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_82(Function_83(iVar0)))
	{
		Function_43(24, Global_10966, 0);
		Function_80(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_80(int iParam0, char* cParam1) //Position: 0x51FB / 20987
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
		Function_81(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_81(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x5552 / 21842
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

int Function_82(int iParam0) //Position: 0x55DA / 21978
{
	if (!Function_86(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_83(int iParam0) //Position: 0x55F4 / 22004
{
	if (!Function_84(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_84(int iParam0) //Position: 0x560E / 22030
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_85() //Position: 0x5624 / 22052
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_86(int iParam0) //Position: 0x564F / 22095
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

bool Function_87(int iParam0) //Position: 0x5673 / 22131
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_88(int iParam0) //Position: 0x5688 / 22152
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
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

bool Function_89() //Position: 0x56C8 / 22216
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

void Function_90() //Position: 0x56ED / 22253
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_91(int iParam0) //Position: 0x5703 / 22275
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_92(int iParam0) //Position: 0x5720 / 22304
{
	Function_93(&iParam0);
	return;
}

void Function_93(struct<261> Param0) //Position: 0x572C / 22316
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_ITERATOR_VALID(&Param0 + 16))
	{
		DESTROY_ITERATOR(&Param0 + 16);
	}
	if (IS_ACTORSET_VALID(&Param0 + 64))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(&Param0 + 64) - 1))
		{
			GET_ACTOR_FROM_ACTORSET(&Param0 + 64, bVar2);
			bVar2++;
		}
		DESTROY_ACTORSET(&Param0 + 64);
	}
	if (SQUAD_IS_VALID(&Param0 + 80))
	{
		bVar2 = false;
		while (bVar2 < (SQUAD_GET_SIZE(&Param0 + 80) - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 80, bVar2);
			CLEAR_ACTOR_MAX_SPEED(&uVar0);
			if (Param0.f_260 == 0)
			{
				Function_107(&Param0, &uVar0, 2, 0);
			}
			bVar2++;
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(&Param0 + 80));
	}
	if (IS_ACTORSET_VALID(&Param0 + 88))
	{
		if (Param0.f_260 == 0)
		{
			Function_98(&Param0 + 88, 2, 0, 2);
		}
		else
		{
			Function_96(&Param0 + 88);
		}
		DESTROY_ACTORSET(&Param0 + 88);
	}
	if (!Function_605(Param0.f_128, 16))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0);
		DESTROY_LAYOUT(&Param0);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 136))
	{
		Function_95(&Param0 + 136);
		DESTROY_OBJECTSET(&Param0 + 136);
	}
	iVar1 = Function_94(&Param0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

int Function_94(int iParam0) //Position: 0x586E / 22638
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(&iParam0 + 16);
	return &iVar0;
}

void Function_95(var uParam0) //Position: 0x5893 / 22675
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

void Function_96(int iParam0) //Position: 0x58E2 / 22754
{
	bool bVar0;
	
	Function_97(&iParam0);
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_97(int iParam0) //Position: 0x592E / 22830
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(&iParam0, GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

int Function_98(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x598D / 22925
{
	var uVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(&uParam0))
	{
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(&uParam0) - 1))
		{
			uVar0 = GET_ACTOR_FROM_ACTORSET(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_99(&uVar0, &iParam1, &iParam2, &iParam3, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar0));
			}
			bVar1++;
		}
		DISBAND_ACTORSET(&uParam0);
		return 1;
	}
	return 0;
}

int Function_99(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x5A00 / 23040
{
	char* cVar0[32];
	
	Function_106();
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
	if (Function_105(&uParam0) == 1)
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
	Function_104(&uParam0, 0);
	Function_103(&uParam0, iParam1);
	Function_102(&uParam0, &iParam2);
	Function_101(&uParam0, iParam3);
	if (Function_100(&uParam0) != 5)
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

int Function_100(int iParam0) //Position: 0x5C6C / 23660
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_101(var uParam0, bool bParam1) //Position: 0x5C90 / 23696
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_102(var uParam0, int iParam1) //Position: 0x5CB4 / 23732
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_103(var uParam0, bool bParam1) //Position: 0x5CDA / 23770
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_104(var uParam0, bool bParam1) //Position: 0x5D01 / 23809
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_105(bool bParam0) //Position: 0x5D25 / 23845
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_106() //Position: 0x5D44 / 23876
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

int Function_107(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5D93 / 23955
{
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return 0;
	}
	if (Function_116(&bParam1, &iParam0 + 80, 1))
	{
		SQUAD_LEAVE(&bParam1);
		if (IS_ACTOR_VALID(GET_MOUNT(&bParam1)))
		{
			if (GET_MOUNT(&bParam1) != Function_108(0, 0, 0, 0, 0, 0, 1, 0))
			{
				if (&iParam3 == 1)
				{
					DESTROY_ACTOR(GET_MOUNT(&bParam1));
				}
				else
				{
					Function_127(GET_MOUNT(&bParam1), iParam2, 0, 2);
				}
			}
		}
		if (&iParam3 == 1)
		{
			DESTROY_ACTOR(&bParam1);
		}
		else
		{
			Function_127(&bParam1, iParam2, 0, 2);
		}
	}
	else if (IS_ACTOR_IN_ACTORSET(&iParam0 + 88, &bParam1))
	{
		REMOVE_ACTORSET_MEMBER(&iParam0 + 88, &bParam1);
		if (&iParam3 == 1)
		{
			DESTROY_ACTOR(&bParam1);
		}
		else
		{
			Function_127(&bParam1, 2, 0, 2);
		}
	}
	return 1;
}

int Function_108(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x5E55 / 24149
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_115(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
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
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_111();
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_588(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_588(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_588(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_588(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_110(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_110(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_130(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_130(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&uParam2, &uParam3, &uParam4);
				if (!Function_586(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_130(), bVar0, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_130(), 993, Vector(&uParam2, &uParam3, &uParam4), Vector(0.0f, &uParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_109(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_109(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x61B2 / 25010
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

var Function_110(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x61FC / 25084
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
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
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

void Function_111() //Position: 0x629C / 25244
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

bool Function_112() //Position: 0x6314 / 25364
{
	if (Function_113() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_113() //Position: 0x632A / 25386
{
	return Global_21369.f_244;
}

bool Function_114() //Position: 0x6335 / 25397
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_115(var uParam0, bool bParam1, bool bParam2) //Position: 0x6355 / 25429
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_610(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_610(&Global_21369 + 72 + 32, 64);
	}
	return;
}

bool Function_116(int iParam0, int iParam1, bool bParam2) //Position: 0x6384 / 25476
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

void Function_117() //Position: 0x63CC / 25548
{
	int iVar0;
	
	iVar0 = Function_468();
	if (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_OBJECT(&iVar0);
	}
	return;
}

void Function_118(int iParam0) //Position: 0x63E7 / 25575
{
	Function_119(&Global_43580, iParam0);
	return;
}

void Function_119(var uParam0, int iParam1) //Position: 0x63F5 / 25589
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_120(int iParam0) //Position: 0x6414 / 25620
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_121(int iParam0) //Position: 0x6427 / 25639
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_122(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_122(struct<2>[] Param0, int iParam1) //Position: 0x644F / 25679
{
	if (Function_124(&(Param0[iParam12]), 4))
	{
		if (Function_124(&(Param0[iParam12]), 1))
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
			Function_123(&(Param0[iParam12]), 1);
			Function_123(&(Param0[iParam12]), 2);
			Function_123(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_123(struct<13> Param0) //Position: 0x659A / 26010
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_124(struct<13> Param0) //Position: 0x65B7 / 26039
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_125(struct<1305> Param0) //Position: 0x65D5 / 26069
{
	if (Function_605(Param0.f_1304, 0x10000000))
	{
		UI_EXIT("WHATEVA_prog");
		UI_EXIT("WHATEVA");
		HUD_TIMER_DISPLAY(0);
		UI_POP("Stagecoach_Job");
		Function_609(&Param0 + 1304, 0x10000000);
	}
	return;
}

void Function_126(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x6631 / 26161
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideCurve", &iParam3);
	}
	if (!Function_586(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&uParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&uParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&uParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&uParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&uParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
}

int Function_127(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6750 / 26448
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (!IS_ACTOR_VEHICLE(&bParam0))
		{
			SQUAD_LEAVE(&bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&bParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_99(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_99(&bParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_128(var uParam0, bool bParam1) //Position: 0x683E / 26686
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "translib_state", bParam1);
	return;
}

void Function_129(struct<1305> Param0) //Position: 0x6861 / 26721
{
	var uVar0;
	
	if (IS_OBJECTSET_VALID(&Param0 + 1576))
	{
		while (GET_OBJECTSET_SIZE(&Param0 + 1576) >= 0)
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 1576);
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					MAKE_ACTOR_READY_FOR_ACTION(GET_ACTOR_FROM_OBJECT(&uVar0), 1);
					if (Function_605(Param0.f_1304, 0x8000000))
					{
						Function_127(GET_ACTOR_FROM_OBJECT(&uVar0), 2, 0, 4);
					}
					else
					{
						Function_127(GET_ACTOR_FROM_OBJECT(&uVar0), 0, 0, 2);
					}
				}
				else
				{
					RELEASE_OBJECT_REF(&uVar0);
				}
			}
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &Param0 + 1576);
			CLEAN_OBJECTSET(&Param0 + 1576);
		}
	}
	return;
}

var Function_130() //Position: 0x6900 / 26880
{
	int iVar0;
	
	return &iVar0;
}

void Function_131(int iParam0) //Position: 0x6909 / 26889
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_132(int iParam0) //Position: 0x6926 / 26918
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_133(105)), 0);
	return;
}

int Function_133(int iParam0) //Position: 0x6949 / 26953
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_134(int iParam0) //Position: 0x6960 / 26976
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_133(90)), 0);
	return;
}

bool Function_135(int iParam0, float fParam1) //Position: 0x6983 / 27011
{
	if (Function_138(&iParam0))
	{
		if (Function_136(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_136(vector3 vParam0) //Position: 0x69A1 / 27041
{
	if (Function_138(&vParam0))
	{
		if (Function_137(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_137(int iParam0) //Position: 0x6A6E / 27246
{
	return Function_605(iParam0, 2);
}

bool Function_138(int iParam0) //Position: 0x6A7C / 27260
{
	return Function_605(iParam0, 1);
}

void Function_139(struct<1049> Param0) //Position: 0x6A8A / 27274
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
	if (!Function_605(Param0.f_1048, 512) && Function_605(Param0.f_1048, 256))
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
						Function_145(GET_ACTOR_FROM_OBJECT(&uVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(&uVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(&uVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(&Param0 + 992);
		}
		if (((Param0.f_988 != 4 || Param0.f_988 != 5) || Param0.f_988 != 6) || Param0.f_988 != 7)
		{
			Function_145(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
		}
		*(&Param0 + 1000) = Vector(0.0f, 0.0f, 0.0f);
		Param0.f_1012 = 0;
		Function_142(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_141(1.0f);
		Function_140(&Param0, 5);
		if (Function_605(Param0.f_1048, 32768))
		{
			Function_91(256);
		}
		Function_610(&Param0 + 1048, 512);
		Function_609(&Param0 + 1048, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_140(struct<985> Param0) //Position: 0x6C7E / 27774
{
	Param0.f_984 = iParam1;
	return;
}

void Function_141(bool bParam0) //Position: 0x6C8C / 27788
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

void Function_142(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x6CA9 / 27817
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
		uVar0 = Function_5();
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
		Function_76(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_144();
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
	Function_143(&uParam9, &uParam10);
}

void Function_143(var uParam0, bool bParam1) //Position: 0x6D78 / 28024
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

void Function_144() //Position: 0x6E47 / 28231
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_145(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6E5C / 28252
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

int Function_146(struct<1049> Param0) //Position: 0x6F0C / 28428
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
	char* cVar11[8];
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
			if (Function_586(StackVal, *(&Param0 + 1000)))
			{
				GET_POSITION(&Global_54076, &Param0 + 1000);
			}
			if (!Function_586(StackVal, *(&Param0 + 1000)))
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
					Function_162(&Global_54076, 0);
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
						Function_140(&Param0, 4);
						Function_469(&Param0 + 952);
					}
					else
					{
						Function_140(&Param0, 3);
					}
					break;
				
				default:
					Function_140(&Param0, 4);
					Function_469(&Param0 + 952);
					break;
			}
			break;
		
		case 0x00000002:
			if (!Function_586(StackVal, *(&Param0 + 1000)))
			{
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 1000), 10.0f))
				{
					if (!IS_CUTSCENEOBJECT_PAUSED(&Param0 + 936) && HUD_IS_FADED())
					{
						Function_141(1.0f);
						Function_140(&Param0, 4);
						Function_469(&Param0 + 952);
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
						Function_127(GET_VEHICLE(&Global_54076), 0, 0, 2);
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
				bVar1 = Function_161(&Param0, 1);
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
				Function_140(&Param0, 4);
				Function_469(&Param0 + 952);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&Param0 + 936))
			{
				switch (Param0.f_988)
				{
					case 0x00000003:
						if (Function_159(&Param0 + 952, 5.0f))
						{
							fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
							fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
							GET_OBJECT_POSITION(&fVar4, &cVar9);
							CLEAR_AREA_OF_GRASS(cVar9, 10.0f);
							GET_OBJECT_RELATIVE_POSITION(StackVal, &fVar4, Vector(-3,285f, 0.0f, -3,285f), &cVar9);
							GET_OBJECT_POSITION(&fVar5, &cVar11);
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
									Function_158(&Global_54076);
									cVar9 = Function_158(&Global_54076);
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
								cVar11 = Global_54078;
								GET_OBJECT_RELATIVE_POSITION(StackVal, &bVar1, Vector(0.0f, 0.0f, -1.0f), &cVar11);
								TELEPORT_ACTOR_WITH_HEADING(&iVar2, cVar11, 180.0f, 1, 1, 1);
								TASK_STAND_STILL(&iVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(&iVar2, 20.0f, 0, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(&iVar2, &Var13, 165.0f);
								Function_155(&iVar2, &Global_54076);
								Function_609(&Param0 + 1048, 2048);
								if (IS_ACTOR_VALID(&bVar0))
								{
									cVar9 = (cVar9 + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&bVar0), cVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(&bVar0, 5.0f, 0, 0);
								}
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_135(&Param0 + 952, 0,5f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_135(&Param0 + 952, 7.0f))
								{
									fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
									fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
									uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
									bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
									iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
									Function_154(&Param0, &bVar1, &iVar2, 4);
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
										Function_469(&Param0 + 952);
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
									if (Function_136(&Param0 + 952) < 0,75f && !Function_605(Param0.f_1048, 2048))
									{
										SNAP_ACTOR_TO_GRINGO(&iVar2, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", false, 0, 0);
										SET_ACTOR_UPDATE_PRIORITY(&iVar2, false);
										TASK_PRIORITY_SET(&iVar2, true);
										TASK_USE_GRINGO(&iVar2, &Param0 + 928, "ChildUse", 1, 1);
										Function_610(&Param0 + 1048, 2048);
										Function_469(&Param0 + 952);
										Param0.f_1012++;
									}
								}
								break;
							
							case 0x00000005:
								if (Function_135(&Param0 + 952, 9.0f))
								{
									Function_140(&Param0, 5);
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
								cVar11 = cVar9;
								GET_OBJECT_RELATIVE_POSITION(StackVal, &bVar1, Vector(0.0f, 0.0f, -1.0f), &cVar11);
								TELEPORT_ACTOR_WITH_HEADING(&iVar2, cVar11, 180.0f, 1, 1, 1);
								TASK_STAND_STILL(&iVar2, 5.0f, 0, 0);
								SNAP_OBJECT_TO_GROUND(&iVar2, 20.0f, 0, 1092616192);
								ROTATE_OBJECT_AROUND_AXIS(&iVar2, &Var13, 165.0f);
								Function_609(&Param0 + 1048, 2048);
								if (IS_ACTOR_VALID(&bVar0))
								{
									cVar9 = (cVar9 + 2.0f);
									TELEPORT_ACTOR_WITH_HEADING(GET_ACTOR_FROM_OBJECT(&bVar0), cVar9, 0.0f, 1, 1, 1);
									TASK_STAND_STILL(&bVar0, 5.0f, 0, 0);
								}
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_135(&Param0 + 952, 0,5f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_135(&Param0 + 952, 7.0f))
								{
									fVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
									fVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
									uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992);
									bVar1 = GET_ACTOR_FROM_OBJECT(&fVar4);
									iVar2 = GET_ACTOR_FROM_OBJECT(&uVar6);
									Function_154(&Param0, &bVar1, &iVar2, 4);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (IS_GRINGO_VALID(&Param0 + 928))
								{
									SNAP_ACTOR_TO_GRINGO(&bVar1, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", false, 0, 0);
									TASK_USE_GRINGO(&bVar1, &Param0 + 928, "UseCase1", 1, 1);
									Function_469(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_136(&Param0 + 952) < 0,75f && !Function_605(Param0.f_1048, 2048))
								{
									SNAP_ACTOR_TO_GRINGO(&iVar2, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "ChildUse", false, 0, 0);
									SET_ACTOR_UPDATE_PRIORITY(&iVar2, false);
									TASK_PRIORITY_SET(&iVar2, true);
									TASK_USE_GRINGO(&iVar2, &Param0 + 928, "ChildUse", 1, 1);
									Function_610(&Param0 + 1048, 2048);
									Function_469(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000005:
								if (Function_135(&Param0 + 952, 9.0f))
								{
									Function_140(&Param0, 5);
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
								if ((HAS_ACTION_TREE_LOADED("custom/stand_hostage") && HAS_ANIM_SET_LOADED("handoff")) || Function_135(&Param0 + 952, 1.0f))
								{
									Function_469(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000001:
								bVar0 = Function_161(&Param0, 1);
								if (IS_ACTOR_VALID(&bVar0))
								{
									Function_71(&bVar0, &cVar9);
								}
								else
								{
									cVar9 = Vector(0.0f, 0.0f, 0.0f);
								}
								if ((Function_135(&Param0 + 952, 0,5f) || Param0.f_1016 != 1) || VDIST(Global_54078, cVar9) > 3.0f)
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
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("bhCutsceneVol") };
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
								Function_151(&bVar0, Function_161(&Param0, 0), 0, 1);
								iVar27 = 0;
								while (iVar27 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
								{
									bVar0 = Function_161(&Param0, iVar27);
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
												Function_145(&bVar0, 1, 1);
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
												if (!IS_ACTOR_VALID(Function_161(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_161(&Param0, 0), -1.0f, 0);
													UNK_0x2E84E682(&bVar0, 0);
													GIVE_WEAPON_TO_ACTOR(&bVar0, 40, 0.0f, 1, 1);
													ACTOR_DRAW_ANY_WEAPON(&bVar0, 0);
													AI_GOAL_AIM_AT_OBJECT(&bVar0, Function_161(&Param0, 0), 0);
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
												if (!IS_ACTOR_VALID(Function_161(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_161(&Param0, 0), -1.0f, 0);
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
												if (IS_ACTOR_VALID(Function_161(&Param0, 0)))
												{
													ACTOR_HOLSTER_WEAPON(&bVar0, 0);
													TASK_FACE_ACTOR(&bVar0, &Global_54076, 1, 3212836864);
												}
												else
												{
													TASK_POINT_GUN_AT_OBJECT(&bVar0, Function_161(&Param0, 0), -1.0f, 0);
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
									cVar7 = Function_150(Global_46760[0], "narmadillo", "sheriffsOffice", 1);
									uVar8 = "";
									cVar9 = Vector(-822,845f, 93,809f, 2423,713f);
								}
								else if (Param0.f_988 == 5)
								{
									cVar7 = Function_150(Global_46914[0], "blackwater", "policeStation01", 1);
									uVar8 = Function_150(Global_46914[0], "blackwater", "policeStation01", 2);
									cVar9 = Vector(761,697f, 79,456f, 1235,028f);
								}
								else if (Param0.f_988 == 6)
								{
									cVar7 = Function_150(Global_46866[0], "nchuparosa", "cityHall01", 6);
									uVar8 = Function_150(Global_46866[0], "nchuparosa", "cityHall01", 1);
									cVar9 = Vector(-2668,537f, 31,387f, 4253,711f);
								}
								else if (Param0.f_988 == 7)
								{
									cVar7 = Function_150(Global_46816[0], "hennigansRanch", "stockade01", 1);
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
								Function_469(&Param0 + 952);
								Param0.f_1012++;
								break;
							
							case 0x00000003:
								if (Function_135(&Param0 + 952, 1,11f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								bVar1 = Function_161(&Param0, 0);
								if (!IS_ACTOR_VALID(&bVar1))
								{
									bVar1 = &Global_54076;
								}
								iVar2 = Function_161(&Param0, 1);
								uVar3 = Function_161(&Param0, 2);
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
								Function_145(&iVar2, 1, 1);
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
								Function_155(&iVar2, &Global_54076);
								Function_155(&Global_54076, &iVar2);
								RESET_ANIM_SET_FOR_ACTOR(&iVar2, 0);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								SET_ANIM_SET_FOR_ACTOR(&iVar2, "handoff", 0);
								SET_LINKED_ANIM_TARGET(&iVar2, &Global_54076);
								SET_ACTION_NODE_FOR_ACTOR(&iVar2, "handoff");
								SAY_SINGLE_LINE_CONTEXT(&iVar2, 299, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
								Param0.f_1012++;
								break;
							
							case 0x00000005:
								if (Function_135(&Param0 + 952, 7.0f))
								{
									Param0.f_1012++;
								}
								break;
							
							case 0x00000006:
								iVar2 = Function_161(&Param0, 1);
								REMOVE_ACTION_TREE("custom/stand_hostage");
								REMOVE_ACTION_TREE("custom/handoff");
								REMOVE_ANIM_SET("handoff");
								CLEAR_LINKED_ANIM_TARGET(&Global_54076);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								RESET_ANIM_SET_FOR_ACTOR(&iVar2, 0);
								Function_140(&Param0, 5);
								iVar27 = 0;
								while (iVar27 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
								{
									bVar0 = Function_161(&Param0, iVar27);
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
								bVar0 = Function_161(&Param0, 0);
								RESET_ANIM_SET_FOR_ACTOR(&bVar0, 0);
								RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
								Function_145(&bVar0, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(&bVar0, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar0, 0);
								if (IS_ACTOR_CRIPPLED(&bVar0, 5))
								{
									SET_CRIPPLE_FLAG(&bVar0, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutsceneGringo") };
									Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									cVar9 = Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Var13 = Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
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
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 6.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								cVar11 = Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var15 = Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								if (!Function_586(StackVal, cVar11))
								{
									if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
									{
										TELEPORT_ACTOR_WITH_HEADING(GET_MOST_RECENT_MOUNT(&Global_54076), cVar11, GET_Y(&Var15), 1, 1, 1);
										TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(&Global_54076), -1.0f, 0, 0);
									}
								}
								SNAP_ACTOR_TO_GRINGO(&bVar0, GET_OBJECT_FROM_GRINGO(&Param0 + 928), "UseCase1", true, 1, 0);
								TASK_USE_GRINGO(&bVar0, &Param0 + 928, "UseCase1", 1, 1);
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								bVar0 = Function_161(&Param0, 0);
								if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&bVar0)))
								{
									GRINGO_GET_USE_COMPONENT_POSITION_EXT(&Param0 + 928, "Male", &cVar9);
									TELEPORT_ACTOR_WITH_HEADING(&Global_54076, cVar9, GRINGO_GET_USE_COMPONENT_HEADING_EXT(&Param0 + 928, "Male"), 1, 1, 1);
									TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
									Function_469(&Param0 + 952);
									DECOR_SET_BOOL(&Global_54076, "escwavReady", 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_135(&Param0 + 952, 2.0f))
								{
									TASK_USE_GRINGO(&Global_54076, &Param0 + 928, "Male", 1, 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (Function_135(&Param0 + 952, 3.0f))
								{
									bVar0 = Function_161(&Param0, 0);
									SAY_SINGLE_LINE_CONTEXT(&bVar0, 103, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
									Function_469(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_135(&Param0 + 952, 5,5f))
								{
									DECOR_REMOVE(&Global_54076, "escwavReady");
									Function_140(&Param0, 5);
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
								bVar1 = Function_161(&Param0, 0);
								iVar2 = Function_161(&Param0, 1);
								cVar9 = Vector(-3.0f, 0.0f, -1.0f);
								Var13 = Vector(0.0f, 0.0f, 0.0f);
								Function_147(GET_OBJECT_FROM_ACTOR(&bVar1), 1, &cVar9, &Var13);
								Function_145(&iVar2, 1, 1);
								SET_ACTOR_CAN_PLAY_GESTURES(&iVar2, false);
								SET_ACTOR_CAN_PLAY_BORED_IDLES(&iVar2, 0);
								if (IS_ACTOR_CRIPPLED(&iVar2, 5))
								{
									SET_CRIPPLE_FLAG(&iVar2, 0);
								}
								if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
								{
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutsceneGringo") };
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
									cVar11 = Vector(-5.0f, 0.0f, 0.0f);
									Var15 = Vector(0.0f, 90.0f, 0.0f);
									Function_147(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992), 1, &cVar11, &Var15);
									TELEPORT_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076), &cVar11, 1, 1, 1);
									SNAP_OBJECT_TO_GROUND(GET_MOST_RECENT_MOUNT(&Global_54076), 100.0f, 0, 1092616192);
								}
								if (IS_OBJECT_VALID(&Param0 + 944))
								{
									DESTROY_VOLUME(&Param0 + 944);
								}
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								Function_469(&Param0 + 952);
								Param0.f_1012++;
								break;
							
							case 0x00000001:
								if (Function_135(&Param0 + 952, 8,5f))
								{
									bVar1 = Function_161(&Param0, 0);
									iVar2 = Function_161(&Param0, 1);
									START_VEHICLE(&bVar1);
									SET_VEHICLE_ALLOWED_TO_DRIVE(&bVar1, 1);
									if (!GET_ACTOR_IN_VEHICLE_SEAT(&bVar1, false) != &iVar2)
									{
										SET_ACTOR_IN_VEHICLE(&iVar2, &bVar1, false);
									}
									TASK_CLEAR(&iVar2);
									TASK_PRIORITY_SET(&iVar2, true);
									TASK_FLEE_COORD(&iVar2, &Global_54078, 4, -1.0f, -1.0f, 0);
									Function_140(&Param0, 5);
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
								Function_469(&Param0 + 952);
								PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
								if (IS_OBJECT_VALID(&Param0 + 944))
								{
									DESTROY_VOLUME(&Param0 + 944);
								}
								Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("bhCutsceneVol") };
								*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &Var19, 4,203895E-45f, *(&Param0 + 1000), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
								CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
								DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
								iVar2 = Function_161(&Param0, 1);
								Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								cVar11 = Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								Var15 = Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &Param0 + 992));
								if (!Function_586(StackVal, cVar11))
								{
									if (IS_ACTOR_VALID(&iVar2))
									{
										STOP_VEHICLE(&iVar2);
										TELEPORT_ACTOR_WITH_HEADING(&iVar2, cVar11, GET_Y(&Var15), 1, 1, 1);
									}
								}
								bVar1 = Function_161(&Param0, 0);
								Function_145(&bVar1, 1, 1);
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
									Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutsceneGringo") };
									Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									cVar9 = Function_588(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
									Var13 = Function_149(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &Param0 + 992));
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
								bVar1 = Function_161(&Param0, 0);
								iVar2 = Function_161(&Param0, 1);
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
									Function_469(&Param0 + 952);
									DECOR_SET_BOOL(&Global_54076, "transportReady", 1);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								bVar1 = Function_161(&Param0, 0);
								iVar2 = Function_161(&Param0, 1);
								if (Function_135(&Param0 + 952, 5.0f))
								{
									START_VEHICLE(&iVar2);
									SET_VEHICLE_ALLOWED_TO_DRIVE(&iVar2, 1);
									Function_469(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								bVar1 = Function_161(&Param0, 0);
								iVar2 = Function_161(&Param0, 1);
								if (Function_135(&Param0 + 952, 2,5f))
								{
									if (!IS_ACTOR_RIDING_VEHICLE(&bVar1))
									{
										TASK_CLEAR(&bVar1);
										SET_ACTOR_IN_VEHICLE(&bVar1, &iVar2, false);
									}
									Function_469(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_135(&Param0 + 952, 1.0f))
								{
									bVar1 = Function_161(&Param0, 0);
									iVar2 = Function_161(&Param0, 1);
									TASK_CLEAR(&bVar1);
									Function_140(&Param0, 5);
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
				Function_141(1.0f);
				Function_140(&Param0, 5);
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

void Function_147(bool bParam0, bool bParam1, char* cParam2) //Position: 0x9D81 / 40321
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&bParam0, cParam2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_148(&Var0, &cParam2))
			{
				cParam2 = Var0;
			}
		}
		else
		{
			cParam2 = Var0;
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

bool Function_148(vector3 vParam0) //Position: 0x9EAE / 40622
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_586(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_586(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

struct<8> Function_149(bool bParam0) //Position: 0x9F24 / 40740
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

bool Function_150(bool bParam0, char* cParam1, bool bParam3) //Position: 0x9F4D / 40781
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_604(bParam0))
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

int Function_151(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x9FF2 / 40946
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

struct<32> Function_152(struct<8> Param0) //Position: 0xA052 / 41042
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_153("0", &cVar8, ""), 4);
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

struct<32> Function_153(char* cParam0) //Position: 0xA0BE / 41150
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_154(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xA0E0 / 41184
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
			Function_588(GET_OBJECT_FROM_ACTOR(&uParam1));
			Var0 = Function_588(GET_OBJECT_FROM_ACTOR(&uParam1));
			Function_149(GET_OBJECT_FROM_ACTOR(&uParam1));
			Var2 = Function_149(GET_OBJECT_FROM_ACTOR(&uParam1));
			if (!IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&iParam0 + 928)))
			{
				Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutsceneGringo") };
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

void Function_155(var uParam0, int iParam1) //Position: 0xA22E / 41518
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_156(StackVal, &uParam0, Var0);
	return;
}

void Function_156(int iParam0, struct<2> Param1) //Position: 0xA24A / 41546
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_157(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_157(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_157(int iParam0, struct<2> Param1) //Position: 0xA285 / 41605
{
	struct<2> Var0;
	
	Function_158(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_158(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_158(int iParam0) //Position: 0xA306 / 41734
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_159(var uParam0, float fParam1) //Position: 0xA318 / 41752
{
	if (Function_135(&uParam0, fParam1))
	{
		Function_160(&uParam0);
		return 1;
	}
	return 0;
}

void Function_160(vector3 vParam0) //Position: 0xA332 / 41778
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

var Function_161(int iParam0, int iParam1) //Position: 0xA349 / 41801
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

void Function_162(var uParam0, bool bParam1) //Position: 0xA3D4 / 41940
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		iVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			STOP_VEHICLE(&iVar1);
		}
	}
	else if (!&bParam1 || Function_163(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_163(var uParam0, bool bParam1) //Position: 0xA43E / 42046
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_164(struct<1493> Param0) //Position: 0xA45F / 42079
{
	var uVar0;
	var uVar1;
	
	Function_261(&Param0, &Param0 + 1592, 0);
	Function_261(&Param0, &Param0 + 1408, 1);
	Function_260(StackVal, &Param0, (&Param0 + 1504));
	if (Param0.f_1492 == Global_46760[0])
	{
		uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-2140,153f, 16,351f, 2605,842f), Vector(0.0f, 270,774f, 0.0f));
		uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-4260,107f, 19,033f, 4465,096f), Vector(0.0f, 142,267f, 0.0f));
		Function_259(&Param0, 8);
	}
	else if (Param0.f_1492 == Global_46914[0])
	{
		uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(781,004f, 78,414f, 1318,502f), Vector(0.0f, 0,114f, 0.0f));
		uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(785,054f, 78,306f, 1314,707f), Vector(0.0f, 353,711f, 0.0f));
		Function_259(&Param0, 9);
	}
	else if (Param0.f_1492 == Global_46866[0])
	{
		uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-2748,023f, 31,861f, 4297,732f), Vector(0.0f, 134,077f, 0.0f));
		uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-2748,643f, 31,859f, 4301,838f), Vector(0.0f, 236,213f, 0.0f));
		Function_259(&Param0, 10);
	}
	else if (Param0.f_1492 == Global_46850[0])
	{
		uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-4262,798f, 18,816f, 4462,007f), Vector(0.0f, 294,5f, 0.0f));
		uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-4257,874f, 18,994f, 4464,818f), Vector(0.0f, 348,761f, 0.0f));
		Function_259(&Param0, 11);
	}
	else if (Param0.f_1492 == Global_46816[0])
	{
		uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-827,779f, 92,169f, 2402,762f), Vector(0.0f, 173,812f, 0.0f));
		uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-828,606f, 92,134f, 2405,592f), Vector(0.0f, 260,09f, 0.0f));
		Function_259(&Param0, 12);
	}
	else if (Param0.f_1492 == Global_46926[1])
	{
		uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-426,999f, 151,323f, 1619,561f), Vector(0.0f, 332,185f, 0.0f));
		uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(-425,893f, 151,102f, 1612,597f), Vector(0.0f, 359,771f, 0.0f));
		Function_259(&Param0, 13);
	}
	else if (Param0.f_1492 == Global_46816[1])
	{
		uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(161,43f, 73,286f, 2200,903f), Vector(0.0f, 292,513f, 0.0f));
		uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Param0 + 1296, Function_130(), Vector(165,354f, 73,083f, 2201,864f), Vector(0.0f, 299,439f, 0.0f));
		Function_259(&Param0, 14);
	}
	else
	{
		LOG_ERROR("TRANSPORT_START_CUTSCENE: Unhandled cutscene type");
		Function_259(&Param0, 8);
	}
	SNAP_OBJECT_TO_GROUND(&uVar0, -100.0f, 0, 1092616192);
	SNAP_OBJECT_TO_GROUND(&uVar1, -100.0f, 0, 1092616192);
	Function_261(&Param0, &uVar0, 2);
	Function_261(&Param0, &uVar1, 3);
	Function_165(&Param0, &Param0 + 1296, 0);
	return;
}

int Function_165(struct<989> Param0) //Position: 0xA7FB / 43003
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
			*(&Param0 + 936) = Function_253(&uParam1, 0, &uVar0, 1, 0, 0);
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
			*(&Param0 + 936) = Function_248(&uParam1, 0, &uVar0, &uVar1, 1, 0, 0);
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
			*(&Param0 + 936) = Function_245(&uParam1, 0, &uVar0, 1, 0, 0);
			break;
		
		case 0x00000004:
			Function_145(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_240(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000005:
			Function_145(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_235(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000006:
			Function_145(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_230(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x00000007:
			Function_145(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			*(&Param0 + 936) = Function_225(&Param0 + 32, 0, 1, 1, 0);
			break;
		
		case 0x0000000F:
			*(&Param0 + 936) = Function_221(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000010:
			*(&Param0 + 936) = Function_217(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000011:
			*(&Param0 + 936) = Function_213(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000012:
			*(&Param0 + 936) = Function_209(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000013:
			*(&Param0 + 936) = Function_205(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000014:
			*(&Param0 + 936) = Function_201(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000015:
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			*(&Param0 + 936) = Function_198(&Param0 + 32, 0, &Global_54076, &uVar0, 1, 1, 0);
			break;
		
		case 0x00000008:
			*(&Param0 + 936) = Function_194(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000009:
			*(&Param0 + 936) = Function_190(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000A:
			*(&Param0 + 936) = Function_186(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000B:
			*(&Param0 + 936) = Function_182(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000C:
			*(&Param0 + 936) = Function_178(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000D:
			*(&Param0 + 936) = Function_174(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x0000000E:
			*(&Param0 + 936) = Function_170(&Param0 + 32, 0, &Global_54076, 1, 1, 0);
			break;
		
		case 0x00000000:
		default:
			LOG_ERROR("Unhandled Procmission Cutscene Type");
			break;
	}
	Function_140(&Param0, 1);
	if (&iParam2 == 1)
	{
		Function_610(&Param0 + 1048, 32768);
		Function_120(256);
	}
	if (((Param0.f_988 != 4 || Param0.f_988 != 5) || Param0.f_988 != 6) || Param0.f_988 != 7)
	{
		Function_166(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0x3f800000, 0);
	}
	else
	{
		Function_166(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	}
	Function_610(&Param0 + 1048, 256);
	return 1;
}

void Function_166(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xAC76 / 44150
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
	Function_144();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_5();
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
				Function_158(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_130(), 2,802597E-45f, Function_158(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_76(19, 1, 0, 0);
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
	if (iParam10 && !Function_22())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_169()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_169()));
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
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_167(bool bParam0) //Position: 0xAF28 / 44840
{
	bool bVar0;
	
	if (Function_605(bParam0, 1) && Function_605(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_168(int iParam0) //Position: 0xAF5C / 44892
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_169() //Position: 0xAF78 / 44920
{
	var uVar0;
	var uVar1;
	bool bVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		bVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&bVar2))
		{
			while (IS_OBJECT_VALID(&bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&bVar2), "bino_camera"))
				{
					return &bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

var Function_170(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB006 / 45062
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_THI", 2, 1);
	}
	Function_171(&uVar0, &uParam2);
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

void Function_171(var uParam0, int iParam1) //Position: 0xB098 / 45208
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_173(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_172(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_172(int iParam0) //Position: 0xB106 / 45318
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

void Function_173(bool bParam0) //Position: 0xB17B / 45435
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

var Function_174(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB1F0 / 45552
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_MAN", 2, 1);
	}
	Function_175(&uVar0, &uParam2);
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

void Function_175(var uParam0, int iParam1) //Position: 0xB282 / 45698
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_177(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_176(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_176(int iParam0) //Position: 0xB2F0 / 45808
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

void Function_177(bool bParam0) //Position: 0xB365 / 45925
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

var Function_178(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB3DA / 46042
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_HEN", 2, 1);
	}
	Function_179(&uVar0, &uParam2);
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

void Function_179(var uParam0, int iParam1) //Position: 0xB46C / 46188
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_181(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_180(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_180(int iParam0) //Position: 0xB4DA / 46298
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

void Function_181(bool bParam0) //Position: 0xB54F / 46415
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

var Function_182(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB5C4 / 46532
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_ESC", 2, 1);
	}
	Function_183(&uVar0, &uParam2);
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

void Function_183(var uParam0, int iParam1) //Position: 0xB656 / 46678
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_185(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_184(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_184(int iParam0) //Position: 0xB6C4 / 46788
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

void Function_185(bool bParam0) //Position: 0xB739 / 46905
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

var Function_186(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB7AE / 47022
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_CHU", 2, 1);
	}
	Function_187(&uVar0, &uParam2);
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

void Function_187(var uParam0, int iParam1) //Position: 0xB840 / 47168
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_189(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_188(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 1, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 0, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 11.0f, 2);
	return;
}

void Function_188(int iParam0) //Position: 0xB8AE / 47278
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

void Function_189(bool bParam0) //Position: 0xB923 / 47395
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

var Function_190(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xB998 / 47512
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_BLA", 2, 1);
	}
	Function_191(&uVar0, &uParam2);
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

void Function_191(var uParam0, int iParam1) //Position: 0xBA2A / 47658
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_193(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_192(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_192(int iParam0) //Position: 0xBA98 / 47768
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

void Function_193(bool bParam0) //Position: 0xBB0D / 47885
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

var Function_194(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBB82 / 48002
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TransportDynamite_ARM", 2, 1);
	}
	Function_195(&uVar0, &uParam2);
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

void Function_195(var uParam0, int iParam1) //Position: 0xBC14 / 48148
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_197(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_196(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "transportReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 11.0f, 2);
	return;
}

void Function_196(int iParam0) //Position: 0xBC82 / 48258
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

void Function_197(int iParam0) //Position: 0xBCF7 / 48375
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

var Function_198(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0xBD6C / 48492
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "mAtkDef_Bandit_End", 1, 1);
	}
	Function_199(&uVar0, &uParam2, &uParam3);
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

void Function_199(var uParam0, var uParam1, int iParam2) //Position: 0xBDFE / 48638
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_200(&uVar0, &uParam1, &iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 8,5f, 0);
	return;
}

void Function_200(int iParam0, var uParam1, bool bParam2) //Position: 0xBE31 / 48689
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

var Function_201(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xBEE5 / 48869
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_THI", 2, 1);
	}
	Function_202(&uVar0, &uParam2);
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

void Function_202(var uParam0, int iParam1) //Position: 0xBF74 / 49012
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_204(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_203(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_203(int iParam0) //Position: 0xBFEA / 49130
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

void Function_204(bool bParam0) //Position: 0xC064 / 49252
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

var Function_205(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC0D9 / 49369
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_HEN", 2, 1);
	}
	Function_206(&uVar0, &uParam2);
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

void Function_206(var uParam0, int iParam1) //Position: 0xC168 / 49512
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_208(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_207(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_207(int iParam0) //Position: 0xC1DE / 49630
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

void Function_208(bool bParam0) //Position: 0xC253 / 49747
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

var Function_209(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC2C8 / 49864
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_ESC", 2, 1);
	}
	Function_210(&uVar0, &uParam2);
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

void Function_210(var uParam0, int iParam1) //Position: 0xC357 / 50007
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_212(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_211(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_211(int iParam0) //Position: 0xC3CD / 50125
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

void Function_212(bool bParam0) //Position: 0xC442 / 50242
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

var Function_213(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC4B7 / 50359
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_CHU", 2, 1);
	}
	Function_214(&uVar0, &uParam2);
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

void Function_214(var uParam0, int iParam1) //Position: 0xC546 / 50502
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_216(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_215(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_215(int iParam0) //Position: 0xC5BC / 50620
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

void Function_216(bool bParam0) //Position: 0xC631 / 50737
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

var Function_217(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC6A6 / 50854
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_BLA", 2, 1);
	}
	Function_218(&uVar0, &uParam2);
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

void Function_218(var uParam0, int iParam1) //Position: 0xC735 / 50997
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_220(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_219(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_219(int iParam0) //Position: 0xC7AB / 51115
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

void Function_220(bool bParam0) //Position: 0xC820 / 51232
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

var Function_221(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xC895 / 51349
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "EscortWavedown_ARM", 2, 1);
	}
	Function_222(&uVar0, &uParam2);
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

void Function_222(var uParam0, int iParam1) //Position: 0xC924 / 51492
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_224(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_223(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "escwavReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 3.0f, 3);
	return;
}

void Function_223(int iParam0) //Position: 0xC99A / 51610
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

void Function_224(int iParam0) //Position: 0xCA0F / 51727
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

var Function_225(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xCA84 / 51844
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterHenEnd", 3, 1);
	}
	Function_226(&uVar0);
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

void Function_226(int iParam0) //Position: 0xCB10 / 51984
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_229(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_228(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_227(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_227(int iParam0) //Position: 0xCB84 / 52100
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

void Function_228(int iParam0) //Position: 0xCBF9 / 52217
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

void Function_229(int iParam0) //Position: 0xCC6E / 52334
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

var Function_230(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xCCE3 / 52451
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterChuEnd", 3, 1);
	}
	Function_231(&uVar0);
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

void Function_231(int iParam0) //Position: 0xCD6F / 52591
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_234(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_233(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_232(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_232(int iParam0) //Position: 0xCDE3 / 52707
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

void Function_233(int iParam0) //Position: 0xCE58 / 52824
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

void Function_234(int iParam0) //Position: 0xCECD / 52941
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

var Function_235(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xCF42 / 53058
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterBlkEnd", 3, 1);
	}
	Function_236(&uVar0);
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

void Function_236(int iParam0) //Position: 0xCFCE / 53198
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_239(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_238(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_237(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_237(int iParam0) //Position: 0xD042 / 53314
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

void Function_238(int iParam0) //Position: 0xD0B7 / 53431
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

void Function_239(int iParam0) //Position: 0xD12C / 53548
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

var Function_240(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xD1A1 / 53665
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BountyHunterArmEnd", 3, 1);
	}
	Function_241(&uVar0);
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

void Function_241(int iParam0) //Position: 0xD22D / 53805
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_244(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_243(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_242(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,01f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,1f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 1, 2, 6.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 4.0f, 3);
	return;
}

void Function_242(int iParam0) //Position: 0xD2A1 / 53921
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

void Function_243(int iParam0) //Position: 0xD316 / 54038
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

void Function_244(bool bParam0) //Position: 0xD38B / 54155
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

var Function_245(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xD400 / 54272
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ProcCutsceneSimple", 1, 1);
	}
	Function_246(&uVar0, &uParam2);
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

void Function_246(var uParam0, var uParam1) //Position: 0xD482 / 54402
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_247(&uVar0, &uParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 5.0f, 4294967295);
	return;
}

void Function_247(var uParam0, int iParam1) //Position: 0xD4A6 / 54438
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

var Function_248(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0xD54C / 54604
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "locAttackEnd1", 3, 1);
	}
	Function_249(&uVar0, &uParam2, &uParam3);
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

void Function_249(var uParam0, var uParam1, int iParam2) //Position: 0xD5DD / 54749
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_252(&uVar0, &iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_251(&uVar0, &iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_250(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 7.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 3.0f, 2);
	return;
}

void Function_250(int iParam0, int iParam1) //Position: 0xD647 / 54855
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

void Function_251(int iParam0, var uParam1) //Position: 0xD6DC / 55004
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

void Function_252(var uParam0, bool bParam1) //Position: 0xD771 / 55153
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

var Function_253(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xD806 / 55302
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "wagonPassengerThx", 4, 1);
	}
	Function_254(&uVar0, &uParam2);
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

void Function_254(var uParam0, int iParam1) //Position: 0xD894 / 55444
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_258(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_257(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_256(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_255(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 3.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 3,5f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 3, 5.0f, 3);
	return;
}

void Function_255(int iParam0, int iParam1) //Position: 0xD922 / 55586
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

void Function_256(int iParam0, var uParam1) //Position: 0xD9BB / 55739
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

void Function_257(int iParam0, var uParam1) //Position: 0xDA54 / 55892
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

void Function_258(int iParam0, var uParam1) //Position: 0xDAED / 56045
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-3,254722f, 1,778463f, 2,641411f), Vector(-2,721607f, -95,76204f, 0,009683f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,221859f, 1,638663f, 2,947425f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_259(struct<989> Param0) //Position: 0xDB86 / 56198
{
	Param0.f_988 = iParam1;
	return;
}

void Function_260(int iParam0, struct<2> Param1) //Position: 0xDB94 / 56212
{
	(&iParam0 + 1000) = Param1;
	return;
}

void Function_261(int iParam0, var uParam1, bool bParam2) //Position: 0xDBA5 / 56229
{
	struct<8> Var0;
	
	Function_262(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 992))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("cutscTargets") };
		*(&iParam0 + 992) = CREATE_OBJECTSET_IN_LAYOUT(&Var0, &iParam0 + 32, 4294967295, 0);
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

void Function_262(int iParam0) //Position: 0xDC5F / 56415
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
	{
		strcpy(&cVar0, "procMisslayout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(&cVar0) };
		*(&iParam0 + 32) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

bool Function_263() //Position: 0xDCDA / 56538
{
	if (!IS_ACTOR_VALID(&Local_29 + 1592) || !IS_ACTOR_VALID(&Local_29 + 1408))
	{
		LOG_ERROR("TRANSPORT_PrepareForCutscene: Invalid cutscene actors");
		return 1;
	}
	switch (iLocal_550)
	{
		case 0x00000000:
			if (GET_VEHICLE(&Global_54076) == &Local_29 + 1408)
			{
				iLocal_550 = 1;
			}
			else
			{
				iLocal_550 = 4;
			}
			break;
		
		case 0x00000001:
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
			TASK_CLEAR(&Global_54076);
			if (GET_VEHICLE(&Global_54076) == &Local_29 + 1408)
			{
				STOP_VEHICLE(GET_VEHICLE(&Global_54076));
			}
			TASK_CLEAR(&Local_29 + 1592);
			TASK_GO_NEAR_ACTOR(&Local_29 + 1592, &Global_54076, 5.0f, 1);
			TASK_PRIORITY_SET(&Local_29 + 1592, true);
			Function_469(&Local_29 + 1372);
			iLocal_550 = 2;
			break;
		
		case 0x00000002:
			if (Function_135(&Local_29 + 1372, 3.0f))
			{
				TASK_CLEAR(&Global_54076);
				TASK_VEHICLE_LEAVE(&Global_54076);
				iLocal_550 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
			{
				TASK_CLEAR(&Global_54076);
				TASK_CLEAR(&Local_29 + 1592);
				Function_469(&Local_29 + 1372);
				iLocal_550 = 4;
			}
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

void Function_264() //Position: 0xDE2D / 56877
{
	if (iLocal_28 == 2)
	{
		Function_318(&Local_29);
	}
	else if (iLocal_28 == 3)
	{
		Function_317(&Local_29);
	}
	else if (iLocal_28 == 4)
	{
		Function_265(&Local_29);
	}
	else
	{
		LOG_ERROR("This is an unhandled pass status");
	}
	Function_12(&Local_29);
	return;
}

void Function_265(int iParam0) //Position: 0xDE88 / 56968
{
	Function_266(&iParam0, 4);
	return;
}

void Function_266(struct<1089> Param0) //Position: 0xDE95 / 56981
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
				iVar0 = Function_316(&Param0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_315(&Param0) != 1)
				{
					Function_292(Param0.f_916, iVar0, 1);
				}
				if (Param0.f_912 != 1 || Param0.f_912 != 0)
				{
					Function_289(200, 1, 0);
				}
				else
				{
					Function_270(50, 1, 0);
				}
				if (Param0.f_616 > 0)
				{
					Function_269(Param0.f_616, 1, 1);
				}
				else
				{
					Function_267(Param0.f_616, 1);
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

int Function_267(bool bParam0, bool bParam1) //Position: 0xDF7A / 57210
{
	bool bVar0;
	
	bVar0 = Function_57(0);
	if ((Function_57(0) - bParam0) <= 0)
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
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_57(0));
	return 1;
}

int Function_268(int iParam0, bool bParam1, int iParam2) //Position: 0xE00B / 57355
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
	Function_55(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_44(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_269(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE208 / 57864
{
	bool bVar0;
	
	bVar0 = Function_57(0);
	if ((Function_57(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_76(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_57(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_76(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_57(597) + Function_57(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_270(int iParam0, bool bParam1, bool bParam2) //Position: 0xE2DA / 58074
{
	int iVar0;
	bool bVar1;
	
	if (Function_288(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_85())
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
	iVar0 = Function_57(3);
	Function_285();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_283(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_282(Global_119936, 4))
			{
				Function_277(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_76(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_53(3));
	iVar0 = Function_57(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_272(4, Function_276(Global_21369.f_248), 1);
				Function_271(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_272(4, Function_276(Global_21369.f_248), 1);
				Function_271(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_272(4, Function_276(Global_21369.f_248), 1);
				Function_271(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_272(4, Function_276(Global_21369.f_248), 1);
				Function_271(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_272(4, Function_276(Global_21369.f_248), 1);
				Function_271(Global_21369.f_244, Global_21369.f_248);
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

void Function_271(int iParam0, int iParam1) //Position: 0xE4AE / 58542
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

int Function_272(int iParam0, char* cParam1) //Position: 0xE718 / 59160
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
	Function_80(iParam0, &cParam1, 0, 1);
	iVar1 = Function_273();
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

int Function_273() //Position: 0xE8A8 / 59560
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
	Function_274();
	return 0;
}

void Function_274() //Position: 0xE949 / 59721
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_275(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_275(int iParam0) //Position: 0xEA07 / 59911
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

var Function_276(int iParam0) //Position: 0xEA6D / 60013
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

void Function_277(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEAFC / 60156
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
	Function_278(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_278(char* cParam0) //Position: 0xEB71 / 60273
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

bool Function_279(int iParam0, var uParam1, int iParam2) //Position: 0xEBAB / 60331
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
				if (!Function_282(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_280(char* cParam0) //Position: 0xEC27 / 60455
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

int Function_281(int iParam0) //Position: 0xECC8 / 60616
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

bool Function_282(var uParam0, int iParam1) //Position: 0xED05 / 60677
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_283(int iParam0, bool bParam1) //Position: 0xED18 / 60696
{
	bool bVar0;
	int iVar1;
	
	Function_76(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_273();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_284(int iParam0, int iParam1) //Position: 0xEEC4 / 61124
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

void Function_285() //Position: 0xEF09 / 61193
{
	Function_287(3, 0.0f);
	Function_286(3, 10000.0f);
	return;
}

int Function_286(int iParam0, int iParam1) //Position: 0xEF1F / 61215
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_287(int iParam0, int iParam1) //Position: 0xEF5F / 61279
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_288(int iParam0) //Position: 0xEF9F / 61343
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_289(int iParam0, bool bParam1, bool bParam2) //Position: 0xEFAE / 61358
{
	int iVar0;
	bool bVar1;
	
	if (Function_288(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_85())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_57(1);
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
			Function_283(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_282(Global_119936, 1))
				{
					Function_277(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_291(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_282(Global_119936, 2))
				{
					Function_277(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_76(1, bVar1, 0, 0);
	}
	else
	{
		Function_268(1, (4294967295 * bVar1), 0);
	}
	if (Function_57(1) <= 4294962296)
	{
		Function_43(1, 4294962296, 0);
	}
	else if (Function_57(1) >= 5000)
	{
		Function_43(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_53(1));
	iVar0 = Function_57(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_272(2, Function_290(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_272(2, Function_290(Global_21369.f_244), 0);
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
				Function_272(2, Function_290(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_272(2, Function_290(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_272(2, Function_290(Global_21369.f_244), 1);
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
				Function_272(2, Function_290(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_272(2, Function_290(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_272(2, Function_290(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_272(2, Function_290(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_272(2, Function_290(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_272(2, Function_290(Global_21369.f_244), 1);
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
				Function_272(2, Function_290(Global_21369.f_244), 0);
			}
			break;
	}
	Function_271(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_290(int iParam0) //Position: 0xF2D5 / 62165
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

int Function_291(int iParam0, bool bParam1) //Position: 0xF378 / 62328
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
	iVar1 = Function_273();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_292(int iParam0, char* cParam1, bool bParam2) //Position: 0xF523 / 62755
{
	char* cVar0[32];
	
	if (!Function_314(3))
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
			if (&bParam2)
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

void Function_293(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xF639 / 63033
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_312(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_314(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_311(bParam0, 2))
	{
		Function_76(456, 1, 0, 0);
		Function_310(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_309(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_308(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_310(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_307(0, 0, 1, 1))
			{
				Function_34(1);
				Function_33(1, 0);
			}
			else
			{
				Function_306();
			}
		}
		Function_301(bParam0);
		if (StackVal && !Function_605(((((!Function_300() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_605((((Function_300() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_22())
		{
			if (!Function_282(Global_119934, 2))
			{
				Function_277(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_295();
		}
		Global_42827.f_16 = 1;
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
				Function_75(2, 24);
				break;
			
			case 0x00000003:
				Function_75(2, 25);
				break;
			
			case 0x0000000F:
				Function_75(2, 26);
				break;
			
			case 0x0000000D:
				Function_75(2, 27);
				break;
			
			case 0x0000000E:
				Function_75(2, 28);
				break;
			}
	}
}

void Function_294(int iParam0, bool bParam1) //Position: 0xF8D8 / 63704
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

void Function_295() //Position: 0xF947 / 63815
{
	if (Function_312(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_299(Global_42827);
			*(&Global_42827 + 8) = Function_296(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_299(Global_42827);
			*(&Global_42827 + 8) = Function_296(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_296(int iParam0, int iParam1) //Position: 0xF9C7 / 63943
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
					if (Function_298(6, 0) || Function_298(12, 0))
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
					if (Function_297(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_298(5, 0))
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
					if (Function_297(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_297(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_297(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_297(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_298(26, 0))
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
					if (Function_297(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_297(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_297(27) && iVar16)
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
					if (Function_297(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_297(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_297(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_297(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_298(17, 0) && iVar13)
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
					if (Function_297(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_298(6, 0) && Function_297(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_297(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_298(9, 0) && Function_297(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_297(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_298(8, 0) && iVar17)
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
	if (Function_586(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_586(StackVal, vVar2))
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
	if (!Function_586(StackVal, vVar2))
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

int Function_297(int iParam0) //Position: 0x1062B / 67115
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_298(int iParam0, bool bParam1) //Position: 0x10640 / 67136
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
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_299(int iParam0) //Position: 0x1067E / 67198
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

bool Function_300() //Position: 0x106CD / 67277
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_301(bool bParam0) //Position: 0x106FA / 67322
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
			if (Function_308(bParam0, Function_305(bVar24)))
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
			if (Function_308(bParam0, Function_305(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_304(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_303(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_302(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_302(int iParam0) //Position: 0x108AA / 67754
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

void Function_303(var uParam0, int iParam1) //Position: 0x10901 / 67841
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

var Function_304(int iParam0) //Position: 0x10926 / 67878
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

int Function_305(bool bParam0) //Position: 0x1097C / 67964
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_306() //Position: 0x10988 / 67976
{
	return;
}

bool Function_307(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1098E / 67982
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

bool Function_308(bool bParam0, int iParam1) //Position: 0x10A3D / 68157
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

void Function_309(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x10A9C / 68252
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_29(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_310(int iParam0, int iParam1) //Position: 0x10B27 / 68391
{
	if (!Function_312(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_311(int iParam0, int iParam1) //Position: 0x10B7C / 68476
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

bool Function_312(int iParam0) //Position: 0x10BA9 / 68521
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_313() //Position: 0x10BBF / 68543
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_605(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_314(int iParam0) //Position: 0x10BEF / 68591
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

int Function_315(struct<1049> Param0) //Position: 0x10C0B / 68619
{
	return !Function_605(Param0.f_1048, 16384);
}

var Function_316(struct<921> Param0) //Position: 0x10C1E / 68638
{
	return Param0.f_920;
}

void Function_317(int iParam0) //Position: 0x10C2A / 68650
{
	Function_266(&iParam0, 3);
	return;
}

void Function_318(struct<1305> Param0) //Position: 0x10C37 / 68663
{
	int iVar0;
	int iVar1;
	
	switch (Param0.f_1104)
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
	if (!Function_605(Param0.f_1304, 4))
	{
		Function_269(Function_319(iVar0, iVar1, 1, 0, 0), 1, 1);
	}
	Function_283(366, 1);
	Function_266(&Param0, 2);
	return;
}

bool Function_319(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x10CAB / 68779
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
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_57(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_320(17), &Global_54076))
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

var Function_320(bool bParam0) //Position: 0x10DB2 / 69042
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

var Function_321(int iParam0, struct<4> Param1) //Position: 0x10EA6 / 69286
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(&iParam0 + 76[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(&iParam0 + 76[iVar24], &Param1, 16);
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
	if (!IS_STRING_VALID(&Param1))
	{
		iVar0 = 0;
	}
	strcpy(&iParam0 + 76[iVar24], &Param1, 16);
	(*&iParam0 + 184)[iVar2] = 0;
	(*&iParam0 + 216)[iVar2] = &iParam2;
	return iVar0;
}

void Function_322(struct<181> Param0) //Position: 0x10F28 / 69416
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

int Function_323(struct<1305> Param0) //Position: 0x10F76 / 69494
{
	if (!Function_605(Param0.f_1304, 64))
	{
		LOG_ERROR("Cannot launch transport without TRANSPORT_INIT_TRANSPORT being properly called");
		return 0;
	}
	Function_331(&Param0);
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		Function_128(&Param0 + 1544, 2);
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		RESET_VEHICLE_BUMP_COUNT(&Param0 + 1408);
	}
	if (IS_VOLUME_VALID(&Param0 + 1496))
	{
		Function_330(&Param0, &Param0 + 1496);
	}
	if (Param0.f_1096 == 2)
	{
		Function_610(&Param0 + 1304, 512);
	}
	if (Param0.f_1096 == 3)
	{
		Function_469(&Param0 + 1308);
	}
	Function_469(&Param0 + 1372);
	Function_329(&Param0 + 1372);
	Function_457(&Param0);
	Function_461(&Param0, 1);
	Function_469(&Param0 + 1340);
	Function_325(&Param0);
	Function_324(&Param0, 1);
	Function_610(&Param0 + 1304, 128);
	return 1;
}

void Function_324(int iParam0, int iParam1) //Position: 0x1109B / 69787
{
	if (iParam1 == 1)
	{
		Function_610(&iParam0 + 1048, 4);
	}
	else
	{
		Function_609(&iParam0 + 1048, 4);
	}
	return;
}

void Function_325(struct<1093> Param0) //Position: 0x110BE / 69822
{
	if (Function_605(Param0.f_1048, 4))
	{
		Function_328();
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Function_327(1);
	if (Function_605(Param0.f_1048, 32))
	{
		if (Function_24(Param0.f_1092))
		{
			Function_326(Param0.f_1092, 1);
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_13(&Param0, 0);
	}
	Function_610(&Param0 + 1048, 16);
	Global_6625 = 1;
	if (Function_605(Param0.f_1048, 64))
	{
		Global_21575 = 4294967295;
	}
	Function_266(&Param0, 1);
	return;
}

void Function_326(int iParam0, int iParam1) //Position: 0x1114D / 69965
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
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_34(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_23(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_327(int iParam0) //Position: 0x111B5 / 70069
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_89())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_328() //Position: 0x111EE / 70126
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_329(vector3 vParam0) //Position: 0x11204 / 70148
{
	if (Function_138(&vParam0))
	{
		if (!Function_137(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_610(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

int Function_330(int iParam0, int iParam1) //Position: 0x112C8 / 70344
{
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	(&iParam0 + 1496) = &iParam1;
	return 1;
}

void Function_331(int iParam0) //Position: 0x112E8 / 70376
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 1296))
	{
		strcpy(&cVar0, "transportStructLay", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(&cVar0) };
		*(&iParam0 + 1296) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 1296))
		{
			LOG_ERROR("couldn't create library transport layout");
		}
		Function_609(&iParam0 + 1304, 1024);
	}
	return;
}

bool Function_332() //Position: 0x11373 / 70515
{
	float fVar0;
	
	fVar0 = -1.0f;
	if (IS_ACTOR_VALID(&Local_29 + 1544))
	{
		if (IS_ACTOR_ON_FOOT(&Local_29 + 1544) || IS_ACTOR_ON_FOOT(&Global_54076))
		{
			if (Function_605(bLocal_566, 4))
			{
				Function_609(&bLocal_566, 4);
			}
			if (Function_605(bLocal_566, 2))
			{
				Function_609(&bLocal_566, 2);
			}
		}
		else if (IS_ACTOR_RIDING_VEHICLE(&Local_29 + 1544) && IS_ACTOR_RIDING_VEHICLE(&Global_54076))
		{
			if (!Function_605(bLocal_566, 4))
			{
				Function_610(&bLocal_566, 4);
			}
			if (!Function_605(bLocal_566, 2))
			{
				Function_610(&bLocal_566, 2);
			}
		}
	}
	if (Function_333(&Local_29 + 1544, &uLocal_565, &fVar0, bLocal_566, 0, 0x40400000))
	{
		return 1;
	}
	return 0;
	return 0;
}

bool Function_333(int iParam0, var uParam1, float fParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1141B / 70683
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
		fVar0 = Function_336(&iParam0, &Global_54076);
		if (!Function_605(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_334(&iParam0);
				return 1;
			}
		}
		if (!Function_605(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_334(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_334(&iParam0);
				return 1;
			}
		}
		if (!Function_605(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_334(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_334(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_605(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_334(&iParam0);
				return 1;
			}
		}
		if (!Function_605(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_334(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_334(int iParam0) //Position: 0x115E4 / 71140
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_335(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_335(int iParam0) //Position: 0x11621 / 71201
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_336(var uParam0, int iParam1) //Position: 0x1163A / 71226
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

int Function_337(struct<1541> Param0) //Position: 0x1172F / 71471
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	bool bVar5;
	float fVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	
	bVar0 = false;
	Function_331(&Param0);
	if (!Function_605(Param0.f_1304, 64))
	{
		return 24;
	}
	if (!IS_LAYOUTREF_VALID(&Param0 + 1296))
	{
		return 25;
	}
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 26;
	}
	switch (Function_430(&Param0))
	{
		case 0x00000002:
			Function_266(&Param0, 2);
			break;
		
		case 0x00000003:
			Function_266(&Param0, 3);
			break;
		
		case 0x00000004:
			Function_266(&Param0, 4);
			break;
		
		case 0x00000001:
			break;
	}
	switch (Function_429(&Param0))
	{
		case 0x00000002:
			if (bVar0 <= 9)
			{
				return 9;
			}
			break;
		
		case 0x00000003:
			if (bVar0 <= 11)
			{
				return 11;
			}
			break;
		
		case 0x00000004:
			if (bVar0 <= 10)
			{
				return 10;
			}
			break;
	}
	if (!Function_605(Param0.f_1304, 128) && !Function_605(Param0.f_1304, 1))
	{
		Function_323(&Param0);
	}
	if (Function_428(&Param0))
	{
		if (Function_427(&Param0))
		{
			Function_457(&Param0);
			Function_461(&Param0, 1);
		}
		if (Function_159(&Param0 + 1340, 5.0f))
		{
			Function_420(&Param0);
		}
		if (!Function_605(Param0.f_1304, 32768))
		{
			fVar6 = Function_419(0x3e800000);
			if (fVar6 < 0.0f)
			{
				Param0.f_1536 = (IntToFloat(FLOOR((0,09f * fVar6))) + 5.0f);
				if (Function_605(Param0.f_1304, 512))
				{
					HUD_TIMER_COUNTDOWN(Param0.f_1536);
					HUD_TIMER_DISPLAY(1);
					Function_469(&Param0 + 1324);
				}
				if (Function_613(&Param0) == 3)
				{
					Function_418(&Param0);
				}
				Function_610(&Param0 + 1304, 32768);
			}
		}
		if (Function_135(&Param0 + 1324, Param0.f_1536))
		{
			if (bVar0 <= 17)
			{
				HUD_TIMER_DISPLAY(0);
				bVar0 = 17;
			}
		}
		if (Function_613(&Param0) == 3)
		{
			if (!Function_605(Param0.f_1304, 0x20000000))
			{
				if (Function_417(&Param0))
				{
				}
			}
			else if (VDIST(Global_54078, *(&Param0 + 1504)) > 100.0f && !Function_605(Param0.f_1304, 0x40000000))
			{
				Function_416(&Param0);
			}
		}
	}
	iVar1 = Function_408(&Param0);
	if (bVar0 <= iVar1)
	{
		bVar0 = iVar1;
	}
	if (Function_605(Param0.f_1304, 8))
	{
		if (!IS_ACTOR_VALID(&Param0 + 1544) || IS_ACTOR_DEAD(&Param0 + 1544))
		{
			if (bVar0 <= 23)
			{
				bVar0 = 23;
			}
		}
		else
		{
			iVar1 = Function_406(&Param0);
			if (bVar0 <= iVar1)
			{
				bVar0 = iVar1;
			}
		}
	}
	if (Function_605(Param0.f_1304, 16))
	{
		if (!IS_ACTOR_VALID(&Param0 + 1560) || IS_ACTOR_DEAD(&Param0 + 1560))
		{
			if (bVar0 <= 22)
			{
				bVar0 = 22;
			}
		}
		else
		{
			iVar1 = Function_404(&Param0);
			if (bVar0 <= iVar1)
			{
				bVar0 = iVar1;
			}
		}
	}
	if (IS_OBJECTSET_VALID(&Param0 + 1576))
	{
		bVar5 = false;
		while (bVar5 < (GET_OBJECTSET_SIZE(&Param0 + 1576) - 1))
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, &Param0 + 1576));
			if (!IS_ACTOR_VALID(&uVar2) || !IS_ACTOR_ALIVE(&uVar2))
			{
				Function_610(&Param0 + 1304, 0x8000000);
				Function_403(&uVar2);
				Function_129(&Param0);
				if (bVar0 <= 21)
				{
					bVar0 = 21;
				}
			}
			else if (Function_333(&uVar2, &uVar8, &uVar7, 0, 0, 0x40400000))
			{
				if (bVar0 <= 20)
				{
					bVar0 = 20;
				}
			}
			bVar5++;
		}
		DESTROY_OBJECTSET(&Param0 + 1576);
	}
	if (Function_604(Param0.f_1492))
	{
		if (!Function_605(Param0.f_1304, 65536))
		{
			if (IS_ACTOR_IN_VOLUME(&Param0 + 1408, &Global_44085[Param0.f_14929] + 8))
			{
				Function_402(&Param0, 0);
				Function_397(&Param0);
				Function_610(&Param0 + 1304, 65536);
			}
		}
	}
	if (IS_VOLUME_VALID(&Param0 + 1496))
	{
		if (IS_OBJECT_VALID(&Param0 + 1528))
		{
			bVar9 = false;
			if (Function_605(Param0.f_1304, 4))
			{
				bVar9 = GATEWAY_UPDATE(&Param0 + 1528);
			}
			else
			{
				bVar9 = Function_396(&Param0 + 1528, 0, 1, 0, 0, 0);
			}
			if (bVar9 == 1)
			{
				if (Function_613(&Param0) == 3)
				{
					Function_125(&Param0);
				}
				if (bVar0 <= 8)
				{
					if (&bParam1)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
					}
					bVar0 = 8;
				}
			}
			else if (VDIST(Global_54078, *(&Param0 + 1504)) > (Param0.f_1540 + 175.0f))
			{
				Function_469(&Param0 + 1388);
				Param0.f_1404 = 0;
			}
			else if (Function_135(&Param0 + 1388, 7.0f))
			{
				if (Param0.f_1404 > 2)
				{
					Function_266(&Param0, 3);
					return 13;
				}
				Function_322(&Param0, 1);
				Function_321(&Param0, "pm_esc_wdir", 1);
				Function_469(&Param0 + 1388);
				Param0.f_1404++;
			}
		}
	}
	if (Function_395(&Param0) && IS_ACTOR_VALID(&Param0 + 1408))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&Param0 + 1544), &Var3);
		Function_394(StackVal, &Param0, Var3);
	}
	if (Function_605(Param0.f_1304, 256))
	{
		iVar1 = Function_342(&Param0, &bParam1);
		if (bVar0 <= iVar1)
		{
			bVar0 = iVar1;
		}
	}
	if (bVar0 > 10)
	{
		if (Function_605(Param0.f_1304, 512))
		{
			HUD_TIMER_DISPLAY(0);
		}
		if (Function_613(&Param0) == 3)
		{
			Function_125(&Param0);
		}
	}
	if (Function_428(&Param0))
	{
		Function_448(&Param0, 0, 1);
	}
	else
	{
		Function_338(StackVal, &Param0, Global_54078, 1, 0x41c80000, 0x42c80000);
	}
	return bVar0;
}

var Function_338(struct<1049> Param0) //Position: 0x11C8E / 72846
{
	var uVar0;
	
	Function_341(&Param0);
	Function_339(&Param0);
	Function_448(&Param0, &iParam3, 0);
	if (IS_OBJECT_VALID(&Param0))
	{
		Function_588(&Param0);
		uVar0 = Function_588(&Param0);
		if (!IS_BLIP_VALID(&Param0 + 48))
		{
			if (WOULD_ACTOR_BE_VISIBLE(false, &uVar0, 3212836864) || VDIST(Param1, *(&Param0 + 8)) > &fParam4)
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
	if (!Function_605(Param0.f_1048, 4096))
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
		Function_13(&Param0, 1);
	}
	return Param0.f_40;
}

void Function_339(bool bParam0) //Position: 0x11DDF / 73183
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	struct<2> Var6;
	var uVar8;
	bool bVar9;
	
	if (SQUAD_IS_VALID(&bParam0 + 1024) && Function_135(&bParam0 + 1032, 7.0f))
	{
		Function_542(&bParam0);
		Var0 = Function_542(&bParam0);
		if (Function_586(StackVal, Var0))
		{
			bVar9 = false;
			while (bVar9 < (SQUAD_GET_SIZE(&bParam0 + 1024) - 1))
			{
				uVar8 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0 + 1024, bVar9);
				Var6 = Vector(0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 6.0f));
				ROTATE_VECTOR_XZ(&Var6, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
				uVar2 = Vector(StackVal, StackVal, StackVal) + Vector(Var6, Var0, StackVal);
				FIND_GROUND_INTERSECTION(&uVar2, 100.0f, &uVar2, &uVar4);
				TASK_BIRD_LAND_AT_COORD(&uVar8, &uVar2);
				bVar9++;
			}
			Function_340(&bParam0 + 1024, 1);
			Function_469(&bParam0 + 1032);
		}
		else
		{
			Function_13(&bParam0, 1);
		}
	}
	return;
}

void Function_340(var uParam0, bool bParam1) //Position: 0x11E97 / 73367
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

void Function_341(int iParam0) //Position: 0x11ED8 / 73432
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

int Function_342(struct<2069> Param0) //Position: 0x11EE4 / 73444
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!Function_605(Param0.f_1304, 0x1000000) && IS_SCRIPT_VALID(&Param0 + 1624))
	{
		Function_393(&Param0 + 1632);
		if (SQUAD_IS_VALID(&Param0 + 1632 + 80))
		{
			Function_391(&Param0, GET_ACTOR_FACTION(Function_392(&Param0 + 1632 + 80)));
			if (&bParam1)
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			}
			Function_610(&Param0 + 1304, 0x1000000);
		}
	}
	else if (Function_605(Param0.f_1304, 0x1000000) && !IS_SCRIPT_VALID(&Param0 + 1624))
	{
		if (!Function_605(Param0.f_1304, 262144) || Param0.f_2068 < 0)
		{
			Function_469(&Param0 + 2024);
			Function_390(&Param0);
			Function_388(&Param0);
			Function_370(&Param0);
			Function_609(&Param0 + 1304, 0x1000000);
			Function_609(&Param0 + 1304, 131072);
		}
		if (&bParam1)
		{
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
		}
		Function_609(&Param0 + 1304, 0x1000000);
	}
	if (Function_605(Param0.f_1304, 1048576))
	{
		if (!Function_605(Param0.f_1304, 2097152))
		{
			Function_469(&Param0 + 2024);
			Function_390(&Param0);
			Function_388(&Param0);
			Function_370(&Param0);
			Function_610(&Param0 + 1304, 2097152);
		}
		if (Global_43790 != 3 || Global_43790 != 4)
		{
			if (Function_605(Param0.f_1304, 0x1000000))
			{
				Function_397(&Param0);
				Param0.f_2068++;
			}
			Function_609(&Param0 + 1304, 1048576);
		}
	}
	else if (!(Global_43790 != 3 || Global_43790 != 4))
	{
		Function_610(&Param0 + 1304, 1048576);
	}
	if ((((Function_135(&Param0 + 2024, Param0.f_2040) && Function_605(Param0.f_1304, 1048576)) && !Function_605(Param0.f_1304, 0x1000000)) && !IS_SCRIPT_VALID(&Param0 + 1624)) && Param0.f_2068 < 0)
	{
		if (Function_368(StackVal, &Global_54076, *(&Param0 + 1464)) < 150.0f || Function_605(Param0.f_1304, 8388608))
		{
			Function_366(&Param0);
			if (Function_354(&Param0 + 1632))
			{
				if (!Function_605(Param0.f_1304, 131072))
				{
					if (Function_605(Param0.f_1304, 2048))
					{
						Function_353(&Param0 + 1632, 1);
						iVar1 = 0;
						while (iVar1 < 5)
						{
							if (Function_352((*&Param0 + 1968)[iVar1]) && !(*&Param0 + 1968)[iVar1] != 0)
							{
								Function_348(&Param0 + 1632, (*&Param0 + 1968)[iVar1]);
							}
							iVar1++;
						}
					}
					else
					{
						Function_345(&Param0 + 1632, 8);
					}
					Function_610(&Param0 + 1304, 131072);
				}
				*(&Param0 + 1624) = Function_343(&Param0 + 1632);
				if (IS_SCRIPT_VALID(&Param0 + 1624))
				{
					if (iVar0 <= 2)
					{
						if (Function_605(Param0.f_1304, 262144))
						{
							Param0.f_2068 = (Param0.f_2068 - 1);
							if (Param0.f_2068 < 0)
							{
								Function_160(&Param0 + 2024);
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
				Param0.f_2040 = (Param0.f_2040 + 1.0f);
			}
		}
	}
	return iVar0;
}

var Function_343(struct<273> Param0) //Position: 0x12239 / 74297
{
	int iVar0;
	
	if (!Param0.f_272 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_344(&Param0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", &Param0, 84, 0);
	return &iVar0;
}

void Function_344(struct<201> Param0) //Position: 0x122C3 / 74435
{
	int iVar0;
	int iVar1;
	
	if (Function_605(Param0.f_128, 64))
	{
		iVar1 = 0;
		while (iVar1 <= Param0.f_144)
		{
			if (!(*&Param0 + 144)[iVar1] != 0 && Function_352((*&Param0 + 144)[iVar1]))
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

int Function_345(struct<273> Param0) //Position: 0x12322 / 74530
{
	bool bVar0;
	bool bVar1;
	
	if (Param0.f_272 == 0)
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
		Function_348(&Param0, bVar0);
	}
	PRINTSTRING("Number of actorenums: ");
	PRINTINT(bVar1);
	PRINTNL();
	return 1;
}

bool Function_346(int iParam0, int iParam1) //Position: 0x123EF / 74735
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_347(&(Global_46972[0]), iParam1);
			break;
		
		case 0x00000002:
			return Function_347(&(Global_46972[1]), iParam1);
			break;
		
		case 0x00000004:
			return Function_347(&(Global_46972[2]), iParam1);
			break;
		
		case 0x00000008:
			return Function_347(&(Global_46972[3]), iParam1);
			break;
		
		case 0x00000010:
			return Function_347(&(Global_46972[4]), iParam1);
			break;
		
		case 0x00000020:
			return Function_347(&(Global_46972[5]), iParam1);
			break;
		
		case 0x00000040:
			return Function_347(&(Global_46972[6]), iParam1);
			break;
		
		case 0x00000080:
			return Function_347(&(Global_46972[7]), iParam1);
			break;
		
		case 0x00000100:
			return Function_347(&(Global_46972[8]), iParam1);
			break;
		
		case 0x00000200:
			return Function_347(&(Global_46972[9]), iParam1);
			break;
		
		case 0x00000400:
			return Function_347(&(Global_46972[10]), iParam1);
			break;
		
		case 0x00000800:
			return Function_347(&(Global_46972[11]), iParam1);
			break;
		
		case 0x00001000:
			return Function_347(&(Global_46972[12]), iParam1);
			break;
		
		case 0x00002000:
			return Function_347(&(Global_46972[13]), iParam1);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return 4294967295;
}

int Function_347(var uParam0, int iParam1) //Position: 0x1257C / 75132
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
	if (!Function_352(bVar1))
	{
		LOG_ERROR("Did an index on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	return bVar0;
}

int Function_348(struct<273> Param0) //Position: 0x1262C / 75308
{
	int iVar0;
	
	if (Param0.f_272 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_352(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_350(&Param0, 0);
	iVar0 = 0;
	while (iVar0 <= Param0.f_144)
	{
		if ((*&Param0 + 144)[iVar0] != 0 || !Function_352((*&Param0 + 144)[iVar0]))
		{
			(*&Param0 + 144)[iVar0] = bParam1;
			iVar0 = Param0.f_144;
		}
		iVar0++;
	}
	Function_349(&Param0, 0);
	return 1;
}

int Function_349(struct<329> Param0) //Position: 0x12703 / 75523
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_94(&Param0);
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
				if (Function_352((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
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

int Function_350(struct<329> Param0) //Position: 0x12977 / 76151
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_351(&Param0);
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_94(&Param0);
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
				if (Function_352((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
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

void Function_351(int iParam0) //Position: 0x12BE1 / 76769
{
	char* cVar0[16];
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		strcpy(&cVar0, "catkslay", 16);
		memcpy(&cVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(&cVar0), 4);
		iParam0 = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

bool Function_352(bool bParam0) //Position: 0x12C51 / 76881
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_353(int iParam0, bool bParam1) //Position: 0x12C68 / 76904
{
	if (bParam1)
	{
		Function_610(&iParam0 + 128, 64);
	}
	else
	{
		Function_609(&iParam0 + 128, 64);
	}
	return;
}

bool Function_354(struct<325> Param0) //Position: 0x12C8A / 76938
{
	int iVar0;
	struct<2> Var1;
	struct<8> Var3;
	struct<6> Var11;
	
	Function_351(&Param0);
	if (Param0.f_320 == 0)
	{
		Param0.f_320 = 3;
		DECOR_SET_BOOL(&Param0, "catk_bus", Param0.f_324);
	}
	if (Function_586(StackVal, *(&Param0 + 284)))
	{
		if (Function_586(StackVal, *(&Param0 + 296)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_365(StackVal, &Param0, Global_54078);
			}
			else
			{
				return 0;
			}
		}
		Function_365(StackVal, &Param0, *(&Param0 + 296));
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
		Function_364(&Var3, 4294967295, 5.0f, 1, 4294967295);
		Function_363(StackVal, &Var11, 0, *(&Param0 + 296), 0.0f, Param0.f_36, Param0.f_40, Param0.f_44, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			Var1 = Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			if (!Function_586(StackVal, Var1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_586(StackVal, Var1))
		{
			*(&Param0 + 284) = *(&Param0 + 296);
			return 0;
		}
		*(&Param0 + 284) = Var1;
	}
	Function_344(&Param0);
	Param0.f_272 = 1;
	if (!Function_355(&Param0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_349(&Param0, 0);
	return 1;
}

bool Function_355(int iParam0) //Position: 0x12E2D / 77357
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0 + 8))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ncatk_dobj"), 4);
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

struct<8> Function_356(struct<45> Param0) //Position: 0x12FB4 / 77748
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
	else if (!Function_586(StackVal, *(&Param0 + 8)))
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
	Function_362(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_360();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_359(Param0.f_24);
	Function_358(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_357(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
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
	Function_65();
	return StackVal, Function_65();
}

void Function_357(struct<33> Param0) //Position: 0x130E7 / 78055
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

void Function_358(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x13213 / 78355
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

void Function_359(bool bParam0) //Position: 0x13264 / 78436
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

void Function_360() //Position: 0x13317 / 78615
{
	float fVar0;
	bool bVar1;
	
	Function_361(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_361(float fParam0, int iParam1) //Position: 0x1332B / 78635
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

void Function_362(bool bParam0) //Position: 0x133BC / 78780
{
	if (&bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &bParam0), &bParam0);
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

void Function_363(struct<45> Param0) //Position: 0x13403 / 78851
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

void Function_364(struct<21> Param0) //Position: 0x13449 / 78921
{
	Param0 = iParam1;
	Param0.f_4 = fParam2;
	Param0.f_8 = iParam3;
	Param0.f_16 = iParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

int Function_365(struct<273> Param0) //Position: 0x13478 / 78968
{
	int iVar0;
	
	iVar0 = Function_94(&Param0);
	if (Function_586(StackVal, Param1))
	{
		return 0;
	}
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_350(&Param0, &iVar0);
	}
	*(&Param0 + 296) = Param1;
	*(&Param0 + 284) = Vector(0.0f, 0.0f, 0.0f);
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_349(&Param0, &iVar0);
	}
	return 1;
}

void Function_366(struct<2053> Param0) //Position: 0x134E2 / 79074
{
	struct<2> Var0;
	var uVar2;
	
	if (Param0.f_2052 == 1)
	{
		uVar2 = Vector(RAND_FLOAT_RANGE(-5.0f, 5.0f), 0.0f, RAND_FLOAT_RANGE(45.0f, 55.0f));
	}
	else if (Function_367())
	{
		uVar2 = Vector(RAND_FLOAT_RANGE(-2,5f, 0.0f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f));
	}
	else
	{
		uVar2 = Vector(RAND_FLOAT_RANGE(0.0f, 2,5f), 0.0f, RAND_FLOAT_RANGE(-110.0f, -90.0f));
	}
	GET_ACTOR_OFFSET_WORLD_COORDS(&Param0 + 1408, &uVar2, &Var0);
	Function_365(StackVal, &Param0 + 1632, Var0);
	return;
}

bool Function_367() //Position: 0x1356C / 79212
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

float Function_368(var uParam0, struct<2> Param1) //Position: 0x1357F / 79231
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_369(&uParam0);
		Var0 = Function_369(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_369(int iParam0) //Position: 0x135F6 / 79350
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

void Function_370(struct<2057> Param0) //Position: 0x13662 / 79458
{
	Function_387(&Param0 + 1632, 3);
	Function_386(&Param0 + 1632, 2);
	Function_385(&Param0 + 1632, 1);
	Function_384(&Param0 + 1632, Param0.f_2056);
	Function_383(&Param0 + 1632, 1);
	Function_382(&Param0 + 1632, 0,5f, 15.0f, 3,5f);
	Function_381(&Param0 + 1632, 1);
	Function_380(&Param0 + 1632, 1);
	Function_379(&Param0 + 1632, 1);
	Function_378(&Param0 + 1632, 1, 4294967295);
	Function_377(&Param0 + 1632, 1);
	Function_376(&Param0 + 1632, 1, 976, 0);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_371(&Param0 + 1632, &Global_54076);
	}
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		Function_371(&Param0 + 1632, &Param0 + 1544);
	}
	if (IS_ACTOR_VALID(&Param0 + 1560))
	{
		Function_371(&Param0 + 1632, &Param0 + 1560);
	}
	return;
}

int Function_371(var uParam0, var uParam1) //Position: 0x13751 / 79697
{
	return Function_372(&uParam0, &uParam1);
}

int Function_372(struct<129> Param0) //Position: 0x13760 / 79712
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	Function_375(&Param0);
	if (!IS_ACTOR_IN_ACTORSET(&Param0 + 64, &iParam1))
	{
		DECOR_SET_BOOL(&iParam1, "catk_external", 1);
		ADD_ACTORSET_MEMBER(&Param0 + 64, &iParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(&iParam1));
		PRINTNL();
		if (!Function_605(Param0.f_128, 1024))
		{
			Function_373(&Param0, &iParam1);
		}
	}
	return 1;
}

void Function_373(int iParam0, var uParam1) //Position: 0x137EB / 79851
{
	var uVar0;
	int iVar4;
	bool bVar5;
	var uVar6;
	
	Function_374(&iParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("catkavol"), 4);
	iVar4 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, &uVar0, 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
	if (IS_VOLUME_VALID(&iVar4))
	{
		if (SQUAD_IS_VALID(&iParam0 + 80))
		{
			ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&iVar4), GET_OBJECT_FROM_ACTOR(&uParam1), Function_130(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

int Function_374(int iParam0) //Position: 0x138D0 / 80080
{
	var uVar0;
	
	Function_351(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 136))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("navoidVols"), 4);
		*(&iParam0 + 136) = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, &iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(&iParam0 + 136))
		{
			return 0;
		}
	}
	return 1;
}

int Function_375(int iParam0) //Position: 0x13920 / 80160
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(&iParam0 + 64))
	{
		Function_351(&iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ntargetSet"), 4);
		*(&iParam0 + 64) = CREATE_ACTORSET_IN_LAYOUT(&iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(&iParam0 + 64))
		{
			return 0;
		}
	}
	return 1;
}

int Function_376(struct<121> Param0) //Position: 0x1396E / 80238
{
	if (iParam1 == 1)
	{
		Function_610(&Param0 + 128, 1);
	}
	else
	{
		Function_609(&Param0 + 128, 1);
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

void Function_377(int iParam0, int iParam1) //Position: 0x139BD / 80317
{
	if (iParam1 == 1)
	{
		Function_610(&iParam0 + 128, 8);
	}
	else
	{
		Function_609(&iParam0 + 128, 8);
	}
	return;
}

void Function_378(struct<125> Param0) //Position: 0x139E0 / 80352
{
	if (iParam1 == 1)
	{
		Function_610(&Param0 + 128, 4);
	}
	else
	{
		Function_609(&Param0 + 128, 4);
	}
	Param0.f_124 = &iParam2;
	Function_610(&Param0 + 128, 128);
	return;
}

void Function_379(int iParam0, int iParam1) //Position: 0x13A13 / 80403
{
	if (&iParam1 == 0)
	{
		Function_610(&iParam0 + 128, 4096);
	}
	else
	{
		Function_609(&iParam0 + 128, 4096);
	}
	return;
}

void Function_380(int iParam0, int iParam1) //Position: 0x13A39 / 80441
{
	if (&iParam1 == 0)
	{
		Function_610(&iParam0 + 128, 2048);
	}
	else
	{
		Function_609(&iParam0 + 128, 2048);
	}
	return;
}

int Function_381(int iParam0, int iParam1) //Position: 0x13A5F / 80479
{
	if (iParam1 == 1)
	{
		Function_610(&iParam0 + 128, 512);
	}
	else
	{
		Function_609(&iParam0 + 128, 512);
	}
	return 1;
}

void Function_382(struct<45> Param0) //Position: 0x13A85 / 80517
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	Param0.f_36 = fParam1;
	Param0.f_40 = fParam2;
	Param0.f_44 = &fParam3;
}

void Function_383(int iParam0, int iParam1) //Position: 0x13AF2 / 80626
{
	if (&iParam1 == 0)
	{
		Function_610(&iParam0 + 128, 8192);
	}
	else
	{
		Function_609(&iParam0 + 128, 8192);
	}
	return;
}

int Function_384(struct<53> Param0) //Position: 0x13B18 / 80664
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	Param0.f_52 = iParam1;
	return 1;
}

void Function_385(int iParam0, int iParam1) //Position: 0x13B34 / 80692
{
	if (iParam1 == 1)
	{
		Function_610(&iParam0 + 128, 256);
	}
	else
	{
		Function_609(&iParam0 + 128, 256);
	}
	return;
}

int Function_386(struct<61> Param0) //Position: 0x13B59 / 80729
{
	if (iParam1 >= 4294967295 || iParam1 <= 5)
	{
		return 0;
	}
	Param0.f_60 = iParam1;
	return 1;
}

int Function_387(struct<325> Param0) //Position: 0x13B75 / 80757
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	Param0.f_320 = iParam1;
	Param0.f_324 = 1;
	return 1;
}

void Function_388(struct<2065> Param0) //Position: 0x13B99 / 80793
{
	if (Function_605(Param0.f_1304, 524288) && (Param0.f_2060 < 0 && Param0.f_2064 < 1))
	{
		Function_389(&Param0, RAND_INT_RANGE(Param0.f_2060, Param0.f_2064));
	}
	else
	{
		Function_389(&Param0, 1);
	}
	return;
}

void Function_389(struct<2057> Param0) //Position: 0x13BE0 / 80864
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	Param0.f_2056 = iParam1;
	return;
}

void Function_390(struct<2049> Param0) //Position: 0x13BF7 / 80887
{
	if (Param0.f_2044 >= Param0.f_2048)
	{
		Param0.f_2040 = RAND_FLOAT_RANGE(Param0.f_2044, Param0.f_2048);
		Param0.f_2044 = (Param0.f_2044 + 6.0f);
		Param0.f_2048 = (Param0.f_2048 + 6.0f);
	}
	else
	{
		Param0.f_2040 = 0.0f;
	}
	return;
}

void Function_391(struct<921> Param0) //Position: 0x13C48 / 80968
{
	Param0.f_920 = iParam1;
	return;
}

var Function_392(var uParam0) //Position: 0x13C56 / 80982
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

void Function_393(int iParam0) //Position: 0x13CA3 / 81059
{
	if (IS_OBJECT_VALID(Function_94(&iParam0)))
	{
		Function_350(&iParam0, 0);
		Function_349(&iParam0, 0);
	}
	return;
}

void Function_394(int iParam0, struct<2> Param1) //Position: 0x13CC5 / 81093
{
	(&iParam0 + 8) = Param1;
	return;
}

int Function_395(struct<1305> Param0) //Position: 0x13CD5 / 81109
{
	if (Function_605(Param0.f_1304, 128))
	{
		return 1;
	}
	return 0;
}

bool Function_396(float fParam0, float fParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x13CEF / 81135
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&fParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&fParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&fParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&fParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&fParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&fParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &fParam1, &fParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_162(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_163(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				iVar2 = TASK_SEQUENCE_OPEN();
				if (Function_163(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_148(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_148(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, iVar2);
				TASK_SEQUENCE_RELEASE(iVar2, 1);
				DECOR_SET_FLOAT(&fParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void Function_397(int iParam0) //Position: 0x13F24 / 81700
{
	Function_400(&iParam0 + 1632);
	Function_398(&iParam0 + 1632, &Global_54076);
	return;
}

void Function_398(int iParam0, int iParam1) //Position: 0x13F40 / 81728
{
	if (SQUAD_IS_VALID(&iParam0 + 80))
	{
		Function_399(&iParam0 + 80, 2, GET_OBJECT_FROM_ACTOR(&iParam1), 4, 1);
	}
	return;
}

int Function_399(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x13F68 / 81768
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
				Function_99(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(&uParam0);
		return 1;
	}
	return 0;
}

void Function_400(int iParam0) //Position: 0x13FCB / 81867
{
	Function_401(&iParam0);
	return;
}

void Function_401(int iParam0) //Position: 0x13FD7 / 81879
{
	if (IS_ACTORSET_VALID(&iParam0 + 64))
	{
		DISBAND_ACTORSET(&iParam0 + 64);
	}
	return;
}

void Function_402(int iParam0, int iParam1) //Position: 0x13FF3 / 81907
{
	if (iParam1 == 1)
	{
		Function_610(&iParam0 + 1304, 256);
	}
	else
	{
		Function_609(&iParam0 + 1304, 256);
	}
	return;
}

var Function_403(int iParam0) //Position: 0x1401C / 81948
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "transNecType");
}

int Function_404(struct<1305> Param0) //Position: 0x1403A / 81978
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	if (!Function_605(Param0.f_1304, 16))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Param0 + 1560))
	{
		return 0;
	}
	Function_71(&Param0 + 1560, &Var2);
	iVar1 = Function_405(&Param0 + 1560);
	switch (iVar1)
	{
		case 0x00000000:
			Function_128(&Param0 + 1560, 5);
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
			if (VDIST(Global_54078, Var2) < 350.0f)
			{
				if (iVar0 <= 14)
				{
					iVar0 = 14;
				}
			}
			switch (Param0.f_1096)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					if (!IS_ACTOR_RIDING_VEHICLE(&Param0 + 1560) || !IS_ACTOR_ALIVE(&Param0 + 1560))
					{
						KILL_ACTOR(&Param0 + 1560);
						Function_128(&Param0 + 1560, 7);
					}
					break;
				
				case 0x00000002:
					if (IS_ACTOR_VALID(&Param0 + 1560))
					{
						if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&Param0 + 1560)))
						{
							KILL_ACTOR(&Param0 + 1560);
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
			KILL_ACTOR(&Param0 + 1560);
			break;
		
		case 0x00000007:
			break;
	}
	return iVar0;
}

var Function_405(int iParam0) //Position: 0x14189 / 82313
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "translib_state");
}

int Function_406(struct<1305> Param0) //Position: 0x141A9 / 82345
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	iVar1 = 0;
	if (!Function_605(Param0.f_1304, 8))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Param0 + 1544))
	{
		return 0;
	}
	iVar0 = Function_405(&Param0 + 1544);
	GET_POSITION(&Param0 + 1544, &Var2);
	GET_ACTOR_VELOCITY(&Param0 + 1408, &Var4);
	if (Function_605(Param0.f_1304, 128) == 1)
	{
		if (!GET_VEHICLE(&Param0 + 1544) != &Param0 + 1408)
		{
			if (VDIST(Global_54078, Var2) < 100.0f)
			{
				if (iVar1 <= 15)
				{
					iVar1 = 15;
				}
			}
			if (!Function_605(Param0.f_1304, 2))
			{
				if (Function_605(Param0.f_1304, 0x2000000))
				{
					if (VDIST(Global_54078, Var2) > 25.0f)
					{
						Function_322(&Param0, 1);
						Function_321(&Param0, "pm_trn_wait", 1);
						Function_609(&Param0 + 1304, 0x2000000);
					}
				}
				else if (VDIST(Global_54078, Var2) < (25.0f * 2.0f))
				{
					Function_322(&Param0, 1);
					Function_321(&Param0, "pm_trn_retg", 1);
					Function_610(&Param0 + 1304, 0x2000000);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			SET_ACTOR_FACTION(&Param0 + 1544, 1);
			TASK_CLEAR(&Param0 + 1544);
			TASK_FACE_ACTOR(&Param0 + 1544, &Global_54076, 1, 3212836864);
			TASK_PRIORITY_SET(&Param0 + 1544, false);
			SET_ACTOR_FACE_STYLE(&Param0 + 1544, 0);
			Function_128(&Param0 + 1544, 1);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000004:
			SET_ACTOR_FACTION(&Param0 + 1544, GET_ACTOR_FACTION(&Global_54076));
			switch (Param0.f_1096)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					GIVE_WEAPON_TO_ACTOR(&Param0 + 1544, 42, 0f, 1, 1);
					break;
				
				case 0x00000002:
					break;
			}
			if (!IS_ACTOR_RIDING_VEHICLE(&Param0 + 1544))
			{
				Function_128(&Param0 + 1544, 2);
			}
			else
			{
				Function_128(&Param0 + 1544, 5);
			}
			break;
		
		case 0x00000002:
			TASK_CLEAR(&Param0 + 1544);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&Param0 + 1544, &Param0 + 1408, 1, 2, 0);
			TASK_PRIORITY_SET(&Param0 + 1544, true);
			Function_469(&Param0 + 1372);
			Function_128(&Param0 + 1544, 3);
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_VEHICLE(&Param0 + 1544))
			{
				Function_128(&Param0 + 1544, 4);
			}
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_RIDING_VEHICLE(&Param0 + 1544))
			{
				Function_128(&Param0 + 1544, 2);
			}
			if (VDIST(Global_54078, Var2) < 350.0f)
			{
				if (iVar1 <= 15)
				{
					iVar1 = 15;
				}
			}
			switch (Param0.f_1096)
			{
				case 0x00000003:
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(&Param0 + 1544, 14))
					{
						if (!ACTOR_HAS_WEAPON_IN_HAND(&Param0 + 1544, 14))
						{
							ACTOR_PUT_WEAPON_IN_HAND(&Param0 + 1544, 14, 1);
							TASK_CLEAR(&Param0 + 1544);
						}
					}
					break;
				
				case 0x00000002:
					if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
					{
						if (Function_135(&Param0 + 1356, 20.0f) && VMAG(Var4) > 9.0f)
						{
							if (iVar1 <= 3)
							{
								iVar1 = 3;
							}
							Function_469(&Param0 + 1356);
						}
					}
					break;
			}
			break;
		
		case 0x00000006:
			TASK_CLEAR(&Param0 + 1544);
			TASK_FLEE_ACTOR(&Param0 + 1544, &Global_54076, 50.0f, -1.0f, 0, 0, 0);
			Function_128(&Param0 + 1544, 7);
			break;
		
		case 0x00000007:
			if (IS_BLIP_VALID(Function_407(&Param0)))
			{
				SET_BLIP_BLINK(Function_407(&Param0), 0, 0, 5f);
			}
			break;
	}
	return iVar1;
}

var Function_407(int iParam0) //Position: 0x1455E / 83294
{
	return &iParam0 + 48;
}

int Function_408(struct<1489> Param0) //Position: 0x1456A / 83306
{
	int iVar0;
	struct<2> Var1;
	struct<5> Var3;
	var uVar9;
	float fVar10;
	struct<2> Var11;
	float fVar13;
	
	iVar0 = 0;
	if (!IS_ACTOR_VALID(&Param0 + 1408))
	{
		if (Param0.f_1096 != 1 && IS_ACTOR_VALID(&Param0 + 1560))
		{
			KILL_ACTOR(&Param0 + 1560);
		}
		if (iVar0 <= 18)
		{
			return 18;
		}
	}
	if (!Function_415(&Param0 + 1408, 0, 1, 4294967295))
	{
		if (Param0.f_1096 == 3)
		{
			Function_410(&Param0);
		}
		if (iVar0 <= 18)
		{
			iVar0 = 18;
		}
	}
	else if (Param0.f_1096 == 3)
	{
		if ((!IS_OBJECT_VALID(&Param0 + 1432[0]) || !IS_OBJECT_VALID(&Param0 + 1432[1])) || !IS_OBJECT_VALID(&Param0 + 1432[2]))
		{
			if (iVar0 <= 18)
			{
				iVar0 = 18;
			}
			Function_410(&Param0);
		}
	}
	if (GET_NUM_DRAFT_POSITIONS(&Param0 + 1408) < 0 && GET_NUM_DRAFTED_ACTORS(&Param0 + 1408) >= 0)
	{
		if (iVar0 <= 18)
		{
			iVar0 = 18;
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		Function_71(&Param0 + 1408, &Var1);
	}
	if (Param0.f_1096 == 3)
	{
		GET_ACTOR_VELOCITY(&Param0 + 1408, &Var3);
		if (StackVal >= -6.0f)
		{
			Function_410(&Param0);
		}
		if (Function_138(&Param0 + 1308))
		{
			if (Function_136(&Param0 + 1308) < 0,25f)
			{
				if (GET_LAST_HIT_TIME(&Global_54076) < (GET_CURRENT_GAME_TIME() - Function_136(&Param0 + 1308)))
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1408, false) == &Global_54076)
					{
						Param0.f_1488 = (Param0.f_1488 - (1.0f * 6.0f));
					}
				}
				FIND_GROUND_INTERSECTION(&Var1, 5.0f, &Var5, &uVar7);
				uVar9 = START_CURVE_QUERY(&Param0 + 1296, Var5, 8, 0.0f, 5.0f, 0,5f, 0);
				fVar10 = 0.0f;
				Var11 = Vector(0.0f, 0.0f, 0.0f);
				if (GET_NUM_CURVES_IN_CURVE_QUERY(&uVar9) >= 0)
				{
					fVar10 = 0,07f;
					if (GET_LAST_NEAREST_POINT(1, &Var11))
					{
						if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Var11, StackVal)) > 7,5f)
						{
							fVar10 = 0,035f;
						}
					}
				}
				else
				{
					fVar10 = 1.0f;
				}
				if (Global_6631)
				{
					fVar10 = (fVar10 * 0,75f);
				}
				DESTROY_OBJECT(&uVar9);
				if (GET_VEHICLE_BUMP_COUNT(&Param0 + 1408) >= 0)
				{
					Param0.f_1488 = (Param0.f_1488 - (IntToFloat(GET_VEHICLE_BUMP_COUNT(&Param0 + 1408)) * fVar10));
				}
				else if (GET_VEHICLE_BUMP_COUNT(&Param0 + 1408) == 0)
				{
					fVar13 = Function_163(&Param0 + 1408, 0);
					if (fVar13 >= 10.0f || (fVar13 >= (10.0f + 2,5f) && Global_6631))
					{
						if (fVar13 < (10.0f / 5.0f))
						{
							Param0.f_1488 = (Param0.f_1488 + 0,075f);
							if (Param0.f_1488 < 100.0f)
							{
								Param0.f_1488 = 100.0f;
							}
						}
					}
				}
				if (Param0.f_1488 >= 1.0f)
				{
					Function_410(&Param0);
					if (iVar0 <= 19)
					{
						iVar0 = 19;
					}
				}
				Function_469(&Param0 + 1308);
				RESET_VEHICLE_BUMP_COUNT(&Param0 + 1408);
			}
		}
		Function_409(&Param0);
	}
	if (Function_605(Param0.f_1304, 128))
	{
		if (IS_ACTOR_VALID(&Param0 + 1408))
		{
			Function_71(&Param0 + 1408, &Var1);
			if (VDIST(Global_54078, Var1) < 100.0f)
			{
				if (iVar0 <= 16)
				{
					iVar0 = 16;
				}
			}
			if (!Function_605(Param0.f_1304, 2))
			{
				if (Function_605(Param0.f_1304, 0x4000000))
				{
					if (VDIST(Global_54078, Var1) > 25.0f)
					{
						Function_322(&Param0, 1);
						Function_321(&Param0, "wagon_return", 1);
						Function_609(&Param0 + 1304, 0x4000000);
					}
				}
				else if (VDIST(Global_54078, Var1) < (25.0f * 2.0f))
				{
					Function_322(&Param0, 1);
					Function_321(&Param0, "pm_trn_retw", 1);
					Function_610(&Param0 + 1304, 0x4000000);
				}
			}
		}
	}
	else if (GET_PLAYER_ACTOR(0) == GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1408, false))
	{
		if (iVar0 <= 1)
		{
			Function_469(&Param0 + 2024);
			Function_469(&Param0 + 1356);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_409(struct<1489> Param0) //Position: 0x1495D / 84317
{
	if (Function_605(Param0.f_1304, 0x10000000))
	{
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_TEXT("WHATEVA_prog", "pm_trn_dynamite");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", Param0.f_1488);
	}
	return;
}

void Function_410(struct<1489> Param0) //Position: 0x149CF / 84431
{
	bool bVar0;
	float fVar1;
	var uVar3;
	struct<25> Var4;
	
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		if (GET_VEHICLE(GET_PLAYER_ACTOR(0)) == &Param0 + 1408)
		{
			Function_588(&Param0 + 1408);
			*(&Var4 + 12) = Function_588(&Param0 + 1408);
			Function_149(&Param0 + 1408);
			Var4 = Function_149(&Param0 + 1408);
			Var4.f_24 = 0;
			Function_412(&Param0 + 1296, 0, &Var4, GET_PLAYER_ACTOR(0), &Param0 + 1408, 1, 0, 0);
		}
	}
	Param0.f_1488 = 0.0f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&Param0 + 1408) - 1))
	{
		uVar3 = GET_DRAFT_ACTOR(bVar0, &Param0 + 1408);
		if (IS_ACTOR_VALID(&uVar3))
		{
			KILL_ACTOR(&uVar3);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < (GET_NUM_AVAILABLE_SEATS(&Param0 + 1408) - 1))
	{
		uVar3 = GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1408, bVar0);
		if (IS_ACTOR_VALID(&uVar3))
		{
			KILL_ACTOR(&uVar3);
		}
		bVar0++;
	}
	if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
	{
		Function_411(&Global_54078, "FireBottleExplosion", 0, 1);
	}
	GET_POSITION(&Param0 + 1408, &fVar1);
	Function_411(&fVar1, "DynamiteExplosion", 0, 1);
	bVar0 = false;
	while (bVar0 < 2)
	{
		if (IS_OBJECT_VALID(&Param0 + 1432[bVar0]))
		{
			DESTROY_OBJECT(&Param0 + 1432[bVar0]);
		}
		bVar0++;
	}
	return;
}

void Function_411(float fParam0, float fParam1, float fParam2, int iParam3) //Position: 0x14B34 / 84788
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &iParam3);
}

var Function_412(var uParam0, bool bParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, Vector3 vParam7) //Position: 0x14B54 / 84820
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_130(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "WagonCrash", 1, 1);
	}
	Function_413(&uVar0, &uParam2, &fParam3, &fParam4);
	if (vParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return &uVar0;
}

void Function_413(var uParam0, float fParam1, bool bParam2, var uParam3) //Position: 0x14BE1 / 84961
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_414(&uVar0, &fParam1, &bParam2, &uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_414(var uParam0, struct<25> Param1) //Position: 0x14C28 / 85032
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	Var0 = Vector(9,270768f, 7,965437f, 3,153887f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &uParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &fParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 1);
}

bool Function_415(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x14D25 / 85285
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&uParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_416(int iParam0) //Position: 0x14DF3 / 85491
{
	if (IS_ACTOR_VALID(&iParam0 + 1592))
	{
		TELEPORT_ACTOR(&iParam0 + 1592, &iParam0 + 1604, 1, 1, 1);
		TASK_STAND_STILL(&iParam0 + 1592, -1.0f, 0, 0);
		TASK_FACE_ACTOR(&iParam0 + 1592, &Global_54076, 1, 3212836864);
		TASK_PRIORITY_SET(&iParam0 + 1592, false);
		if (IS_MOVER_FROZEN(&iParam0 + 1592))
		{
			SET_MOVER_FROZEN(&iParam0 + 1592, 0);
		}
	}
	Function_610(&iParam0 + 1304, 0x40000000);
	return 1;
}

bool Function_417(struct<1617> Param0) //Position: 0x14E6C / 85612
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	int iVar12;
	
	iVar12 = 1;
	if (!IS_LAYOUTREF_VALID(&Param0 + 1296))
	{
		return 0;
	}
	if (Function_586(StackVal, *(&Param0 + 1504)))
	{
		return 0;
	}
	Var0 = *(&Param0 + 1504);
	if ((((((Param0.f_1492 != Global_46760[0] || Param0.f_1492 != Global_46914[0]) || Param0.f_1492 != Global_46816[0]) || Param0.f_1492 != Global_46816[1]) || Param0.f_1492 != Global_46866[0]) || Param0.f_1492 != Global_46850[0]) || Param0.f_1492 != Global_46926[1])
	{
		Var2 = Vector(-1.0f, -5.0f, 1.0f);
		if (Function_352(Param0.f_1600))
		{
			Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, *(&Param0 + 1504), StackVal);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transportContact") };
			Function_65();
			*(&Param0 + 1592) = CREATE_ACTOR_IN_LAYOUT(&Param0 + 1296, &Var4, Param0.f_1600, Var0, Function_65());
			Param0.f_1616 = 1;
		}
		else
		{
			return 0;
		}
		iVar12 = 0;
	}
	if (iVar12 == 1)
	{
		Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transportContact") };
		Var0 = (Var0 + 1.0f);
		if (Function_352(Param0.f_1600))
		{
			Function_65();
			*(&Param0 + 1592) = CREATE_ACTOR_IN_LAYOUT(&Param0 + 1296, &Var4, Param0.f_1600, Var0, Function_65());
			Param0.f_1616 = 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1592))
	{
		MEMORY_CONSIDER_AS(&Param0 + 1592, &Global_54076, 5);
		MEMORY_IDENTIFY(&Param0 + 1592, &Global_54076);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Param0 + 1592, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&Param0 + 1592, 0);
		if (iVar12 == 1)
		{
			TASK_CLEAR(&Param0 + 1592);
			TASK_FACE_ACTOR(&Param0 + 1592, &Global_54076, 1, 3212836864);
			TASK_STAND_STILL(&Param0 + 1592, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&Param0 + 1592, false);
			SET_ACTOR_FACE_STYLE(&Param0 + 1592, 0);
			RESET_ANIM_SET_FOR_ACTOR(&Param0 + 1592, 0);
			SET_ANIM_SET_FOR_ACTOR(&Param0 + 1592, "stand_ambient", 0);
			SET_ACTION_NODE_FOR_ACTOR(&Param0 + 1592, "stand_ambient/help_loop");
		}
		else
		{
			AI_IGNORE_ACTOR(&Param0 + 1592);
			SET_MOVER_FROZEN(&Param0 + 1592, 1);
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Param0 + 1592);
		if (IS_VOLUME_VALID(&Param0 + 1496))
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(&Param0 + 1592, &Param0 + 1496);
		}
	}
	Function_610(&Param0 + 1304, 0x20000000);
	return 1;
}

void Function_418(struct<1489> Param0) //Position: 0x150FA / 86266
{
	if (!Function_605(Param0.f_1304, 0x10000000))
	{
		HUD_ENABLE(1);
		UI_PUSH("Stagecoach_Job");
		UI_ENTER("WHATEVA");
		UI_ENTER("WHATEVA_prog");
		UI_SET_PROGRESS_BAR_VAL("WHATEVA_prog", Param0.f_1488);
		UI_SET_TEXT("WHATEVA", "pm_trn_dynamite");
		Function_610(&Param0 + 1304, 0x10000000);
	}
	return;
}

var Function_419(int iParam0) //Position: 0x1518E / 86414
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (StackVal == 3)
	{
		return -1.0f;
	}
	if (StackVal == 0)
	{
		return -2.0f;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		return -3.0f;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&Global_42834 + 16) - 1))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_42834 + 16);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar1 = (iVar1 + CURVE_CALCULATE_DISTANCE_BY_STEP_SIZE(GET_CURVE_FROM_OBJECT(&uVar2), 0.0f, 1.0f, &iParam0));
		}
		bVar0++;
	}
	return iVar1;
}

void Function_420(int iParam0) //Position: 0x1520F / 86543
{
	Function_421(&iParam0);
	return;
}

void Function_421(char* cParam0) //Position: 0x1521B / 86555
{
	Function_426(&cParam0);
	switch (cParam0.f_1096)
	{
		case 0x00000001:
			Function_422(&cParam0, "pm_trn_inlh", 0);
			break;
		
		case 0x00000003:
			Function_422(&cParam0, "pm_trn_indh", 0);
			break;
		
		case 0x00000002:
			Function_422(&cParam0, "pm_trn_insh", 0);
			break;
	}
	return;
}

int Function_422(struct<1093> Param0) //Position: 0x1528F / 86671
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
	if (Function_605(Param0.f_1048, 32))
	{
		if (!Function_86(Param0.f_1092))
		{
			return 0;
		}
	}
	uVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	uVar21 = Function_425(Function_25(Param0.f_1092), Function_73(Param0.f_1092));
	iVar22 = Function_423(Function_25(Param0.f_1092), Function_73(Param0.f_1092));
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

int Function_423(int iParam0, int iParam1) //Position: 0x15403 / 87043
{
	int iVar0;
	int iVar1;
	
	if (!Function_424(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_25(iVar1) != iParam0 && Function_73(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_21684[iVar17].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_424(int iParam0) //Position: 0x1544F / 87119
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_425(int iParam0, int iParam1) //Position: 0x15464 / 87140
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_25(iVar1) != iParam0 && Function_73(iVar1) != iParam1)
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

void Function_426(struct<909> Param0) //Position: 0x154B5 / 87221
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0.f_620 - 1))
	{
		strcpy(&Param0 + 620[iVar04], "", 16);
		(*&Param0 + 724)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_908 = 0;
	return;
}

bool Function_427(struct<1101> Param0) //Position: 0x154F5 / 87285
{
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		switch (Param0.f_1100)
		{
			case 0x00000001:
				if (IS_ACTOR_VALID(&Param0 + 1544))
				{
					if (GET_VEHICLE(&Param0 + 1544) == &Param0 + 1408)
					{
						if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
						{
							Param0.f_1100 = 0;
						}
						else
						{
							Param0.f_1100 = 2;
						}
						return 1;
					}
				}
				break;
			
			case 0x00000000:
				if (!GET_VEHICLE(&Global_54076) != &Param0 + 1408)
				{
					Param0.f_1100 = 2;
					return 1;
				}
				break;
			
			case 0x00000002:
				if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
				{
					Param0.f_1100 = 0;
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_428(struct<1049> Param0) //Position: 0x155AA / 87466
{
	if (Function_605(Param0.f_1048, 16))
	{
		return 1;
	}
	return 0;
}

int Function_429(struct<1089> Param0) //Position: 0x155C4 / 87492
{
	return Param0.f_1088;
}

int Function_430(struct<1085> Param0) //Position: 0x155D0 / 87504
{
	Param0.f_1084 = Function_431(&Param0);
	Function_341(&Param0);
	return Param0.f_1084;
}

var Function_431(int iParam0) //Position: 0x155EE / 87534
{
	int iVar0;
	var uVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_446(0))
	{
		uVar1[0] = "Pass";
		uVar1[1] = "Fail";
		uVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_432(&iParam0 + 1052, &uVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
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

var Function_432(struct<17> Param0) //Position: 0x15696 / 87702
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_445(&Var12, &Var0);
	uVar15 = Function_444(uParam1, &Var12);
	Function_443(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_442(&Param0, uVar15);
	Function_440(StackVal, &Param0, Var12.f_12);
	Function_438(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_437(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_434(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_433(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_433(int iParam0, int iParam1, int iParam2) //Position: 0x1578A / 87946
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

bool Function_434(struct<17> Param0) //Position: 0x157EA / 88042
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
				Function_436(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_436(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_433(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_435(Param1.f_64);
	}
	else
	{
		Function_435(Param1.f_64);
	}
	return 0;
}

void Function_435(bool bParam0) //Position: 0x1597D / 88445
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

void Function_436(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x159BB / 88507
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

var Function_437(int iParam0, struct<21> Param1) //Position: 0x15A71 / 88689
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_438(vector3 vParam0) //Position: 0x15A98 / 88728
{
	switch (Function_439())
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

int Function_439() //Position: 0x15B44 / 88900
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

void Function_440(vector3 vParam0) //Position: 0x15B80 / 88960
{
	switch (Function_441(&vParam0))
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

int Function_441(int iParam0) //Position: 0x15C29 / 89129
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_605(iParam0, 0x40000000))
		{
			Function_610(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_605(iParam0, 0x40000000))
		{
			Function_610(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_609(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_605(iParam0, 0x20000000))
		{
			Function_610(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_605(iParam0, 0x20000000))
		{
			Function_610(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_609(&iParam0, 0x20000000);
	return 0;
}

var Function_442(struct<21> Param0) //Position: 0x15D49 / 89417
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

void Function_443(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x15F03 / 89859
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

var Function_444(int iParam0, struct<13> Param1) //Position: 0x15F9F / 90015
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_445(struct<17> Param0) //Position: 0x15FBB / 90043
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

bool Function_446(int iParam0) //Position: 0x16015 / 90133
{
	if (!Function_447(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_447(int iParam0) //Position: 0x1602A / 90154
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

void Function_448(bool bParam0, int iParam1, int iParam2) //Position: 0x16051 / 90193
{
	if (&iParam2 == 1)
	{
		if (Function_456(&bParam0, &iParam1, &iParam2))
		{
			Function_454(&bParam0);
		}
		else if (Function_453(&bParam0, &iParam1))
		{
			Function_451(&bParam0);
		}
		if (Function_450(&bParam0, &iParam1, &iParam2))
		{
			Function_449(&bParam0);
		}
	}
	else if (Function_456(&bParam0, &iParam1, 0))
	{
		Function_454(&bParam0);
	}
	else if (Function_450(&bParam0, &iParam1, 0))
	{
		Function_449(&bParam0);
	}
	else if (Function_453(&bParam0, &iParam1))
	{
		Function_451(&bParam0);
	}
	return;
}

void Function_449(struct<909> Param0) //Position: 0x160E0 / 90336
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
			Function_309(&Param0 + 620[Param0.f_9084], 0x41200000, 1, 0, 2, 1, 0);
		}
		Param0.f_908++;
	}
	return;
}

bool Function_450(struct<909> Param0) //Position: 0x16188 / 90504
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_54078, *(&Param0 + 8));
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
	else if (Function_300() && &iParam2 != 0)
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

var Function_451(struct<1049> Param0) //Position: 0x1622F / 90671
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_605(Param0.f_1048, 8) && Param0.f_612 > 3)
	{
		if (VDIST(Global_54078, *(&Param0 + 8)) < VDIST(Global_54078, *(&Param0 + 20)) && IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
			{
				Function_452(&Param0 + 508[Param0.f_6124], 3.0f, 0, 2, 1, 0);
				Param0.f_612++;
				Function_469(&Param0 + 60);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(&Param0 + 400[Param0.f_5044]))
		{
			Function_452(&Param0 + 400[Param0.f_5044], 3.0f, 0, 2, 1, 0);
			Param0.f_504++;
			Param0.f_504 = (Param0.f_504 % 3);
			Function_469(&Param0 + 60);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_452(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1632C / 90924
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_29(Global_10966) };
		}
		PRINT_SMALL_B(&iParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&iParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

bool Function_453(bool bParam0, int iParam1) //Position: 0x163B1 / 91057
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
	else if (Function_300())
	{
		iVar0 = 0;
	}
	else if (Function_135(&bParam0 + 60, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_454(struct<181> Param0) //Position: 0x1645D / 91229
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
			Function_455(&Param0 + 76[Param0.f_1804], 8,5f, (*&Param0 + 216)[Param0.f_180], 2, 0, 0, 0, 0);
		}
		Param0.f_180++;
	}
	return;
}

void Function_455(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x16511 / 91409
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
			Var0 = { StackVal, StackVal, StackVal, Function_29(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_456(struct<181> Param0) //Position: 0x165A6 / 91558
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
	else if (Function_300() && &iParam2 != 0)
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

void Function_457(int iParam0) //Position: 0x16669 / 91753
{
	Function_458(&iParam0);
	return;
}

void Function_458(struct<1493> Param0) //Position: 0x16675 / 91765
{
	char* cVar0[32];
	
	if (!Function_605(Param0.f_1304, 2))
	{
		Function_322(&Param0, 1);
		if (Function_460(&Param0))
		{
			strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[Param0.f_14929] + 8)), 32);
			Param0.f_1100 = 0;
			switch (Param0.f_1096)
			{
				case 0x00000001:
					Function_321(&Param0, "pm_trn_inl", 1);
					Function_459(&Param0, &cVar0, 0);
					break;
				
				case 0x00000003:
					Function_321(&Param0, "pm_trn_inb", 1);
					Function_459(&Param0, &cVar0, 0);
					break;
				
				case 0x00000002:
					Function_321(&Param0, "pm_trn_ins", 1);
					Function_459(&Param0, &cVar0, 0);
					break;
				
				case 0x00000004:
					Function_321(&Param0, "pm_trn_ind", 1);
					Function_459(&Param0, &cVar0, 0);
					break;
			}
		}
		else if (!GET_VEHICLE(&Global_54076) != &Param0 + 1408)
		{
			Function_321(&Param0, "wagon_return", 1);
			Param0.f_1100 = 2;
		}
		else if (!GET_VEHICLE(&Param0 + 1544) != &Param0 + 1408)
		{
			Function_321(&Param0, "pm_trn_wait", 1);
			Param0.f_1100 = 1;
		}
	}
	return;
}

int Function_459(bool bParam0, char* cParam1) //Position: 0x167CD / 92109
{
	if (IS_STRING_VALID(&cParam1))
	{
		strcpy(&bParam0 + 248[06], &cParam1, 24);
		(*&bParam0 + 184)[0] = 1;
	}
	else
	{
		strcpy(&bParam0 + 248[06], "", 24);
		(*&bParam0 + 184)[0] = 0;
	}
	if (IS_STRING_VALID(&cParam2))
	{
		strcpy(&bParam0 + 248[16], &cParam2, 24);
		(*&bParam0 + 184)[1] = 1;
	}
	else
	{
		strcpy(&bParam0 + 248[16], "", 24);
		(*&bParam0 + 184)[1] = 0;
	}
	return 1;
}

bool Function_460(struct<1305> Param0) //Position: 0x16844 / 92228
{
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		if (Function_605(Param0.f_1304, 8))
		{
			if (IS_ACTOR_VALID(&Param0 + 1544))
			{
				if (GET_VEHICLE(&Param0 + 1544) != &Param0 + 1408 && GET_VEHICLE(&Global_54076) != &Param0 + 1408)
				{
					return 1;
				}
			}
		}
		if (GET_VEHICLE(&Global_54076) == &Param0 + 1408)
		{
			return 1;
		}
	}
	return 0;
}

void Function_461(bool bParam0, int iParam1) //Position: 0x168B0 / 92336
{
	Function_462(&bParam0, iParam1);
	return;
}

void Function_462(struct<1493> Param0) //Position: 0x168BE / 92350
{
	struct<2> Var0;
	var uVar2;
	struct<8> Var4;
	float fVar12;
	
	if (IS_BLIP_VALID(Function_407(&Param0)))
	{
		REMOVE_BLIP(Function_407(&Param0));
	}
	if (IS_ACTOR_VALID(&Param0 + 1408))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Param0 + 1408)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&Param0 + 1408));
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Param0 + 1544)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&Param0 + 1544));
		}
	}
	if (Function_428(&Param0))
	{
		Function_467();
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 1296))
	{
		if (IS_OBJECT_VALID(&Param0 + 1528))
		{
			Function_466(&Param0 + 1528);
		}
	}
	if (iParam1 == 1)
	{
		if (Function_460(&Param0))
		{
			if (IS_LAYOUTREF_VALID(&Param0 + 1296))
			{
				if (IS_VOLUME_VALID(&Param0 + 1496))
				{
					if (StackVal && !Function_586(Param0.f_1096 != 3, *(&Param0 + 1504)))
					{
						Var0 = *(&Param0 + 1504);
						if (Param0.f_1492 == Global_46850[0])
						{
							fVar12 = 9.0f;
						}
						else
						{
							fVar12 = 12.0f;
						}
					}
					else
					{
						GET_VOLUME_CENTER(&Param0 + 1496, &Var0);
						fVar12 = 6.0f;
					}
					FIND_GROUND_INTERSECTION(&Var0, 40.0f, &Var0, &uVar2);
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transGateway") };
					*(&Param0 + 1528) = Function_465(StackVal, StackVal, &Param0 + 1296, &Var4, Var0, Vector(0.0f, 0.0f, 0.0f), &Global_54076, fVar12, 1, 3, 330, 4, 1, -1.0f, -1.0f, 0);
					Function_463(StackVal, Var0, 0, 16, 1);
				}
			}
		}
		else if (!GET_VEHICLE(&Global_54076) != &Param0 + 1408)
		{
			ADD_BLIP_FOR_ACTOR(&Param0 + 1408, 325, 0, 2, 0);
		}
		else if (!GET_VEHICLE(&Param0 + 1544) != &Param0 + 1408)
		{
			ADD_BLIP_FOR_ACTOR(&Param0 + 1544, 325, 0, 2, 0);
		}
	}
	return;
}

void Function_463(struct<2> Param0, var uParam2, var uParam3, var uParam4) //Position: 0x16A88 / 92808
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
		Function_464(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &uParam4;
}

void Function_464(float fParam0) //Position: 0x16B49 / 93001
{
	float fVar0;
	
	if (!IS_OBJECTSET_VALID(&fParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&fParam0) >= 0)
	{
		fVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &fParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&fVar0, &fParam0);
		CLEAN_OBJECTSET(&fParam0);
		if (IS_OBJECT_VALID(&fVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&fVar0));
		}
	}
	return;
}

var Function_465(var uParam0, char* cParam1, float fParam9, int iParam10, var uParam11, var uParam12, float fParam13, float fParam14, int iParam15) //Position: 0x16B92 / 93074
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

void Function_466(var uParam0) //Position: 0x16C7D / 93309
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

void Function_467() //Position: 0x16D13 / 93459
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

int Function_468() //Position: 0x16D3E / 93502
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar2 = &Global_43578;
	if (IS_LAYOUTREF_VALID(&iVar2))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&iVar2);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 8);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "transDataObj");
		iVar0 = START_OBJECT_ITERATOR(&uVar1);
		if (!IS_OBJECT_VALID(&iVar0))
		{
			iVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Global_43578, "transDataObj", Vector(1.0f, 400.0f, 1.0f), Vector(0.0f, 0.0f, 0.0f));
			if (!IS_OBJECT_VALID(&iVar0))
			{
				LOG_ERROR("TRANSPORT_GetExternalObject - Could not create external object?");
			}
		}
		if (IS_ITERATOR_VALID(&uVar1))
		{
			DESTROY_ITERATOR(&uVar1);
		}
	}
	return &iVar0;
}

void Function_469(int iParam0) //Position: 0x16E16 / 93718
{
	Function_470(&iParam0, 0.0f);
	return;
}

void Function_470(vector3 vParam0) //Position: 0x16E23 / 93731
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_610(&vParam0, 1);
	Function_609(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_471(bool bParam0) //Position: 0x16E48 / 93768
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_474(&(Global_43791[bParam0]), 4096))
	{
		return;
	}
	Function_473(&(Global_43791[bParam0]), 4096);
	if (StackVal != 1)
	{
		Function_76(473, 1, 0, 0);
		iVar0 = Function_472(bParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_76(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_76(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_76(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[bParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_75(iVar2, iVar1);
	}
	else if (bParam0 == Global_46926[9])
	{
		Function_75(7, 30);
	}
	if (Function_53(473) <= Function_54(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

int Function_472(bool bParam0) //Position: 0x16F39 / 94009
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
			bVar0 = Global_44085[bParam09];
		}
		else
		{
			bVar0 = Global_44085[bParam09];
			bVar0 = Global_44085[bVar09];
		}
	}
	return bVar0;
}

void Function_473(var uParam0, int iParam1) //Position: 0x16F91 / 94097
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_474(var uParam0, int iParam1) //Position: 0x16FA2 / 94114
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_475(bool bParam0) //Position: 0x16FBF / 94143
{
	if (!Function_604(bParam0))
	{
		return 0;
	}
	return Function_474(&(Global_43791[bParam0]), 4096);
}

bool Function_476(struct<2049> Param0) //Position: 0x16FDD / 94173
{
	struct<2> Var0;
	bool bVar2;
	
	Function_331(&Param0);
	if (!Function_510(&Param0))
	{
		LOG_ERROR("TRANSPORT Invalid scene creation. Ending.");
		return 0;
	}
	Param0.f_1616 = 0;
	switch (Function_613(&Param0))
	{
		case 0x00000002:
			Function_402(&Param0, 0);
			break;
		
		case 0x00000003:
		case 0x00000001:
			switch (Param0.f_1104)
			{
				case 0x00000000:
					Function_509(&Param0, RAND_INT_RANGE(5, 5));
					Function_508(&Param0, 2, 3);
					Function_507(&Param0, 14.0f);
					Function_506(&Param0, 28.0f);
					break;
				
				case 0x00000001:
					Function_509(&Param0, RAND_INT_RANGE(8, 8));
					Function_508(&Param0, 3, 4);
					Function_507(&Param0, 12.0f);
					Function_506(&Param0, 24.0f);
					break;
				
				case 0x00000002:
					Function_509(&Param0, RAND_INT_RANGE(12, 12));
					Function_508(&Param0, 4, 6);
					Function_507(&Param0, 10.0f);
					Function_506(&Param0, 20.0f);
					break;
				
				default:
					Function_509(&Param0, RAND_INT_RANGE(8, 8));
					Function_508(&Param0, 3, 4);
					Function_507(&Param0, 12.0f);
					Function_506(&Param0, 24.0f);
					break;
			}
			Function_505(&Param0, &Global_54076);
			Function_504(&Param0, 30.0f, 60.0f, 0x41700000);
			Function_402(&Param0, 1);
			bVar2 = false;
			while (bVar2 < (GET_NUM_DRAFT_POSITIONS(&Param0 + 1408) - 1))
			{
				if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar2, &Param0 + 1408)))
				{
					Function_505(&Param0, GET_DRAFT_ACTOR(bVar2, &Param0 + 1408));
				}
				bVar2++;
			}
			break;
		
		default:
			Function_402(&Param0, 1);
			Function_505(&Param0, &Global_54076);
			break;
	}
	if (Function_613(&Param0) == 3)
	{
		*(&Param0 + 1432[0]) = DECOR_GET_OBJECT(&Param0 + 1408, "tranExplo0");
		*(&Param0 + 1432[1]) = DECOR_GET_OBJECT(&Param0 + 1408, "tranExplo1");
		*(&Param0 + 1432[2]) = DECOR_GET_OBJECT(&Param0 + 1408, "tranExplo2");
	}
	Function_542(&Param0);
	if (Function_586(StackVal, Function_542(&Param0)))
	{
		LOG_ERROR("Must set a start position using TRANSPORT_SET_STARTPOS");
		return 0;
	}
	if (Param0.f_1096 != 0 || Param0.f_1096 != 4294967295)
	{
		Param0.f_1096 = 4;
	}
	if (!IS_VOLUME_VALID(&Param0 + 1496))
	{
		LOG_ERROR("Use TRANSPORT_SET_DESTINATION_VOLUME/REGION before initializing");
	}
	if (Param0.f_1492 == 0)
	{
		Param0.f_1492 = 4294967294;
	}
	if (Param0.f_2044 != 0.0f && Param0.f_2048 != 0.0f)
	{
		Param0.f_2044 = 12.0f;
		Param0.f_2048 = 24.0f;
	}
	Function_609(&Param0 + 1304, 1048576);
	Function_609(&Param0 + 1304, 2097152);
	Function_609(&Param0 + 1304, 0x1000000);
	if (IS_ACTOR_VALID(&Param0 + 1544))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Param0 + 1544, 0,1f);
	}
	if (IS_ACTOR_VALID(&Param0 + 1560))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Param0 + 1560, 0,1f);
	}
	Function_499(&Param0, Function_500(0, 2, 2));
	Function_498(&Param0, 1);
	Function_391(&Param0, 13);
	Function_497(&Param0, 2);
	Function_588(&Param0 + 1408);
	Var0 = Function_588(&Param0 + 1408);
	Function_394(StackVal, &Param0, Var0);
	Function_479(StackVal, &Param0, &Param0 + 1544, 396, Var0, 1, 1, 0);
	Function_610(&Param0 + 1304, 64);
	Function_91(56);
	Function_477(4);
	return 1;
}

void Function_477(int iParam0) //Position: 0x173CA / 95178
{
	Function_478(&Global_43580, iParam0);
	return;
}

void Function_478(var uParam0, bool bParam1) //Position: 0x173D8 / 95192
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_479(struct<1093> Param0) //Position: 0x17400 / 95232
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_262(&Param0);
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0 = &uParam1;
		uVar8 = &uParam1;
	}
	Param0.f_56 = uParam2;
	if (!Function_586(StackVal, Param3))
	{
		*(&Param0 + 8) = Param3;
	}
	if (&iParam5 == 1)
	{
		Function_610(&Param0 + 1048, 4);
	}
	else
	{
		Function_609(&Param0 + 1048, 4);
	}
	if (&bParam6)
	{
		if (Function_24(Param0.f_1092))
		{
			Function_496(Param0.f_1092, 1);
			Function_610(&Param0 + 1048, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_610(&Param0 + 1048, 1024);
	Param0.f_1020 = &iParam7;
	if (&iParam7 >= 0)
	{
		if (!IS_OBJECT_VALID(&uVar8))
		{
			uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 32, &Var0, Param3, Vector(0.0f, 0.0f, 0.0f));
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("nbirdSquad") };
		*(&Param0 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 32, &Var0));
		if (SQUAD_IS_VALID(&Param0 + 1024))
		{
			Function_481(&Param0 + 32, &Param0 + 1024, &iParam7, &uVar8, 1129, 0x41200000);
			Function_480(&Param0 + 1024, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(&uVar8);
		}
		Function_469(&Param0 + 1032);
	}
	Function_469(&Param0 + 60);
	Function_132(0);
}

void Function_480(var uParam0, bool bParam1) //Position: 0x17577 / 95607
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

void Function_481(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x175BE / 95678
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	
	Function_494(10.0f);
	Var12 = { StackVal, Function_494(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_352(&bParam4) || &bParam4 != 0)
		{
			bVar14 = Function_484(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &bParam4;
		}
		iVar15 = 0;
		while (iVar15 < (iParam2 - 1))
		{
			Function_482(&Var12, iVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_482(&Var12, iVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			iVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

struct<8> Function_482(vector3 vParam0) //Position: 0x176B8 / 95928
{
	struct<2> Var0;
	
	if (!Function_483(&vParam0))
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

bool Function_483(int iParam0) //Position: 0x17805 / 96261
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

var Function_484(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x17829 / 96297
{
	return Function_485(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_485(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x17846 / 96326
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_488(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_488(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_488(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_488(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_488(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_488(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_488(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_488(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_488(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_488(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_488(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_488(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_488(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_488(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_486(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_486(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x17AA9 / 96937
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_487(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_487(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_487(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_487(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_487(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_487(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_487(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_487(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_487(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_487(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_487(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_487(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_487(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_487(&(Global_46972[13]), &bVar0);
	}
	return Function_488(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_487(var uParam0, bool bParam1) //Position: 0x17C18 / 97304
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

var Function_488(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x17CDC / 97500
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
		Function_493();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_352(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_492(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_492(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_491(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
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
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_352(bVar1))
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

void Function_489(int iParam0) //Position: 0x17FD5 / 98261
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

void Function_490() //Position: 0x18094 / 98452
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

bool Function_491(bool bParam0) //Position: 0x180CF / 98511
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

void Function_492(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x180FC / 98556
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

void Function_493() //Position: 0x18257 / 98903
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_490();
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
	Function_490();
	return;
}

struct<8> Function_494(int iParam0) //Position: 0x182A3 / 98979
{
	Function_495(iParam0, 10);
	return StackVal, Function_495(iParam0, 10);
}

struct<8> Function_495(var uParam0, int iParam1) //Position: 0x182B0 / 98992
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_496(int iParam0, int iParam1) //Position: 0x182CB / 99019
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
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_34(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_23(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_29(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_497(struct<917> Param0) //Position: 0x18372 / 99186
{
	Param0.f_916 = iParam1;
	return;
}

void Function_498(struct<913> Param0) //Position: 0x18380 / 99200
{
	Param0.f_912 = iParam1;
	return;
}

void Function_499(struct<1093> Param0) //Position: 0x1838E / 99214
{
	if (Function_24(iParam1))
	{
		Param0.f_1092 = iParam1;
		Function_610(&Param0 + 1048, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_500(bool bParam0, bool bParam1, bool bParam2) //Position: 0x183E5 / 99301
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_503(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_501(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_501(bParam0, bParam1, bParam2, 4294967295);
}

int Function_501(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x18443 / 99395
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
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_502(uVar0);
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

var Function_502(int iParam0) //Position: 0x185A7 / 99751
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

var Function_503(int iParam0, int iParam1, int iParam2) //Position: 0x185E5 / 99813
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_504(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x18605 / 99845
{
	Function_382(&iParam0 + 1632, uParam1, uParam2, &uParam3);
}

int Function_505(int iParam0, int iParam1) //Position: 0x1861D / 99869
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("TRANSPORT_ADD_ATTACK_TARGET - Attack data not initialized, tell Ben.");
		return 0;
	}
	return Function_371(&iParam0 + 1632, &iParam1);
}

void Function_506(struct<2049> Param0) //Position: 0x18685 / 99973
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	Param0.f_2048 = fParam1;
	return;
}

void Function_507(struct<2045> Param0) //Position: 0x1869D / 99997
{
	if (fParam1 > 0.0f)
	{
		fParam1 = 0.0f;
	}
	Param0.f_2044 = fParam1;
	return;
}

void Function_508(struct<2065> Param0) //Position: 0x186B5 / 100021
{
	if (iParam1 <= 1)
	{
		iParam1 = 1;
	}
	if (iParam2 > 1 || iParam2 >= iParam1)
	{
		iParam2 = iParam1 + 1;
	}
	Param0.f_2060 = iParam1;
	Param0.f_2064 = iParam2;
	Function_610(&Param0 + 1304, 524288);
	return;
}

void Function_509(struct<2069> Param0) //Position: 0x186F4 / 100084
{
	if (iParam1 <= 0)
	{
		iParam1 = 0;
	}
	Param0.f_2068 = iParam1;
	Function_610(&Param0 + 1304, 262144);
	return;
}

bool Function_510(struct<1569> Param0) //Position: 0x18718 / 100120
{
	var uVar0;
	int iVar1;
	var uVar2;
	char* cVar6[32];
	struct<2> Var14;
	struct<2> Var16;
	var uVar18;
	var uVar20;
	bool bVar22;
	
	uVar2 = 3;
	Function_587();
	if (Function_586(StackVal, Function_587()))
	{
		if (!Function_538(&Param0))
		{
			LOG_ERROR("TRANSPORT could not find a suitable starting position");
			return 0;
		}
	}
	Function_587();
	Function_537(StackVal, StackVal, &Param0, Function_587(), Vector(0.0f, 0.0f, 0.0f));
	Function_542(&Param0);
	if (StackVal || Function_586(!IS_LAYOUTREF_VALID(&Param0 + 1296), Function_542(&Param0)))
	{
		return 0;
	}
	if (!Function_536() != 4294967295)
	{
		Function_535(&Param0, Function_536());
	}
	if (IS_ACTOR_VALID(Function_589()))
	{
		Function_534(&Param0, Function_589());
		GIVE_OBJECT_TO_LAYOUT(&Param0 + 1408, &Param0 + 1296);
	}
	if (!Function_605(Param0.f_1304, 16384))
	{
		if (Function_352(Param0.f_1416) && !Param0.f_1416 != 0)
		{
			cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transVeh") };
			Function_542(&Param0);
			*(&Param0 + 1408) = Function_530(StackVal, StackVal, &Param0 + 1296, &cVar6, Param0.f_1416, 977, Function_542(&Param0), *(&Param0 + 1476), 1, 976, 976, 976, 4);
			Function_542(&Param0);
			uVar18 = Function_542(&Param0);
			strcpy(&cVar6, GET_ACTOR_ENUM_STRING_FROM_ENUM(Param0.f_1416), 32);
		}
		else
		{
			return 0;
		}
	}
	if (!Function_605(Param0.f_1304, 16384))
	{
		if (!IS_ACTOR_VALID(&Param0 + 1408))
		{
			return 0;
		}
	}
	bVar22 = false;
	while (bVar22 < (GET_NUM_DRAFT_POSITIONS(&Param0 + 1408) - 1))
	{
		uVar0 = GET_DRAFT_ACTOR(bVar22, &Param0 + 1408);
		if (IS_ACTOR_VALID(&uVar0))
		{
			SET_ACTOR_CAN_BE_HARDLOCKED(&uVar0, 0);
		}
		bVar22++;
	}
	if (Param0.f_1096 != 3 && !Function_605(Param0.f_1304, 16384))
	{
		Function_528(&Param0 + 1408, &uVar2);
	}
	Function_526(&Param0, Function_527());
	Function_524(&Param0, Function_525());
	if (IS_ACTOR_VALID(Function_523()))
	{
		Function_522(&Param0, Function_523());
	}
	else if (Function_352(Function_521()))
	{
		Function_520(&Param0, Function_521());
	}
	if (Function_605(Param0.f_1304, 8))
	{
		if (IS_ACTOR_VALID(Function_523()))
		{
			Function_522(&Param0, Function_523());
		}
		if (!Function_605(Param0.f_1304, 8192))
		{
			if (!Function_352(Param0.f_1552))
			{
				LOG_ERROR("Invalid transport companion actorenum?");
				Param0.f_1552 = Function_484(4, 0, 0, 4294967295, 0);
			}
			cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transportComp") };
			Var14 = 3.0f;
			Var14.f_4 = 3.0f;
			Var14.f_8 = 1.0f;
			Function_65();
			Var16 = Function_65();
			*(&Param0 + 1544) = Function_519(StackVal, StackVal, &Param0 + 1296, &cVar6, Param0.f_1552, Var14, Var16, GET_OBJECT_FROM_ACTOR(&Param0 + 1408));
		}
		if (!IS_ACTOR_VALID(&Param0 + 1544))
		{
			return 0;
		}
		MEMORY_CONSIDER_AS(&Param0 + 1544, &Global_54076, 5);
		MEMORY_IDENTIFY(&Param0 + 1544, &Global_54076);
		MEMORY_REPORT_POSITION_AUTO(&Param0 + 1544, &Global_54076, 1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&Param0 + 1544, 0);
		SET_ACTOR_UPDATE_PRIORITY(&Param0 + 1544, false);
		TASK_CLEAR(&Param0 + 1544);
		MAKE_ACTOR_READY_FOR_ACTION(&Param0 + 1544, 1);
	}
	if (IS_OBJECTSET_VALID(Function_518()))
	{
		*(&Param0 + 1576) = Function_518();
	}
	if (IS_ACTOR_VALID(Function_517()))
	{
		Function_515(&Param0, Function_517());
	}
	else if (Function_352(Function_514()))
	{
		Function_513(&Param0, Function_514());
	}
	if (Function_605(Param0.f_1304, 16))
	{
		if (IS_ACTOR_VALID(Function_517()))
		{
			Function_515(&Param0, Function_517());
		}
		if (!Function_605(Param0.f_1304, 4096))
		{
			if (!Function_352(Param0.f_1568))
			{
				LOG_ERROR("Invalid transport passenger actorenum?");
				Param0.f_1568 = Function_484(2, 0, 0, 4294967295, 0);
			}
			cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transportPass") };
			Var14 = 3.0f;
			Var14.f_4 = 3.0f;
			Var14.f_8 = 1.0f;
			Function_65();
			Var16 = Function_65();
			*(&Param0 + 1560) = Function_519(StackVal, StackVal, &Param0 + 1296, &cVar6, Param0.f_1568, Var14, Var16, GET_OBJECT_FROM_ACTOR(&Param0 + 1408));
		}
		if (!IS_ACTOR_VALID(&Param0 + 1560))
		{
			return 0;
		}
		if (Param0.f_1096 == 1)
		{
			Function_512(&Param0);
		}
		else if (Param0.f_1096 == 2)
		{
			Function_511(&Param0);
		}
		MEMORY_CONSIDER_AS(&Param0 + 1560, Function_5(), 5);
		MEMORY_IDENTIFY(&Param0 + 1560, Function_5());
		MEMORY_REPORT_POSITION_AUTO(&Param0 + 1560, Function_5(), 1);
		DELETE_ALL_INVENTORY_FROM_ACTOR(&Param0 + 1560);
		SET_ACTOR_CAN_BE_HARDLOCKED(&Param0 + 1560, 0);
		TASK_CLEAR(&Param0 + 1560);
	}
	if (Param0.f_1096 == 1)
	{
		cVar6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("transCorpse") };
		GET_OBJECT_RELATIVE_POSITION(StackVal, GET_OBJECT_FROM_ACTOR(&Param0 + 1544), Vector(1.0f, 0.0f, 0.0f), &uVar18);
		GET_OBJECT_RELATIVE_POSITION(StackVal, GET_OBJECT_FROM_ACTOR(&Param0 + 1544), Vector(0.0f, 0.0f, -1.0f), &uVar20);
		if (FIND_GROUND_INTERSECTION(&uVar18, 50.0f, &Var14, &Var16))
		{
			iVar1 = CREATE_CORPSE_IN_LAYOUT(&Param0 + 1296, &cVar6, Param0.f_1552, Var14, Var16, "dead_ground_male", "inj_deadpose_1");
		}
		else if (FIND_GROUND_INTERSECTION(&uVar20, 50.0f, &Var14, &Var16))
		{
			iVar1 = CREATE_CORPSE_IN_LAYOUT(&Param0 + 1296, &cVar6, Param0.f_1552, Var14, Var16, "dead_ground_male", "inj_deadpose_1");
		}
		if (!IS_OBJECT_VALID(&iVar1))
		{
		}
	}
	return 1;
}

int Function_511(int iParam0) //Position: 0x18CD5 / 101589
{
	char* cVar0[32];
	struct<2> Var8;
	char* cVar10[8];
	
	if (IS_ACTOR_VALID(&iParam0 + 1560))
	{
		strcpy(&cVar0, "ntranslook", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(&cVar0) };
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		cVar10 = Vector(0.0f, 0.0f, 0.0f);
		TASK_CLEAR(&iParam0 + 1560);
		TASK_STAND_STILL(&iParam0 + 1560, -1.0f, 0, 0);
		TASK_PRIORITY_SET(&iParam0 + 1560, true);
		Var8 = Vector(0.0f, 1,35f, 0,4f);
		cVar10 = Vector(0.0f, 0.0f, 0.0f);
		*(&iParam0 + 1424) = ATTACH_OBJECTS_NO_DRV(&iParam0 + 1560, GET_OBJECT_FROM_ACTOR(&iParam0 + 1408), Function_130(), Var8, cVar10);
		SET_ANIM_SET_FOR_ACTOR(&iParam0 + 1560, "lay_wounded_psg", 0);
		SET_ACTION_NODE_FOR_ACTOR(&iParam0 + 1560, "lay_wounded_psg/1");
		return 1;
	}
	return 0;
}

int Function_512(int iParam0) //Position: 0x18DAE / 101806
{
	if (!IS_ACTOR_VALID(&iParam0 + 1560))
	{
		return 0;
	}
	SET_ACTOR_IN_VEHICLE(&iParam0 + 1560, &iParam0 + 1408, 2);
	TASK_CLEAR(&iParam0 + 1560);
	TASK_STAND_STILL(&iParam0 + 1560, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iParam0 + 1560, true);
	return 1;
}

int Function_513(struct<1569> Param0) //Position: 0x18DFA / 101882
{
	if (!Function_352(bParam1))
	{
		return 0;
	}
	Param0.f_1568 = bParam1;
	return 1;
}

bool Function_514() //Position: 0x18E14 / 101908
{
	return DECOR_GET_INT(Function_468(), "trnsPassengerAE");
}

int Function_515(struct<1569> Param0) //Position: 0x18E32 / 101938
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	*(&Param0 + 1560) = &iParam1;
	Param0.f_1568 = Function_516(GET_OBJECT_FROM_ACTOR(&iParam1));
	Function_610(&Param0 + 1304, 4096);
	GIVE_OBJECT_TO_LAYOUT(&Param0 + 1560, &Param0 + 1296);
	return 1;
}

var Function_516(bool bParam0) //Position: 0x18E7C / 102012
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&bParam0));
	}
	return 4294967295;
}

int Function_517() //Position: 0x18E99 / 102041
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_468(), "trnsPassenger"));
}

var Function_518() //Position: 0x18EB8 / 102072
{
	return GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(Function_468(), "trnsNecActors"));
}

var Function_519(var uParam0, char* cParam1, bool bParam2, struct<2> Param3, struct<2> Param5, bool bParam7) //Position: 0x18ED7 / 102103
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	Var0 = Param3;
	Var2 = Param5;
	Function_147(&bParam7, 0, &Var0, &Var2);
	uVar4 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &cParam1, bParam2, Var0, Var2);
	SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(&uVar4), 50.0f, 0, 1092616192);
	return &uVar4;
}

int Function_520(struct<1553> Param0) //Position: 0x18F26 / 102182
{
	if (!Function_352(iParam1))
	{
		return 0;
	}
	Param0.f_1552 = iParam1;
	return 1;
}

int Function_521() //Position: 0x18F40 / 102208
{
	return DECOR_GET_INT(Function_468(), "trnsCompanionAE");
}

int Function_522(struct<1553> Param0) //Position: 0x18F5E / 102238
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	*(&Param0 + 1544) = &iParam1;
	Param0.f_1552 = Function_516(GET_OBJECT_FROM_ACTOR(&iParam1));
	Function_610(&Param0 + 1304, 8192);
	GIVE_OBJECT_TO_LAYOUT(&Param0 + 1544, &Param0 + 1296);
	return 1;
}

int Function_523() //Position: 0x18FA8 / 102312
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_468(), "trnsCompanion"));
}

void Function_524(int iParam0, int iParam1) //Position: 0x18FC7 / 102343
{
	if (&iParam1 == 1)
	{
		Function_610(&iParam0 + 1304, 16);
	}
	else
	{
		Function_609(&iParam0 + 1304, 16);
	}
	return;
}

int Function_525() //Position: 0x18FED / 102381
{
	if (DECOR_CHECK_EXIST(Function_468(), "trnsNeedPass"))
	{
		return DECOR_GET_BOOL(Function_468(), "trnsNeedPass");
	}
	return 0;
}

void Function_526(int iParam0, int iParam1) //Position: 0x19025 / 102437
{
	if (&iParam1 == 1)
	{
		Function_610(&iParam0 + 1304, 8);
	}
	else
	{
		Function_609(&iParam0 + 1304, 8);
	}
	return;
}

int Function_527() //Position: 0x1904B / 102475
{
	if (DECOR_CHECK_EXIST(Function_468(), "trnsNeedComp"))
	{
		return DECOR_GET_BOOL(Function_468(), "trnsNeedComp");
	}
	return 0;
}

void Function_528(var uParam0, var[] uParam1) //Position: 0x19083 / 102531
{
	var uVar0;
	var uVar1[3];
	struct<2> Var5;
	struct<2> Var7[3];
	struct<2> Var14[3];
	struct<4> Var21[3];
	var uVar34[3];
	int iVar38;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	uVar0 = Function_529(GET_OBJECT_FROM_ACTOR(&uParam0));
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		GET_POSITION(&uParam0, &Var5);
		Var7[02] = Vector(0,1f, 1,22f, 0.0f);
		Var7[12] = Vector(0,05f, 1,22f, 0,3f);
		Var7[22] = Vector(-0,1f, 1,22f, 0,45f);
		Var14[02] = Vector(0.0f, 0.0f, 0.0f);
		Var14[12] = Vector(0.0f, 95.0f, 0.0f);
		Var14[22] = Vector(0.0f, -135.0f, 0.0f);
		memcpy(&(Var21[04]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ntransTntA"), 4);
		memcpy(&(Var21[14]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ntransTntB"), 4);
		memcpy(&(Var21[24]), StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("ntransTntC"), 4);
		uVar34[0] = "tranExplo0";
		uVar34[1] = "tranExplo1";
		uVar34[2] = "tranExplo2";
		iVar38 = 0;
		while (iVar38 < 2)
		{
			if (!IS_OBJECT_VALID(&(uVar1[iVar38])))
			{
				uVar1[iVar38] = CREATE_PROP_IN_LAYOUT(StackVal, &uVar0, &(Var21[iVar384]), "$/fragments/p_gen_crateTnt01x", Var5, Vector(0.0f, 0.0f, 0.0f), 1);
				SET_OBJECT_COLLIDE_WITH_OBJECT(&(uVar1[iVar38]), &uParam0, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(&(uVar1[iVar38]), 0);
				uParam1[iVar38] = &uVar1[iVar38];
				if (IS_OBJECT_VALID(&(uVar1[iVar38])))
				{
					ATTACH_OBJECTS(&(uVar1[iVar38]), &uParam0, Function_130(), Var7[iVar382], Var14[iVar382], 4294967295);
					GIVE_OBJECT_TO_ACTOR(&(uVar1[iVar38]), &uParam0);
					DECOR_SET_OBJECT(&uParam0, &(uVar34[iVar38]), &(uVar1[iVar38]));
				}
			}
			iVar38++;
		}
	}
	else
	{
		LOG_ERROR("TRANSPORT_ATTACH_EXPLOSIVES got an invalid layout from the object.");
	}
	return;
}

var Function_529(bool bParam0) //Position: 0x192D0 / 103120
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (GET_OBJECT_TYPE(&bParam0) == 1)
		{
			iVar0 = GET_LAYOUT_FROM_OBJECT(&bParam0);
		}
		while (!IS_LAYOUTREF_VALID(&iVar0) && IS_OBJECT_VALID(&bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(&bParam0);
			if (GET_OBJECT_TYPE(&bParam0) == 1)
			{
				iVar0 = GET_LAYOUT_FROM_OBJECT(&bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	return "";
}

var Function_530(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x19337 / 103223
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_533(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_532(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_531(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_531(int iParam0, bool[] bParam1) //Position: 0x1958A / 103818
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

var Function_532(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x195BE / 103870
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_533(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x195DA / 103898
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

int Function_534(struct<1417> Param0) //Position: 0x19606 / 103942
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	(&Param0 + 1408) = &iParam1;
	Param0.f_1416 = Function_516(GET_OBJECT_FROM_ACTOR(&iParam1));
	Function_610(&Param0 + 1304, 16384);
	return 1;
}

int Function_535(struct<1097> Param0) //Position: 0x1963E / 103998
{
	if (!Param0.f_1096 != 0)
	{
		return 0;
	}
	if (iParam1 > 5)
	{
		LOG_ERROR("Invalid mission type passed to TRANSPORT_SET_MISSION_TYPE");
		return 0;
	}
	Param0.f_1096 = iParam1;
	return 1;
}

int Function_536() //Position: 0x196A2 / 104098
{
	if (DECOR_CHECK_EXIST(Function_468(), "trnsMissType"))
	{
		return DECOR_GET_INT(Function_468(), "trnsMissType");
	}
	return 4294967295;
}

int Function_537(int iParam0, struct<2> Param1, struct<2> Param3) //Position: 0x196DA / 104154
{
	if (Function_586(StackVal, Param1))
	{
		LOG_ERROR("Invalid StartPos");
		return 0;
	}
	Function_394(StackVal, &iParam0, Param1);
	*(&iParam0 + 1464) = Param1;
	*(&iParam0 + 1476) = Param3;
	return 1;
}

bool Function_538(bool bParam0) //Position: 0x19727 / 104231
{
	struct<8> Var0;
	struct<6> Var8;
	struct<2> Var14;
	var uVar16;
	int iVar18;
	struct<2> Var19;
	var uVar21;
	var uVar23;
	var uVar25;
	
	Function_542(&bParam0);
	if (Function_586(StackVal, Function_542(&bParam0)))
	{
		iVar18 = 0;
		Function_364(&Var0, 1, 5.0f, 64, 4294967295);
		Function_363(StackVal, &Var8, 0, Var14, 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
		Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
		Var14 = Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
		while (Function_586(StackVal, Var14) && iVar18 > 10)
		{
			Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
			Var14 = Function_356(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
			if (Function_586(StackVal, Var14))
			{
				iVar18++;
			}
			else
			{
				iVar18 = 100;
			}
		}
		if (Function_586(StackVal, Var14))
		{
			LOG_ERROR("Couldn't create spawn point for transport");
			return 0;
		}
		Function_542(&bParam0);
		Var14 = Function_542(&bParam0);
		if (!FIND_GROUND_INTERSECTION(&Var14, 100.0f, &Var14, &uVar16))
		{
			PRINTVECTOR(Var14);
		}
		Function_542(&bParam0);
		if (Function_539(StackVal, Function_542(&bParam0), 0.0f, 60.0f, &Var19, &uVar21, &uVar23, 0x41c80000, 0))
		{
			Function_542(&bParam0);
			uVar25 = Vector(StackVal, StackVal, StackVal) - Vector(Var19, Function_542(&bParam0), StackVal);
			*(&bParam0 + 1476) = Vector(0.0f, 0.0f, 0.0f);
			(&bParam0 + 1476)->f_4 = UNK_0x9C40E671(&uVar25);
		}
	}
	return 1;
}

bool Function_539(struct<2> Param0, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, float fParam7, bool bParam8) //Position: 0x19851 / 104529
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	Function_65();
	Var0 = Function_65();
	bVar15 = -1.0f;
	if (&bParam8)
	{
		uVar5 = START_CURVE_QUERY(&Global_43578, Param0, 2096, fParam2, fParam3, 20.0f, 0);
	}
	else
	{
		uVar5 = START_CURVE_QUERY(&Global_43578, Param0, 16, fParam2, fParam3, 2.0f, 0);
	}
	if (!IS_CURVE_QUERY_VALID(&uVar5))
	{
		UNK_0xDF93BD7C(&uVar5);
	}
	else if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar5) < 0)
	{
		UNK_0xDF93BD7C(&uVar5);
	}
	else
	{
		iVar18 = GET_NUM_POINTS_IN_CURVE_QUERY(&uVar5);
		bVar16 = false;
		while (bVar16 < (iVar18 - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar5, bVar16, &vVar6);
			Function_540(&vVar6);
			Var2 = Function_540(&vVar6);
			if (bVar15 > 0.0f || bVar15 < VDIST(Param0, Var2))
			{
				vVar9 = { StackVal, StackVal, vVar6 };
				bVar15 = VDIST(Param0, Var2);
				bVar17 = bVar16;
				Var0 = Var2;
			}
			bVar16++;
		}
		uVar4 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar5, bVar17);
		uParam4 = Var0;
		if (&fParam7 >= 0.0f)
		{
			fParam7 = 25.0f;
		}
		if (IS_OBJECT_VALID(&uVar4))
		{
			UNK_0x19D652F9(&uVar4, &fParam7, &vVar9, &iVar12);
			Function_540(&iVar12);
			bParam5 = Function_540(&iVar12);
			UNK_0x19D652F9(&uVar4, -&fParam7, &vVar9, &iVar12);
			Function_540(&iVar12);
			fParam6 = Function_540(&iVar12);
		}
		else
		{
			Function_65();
			fParam6 = Function_65();
			Function_65();
			bParam5 = Function_65();
		}
		UNK_0xDF93BD7C(&uVar5);
		return 1;
	}
	return 0;
}

struct<8> Function_540(vector3 vParam0) //Position: 0x1999F / 104863
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

bool Function_541(struct<2> Param0) //Position: 0x199C1 / 104897
{
	if (VDIST(Param0, Global_54078) > 7.0f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_542(bool bParam0) //Position: 0x199DE / 104926
{
	return StackVal, *(&bParam0 + 8);
}

int Function_543(var uParam0, struct<2> Param1, struct<2> Param3) //Position: 0x199EB / 104939
{
	return Function_537(StackVal, StackVal, &uParam0, Param1, Param3);
}

int Function_544(struct<1493> Param0) //Position: 0x19A01 / 104961
{
	int iVar0;
	var uVar1;
	
	if (!Function_604(bParam1))
	{
		LOG_ERROR("Invalid region criteria passed to TRANSPORT_SET_DESTINATION_REGION");
		return (0 || !IS_VOLUME_VALID(&Global_44085[bParam19] + 8));
		LOG_ERROR("Invalid region volume found for to TRANSPORT_SET_DESTINATION_REGION");
		return 0;
	}
	Param0.f_1492 = bParam1;
	if (Function_613(&Param0) == 3)
	{
		if (bParam1 == Global_46760[0])
		{
			*(&Param0 + 1504) = Vector(-2137,573f, 16,097f, 2608,122f);
			*(&Param0 + 1604) = Vector(-2138,072f, 16,387f, 2605,557f);
		}
		else if (bParam1 == Global_46914[0])
		{
			*(&Param0 + 1504) = Vector(786,585f, 78,306f, 1318,052f);
			*(&Param0 + 1604) = Vector(781,586f, 78,479f, 1318,092f);
		}
		else if (bParam1 == Global_46816[0])
		{
			*(&Param0 + 1504) = Vector(-829,292f, 92,14f, 2404,836f);
			*(&Param0 + 1604) = Vector(-830,639f, 92,316f, 2401,437f);
		}
		else if (bParam1 == Global_46816[1])
		{
			*(&Param0 + 1504) = Vector(165,194f, 73,036f, 2203,197f);
			*(&Param0 + 1604) = Vector(166,894f, 73,755f, 2195,46f);
		}
		else if (bParam1 == Global_46866[0])
		{
			*(&Param0 + 1504) = Vector(-2749,39f, 31,862f, 4300,488f);
			*(&Param0 + 1604) = Vector(-2747,507f, 31,86f, 4297,798f);
		}
		else if (bParam1 == Global_46850[0])
		{
			*(&Param0 + 1504) = Vector(-4260,107f, 19,033f, 4465,096f);
			*(&Param0 + 1604) = Vector(-4262,798f, 18,816f, 4462,007f);
		}
		else if (bParam1 == Global_46926[1])
		{
			*(&Param0 + 1504) = Vector(-424,384f, 151,02f, 1614,085f);
			*(&Param0 + 1604) = Vector(-429,38f, 151,344f, 1615,145f);
		}
	}
	if (Function_604(Param0.f_1492) && &iParam2 != 1)
	{
		uVar1 = GET_VOLUME_FROM_OBJECT(Function_545(Param0.f_1492));
		if (IS_VOLUME_VALID(&uVar1))
		{
		}
		else
		{
			LOG_ERROR("Parking volume does not exist");
		}
	}
	if (IS_VOLUME_VALID(&uVar1) && &iParam2 != 1)
	{
		iVar0 = Function_330(&Param0, &uVar1);
	}
	else
	{
		iVar0 = Function_330(&Param0, &Global_44085[bParam19] + 8);
	}
	return iVar0;
}

var Function_545(bool bParam0) //Position: 0x19CE8 / 105704
{
	bool bVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	if (!Function_604(bParam0))
	{
		return "";
	}
	cVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&cVar1, 9);
	memcpy(&cVar2, &Global_44085[bParam09] + 32, 6);
	ITERATE_ON_PARTIAL_NAME(&cVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(&cVar1);
	while (IS_OBJECT_VALID(&bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(&bVar0)))
		{
			DESTROY_ITERATOR(&cVar1);
			return &bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(&cVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(&cVar1);
	return &bVar0;
}

var Function_546() //Position: 0x19D88 / 105864
{
	var uVar0;
	bool bVar1;
	
	bVar1 = 4294967295;
	if (Function_613(&Local_29) != 1 || Function_613(&Local_29) != 2)
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
	uVar0 = &Global_44085[bVar19] + 8;
	if (!IS_VOLUME_VALID(&uVar0))
	{
		return 4294967295;
	}
	return bVar1;
}

int Function_547(float fParam0) //Position: 0x19DDF / 105951
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
			if (StackVal && (StackVal || Function_550(Global_43788) != Function_550(Global_44085[iVar179]) != 4 != 3))
			{
				Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_549(iVar17) };
				if (Function_548(iVar17))
				{
					GET_VOLUME_CENTER(&Global_44085[iVar179] + 8, &Var2);
					if (VDIST(Var4, Var2) < &fParam0 && VDIST(Var4, Var2) > bVar8)
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

bool Function_548(bool bParam0) //Position: 0x19ED5 / 106197
{
	if (!Function_604(bParam0))
	{
		return 0;
	}
	if ((bParam0 != Global_46760[4] || bParam0 != Global_46914[1]) || bParam0 != Global_46866[2])
	{
		return 0;
	}
	switch (Function_613(&Local_29))
	{
		case 0x00000000:
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000003:
			if ((((((bParam0 != Global_46760[0] || bParam0 != Global_46914[0]) || bParam0 != Global_46816[0]) || bParam0 != Global_46816[1]) || bParam0 != Global_46866[0]) || bParam0 != Global_46850[0]) || bParam0 != Global_46926[1])
			{
				return 1;
			}
			return 0;
			break;
		
		case 0x00000001:
			if (((((bParam0 != Global_46760[0] || bParam0 != Global_46914[0]) || bParam0 != Global_46816[0]) || bParam0 != Global_46894[1]) || bParam0 != Global_46866[0]) || bParam0 != Global_46850[0])
			{
				return 1;
			}
			return 0;
			break;
		
		case 0x00000002:
			if ((bParam0 != Global_46760[0] || bParam0 != Global_46914[0]) || bParam0 != Global_46850[0])
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

struct<32> Function_549(bool bParam0) //Position: 0x1A024 / 106532
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_604(bParam0))
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

int Function_550(int iParam0) //Position: 0x1A0E6 / 106726
{
	return Function_472(iParam0);
}

int Function_551(struct<65> Param0) //Position: 0x1A0F1 / 106737
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector((&Param0 + 16), Function_584(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_582(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_554(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_452("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_452("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_552(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_584(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_582(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_552(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1A4AF / 107695
{
	int iVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	iParam1 = &iParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_452("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_553(&iVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_553(&iVar0);
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
			Function_553(&iVar0);
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

void Function_553(int iParam0) //Position: 0x1A71B / 108315
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

bool Function_554(struct<73> Param0) //Position: 0x1A765 / 108389
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
			Function_581(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_580(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_580(1));
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
						uVar0 = Function_579(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_578(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_576(StackVal, &Param0 + 8, Var7, Function_577());
				}
				else
				{
					uVar0 = Function_575(StackVal, &Param0 + 8, Var7, Function_577(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_581(&Param0 + 8);
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
					if (Function_604(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_580(1))
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
				Function_574(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_573(&Var7, &uVar5);
				Var3 = Function_573(&Var7, &uVar5);
				if (!Function_586(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_361(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_571(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_570(&Param0);
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
					if (!Function_569(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_568(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_605(StackVal, 131072))
				{
					if (StackVal || Function_567(Function_567(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_566(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_562(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_561((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_561((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				bVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, bVar15, &Var12);
				Function_540(&Var12);
				*(&Param0 + 16) = Function_540(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, bVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_569(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_568(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_569(Function_568(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_605(StackVal, 131072))
			{
				if (StackVal || Function_567(Function_567(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_562(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_559((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_556(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_556(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_555(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_555(struct<2> Param0) //Position: 0x1B02C / 110636
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

int Function_556(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1B063 / 110691
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
								return Function_557(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_557(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_557(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_557(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_557(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_557(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_557(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_557(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_557(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_557(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_557(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_557(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_557(&Global_11826, &Global_13998, bParam3);
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
								return Function_557(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_557(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_557(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_557(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_557(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_557(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_557(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_557(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_557(&Global_12472, &Global_14954, bParam3);
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
		return Function_557(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_557(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_557(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_557(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_557(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_557(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_557(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_557(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_557(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_557(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_557(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_557(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_557(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_557(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_557(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_557(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_557(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_557(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_557(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_557(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_557(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_557(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_557(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_557(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_557(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_557(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_557(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x1B679 / 112249
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_558(&(Param0[iVar02]), 2))
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

bool Function_558(var uParam0, int iParam1) //Position: 0x1B6D3 / 112339
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_559(int iParam0) //Position: 0x1B6F0 / 112368
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
			if (Function_560(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_560(int iParam0) //Position: 0x1B758 / 112472
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_392(&iParam0);
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

int Function_561(int iParam0, int iParam1) //Position: 0x1B796 / 112534
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

bool Function_562(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x1B7C8 / 112584
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
	Function_564(4294967295);
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
			else if (Function_563(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_563(struct<2> Param0) //Position: 0x1B8A4 / 112804
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_564(int iParam0) //Position: 0x1B8C3 / 112835
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
						Function_565(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_368(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_565(iVar0);
						}
					}
					else if (Function_368(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_565(iVar0);
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
			Function_565(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_565(int iParam0) //Position: 0x1BA31 / 113201
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

bool Function_566(struct<2> Param0) //Position: 0x1BA99 / 113305
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

int Function_567(struct<2> Param0) //Position: 0x1BB3E / 113470
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

bool Function_568(struct<2> Param0) //Position: 0x1BB8C / 113548
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

bool Function_569(struct<2> Param0) //Position: 0x1BBE7 / 113639
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

int Function_570(int iParam0) //Position: 0x1BC66 / 113766
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
		Function_358(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&iParam0 + 72 + 84));
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
	Function_357(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

int Function_571(int iParam0, struct<2> Param1) //Position: 0x1BE18 / 114200
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_572();
	Function_362(0);
	Function_359(0);
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
		Function_358(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_357(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_572() //Position: 0x1BFCD / 114637
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_573(struct<2> Param0) //Position: 0x1BFDC / 114652
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
	GET_POINT_FROM_CURVE_QUERY(&uVar7, false, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, false);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_540(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_540(&iVar18), StackVal);
		Function_540(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_540(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_361(&fVar4, &fVar5);
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
			Function_540(&iVar21);
			Var8 = Function_540(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_540(&iVar18);
			Var8 = Function_540(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

int Function_574(struct<2> Param0, struct<5> Param2) //Position: 0x1C0F7 / 114935
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
		if (!Function_586(StackVal, Param2))
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
			if (!Function_586(StackVal, Param2))
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

var Function_575(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x1C23A / 115258
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
						if (Function_562(&Var5, &fVar4, 0, 0))
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

var Function_576(var uParam0, struct<2> Param1, float fParam3) //Position: 0x1C2EF / 115439
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
				if (Function_562(&Var5, &uVar4, 0, 0))
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

var Function_577() //Position: 0x1C381 / 115585
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
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

var Function_578(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x1C3B2 / 115634
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

var Function_579(var uParam0, struct<2> Param1, float fParam3) //Position: 0x1C454 / 115796
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

float Function_580(bool bParam0) //Position: 0x1C4DA / 115930
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
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

int Function_581(int iParam0) //Position: 0x1C516 / 115990
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_130());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_130());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_582(var uParam0, int iParam1) //Position: 0x1C54C / 116044
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
	Function_564(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_583(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_583(int iParam0, var uParam1, struct<2> Param2) //Position: 0x1C6B6 / 116406
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_152("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_584(var uParam0, struct<2> Param1) //Position: 0x1C75E / 116574
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_585(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_585(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1C78C / 116620
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

bool Function_586(char* cParam0) //Position: 0x1C7B0 / 116656
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_587() //Position: 0x1C7C8 / 116680
{
	struct<2> Var0;
	
	Var0 = DECOR_GET_FLOAT(Function_468(), "trnsStartPosX");
	Var0.f_4 = DECOR_GET_FLOAT(Function_468(), "trnsStartPosY");
	Var0.f_8 = DECOR_GET_FLOAT(Function_468(), "trnsStartPosZ");
	return StackVal, Var0;
}

struct<8> Function_588(bool bParam0) //Position: 0x1C81E / 116766
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

var Function_589() //Position: 0x1C847 / 116807
{
	return GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Function_468(), "trnsVehicle"));
}

bool Function_590(int iParam0, int iParam1) //Position: 0x1C864 / 116836
{
	if (!Function_591(&iParam0 + 1108))
	{
		return 0;
	}
	if (!Function_474(&(Global_43791[iParam1]), 8))
	{
		return 0;
	}
	PRINTSTRING("loaded streams");
	return 1;
}

bool Function_591(struct<2>[] Param0) //Position: 0x1C8A0 / 116896
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_595();
	iVar1 = 0;
	if (!Function_124(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_594(&(Param0[iVar02]), 8);
		}
		else if (Function_593())
		{
			iVar1 = 1;
			Function_594(&(Param0[iVar02]), 8);
		}
		Function_594(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_124(&(Param0[iVar02]), 4))
		{
			if (!Function_124(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_124(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_124(&(Param0[02]), 8) || iVar1));
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
				Function_594(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_124(&(Param0[iVar02]), 4))
		{
			if (!Function_124(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_594(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_594(&(Param0[iVar02]), 2);
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
							Function_594(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_594(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_594(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_594(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_594(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_594(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_594(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_594(&(Param0[iVar02]), 2);
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

void Function_592() //Position: 0x1CC62 / 117858
{
	if (!Function_168(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_593() //Position: 0x1CCA2 / 117922
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

void Function_594(struct<13> Param0) //Position: 0x1CCD0 / 117968
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_595() //Position: 0x1CCE3 / 117987
{
	if (!Function_168(128))
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

bool Function_596(struct<1601> Param0) //Position: 0x1CD25 / 118053
{
	if (!Function_352(Param0.f_1416) || Param0.f_1416 != 0)
	{
		Param0.f_1416 = Function_600(Param0.f_1096);
	}
	if (!Function_352(Param0.f_1416))
	{
		Param0.f_1416 = 1199;
	}
	switch (Global_43787)
	{
		case 0x00000000:
			Param0.f_1600 = 229;
			break;
		
		case 0x00000001:
			Param0.f_1600 = 264;
			break;
		
		case 0x00000002:
			Param0.f_1600 = 6;
			break;
	}
	Function_599(&Param0 + 1108, Param0.f_1600, 2, 0);
	Function_599(&Param0 + 1108, Param0.f_1416, 2, 0);
	Function_597(&Param0 + 1108, "shakehands_link", 1, 0);
	Function_597(&Param0 + 1108, "dead_ground_male", 5, 0);
	Function_597(&Param0 + 1108, "lay_wounded_psg", 5, 0);
	Function_597(&Param0 + 1108, "custom/lay_wounded_psg", 8, 0);
	Function_597(&Param0 + 1108, "procmissions", 10, 0);
	Function_597(&Param0 + 1108, "stats", 10, 0);
	return 1;
}

var Function_597(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1CE78 / 118392
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_598(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_594(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_598(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1CEB6 / 118454
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_124(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_594(&(Param0[iVar02]), 4);
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

var Function_599(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x1CF85 / 118661
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_124(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_594(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_594(&(Param0[iVar02]), 8);
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

var Function_600(int iParam0) //Position: 0x1D061 / 118881
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

void Function_601() //Position: 0x1D169 / 119145
{
	switch (Global_43787)
	{
		case 0x00000000:
			if (Global_43788 == Global_46736[2])
			{
				Function_602(&Local_29, 479);
				Function_602(&Local_29, 480);
				Function_602(&Local_29, 481);
				Function_602(&Local_29, 483);
			}
			else if (Global_43788 != Global_46736[0] || Global_43788 != Global_46736[3])
			{
				Function_602(&Local_29, 486);
				Function_602(&Local_29, 490);
				Function_602(&Local_29, 491);
				Function_602(&Local_29, 492);
			}
			else if (Global_43788 == Global_46736[1])
			{
				Function_602(&Local_29, 505);
				Function_602(&Local_29, 509);
				Function_602(&Local_29, 510);
				Function_602(&Local_29, 513);
			}
			break;
		
		case 0x00000001:
			if (Function_367())
			{
				Function_602(&Local_29, 496);
				Function_602(&Local_29, 500);
				Function_602(&Local_29, 499);
				Function_602(&Local_29, 502);
			}
			else
			{
				Function_602(&Local_29, 406);
				Function_602(&Local_29, 407);
				Function_602(&Local_29, 410);
				Function_602(&Local_29, 411);
			}
			break;
		
		case 0x00000002:
			if (Function_367())
			{
				Function_602(&Local_29, 467);
				Function_602(&Local_29, 468);
				Function_602(&Local_29, 471);
				Function_602(&Local_29, 474);
			}
			else
			{
				Function_602(&Local_29, 416);
				Function_602(&Local_29, 419);
				Function_602(&Local_29, 420);
				Function_602(&Local_29, 423);
			}
			break;
	}
	return;
}

void Function_602(struct<1969> Param0) //Position: 0x1D2BA / 119482
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0.f_1968)
	{
		if ((*&Param0 + 1968)[iVar0] != 0 || !Function_352((*&Param0 + 1968)[iVar0]))
		{
			(*&Param0 + 1968)[iVar0] = iParam1;
			iVar0 = Param0.f_1968;
		}
		else
		{
			iVar0++;
		}
	}
	return;
}

void Function_603(int iParam0, int iParam1) //Position: 0x1D30C / 119564
{
	if (&iParam1 == 1)
	{
		Function_610(&iParam0 + 1304, 2048);
	}
	else
	{
		Function_609(&iParam0 + 1304, 2048);
	}
	return;
}

bool Function_604(bool bParam0) //Position: 0x1D334 / 119604
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_605(bool bParam0, int iParam1) //Position: 0x1D34A / 119626
{
	return (bParam0 && iParam1) == 0;
}

void Function_606(struct<2073> Param0) //Position: 0x1D357 / 119639
{
	int iVar0;
	int iVar1;
	
	Param0.f_2072 = 1;
	if (Global_43787 == 0)
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
	else if (Global_43787 == 2)
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
	else if (Global_43787 == 1)
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
	AUDIO_MUSIC_FORCE_TRACK(&iVar0, "DRAMATIC_LOW", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

int Function_607(bool bParam0) //Position: 0x1D486 / 119942
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

void Function_608() //Position: 0x1D49F / 119967
{
	int iVar0;
	
	iVar0 = Function_57(366);
	switch (Global_43787)
	{
		case 0x00000000:
			if (iVar0 <= 1)
			{
				Local_29.f_1104 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_29.f_1104 = 1;
			}
			else
			{
				Local_29.f_1104 = 2;
			}
			break;
		
		case 0x00000001:
			if (iVar0 <= 1)
			{
				Local_29.f_1104 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_29.f_1104 = 1;
			}
			else
			{
				Local_29.f_1104 = 2;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			if (iVar0 <= 1)
			{
				Local_29.f_1104 = 0;
			}
			else if (iVar0 <= 3)
			{
				Local_29.f_1104 = 1;
			}
			else
			{
				Local_29.f_1104 = 2;
			}
			break;
		
		default:
			Local_29.f_1104 = 1;
			break;
	}
	return;
}

void Function_609(bool bParam0, int iParam1) //Position: 0x1D54B / 120139
{
	bParam0 = (bParam0 - (bParam0 && iParam1));
	return;
}

void Function_610(bool bParam0, int iParam1) //Position: 0x1D561 / 120161
{
	bParam0 = (bParam0 || iParam1);
	return;
}

void Function_611(int iParam0, int iParam1) //Position: 0x1D572 / 120178
{
	if (iParam1 == 1)
	{
		Function_610(&iParam0 + 1304, 1);
	}
	else
	{
		Function_609(&iParam0 + 1304, 1);
	}
	return;
}

var Function_612(bool bParam0, int iParam1) //Position: 0x1D595 / 120213
{
	int iVar0;
	int iVar1;
	
	iVar1 = Function_536();
	if (iVar1 == 4294967295)
	{
		iVar0 = Function_535(&bParam0, iParam1);
	}
	else
	{
		iVar0 = Function_535(&bParam0, iVar1);
	}
	return iVar0;
}

int Function_613(struct<1097> Param0) //Position: 0x1D5BF / 120255
{
	int iVar0;
	
	if (Function_536() != 4294967295)
	{
		iVar0 = Function_536();
	}
	else
	{
		iVar0 = Param0.f_1096;
	}
	return iVar0;
}

int Function_614(int iParam0) //Position: 0x1D5DE / 120286
{
	switch (iParam0)
	{
		case 0x00000001:
			Local_29.f_1488 = 100.0f;
			Function_469(&uLocal_554);
			break;
		
		case 0x00000002:
			Function_617(&Local_29, 1, 0);
			break;
		
		case 0x00000003:
			if (iLocal_549 >= 1)
			{
				Function_322(&Local_29, 1);
				if (IS_ACTOR_VALID(&Local_29 + 1408))
				{
					if (GET_VEHICLE(&Local_29 + 1544) == &Local_29 + 1408)
					{
						Function_321(&Local_29, "pm_trn_farw", 1);
					}
					else
					{
						Function_321(&Local_29, "pm_trn_fart", 1);
					}
				}
				Function_454(&Local_29);
			}
			Function_616();
			break;
		
		case 0x00000004:
			if (iLocal_549 >= 1)
			{
				if (IS_ACTOR_VALID(&Local_29 + 1408))
				{
					Function_322(&Local_29, 1);
					Function_321(&Local_29, "pm_trn_farw", 1);
					Function_454(&Local_29);
				}
			}
			Function_616();
			break;
		
		case 0x00000006:
			if (iLocal_549 >= 1)
			{
				if (IS_ACTOR_VALID(&Local_29 + 1544))
				{
					Function_322(&Local_29, 1);
					TASK_CLEAR(&Local_29 + 1544);
					MEMORY_CONSIDER_AS(&Local_29 + 1544, &Global_54076, 4);
					if (Function_613(&Local_29) == 1)
					{
						TASK_KILL_CHAR(&Local_29 + 1544, &Global_54076);
						if (GET_LAST_ATTACKER(&Local_29 + 1544) == &Global_54076)
						{
							Function_321(&Local_29, "pm_trn_lhit", 1);
						}
						else
						{
							Function_321(&Local_29, "pm_trn_threat", 1);
						}
					}
					else
					{
						TASK_VEHICLE_LEAVE(&Local_29 + 1544);
						if (GET_LAST_ATTACKER(&Local_29 + 1544) == &Global_54076)
						{
							Function_321(&Local_29, "pm_trn_thit", 1);
						}
						else
						{
							Function_321(&Local_29, "pm_trn_scare", 1);
						}
					}
					Function_454(&Local_29);
				}
			}
			Function_616();
			break;
		
		case 0x00000007:
			if (iLocal_549 >= 1)
			{
				Function_322(&Local_29, 1);
				if (Function_613(&Local_29) == 1)
				{
					Function_321(&Local_29, "pm_trn_ldie", 1);
				}
				else
				{
					Function_321(&Local_29, "pm_trn_tdie", 1);
				}
				Function_454(&Local_29);
			}
			Function_616();
			break;
		
		case 0x00000009:
			KILL_ACTOR(&Local_29 + 1560);
			if (iLocal_549 >= 1)
			{
				Function_322(&Local_29, 1);
				Function_321(&Local_29, "pm_trn_sdie", 1);
			}
			Function_616();
			break;
		
		case 0x0000000A:
			KILL_ACTOR(&Local_29 + 1560);
			if (iLocal_549 >= 1)
			{
				Function_322(&Local_29, 1);
				Function_321(&Local_29, "pm_trn_pdie", 1);
			}
			Function_616();
			break;
		
		case 0x00000005:
			if (iLocal_549 >= 1)
			{
				Function_322(&Local_29, 1);
				switch (Function_615(&Local_29))
				{
					case 0x00000000:
						Function_321(&Local_29, "pm_trn_neca", 1);
						break;
					
					default:
						LOG_ERROR("This necessary transport actor has no name");
						break;
					}
			}
			Function_616();
			break;
		
		case 0x0000000B:
			if (iLocal_549 >= 1)
			{
				Function_322(&Local_29, 1);
				switch (Function_615(&Local_29))
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
			if (iLocal_549 >= 1)
			{
				Function_322(&Local_29, 1);
				Function_321(&Local_29, "pm_trn_vdie", 1);
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
			Function_317(&Local_29);
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
	iLocal_549 = iParam0;
	bLocal_553 = false;
	return 1;
}

int Function_615(struct<1585> Param0) //Position: 0x1DA2D / 121389
{
	return Param0.f_1584;
}

void Function_616() //Position: 0x1DA39 / 121401
{
	Function_397(&Local_29);
	Function_461(&Local_29, 0);
	Function_448(&Local_29, 0, 0);
	iLocal_27 = 5;
	return;
}

void Function_617(struct<613> Param0) //Position: 0x1DA54 / 121428
{
	int iVar0;
	
	if (&iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < (Param0.f_400 - 1))
		{
			strcpy(&Param0 + 400[iVar04], "", 16);
			iVar0++;
		}
		Param0.f_504 = 0;
	}
	if (&iParam2 == 1)
	{
		iVar0 = 0;
		while (iVar0 < (Param0.f_508 - 1))
		{
			strcpy(&Param0 + 508[iVar04], "", 16);
			iVar0++;
		}
		Param0.f_612 = 0;
	}
	return;
}

int Function_618(int iParam0, int iParam1) //Position: 0x1DAC6 / 121542
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

