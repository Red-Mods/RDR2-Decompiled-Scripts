//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 2
//Natives Count : 17
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar5;
	bool bVar6;
	int iVar7;
	
	uVar5 = GRINGO_GET_FIRST_CHILD(3, &uScriptParam_0);
	Function_15(&iVar0, &uVar5);
	while (IS_GRINGO_ACTIVE())
	{
		if (GRINGO_HAS_PENDING_MESSAGE())
		{
			bVar6 = false;
			iVar7 = 0;
			switch (GRINGO_GET_MESSAGE_TYPE())
			{
				case 0x00000001:
				case 0x00000000:
					if (Function_9(&iVar0, &iVar7))
					{
						bVar6 = true;
					}
					break;
				
				case 0x00000002:
					break;
			}
			GRINGO_SET_MESSAGE_RETURN(bVar6);
			if (bVar6)
			{
				Function_8(&iVar0 + 12);
				Function_2(&iVar0 + 12);
				GRINGO_SET_REQUEST_STRING(Function_1(&iVar0 + 32));
			}
		}
		GRINGO_STOP();
	}
	return;
}

var Function_1(int iParam0) //Position: 0x80 / 128
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_GRINGO_STRING_ATTR("UseName", &iParam0, &iVar0);
	if (iVar0 < 0)
	{
		return "Use";
	}
	return &iVar1;
}

void Function_2(int iParam0) //Position: 0xAB / 171
{
	if (!Function_6(&iParam0))
	{
		Function_3(&iParam0, 0.0f);
	}
	return;
}

void Function_3(vector3 vParam0) //Position: 0xC2 / 194
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_5(&vParam0, 1);
	Function_4(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0xE7 / 231
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0xFD / 253
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_6(int iParam0) //Position: 0x10E / 270
{
	return Function_7(iParam0, 1);
}

bool Function_7(var uParam0, int iParam1) //Position: 0x11C / 284
{
	return (uParam0 && iParam1) == 0;
}

void Function_8(vector3 vParam0) //Position: 0x129 / 297
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

bool Function_9(vector3 vParam0) //Position: 0x140 / 320
{
	var uVar0;
	
	uVar0 = GRINGO_GET_MSG_COMPONENT_CONTEXT();
	if (IS_GRINGO_COMPONENT_VALID(&uVar0))
	{
		if (!&vParam0 != GRINGO_GET_REQUESTING_ACTOR())
		{
			if (Function_6(&vParam0 + 12))
			{
				if (Function_13(&vParam0 + 12) > vParam0.z)
				{
					return 0;
				}
			}
			bParam1 = 1;
			return 1;
		}
		bParam1 = 0;
		return 1;
	}
	Function_10("Gringo use component not valid!", 2.0f, 0, 2, 1, 0);
	return 0;
}

void Function_10(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1BE / 446
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_11(int iParam0) //Position: 0x243 / 579
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

bool Function_12() //Position: 0x282 / 642
{
	if (Function_7(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

float Function_13(vector3 vParam0) //Position: 0x29D / 669
{
	if (Function_6(&vParam0))
	{
		if (Function_14(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_14(int iParam0) //Position: 0x36A / 874
{
	return Function_7(iParam0, 2);
}

void Function_15(vector3 vParam0) //Position: 0x378 / 888
{
	(&vParam0 + 32) = &uParam1;
	vParam0.f_8 = 1.0f;
	GET_GRINGO_FLOAT_ATTR(&vParam0 + 8, "ReuseDelay", &uParam1);
	return;
}

