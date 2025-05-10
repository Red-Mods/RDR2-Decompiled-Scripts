//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 1
//Natives Count : 17
//Parameters Count : 1

#region Local Var
	bool bScriptParam_0 = false;
#endregion

void main() //Position: 0x0 / 0
{
	struct<21> Var0;
	
	uVar6 = GRINGO_GET_FIRST_CHILD(3, bScriptParam_0);
	Function_15(&Var0, uVar6);
	while (IS_GRINGO_ACTIVE())
	{
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			bVar7 = false;
			iVar8 = 0;
			switch (GRINGO_GET_MESSAGE_TYPE())
			{
				case 0x00000001:
				case 0x00000000:
					if (Function_9(&Var0, &iVar8))
					{
						bVar7 = true;
					}
					break;
				
				case 0x00000002:
					break;
			}
			GRINGO_SET_MESSAGE_RETURN(bVar7);
			if (bVar7)
			{
				Function_8(&Var0 + 8);
				Function_2(&Var0 + 8);
				GRINGO_SET_REQUEST_STRING(Function_1(Var0.f_20));
			}
		}
		GRINGO_STOP();
	}
	return;
}

var Function_1(bool bParam0) //Position: 0x7C / 124
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GRINGO_STRING_ATTR("UseName", bParam0, &iVar0);
	if (iVar0 < 0)
	{
		return "Use";
	}
	return iVar1;
}

void Function_2(int iParam0) //Position: 0xA4 / 164
{
	if (!Function_6(iParam0))
	{
		Function_3(iParam0, 0.0f);
	}
	return;
}

void Function_3(var uParam0, float fParam1) //Position: 0xB9 / 185
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_5(uParam0, 1);
	Function_4(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0xDA / 218
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0xED / 237
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_6(int iParam0) //Position: 0xFC / 252
{
	return Function_7(*iParam0, 1);
}

bool Function_7(var uParam0, int iParam1) //Position: 0x109 / 265
{
	return (uParam0 && iParam1) == 0;
}

void Function_8(int iParam0) //Position: 0x116 / 278
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_9(int iParam0, bool bParam1) //Position: 0x12A / 298
{
	bool bVar0;
	
	bVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		if (!*iParam0 != GRINGO_GET_REQUESTING_ACTOR())
		{
			if (Function_6(iParam0 + 8))
			{
				if (StackVal > Function_13(iParam0 + 8))
				{
					return 0;
				}
			}
			*bParam1 = 1;
			return 1;
		}
		*bParam1 = 0;
		return 1;
	}
	Function_10("Gringo use component not valid!", 2.0f, 0, 2, 1, 0);
	return 0;
}

void Function_10(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1A0 / 416
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_11(int iParam0) //Position: 0x217 / 535
{
	char* cVar0[16];
	
	if (!Function_12())
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

bool Function_12() //Position: 0x256 / 598
{
	if (Function_7(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

float Function_13(int iParam0) //Position: 0x271 / 625
{
	if (Function_6(iParam0))
	{
		if (Function_14(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_14(int iParam0) //Position: 0x339 / 825
{
	return Function_7(*iParam0, 2);
}

void Function_15(int iParam0, bool bParam1) //Position: 0x346 / 838
{
	iParam0->f_20 = bParam1;
	iParam0->f_4 = 1.0f;
	GET_GRINGO_FLOAT_ATTR(iParam0 + 4, "ReuseDelay", bParam1);
	return;
}

