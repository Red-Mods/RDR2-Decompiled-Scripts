//Decompiled with MagicRDR v1.0
//Function Count : 43
//Statics Count : 45
//Natives Count : 29
//Parameters Count : 2

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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<529> Var0;
	
	*(&Var0 + 8) = 10;
	*(&Var0 + 96) = 10;
	*(&Var0 + 184) = 10;
	*(&Var0 + 272) = 10;
	*(&Var0 + 360) = 10;
	*(&Var0 + 456) = 3;
	*(&Var0 + 536) = 3;
	uVar74 = "fObjBaseScore";
	uVar75 = "fObjBonusScale";
	uVar76 = "_StatCount";
	fVar92 = 0.0f;
	iVar101 = 0;
	iVar103 = Function_42(&iScriptParam_0);
	iVar108 = 1;
	iVar109 = 0;
	iVar110 = 0;
	iVar112 = 4294967295;
	iVar117 = 0;
	while ((!IS_EXITFLAG_SET() && iVar108) && iVar117 != 0)
	{
		switch (iVar102)
		{
			case 0x00000000:
				Function_41(&Var0);
				Var0.f_528 = 0;
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nAAID"))
				{
					Var0.f_500 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nAAID");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "fTime"))
				{
					Var0.f_512 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "fTime");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nfObjTime1"))
				{
					Var0.f_516 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "nfObjTime1");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nfObjTime2"))
				{
					Var0.f_520 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "nfObjTime2");
				}
				Function_39(&iScriptParam_0, iVar103);
				iVar102 = 1;
				break;
			
			case 0x00000001:
				Function_36("SC_CHALLENGE_AVAILABLE_MSG", 4.0f, 1, 0, 2, 1, 0);
				iVar102 = 3;
			
			case 0x00000003:
				switch (Var0.f_500)
				{
					case 0x00000000:
						if (Global_90152[15].f_20)
						{
							Var0.f_488 = 1;
							Global_90152[15].f_32 = 1;
							iVar102 = 3;
						}
						if (Var0.f_488)
						{
							Function_32(&Var0, &iScriptParam_0, &Var0 + 528);
							iVar102 = 3;
						}
						break;
					
					case 0x00000001:
						if (Global_90152[65].f_20)
						{
							Var0.f_488 = 1;
							iVar102 = 3;
						}
						if (Var0.f_488)
						{
							iVar102 = 3;
						}
						break;
					
					case 0x00000002:
						if (Global_90152[35].f_20)
						{
							Var0.f_488 = 1;
							iVar102 = 3;
						}
						if (Var0.f_488)
						{
							iVar102 = 3;
						}
						break;
					
					case 0x00000003:
						if (Global_90152[05].f_20)
						{
							Var0.f_488 = 1;
							Global_90152[05].f_32 = 1;
							iVar102 = 3;
						}
						if (Var0.f_488)
						{
							Function_15(&Var0, &iScriptParam_0, &Var0 + 528);
							iVar102 = 3;
						}
						break;
					
					case 0x00000004:
						if (Global_90152[55].f_20)
						{
							Var0.f_488 = 1;
							iVar102 = 3;
						}
						if (Var0.f_488)
						{
							iVar102 = 3;
						}
						break;
					
					case 0x00000005:
						if (Global_90152[75].f_20)
						{
							Var0.f_488 = 1;
							iVar102 = 3;
						}
						if (Var0.f_488)
						{
							iVar102 = 3;
						}
						break;
					
					case 0x00000006:
						if (Global_90152[45].f_20)
						{
							Var0.f_488 = 1;
							iVar102 = 3;
						}
						if (Var0.f_488)
						{
							iVar102 = 3;
						}
						break;
					
					case 0x00000007:
						if (Global_90152[25].f_20)
						{
							Var0.f_488 = 1;
							iVar102 = 3;
						}
						if (Var0.f_488)
						{
							iVar102 = 3;
						}
						break;
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0) == 3)
				{
					Var0.f_488 = 0;
					Var0.f_492 = 0;
					iVar102 = 4;
				}
				if (Var0.f_496)
				{
					iVar102 = 4;
				}
				break;
			
			case 0x00000004:
				SC_CHALLENGE_PROCESS_EXPIRATION(&iScriptParam_0);
				iVar112 = 0;
				Function_14(&iScriptParam_0, &Var0);
				Function_6(&iScriptParam_0, Global_132987[iVar103125].f_172, Global_132987[iVar103125].f_164, Global_132987[iVar103125].f_168);
				while (!Function_3())
				{
					WAIT(false);
				}
				while (Function_3())
				{
					WAIT(false);
				}
				Function_36("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
				if (Global_132987[iVar103125].f_148 >= 1)
				{
					memcpy(&uVar79, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1(Global_132987[iVar103125].f_164), 6);
					PRINT_HELP_FORMAT(3.0f, "SC_CHALLENGE_LAST_SCORE", &uVar79, 0, 0, 0, 2, 0, 0);
				}
				memcpy(&uVar79, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1(Global_132987[iVar103125].f_172), 6);
				PRINT_HELP_FORMAT(3.0f, "SC_CHALLENGE_CURRENT_SCORE", &uVar79, 0, 0, 0, 2, 0, 0);
				Global_132987[iVar103125].f_164 = Global_132987[iVar103125].f_172;
				Global_132987[iVar103125].f_116 = 0;
				iVar102 = 5;
			
			case 0x00000005:
				if (iVar112 == 0)
				{
					iVar112 = SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0);
				}
				else if (iVar112 == 3)
				{
					Function_36("SC_CHALLENGE_EXAMPLE_EXPIRED", 4.0f, 1, 0, 2, 1, 0);
					iVar108 = 0;
				}
				break;
		}
		WAIT(100);
	}
	SC_CHALLENGE_CLEAN_UP(&iScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

struct<32> Function_1(var uParam0) //Position: 0x4BE / 1214
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Function_2(uParam0);
	Var11 = { StackVal, Function_2(uParam0) };
	iVar8 = StackVal;
	iVar9 = StackVal;
	bVar10 = FLOOR((Var11.f_12 * 100.0f));
	if (iVar8 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, iVar8, 32);
	stradd(&cVar0, ":", 32);
	if (iVar9 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, iVar9, 32);
	stradd(&cVar0, ".", 32);
	if (bVar10 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, bVar10, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<8> Function_2(var uParam0) //Position: 0x53E / 1342
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = uParam0;
	Var0 = FLOOR((bVar2 / 3600.0f));
	while (bVar2 <= 3600.0f)
	{
		bVar2 = (bVar2 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar2 / 60.0f));
	while (bVar2 <= 60.0f)
	{
		bVar2 = (bVar2 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar2);
	Var0.f_12 = (StackVal - IntToFloat(bVar2));
	return StackVal, Var0;
}

bool Function_3() //Position: 0x5AD / 1453
{
	return Function_4(16384);
}

int Function_4(int iParam0) //Position: 0x5B9 / 1465
{
	return Function_5(Global_120031.f_260, iParam0);
}

bool Function_5(var uParam0, int iParam1) //Position: 0x5CB / 1483
{
	return (uParam0 && iParam1) == 0;
}

void Function_6(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5D8 / 1496
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	struct<8> Var33;
	struct<8> Var41;
	struct<8> Var49;
	struct<8> Var57;
	struct<8> Var65;
	struct<8> Var73;
	int iVar81;
	
	iVar81 = Function_42(&iParam0);
	strcpy(&cVar1, "SC_AA", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(&cVar1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_12(&cVar1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var49);
	}
	else if (Function_7(&iParam0))
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var65);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var41);
	}
	if (iVar81 >= 4294967295)
	{
		if (StackVal >= 1)
		{
			UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var73);
		}
	}
}

