//Decompiled with MagicRDR v1.0
//Function Count : 12
//Statics Count : 10
//Natives Count : 8
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2> Local_4 = { 0, 0 } ;
	int iLocal_6 = 0;
	bool bLocal_7 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_6 = 0;
	Global_29003 = 1;
	Local_4 = { StackVal, ScriptParam_0 };
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_6)
		{
			case 0x00000000:
				Function_11(&(Global_29008[ScriptParam_0]), 4);
				Function_10();
				bLocal_7 = false;
				iLocal_6 = 1;
				break;
			
			case 0x00000001:
				if (Function_9(41, 0))
				{
					if (!Global_30619 != 3)
					{
						bVar0 = LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase3", 0);
					}
				}
				else if (Function_9(40, 0) || Function_3(41))
				{
					if (!Global_30619 != 2)
					{
						LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase2", 0);
					}
				}
				else if (Function_9(36, 0))
				{
					if (!Global_30619 != 1)
					{
						LAUNCH_NEW_SCRIPT("content/Ambient/MexicanRevolution/mexrev_phase1b", 0);
					}
				}
				if (Function_9(41, 0) && !IS_SCRIPT_VALID(bVar0))
				{
					Function_11(&(Global_29008[Global_30621[1]]), 1024);
					iLocal_6 = 2;
					Function_2(Global_34206, 0);
					bLocal_7 = false;
				}
				else if (!Function_9(24, 0))
				{
					Function_1(&(Global_29008[Global_30621[0]]), 1024);
					Function_1(&(Global_29008[Global_30621[1]]), 1);
					Function_1(&(Global_29008[Global_30621[1]]), 2);
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
	Function_1(&(Global_29008[Local_4]), 64);
	Function_1(&(Global_29008[Local_4]), 4);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1E1 / 481
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2(int iParam0, int iParam1) //Position: 0x1F8 / 504
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

int Function_3(int iParam0) //Position: 0x25C / 604
{
	int iVar0;
	
	if (!Function_8(iParam0))
	{
		return 0;
	}
	iVar0 = Function_7(iParam0);
	if (!Function_4(Function_7(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_4(int iParam0) //Position: 0x292 / 658
{
	if (!Function_6(iParam0))
	{
		return 0;
	}
	if (!Function_5(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x2B6 / 694
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_6(int iParam0) //Position: 0x2CB / 715
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_7(int iParam0) //Position: 0x2E2 / 738
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_8(int iParam0) //Position: 0x2FC / 764
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0, bool bParam1) //Position: 0x312 / 786
{
	int iVar0;
	
	iVar0 = Function_7(iParam0);
	if (!Function_6(iVar0))
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

void Function_10() //Position: 0x34F / 847
{
	(&Global_34208 + 12)->f_344 = 0;
	(&Global_34208 + 724)->f_344 = 0;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x368 / 872
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

