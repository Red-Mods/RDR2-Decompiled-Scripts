//Decompiled with MagicRDR v1.0
//Function Count : 10
//Statics Count : 7
//Natives Count : 19
//Parameters Count : 7

#region Local Var
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	bool bVar3;
	
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(12, false, false));
	vVar0 = { -3637,646f, 42,768f, 2101,523f };
	bVar3 = 126,589f;
	CAMERA_RESET(0);
	TELEPORT_ACTOR_WITH_HEADING(GET_PLAYER_ACTOR(0), vVar0, bVar3, 1, true, 1);
	while (!STREAMING_IS_WORLD_LOADED() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	CAMERA_RESET(0);
	Function_4(1, 0, 1);
	while ((!Function_1(Global_30658[1]) || !STREAMING_IS_WORLD_LOADED()) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (HUD_IS_FADED())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1(int iParam0) //Position: 0x93 / 147
{
	if (!Function_3(iParam0))
	{
		return 1;
	}
	return Function_2(&(Global_29008[iParam0]), 4);
}

bool Function_2(var uParam0, int iParam1) //Position: 0xAF / 175
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_3(int iParam0) //Position: 0xCB / 203
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_4(var uParam0, bool bParam1, int iParam2) //Position: 0xE1 / 225
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_3(Global_29006))
		{
			Function_9(&(Global_29008[Global_29006]), 131072);
			Function_8(&(Global_29008[Global_29006]), 2097152);
			Function_6(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_2(&(Global_29008[iVar0]), 4) || Function_2(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_8(&(Global_29008[iVar0]), 2097155);
					Function_9(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_5())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_5() //Position: 0x1EC / 492
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_6(int iParam0) //Position: 0x1F5 / 501
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_7())
			{
				return;
			}
		}
		if (!Function_2(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_7() //Position: 0x274 / 628
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_2(&(Global_29008[iVar0]), 4) || Function_2(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_8(var uParam0, int iParam1) //Position: 0x2D1 / 721
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x2E8 / 744
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

