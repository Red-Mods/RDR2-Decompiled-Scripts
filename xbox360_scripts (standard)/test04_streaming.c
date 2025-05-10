//Decompiled with MagicRDR v1.0
//Function Count : 27
//Statics Count : 50
//Natives Count : 47
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	bool bLocal_16 = false;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	struct<13> Local_24 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_37 = false;
	struct<41> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Function_26();
	Function_24();
	Function_23();
	Function_22();
	Function_21(&Local_38 + 28);
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_49, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_49, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	while (!IS_EXITFLAG_SET())
	{
		Function_19();
		Function_5();
		WAIT(false);
	}
	Function_2();
	Function_1();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_HELP();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	HUD_CLEAR_SMALL_TEXT();
	GUI_CLOSE_WINDOW(bLocal_16);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x82 / 130
{
	DESTROY_CAMERA(bLocal_49);
	return;
}

void Function_2() //Position: 0x8D / 141
{
	Function_3(4096);
	return;
}

void Function_3(int iParam0) //Position: 0x99 / 153
{
	if (Function_4(iParam0, 1) && !Function_4(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_4(var uParam0, bool bParam1) //Position: 0xC6 / 198
{
	return (uParam0 && bParam1) == 0;
}

void Function_5() //Position: 0xD3 / 211
{
	switch (Local_38.f_40)
	{
		case 0x00000000:
			if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_49, false))
			{
				SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_49, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
			}
			if (!Function_18(&Local_38 + 28))
			{
				Function_21(&Local_38 + 28);
			}
			if (Function_13(&Local_38 + 28, 8.0f))
			{
				if (Function_9(&Local_38, &Local_38 + 12))
				{
					SET_CAMERA_POSITION(bLocal_49, Local_38);
					SET_CAMERA_DIRECTION(bLocal_49, *(&Local_38 + 12), 1);
					Local_38.f_40 = 2;
				}
				else
				{
					Function_6(&Local_38 + 28, 7.0f);
				}
			}
			break;
		
		case 0x00000001:
			SET_CAMERA_POSITION(bLocal_49, Local_38);
			SET_CAMERA_ORIENTATION(bLocal_49, -90.0f, 0.0f, 0.0f, 0);
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_21(&Local_38 + 28);
				Local_38.f_40 = 0;
			}
			break;
	}
	return;
}

void Function_6(var uParam0, float fParam1) //Position: 0x18F / 399
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_8(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x1B0 / 432
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x1C3 / 451
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_9(int iParam0, int iParam1) //Position: 0x1D2 / 466
{
	var uVar0;
	bool bVar4;
	
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	*iParam0 = RAND_FLOAT_RANGE(-4267,259f, 708,6751f);
	iParam0->f_4 = 85.0f;
	iParam0->f_8 = RAND_FLOAT_RANGE(1228,936f, 4447,987f);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	*iParam1 = RAND_FLOAT_RANGE(-4267,259f, 708,6751f);
	iParam1->f_4 = RAND_FLOAT_RANGE(25,39853f, 100,5493f);
	iParam1->f_8 = RAND_FLOAT_RANGE(1228,936f, 4447,987f);
	while (Function_12(StackVal, StackVal, StackVal, StackVal, *iParam0, *iParam1))
	{
		*iParam1 = RAND_FLOAT_RANGE(-4267,259f, 708,6751f);
		iParam1->f_4 = RAND_FLOAT_RANGE(25,39853f, 100,5493f);
		iParam1->f_8 = RAND_FLOAT_RANGE(1228,936f, 4447,987f);
		WAIT(false);
	}
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10("testPt"), 4);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_38.f_24, &uVar0, *iParam0, *iParam1);
	if (IS_OBJECT_VALID(bVar4))
	{
		if (SNAP_OBJECT_TO_GROUND(bVar4, 100.0f, false, 1092616192))
		{
			GET_OBJECT_POSITION(bVar4, iParam0);
			iParam0->f_4 = (StackVal + 8.0f);
			return 1;
		}
		DESTROY_OBJECT(bVar4);
	}
	return 0;
}

struct<32> Function_10(bool bParam0) //Position: 0x2EE / 750
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11("0", &cVar8, ""), 4);
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

