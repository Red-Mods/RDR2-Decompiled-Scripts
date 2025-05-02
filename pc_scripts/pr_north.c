//Decompiled with MagicRDR v1.0
//Function Count : 8
//Statics Count : 10
//Natives Count : 5
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	bool bLocal_7 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_6 = 0;
	Global_43786 = 2;
	iLocal_4 = &iScriptParam_0;
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_6)
		{
			case 0x00000000:
				Function_7(&(Global_43791[iScriptParam_0]), 4);
				Function_6();
				bLocal_7 = false;
				iLocal_6 = 1;
				break;
			
			case 0x00000001:
				if (Function_2(48, 0))
				{
					Function_7(&(Global_43791[Global_46722[2]]), 1024);
					iLocal_6 = 2;
					bLocal_7 = false;
				}
				else if (!Function_2(41, 0))
				{
					Function_1(&(Global_43791[Global_46722[1]]), 1024);
					Function_1(&(Global_43791[Global_46722[2]]), 1);
					Function_1(&(Global_43791[Global_46722[2]]), 2);
					iLocal_6 = 2;
					bLocal_7 = false;
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
			
			case 0x00000002:
				break;
		}
		WAIT(bLocal_7);
	}
	Function_1(&(Global_43791[iLocal_4]), 64);
	Function_1(&(Global_43791[iLocal_4]), 4);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xE8 / 232
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_2(int iParam0, bool bParam1) //Position: 0x102 / 258
{
	int iVar0;
	
	iVar0 = Function_4(iParam0);
	if (!Function_3(iVar0))
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

bool Function_3(int iParam0) //Position: 0x140 / 320
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_4(int iParam0) //Position: 0x157 / 343
{
	if (!Function_5(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_5(int iParam0) //Position: 0x171 / 369
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x187 / 391
{
	(&Global_53580 + 20)->f_420 = 0;
	(&Global_53580 + 980)->f_420 = 0;
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x1A0 / 416
{
	uParam0 = (uParam0 || iParam1);
	return;
}

