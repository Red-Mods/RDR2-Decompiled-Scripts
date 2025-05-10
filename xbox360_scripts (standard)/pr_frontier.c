//Decompiled with MagicRDR v1.0
//Function Count : 12
//Statics Count : 8
//Natives Count : 4
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	bool bLocal_5 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	Global_29003 = 0;
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_4)
		{
			case 0x00000000:
				Function_11(&(Global_29008[iScriptParam_0]), 4);
				bLocal_5 = false;
				iLocal_4 = 1;
				break;
			
			case 0x00000001:
				if (Function_7(24, 0))
				{
					Function_11(&(Global_29008[Global_30621[0]]), 1024);
					iLocal_4 = 2;
					Function_6(Global_34207, 0);
					bLocal_5 = false;
				}
				break;
			
			case 0x00000002:
				break;
		}
		WAIT(bLocal_5);
	}
	Function_2(iScriptParam_0);
	Function_1(&(Global_29008[iScriptParam_0]), 64);
	Function_1(&(Global_29008[iScriptParam_0]), 4);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xA3 / 163
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0xBA / 186
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0xF0 / 240
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x112 / 274
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x128 / 296
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6(int iParam0, int iParam1) //Position: 0x13E / 318
{
	if (Global_34207 == iParam0)
	{
		(&Global_34208 + 12)->f_344 = iParam1;
	}
	else if (Global_34206 == iParam0)
	{
		(&Global_34208 + 724)->f_344 = iParam1;
	}
	else
	{
		LOG_ERROR("Invalid train ID specified in TRAIN_SET_STATE");
	}
	return;
}

bool Function_7(var uParam0, bool bParam1) //Position: 0x1A2 / 418
{
	int iVar0;
	
	iVar0 = Function_9(uParam0);
	if (!Function_8(iVar0))
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

bool Function_8(int iParam0) //Position: 0x1DF / 479
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_9(int iParam0) //Position: 0x1F6 / 502
{
	if (!Function_10(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_10(int iParam0) //Position: 0x210 / 528
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_11(var uParam0, int iParam1) //Position: 0x226 / 550
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

