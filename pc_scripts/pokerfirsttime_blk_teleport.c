//Decompiled with MagicRDR v1.0
//Function Count : 9
//Statics Count : 12
//Natives Count : 16
//Parameters Count : 12

#region Local Var
	struct<6> ScriptParam_0 = { 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<2> Var0;
	bool bVar2;
	
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(12, false, 0));
	Var0 = Vector(720,806f, 78,477f, 1331,567f);
	bVar2 = 17,542f;
	CAMERA_RESET(0);
	TELEPORT_ACTOR_WITH_HEADING(GET_PLAYER_ACTOR(0), Var0, bVar2, 1, 1, 1);
	while (!STREAMING_IS_WORLD_LOADED() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	CAMERA_RESET(0);
	Function_4(1, 0, 1);
	while ((!Function_1(Global_46914[0]) || !STREAMING_IS_WORLD_LOADED()) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (HUD_IS_FADED())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	return;
}

bool Function_1(int iParam0) //Position: 0x90 / 144
{
	if (!Function_3(iParam0))
	{
		return 1;
	}
	return Function_2(&(Global_43791[iParam0]), 4);
}

bool Function_2(var uParam0, int iParam1) //Position: 0xAC / 172
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_3(int iParam0) //Position: 0xC9 / 201
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_4(var uParam0, bool bParam1, int iParam2) //Position: 0xDF / 223
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_3(Global_43789))
		{
			Function_8(&(Global_43791[Global_43789]), 131072);
			Function_7(&(Global_43791[Global_43789]), 2097152);
			Function_5(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_2(&(Global_43791[iVar0]), 4) || Function_2(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_7(&(Global_43791[iVar0]), 2097155);
					Function_8(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (uParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_5(int iParam0) //Position: 0x1EB / 491
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_6())
			{
				return;
			}
		}
		if (!Function_2(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_6() //Position: 0x26A / 618
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_2(&(Global_43791[iVar0]), 4) || Function_2(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_7(var uParam0, int iParam1) //Position: 0x2D3 / 723
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x2ED / 749
{
	uParam0 = (uParam0 || iParam1);
	return;
}

