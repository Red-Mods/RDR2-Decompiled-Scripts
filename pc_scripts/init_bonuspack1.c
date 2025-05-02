//Decompiled with MagicRDR v1.0
//Function Count : 11
//Statics Count : 1
//Natives Count : 21
//Parameters Count : 1

#region Local Var
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = uScriptParam_0 & 1 == false;
	bVar1 = uScriptParam_0 & 2 == false;
	if (uScriptParam_0 & 16 == 0)
	{
		if (bVar0 && bVar1)
		{
			Function_10();
			PRINTSTRING("Displaying DLC Requires TU Message...");
			PRINTNL();
			UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", "DLC_Requires_TU");
			UI_ACTIVATE("NetConf_BarkerLocked");
		}
	}
	else if (!bVar1)
	{
		PRINTSTRING("Initializing the BonusPack1 - WAR HORSE!!!!");
		PRINTNL();
		if (!Function_8())
		{
			Function_5(16384);
			if (!Global_39428[9])
			{
				if (!Function_4())
				{
					Function_1(52, 1, 0);
				}
				Global_39428[9] = 1;
			}
		}
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(bool bParam0, bool bParam1, int iParam2) //Position: 0x110 / 272
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_3(bParam0), Function_2()) == 0)
		{
			ADD_ITEM(Function_3(bParam0), Function_2(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_3(bParam0), Function_2(), &iParam2);
	return 1;
}

var Function_2() //Position: 0x15E / 350
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_3(bool bParam0) //Position: 0x173 / 371
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

bool Function_4() //Position: 0x267 / 615
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x292 / 658
{
	Function_6(&Global_131807 + 1304, iParam0);
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x2A4 / 676
{
	Function_7(&uParam0, iParam1);
	return;
}

void Function_7(var uParam0, var uParam1) //Position: 0x2B2 / 690
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_8() //Position: 0x2C3 / 707
{
	if (Function_9(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_9(var uParam0, bool bParam1) //Position: 0x2DE / 734
{
	return (uParam0 && bParam1) == 0;
}

void Function_10() //Position: 0x2EB / 747
{
	var uVar0;
	
	uVar0 = "$/content/DLC/BonusPack1/stringtable/DlcTuErrorMsg.strtbl";
	if (IS_PS3())
	{
		uVar0 = "$/content/DLC/BonusPack1/stringtable/DlcTuErrorMsg_ps3.strtbl";
	}
	if (IS_PS4())
	{
		uVar0 = "$/content/DLC/BonusPack1/stringtable/DlcTuErrorMsg_ps4.strtbl";
	}
	if (IS_SWITCH())
	{
		uVar0 = "$/content/DLC/BonusPack1/stringtable/DlcTuErrorMsg_switch.strtbl";
	}
	if (IS_PC())
	{
		uVar0 = "$/content/DLC/BonusPack1/stringtable/DlcTuErrorMsg_win32.strtbl";
	}
	STRINGTABLE_APPEND_TABLE(&uVar0);
	return;
}

