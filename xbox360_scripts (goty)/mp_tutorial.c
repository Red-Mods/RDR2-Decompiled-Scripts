//Decompiled with MagicRDR v1.0
//Function Count : 48
//Statics Count : 15
//Natives Count : 50
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 99;
	iLocal_5 = 6;
	while (Function_41())
	{
		Function_2();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x2E / 46
{
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2() //Position: 0x37 / 55
{
	var uVar0[5];
	int iVar6;
	
	if (Function_40())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[4] = "Last Stage";
		iVar6 = Function_24(&uLocal_8, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar6 == 0)
		{
			Function_15();
			Function_14();
			Function_13(8);
		}
		else if (iVar6 == 1)
		{
			Function_15();
			Function_14();
			Function_1();
		}
		else if (iVar6 == 2)
		{
			Function_15();
			Function_14();
			Function_3(4);
			Function_1();
		}
		else if (iVar6 == 3)
		{
			Function_15();
			Function_14();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			iLocal_4 = 101;
			iLocal_5 = 0;
		}
	}
	return;
}

void Function_3(int iParam0) //Position: 0x100 / 256
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_12("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_6(2) || Function_6(8)) || Function_6(9)) || Function_6(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_12("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_12("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_12("");
	}
	else if (iParam0 == 8)
	{
		Function_5();
		Function_4();
	}
	else if (iParam0 == 4)
	{
		Function_5();
	}
	return;
}

void Function_4() //Position: 0x1F7 / 503
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_5() //Position: 0x210 / 528
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_6(int iParam0) //Position: 0x21C / 540
{
	int iVar0;
	
	if (!Function_11(iParam0))
	{
		return 0;
	}
	iVar0 = Function_10(iParam0);
	if (!Function_7(Function_10(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_7(int iParam0) //Position: 0x252 / 594
{
	if (!Function_9(iParam0))
	{
		return 0;
	}
	if (!Function_8(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_8(int iParam0) //Position: 0x276 / 630
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x28B / 651
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_10(int iParam0) //Position: 0x2A2 / 674
{
	if (!Function_11(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_11(int iParam0) //Position: 0x2BC / 700
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_12(bool bParam0) //Position: 0x2D2 / 722
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_13(int iParam0) //Position: 0x33C / 828
{
	iParam0 = iParam0;
	bLocal_6 = true;
	Function_1();
	return;
}

void Function_14() //Position: 0x34C / 844
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_15() //Position: 0x361 / 865
{
	Function_17();
	Function_16(10, 3);
	return;
}

void Function_16(int iParam0, int iParam1) //Position: 0x370 / 880
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

void Function_17() //Position: 0x4A7 / 1191
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_22())
	{
		Function_21(10, 3);
	}
	else
	{
		Function_19();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_18(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_18());
	UI_POP("nDebugMenu");
	return;
}

var Function_18() //Position: 0x4F2 / 1266
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_19() //Position: 0x507 / 1287
{
	Function_20(25, 2);
	return;
}

void Function_20(int iParam0, int iParam1) //Position: 0x513 / 1299
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

void Function_21(int iParam0, int iParam1) //Position: 0x711 / 1809
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

bool Function_22() //Position: 0x848 / 2120
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
				if (!Function_23(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_23(var uParam0, int iParam1) //Position: 0x8AF / 2223
{
	return (uParam0 && iParam1) == 0;
}

var Function_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x8BC / 2236
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_39(&Var15, &Var0);
	uVar20 = Function_38(*uParam1, &Var15);
	Function_37(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_36(uParam0, uVar20);
	Function_32(StackVal, uParam0, Var15.f_12);
	Function_30(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_29(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_26(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_25(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_25(int iParam0, int iParam1, int iParam2) //Position: 0x983 / 2435
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

bool Function_26(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x9DF / 2527
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
				Function_28(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, false)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, false)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_28(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_25(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_27(bParam1->f_32);
	}
	else
	{
		Function_27(bParam1->f_32);
	}
	return 0;
}

void Function_27(bool bParam0) //Position: 0xB65 / 2917
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

void Function_28(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB9F / 2975
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

var Function_29(int iParam0, var uParam1, int iParam2) //Position: 0xC4D / 3149
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_30(var uParam0, int iParam1, int iParam2) //Position: 0xC71 / 3185
{
	switch (Function_31())
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

int Function_31() //Position: 0xD0D / 3341
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

void Function_32(var uParam0, int iParam1, int iParam2) //Position: 0xD49 / 3401
{
	switch (Function_33(uParam0))
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

int Function_33(int iParam0) //Position: 0xDE1 / 3553
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_18()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, false))
	{
		if (!Function_23(*iParam0, 0x40000000))
		{
			Function_35(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, false))
	{
		if (!Function_23(*iParam0, 0x40000000))
		{
			Function_35(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_34(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_18()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, false))
	{
		if (!Function_23(*iParam0, 0x20000000))
		{
			Function_35(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, false))
	{
		if (!Function_23(*iParam0, 0x20000000))
		{
			Function_35(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_34(iParam0, 0x20000000);
	return 0;
}

void Function_34(var uParam0, int iParam1) //Position: 0xF2C / 3884
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_35(var uParam0, int iParam1) //Position: 0xF3F / 3903
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

var Function_36(var uParam0, int iParam1) //Position: 0xF4E / 3918
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_37(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x109D / 4253
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

var Function_38(int iParam0, int iParam1) //Position: 0x1130 / 4400
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_39(var uParam0, var uParam1) //Position: 0x114A / 4426
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1.6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_40() //Position: 0x1198 / 4504
{
	return Global_30920;
}

bool Function_41() //Position: 0x11A1 / 4513
{
	bLocal_6 = false;
	bLocal_7 = false;
	switch (iLocal_4)
	{
		case 0x00000063:
			Function_47();
			break;
		
		case 0x00000000:
			Function_46();
			break;
		
		case 0x00000065:
			Function_42();
			break;
		
		case 0x00000064:
			return 0;
			break;
		
		default:
			iLocal_4 = 100;
			break;
	}
	if (bLocal_6)
	{
		Function_13(8);
		return 0;
	}
	if (bLocal_7)
	{
		return 0;
	}
	return 1;
}

void Function_42() //Position: 0x11FE / 4606
{
	switch (iLocal_5)
	{
		case 0x00000000:
			iLocal_5 = 6;
			break;
		
		case 0x00000006:
			Function_43("The tutorial is now over.", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_5 = 7;
			iLocal_5 = 7;
			break;
		
		case 0x00000007:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_13(8);
			}
			break;
	}
	return;
}

void Function_43(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1264 / 4708
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_44(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_44(int iParam0) //Position: 0x12DF / 4831
{
	char* cVar0[16];
	
	if (!Function_45())
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

bool Function_45() //Position: 0x131E / 4894
{
	if (Function_23(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_46() //Position: 0x1339 / 4921
{
	switch (iLocal_5)
	{
		case 0x00000000:
			iLocal_5 = 6;
			break;
		
		case 0x00000006:
			Function_43("Welcome to the multiplayer tutorial.", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_5 = 7;
			break;
		
		case 0x00000007:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				iLocal_4 = 101;
				iLocal_5 = 0;
			}
			break;
	}
	return;
}

void Function_47() //Position: 0x13A9 / 5033
{
	switch (iLocal_5)
	{
		case 0x00000006:
			iLocal_5 = 7;
			break;
		
		case 0x00000007:
			if (!HUD_IS_FADED())
			{
				iLocal_4 = 0;
				iLocal_5 = 0;
			}
			break;
	}
	return;
}