bool Function_7(int iParam0) //Position: 0x779 / 1913
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_11(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_11(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_11(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_11(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_11(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_11(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_11(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_11(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_8(Global_46914[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_8(int iParam0) //Position: 0x864 / 2148
{
	if (!Function_10(iParam0))
	{
		return 0;
	}
	return Function_9(&(Global_43791[iParam0]), 4096);
}

int Function_9(var uParam0, int iParam1) //Position: 0x882 / 2178
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_10(int iParam0) //Position: 0x89F / 2207
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

float Function_11(int iParam0) //Position: 0x8B5 / 2229
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

struct<32> Function_12(char* cParam0) //Position: 0x8EE / 2286
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_13(char* cParam0) //Position: 0x910 / 2320
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_14(int iParam0, struct<533> Param1) //Position: 0x92B / 2347
{
	int iVar0;
	
	iVar0 = Function_42(&iParam0);
	Global_132987[iVar0125].f_172 = Param1.f_532;
	return;
}

void Function_15(struct<533> Param0) //Position: 0x948 / 2376
{
	switch (iParam2)
	{
		case 0x00000000:
			if (!Param0.f_452)
			{
				Function_30(&iParam1);
				Param0.f_452 = 1;
			}
			if (!Function_29(&iLocal_35))
			{
				Function_26(&iLocal_31);
			}
			iParam2 = 1;
			break;
		
		case 0x00000001:
			if (!(*&Param0 + 536)[02])
			{
				Function_25(&Param0, &iParam1);
			}
			if (!(*&Param0 + 536)[12])
			{
				Function_24(&Param0, &iParam1);
			}
			if (!(*&Param0 + 536)[22])
			{
				Function_21(&Param0, &iParam1);
			}
			if (Param0.f_508 > 3)
			{
				iParam2 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_29(&iLocal_31))
			{
				Function_19(&iLocal_31);
				Param0.f_532 = Function_17(&iLocal_31);
				Function_16(&iLocal_31);
			}
			Param0.f_488 = 0;
			Param0.f_496 = 1;
			break;
	}
	return;
}

void Function_16(vector3 vParam0) //Position: 0xA18 / 2584
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

var Function_17(vector3 vParam0) //Position: 0xA2F / 2607
{
	if (Function_29(&vParam0))
	{
		if (Function_18(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_18(int iParam0) //Position: 0xAFC / 2812
{
	return Function_5(iParam0, 2);
}

void Function_19(vector3 vParam0) //Position: 0xB0A / 2826
{
	if (Function_29(&vParam0))
	{
		if (!Function_18(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_20(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0xBCE / 3022
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_21(struct<517> Param0) //Position: 0xBDF / 3039
{
	if (Global_90152[05].f_12 == 1)
	{
		if (!Function_29(&iLocal_39))
		{
			Function_26(&iLocal_39);
		}
	}
	else if (Global_90152[05].f_12 == 3)
	{
		if (Function_29(&iLocal_39))
		{
			Function_19(&iLocal_39);
			(&Param0 + 536[22])->f_8 = Function_17(&iLocal_39);
			Function_16(&iLocal_39);
			if (StackVal <= Param0.f_516)
			{
				(&Param0 + 536[22])->f_4 = 1;
				Param0.f_504++;
			}
			(*&Param0 + 536)[22] = 1;
			Param0.f_508++;
			if (StackVal)
			{
				Function_23(&iParam1, &Param0 + 524, 3);
				Function_22(&iParam1, 2);
			}
		}
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0xC9E / 3230
{
	UI_CHALLENGE_SET_OBJECTIVE_STYLE(&uParam0, iParam1, 4);
	return;
}

void Function_23(var uParam0, var uParam1, bool bParam2) //Position: 0xCAD / 3245
{
	uParam1 = (uParam1 + (1.0f / TO_FLOAT(bParam2)));
	UI_CHALLENGE_SET_PROGRESS(&uParam0, 0.0f, 1.0f, -1.0f, "sc_progress");
	return;
}

void Function_24(struct<509> Param0) //Position: 0xCDA / 3290
{
	if (Global_90152[05].f_24)
	{
		if (Global_90152[05].f_32 == 1)
		{
			(&Param0 + 536[12])->f_4 = 1;
			Param0.f_504++;
		}
		(*&Param0 + 536)[12] = 1;
		Param0.f_508++;
		if (StackVal)
		{
			Function_23(&iParam1, &Param0 + 524, 3);
			Function_22(&iParam1, 1);
		}
	}
	return;
}

void Function_25(struct<533> Param0) //Position: 0xD50 / 3408
{
	if (!Function_29(&iLocal_35))
	{
		Function_26(&iLocal_35);
	}
	if (Global_90152[05].f_24)
	{
		if (Function_29(&iLocal_35))
		{
			Function_19(&iLocal_35);
			Param0.f_532 = Function_17(&iLocal_35);
			Function_16(&iLocal_35);
			if (Param0.f_512 <= Param0.f_532)
			{
				(&Param0 + 536[02])->f_4 = 1;
				Param0.f_504++;
			}
			(*&Param0 + 536)[02] = 1;
			Param0.f_508++;
			if (StackVal)
			{
				Function_23(&iParam1, &Param0 + 524, 3);
				Function_22(&iParam1, 0);
			}
		}
	}
	return;
}

void Function_26(int iParam0) //Position: 0xDF4 / 3572
{
	Function_27(&iParam0, 0.0f);
	return;
}

void Function_27(vector3 vParam0) //Position: 0xE01 / 3585
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_20(&vParam0, 1);
	Function_28(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0xE26 / 3622
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_29(int iParam0) //Position: 0xE3C / 3644
{
	return Function_5(iParam0, 1);
}

void Function_30(int iParam0) //Position: 0xE4A / 3658
{
	int iVar0;
	var uVar1;
	
	iVar0 = Function_42(&iParam0);
	Function_31(&iParam0);
	Global_132987[iVar0125].f_148++;
	Global_132987[iVar0125].f_164 = Global_132987[iVar0125].f_172;
	Global_132987[iVar0125].f_156 = Global_132987[iVar0125].f_152;
	if (Global_132987[iVar0125].f_148 >= 1)
	{
		memcpy(&uVar1, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1(Global_132987[iVar0125].f_164), 6);
		PRINT_HELP_FORMAT(3.0f, "SC_CHALLENGE_LAST_SCORE", &uVar1, 0, 0, 0, 2, 0, 0);
	}
	return;
}

void Function_31(int iParam0) //Position: 0xEE2 / 3810
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	char* cVar17[32];
	int iVar25;
	bool bVar26;
	
	iVar25 = Function_42(&iParam0);
	strcpy(&cVar1, "SC_AA", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "bMP"))
	{
		if (SC_CHALLENGE_GET_VAR_BOOL(&iParam0, "bMP"))
		{
			cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_MP") };
		}
	}
	else
	{
		cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_SP") };
	}
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar1, "_title") };
	UI_SET_STRING("SC_Challenge_Title", UI_GET_STRING(&Var9));
	if (StackVal && (*&Global_132987[iVar25125] + 212)[211] < 0.0f < 0)
	{
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1((*&Global_132987[iVar25125] + 212)[211]) };
		UI_SET_STRING("SC_UI_BEST_TIME", &cVar17);
		strcpy(&cVar17, "nSC_TROPHY", 32);
		stradd(&cVar17, I2STR(StackVal), 32);
		UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar17));
		UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (&iParam0 - (4 - 1)));
		bVar26 = true;
	}
	else if (StackVal && (*&Global_132987[iVar25125] + 212)[311] < 0.0f < 0)
	{
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1((*&Global_132987[iVar25125] + 212)[311]) };
		UI_SET_STRING("SC_UI_BEST_TIME", &cVar17);
		strcpy(&cVar17, "nSC_TROPHY", 32);
		stradd(&cVar17, I2STR(StackVal), 32);
		UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar17));
		UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (&iParam0 - (4 - 1)));
		bVar26 = true;
	}
	cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1((*&Global_132987[iVar25125] + 212)[511]) };
	UI_SET_STRING("SC_UI_GHOST_TIME", &cVar17);
	strcpy(&cVar17, "nSC_TROPHY", 32);
	stradd(&cVar17, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_GHOST_TROPHY", UI_GET_STRING(&cVar17));
	UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (&iParam0 - (4 - 1)));
	UI_SET_STRING("SC_UI_GHOST_GAMERTAG", &Global_132987[iVar25125] + 212[511] + 8);
	cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_1((*&Global_132987[iVar25125] + 212)[311]) };
	UI_SET_STRING("SC_UI_LAST_TIME", &cVar17);
	strcpy(&cVar17, "nSC_TROPHY", 32);
	stradd(&cVar17, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_LAST_TROPHY", UI_GET_STRING(&cVar17));
	if (NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		if (StackVal && (StackVal || (StackVal != StackVal < (StackVal && (*&Global_132987[iVar25125] + 212)[511] < 0.0f < 0) && (*&Global_132987[iVar25125] + 212)[511] >= (*&Global_132987[iVar25125] + 212)[211])))
		{
			Function_36("SC_CHALLENGE_START", 10.0f, 1, 0, 2, 1, 0);
			Function_36("SC_CHALLENGE_START_GHOST", 10.0f, 1, 0, 2, 1, 0);
		}
		else if (bVar26)
		{
			Function_36("SC_CHALLENGE_START", 10.0f, 1, 0, 2, 1, 0);
			Function_36("SC_CHALLENGE_START2", 10.0f, 1, 0, 2, 1, 0);
		}
		else
		{
			Function_36("SC_CHALLENGE_START", 10.0f, 1, 0, 2, 1, 0);
		}
	}
	else
	{
		Function_36("SC_CHALLENGE_START_NOT_SIGNED", 6.0f, 1, 0, 2, 1, 0);
	}
	return;
}

void Function_32(struct<533> Param0) //Position: 0x1397 / 5015
{
	switch (iParam2)
	{
		case 0x00000000:
			if (!Param0.f_452)
			{
				Function_30(&uParam1);
				Param0.f_452 = 1;
			}
			if (!Function_29(&iLocal_35))
			{
				Function_26(&iLocal_31);
			}
			iParam2 = 1;
			break;
		
		case 0x00000001:
			if (!(*&Param0 + 536)[02])
			{
				Function_35(&Param0, &uParam1);
			}
			if (!(*&Param0 + 536)[12])
			{
				Function_34(&Param0, &uParam1);
			}
			if (!(*&Param0 + 536)[22])
			{
				Function_33(&Param0, &uParam1);
			}
			if (Param0.f_508 > 3)
			{
				iParam2 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_29(&iLocal_31))
			{
				Function_19(&iLocal_31);
				Param0.f_532 = Function_17(&iLocal_31);
				Function_16(&iLocal_31);
			}
			Param0.f_488 = 0;
			Param0.f_496 = 1;
			break;
	}
	return;
}

void Function_33(struct<517> Param0) //Position: 0x1467 / 5223
{
	if (Global_90152[15].f_12 == 1)
	{
		if (!Function_29(&iLocal_39))
		{
			Function_26(&iLocal_39);
		}
	}
	else if (Global_90152[15].f_12 == 3)
	{
		if (Function_29(&iLocal_39))
		{
			Function_19(&iLocal_39);
			(&Param0 + 536[22])->f_8 = Function_17(&iLocal_39);
			Function_16(&iLocal_39);
			if (StackVal <= Param0.f_516)
			{
				(&Param0 + 536[22])->f_4 = 1;
				Param0.f_504++;
			}
		}
	}
	if (StackVal)
	{
		Function_23(&iParam1, &Param0 + 524, 3);
		Function_22(&iParam1, 2);
	}
	if (Global_90152[15].f_24)
	{
		(*&Param0 + 536)[22] = 1;
		Param0.f_508++;
	}
	return;
}

void Function_34(struct<509> Param0) //Position: 0x152F / 5423
{
	if (Global_90152[15].f_24)
	{
		if (Global_90152[15].f_32 == 1)
		{
			(&Param0 + 536[12])->f_4 = 1;
			Param0.f_504++;
		}
		(*&Param0 + 536)[12] = 1;
		Param0.f_508++;
		if (StackVal)
		{
			Function_23(&iParam1, &Param0 + 524, 3);
			Function_22(&iParam1, 1);
		}
	}
	return;
}

void Function_35(struct<533> Param0) //Position: 0x15A5 / 5541
{
	if (!Function_29(&iLocal_35))
	{
		Function_26(&iLocal_35);
	}
	if (Global_90152[15].f_24)
	{
		if (Function_29(&iLocal_35))
		{
			Function_19(&iLocal_35);
			Param0.f_532 = Function_17(&iLocal_35);
			Function_16(&iLocal_35);
			if (Param0.f_512 <= Param0.f_532)
			{
				(&Param0 + 536[02])->f_4 = 1;
				Param0.f_504++;
			}
			(*&Param0 + 536)[02] = 1;
			Param0.f_508++;
			if (StackVal)
			{
				Function_23(&iParam1, &Param0 + 524, 3);
				Function_22(&iParam1, 0);
			}
		}
	}
	return;
}

void Function_36(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1649 / 5705
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_37(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_37(int iParam0) //Position: 0x16D4 / 5844
{
	char* cVar0[16];
	
	if (!Function_38())
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

bool Function_38() //Position: 0x1713 / 5907
{
	if (Function_5(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_39(var uParam0, int iParam1) //Position: 0x172E / 5934
{
	bool bVar0;
	char* cVar2[32];
	struct<8> Var10;
	struct<8> Var18;
	struct<8> Var26;
	struct<8> Var34;
	struct<8> Var42;
	char* cVar50[32];
	struct<8> Var58;
	struct<8> Var66;
	struct<8> Var74;
	
	if (iParam1 < 4294967295 && iParam1 > 20)
	{
		strcpy(&cVar2, "SC_AA", 32);
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_SP") };
		if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nAAID"))
		{
			bVar0 = SC_CHALLENGE_GET_VAR_INT(&uParam0, "nAAID");
		}
		strcpy(&cVar50, "SC_AA_ICON_", 32);
		straddi(&cVar50, bVar0, 32);
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_") };
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, I2STR(bVar0)) };
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_title") };
		Var18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_des") };
		Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_obj1") };
		Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_obj2") };
		Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_obj3") };
		Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_goal1") };
		Var66 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_goal2") };
		Var74 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_13(&cVar2, "_goal3") };
		if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nnObjGoal1"))
		{
			UI_SET_STRING(&Var58, I2STR(SC_CHALLENGE_GET_VAR_INT(&uParam0, "nnObjGoal1")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nnObjGoal2"))
		{
			UI_SET_STRING(&Var66, I2STR(SC_CHALLENGE_GET_VAR_INT(&uParam0, "nnObjGoal2")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nnObjGoal3"))
		{
			UI_SET_STRING(&Var74, I2STR(SC_CHALLENGE_GET_VAR_INT(&uParam0, "nnObjGoal3")));
		}
		UI_CHALLENGE_CREATE(&uParam0, &Var10, &Var18);
		UI_CHALLENGE_SET_TROPHY_TYPE(&uParam0, Function_40(&uParam0));
		if (!Function_7(&uParam0))
		{
			UI_CHALLENGE_SET_TROPHY_TYPE(&uParam0, 8);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(&uParam0, &cVar50);
		UI_CHALLENGE_SET_OBJECTIVE(&uParam0, 0, &Var26);
		UI_CHALLENGE_SET_OBJECTIVE(&uParam0, 1, &Var34);
		UI_CHALLENGE_SET_OBJECTIVE(&uParam0, 2, &Var42);
		Function_6(&uParam0, 0.0f, (*&Global_132987[iParam1125] + 212)[311], (*&Global_132987[iParam1125] + 212)[211]);
	}
	return;
}

int Function_40(int iParam0) //Position: 0x1951 / 6481
{
	int iVar0;
	
	iVar0 = Function_42(&iParam0);
	if (iVar0 >= 4294967295)
	{
		switch (StackVal)
		{
			case 0x00000000:
				if (Global_132987[iVar0125].f_148 <= 1)
				{
					return 4;
				}
				return 0;
				break;
			
			case 0x00000001:
				return 3;
				break;
			
			case 0x00000002:
				return 2;
				break;
			
			case 0x00000003:
				return 1;
				break;
			}
	}
	return 0;
}

void Function_41(struct<533> Param0) //Position: 0x19B8 / 6584
{
	int iVar0;
	
	Param0.f_488 = 0;
	Param0.f_500 = 4294967295;
	Param0.f_512 = 0.0f;
	Param0.f_516 = 0.0f;
	Param0.f_520 = 0.0f;
	Param0.f_528 = 0;
	Param0.f_532 = 0.0f;
	Param0.f_452 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*&Param0 + 536)[iVar02] = 0;
		(&Param0 + 536[iVar02])->f_4 = 0;
		(&Param0 + 536[iVar02])->f_8 = 0.0f;
		iVar0++;
	}
	return;
}

var Function_42(int iParam0) //Position: 0x1A2D / 6701
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

