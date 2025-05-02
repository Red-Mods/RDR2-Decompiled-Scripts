//Decompiled with MagicRDR v1.0
//Function Count : 12
//Statics Count : 2
//Natives Count : 14
//Parameters Count : 2

#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	
	iVar0 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, "nStatId");
	iVar1 = SC_CHALLENGE_GET_VAR_INT(&uScriptParam_0, "nCount");
	fVar2 = SC_CHALLENGE_GET_VAR_FLOAT(&uScriptParam_0, "fTime");
	bVar3 = SC_CHALLENGE_GET_VAR_BOOL(&uScriptParam_0, "bCom");
	if (iVar0 < 4294967295 && iVar0 > 696)
	{
		fVar4 = 0.0f;
		bVar5 = false;
		iVar6 = 0;
		iVar7 = 4294967295;
		fVar4 = Global_54086[iVar0];
		bVar5 = false;
		while (!bVar5)
		{
			if ((Global_54086[iVar0] - fVar4) < 0.0f)
			{
				Function_9("SC_CHALLENGE_EXAMPLE_START", 7,5f, 1, 0, 2, 1, 0);
				bVar5 = true;
			}
			WAIT(100);
		}
		Function_6(&uVar8, 0.0f);
		SC_CHALLENGE_RESET_EXPIRATION_STATE(&uScriptParam_0);
		bVar5 = false;
		iVar6 = 0;
		while (!bVar5)
		{
			if (Global_54086[iVar0] - fVar4) < IntToFloat(iVar1)
			{
				iVar6 = 1;
				bVar5 = true;
			}
			if (Function_1(&uVar8, fVar2))
			{
				Function_9("SC_CHALLENGE_EXAMPLE_RAN_OUT_OF_TIME", 7,5f, 1, 0, 2, 1, 0);
				bVar5 = true;
			}
			iVar7 = SC_CHALLENGE_GET_EXPIRATION_STATE(&uScriptParam_0);
			if (iVar7 == 3)
			{
				bVar5 = true;
			}
			WAIT(100);
		}
		SC_CHALLENGE_PROCESS_EXPIRATION(&uScriptParam_0);
		iVar7 = SC_CHALLENGE_GET_EXPIRATION_STATE(&uScriptParam_0);
		while (iVar7 == 0)
		{
			iVar7 = SC_CHALLENGE_GET_EXPIRATION_STATE(&uScriptParam_0);
			WAIT(100);
		}
		if (iVar7 == 3)
		{
			Function_9("SC_CHALLENGE_EXAMPLE_EXPIRED", 7,5f, 1, 0, 2, 1, 0);
			bVar5 = true;
			Jump @478; //curOff = 409
		}
		else if (iVar7 != 2 && iVar6)
		{
			Function_9("SC_CHALLENGE_EXAMPLE_SUCCESS", 7,5f, 1, 0, 2, 1, 0);
			Jump @97; //curOff = 469
		}
	else
	{
		}
	}
}

bool Function_1(var uParam0, float fParam1) //Position: 0x1E8 / 488
{
	if (Function_5(&uParam0))
	{
		if (Function_2(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_2(vector3 vParam0) //Position: 0x206 / 518
{
	if (Function_5(&vParam0))
	{
		if (Function_3(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_3(int iParam0) //Position: 0x2D3 / 723
{
	return Function_4(iParam0, 2);
}

bool Function_4(var uParam0, int iParam1) //Position: 0x2E1 / 737
{
	return (uParam0 && iParam1) == 0;
}

bool Function_5(int iParam0) //Position: 0x2EE / 750
{
	return Function_4(iParam0, 1);
}

void Function_6(vector3 vParam0) //Position: 0x2FC / 764
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_8(&vParam0, 1);
	Function_7(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x321 / 801
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x337 / 823
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_9(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x348 / 840
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_10(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_10(int iParam0) //Position: 0x3D3 / 979
{
	char* cVar0[16];
	
	if (!Function_11())
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

bool Function_11() //Position: 0x412 / 1042
{
	if (Function_4(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