struct<32> Function_11(char* cParam0, char* cParam1, char* cParam2) //Position: 0x358 / 856
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_12(vector3 vParam0, vector3 vParam3) //Position: 0x377 / 887
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

bool Function_13(var uParam0, int iParam1) //Position: 0x3A4 / 932
{
	if (Function_15(uParam0, iParam1))
	{
		Function_14(uParam0);
		return 1;
	}
	return 0;
}

void Function_14(int iParam0) //Position: 0x3BC / 956
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_15(var uParam0, float fParam1) //Position: 0x3D0 / 976
{
	if (Function_18(uParam0))
	{
		if (Function_16(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_16(int iParam0) //Position: 0x3EC / 1004
{
	if (Function_18(iParam0))
	{
		if (Function_17(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_17(int iParam0) //Position: 0x4B4 / 1204
{
	return Function_4(*iParam0, 2);
}

bool Function_18(var uParam0) //Position: 0x4C1 / 1217
{
	return Function_4(*uParam0, 1);
}

void Function_19() //Position: 0x4CE / 1230
{
	if (IS_DEBUGKEY_PRESSED(46))
	{
		switch (Local_38.f_40)
		{
			case 0x00000002:
			case 0x00000000:
				Local_38.f_4 = (StackVal - 100.0f);
				Local_38.f_40 = 1;
				Function_20("TEST_STREAMING_CAMERA_UNDERGROUND", 1,75f, 0, 0, 2, 1, 0);
				break;
			
			case 0x00000001:
				Function_6(&Local_38 + 28, (8.0f - 1.0f));
				Local_38.f_40 = 0;
				Function_20("TEST_STREAMING_CAMERA_RANDOM", 1,75f, 0, 0, 2, 1, 0);
				break;
			}
	}
	return;
}

void Function_20(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x580 / 1408
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_21(var uParam0) //Position: 0x5CB / 1483
{
	Function_6(uParam0, 0.0f);
	return;
}

void Function_22() //Position: 0x5D7 / 1495
{
	struct<13> Var0;
	
	Local_24 = 1000.0f;
	Local_24.f_4 = 530.0f;
	Local_24.f_8 = 1270.0f;
	Local_24.f_12 = 610.0f;
	bLocal_36 = GUI_MAKE_WINDOW(GUI_MAIN_WINDOW(), &Local_24, "DebugGUI", "");
	Local_28 = 0,85f;
	Local_28.f_4 = 0,85f;
	Local_28.f_8 = 0,85f;
	Local_28.f_12 = 1.0f;
	Local_32 = 0.0f;
	Local_32.f_4 = 0.0f;
	Local_32.f_8 = 0.0f;
	Local_32.f_12 = 0,5f;
	GUI_MAKE_OVERLAY(bLocal_36, &Local_24, "DEBUGMENUBACK", &Local_32, &Local_32, 0);
	Var0 = 900.0f;
	Var0.f_4 = 540.0f;
	Var0.f_8 = 1200.0f;
	Var0.f_12 = 560.0f;
	bLocal_37 = GUI_MAKE_TEXT(bLocal_36, &Var0, "Camera Toggle", "nberrylium", 0,85f);
	GUI_SET_TEXT_COLOR(bLocal_37, &Local_28);
	GUI_SET_TEXT(bLocal_37, "C - Camera Toggle");
	GUI_SET_TEXT_JUSTIFY(bLocal_37, 2);
	return;
}

void Function_23() //Position: 0x6DD / 1757
{
	bLocal_49 = CREATE_CAMERA_IN_LAYOUT(Local_38.f_24, "njobCamera", 0);
	SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_49, false, 0.0f, 0f, 0, 0, 0, 0, 0, 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_49);
	return;
}

void Function_24() //Position: 0x70C / 1804
{
	Function_25(4096);
	return;
}

void Function_25(var uParam0) //Position: 0x718 / 1816
{
	int iVar0;
	
	if (Function_4(uParam0, 1) && Function_4(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && uParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_26() //Position: 0x74C / 1868
{
	Local_38.f_40 = 0;
	Local_38 = { 0.0f, 0.0f, 0.0f };
	if (!IS_LAYOUTREF_VALID(Local_38.f_24))
	{
		Local_38.f_24 = CREATE_LAYOUT("testLayout");
	}
	return;
}

