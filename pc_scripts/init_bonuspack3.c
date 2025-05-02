//Decompiled with MagicRDR v1.0
//Function Count : 7
//Statics Count : 1
//Natives Count : 11
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
			Function_6();
			PRINTSTRING("Displaying DLC Requires TU Message...");
			PRINTNL();
			UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_BarkerLocked", "DLC_Requires_TU");
			UI_ACTIVATE("NetConf_BarkerLocked");
		}
	}
	else if (!bVar1)
	{
		PRINTSTRING("Initializing the BonusPack3 - GOLDEN GUNS!!!!");
		PRINTNL();
		if (!Function_4())
		{
			Function_1(65536);
		}
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xF1 / 241
{
	Function_2(&Global_131807 + 1304, iParam0);
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x103 / 259
{
	Function_3(&uParam0, iParam1);
	return;
}

void Function_3(var uParam0, var uParam1) //Position: 0x111 / 273
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_4() //Position: 0x122 / 290
{
	if (Function_5(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_5(var uParam0, bool bParam1) //Position: 0x13D / 317
{
	return (uParam0 && bParam1) == 0;
}

void Function_6() //Position: 0x14A / 330
{
	var uVar0;
	
	uVar0 = "$/content/DLC/BonusPack3/stringtable/DlcTuErrorMsg.strtbl";
	if (IS_PS3())
	{
		uVar0 = "$/content/DLC/BonusPack3/stringtable/DlcTuErrorMsg_ps3.strtbl";
	}
	if (IS_PS4())
	{
		uVar0 = "$/content/DLC/BonusPack3/stringtable/DlcTuErrorMsg_ps4.strtbl";
	}
	if (IS_SWITCH())
	{
		uVar0 = "$/content/DLC/BonusPack3/stringtable/DlcTuErrorMsg_switch.strtbl";
	}
	if (IS_PC())
	{
		uVar0 = "$/content/DLC/BonusPack3/stringtable/DlcTuErrorMsg_win32.strtbl";
	}
	STRINGTABLE_APPEND_TABLE(&uVar0);
	return;
}

