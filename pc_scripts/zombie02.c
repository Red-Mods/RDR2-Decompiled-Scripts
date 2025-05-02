//Decompiled with MagicRDR v1.0
//Function Count : 630
//Statics Count : 1760
//Natives Count : 781
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2681> Local_4 = { 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_1260 = 0;
	fLocal_1528 = 2.0f;
	Local_1683 = Vector(-3860,474f, 8,108f, 3664,828f);
	uLocal_1686 = Vector(-3871,219f, 7,9f, 3663,52f);
	Local_1689 = Vector(-3866,824f, 8,031f, 3664,106f);
	iLocal_1698 = 0;
	iLocal_1702 = 0;
	iLocal_1703 = 0;
	iLocal_1704 = 0;
	iLocal_1705 = 0;
	iLocal_1706 = 0;
	iLocal_1707 = 0;
	iLocal_1708 = 0;
	bLocal_1709 = false;
	iLocal_1710 = 0;
	iLocal_1713 = 0;
	iLocal_1716 = 0;
	iLocal_1717 = 0;
	iLocal_1719 = 0;
	bLocal_1720 = false;
	iLocal_1740 = 1;
	iLocal_1742 = 1;
	iLocal_1743 = 1;
	iLocal_1744 = 1;
	Local_1263 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_1349 = 99;
	iLocal_1350 = 6;
	iLocal_1337 = 1000;
	Function_629(0);
	while (Function_225())
	{
		Function_178();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0xD4 / 212
{
	if (DECOR_CHECK_EXIST(&Global_54076, "NoGringoCamera"))
	{
		DECOR_REMOVE(&Global_54076, "NoGringoCamera");
	}
	Function_177(&iLocal_1261);
	Function_177(&Local_4);
	DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1636, 0);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	Function_176();
	Function_175(&(Global_43791[Global_46796[4]]), 256);
	Function_146(bLocal_1526, 1, 1, 1, 1, 1, 1, 1);
	Function_143(2, 0, 1, 0, 1);
	Function_142();
	Function_138(&iLocal_1275);
	Function_134();
	DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
	Function_132();
	if (IS_ITERATOR_VALID(&uLocal_1352))
	{
		DESTROY_ITERATOR(&uLocal_1352);
	}
	RELEASE_LAYOUT_REF(&iLocal_1261);
	if (bLocal_1525)
	{
		Function_26(Local_1263, 1, 1, 1, 0);
	}
	else if (bLocal_1526)
	{
		Function_22(Local_1263);
	}
	else
	{
		Function_2(Local_1263);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x1BB / 443
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x1DC / 476
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1F9 / 505
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x21C / 540
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x233 / 563
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	Function_7(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x2D5 / 725
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x2F8 / 760
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&uParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&uParam0));
	return;
}

void Function_9() //Position: 0x342 / 834
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x35B / 859
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x3AE / 942
{
	struct<4> Var0;
	
	if (!Function_20(bParam1))
	{
		return;
	}
	switch (Function_17(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(bParam1), Function_15(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x4D8 / 1240
{
	char* cVar0[16];
	
	if (!Function_13())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_13() //Position: 0x512 / 1298
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x52D / 1325
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x53A / 1338
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x55A / 1370
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x571 / 1393
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x58C / 1420
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_19(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7D3 / 2003
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x7FF / 2047
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x823 / 2083
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x838 / 2104
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x856 / 2134
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	iVar0 = Function_17(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[bParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x8FC / 2300
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0x93B / 2363
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB91 / 2961
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(bParam0) == 1)
	{
		iVar2 = Function_15(bParam0);
		Function_127(&(Global_6667[iVar228]));
		Function_126(4194304);
		if (&bParam3)
		{
			Function_123(iVar2, &uVar0, 0);
		}
		else if (&bParam4)
		{
			Function_123(iVar2, &uVar0, 0);
		}
		uVar1 = Function_122();
		if (&bParam1)
		{
			Function_100(iVar2, bParam0, uVar1);
			Function_99();
		}
	}
	Global_53524.f_64 = 0;
	Global_53524.f_68 = 0;
	Global_21684[bParam07].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	Function_42(bParam0, &bParam1, &uParam2, uVar1);
	if (Function_17(bParam0) == 1)
	{
		if (&bParam1)
		{
		}
	}
	Function_28(0);
	iVar2 = Function_15(bParam0);
	if (iVar2 == 1)
	{
		Function_27("ZOMBIE_STORY_1_SHORT", (7,5f + 5.0f), 1, 2, 0, 0, 0, 0);
	}
	else if (iVar2 == 2)
	{
		Function_27("ZOMBIE_STORY_4_SHORT", 7,5f, 1, 2, 0, 0, 0, 0);
	}
}

void Function_27(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xCA0 / 3232
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_28(int iParam0) //Position: 0xD35 / 3381
{
	int iVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_39(1, 0))
	{
		Function_37("ZOMBIE_STORY_1_OBJ");
		if (!Function_36(2))
		{
			iVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_36(4) && !Function_34(0))
	{
		iVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_36(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_2Nigel_OBJ");
		Function_37("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_36(8) && !Function_36(6))
		{
			iVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_36(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_36(8))
		{
			iVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_36(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_36(6))
		{
			iVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_31(&Global_6667[228] + 184, 2) || ((((((Function_36(14) && Function_36(18)) && Function_36(37)) && Function_36(7)) && Function_36(11)) && Function_36(5)) && Function_36(21)))
	{
		Function_37("ZOMBIE_STORY_3_OBJ");
		if (!Function_39(2, 0))
		{
			iVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_39(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_4_OBJ");
		if (!Function_36(24))
		{
			iVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_31(&Global_6667[328] + 184, 2) || ((Function_36(27) && Function_36(1)) && Function_36(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_5_OBJ");
		if (!Function_39(3, 0))
		{
			iVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_39(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_36(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[243].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[443].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[343].f_224);
		bVar1 = false;
		if (Function_36(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[243] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[243].f_224, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_36(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_36(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[443] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_30(Global_46948)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[443].f_224, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_30(Global_46948) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater3_OBJ", 4, 0);
			}
			if (Function_30(Global_46948) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_29(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_29(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_36(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_36(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_36(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[643].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[743].f_224);
		if (Function_36(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[643].f_224, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_36(6) && Function_30(Global_46949) < 0) && Function_30(Global_46951) < 0) && Function_30(Global_46952) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[643].f_224, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[743].f_224, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_36(11))
	{
		if (Function_36(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_99725[843].f_224);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_29(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_29(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_29(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_29(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_29(491) <= 5 && Function_29(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_36(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_36(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[1043].f_224, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(&iVar0))
	{
		Function_27(&iVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_29(int iParam0) //Position: 0x1656 / 5718
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_30(bool bParam0) //Position: 0x1697 / 5783
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

bool Function_31(int iParam0, int iParam1) //Position: 0x16B1 / 5809
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_32() //Position: 0x16CE / 5838
{
	return STRING_TO_HASH(Function_33());
}

var Function_33() //Position: 0x16DA / 5850
{
	return "ZOMBIE_STORY";
}

bool Function_34(int iParam0) //Position: 0x16EF / 5871
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_35(iParam0)7].f_12 < 0;
}

int Function_35(int iParam0) //Position: 0x1755 / 5973
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_46948;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46948;
			break;
		
		case 0x00000001:
			return Global_46949;
			break;
		
		case 0x00000004:
			return Global_46950;
			break;
		
		case 0x00000003:
			return Global_46951;
			break;
		
		case 0x00000002:
			return Global_46952;
			break;
	}
	return Global_46948;
}

bool Function_36(int iParam0) //Position: 0x1817 / 6167
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_37(int iParam0) //Position: 0x182C / 6188
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_32(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_33(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_32(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_32(), &iParam0, 0, 3, false);
	Function_38(Function_32(), 0);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x1875 / 6261
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

bool Function_39(int iParam0, bool bParam1) //Position: 0x189A / 6298
{
	int iVar0;
	
	iVar0 = Function_40(iParam0);
	if (!Function_16(iVar0))
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

int Function_40(int iParam0) //Position: 0x18D8 / 6360
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_41(int iParam0) //Position: 0x18F2 / 6386
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_42(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1908 / 6408
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_98())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_98())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_94();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_98())
	{
		Function_93();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", bParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[bParam07].f_4 = 4;
		}
		else
		{
			Global_21684[bParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[bParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_87(bParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
			{
				switch (bVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_15(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_45(1);
			Function_44(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_43(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_43(int iParam0, struct<41> Param1) //Position: 0x1B66 / 7014
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_44(bool bParam0, int iParam1) //Position: 0x1BA4 / 7076
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_45(bool bParam0) //Position: 0x1BE3 / 7139
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_76();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_46(&Global_99144, 1);
		Function_46(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_46(bool bParam0, bool bParam1) //Position: 0x1C38 / 7224
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_47() //Position: 0x1C4E / 7246
{
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_55(0);
	Function_55(0);
	Function_52();
	Function_51();
	Function_50();
	Function_49();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_48();
	return;
}

void Function_48() //Position: 0x1C99 / 7321
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_49() //Position: 0x1D9F / 7583
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_131716 = fVar0;
	return;
}

void Function_50() //Position: 0x1DD2 / 7634
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_51() //Position: 0x1F65 / 8037
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_52() //Position: 0x211E / 8478
{
	Function_53(&Global_42918, 1, 0);
	return;
}

void Function_53(struct<2317> Param0) //Position: 0x212C / 8492
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	uVar0 = Function_54();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

bool Function_54() //Position: 0x2349 / 9033
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_55(int iParam0) //Position: 0x235E / 9054
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_29((50 + iVar4)) + Function_29((183 + iVar4))) + Function_29((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x2405 / 9221
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_70(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_69(iParam0);
	if (&bParam2)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x26A1 / 9889
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(bParam2));
	}
	else
	{
		cVar0 = F2STR(bParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(bParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((bParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			bParam2 = (bParam2 * 3,28084f);
			if (bParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				bParam2 = (bParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_68(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_67(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_67(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_65(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_62(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_59(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_58(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_58() //Position: 0x2CDF / 11487
{
	int iVar0;
	
	return &iVar0;
}

var Function_59(int iParam0) //Position: 0x2CE8 / 11496
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_60(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2CF9 / 11513
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_61(char* cParam0) //Position: 0x2DF0 / 11760
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2E0B / 11787
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_64(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_63(Function_64(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_63(int iParam0, int iParam1) //Position: 0x2E72 / 11890
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_64(int iParam0, bool bParam1) //Position: 0x2E84 / 11908
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_65(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2E96 / 11926
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
		return;
	}
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_66(iParam0) != 19 || Function_66(iParam0) != 17) || Function_66(iParam0) != 10) || Function_66(iParam0) != 9)
	{
		if (fParam1 > fVar1)
		{
			fParam1 = fVar1;
		}
		if (fParam1 < fVar0)
		{
			fParam1 = fVar0;
		}
		if (fParam2 > -(fParam1 - fVar1))
		{
			fParam2 = -(fParam1 - fVar1);
		}
		if (fParam2 < (fVar0 - fParam1))
		{
			fParam2 = (fVar0 - fParam1);
		}
		fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
		fVar3 = (fParam2 / (fVar0 - fVar1));
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_66(int iParam0) //Position: 0x2FCA / 12234
{
	return Global_55480[iParam016].f_96;
}

float Function_67(int iParam0) //Position: 0x2FD9 / 12249
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_68(int iParam0) //Position: 0x3012 / 12306
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_69(int iParam0) //Position: 0x304F / 12367
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x31E9 / 12777
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	iVar0 = iVar1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
		return 0;
	}
	if (bParam2)
	{
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

struct<8> Function_71() //Position: 0x342D / 13357
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_29((50 + iVar3) + 15) + Function_29((183 + iVar3) + 15)) + Function_29((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x34B6 / 13494
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_29((50 + iVar3) + 8) + Function_29((183 + iVar3) + 8)) + Function_29((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x354D / 13645
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_29((50 + iVar3)) + Function_29((183 + iVar3))) + Function_29((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_74() //Position: 0x35CC / 13772
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_75(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x3609 / 13833
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_70(iParam0, bParam1, 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_57(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_76() //Position: 0x3815 / 14357
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_84(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_84(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_78(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_78(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_77(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_77(vector3 vParam0) //Position: 0x38CC / 14540
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_78(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x38E4 / 14564
{
	int iVar0;
	
	iVar0 = Function_82(&uParam2, &uParam3);
	if (Function_81(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_80(&Global_99144, 1);
			Function_46(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_80(&Global_99144, 2);
			Function_46(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_80(&Global_99144, 2);
		Function_46(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_79();
	return StackVal, Function_79();
}

struct<8> Function_79() //Position: 0x39DC / 14812
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_80(bool bParam0, bool bParam1) //Position: 0x39E6 / 14822
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_81(int iParam0) //Position: 0x39F7 / 14839
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x3A0D / 14861
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_83(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_83(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_81(iVar0) && !&bParam1)
	{
		iVar0 = Function_82(&bParam0, 1);
	}
	return iVar0;
}

float Function_83(struct<2> Param0, struct<2> Param2) //Position: 0x3AD9 / 15065
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_84(float fParam0, int iParam1) //Position: 0x3AF6 / 15094
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_86(&Global_54076, &Var3);
	if (!Function_85(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_85(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_80(&Global_99144, 2);
	Function_46(&Global_99144, 1);
	iParam1 = 0;
	if (Function_77(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_85(int iParam0) //Position: 0x4325 / 17189
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_86(var uParam0, int iParam1) //Position: 0x4360 / 17248
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_87(bool bParam0) //Position: 0x436F / 17263
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(bParam0))
	{
		return;
	}
	switch (Function_17(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_91(12, 1, 0, 0);
				Function_90(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_91(13, 1, 0, 0);
				Function_90(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_91(14, 1, 0, 0);
				Function_90(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_91(15, 1, 0, 0);
				Function_90(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_91(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_30(bParam0) == 1)
					{
						iVar0 = Function_89(bParam0);
						if (Function_88(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_90(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_90(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_90(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_90(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_90(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_90(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_90(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_90(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_90(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_90(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_90(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_90(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_90(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_90(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_90(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_90(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_90(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_90(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_90(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_90(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_91(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_91(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_91(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_89(bParam0) == 0)
			{
				if (Function_30(bParam0) == 1)
				{
					Function_91(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_88(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_90(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_90(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_90(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_90(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_90(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_90(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_90(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_90(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_30(bParam0) == 1)
			{
				Function_91(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_91(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_90(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_90(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_90(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_91(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_90(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_90(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

bool Function_88(int iParam0) //Position: 0x484B / 18507
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_89(bool bParam0) //Position: 0x4861 / 18529
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_90(int iParam0, int iParam1) //Position: 0x4880 / 18560
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

int Function_91(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x48EA / 18666
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_70(iParam0, TO_FLOAT(bParam1), 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_92(iParam0);
	return 1;
}

void Function_92(int iParam0) //Position: 0x4B12 / 19218
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_93() //Position: 0x4BB0 / 19376
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_29(0));
	PLAYSTAT_INT("HC_FAME", Function_29(3));
	PLAYSTAT_INT("HC_HONOR", Function_29(1));
	return;
}

void Function_94() //Position: 0x4D12 / 19730
{
	int iVar0;
	int iVar1;
	
	if (!Function_41(Global_10966))
	{
		return;
	}
	iVar0 = Function_29(24);
	iVar1 = Function_40(Global_10966);
	if (!Function_41(iVar0) && Function_97(iVar1) < 0)
	{
		Function_56(24, Global_10966, 0);
		Function_95(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_97(Function_40(iVar0)))
	{
		Function_56(24, Global_10966, 0);
		Function_95(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_95(int iParam0, char* cParam1) //Position: 0x4D92 / 19858
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_96(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_96(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x50E9 / 20713
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_97(int iParam0) //Position: 0x5171 / 20849
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_98() //Position: 0x518B / 20875
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_99() //Position: 0x51B6 / 20918
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x51E4 / 20964
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_41(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_121(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_29(42) - Global_53524.f_168);
				bVar1 = (Function_29(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_68(49)) - Global_53524.f_176);
				bVar3 = (Function_29(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_29(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_120(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_101(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

void Function_101(int iParam0, bool bParam1, bool bParam2) //Position: 0x5480 / 21632
{
	int iVar0;
	bool bVar1;
	
	if (Function_119(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_98())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_29(3);
	Function_116();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_114(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_113(Global_119936, 4))
			{
				Function_108(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_91(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_67(3));
	iVar0 = Function_29(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_102(int iParam0, int iParam1) //Position: 0x5654 / 22100
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_103(int iParam0, char* cParam1) //Position: 0x58BE / 22718
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_95(iParam0, &cParam1, 0, 1);
	iVar1 = Function_104();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_104() //Position: 0x5A4E / 23118
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_105();
	return 0;
}

void Function_105() //Position: 0x5AEF / 23279
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_106(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_106(int iParam0) //Position: 0x5BAD / 23469
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_107(int iParam0) //Position: 0x5C13 / 23571
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

void Function_108(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5CA2 / 23714
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_110(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_109(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_109(char* cParam0) //Position: 0x5D17 / 23831
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_110(int iParam0, var uParam1, int iParam2) //Position: 0x5D51 / 23889
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_112(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_111(uVar0))
		{
			case 0x00000002:
				if (!Function_113(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_111(char* cParam0) //Position: 0x5DCD / 24013
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_112(int iParam0) //Position: 0x5E6E / 24174
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_46(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

bool Function_113(var uParam0, int iParam1) //Position: 0x5EAB / 24235
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_114(int iParam0, bool bParam1) //Position: 0x5EBE / 24254
{
	bool bVar0;
	int iVar1;
	
	Function_91(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_115(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_104();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_115(int iParam0, int iParam1) //Position: 0x606A / 24682
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_116() //Position: 0x60AF / 24751
{
	Function_118(3, 0.0f);
	Function_117(3, 10000.0f);
	return;
}

int Function_117(int iParam0, int iParam1) //Position: 0x60C5 / 24773
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_118(int iParam0, int iParam1) //Position: 0x6105 / 24837
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_119(int iParam0) //Position: 0x6145 / 24901
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_120(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x6154 / 24916
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_121(int iParam0) //Position: 0x631C / 25372
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_122() //Position: 0x63B1 / 25521
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_123(int iParam0, var uParam1, bool bParam2) //Position: 0x63D6 / 25558
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_41(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_124(21, &bParam2, 0);
			Function_124(16, &bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_124(bool bParam0, bool bParam1, int iParam2) //Position: 0x6478 / 25720
{
	if (!Function_125(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_54(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_54(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_54(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0x64D2 / 25810
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_126(bool bParam0) //Position: 0x64E4 / 25828
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_127(struct<185> Param0) //Position: 0x6518 / 25880
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_128(4, 0, 0);
		}
	}
	return;
}

void Function_128(bool bParam0, var uParam1, int iParam2) //Position: 0x6583 / 25987
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_129(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x666D / 26221
{
	int iVar0;
	
	Function_131(bParam0);
	Function_8(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_130();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_130() //Position: 0x67EC / 26604
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_131(int iParam0) //Position: 0x67F8 / 26616
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

void Function_132() //Position: 0x683E / 26686
{
	Function_133();
	return;
}

void Function_133() //Position: 0x6847 / 26695
{
	Function_138(&Local_4 + 8);
	Function_138(&Local_4 + 608);
	Function_138(&Local_4 + 824);
	Function_138(&Local_4 + 992);
	Function_138(&Local_4 + 1192);
	Function_138(&Local_4 + 1392);
	RELEASE_LAYOUT_REF(&Local_4);
	return;
}

void Function_134() //Position: 0x6882 / 26754
{
	if (bLocal_1693 == 4294967295 || IS_OBJECT_VALID(&(Local_1620[02])))
	{
		if (iLocal_1711)
		{
			DESTROY_OBJECT(&uLocal_1634);
		}
		if (!iLocal_1719)
		{
			TRAIN_DESTROY_TRAIN(bLocal_1693);
		}
		else
		{
			TRAIN_RELEASE_TRAIN(bLocal_1693, 0f);
		}
	}
	if (IS_OBJECT_VALID(&iLocal_1062 + 400))
	{
		DESTROY_OBJECT(&iLocal_1062 + 400);
	}
	if (IS_OBJECT_VALID(&iLocal_1062 + 392))
	{
		DESTROY_OBJECT(&iLocal_1062 + 392);
	}
	if (IS_OBJECT_VALID(&iLocal_1062 + 408))
	{
		DESTROY_OBJECT(&iLocal_1062 + 408);
	}
	if (IS_OBJECT_VALID(&iLocal_1062 + 416))
	{
		DESTROY_OBJECT(&iLocal_1062 + 416);
	}
	if (IS_OBJECT_VALID(&iLocal_1062 + 376))
	{
		DESTROY_OBJECT(&iLocal_1062 + 376);
	}
	if (IS_OBJECT_VALID(&iLocal_1062 + 384))
	{
		DESTROY_OBJECT(&iLocal_1062 + 384);
	}
	if (IS_OBJECT_VALID(&iLocal_1062 + 480))
	{
		DESTROY_OBJECT(&iLocal_1062 + 480);
	}
	Function_137();
	Function_136();
	Function_135();
	return;
}

void Function_135() //Position: 0x6969 / 26985
{
	Function_138(&iLocal_1234 + 8);
	RELEASE_LAYOUT_REF(&iLocal_1234);
	return;
}

void Function_136() //Position: 0x697E / 27006
{
	Function_138(&iLocal_1184 + 8);
	RELEASE_LAYOUT_REF(&iLocal_1184);
	return;
}

void Function_137() //Position: 0x6993 / 27027
{
	Function_138(&iLocal_1062 + 8);
	RELEASE_LAYOUT_REF(&iLocal_1062);
	return;
}

void Function_138(int iParam0) //Position: 0x69A8 / 27048
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_139(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_139(struct<2>[] Param0, int iParam1) //Position: 0x69D0 / 27088
{
	if (Function_141(&(Param0[iParam12]), 4))
	{
		if (Function_141(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_140(&(Param0[iParam12]), 1);
			Function_140(&(Param0[iParam12]), 2);
			Function_140(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_140(struct<13> Param0) //Position: 0x6B1B / 27419
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_141(struct<13> Param0) //Position: 0x6B38 / 27448
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_142() //Position: 0x6B56 / 27478
{
	Function_138(&iLocal_1554);
	return;
}

int Function_143(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6B62 / 27490
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (uParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_145(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_144(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", true);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_144(var uParam0) //Position: 0x6EA4 / 28324
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&bVar0))
		{
			REMOVE_BLIP(&bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_145(bool bParam0) //Position: 0x6ED7 / 28375
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&bParam0);
	return;
}

void Function_146(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x6EEE / 28398
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_174());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_47151[2] = 0;
	if (&bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_173();
	CLEAR_PRINTED_OBJECTIVE();
	Function_172();
	Function_170(0);
	Function_169();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_168();
	Function_167();
	Function_173();
	ENABLE_JOURNAL_REPLAY(1);
	Function_166(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (&bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	}
	if (&bParam7)
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		ACTOR_END_FORCE_HOLSTER(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_165(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_161(Global_42825);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_160();
	Function_159(1178687);
	Function_157(33039);
	Function_156(0x218003f);
	Function_155(4194560);
	Function_154();
	Function_153();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_148(0, 1, 1);
	}
	else
	{
		Function_148(0, 1, 1);
	}
	Function_147();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !&bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_46(&Global_21369 + 72 + 32, 16);
}

void Function_147() //Position: 0x70F7 / 28919
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_175(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_148(int iParam0, bool bParam1, int iParam2) //Position: 0x7121 / 28961
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
		if (Function_88(Global_43789))
		{
			Function_152(&(Global_43791[Global_43789]), 131072);
			Function_175(&(Global_43791[Global_43789]), 2097152);
			Function_150(Global_43789);
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
				if (Function_149(&(Global_43791[iVar0]), 4) || Function_149(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_175(&(Global_43791[iVar0]), 2097155);
					Function_152(&(Global_43791[iVar0]), 262144);
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
		if (iParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_149(var uParam0, int iParam1) //Position: 0x722D / 29229
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_150(int iParam0) //Position: 0x724A / 29258
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_151())
			{
				return;
			}
		}
		if (!Function_149(&(Global_43791[iParam0]), 2048))
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

bool Function_151() //Position: 0x72C9 / 29385
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_149(&(Global_43791[iVar0]), 4) || Function_149(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_152(var uParam0, int iParam1) //Position: 0x7332 / 29490
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_153() //Position: 0x7343 / 29507
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47080)
	{
		Global_47080[iVar0] = 1;
		iVar0++;
	}
	Global_47147 = 0;
	return;
}

void Function_154() //Position: 0x7369 / 29545
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		Global_47006[iVar0] = 1;
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_155(int iParam0) //Position: 0x738F / 29583
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_156(int iParam0) //Position: 0x73AC / 29612
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_157(int iParam0) //Position: 0x73BF / 29631
{
	Function_158(&Global_43580, iParam0);
	return;
}

void Function_158(var uParam0, int iParam1) //Position: 0x73CD / 29645
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_159(bool bParam0) //Position: 0x73EC / 29676
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_160() //Position: 0x7419 / 29721
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_161(int iParam0) //Position: 0x7491 / 29841
{
	int iVar0;
	int iVar1;
	
	if (!Function_164(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_162(78, 1, 1);
		if (!Function_113(Global_119935, 64))
		{
			Function_108(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", true);
		DECOR_SET_BOOL(&Global_54076, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x75C7 / 30151
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_163(bParam0), Function_54()) == 0)
		{
			ADD_ITEM(Function_163(bParam0), Function_54(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_163(bParam0), Function_54(), &iParam2);
	return 1;
}

var Function_163(bool bParam0) //Position: 0x7615 / 30229
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

bool Function_164(bool bParam0) //Position: 0x7709 / 30473
{
	if (bParam0 > 0 || bParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_165(int iParam0) //Position: 0x771F / 30495
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&iParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170);
		}
	}
	return;
}

void Function_166(bool bParam0) //Position: 0x77A2 / 30626
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_167() //Position: 0x7819 / 30745
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
		{
			DECOR_REMOVE(&Global_54076, "ResetMenuDelay");
		}
	}
	return;
}

void Function_168() //Position: 0x785D / 30813
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			DECOR_REMOVE(&Global_54076, "missionFailRmd");
		}
	}
	return;
}

void Function_169() //Position: 0x78A1 / 30881
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_170(int iParam0) //Position: 0x78B7 / 30903
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_171())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_171() //Position: 0x78F7 / 30967
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_172() //Position: 0x791C / 31004
{
	Global_15862 = 0.0f;
	return;
}

void Function_173() //Position: 0x7926 / 31014
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

int Function_174() //Position: 0x7951 / 31057
{
	var uVar0;
	
	uVar0 = Function_54();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_175(var uParam0, int iParam1) //Position: 0x796E / 31086
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_176() //Position: 0x7988 / 31112
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_177(int iParam0) //Position: 0x7991 / 31121
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&uVar1))
	{
		while (IS_OBJECT_VALID(&uVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&uVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_178() //Position: 0x79F9 / 31225
{
	var uVar0[12];
	int iVar13;
	
	if (Function_224())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Stage 2 - Camp";
		uVar0[3] = "Stage 3 - Ride";
		uVar0[4] = "Stage 4 - Defend Train";
		uVar0[5] = "Stage 5 - Ride to Mexico";
		uVar0[6] = "Stage 6 - Clear the barricade";
		uVar0[7] = "Mission End - Scripted Cutscene";
		uVar0[8] = "Infinte Ammo";
		uVar0[9] = "Kill Zombie Wave";
		uVar0[10] = "Test train station gringos";
		uVar0[11] = "Activate custom music";
		iVar13 = Function_210(&uLocal_1329, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_209(&iVar13, &iLocal_1349, &iLocal_1350, &iLocal_1337))
		{
			Function_202();
			Function_201();
		}
		if (iVar13 == 0)
		{
			Function_202();
			Function_201();
			Function_200(&bLocal_1525, 8);
		}
		else if (iVar13 == 1)
		{
			Function_202();
			Function_201();
			Function_195(iLocal_1349);
			Function_187(StackVal, 5, &bLocal_1526, &iLocal_1349, Function_198(iLocal_1349), Function_195(iLocal_1349), 0);
		}
		else if (iVar13 == 2)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_1349 = 1;
			iLocal_1350 = 0;
			iLocal_1337 = 1000;
		}
		else if (iVar13 == 3)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_1349 = 2;
			iLocal_1350 = 0;
			iLocal_1337 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_1349 = 3;
			iLocal_1350 = 0;
			iLocal_1337 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_1349 = 4;
			iLocal_1350 = 0;
			iLocal_1337 = 1000;
		}
		else if (iVar13 == 6)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_1349 = 5;
			iLocal_1350 = 0;
			iLocal_1337 = 1000;
		}
		else if (iVar13 == 7)
		{
			Function_202();
			Function_186();
			Function_201();
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			iLocal_1349 = 101;
			iLocal_1350 = 0;
			iLocal_1337 = 1000;
		}
		else if (iVar13 == 8)
		{
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 34, false, 1, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 31, 0.0f, 0, 0);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, false, 1, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 6, false, 1, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 18, false, 1, 1);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 35, false, 1, 1);
			_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 15, 1);
			_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, 13, 1);
			Function_202();
			Function_201();
		}
		else if (iVar13 == 9)
		{
			if (SQUAD_IS_VALID(&bLocal_1660))
			{
				Function_184(&bLocal_1660);
			}
			if (SQUAD_IS_VALID(&bLocal_1662))
			{
				PRINTSTRING("This is the size of station squad: ");
				PRINTINT(SQUAD_GET_SIZE(&bLocal_1662));
				PRINTNL();
				Function_184(&bLocal_1662);
				PRINTSTRING("This is the size of station squad after killing: ");
				PRINTINT(SQUAD_GET_SIZE(&bLocal_1662));
				PRINTNL();
				PRINTINT(SQUAD_GET_SIZE(&bLocal_1662));
			}
			Function_183("ZOMBINATION - It's fun being a dev. ", 4.0f, 1, 2, 1, 0);
			Function_202();
		}
		else if (iVar13 == 10)
		{
			Function_179();
			Function_202();
			Function_201();
		}
		else if (iVar13 == 11)
		{
			AUDIO_MUSIC_FORCE_TRACK("ZOMBIE_CUSTOM_TRAIN_SONG", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_202();
		}
	}
	return;
}

void Function_179() //Position: 0x7E53 / 32339
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Z02_YellsDeserters", "Z02_YellsDeserters", 2, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_180(int iParam0) //Position: 0x7E9E / 32414
{
	Function_181(0, &Global_54076, iParam0, 0);
	Function_181(1, &Local_4 + 1416[02], iParam0, 0);
	Function_181(2, &Local_4 + 1512[02], iParam0, 0);
	return;
}

void Function_181(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x7ECF / 32463
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_182(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

bool Function_182(bool bParam0) //Position: 0x7EF7 / 32503
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x7F03 / 32515
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

void Function_184(bool bParam0) //Position: 0x7F88 / 32648
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				KILL_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_185(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x7FDF / 32735
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

void Function_186() //Position: 0x800A / 32778
{
	Function_185(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1);
	Function_177(&iLocal_1261);
	Function_177(&Local_4);
	Function_201();
	Function_138(&iLocal_1554);
	return;
}

void Function_187(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x802F / 32815
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_192(StackVal, Param4, uParam3, &iParam6);
		Function_188(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_188(int iParam0) //Position: 0x8070 / 32880
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_191("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_190(2) || Function_190(8)) || Function_190(9)) || Function_190(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_191("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_191("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_191("");
	}
	else if (iParam0 == 8)
	{
		Function_189();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_189();
	}
	return;
}

void Function_189() //Position: 0x8167 / 33127
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_190(int iParam0) //Position: 0x8173 / 33139
{
	int iVar0;
	
	if (!Function_41(iParam0))
	{
		return 0;
	}
	iVar0 = Function_40(iParam0);
	if (!Function_20(Function_40(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_191(char* cParam0) //Position: 0x81A9 / 33193
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_192(struct<2> Param0, var uParam2, var uParam3) //Position: 0x8215 / 33301
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_194(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_193(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_193(int iParam0) //Position: 0x8297 / 33431
{
	if (!Function_88(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

var Function_194(struct<2> Param0, bool bParam2) //Position: 0x8745 / 34629
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

struct<8> Function_195(int iParam0) //Position: 0x87B1 / 34737
{
	Function_196(iParam0 + 1);
	return StackVal, Function_196(iParam0 + 1);
}

struct<8> Function_196(int iParam0) //Position: 0x87BE / 34750
{
	iParam0 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			Function_197(&Local_4 + 3000[0]);
			return StackVal, Function_197(&Local_4 + 3000[0]);
			break;
		
		case 0x00000001:
			Function_197(&Local_4 + 3248[0]);
			return StackVal, Function_197(&Local_4 + 3248[0]);
			break;
		
		case 0x00000002:
			Function_197(&Local_4 + 3056[2]);
			return StackVal, Function_197(&Local_4 + 3056[2]);
			break;
		
		case 0x00000003:
			Function_197(&Local_4 + 3248[19]);
			return StackVal, Function_197(&Local_4 + 3248[19]);
			break;
		
		case 0x00000004:
			Function_197(&Local_4 + 3464[0]);
			return StackVal, Function_197(&Local_4 + 3464[0]);
			break;
		
		case 0x00000005:
			Function_197(&Local_4 + 3648[1]);
			return StackVal, Function_197(&Local_4 + 3648[1]);
			break;
		
		case 0x00000065:
			Function_197(&Local_4 + 3560[0]);
			return StackVal, Function_197(&Local_4 + 3560[0]);
			break;
	}
	Function_197(&Local_4 + 3000[0]);
	return StackVal, Function_197(&Local_4 + 3000[0]);
}

struct<8> Function_197(bool bParam0) //Position: 0x8876 / 34934
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_198(int iParam0) //Position: 0x889F / 34975
{
	return Function_199(iParam0 + 1);
}

int Function_199(int iParam0) //Position: 0x88AC / 34988
{
	iParam0 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&Local_4 + 3000[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&Local_4 + 3248[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&Local_4 + 3056[2]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&Local_4 + 3248[19]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&Local_4 + 3464[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING(&Local_4 + 3648[1]);
			break;
		
		case 0x00000065:
			return GET_OBJECT_HEADING(&Local_4 + 3560[0]);
			break;
	}
	return GET_OBJECT_HEADING(&Local_4 + 3000[0]);
}

void Function_200(bool bParam0, int iParam1) //Position: 0x8964 / 35172
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_188(&iParam1);
	bParam0 = 1;
	return;
}

void Function_201() //Position: 0x8989 / 35209
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_202() //Position: 0x899E / 35230
{
	Function_204();
	Function_203(10, 3);
	return;
}

void Function_203(int iParam0, int iParam1) //Position: 0x89AD / 35245
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_204() //Position: 0x8AFA / 35578
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_208())
	{
		Function_207(10, 3);
	}
	else
	{
		Function_205();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_54(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_54());
	UI_POP("nDebugMenu");
	return;
}

void Function_205() //Position: 0x8B45 / 35653
{
	Function_206(25, 2);
	return;
}

void Function_206(int iParam0, int iParam1) //Position: 0x8B51 / 35665
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_207(int iParam0, int iParam1) //Position: 0x8D7D / 36221
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_208() //Position: 0x8ECA / 36554
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_14(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_209(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8F32 / 36658
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_202();
			Function_201();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			uParam1++;
			uParam2 = 0;
			uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_191("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_210(struct<17> Param0) //Position: 0x8FE1 / 36833
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_223(&Var12, &Var0);
	uVar15 = Function_222(uParam1, &Var12);
	Function_221(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_220(&Param0, uVar15);
	Function_218(StackVal, &Param0, Var12.f_12);
	Function_216(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_215(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_212(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_211(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_211(int iParam0, int iParam1, int iParam2) //Position: 0x90D5 / 37077
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_212(struct<17> Param0) //Position: 0x9135 / 37173
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_214(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					*(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_214(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_211(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_213(Param1.f_64);
	}
	else
	{
		Function_213(Param1.f_64);
	}
	return 0;
}

void Function_213(bool bParam0) //Position: 0x92C8 / 37576
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_214(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x9306 / 37638
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_215(int iParam0, struct<21> Param1) //Position: 0x93BC / 37820
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_216(vector3 vParam0) //Position: 0x93E3 / 37859
{
	switch (Function_217())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_217() //Position: 0x948F / 38031
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_218(vector3 vParam0) //Position: 0x94CB / 38091
{
	switch (Function_219(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_219(bool bParam0) //Position: 0x9574 / 38260
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_80(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_80(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_46(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_80(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_80(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_46(&bParam0, 0x20000000);
	return 0;
}

var Function_220(struct<21> Param0) //Position: 0x9694 / 38548
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_221(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x984E / 38990
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_222(int iParam0, struct<13> Param1) //Position: 0x98EA / 39146
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_223(struct<17> Param0) //Position: 0x9906 / 39174
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_224() //Position: 0x9960 / 39264
{
	return Global_47307;
}

bool Function_225() //Position: 0x9969 / 39273
{
	if (IS_EXITFLAG_SET())
	{
		Function_195(iLocal_1349);
		Function_187(StackVal, 4, &bLocal_1526, &iLocal_1349, Function_198(iLocal_1349), Function_195(iLocal_1349), 0);
		return 0;
	}
	Function_628(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1263, iLocal_1349, iLocal_1350, &bLocal_1527, &bLocal_1525, &bLocal_1526);
	if (iLocal_1349 == 99 && iLocal_1349 == 100)
	{
		if (Function_608(&Local_1409, &uLocal_1355, &uLocal_1501, &uLocal_1352, iLocal_1354))
		{
			if (Function_606(&uLocal_1501))
			{
				Function_195(iLocal_1349);
				Function_187(StackVal, 5, &bLocal_1526, &iLocal_1349, Function_198(iLocal_1349), Function_195(iLocal_1349), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_195(iLocal_1349);
			Function_187(StackVal, 1, &bLocal_1526, &iLocal_1349, Function_198(iLocal_1349), Function_195(iLocal_1349), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_195(iLocal_1349);
			Function_187(StackVal, 2, &bLocal_1526, &iLocal_1349, Function_198(iLocal_1349), Function_195(iLocal_1349), 0);
			return 1;
		}
	}
	switch (iLocal_1349)
	{
		case 0x00000063:
			Function_587();
			break;
		
		case 0x00000000:
			Function_585();
			break;
		
		case 0x00000001:
			Function_550();
			break;
		
		case 0x00000002:
			Function_526();
			break;
		
		case 0x00000003:
			Function_498();
			break;
		
		case 0x00000004:
			Function_454();
			break;
		
		case 0x00000005:
			Function_378();
			break;
		
		case 0x00000065:
			Function_229();
			break;
		
		case 0x00000064:
			if (Function_228(&bLocal_1526))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_227(&iLocal_1349, &iLocal_1350, &iLocal_1337))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1525)
	{
		Function_200(&bLocal_1525, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1526 && iLocal_1349 == 100)
	{
		Function_195(iLocal_1349);
		Function_187(StackVal, 5, &bLocal_1526, &iLocal_1349, Function_198(iLocal_1349), Function_195(iLocal_1349), 0);
	}
	if (bLocal_1527)
	{
		Function_226(&bLocal_1527, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_226(var uParam0, int iParam1) //Position: 0x9B14 / 39700
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_188(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_227(var uParam0, var uParam1, int iParam2) //Position: 0x9B39 / 39737
{
	if (uParam0 <= 98)
	{
		uParam0++;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else if (uParam0 == 98)
	{
		uParam0 = 101;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_228(int iParam0) //Position: 0x9B82 / 39810
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_229() //Position: 0x9B96 / 39830
{
	switch (iLocal_1350)
	{
		case 0x00000000:
			Function_374(0);
			if (!iLocal_1509[5])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_373(&Global_54076, &Local_4 + 3560[0], 1, 1, 1);
				Function_371(&iLocal_1596);
				iLocal_1350 = 1;
			}
			else
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					Function_197(&Local_4 + 3648[0]);
					if (Function_344(StackVal, Function_197(&Local_4 + 3648[0]), GET_OBJECT_HEADING(&Local_4 + 3648[0])))
					{
						Function_371(&iLocal_1596);
						iLocal_1350 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1263, iLocal_1349) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MEXICO_CROSSING_5_CS_SEQ/MEXICO_CROSSING_5_CS_SEQ"))
			{
				DESTROY_OBJECT(&Local_4 + 4208);
				Function_340(&Local_4 + 4184);
				Function_339(&Local_4 + 4192, 1);
				iLocal_1695 = 0;
				Function_371(&iLocal_1596);
				iLocal_1350 = 3;
			}
			else
			{
				iLocal_1695 = 1;
				Function_371(&iLocal_1596);
				iLocal_1350 = 4;
			}
			break;
		
		case 0x00000003:
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 8)
			{
				DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			if (Function_231("$/cutscene/MEXICO_CROSSING_5_CS_SEQ/MEXICO_CROSSING_5_CS_SEQ", &iLocal_1337, &Local_1263, &iLocal_1349, 80316, 79646, 79303, 65904, 64755, 43407, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 4;
			}
			break;
		
		case 0x00000004:
			Function_230(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			iLocal_1350 = 106;
			break;
		
		case 0x0000006A:
			bLocal_1525 = true;
			break;
	}
	return;
}

void Function_230(bool bParam0) //Position: 0x9DAB / 40363
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

bool Function_231(bool bParam0, int iParam1, struct<41> Param2) //Position: 0x9DC8 / 40392
{
	if (!&bParam15)
	{
		Function_243(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_242(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&bParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&bParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_371(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &bParam0) || !Function_241())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_240(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_371(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_240(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_237(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_237(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&iParam5);
					if (StackVal)
					{
						Function_235(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_240(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_371(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_230(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_233();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&iParam8);
				if (StackVal)
				{
					Function_232(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&iParam9);
				if (StackVal)
				{
					Call_Loc(&iParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_242(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_232(int iParam0, bool bParam1) //Position: 0xA42A / 42026
{
	iParam0 = &iParam0;
	HUD_ENABLE(&iParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_160();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_233() //Position: 0xA4F9 / 42233
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_234();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_234() //Position: 0xA53E / 42302
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_235(var uParam0, int iParam1) //Position: 0xA550 / 42320
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_236(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_236(int iParam0) //Position: 0xA5E2 / 42466
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

float Function_237(vector3 vParam0) //Position: 0xA613 / 42515
{
	if (Function_239(&vParam0))
	{
		if (Function_238(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_238(int iParam0) //Position: 0xA6E0 / 42720
{
	return Function_14(iParam0, 2);
}

bool Function_239(int iParam0) //Position: 0xA6EE / 42734
{
	return Function_14(iParam0, 1);
}

int Function_240(bool bParam0) //Position: 0xA6FC / 42748
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_241() //Position: 0xA7BF / 42943
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_242(struct<37> Param0) //Position: 0xA7FC / 43004
{
	return Param0.f_36;
}

void Function_243(var uParam0, int iParam1) //Position: 0xA807 / 43015
{
	Function_244(&uParam0, &iParam1, 0);
	return;
}

void Function_244(var uParam0, bool bParam1, var uParam2) //Position: 0xA817 / 43031
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_91(20, 1, 0, 0);
		uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&uParam2))
						{
							Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_91(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

int Function_245() //Position: 0xA98F / 43407
{
	switch (iLocal_1349)
	{
		case 0x00000063:
			if (!Function_248(&iLocal_1275))
			{
				return 0;
			}
			if (!IS_LAYOUTREF_VALID(&Local_4))
			{
				Function_246();
			}
			bLocal_1745 = true;
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_246() //Position: 0xA9D9 / 43481
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	var uVar42;
	var uVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	
	Function_247(4, 1);
	uVar0 = &uVar0;
	Local_4 = CREATE_LAYOUT("Zombie02_layout");
	*(&Local_4 + 2640) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "CutsceneVol_set");
	*(&Local_4 + 2600[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "MexicoCrossing_1", 2,802597E-45f, Vector(-3858,204f, 8,525387f, 3665,887f), Vector(0.0f, 1,194711f, 0.0f), Vector(17,68165f, 7,751794f, 21,26391f));
	ADD_TO_VOLUME_SET(&Local_4 + 2640, &Local_4 + 2600[0]);
	*(&Local_4 + 2600[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "CutsceneLastVol", 2,802597E-45f, Vector(-4324,901f, 25,64268f, 2724,79f), Vector(170,8587f, -101,8083f, -170,7355f), Vector(56,75175f, 22,16785f, 156,2397f));
	ADD_TO_VOLUME_SET(&Local_4 + 2640, &Local_4 + 2600[1]);
	*(&Local_4 + 2600[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "MexicoCrossing_4", 2,802597E-45f, Vector(-3751,199f, 23,03201f, 3999,257f), Vector(1,301097f, -117,6936f, 0,5893043f), Vector(91,23454f, 34,82357f, 183,8816f));
	ADD_TO_VOLUME_SET(&Local_4 + 2640, &Local_4 + 2600[2]);
	*(&Local_4 + 2600[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "MexicoCrossing_2", 2,802597E-45f, Vector(-3699,723f, 8,516953f, 3477,148f), Vector(0.0f, 1,194711f, 0.0f), Vector(8,156269f, 11,24115f, 43,09532f));
	ADD_TO_VOLUME_SET(&Local_4 + 2640, &Local_4 + 2600[3]);
	*(&Local_4 + 2672) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "clearAmbZombies_set");
	*(&Local_4 + 2648[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "clearZombies01", 4,203895E-45f, Vector(-3727,537f, 26,58328f, 3474,633f), Vector(0.0f, -1,181195f, 0.0f), Vector(133,394f, 22,02563f, 158,0546f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2648[0]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2648[0]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2648[0], 15);
	ADD_TO_VOLUME_SET(&Local_4 + 2672, &Local_4 + 2648[0]);
	*(&Local_4 + 2648[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "clearZombies02", 2,802597E-45f, Vector(-3776,875f, 33,27648f, 3826,81f), Vector(0.0f, -80,85915f, 0.0f), Vector(617,2618f, 67,93808f, 311,3629f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2648[1]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2648[1]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2648[1], 15);
	ADD_TO_VOLUME_SET(&Local_4 + 2672, &Local_4 + 2648[1]);
	*(&Local_4 + 2744) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_4, "RideZombieSpawnTriggers_set");
	*(&Local_4 + 2680[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "RideZombieSpawnTrigger_1", 2,802597E-45f, Vector(-3777,996f, 9,918535f, 3570,391f), Vector(0.0f, -41,89626f, 0.0f), Vector(46,30988f, 26,41579f, 8,00574f));
	ADD_TO_VOLUME_SET(&Local_4 + 2744, &Local_4 + 2680[0]);
	*(&Local_4 + 2680[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "RideZombieSpawnTrigger_2", 2,802597E-45f, Vector(-3780,663f, 9,918535f, 3576,372f), Vector(0.0f, -41,89626f, 0.0f), Vector(46,30988f, 26,41579f, 8,690695f));
	ADD_TO_VOLUME_SET(&Local_4 + 2744, &Local_4 + 2680[1]);
	*(&Local_4 + 2680[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "RideZombieSpawnTrigger_3", 2,802597E-45f, Vector(-3818,566f, 7,721951f, 3658,753f), Vector(0.0f, -14,47849f, 0.0f), Vector(46,30988f, 26,41579f, 4,652714f));
	ADD_TO_VOLUME_SET(&Local_4 + 2744, &Local_4 + 2680[2]);
	*(&Local_4 + 2680[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "RideZombieSpawnTrigger_4", 2,802597E-45f, Vector(-3840,446f, 7,721951f, 3713,991f), Vector(0.0f, -14,47849f, 0.0f), Vector(48,73788f, 42,08585f, 4,652714f));
	ADD_TO_VOLUME_SET(&Local_4 + 2744, &Local_4 + 2680[3]);
	*(&Local_4 + 2680[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "RideZombieSpawnTrigger_5", 2,802597E-45f, Vector(-3842,783f, 7,721951f, 3723,045f), Vector(0.0f, -16,47849f, 0.0f), Vector(48,73788f, 42,08585f, 4,652714f));
	ADD_TO_VOLUME_SET(&Local_4 + 2744, &Local_4 + 2680[4]);
	*(&Local_4 + 2680[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "RideZombieSpawnTrigger_6", 2,802597E-45f, Vector(-3860,146f, 7,721951f, 3790,284f), Vector(0.0f, -14,47849f, 0.0f), Vector(48,73788f, 42,08585f, 4,652714f));
	ADD_TO_VOLUME_SET(&Local_4 + 2744, &Local_4 + 2680[5]);
	*(&Local_4 + 2680[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "RideZombieSpawnTrigger_7", 2,802597E-45f, Vector(-3863,746f, 7,721951f, 3804,227f), Vector(0.0f, -14,47849f, 0.0f), Vector(48,73788f, 42,08585f, 4,652714f));
	ADD_TO_VOLUME_SET(&Local_4 + 2744, &Local_4 + 2680[6]);
	*(&Local_4 + 2752) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S05_Climax_Hit", 2,802597E-45f, Vector(-3873,46f, 16,80466f, 3876,875f), Vector(0.0f, -60,03141f, 0.0f), Vector(6,4599f, 23,91191f, 122,8596f));
	*(&Local_4 + 2760) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "SaveStageTwo", 4,203895E-45f, Vector(-4305,314f, 20,15537f, 3738,096f), Vector(0.0f, -64.0f, 0.0f), Vector(42,32508f, 26,90337f, 62,94528f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2760);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2760);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2760, 15);
	*(&Local_4 + 2768) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S2_InitVol", 4,203895E-45f, Vector(-4278,175f, 23,71785f, 3715,699f), Vector(0.0f, -55.0f, 0.0f), Vector(68,97753f, 25,0264f, 133,4412f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2768);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2768);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2768, 15);
	*(&Local_4 + 2776) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S2_Speak", 4,203895E-45f, Vector(-4313,891f, 6,047823f, 3734,882f), Vector(0.0f, -85.0f, 0.0f), Vector(3,235575f, 1,359311f, 4,132001f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2776);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2776);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2776, 15);
	*(&Local_4 + 2784) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "CS_TrainStation", 4,203895E-45f, Vector(-3716,816f, 10,0541f, 3475,775f), Vector(0.0f, 0.0f, 0.0f), Vector(63,47186f, 10,42578f, 88,28519f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2784);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2784);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2784, 15);
	*(&Local_4 + 2792) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "Load_Trainstation", 4,203895E-45f, Vector(-3760,188f, 10,0541f, 3467,32f), Vector(0.0f, 0.0f, 0.0f), Vector(117,5721f, 21,98058f, 152,275f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2792);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2792);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2792, 15);
	*(&Local_4 + 2800) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S2_SoldierHutVol", 2,802597E-45f, Vector(-4313,98f, 8,806722f, 3743,272f), Vector(0.0f, -0,03140748f, 0.0f), Vector(9,711241f, 3,23478f, 12,11053f));
	*(&Local_4 + 2808) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S3_PlayerLeftHut", 2,802597E-45f, Vector(-4313,98f, 6,106722f, 3743,422f), Vector(0.0f, -0,03140748f, 0.0f), Vector(9,340595f, 3,005138f, 9,718735f));
	*(&Local_4 + 2816) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S04_RestrictVol", 2,802597E-45f, Vector(-3697,681f, 10,1846f, 3475,36f), Vector(0.0f, -89,85f, 0.0f), Vector(25,7378f, 3,516452f, 1,022504f));
	*(&Local_4 + 2824) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S6_ZombieAdvance", 2,802597E-45f, Vector(-3719,876f, 26,24278f, 4024,716f), Vector(0.0f, -30,03141f, 0.0f), Vector(6,4599f, 9,551929f, 37,75441f));
	*(&Local_4 + 2832) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "switchJunctionVol", 2,802597E-45f, Vector(-3825,863f, 13,13498f, 3682,539f), Vector(0.0f, -14,85f, 0.0f), Vector(38,71201f, 14,32536f, 17,72906f));
	*(&Local_4 + 2840) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "nfireVol_1", 2,802597E-45f, Vector(-3521,141f, 19,0473f, 4197,471f), Vector(0.0f, -19,54688f, 0.0f), Vector(3,658831f, 5,786253f, 3,693243f));
	*(&Local_4 + 2848) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "nfireVol_2", 2,802597E-45f, Vector(-3525,368f, 19,0473f, 4208,706f), Vector(0.0f, -80,91785f, 0.0f), Vector(2,612779f, 5,786253f, 3,693243f));
	*(&Local_4 + 2856) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "nfireVol_3", 2,802597E-45f, Vector(-3509,892f, 19,49765f, 4201,649f), Vector(0.0f, -27,49065f, 0.0f), Vector(9,784613f, 10,11713f, 10,32695f));
	*(&Local_4 + 2864) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "nfireVol_4", 2,802597E-45f, Vector(-3516,694f, 19,53754f, 4217,884f), Vector(0.0f, -142,3409f, 0.0f), Vector(4,59338f, 5,786253f, 7,703686f));
	*(&Local_4 + 2872) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "speakNearBarricade", 2,802597E-45f, Vector(-3766,524f, 26,24278f, 3993,418f), Vector(0.0f, -30,03141f, 0.0f), Vector(6,4599f, 9,551929f, 9,718735f));
	*(&Local_4 + 2880) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "s5_fadeOutMusic", 2,802597E-45f, Vector(-3772,412f, 26,24278f, 3990,015f), Vector(0.0f, -30,03141f, 0.0f), Vector(6,4599f, 9,551929f, 9,718735f));
	*(&Local_4 + 2888) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "trainStopForBarricade", 2,802597E-45f, Vector(-3713,777f, 27,10139f, 4021,336f), Vector(0.0f, -25,07717f, 0.0f), Vector(6,4599f, 9,551929f, 9,718735f));
	*(&Local_4 + 2896) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "rideStopSpawningZombies", 2,802597E-45f, Vector(-3831,406f, 23,30861f, 3949,346f), Vector(0.0f, -38,50079f, 0.0f), Vector(6,803715f, 13,5199f, 81,62794f));
	*(&Local_4 + 2904) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "LastStage_ZombieVol", 2,802597E-45f, Vector(-3753,773f, 18,47881f, 4004,929f), Vector(0.0f, -125,9178f, 0.0f), Vector(82,88731f, 41,03404f, 174,9452f));
	*(&Local_4 + 2912) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S2_CampBattleVol", 2,802597E-45f, Vector(-4312,888f, 7,406722f, 3744,725f), Vector(0.0f, 39,96859f, 0.0f), Vector(23,63537f, 7,015969f, 22,10988f));
	*(&Local_4 + 2920) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "S3_DesertWander", 2,802597E-45f, Vector(-4312,885f, 6,106722f, 3744,518f), Vector(0.0f, -45,03141f, 0.0f), Vector(24,36953f, 7,073134f, 24,38555f));
	*(&Local_4 + 2928) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "BP_TrainStationWander", 4,203895E-45f, Vector(-3698,866f, 10,0541f, 3475,775f), Vector(0.0f, 0.0f, 0.0f), Vector(17,82701f, 4,36482f, 21,49359f));
	*(&Local_4 + 2936) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "CS_TrainStation1", 4,203895E-45f, Vector(-3798,566f, 10,0541f, 3475,775f), Vector(0.0f, 0.0f, 0.0f), Vector(152,246f, 20,22237f, 171,2424f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2936);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2936);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2936, 15);
	*(&Local_4 + 2944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_4, "unloadStage3", 4,203895E-45f, Vector(-3891,166f, 10,0541f, 3475,775f), Vector(0.0f, 0.0f, 0.0f), Vector(253,2623f, 33,64006f, 284,8631f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2944);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_4 + 2944);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&Local_4 + 2944, 15);
	*(&Local_4 + 2952) = CREATE_OBJECTSET_IN_LAYOUT("ClearGrassSet", &Local_4, 8, 0);
	*(&Local_4 + 2960[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "ClearGrass_1", Vector(-4302,992f, 5,542459f, 3735,147f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 2960[0], &Local_4 + 2952);
	Function_197(&Local_4 + 2960[0]);
	CLEAR_AREA_OF_GRASS(Function_197(&Local_4 + 2960[0]), 3,5f);
	*(&Local_4 + 2960[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "ClearGrass_2", Vector(-4300,134f, 5,137414f, 3732,134f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 2960[1], &Local_4 + 2952);
	Function_197(&Local_4 + 2960[1]);
	CLEAR_AREA_OF_GRASS(Function_197(&Local_4 + 2960[1]), 3,5f);
	*(&Local_4 + 2960[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "ClearGrass_3", Vector(-3862,752f, 8,03117f, 3666,897f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 2960[2], &Local_4 + 2952);
	Function_197(&Local_4 + 2960[2]);
	CLEAR_AREA_OF_GRASS(Function_197(&Local_4 + 2960[2]), 3,5f);
	*(&Local_4 + 2992) = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", &Local_4, 8, 0);
	*(&Local_4 + 3000[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart01", Vector(-3860,43f, 8,038821f, 3667,538f), Vector(0.0f, 36,02785f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3000[0], &Local_4 + 2992);
	*(&Local_4 + 3000[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart01", Vector(-3880,942f, 8,031368f, 3658,557f), Vector(0.0f, 90,36728f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3000[1], &Local_4 + 2992);
	*(&Local_4 + 3000[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "StageOneTrainStart", Vector(-3700,068f, 8,97694f, 3492,775f), Vector(0.0f, 175,4377f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3000[2], &Local_4 + 2992);
	*(&Local_4 + 3032) = CREATE_OBJECTSET_IN_LAYOUT("S02_HillZombSpawnFlagsSet", &Local_4, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nHZSpawn_1", Vector(-4340,58f, 4,444851f, 3738,309f), Vector(0.0f, -90,79666f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &Local_4 + 3032);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nHZSpawn_2", Vector(-4297,427f, 3,658526f, 3758,573f), Vector(0.0f, -297,7967f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &Local_4 + 3032);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nHZSpawn_3", Vector(-4286,89f, 2,937f, 3757,804f), Vector(0.0f, -316,3381f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &Local_4 + 3032);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nHZSpawn_4", Vector(-4279,146f, 3,012f, 3735,791f), Vector(0.0f, -274,1969f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &Local_4 + 3032);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nHZSpawn_5", Vector(-4285,146f, 3,752f, 3721,724f), Vector(0.0f, -228,1969f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &Local_4 + 3032);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nHZSpawn_6", Vector(-4324,898f, 3,299f, 3724,877f), Vector(0.0f, -142,3741f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &Local_4 + 3032);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nHZSpawn_7", Vector(-4332,117f, 5,188f, 3757,48f), Vector(0.0f, -142,3741f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &Local_4 + 3032);
	*(&Local_4 + 3040) = CREATE_OBJECTSET_IN_LAYOUT("S02_CampZombSpawnFlagsSet", &Local_4, 8, 0);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SP_Spawn_1", Vector(-4325,596f, 4,995249f, 3744.0f), Vector(0.0f, -90,79666f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &Local_4 + 3040);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SP_Spawn_2", Vector(-4304f, 4,773434f, 3743,265f), Vector(0.0f, -259,7967f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &Local_4 + 3040);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SP_Spawn_3", Vector(-4308.0f, 4,989434f, 3734,381f), Vector(0.0f, -235,7967f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &Local_4 + 3040);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SP_Spawn_4", Vector(-4309,101f, 4,9872f, 3732f), Vector(0.0f, 151,2033f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &Local_4 + 3040);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SP_Spawn_5", Vector(-4318,653f, 4,741691f, 3733,386f), Vector(0.0f, 200,2033f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &Local_4 + 3040);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SP_Spawn_6", Vector(-4323,413f, 4,47344f, 3738,511f), Vector(0.0f, -134,7967f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &Local_4 + 3040);
	*(&Local_4 + 3048) = CREATE_OBJECTSET_IN_LAYOUT("S02_CampsiteSet", &Local_4, 8, 0);
	*(&Local_4 + 3056[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart01CS", Vector(-4301,881f, 5,277f, 3734,171f), Vector(0.0f, 90,02785f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[0], &Local_4 + 3048);
	*(&Local_4 + 3056[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart03", Vector(-4301,846f, 4,626915f, 3720,383f), Vector(0.0f, 291,5302f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[1], &Local_4 + 3048);
	*(&Local_4 + 3056[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart03", Vector(-4302,73f, 3,893764f, 3731,32f), Vector(0.0f, 710,0726f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[2], &Local_4 + 3048);
	*(&Local_4 + 3056[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oZombieAttackMove_1", Vector(-4315,612f, 5,000669f, 3736f), Vector(0.0f, 177.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[3], &Local_4 + 3048);
	*(&Local_4 + 3056[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oZombieAttackMove_2", Vector(-4306,584f, 5,191231f, 3739,677f), Vector(0.0f, 89,9559f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[4], &Local_4 + 3048);
	*(&Local_4 + 3056[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oCampCenter", Vector(-4303,261f, 5,361083f, 3735,261f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[5], &Local_4 + 3048);
	*(&Local_4 + 3056[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "speakerGringo", Vector(-4314,101f, 4,998824f, 3736,499f), Vector(0.0f, 1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[6], &Local_4 + 3048);
	*(&Local_4 + 3056[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "s03_Soldier01Pos", Vector(-4308.0f, 4,836051f, 3746,229f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[7], &Local_4 + 3048);
	*(&Local_4 + 3056[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "s03_Soldier02Pos", Vector(-4310,365f, 5,010022f, 3736.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[8], &Local_4 + 3048);
	*(&Local_4 + 3056[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "s03_Goto01", Vector(-4311,164f, 4,671583f, 3751,164f), Vector(0.0f, -180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[9], &Local_4 + 3048);
	*(&Local_4 + 3056[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "s03_Goto02", Vector(-4310,365f, 5,010022f, 3736.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[10], &Local_4 + 3048);
	*(&Local_4 + 3056[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "s03_Goto03", Vector(-4317,302f, 5,001161f, 3737,302f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[11], &Local_4 + 3048);
	*(&Local_4 + 3056[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "s03_Goto04", Vector(-4310,365f, 5,010022f, 3736.0f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[12], &Local_4 + 3048);
	*(&Local_4 + 3056[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "noCampLoad", Vector(-4311,953f, 5,34764f, 3727,615f), Vector(0.0f, -216.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[13], &Local_4 + 3048);
	*(&Local_4 + 3056[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "speakerGringo1", Vector(-4311,978f, 5,006171f, 3735,763f), Vector(0.0f, 25,94366f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[14], &Local_4 + 3048);
	*(&Local_4 + 3056[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "speakerGringo2", Vector(-4316,252f, 4,994727f, 3735,584f), Vector(0.0f, -39.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[15], &Local_4 + 3048);
	*(&Local_4 + 3056[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "speakerGringo3", Vector(-4318,8f, 4,881783f, 3738,455f), Vector(0.0f, 1.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3056[16], &Local_4 + 3048);
	*(&Local_4 + 3200) = CREATE_OBJECTSET_IN_LAYOUT("S02_campFallBackSet", &Local_4, 8, 0);
	*(&Local_4 + 3208[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "campFallBack_1", Vector(-4310,671f, 7,678683f, 3739,063f), Vector(0.0f, -32,29721f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3208[0], &Local_4 + 3200);
	*(&Local_4 + 3208[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "campFallBack_2", Vector(-4316,535f, 7,950738f, 3740,271f), Vector(0.0f, 35,49743f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3208[1], &Local_4 + 3200);
	*(&Local_4 + 3208[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "campFallBack_3", Vector(-4310,587f, 7,747241f, 3747,303f), Vector(0.0f, -91,10616f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3208[2], &Local_4 + 3200);
	*(&Local_4 + 3240) = CREATE_OBJECTSET_IN_LAYOUT("CS_MexicoCrossing_2Set", &Local_4, 8, 0);
	*(&Local_4 + 3248[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart02", Vector(-4207,835f, 6,023521f, 3631,759f), Vector(0.0f, 138,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[0], &Local_4 + 3240);
	*(&Local_4 + 3248[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart02", Vector(-4210,789f, 6,014297f, 3634,561f), Vector(0.0f, 508,6624f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[1], &Local_4 + 3240);
	*(&Local_4 + 3248[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "TrainPos_CS02", Vector(-3699,978f, 9,211248f, 3489,362f), Vector(0.0f, 176,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[2], &Local_4 + 3240);
	*(&Local_4 + 3248[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CA_Cap_StartPos_CS02", Vector(-3699,637f, 11,3024f, 3479,688f), Vector(-0,2808875f, 55,49104f, -0,4731658f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[3], &Local_4 + 3240);
	*(&Local_4 + 3248[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CA_E01_StartPos_CS03", Vector(-3700,26f, 10,11033f, 3484,612f), Vector(0.0f, 69,72743f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[4], &Local_4 + 3240);
	*(&Local_4 + 3248[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CA_E02_StartPos_CS02", Vector(-3700,128f, 10,08773f, 3483,214f), Vector(0.0f, 98,72743f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[5], &Local_4 + 3240);
	*(&Local_4 + 3248[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CA_M01_StartPos", Vector(-3698,698f, 9,982797f, 3462,767f), Vector(0.0f, 317,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[6], &Local_4 + 3240);
	*(&Local_4 + 3248[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CA_M02_StartPos_CS02", Vector(-3698,252f, 9,916917f, 3474,704f), Vector(0.0f, 265,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[7], &Local_4 + 3240);
	*(&Local_4 + 3248[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_B01_StartPos", Vector(-3695,251f, 9,533043f, 3474,329f), Vector(0.0f, 436,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[8], &Local_4 + 3240);
	*(&Local_4 + 3248[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_B03_StartPos", Vector(-3701,845f, 8,9303f, 3478,753f), Vector(0.0f, 261,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[9], &Local_4 + 3240);
	*(&Local_4 + 3248[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_B05_StartPos", Vector(-3696,695f, 9,549715f, 3476,831f), Vector(0.0f, 427,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[10], &Local_4 + 3240);
	*(&Local_4 + 3248[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_B06_StartPos", Vector(-3701,315f, 9,961642f, 3478,831f), Vector(0.0f, 261,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[11], &Local_4 + 3240);
	*(&Local_4 + 3248[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_B07_StartPos", Vector(-3696,314f, 9,531811f, 3478,175f), Vector(0.0f, 72,72743f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[12], &Local_4 + 3240);
	*(&Local_4 + 3248[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_B08_StartPos", Vector(-3701,896f, 8,921188f, 3484,076f), Vector(0.0f, 263,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[13], &Local_4 + 3240);
	*(&Local_4 + 3248[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_T03_StartPos", Vector(-3701,964f, 8,972612f, 3482,435f), Vector(0.0f, 245,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[14], &Local_4 + 3240);
	*(&Local_4 + 3248[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_T04_StartPos", Vector(-3696,693f, 9,565573f, 3474,681f), Vector(0.0f, 79,72743f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[15], &Local_4 + 3240);
	*(&Local_4 + 3248[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_T05_StartPos", Vector(-3694,723f, 9,537374f, 3472,51f), Vector(0.0f, 99,72743f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[16], &Local_4 + 3240);
	*(&Local_4 + 3248[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_T06_StartPos", Vector(-3701,838f, 8,984467f, 3479,802f), Vector(0.0f, 267,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[17], &Local_4 + 3240);
	*(&Local_4 + 3248[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Z_F04_StartPos", Vector(-3701,056f, 8,933258f, 3484,833f), Vector(0.0f, 267,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[18], &Local_4 + 3240);
	*(&Local_4 + 3248[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "S4_PlayerStart", Vector(-3749,522f, 7,779883f, 3502,269f), Vector(0.0f, 303,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[19], &Local_4 + 3240);
	*(&Local_4 + 3248[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "S4_PHorseStart", Vector(-3731,145f, 7,792569f, 3496,536f), Vector(0.0f, 651,6624f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[20], &Local_4 + 3240);
	*(&Local_4 + 3248[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "gw_TrainBoard", Vector(-3702,706f, 8,78061f, 3480,181f), Vector(0.0f, 263,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[21], &Local_4 + 3240);
	*(&Local_4 + 3248[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "S4_PHorseGOTO", Vector(-3729,754f, 7,810968f, 3498,878f), Vector(0.0f, 652,6624f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[22], &Local_4 + 3240);
	*(&Local_4 + 3248[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "CA_M01_ShootFrom", Vector(-3702,197f, 8,975497f, 3459,12f), Vector(0.0f, 423,7274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[23], &Local_4 + 3240);
	*(&Local_4 + 3248[24]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "loadCutscene", Vector(-3704,797f, 9,379f, 3485,784f), Vector(12,961f, -56,34f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3248[24], &Local_4 + 3240);
	*(&Local_4 + 3456) = CREATE_OBJECTSET_IN_LAYOUT("CS_MexicoCrossing_4Set", &Local_4, 8, 0);
	*(&Local_4 + 3464[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart06", Vector(-3699,357f, 10,11741f, 3475,463f), Vector(0.0f, 1,498387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3464[0], &Local_4 + 3456);
	*(&Local_4 + 3464[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerHorseStart06", Vector(-3693,158f, 8,981272f, 3489,173f), Vector(0.0f, 360,4913f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3464[1], &Local_4 + 3456);
	*(&Local_4 + 3464[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "MainPos_MC4", Vector(-3744,32f, 23,78187f, 4006,251f), Vector(0.0f, 360,4913f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3464[2], &Local_4 + 3456);
	*(&Local_4 + 3496) = CREATE_OBJECTSET_IN_LAYOUT("S04_ToxicShootPosSet", &Local_4, 8, 0);
	*(&Local_4 + 3504[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nTSP_Pos01", Vector(-3694,513f, 9,531811f, 3468,122f), Vector(0.0f, 91,49839f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3504[0], &Local_4 + 3496);
	*(&Local_4 + 3504[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nTSP_Pos02", Vector(-3694,831f, 9,531811f, 3483,657f), Vector(0.0f, 77,49839f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3504[1], &Local_4 + 3496);
	*(&Local_4 + 3504[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nTSP_Pos03", Vector(-3706,497f, 8,514468f, 3459,763f), Vector(0.0f, 218,4984f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3504[2], &Local_4 + 3496);
	*(&Local_4 + 3504[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nTSP_Pos04", Vector(-3700,411f, 8,976666f, 3456,805f), Vector(0.0f, -177,5016f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3504[3], &Local_4 + 3496);
	*(&Local_4 + 3504[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nTSP_Pos05", Vector(-3708.0f, 8,031364f, 3484f), Vector(0.0f, -43,50161f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3504[4], &Local_4 + 3496);
	*(&Local_4 + 3552) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene10Set", &Local_4, 8, 0);
	*(&Local_4 + 3560[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "PlayerStart10", Vector(-3754,311f, 21,093f, 4024,476f), Vector(0.0f, -121,5123f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3560[0], &Local_4 + 3552);
	*(&Local_4 + 3560[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "trainMid_10_1", Vector(-3599,606f, 21,40324f, 4101,038f), Vector(0.0f, -136,4257f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3560[1], &Local_4 + 3552);
	*(&Local_4 + 3584) = CREATE_OBJECTSET_IN_LAYOUT("StationZombSpawnFlags1Set", &Local_4, 8, 0);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nSZSpawn_2", Vector(-3713,682f, 8,031368f, 3494,902f), Vector(0.0f, -345,2359f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &Local_4 + 3584);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nSZSpawn_4", Vector(-3704,956f, 8,727327f, 3454,337f), Vector(0.0f, -237,1763f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &Local_4 + 3584);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nSZSpawn_5", Vector(-3709,464f, 8,186319f, 3457,044f), Vector(0.0f, -164,1763f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &Local_4 + 3584);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nSZSpawn_6", Vector(-3709,039f, 8,032858f, 3488,059f), Vector(0.0f, -420,277f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &Local_4 + 3584);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nSZSpawn_7", Vector(-3700,764f, 8,979527f, 3452,817f), Vector(0.0f, -177,3713f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &Local_4 + 3584);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nSZSpawn_8", Vector(-3714,397f, 7,781372f, 3459,973f), Vector(0.0f, -123,7978f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &Local_4 + 3584);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nSZSpawn_9", Vector(-3719,178f, 7,781364f, 3475,711f), Vector(0.0f, -90,00455f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &Local_4 + 3584);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SZSpawn_11", Vector(-3707,84f, 8,41753f, 3497,626f), Vector(0.0f, -28,0762f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &Local_4 + 3584);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SZSpawn_12", Vector(-3717,594f, 7,781372f, 3467,97f), Vector(0.0f, -207,61f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &Local_4 + 3584);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SZSpawn_13", Vector(-3694,918f, 8,377533f, 3456,151f), Vector(0.0f, -207,61f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &Local_4 + 3584);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SZSpawn_14", Vector(-3704,217f, 8,622108f, 3491,172f), Vector(0.0f, -337,135f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &Local_4 + 3584);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SZSpawn_15", Vector(-3691,118f, 9,531811f, 3465,145f), Vector(0.0f, -254,7866f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &Local_4 + 3584);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "SZSpawn_16", Vector(-3694,616f, 9,531811f, 3481,293f), Vector(0.0f, -289,068f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &Local_4 + 3584);
	*(&Local_4 + 3592) = CREATE_OBJECTSET_IN_LAYOUT("S05_PlayerPosRideSet", &Local_4, 8, 0);
	*(&Local_4 + 3600[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "ns5_PPR_01", Vector(-3796,036f, 10,336f, 3603,651f), Vector(0.0f, 91,49839f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3600[0], &Local_4 + 3592);
	*(&Local_4 + 3600[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "ns5_PPR_02", Vector(-3805,278f, 10,092f, 3626,131f), Vector(0.0f, 91,49839f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3600[1], &Local_4 + 3592);
	*(&Local_4 + 3600[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "ns5_PPR_03", Vector(-3795,429f, 22,545f, 3971,405f), Vector(0.0f, 91,49839f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3600[2], &Local_4 + 3592);
	*(&Local_4 + 3632) = CREATE_OBJECTSET_IN_LAYOUT("RideZombieSpawnsSet", &Local_4, 8, 0);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RideZombieSpawn_1", Vector(-3785,327f, 9,320001f, 3640,95f), Vector(0.0f, 70,72125f, 0.0f));
	DECOR_SET_INT(&uVar27, "iNumZombies", 4);
	DECOR_SET_BOOL(&uVar27, "bFollowRight", false);
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &Local_4 + 3632);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RideZombieSpawn_2", Vector(-3821,588f, 8,099592f, 3606,798f), Vector(0.0f, -92,37823f, 0.0f));
	DECOR_SET_INT(&uVar28, "iNumZombies", 3);
	DECOR_SET_BOOL(&uVar28, "bFollowRight", true);
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &Local_4 + 3632);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RideZombieSpawn_3", Vector(-3810,155f, 7,528532f, 3692f), Vector(0.0f, 82,09377f, 0.0f));
	DECOR_SET_INT(&uVar29, "iNumZombies", 3);
	DECOR_SET_BOOL(&uVar29, "bFollowRight", false);
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &Local_4 + 3632);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RideZombieSpawn_4", Vector(-3869,749f, 8,50349f, 3735,574f), Vector(0.0f, -460,579f, 0.0f));
	DECOR_SET_INT(&uVar30, "iNumZombies", 6);
	DECOR_SET_BOOL(&uVar30, "bFollowRight", true);
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &Local_4 + 3632);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RideZombieSpawn_5", Vector(-3812.0f, 9,035286f, 3780f), Vector(0.0f, -614,1112f, 0.0f));
	DECOR_SET_INT(&uVar31, "iNumZombies", 5);
	DECOR_SET_BOOL(&uVar31, "bFollowRight", false);
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &Local_4 + 3632);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RideZombieSpawn_6", Vector(-3911,328f, 11,0726f, 3840,673f), Vector(0.0f, -467,1112f, 0.0f));
	DECOR_SET_INT(&uVar32, "iNumZombies", 4);
	DECOR_SET_BOOL(&uVar32, "bFollowRight", true);
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &Local_4 + 3632);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RideZombieSpawn_7", Vector(-3828,049f, 10,44119f, 3833,891f), Vector(0.0f, -655,1112f, 0.0f));
	DECOR_SET_INT(&uVar33, "iNumZombies", 5);
	DECOR_SET_BOOL(&uVar33, "bFollowRight", false);
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &Local_4 + 3632);
	*(&Local_4 + 3640) = CREATE_OBJECTSET_IN_LAYOUT("Last_StageSet", &Local_4, 8, 0);
	*(&Local_4 + 3648[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oTrainGoTo", Vector(-3728,845f, 24,0475f, 4013,685f), Vector(0.0f, 242.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[0], &Local_4 + 3640);
	*(&Local_4 + 3648[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "LS_PlayerPos", Vector(-3698,474f, 24,06728f, 4028,62f), Vector(0.0f, 64.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[1], &Local_4 + 3640);
	*(&Local_4 + 3648[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nLS_AMed02", Vector(-3696,487f, 22,89205f, 4035,876f), Vector(0.0f, 205.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[2], &Local_4 + 3640);
	*(&Local_4 + 3648[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "LS_AEasy02", Vector(-3698,077f, 23,99352f, 4029,935f), Vector(0.0f, 64.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[3], &Local_4 + 3640);
	*(&Local_4 + 3648[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "LS_AHard03", Vector(-3697,312f, 24,07875f, 4027,845f), Vector(0.0f, 64.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[4], &Local_4 + 3640);
	*(&Local_4 + 3648[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "LS_AEasy01", Vector(-3692.0f, 23,09018f, 4023,722f), Vector(0.0f, -39.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[5], &Local_4 + 3640);
	*(&Local_4 + 3648[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "LS_PlayerPos2", Vector(-3529,746f, 19,69326f, 4197,925f), Vector(0.0f, 216.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[6], &Local_4 + 3640);
	*(&Local_4 + 3648[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nLS_pHorse", Vector(-3506,032f, 20,237f, 4204,774f), Vector(0.0f, 122.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[7], &Local_4 + 3640);
	*(&Local_4 + 3648[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "e01_RetreatPt", Vector(-4001,409f, 8,031489f, 3584.0f), Vector(0.0f, 122.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[8], &Local_4 + 3640);
	*(&Local_4 + 3648[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "m02_RetreatPt", Vector(-4124.0f, 7,027439f, 3668f), Vector(0.0f, 122.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[9], &Local_4 + 3640);
	*(&Local_4 + 3648[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "E02_Combat01", Vector(-3710,137f, 23,63652f, 4027,729f), Vector(0.0f, 64.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[10], &Local_4 + 3640);
	*(&Local_4 + 3648[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "E02_Combat02", Vector(-3705,354f, 23,91942f, 4028,267f), Vector(0.0f, 64.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[11], &Local_4 + 3640);
	*(&Local_4 + 3648[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Capt_Combat01", Vector(-3701,869f, 23,81924f, 4023,199f), Vector(0.0f, 64.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[12], &Local_4 + 3640);
	*(&Local_4 + 3648[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "Capt_Combat02", Vector(-3705,746f, 23,62654f, 4020,186f), Vector(0.0f, 64.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&Local_4 + 3648[13], &Local_4 + 3640);
	*(&Local_4 + 3768) = CREATE_OBJECTSET_IN_LAYOUT("RideToxicSet", &Local_4, 8, 0);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RT_Pos01", Vector(-3849,367f, 17,29115f, 3915,637f), Vector(0.0f, 70,72125f, 0.0f));
	DECOR_SET_INT(&uVar34, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &Local_4 + 3768);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RT_Pos02", Vector(-3843,677f, 17,12384f, 3921,265f), Vector(0.0f, 80,72125f, 0.0f));
	DECOR_SET_INT(&uVar35, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &Local_4 + 3768);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RT_Pos03", Vector(-3853,007f, 15,95854f, 3941,154f), Vector(0.0f, 4,721254f, 0.0f));
	DECOR_SET_INT(&uVar36, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &Local_4 + 3768);
	uVar37 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RT_Pos04", Vector(-3841,191f, 16,1728f, 3917,71f), Vector(-5,011031f, 79,72203f, -6,436483f));
	DECOR_SET_INT(&uVar37, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar37, &Local_4 + 3768);
	uVar38 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RT_Pos05", Vector(-3838,333f, 16,49808f, 3921,659f), Vector(0.0f, 82,72125f, 0.0f));
	DECOR_SET_INT(&uVar38, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar38, &Local_4 + 3768);
	uVar39 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "RT_Pos06", Vector(-3847,815f, 16,98717f, 3938,748f), Vector(0.0f, 15,72125f, 0.0f));
	DECOR_SET_INT(&uVar39, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar39, &Local_4 + 3768);
	*(&Local_4 + 3776) = CREATE_OBJECTSET_IN_LAYOUT("RideToxic_2Set", &Local_4, 8, 0);
	uVar40 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT2_Pos01", Vector(-3819,764f, 17,83457f, 3940,347f), Vector(0.0f, 84,72125f, 0.0f));
	DECOR_SET_INT(&uVar40, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar40, &Local_4 + 3776);
	uVar41 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT2_Pos02", Vector(-3818,342f, 18,2949f, 3944,686f), Vector(0.0f, 104,7213f, 0.0f));
	DECOR_SET_INT(&uVar41, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar41, &Local_4 + 3776);
	uVar42 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT2_Pos03", Vector(-3816,608f, 18,5478f, 3947,52f), Vector(0.0f, 105,7213f, 0.0f));
	DECOR_SET_INT(&uVar42, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar42, &Local_4 + 3776);
	uVar43 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT2_Pos04", Vector(-3813,519f, 18,98011f, 3950,569f), Vector(0.0f, 102,7213f, 0.0f));
	DECOR_SET_INT(&uVar43, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar43, &Local_4 + 3776);
	uVar44 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT2_Pos05", Vector(-3824,838f, 18,85331f, 3964f), Vector(0.0f, 29,72125f, 0.0f));
	DECOR_SET_INT(&uVar44, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar44, &Local_4 + 3776);
	uVar45 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT2_Pos06", Vector(-3828,562f, 18,30177f, 3957,651f), Vector(0.0f, 16,72125f, 0.0f));
	DECOR_SET_INT(&uVar45, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar45, &Local_4 + 3776);
	*(&Local_4 + 3784) = CREATE_OBJECTSET_IN_LAYOUT("RideToxic_3Set", &Local_4, 8, 0);
	uVar46 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT3_Pos01", Vector(-3818,112f, 19,31502f, 3966,583f), Vector(0.0f, 22,72125f, 0.0f));
	DECOR_SET_INT(&uVar46, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar46, &Local_4 + 3784);
	uVar47 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT3_Pos02", Vector(-3821,356f, 18,98479f, 3966,644f), Vector(0.0f, 26,72125f, 0.0f));
	DECOR_SET_INT(&uVar47, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar47, &Local_4 + 3784);
	uVar48 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT3_Pos03", Vector(-3814,616f, 19,56674f, 3971,92f), Vector(0.0f, 30,72125f, 0.0f));
	DECOR_SET_INT(&uVar48, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar48, &Local_4 + 3784);
	uVar49 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT3_Pos04", Vector(-3810,201f, 19,30025f, 3954,519f), Vector(0.0f, 83,72125f, 0.0f));
	DECOR_SET_INT(&uVar49, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar49, &Local_4 + 3784);
	uVar50 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT3_Pos05", Vector(-3807,568f, 19,67507f, 3957,947f), Vector(0.0f, 76,72125f, 0.0f));
	DECOR_SET_INT(&uVar50, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar50, &Local_4 + 3784);
	uVar51 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nRT3_Pos06", Vector(-3819,775f, 19,32421f, 3962,638f), Vector(0.0f, 18,72125f, 0.0f));
	DECOR_SET_INT(&uVar51, "iNumZombies", 4);
	ADD_OBJECT_TO_OBJECTSET(&uVar51, &Local_4 + 3784);
	*(&Local_4 + 3792) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oCompanionWaitS1", Vector(-3694,139f, 9,531811f, 3486,326f), Vector(0.0f, 75,24585f, 0.0f));
	*(&Local_4 + 3800) = Vector(-4260,596f, 3,86697f, 3686,177f);
	*(&Local_4 + 3800 + 12) = Vector(0.0f, -136,0931f, 0.0f);
	*(&Local_4 + 3824) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "barricadeExplode_2_1", Vector(-3519,229f, 20,44556f, 4199,376f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_4 + 3832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "barricadeExplode_2_2", Vector(-3526,877f, 21,08047f, 4203,216f), Vector(0.0f, 0.0f, 0.0f));
	*(&Local_4 + 3840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "rainDebris_1", Vector(-3518,917f, 19,27827f, 4204,169f), Vector(0.0f, -48,78418f, 0.0f));
	*(&Local_4 + 3848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "rainDebris_2", Vector(-3522,926f, 19,26698f, 4207,352f), Vector(0.0f, 88,49452f, 0.0f));
	*(&Local_4 + 3856) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "rainDebris_3", Vector(-3521,684f, 19,50792f, 4205,54f), Vector(0.0f, -14,13293f, 0.0f));
	*(&Local_4 + 3864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "rainDebris_4", Vector(-3520,498f, 19,47718f, 4207,348f), Vector(0.0f, -1,305405f, 0.0f));
	*(&Local_4 + 3872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "trainFinalRest", Vector(-3519,182f, 20,43235f, 4207,448f), Vector(11,27671f, 182,4427f, -79,75522f));
	*(&Local_4 + 3880) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oThrowStuff_1", Vector(-3641,891f, 22,89016f, 4062,627f), Vector(15,65226f, -160,784f, 9,221066f));
	*(&Local_4 + 3888) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oThrowStuff_2", Vector(-3641,062f, 22,89157f, 4060,974f), Vector(72,02671f, -105,5356f, -56,90139f));
	*(&Local_4 + 3896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oThrowStuff_3", Vector(-3520,527f, 20,31323f, 4198,207f), Vector(95,94997f, -75,18831f, -28,21078f));
	*(&Local_4 + 3904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oThrowStuff_4", Vector(-3522,322f, 21,29137f, 4201,305f), Vector(81,17383f, -150,8052f, 6,024557f));
	*(&Local_4 + 3912) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oThrowStuff_5", Vector(-3526,447f, 20,38296f, 4202,25f), Vector(71,4288f, -200,6512f, 23,49746f));
	*(&Local_4 + 3920) = Vector(-3690,309f, 23,89144f, 4032,595f);
	*(&Local_4 + 3920 + 12) = Vector(0.0f, -116,9268f, 0.0f);
	*(&Local_4 + 3944) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oSoldiersGoBarricade", Vector(-3690,309f, 23,89144f, 4032,595f), Vector(0.0f, -116,9268f, 0.0f));
	*(&Local_4 + 3952) = Vector(-3404,821f, 21,03662f, 4306,749f);
	*(&Local_4 + 3952 + 12) = Vector(0.0f, -139,1438f, 0.0f);
	*(&Local_4 + 3976) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oTrainRunBarricade", Vector(-3404,821f, 21,03662f, 4306,749f), Vector(0.0f, -139,1438f, 0.0f));
	*(&Local_4 + 3984) = Vector(-3693,938f, 23,93987f, 4030,896f);
	*(&Local_4 + 3984 + 12) = Vector(0.0f, -111,9807f, 0.0f);
	*(&Local_4 + 4008) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "oTrainGoTo1", Vector(-3693,938f, 23,93987f, 4030,896f), Vector(0.0f, -111,9807f, 0.0f));
	*(&Local_4 + 4016) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "nhideTrain", Vector(-3344,202f, 22,0109f, 4326,955f), Vector(0.0f, -100.0f, 0.0f));
	*(&Local_4 + 4024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "hideTrain1", Vector(-3776,149f, 9,027691f, 3572,377f), Vector(0.0f, -214.0f, 0.0f));
	*(&Local_4 + 4032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "hideTrain2", Vector(-3836,275f, 18,867f, 3940,473f), Vector(0.0f, -132.0f, 0.0f));
	*(&Local_4 + 4040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_4, "trainEnd", Vector(-3526,351f, 19,44744f, 4196,338f), Vector(0.0f, -151.0f, 0.0f));
	*(&Local_4 + 4048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_E01", "DLC_Mexico_crossing1", Vector(-3699,719f, 10,37504f, 3484,564f), Vector(0.0f, 87.0f, 0.0f));
	*(&Local_4 + 4056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_E02", "DLC_Mexico_crossing2", Vector(-3699,902f, 10,32354f, 3483,62f), Vector(0.0f, -271.0f, 0.0f));
	*(&Local_4 + 4064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_Capt", "DLC_Mexico_crossing3", Vector(-3699,688f, 11,29788f, 3479,083f), Vector(0.0f, 7.0f, 0.0f));
	*(&Local_4 + 4072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_B08", "DLC_mexico_crossing_B1", Vector(-3695,197f, 9,531811f, 3474,371f), Vector(0.0f, 90.0f, 0.0f));
	*(&Local_4 + 4080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_F04", "DLC_mexico_crossing_B2", Vector(-3701,127f, 8,975038f, 3484,841f), Vector(0.0f, -92.0f, 0.0f));
	*(&Local_4 + 4088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_T06", "DLC_Mexico_crossing_z1", Vector(-3701,908f, 8,89505f, 3479,765f), Vector(0.0f, -92.0f, 0.0f));
	*(&Local_4 + 4096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_T03", "DLC_Mexico_crossing_z2", Vector(-3701,915f, 8,900581f, 3482,445f), Vector(0.0f, -111.0f, 0.0f));
	*(&Local_4 + 4104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "Locked_Footlocker", "ZombiePack_Footlocker", Vector(-4304.0f, 4,998949f, 3731,368f), Vector(0.0f, 180.0f, 0.0f));
	DECOR_SET_BOOL(&Local_4 + 4104, "bGiveNothing", true);
	*(&Local_4 + 4112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_M01", "DLC_Mexico_crossing1", Vector(-3698,975f, 9,982062f, 3462,778f), Vector(0.0f, -108,2477f, 0.0f));
	*(&Local_4 + 4120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_4, "go_S04_M02", "DLC_Mexico_crossing2", Vector(-3698,72f, 9,982756f, 3475,031f), Vector(0.0f, -446.0f, 0.0f));
	PushArrayP();
	*(&Local_4 + 4128) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "S06_RetreatR");
	PushArrayP();
	*(&Local_4 + 4136) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "S06_RetreatL");
	PushArrayP();
	*(&Local_4 + 4144) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "s02_Soldier01PostCamp");
	PushArrayP();
	*(&Local_4 + 4152) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "s02_Soldier02PostCamp");
	PushArrayP();
	*(&Local_4 + 4160) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_4, "s02_SpeakerPostCamp");
	*(&Local_4 + 4168) = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &Local_4, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "tent01x0", "p_gen_tent01x", Vector(-3516,397f, 18,95365f, 4218,163f), Vector(0.0f, -49,71562f, 0.0f), true), &Local_4 + 4168);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "tent01x1", "p_gen_tent01x", Vector(-3515,099f, 18,95365f, 4219,695f), Vector(0.0f, -49,71562f, 0.0f), true), &Local_4 + 4168);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "tent01x2", "p_gen_tent01x", Vector(-3517,78f, 18,95365f, 4216,531f), Vector(0.0f, -49,71562f, 0.0f), true), &Local_4 + 4168);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "tent03x0", "p_gen_tent03x", Vector(-3511,873f, 20,3283f, 4199,327f), Vector(0.0f, -59,99161f, 0.0f), true), &Local_4 + 4168);
	*(&Local_4 + 4176) = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &Local_4, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "tent01x3", "p_gen_tent01x", Vector(-4301,102f, 5,125415f, 3732,841f), Vector(-8,898003f, 306,5791f, 7,789213f), true), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "bedRollClosed01x0", "p_gen_bedRollClosed01x", Vector(-4301,961f, 5,386203f, 3736,412f), Vector(5,304776f, 167,6368f, 1,79504f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "bedRollOpen01x0", "p_gen_bedRollOpen01x", Vector(-4302,089f, 5,191657f, 3733,042f), Vector(-7,748264f, 304,5035f, 6,458388f), true), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "bottle02x0", "p_gen_bottle02x", Vector(-4303,855f, 5,411972f, 3736,029f), Vector(-82,39991f, 55,86439f, -177,1862f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "bottleBeer01x0", "p_gen_bottleBeer01x", Vector(-4304,345f, 5,380869f, 3736f), Vector(82,87474f, 0.0f, 0.0f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "canteen01x0", "p_gen_canteen01x", Vector(-4304,04f, 5,253629f, 3734,88f), Vector(-4.0f, 0.0f, 4.0f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "can05x0", "p_gen_can05x", Vector(-4303,24f, 5,408113f, 3735,05f), Vector(77,6629f, -7,770633f, -80,89098f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "can03x0", "p_gen_can03x", Vector(-4303,25f, 5,324369f, 3734,959f), Vector(-6,531055f, -0,2448292f, 2,579971f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "can01x0", "p_gen_can01x", Vector(-4303,362f, 5,325626f, 3735,017f), Vector(-3,990288f, -0,2788004f, 0,009712284f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "pot02x0", "p_gen_pot02x", Vector(-4302,85f, 5,339309f, 3735,264f), Vector(-2,990288f, -0,2788004f, 0,009712284f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "can05x1", "p_gen_can05x", Vector(-4303,447f, 5,423137f, 3735,237f), Vector(53,64885f, -7,714028f, -92,39329f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "bucket03x0", "p_gen_bucket03x", Vector(-4303,914f, 5,223522f, 3734,452f), Vector(-4.0f, 0.0f, 4.0f), false), &Local_4 + 4176);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "carcassSmall01x0", "p_gen_carcassSmall01x", Vector(-4302,93f, 5,699962f, 3734,347f), Vector(-62,43822f, 18,83858f, 73,28503f), true), &Local_4 + 4176);
	*(&Local_4 + 4184) = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &Local_4, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "barricade01x0", "p_gen_barricade01x", Vector(-3524,128f, 19,32419f, 4196,976f), Vector(-4,353015f, -73,17613f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "barricade01x1", "p_gen_barricade01x", Vector(-3521,98f, 18,5904f, 4195,144f), Vector(-20,07307f, -51,11254f, 16,47829f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "barricade01x2", "p_gen_barricade01x", Vector(-3526,542f, 19,52376f, 4198,051f), Vector(-2,715338f, -62,37262f, -1,761245f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "barricade01x3", "p_gen_barricade01x", Vector(-3528,524f, 19,71311f, 4200,093f), Vector(-1,902518f, -48,56958f, -2,740712f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "flag04x0", "p_gen_flag04x", Vector(-3518,689f, 19,22556f, 4202,362f), Vector(0.0f, 35,95952f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "crateStack02x0", "p_gen_crateStack02x", Vector(-3525,36f, 19,3724f, 4201,062f), Vector(0.0f, 45,26256f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "crateStack01x0", "p_gen_crateStack01x", Vector(-3523,556f, 19,3724f, 4198,862f), Vector(0.0f, -143,6444f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "crateWeapons03x0", "p_gen_crateWeapons03x", Vector(-3522,92f, 19,3441f, 4199,802f), Vector(0.0f, 0.0f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "flourSack01x0", "p_bat_flourSack01x", Vector(-3525,22f, 19,33287f, 4200,186f), Vector(0.0f, 36,32269f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "flourSack01x1", "p_bat_flourSack01x", Vector(-3526,525f, 19,33287f, 4201,575f), Vector(0.0f, 49,67956f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "flourSack01x2", "p_bat_flourSack01x", Vector(-3523,702f, 19,33287f, 4199,07f), Vector(0.0f, 14,43463f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "flourSack01x3", "p_bat_flourSack01x", Vector(-3521,856f, 19,33287f, 4198,723f), Vector(0.0f, 2,542342f, 0.0f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "crateTnt01x0", "p_gen_crateTnt01x", Vector(-3526,164f, 20,23008f, 4201,674f), Vector(0.0f, 0.0f, -0,5163076f), true), &Local_4 + 4184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "crateTnt02x0", "p_gen_crateTnt02x", Vector(-3521,6f, 20,34163f, 4199,303f), Vector(0.0f, 115,4932f, 0.0f), true), &Local_4 + 4184);
	*(&Local_4 + 4192) = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &Local_4, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "barricade01x4", "p_gen_barricade01x", Vector(-3524,803f, 20,49153f, 4207,448f), Vector(174,0441f, -34,19619f, -11,44062f), false), &Local_4 + 4192);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "barricade01x5", "p_gen_barricade01x", Vector(-3518,616f, 20,62125f, 4201,2f), Vector(195,3802f, -70,38868f, -29,26194f), false), &Local_4 + 4192);
	*(&Local_4 + 4200) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "campfire03x0", "p_gen_campfire03x", Vector(-4302,821f, 5,241584f, 3734,043f), Vector(-6,537621f, 0,1773892f, 3,996071f), true);
	*(&Local_4 + 4208) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "wagonBroken02x0", "p_gen_wagonBroken02x", Vector(-3693,506f, 23,9425f, 4029,729f), Vector(180.0f, 27,99f, 180.0f), true);
	*(&Local_4 + 4216) = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &Local_4, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x0", "p_gen_package06x", Vector(-3693,917f, 23,83926f, 4027,721f), Vector(461,0771f, 158,3657f, -1,130371f), true), &Local_4 + 4216);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x1", "p_gen_package06x", Vector(-3694,755f, 23,87922f, 4027,58f), Vector(-64,44645f, 69,66048f, -160,1401f), true), &Local_4 + 4216);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x2", "p_gen_package06x", Vector(-3696,735f, 23,96986f, 4031,927f), Vector(-73,90157f, 256,7328f, 78,06866f), true), &Local_4 + 4216);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x3", "p_gen_package06x", Vector(-3696,481f, 23,54514f, 4034,808f), Vector(211,1831f, 56,60312f, 32,25273f), true), &Local_4 + 4216);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x4", "p_gen_package06x", Vector(-3695,154f, 23,30669f, 4034,837f), Vector(163,147f, -3,978524f, 189,0463f), true), &Local_4 + 4216);
	*(&Local_4 + 4224) = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &Local_4, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x5", "p_gen_package06x", Vector(-3693,675f, 24,02993f, 4029,804f), Vector(0.0f, 0.0f, 59.0f), true), &Local_4 + 4224);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x6", "p_gen_package06x", Vector(-3693,823f, 24,0177f, 4030,428f), Vector(37,41455f, 53,7663f, 43,48181f), true), &Local_4 + 4224);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x7", "p_gen_package06x", Vector(-3694,603f, 24,02006f, 4030,708f), Vector(81,29845f, 58,88478f, -348,4326f), true), &Local_4 + 4224);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x8", "p_gen_package06x", Vector(-3694,414f, 24,08677f, 4031,292f), Vector(190,9527f, 74,85677f, 200,512f), true), &Local_4 + 4224);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_4, "package06x9", "p_gen_package06x", Vector(-3694,691f, 24,1172f, 4032,007f), Vector(441,7926f, 71,33733f, 104,1524f), true), &Local_4 + 4224);
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0xF808 / 63496
{
	switch (&iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

bool Function_248(struct<2>[] Param0) //Position: 0xF852 / 63570
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_253();
	iVar1 = 0;
	if (!Function_141(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_252(&(Param0[iVar02]), 8);
		}
		else if (Function_251())
		{
			iVar1 = 1;
			Function_252(&(Param0[iVar02]), 8);
		}
		Function_252(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_141(&(Param0[iVar02]), 4))
		{
			if (!Function_141(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_141(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_141(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_252(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_141(&(Param0[iVar02]), 4))
		{
			if (!Function_141(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_252(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_249();
	return 1;
}

void Function_249() //Position: 0xFC14 / 64532
{
	if (!Function_250(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_250(int iParam0) //Position: 0xFC54 / 64596
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_251() //Position: 0xFC70 / 64624
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_252(struct<13> Param0) //Position: 0xFC9E / 64670
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_253() //Position: 0xFCB1 / 64689
{
	if (!Function_250(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

int Function_254() //Position: 0xFCF3 / 64755
{
	switch (iLocal_1349)
	{
		case 0x00000063:
			if (Function_256())
			{
				if (bLocal_1745)
				{
					if (!STREAMING_IS_WORLD_LOADED())
					{
						return 0;
					}
				}
				Function_255(2, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1);
				return 1;
			}
			break;
		
		case 0x00000003:
			Function_255(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_255(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_255(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xFD5C / 64860
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_54();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_91(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_201();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_232(&iParam9, &bParam10);
}

bool Function_256() //Position: 0xFE2B / 65067
{
	if (bLocal_1745)
	{
		return 1;
	}
	switch (iLocal_1351)
	{
		case 0x00000000:
			if (UNK_0xCDA6BB6C())
			{
				CANCEL_CUTSCENE_TUNER_PLAYBACK();
			}
			if (IS_OBJECT_VALID(&iLocal_1337 + 24))
			{
				DESTROY_OBJECT(&iLocal_1337 + 24);
			}
			*(&iLocal_1337 + 24) = Function_258(&Local_4, 0, 1, 0, 0);
			Function_230(1.0f);
			Function_257(&Global_54076, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1683, 85,786f, 0, 0, false);
			TASK_GO_NEAR_COORD(&Global_54076, &uLocal_1686, 0,5f, 1);
			iLocal_1351 = 6;
			Function_371(&iLocal_1596);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_OBJECT_VALID(&iLocal_1337 + 24))
			{
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				if (IS_OBJECT_VALID(&iLocal_1337 + 24))
				{
					DESTROY_OBJECT(&iLocal_1337 + 24);
				}
				Function_257(&Global_54076, 0, 1);
				iLocal_1351 = 106;
				Function_371(&iLocal_1596);
				return 1;
			}
			break;
		
		case 0x0000006A:
			return 1;
			break;
	}
	return 0;
}

void Function_257(var uParam0, bool bParam1, bool bParam2) //Position: 0xFF0E / 65294
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&uParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&uParam0))
		{
			FIRE_STOP_ON_ACTOR(&uParam0);
		}
		SET_ACTOR_INVULNERABILITY(&uParam0, true);
		CLEAR_ACTOR_MIN_SPEED(&uParam0);
		CLEAR_ACTOR_MAX_SPEED(&uParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&uParam0);
		RESET_ACTOR_GAITS(&uParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&uParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&uParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&uParam0);
		SET_ACTOR_INVULNERABILITY(&uParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&uParam0, 0);
	}
	return;
}

var Function_258(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFFBE / 65470
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_58(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Zombie02_Intro_Ex", 2, 1);
	}
	Function_259(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_259(int iParam0) //Position: 0x1004B / 65611
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_261(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_260(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 4.0f, 0, 0);
	return;
}

void Function_260(int iParam0) //Position: 0x10086 / 65670
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,22902f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3871,526f, 9,369291f, 3668,096f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,027807f, -1,352602f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_261(var uParam0) //Position: 0x100FB / 65787
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 40,22902f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-3871,472f, 9,365944f, 3668,858f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,027807f, -1,333964f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

int Function_262() //Position: 0x10170 / 65904
{
	switch (iLocal_1349)
	{
		case 0x00000063:
			if (bLocal_1745)
			{
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1689, 76,72f, 0, 0, false);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_CLEAR(&Global_54076);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3,5f, 0);
			return 1;
			break;
		
		case 0x00000003:
			Function_302();
			return 1;
			break;
		
		case 0x00000004:
			Function_299();
			return 1;
			break;
		
		case 0x00000005:
			Function_274();
			return 1;
			break;
		
		case 0x00000065:
			Function_263();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_263() //Position: 0x10203 / 66051
{
	AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
	Function_271(&Local_4 + 4040);
	Function_373(&Global_54076, &Local_4 + 3648[6], 1, 1, 1);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 1, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 4.0f, 1);
	if (!IS_ACTOR_VALID(&bLocal_1658))
	{
		bLocal_1658 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	Function_373(&bLocal_1658, &Local_4 + 3648[7], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1658, -1.0f, 0, 0);
	iLocal_1719 = 1;
	return;
}

int Function_264(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1027D / 66173
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_270(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_269())
		{
			return "";
		}
	}
	if (!Function_267())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_160();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_197(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_197(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_197(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_197(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_266(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_266(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&iParam2, &iParam3, &iParam4);
				if (!Function_77(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_265(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_265(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x105DA / 67034
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&bParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&bParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&bParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&bParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&bParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&bParam0, &iParam4);
	}
}

var Function_266(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x10624 / 67108
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_267() //Position: 0x106C4 / 67268
{
	if (Function_268() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_268() //Position: 0x106DA / 67290
{
	return Global_21369.f_244;
}

bool Function_269() //Position: 0x106E5 / 67301
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_270(var uParam0, bool bParam1, bool bParam2) //Position: 0x10705 / 67333
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_80(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_80(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_271(int iParam0) //Position: 0x10734 / 67380
{
	var uVar0;
	var uVar2;
	
	if (Function_272(TRAIN_GET_CAR(bLocal_1693, false), &iParam0) < 40.0f)
	{
		GET_OBJECT_POSITION(&iParam0, &uVar0);
		GET_OBJECT_AXIS(&iParam0, &uVar2, 2);
		VSCALE(&uVar2, -1.0f);
		TRAIN_SET_POSITION_DIRECTION(bLocal_1693, &uVar0, &uVar2);
	}
	return;
}

float Function_272(var uParam0, var uParam1) //Position: 0x10776 / 67446
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_273(&uParam0);
			Var0 = Function_273(&uParam0);
			Function_273(&uParam1);
			Var2 = Function_273(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_273(var uParam0) //Position: 0x10813 / 67603
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		GET_OBJECT_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_274() //Position: 0x10881 / 67713
{
	Function_271(&Local_4 + 3648[0]);
	if (!SQUAD_IS_VALID(&Local_4 + 1504))
	{
		Function_298();
	}
	Function_373(&Global_54076, &Local_4 + 3648[1], 0, 1, 1);
	Function_373(&Local_4 + 1416[02], &Local_4 + 3648[4], 1, 1, 1);
	Function_373(&Local_4 + 1416[22], &Local_4 + 3648[2], 1, 1, 1);
	Function_373(&Local_4 + 1416[42], &Local_4 + 3648[3], 1, 1, 1);
	Function_373(&Local_4 + 1416[32], &Local_4 + 3648[5], 1, 1, 1);
	Function_287(0, 1);
	Function_286(&Local_4 + 1504, 0);
	Function_285(&Local_4 + 1504, &Global_54076, 0);
	Function_284(&Local_4 + 1504, 0);
	Function_282();
	Function_276();
	ACTOR_PUT_WEAPON_IN_HAND(&Local_4 + 1416[02], 5, 0);
	ACTOR_PUT_WEAPON_IN_HAND(&Local_4 + 1416[22], 16, 0);
	SET_DRAW_OBJECT(&Local_4 + 4208, 1);
	Function_339(&Local_4 + 4216, 1);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&Local_4 + 4216, 1);
	Function_275(&bLocal_1660);
	Function_275(&Local_4 + 1568);
	if (SQUAD_IS_VALID(&bLocal_1664))
	{
		Function_275(&bLocal_1664);
		DESTROY_OBJECT(&bLocal_1664);
	}
	return;
}

void Function_275(bool bParam0) //Position: 0x109A5 / 68005
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_276() //Position: 0x109F3 / 68083
{
	if (SQUAD_IS_VALID(&bLocal_1662))
	{
		Function_275(&bLocal_1662);
	}
	if (!SQUAD_IS_VALID(&Local_4 + 2480))
	{
		Function_280();
	}
	bLocal_1662 = &Local_4 + 2480;
	Function_279(&bLocal_1662, 0,4f);
	Function_278(&bLocal_1662);
	SQUAD_GOALS_CLEAR(&bLocal_1662);
	Function_277(&bLocal_1662, &Local_4 + 2904, 4, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 2, 0, 3);
	TASK_GO_NEAR_ACTOR(0, &Local_4 + 1416[02], 10.0f, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 2, 0, 3);
	TASK_GO_NEAR_ACTOR(0, &Local_4 + 1416[42], 10.0f, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 2, 0, 2);
	TASK_GO_NEAR_ACTOR(0, &Global_54076, 10.0f, 1);
	return;
}

void Function_277(bool bParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x10AA1 / 68257
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&bParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &uParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_278(bool bParam0) //Position: 0x10AF9 / 68345
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_279(bool bParam0, bool bParam1) //Position: 0x10B2E / 68398
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_280() //Position: 0x10B74 / 68468
{
	*(&Local_4 + 2480) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "S06_Z_Barricade"));
	*(&Local_4 + 2312[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_T01", 1222, Vector(-3722,746f, 24,17775f, 4016,77f), Vector(0.0f, 245,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[02], &Local_4 + 2480);
	TASK_STAND_STILL(&Local_4 + 2312[02], -1.0f, 0, 0);
	*(&Local_4 + 2312[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_T02", 1224, Vector(-3724,783f, 23,92747f, 4018,654f), Vector(0.0f, 248,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[12], &Local_4 + 2480);
	TASK_STAND_STILL(&Local_4 + 2312[12], -1.0f, 0, 0);
	*(&Local_4 + 2312[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_F07", 1210, Vector(-3721,861f, 24,31775f, 4016,236f), Vector(0.0f, 240,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[22], &Local_4 + 2480);
	TASK_STAND_STILL(&Local_4 + 2312[22], -1.0f, 0, 0);
	*(&Local_4 + 2312[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_F10", 1213, Vector(-3721,171f, 24,07747f, 4015,075f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[32], &Local_4 + 2480);
	TASK_STAND_STILL(&Local_4 + 2312[32], -1.0f, 0, 0);
	*(&Local_4 + 2312[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_B02", 1215, Vector(-3724,757f, 24,05865f, 4013,778f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[42], &Local_4 + 2480);
	TASK_STAND_STILL(&Local_4 + 2312[42], -1.0f, 0, 0);
	*(&Local_4 + 2312[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_B04", 1217, Vector(-3726,079f, 24,05865f, 4016,974f), Vector(0.0f, 249,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[52], &Local_4 + 2480);
	TASK_STAND_STILL(&Local_4 + 2312[52], -1.0f, 0, 0);
	*(&Local_4 + 2312[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_F02", 1205, Vector(-3721,991f, 24,03651f, 4014,294f), Vector(0.0f, 227,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[62], &Local_4 + 2480);
	MEMORY_CONSIDER_AS(&Local_4 + 2312[62], &Global_54076, 3);
	Function_281(&Local_4 + 2312[62], &Local_4 + 1504, 3);
	TASK_STAND_STILL(&Local_4 + 2312[62], -1.0f, 0, 0);
	*(&Local_4 + 2312[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_F03", 1206, Vector(-3723,092f, 24,10865f, 4014,139f), Vector(0.0f, 231,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[72], &Local_4 + 2480);
	MEMORY_CONSIDER_AS(&Local_4 + 2312[72], &Global_54076, 3);
	Function_281(&Local_4 + 2312[72], &Local_4 + 1504, 3);
	TASK_STAND_STILL(&Local_4 + 2312[72], -1.0f, 0, 0);
	*(&Local_4 + 2312[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_F04", 1207, Vector(-3723,27f, 24,11775f, 4018,352f), Vector(0.0f, 240,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[82], &Local_4 + 2480);
	MEMORY_CONSIDER_AS(&Local_4 + 2312[82], &Global_54076, 3);
	Function_281(&Local_4 + 2312[82], &Local_4 + 1504, 3);
	TASK_STAND_STILL(&Local_4 + 2312[82], -1.0f, 0, 0);
	*(&Local_4 + 2312[92]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "BZ_F09", 1212, Vector(-3722,221f, 24,16775f, 4018,047f), Vector(0.0f, 241,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2312[92], &Local_4 + 2480);
	MEMORY_CONSIDER_AS(&Local_4 + 2312[92], &Global_54076, 3);
	Function_281(&Local_4 + 2312[92], &Local_4 + 1504, 3);
	TASK_STAND_STILL(&Local_4 + 2312[92], -1.0f, 0, 0);
	return;
}

void Function_281(var uParam0, var uParam1, bool bParam2) //Position: 0x10F7D / 69501
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_282() //Position: 0x10FCF / 69583
{
	float fVar0;
	float fVar1;
	
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "ptl_base", 1);
	if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(&Global_54076, true) != 4)
	{
		ACTOR_SET_NEXT_WEAPON(&Global_54076, 4);
	}
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 4, 0);
	RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
	fVar0 = _GET_MAX_AMMO_AMOUNT(&Global_54076, 7);
	fVar1 = _GET_AMMO_AMOUNT(&Global_54076, 7, 1);
	if (fVar0 < fVar1)
	{
		_ADD_AMMO_OF_TYPE(&Global_54076, 7, Function_283((fVar0 - fVar1), 10.0f), 0, 1);
	}
	return;
}

var Function_283(int iParam0, int iParam1) //Position: 0x11060 / 69728
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_284(var uParam0, bool bParam1) //Position: 0x11073 / 69747
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_ALLOW_SHOOTING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_285(bool bParam0, var uParam1, bool bParam2) //Position: 0x110C2 / 69826
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_286(var uParam0, int iParam1) //Position: 0x1110E / 69902
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_287(int iParam0, bool bParam1) //Position: 0x11148 / 69960
{
	switch (iParam0)
	{
		case 0x00000000:
			if (!iLocal_1714)
			{
				if (SQUAD_IS_VALID(&Local_4 + 1504))
				{
					Function_293(&(Local_1409[015]), &Local_4 + 1504, "Zombie02_Army", 0, 0x5f5e100, 1);
					Function_289(&(Local_1409[015]), 2);
					iLocal_1714 = 1;
				}
			}
			else if (!&bParam1)
			{
				Function_288(&(Local_1409[015]));
				iLocal_1714 = 0;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_1715)
			{
				if (SQUAD_IS_VALID(&Local_4 + 1568))
				{
					Function_293(&(Local_1409[115]), &Local_4 + 1568, "Zombie02_Army", 0, 0x5f5e100, 1);
					Function_289(&(Local_1409[115]), 2);
					iLocal_1715 = 1;
				}
			}
			else if (!&bParam1)
			{
				Function_288(&(Local_1409[115]));
				iLocal_1715 = 0;
			}
			break;
	}
	return;
}

void Function_288(struct<69> Param0) //Position: 0x11225 / 70181
{
	if (IS_OBJECT_VALID(&Param0))
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Param0 = "";
	strcpy(&Param0 + 8, "", 24);
	Param0.f_64 = 0;
	Param0.f_68 = 0;
	return;
}

void Function_289(int iParam0, int iParam1) //Position: 0x112E5 / 70373
{
	if (iParam1 != 100000000)
	{
		Function_292(&iParam0, iParam1);
	}
	else
	{
		Function_290(&iParam0, 1);
	}
	return;
}

void Function_290(struct<69> Param0) //Position: 0x11307 / 70407
{
	Param0.f_68 = 0;
	Function_291(&Param0, 2, &bParam1);
	Function_291(&Param0, 4, &bParam1);
	Function_291(&Param0, 8, &bParam1);
	Function_291(&Param0, 16, &bParam1);
	Function_291(&Param0, 32, &bParam1);
	Function_291(&Param0, 64, &bParam1);
	Function_291(&Param0, 128, &bParam1);
	Function_291(&Param0, 256, &bParam1);
	Function_291(&Param0, 512, &bParam1);
	Function_291(&Param0, 1024, &bParam1);
	return;
}

void Function_291(int iParam0, int iParam1, bool bParam2) //Position: 0x11382 / 70530
{
	bool bVar0;
	
	Function_80(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_80(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_46(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_80(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_292(int iParam0, bool bParam1) //Position: 0x113C1 / 70593
{
	bool bVar0;
	
	Function_46(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_80(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_46(&iParam0 + 68, bVar0);
	return;
}

int Function_293(struct<69> Param0) //Position: 0x113EE / 70638
{
	if (!Function_297(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_296(&Param0, &uParam2))
	{
		return 0;
	}
	Function_295(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_294(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_294(var uParam0, int iParam1, int iParam2) //Position: 0x11434 / 70708
{
	if (iParam1 != 100000000)
	{
		Function_291(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_290(&uParam0, &iParam2);
	}
	return;
}

void Function_295(struct<65> Param0) //Position: 0x1145B / 70747
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_296(int iParam0, char* cParam1) //Position: 0x11468 / 70760
{
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(&iParam0 + 8, &cParam1, 24);
	return 1;
}

bool Function_297(struct<61> Param0) //Position: 0x114F5 / 70901
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &iParam1;
	Param0.f_56 = GET_OBJECT_TYPE(&Param0);
	Param0.f_60 = 2;
	switch (Param0.f_56)
	{
		case 0x0000000F:
			uVar0 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_HORSE(&uVar0))
				{
					Param0.f_60 = 1;
				}
				else if (IS_ACTOR_VEHICLE(&uVar0))
				{
					Param0.f_60 = 3;
				}
			}
			break;
		
		case 0x00000019:
			uVar1 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (SQUAD_IS_VALID(&uVar1))
			{
				if (SQUAD_GET_SIZE(&uVar1) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false);
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_ACTOR_HORSE(&uVar2))
						{
							Param0.f_60 = 1;
						}
						else if (IS_ACTOR_VEHICLE(&uVar2))
						{
							Param0.f_60 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			uVar3 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (IS_OBJECTSET_VALID(&uVar3))
			{
				if (GET_OBJECTSET_SIZE(&uVar3) >= 0)
				{
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar3);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_HORSE(&uVar5))
							{
								Param0.f_60 = 1;
							}
							else if (IS_ACTOR_VEHICLE(&uVar5))
							{
								Param0.f_60 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

void Function_298() //Position: 0x116A8 / 71336
{
	(&Local_4 + 1504) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "soldiers"));
	*(&Local_4 + 1416[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "Army_Captain", 1262, Vector(-3705,692f, 8,344243f, 3481,947f), Vector(0.0f, -84,63236f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1416[02], &Local_4 + 1504);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1416[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[02], 5, 0,999f, 1, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_4 + 1416[02], 0.0f);
	TASK_STAND_STILL(&Local_4 + 1416[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1416[02], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[02], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_4 + 1416[02], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&Local_4 + 1416[02], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 1416[02], true);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_4 + 1416[02], 1);
	*(&Local_4 + 1416[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "Army_Med01", 372, Vector(-3709,959f, 8,031375f, 3474,593f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1416[12], &Local_4 + 1504);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1416[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[12], 16, 0,999f, 1, 1);
	if (IS_WEAPONENUM_LOCKED(12))
	{
		GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[12], 41, 1.0f, 1, 1);
	}
	SET_ACTOR_ONE_SHOT_DEATH(&Local_4 + 1416[12], true);
	TASK_STAND_STILL(&Local_4 + 1416[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1416[12], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[12], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_4 + 1416[12], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&Local_4 + 1416[12], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 1416[12], true);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_4 + 1416[12], 1);
	*(&Local_4 + 1416[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "Army_Med02", 373, Vector(-3704,965f, 8,653705f, 3464,446f), Vector(0.0f, 76,01837f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1416[22], &Local_4 + 1504);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1416[22], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[22], 16, 0,999f, 1, 1);
	if (IS_WEAPONENUM_LOCKED(12))
	{
		GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[22], 41, 1.0f, 1, 1);
	}
	TASK_STAND_STILL(&Local_4 + 1416[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1416[22], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[22], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_4 + 1416[22], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&Local_4 + 1416[22], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 1416[22], true);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_4 + 1416[22], 1);
	*(&Local_4 + 1416[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "Army_E01", 369, Vector(-3696,117f, 9,531811f, 3478,961f), Vector(0.0f, -89,68085f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1416[32], &Local_4 + 1504);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1416[32], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[32], 16, 0,999f, 1, 1);
	TASK_STAND_STILL(&Local_4 + 1416[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1416[32], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[32], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_4 + 1416[32], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&Local_4 + 1416[32], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 1416[32], true);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_4 + 1416[32], 1);
	*(&Local_4 + 1416[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "Army_E02", 370, Vector(-3705,076f, 8,406718f, 3476,685f), Vector(0.0f, -81,4502f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1416[42], &Local_4 + 1504);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1416[42], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[42], 16, 0,999f, 1, 1);
	if (IS_WEAPONENUM_LOCKED(12))
	{
		GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[42], 41, 1.0f, 1, 1);
	}
	TASK_STAND_STILL(&Local_4 + 1416[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1416[42], 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[42], 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_4 + 1416[42], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&Local_4 + 1416[42], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 1416[42], true);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&Local_4 + 1416[42], 1);
	return;
}

void Function_299() //Position: 0x11B4F / 72527
{
	Function_271(&Local_4 + 3248[2]);
	Function_301();
	if (!iLocal_1509[3])
	{
		Function_298();
	}
	if (IS_ACTOR_VALID(&Local_4 + 1416[12]))
	{
		DESTROY_ACTOR(&Local_4 + 1416[12]);
	}
	Function_373(&Global_54076, &iLocal_1234 + 72, 1, 1, 1);
	Function_79();
	Function_79();
	uLocal_1646 = ATTACH_OBJECTS(&Global_54076, &iLocal_1234 + 72, Function_58(), Function_79(), Function_79(), 4294967295);
	Function_373(&Local_4 + 1416[02], &iLocal_1234 + 64, 1, 1, 1);
	Function_79();
	Function_79();
	uLocal_1638 = ATTACH_OBJECTS(&Local_4 + 1416[02], &iLocal_1234 + 64, Function_58(), Function_79(), Function_79(), 4294967295);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1416[02], false);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_4 + 1416[02], 0.0f);
	Function_373(&Local_4 + 1416[32], &iLocal_1184 + 128, 1, 1, 1);
	Function_79();
	Function_79();
	uLocal_1640 = ATTACH_OBJECTS(&Local_4 + 1416[32], &iLocal_1184 + 128, Function_58(), Function_79(), Function_79(), 4294967295);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1416[32], false);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_4 + 1416[32], 0.0f);
	Function_373(&Local_4 + 1416[42], &iLocal_1184 + 136, 1, 1, 1);
	Function_79();
	Function_79();
	uLocal_1642 = ATTACH_OBJECTS(&Local_4 + 1416[42], &iLocal_1184 + 136, Function_58(), Function_79(), Function_79(), 4294967295);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1416[42], false);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_4 + 1416[42], 0.0f);
	Function_373(&Local_4 + 1416[22], &iLocal_1184 + 144, 1, 1, 1);
	Function_79();
	Function_79();
	uLocal_1644 = ATTACH_OBJECTS(&Local_4 + 1416[22], &iLocal_1184 + 144, Function_58(), Function_79(), Function_79(), 4294967295);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1416[22], false);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_4 + 1416[22], 0.0f);
	Function_285(&Local_4 + 1504, &Global_54076, 0);
	Function_287(0, 1);
	Function_300(&Local_4 + 1504, 0, 3212836864, 0, 1);
	if (!SQUAD_IS_VALID(&bLocal_1662))
	{
		bLocal_1662 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "stationZombiesSquad"));
	}
	Function_275(&bLocal_1660);
	Function_275(&Local_4 + 1568);
	return;
}

void Function_300(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x11D53 / 73043
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			if (&bParam1)
			{
				TASK_CROUCH(&uVar1, &iParam2);
			}
			else
			{
				TASK_STAND_STILL(&uVar1, &iParam2, &iParam3, 0);
			}
			TASK_PRIORITY_SET(&uVar1, &bParam4);
		}
		bVar0++;
	}
}

void Function_301() //Position: 0x11DCE / 73166
{
	var uVar0;
	
	Function_197(&Local_4 + 3648[0]);
	uVar0 = Function_197(&Local_4 + 3648[0]);
	TRAIN_SET_MAX_ACCEL(bLocal_1693, 3,5f);
	TRAIN_SET_TARGET_SPEED(bLocal_1693, 5,2f);
	TRAIN_SET_AUTOPILOT_ENABLE(bLocal_1693, 1);
	TRAIN_SET_TARGET_POS(bLocal_1693, &uVar0);
	TRAIN_PLAY_WHISTLE_SEQUENCE(bLocal_1693, 0);
	return;
}

void Function_302() //Position: 0x11E0F / 73231
{
	Function_271(&Local_4 + 3248[2]);
	Function_323();
	Function_321();
	Function_304();
	Function_303();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_303() //Position: 0x11E34 / 73268
{
	if (!IS_ACTOR_VALID(&bLocal_1658))
	{
		bLocal_1658 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	RESET_ACTOR_GAITS(&Global_54076, 0);
	RESET_ACTOR_GAITS(&bLocal_1658, 0);
	Function_373(&bLocal_1658, &Local_4 + 3248[20], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1658, -1.0f, 0, 0);
	if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
	{
		ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1658);
	}
	return;
}

void Function_304() //Position: 0x11E99 / 73369
{
	if (!iLocal_1741)
	{
		Function_197(&Local_4 + 3248[24]);
		Local_1677 = Function_197(&Local_4 + 3248[24]);
		Function_320(&Local_4 + 3248[24]);
		Local_1680 = Function_320(&Local_4 + 3248[24]);
		STREAMING_LOAD_SCENE_EXT(Local_1677, Local_1680, 0);
		if (!SQUAD_IS_VALID(&Local_4 + 2096))
		{
			Function_319();
			Function_310(&Local_4 + 2096, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
			Function_309(&Local_4 + 2096);
		}
		if (!SQUAD_IS_VALID(&Local_4 + 2144))
		{
			Function_308();
			Function_309(&Local_4 + 2144);
		}
		Function_307(&Local_4 + 2144, 0);
		Function_306(&Local_4 + 2096, &Local_4 + 2144, 0);
		Function_306(&Local_4 + 2144, &Local_4 + 2096, 0);
		Function_373(&Local_4 + 1944[42], &Local_4 + 3248[8], 1, 1, 1);
		Function_373(&Local_4 + 1944[52], &Local_4 + 3248[9], 1, 1, 1);
		Function_373(&Local_4 + 1944[62], &Local_4 + 3248[10], 1, 1, 1);
		Function_373(&Local_4 + 2104[12], &Local_4 + 3248[11], 1, 1, 1);
		Function_373(&Local_4 + 1944[72], &Local_4 + 3248[12], 1, 1, 1);
		Function_373(&Local_4 + 1944[82], &Local_4 + 3248[13], 1, 1, 1);
		Function_373(&Local_4 + 2104[02], &Local_4 + 3248[18], 1, 1, 1);
		Function_373(&Local_4 + 1944[02], &Local_4 + 3248[14], 1, 1, 1);
		Function_373(&Local_4 + 1944[12], &Local_4 + 3248[15], 1, 1, 1);
		Function_373(&Local_4 + 1944[22], &Local_4 + 3248[16], 1, 1, 1);
		Function_373(&Local_4 + 1944[32], &Local_4 + 3248[17], 1, 1, 1);
		SET_ACTOR_STREAMING_HIGH_PRIORITY(&Local_4 + 1944[02], 1);
		SET_ACTOR_STREAMING_HIGH_PRIORITY(&Local_4 + 1944[82], 1);
		SET_ACTOR_STREAMING_HIGH_PRIORITY(&Local_4 + 1416[32], 1);
		SET_ACTOR_STREAMING_HIGH_PRIORITY(&Local_4 + 1416[42], 1);
		Function_279(&Local_4 + 2096, 0,6f);
		Function_305(&Local_4 + 2096, &Local_4 + 2816);
		iLocal_1741 = 1;
	}
	return;
}

int Function_305(bool bParam0, int iParam1) //Position: 0x120AF / 73903
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_306(bool bParam0, bool bParam1, int iParam2) //Position: 0x1210D / 73997
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_281(&uVar1, &bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_307(var uParam0, bool bParam1) //Position: 0x12164 / 74084
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		SET_ACTOR_INVULNERABILITY(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), bParam1);
		bVar0++;
	}
	return;
}

void Function_308() //Position: 0x1218E / 74126
{
	*(&Local_4 + 2144) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "S04_Station_Spec_Z"));
	*(&Local_4 + 2104[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "F04", 1204, Vector(-3705,137f, 8,677471f, 3481,642f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2104[02], &Local_4 + 2144);
	TASK_STAND_STILL(&Local_4 + 2104[02], -1.0f, 0, 0);
	*(&Local_4 + 2104[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "B06", 1219, Vector(-3705,208f, 8,677471f, 3477,922f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2104[12], &Local_4 + 2144);
	TASK_STAND_STILL(&Local_4 + 2104[12], -1.0f, 0, 0);
	return;
}

void Function_309(bool bParam0) //Position: 0x1225A / 74330
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_IGNORE_ACTOR(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_310(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1229F / 74399
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		PRINTSTRING("MAKE_SQUAD_ZOMBIE -- Passed invalid squad, exiting...");
		PRINTNL();
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_311(&uVar1, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
		}
		else
		{
			PRINTSTRING("MAKE_SQUAD_ZOMBIE -- Invalid member in the squad..");
			PRINTNL();
		}
		bVar0++;
	}
}

void Function_311(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x12376 / 74614
{
	var uVar0;
	
	if (Function_318(&uParam0) && !Function_317(&uParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&uParam0, &iParam1);
	if (&iParam2 == 4294967294 && &iParam3 == 4294967294)
	{
		if (&iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(false, 4);
		}
		if (&iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(false, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(&uParam0, &iParam2, &iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (&bParam6)
	{
		DEEQUIP_ACCESSORY(&uParam0, 0);
	}
	if (&bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam0);
	}
	Function_315(&uParam0);
	DECOR_SET_BOOL(&uParam0, "Zombie", true);
	Function_314(&uParam0);
	SET_ACTOR_ALLOW_DISARM(&uParam0, false);
	SET_CRIPPLE_ENABLE(&uParam0, 0);
	SET_CRIPPLE_FLAG(&uParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(&uParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&uParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, false);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&uParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&uParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&uParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&uParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(&uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &uVar0, 1);
	}
	if (&iParam1 <= 1204 && &iParam1 >= 1213)
	{
		DECOR_SET_BOOL(&uParam0, "FastZombie", true);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&uParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 12,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 30, 0,5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&uParam0, "head");
	if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2020.0f, 1);
	}
	Function_312(&uParam0, &uParam4, &uParam5);
}

void Function_312(var uParam0, int iParam1, bool bParam2) //Position: 0x12613 / 75283
{
	switch (&iParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (&iParam1 != 4294967295)
	{
		if (&bParam2)
		{
			Function_313(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

void Function_313(var uParam0, int iParam1, bool bParam2) //Position: 0x126D0 / 75472
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	SET_ALLOW_EXECUTE(&uParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&uParam0);
	switch (&iParam1)
	{
		case 0x00000001:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			FIND_GROUND_INTERSECTION(&Var0, 10.0f, &Var2, &Var4);
			Var2.f_4 = (StackVal + 0,05f);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_58(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_79();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_58(), Var2, Function_79());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_58(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_79();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_58(), Var0, Function_79());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
	}
	if (!&bParam2)
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(&uParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(&uParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&uParam0, "WakeUpFast", true);
	}
	return;
}

void Function_314(int iParam0) //Position: 0x1289C / 75932
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", true);
	}
	return;
}

void Function_315(int iParam0) //Position: 0x128D3 / 75987
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(&iParam0, 0.0f);
	Function_316(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_316(var uParam0, bool bParam1) //Position: 0x12C91 / 76945
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

bool Function_317(var uParam0, int iParam1) //Position: 0x12CB4 / 76980
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&uParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_318(int iParam0) //Position: 0x12CF9 / 77049
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_319() //Position: 0x12D1A / 77082
{
	*(&Local_4 + 2096) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "S04_Z_Station"));
	*(&Local_4 + 1944[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_E01", 202, Vector(-3703,324f, 8,677471f, 3479,994f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[02], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[02], false);
	TASK_STAND_STILL(&Local_4 + 1944[02], -1.0f, 0, 0);
	*(&Local_4 + 1944[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_E02", 87, Vector(-3702,991f, 8,677471f, 3478,948f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[12], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[12], false);
	TASK_STAND_STILL(&Local_4 + 1944[12], -1.0f, 0, 0);
	*(&Local_4 + 1944[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_E03", 22, Vector(-3703,842f, 8,677471f, 3480,465f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[22], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[22], false);
	TASK_STAND_STILL(&Local_4 + 1944[22], -1.0f, 0, 0);
	*(&Local_4 + 1944[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_M01", 311, Vector(-3703,828f, 8,677471f, 3479,439f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[32], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[32], false);
	TASK_STAND_STILL(&Local_4 + 1944[32], -1.0f, 0, 0);
	*(&Local_4 + 1944[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_M02", 49, Vector(-3704,341f, 8,677471f, 3478,875f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[42], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[42], false);
	TASK_STAND_STILL(&Local_4 + 1944[42], -1.0f, 0, 0);
	*(&Local_4 + 1944[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_M03", 50, Vector(-3705,048f, 8,677471f, 3480,548f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[52], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[52], false);
	TASK_STAND_STILL(&Local_4 + 1944[52], -1.0f, 0, 0);
	*(&Local_4 + 1944[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_H01", 74, Vector(-3704,545f, 8,677471f, 3481,104f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[62], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[62], false);
	TASK_STAND_STILL(&Local_4 + 1944[62], -1.0f, 0, 0);
	*(&Local_4 + 1944[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_H02", 142, Vector(-3704,77f, 8,677471f, 3478,403f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[72], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[72], false);
	TASK_STAND_STILL(&Local_4 + 1944[72], -1.0f, 0, 0);
	*(&Local_4 + 1944[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "DnD_H03", 136, Vector(-3704,346f, 8,677471f, 3479,91f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1944[82], &Local_4 + 2096);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1944[82], false);
	TASK_STAND_STILL(&Local_4 + 1944[82], -1.0f, 0, 0);
	return;
}

struct<8> Function_320(var uParam0) //Position: 0x130AD / 77997
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_321() //Position: 0x130D6 / 78038
{
	if (!SQUAD_IS_VALID(&Local_4 + 1504))
	{
		Function_298();
	}
	Function_285(&Local_4 + 1504, &Global_54076, 0);
	Function_373(&Local_4 + 1416[02], &iLocal_1184 + 112, 1, 1, 1);
	Function_373(&Local_4 + 1416[12], &Local_4 + 3248[6], 1, 1, 1);
	Function_373(&Local_4 + 1416[22], &Local_4 + 3248[7], 1, 1, 1);
	Function_373(&Local_4 + 1416[32], &Local_4 + 3248[4], 1, 1, 1);
	Function_373(&Local_4 + 1416[42], &Local_4 + 3248[5], 1, 1, 1);
	Function_79();
	Function_79();
	uLocal_1638 = ATTACH_OBJECTS(&Local_4 + 1416[02], &iLocal_1184 + 112, Function_58(), Function_79(), Function_79(), 4294967295);
	Function_79();
	Function_79();
	uLocal_1642 = ATTACH_OBJECTS(&Local_4 + 1416[42], &iLocal_1184 + 120, Function_58(), Function_79(), Function_79(), 4294967295);
	Function_322();
	Function_287(0, 1);
	return;
}

void Function_322() //Position: 0x131B7 / 78263
{
	Function_286(&Local_4 + 1504, 0);
	Function_284(&Local_4 + 1504, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[32], 8, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&Local_4 + 1416[32], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[32], 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[42], 8, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&Local_4 + 1416[42], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[42], 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[22], 8, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&Local_4 + 1416[22], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[22], 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[12], 8, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&Local_4 + 1416[12], 16, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[12], 0);
	TASK_USE_GRINGO(&Local_4 + 1416[02], GET_GRINGO_FROM_OBJECT(&Local_4 + 4064), "USECASE1", true, 1);
	TASK_USE_GRINGO(&Local_4 + 1416[42], GET_GRINGO_FROM_OBJECT(&Local_4 + 4056), "USECASE1", true, 1);
	TASK_USE_GRINGO(&Local_4 + 1416[32], GET_GRINGO_FROM_OBJECT(&Local_4 + 4048), "USECASE1", true, 1);
	TASK_USE_GRINGO(&Local_4 + 1416[22], GET_GRINGO_FROM_OBJECT(&Local_4 + 4120), "USECASE1", true, 1);
	TASK_USE_GRINGO(&Local_4 + 1416[12], GET_GRINGO_FROM_OBJECT(&Local_4 + 4112), "USECASE1", true, 1);
	TASK_USE_GRINGO(&Local_4 + 1944[82], GET_GRINGO_FROM_OBJECT(&Local_4 + 4072), "USECASE1", true, 1);
	TASK_USE_GRINGO(&Local_4 + 2104[02], GET_GRINGO_FROM_OBJECT(&Local_4 + 4080), "USECASE1", true, 1);
	TASK_USE_GRINGO(&Local_4 + 1944[32], GET_GRINGO_FROM_OBJECT(&Local_4 + 4088), "USECASE1", true, 1);
	TASK_USE_GRINGO(&Local_4 + 1944[02], GET_GRINGO_FROM_OBJECT(&Local_4 + 4096), "USECASE1", true, 1);
	TASK_PRIORITY_SET(&Local_4 + 1416[02], true);
	TASK_PRIORITY_SET(&Local_4 + 1416[42], true);
	TASK_PRIORITY_SET(&Local_4 + 1416[32], true);
	TASK_PRIORITY_SET(&Local_4 + 1416[22], true);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 1416[02], &Local_4 + 4064, "USECASE1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 1416[42], &Local_4 + 4056, "USECASE1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 1416[32], &Local_4 + 4048, "USECASE1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 1416[22], &Local_4 + 4120, "USECASE1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 1416[12], &Local_4 + 4112, "USECASE1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 1944[82], &Local_4 + 4072, "USECASE1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 2104[02], &Local_4 + 4080, "USECASE1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 1944[32], &Local_4 + 4088, "USECASE1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO(&Local_4 + 1944[02], &Local_4 + 4096, "USECASE1", true, 0, 0);
	return;
}

void Function_323() //Position: 0x1354A / 79178
{
	if (!IS_OBJECTSET_VALID(&uLocal_1648))
	{
		uLocal_1648 = CREATE_OBJECTSET_IN_LAYOUT("osClimbOnTrain", &Local_4, 12, 1);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&iLocal_1062 + 400, &uLocal_1648))
	{
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 400, &uLocal_1648);
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 392, &uLocal_1648);
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 408, &uLocal_1648);
		ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 416, &uLocal_1648);
	}
	return;
}

int Function_324() //Position: 0x135C7 / 79303
{
	switch (iLocal_1349)
	{
		case 0x00000063:
			if (!Function_248(&iLocal_1275))
			{
				return 0;
			}
			if (!IS_LAYOUTREF_VALID(&Local_4))
			{
				Function_246();
			}
			Function_326();
			return 1;
			break;
		
		case 0x00000003:
			Function_325(&Local_4 + 4016);
			return 1;
			break;
		
		case 0x00000004:
			Function_325(&Local_4 + 4024);
			return 1;
			break;
		
		case 0x00000005:
			Function_325(&Local_4 + 4016);
			TRAIN_SET_TARGET_SPEED(bLocal_1693, 0.0f);
			Function_248(&iLocal_1275);
			return 1;
		
		case 0x00000065:
			Function_325(&Local_4 + 4032);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_325(int iParam0) //Position: 0x13660 / 79456
{
	if (!iLocal_1738)
	{
		Function_271(&iParam0);
		iLocal_1738 = 1;
	}
	return;
}

void Function_326() //Position: 0x13677 / 79479
{
	if (!iLocal_1739)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		uLocal_1652 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1261, Function_58(), "p_gen_stool02x", Vector(-3860,191f, 8,012622f, 3668,214f), Vector(0.0f, -90.0f, 0.0f), true);
		uLocal_1650 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1261, Function_58(), "stool_sit_attach_indef", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		ATTACH_OBJECTS(StackVal, StackVal, &uLocal_1650, &uLocal_1652, Function_58(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
		SET_DRAW_OBJECT(&uLocal_1652, 0);
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
		iLocal_1739 = 1;
	}
	return;
}

int Function_327() //Position: 0x1371E / 79646
{
	switch (iLocal_1349)
	{
		case 0x00000063:
			if (STREAMING_IS_WORLD_LOADED() && Function_248(&iLocal_1275))
			{
				if (!IS_LAYOUTREF_VALID(&Local_4))
				{
					Function_246();
				}
				CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(StackVal, Vector(-3880,992f, 9,495f, 3658,541f), 0, 0);
				return 1;
			}
			return 0;
			break;
		
		case 0x00000003:
			if (STREAMING_IS_WORLD_LOADED() && Function_248(&iLocal_1275))
			{
				CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
				if (!IS_LAYOUTREF_VALID(&Local_4))
				{
					Function_246();
				}
				return 1;
			}
			return 0;
			break;
		
		case 0x00000004:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-3699,505f, 12,198f, 3484,008f), Vector(-0,237f, -0,052f, 0,97f));
			return 1;
			break;
		
		case 0x00000005:
			if (Function_329())
			{
				CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
				Function_328();
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_328() //Position: 0x137E1 / 79841
{
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "ptl_base", 1);
	if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(&Global_54076, true) != 4)
	{
		ACTOR_SET_NEXT_WEAPON(&Global_54076, 4);
	}
	return;
}

bool Function_329() //Position: 0x13824 / 79908
{
	Function_330(&Local_4 + 1192, 1222, 2, 0);
	Function_330(&Local_4 + 1192, 1224, 2, 0);
	Function_330(&Local_4 + 1192, 1210, 2, 0);
	Function_330(&Local_4 + 1192, 1213, 2, 0);
	Function_330(&Local_4 + 1192, 1215, 2, 0);
	Function_330(&Local_4 + 1192, 1217, 2, 0);
	Function_330(&Local_4 + 1192, 1205, 2, 0);
	Function_330(&Local_4 + 1192, 1206, 2, 0);
	Function_330(&Local_4 + 1192, 1207, 2, 0);
	Function_330(&Local_4 + 1192, 1212, 2, 0);
	Function_330(&Local_4 + 1192, 1218, 2, 0);
	Function_330(&Local_4 + 1192, 1219, 2, 0);
	if (Function_248(&Local_4 + 1192))
	{
		return 1;
	}
	return 0;
}

var Function_330(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x138E0 / 80096
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_141(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_252(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_252(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_331() //Position: 0x139BC / 80316
{
	switch (iLocal_1349)
	{
		case 0x00000063:
			Function_337();
			CLEAR_AREA_OF_GRASS(StackVal, Vector(-3862,752f, 8,03117f, 3666,897f), 5.0f);
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_197(&Local_4 + 3000[0]);
			Function_332(StackVal, &iLocal_1261, Function_197(&Local_4 + 3000[0]), &Local_4 + 2600[0], 0, 0, 0, 0, 1, 1);
			Function_371(&iLocal_1596);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000003:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_197(&Local_4 + 3248[19]);
			Function_332(StackVal, &iLocal_1261, Function_197(&Local_4 + 3248[19]), &Local_4 + 2600[3], 0, 0, 0, 0, 1, 1);
			AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
			iLocal_1738 = 0;
			return 1;
			break;
		
		case 0x00000004:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_197(&Local_4 + 3248[19]);
			Function_332(StackVal, &iLocal_1261, Function_197(&Local_4 + 3248[19]), &Local_4 + 2600[3], 0, 0, 0, 0, 1, 1);
			iLocal_1738 = 0;
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000005:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0,4f, 0);
			Function_197(&Local_4 + 3648[0]);
			Function_332(StackVal, &iLocal_1261, Function_197(&Local_4 + 3648[0]), &Local_4 + 2600[2], 0, 0, 0, 0, 1, 1);
			SET_DRAW_OBJECT(&Local_4 + 4208, 0);
			iLocal_1738 = 0;
			AUDIO_MUSIC_FORCE_TRACK("FTR_ZMB_SONG_01", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			return 1;
			break;
		
		case 0x00000065:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_197(&Local_4 + 3648[0]);
			Function_332(StackVal, &iLocal_1261, Function_197(&Local_4 + 3648[0]), &Local_4 + 2600[2], 0, 0, 0, 0, 1, 1);
			iLocal_1738 = 0;
			return 1;
			break;
		
		default:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_197(&Local_4 + 3464[2]);
			Function_332(StackVal, &iLocal_1261, Function_197(&Local_4 + 3464[2]), &Local_4 + 2600[2], 0, 0, 0, 0, 1, 1);
			Function_271(&Local_4 + 4016);
			return 1;
			break;
	}
	return 0;
}

void Function_332(int iParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x13BE3 / 80867
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &iParam5;
	Var2.f_4 = &iParam6;
	Var2.f_8 = &iParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &iParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_333(&uVar1, &iParam0);
			}
		}
		if (!Function_77(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_333(var uParam0, float fParam1) //Position: 0x13E83 / 81539
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_334(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x13F05 / 81669
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_201();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_54();
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (GET_WEAPON_IN_HAND(&bVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&bVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&bVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&bVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&bVar1, false);
			}
			SET_ACTOR_HEALTH(&bVar1, GET_ACTOR_MAX_HEALTH(&bVar1));
			SET_ACTOR_INVULNERABILITY(&bVar1, true);
			AI_IGNORE_ACTOR(&bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_336(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_58(), 2, Function_336(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_91(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_335()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_335()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_250(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_126(0x4000000);
	}
	if (Function_250(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_126(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_335() //Position: 0x141BA / 82362
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

struct<8> Function_336(bool bParam0) //Position: 0x14248 / 82504
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_337() //Position: 0x1425A / 82522
{
	struct<2> Var0;
	var uVar2;
	
	Var0 = Vector(-3862,622f, 8,109f, 3664,495f);
	uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_1261, "tempPhysVol", 2, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	Function_338(&iLocal_1261, "blanket", &uVar2);
	if (IS_VOLUME_VALID(&uVar2))
	{
		DESTROY_VOLUME(&uVar2);
	}
	return;
}

void Function_338(var uParam0, char* cParam1, var uParam2) //Position: 0x142C7 / 82631
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &uParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(&iVar1, &uParam2, &cParam1, 1);
	uVar2 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_SET(&uVar2, &iVar1);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		DESTROY_OBJECT(&iVar3);
		iVar0++;
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	DESTROY_OBJECTSET(&iVar1);
	DESTROY_ITERATOR(&uVar2);
	return;
}

void Function_339(var uParam0, int iParam1) //Position: 0x14331 / 82737
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&uParam0) - 1))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0);
		SET_DRAW_OBJECT(&uVar1, iParam1);
		bVar0++;
	}
	return;
}

void Function_340(int iParam0) //Position: 0x14366 / 82790
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&iParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &iParam0);
		}
		CLEAN_OBJECTSET(&iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	return;
}

int Function_341(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x143B5 / 82869
{
	if (Function_343(&uParam0) == iParam6 || Function_342())
	{
		return 1;
	}
	return 0;
}

bool Function_342() //Position: 0x143D4 / 82900
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_343(int iParam0) //Position: 0x143EF / 82927
{
	if (Function_242(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

bool Function_344(struct<2> Param0, bool bParam2) //Position: 0x14408 / 82952
{
	switch (iLocal_1696)
	{
		case 0x00000000:
			Unknown_Function();
			if (bParam2)
			{
				iLocal_1696 = 1;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			iLocal_1696 = 2;
			break;
		
		case 0x00000002:
			iLocal_1696 = 3;
			break;
		
		case 0x00000003:
			if (Function_354(&(Local_1620[22])))
			{
				iLocal_1696 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_350(&(Local_1620[12])))
			{
				iLocal_1696 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_345(&(Local_1620[02])))
			{
				iLocal_1696 = 6;
				return 1;
			}
			break;
		
		case 0x00000006:
			if (iLocal_1349 > 3)
			{
				TRAIN_FORCE_HIGH_LOD(bLocal_1693, 1);
			}
			iLocal_1696 = 7;
			return 1;
			break;
	}
	return 0;
}

bool Function_345(int iParam0) //Position: 0x144BA / 83130
{
	var uVar0;
	
	Function_247(3, 2);
	uVar0 = &uVar0;
	Function_348(&iLocal_1234 + 8, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_248(&iLocal_1234 + 8))
	{
		return 0;
	}
	iLocal_1234 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_58()));
	(&iLocal_1234 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1234, "onTrain", 2,802597E-45f, Vector(0.0f, 3,3001f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2,854816f, 4,537057f, 11,21205f));
	*(&iLocal_1234 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1234, "pullLeverVol", 2,802597E-45f, Vector(0,02866647f, 2,145835f, 3,668741f), Vector(0.0f, 0.0f, 0.0f), Vector(1,881216f, 2,271825f, 1,684511f));
	*(&iLocal_1234 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1234, "soldierRestrict", 2,802597E-45f, Vector(0,02866647f, 2,145835f, 4,245661f), Vector(0.0f, 0.0f, 0.0f), Vector(2,425989f, 2,929713f, 2,172321f));
	*(&iLocal_1234 + 56) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1234, "EngineerPos", Vector(0,07880644f, 1,124678f, 4,140462f), Vector(0.0f, -25,61189f, 0.0f));
	*(&iLocal_1234 + 64) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1234, "ncptAttach", Vector(-0,847216f, 1,124678f, 5,395226f), Vector(0.0f, 20,38811f, 0.0f));
	*(&iLocal_1234 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1234, "plAttach", Vector(0,06013123f, 1,124678f, 3,967168f), Vector(0.0f, -1,61189f, 0.0f));
	*(&iLocal_1234 + 80) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1234, "train_engineer", "train_engineer", Vector(-0,2373522f, 1,14287f, 3,859487f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1234 + 88) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1234, "cover_right", Vector(0,520601f, 1,131388f, 4,548862f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_1234 + 96) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1234, "cover_left", Vector(-0,7171702f, 1,131388f, 4,461259f), Vector(0.0f, -180.0f, 0.0f), 1);
	Function_347(&iLocal_1234 + 96);
	Function_346(&iLocal_1234, &iParam0);
	return 1;
}

void Function_346(int iParam0, var uParam1) //Position: 0x14734 / 83764
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &uParam1, Function_58(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

void Function_347(bool bParam0) //Position: 0x1477F / 83839
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	var uVar20;
	
	Function_197(&bParam0);
	Var0 = Function_197(&bParam0);
	Function_320(&bParam0);
	Var2 = Function_320(&bParam0);
	strcpy(&cVar4, GET_OBJECT_NAME(&bParam0), 64);
	uVar20 = GET_OBJECT_OWNER(&bParam0);
	Var2 = 0.0f;
	Var2.f_8 = 0.0f;
	Var2.f_4 = (StackVal - 180.0f);
	Var2.f_4 = GET_OBJECT_HEADING(&bParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(&uVar20));
	PRINTSTRING(" at ");
	PRINTVECTOR(Var0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(Var2);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar4);
	PRINTNL();
	DESTROY_OBJECT(&bParam0);
	bParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(&uVar20, &cVar4, Var0, Var2, 2);
	return;
}

var Function_348(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x14853 / 84051
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_349(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_252(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_349(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x14891 / 84113
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_141(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_252(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_350(var uParam0) //Position: 0x14960 / 84320
{
	var uVar0;
	
	Function_247(3, 2);
	uVar0 = &uVar0;
	Function_348(&iLocal_1184 + 8, "$/content/scripting/gringo/simplegringo/jump_from_horse", 1, 0);
	if (!Function_248(&iLocal_1184 + 8))
	{
		return 0;
	}
	iLocal_1184 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_58()));
	*(&iLocal_1184 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1184, "onTrain", 2,802597E-45f, Vector(0.0f, 2,703149f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2,831535f, 4,018743f, 7,445875f));
	*(&iLocal_1184 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1184, "cptRestrict", 2,802597E-45f, Vector(-0,04399485f, 3,223202f, 0,9988728f), Vector(0.0f, 0.0f, 0.0f), Vector(2,135586f, 2,568695f, 2,205698f));
	*(&iLocal_1184 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1184, "soldierRestrict", 2,802597E-45f, Vector(-0,01584982f, 2,386658f, -1,908162f), Vector(0.0f, 0.0f, 0.0f), Vector(2,410197f, 2,568695f, 2,205698f));
	*(&iLocal_1184 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1184, "s05_e01_restrict", 2,802597E-45f, Vector(0,6341502f, 2,186658f, -2,958162f), Vector(0.0f, 0.0f, 0.0f), Vector(1,191936f, 2,945847f, 1,522069f));
	*(&iLocal_1184 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1184, "s05_cap_restrict", 2,802597E-45f, Vector(-0,6158498f, 2,186658f, -2,958162f), Vector(0.0f, 0.0f, 0.0f), Vector(1,191936f, 2,955712f, 1,522069f));
	*(&iLocal_1184 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1184, "nzombieOut", 2,802597E-45f, Vector(0.0f, 2,653149f, -0,1f), Vector(0.0f, 0.0f, 0.0f), Vector(3,802749f, 4,957779f, 7,844279f));
	*(&iLocal_1184 + 80) = Vector(-0,7303683f, 0,7902242f, -3,098026f);
	*(&iLocal_1184 + 80 + 12) = Vector(0.0f, 96,51199f, 0.0f);
	Function_351(&uParam0, &iLocal_1184 + 80);
	*(&iLocal_1184 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "cptWatch", Vector(-0,7303683f, 0,7902242f, -3,098026f), Vector(0.0f, 96,51199f, 0.0f));
	*(&iLocal_1184 + 112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "ncptAttach", Vector(0,8012701f, 2,111853f, 1,827781f), Vector(0.0f, -136.0f, 0.0f));
	*(&iLocal_1184 + 120) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "soldierAttach", Vector(0,2474272f, 1,137075f, -2,152601f), Vector(0.0f, -86.0f, 0.0f));
	*(&iLocal_1184 + 128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "s05_E01_Attach", Vector(0,521233f, 1,137075f, -2,574993f), Vector(0.0f, -4.0f, 0.0f));
	*(&iLocal_1184 + 136) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "s05_E02_Attach", Vector(0,002307758f, 2,24259f, 1,765795f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1184 + 144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "s05_M02_Attach", Vector(0,7970448f, 0,8494907f, 3,497481f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1184 + 152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "jump_from_horse", "jump_from_horse", Vector(0,9720914f, 0,7902242f, -3,250493f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1184 + 160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "jump_from_horse1", "jump_from_horse", Vector(-1,092879f, 0,7902243f, -3,362524f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1184 + 168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "jump_from_horse2", "jump_from_horse", Vector(-1,170888f, 0,8494906f, 3,303611f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1184 + 176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "jump_from_horse3", "jump_from_horse", Vector(1,054609f, 0,8494909f, 3,194651f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1184 + 184) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "cover_left", Vector(-0,6827322f, 1,137075f, -2,340713f), Vector(0.0f, -90.0f, 0.0f), 1);
	*(&iLocal_1184 + 192) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1184, "cover_right", Vector(0,645075f, 1,137075f, -2,340713f), Vector(0.0f, 0.0f, 0.0f), 1);
	Function_347(&iLocal_1184 + 192);
	Function_346(&iLocal_1184, &uParam0);
	return 1;
}

void Function_351(var uParam0, int iParam1) //Position: 0x14E3B / 85563
{
	Function_352(&uParam0, 1, &iParam1, &iParam1 + 12);
	return;
}

void Function_352(var uParam0, bool bParam1, struct<2> Param2) //Position: 0x14E50 / 85584
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_353(&Var0, &Param2))
			{
				Param2 = Var0;
			}
		}
		else
		{
			Param2 = Var0;
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&uParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_353(vector3 vParam0) //Position: 0x14F7D / 85885
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_77(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_77(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_354(int iParam0) //Position: 0x14FF3 / 86003
{
	var uVar0;
	
	Function_247(3, 2);
	uVar0 = &uVar0;
	Function_348(&iLocal_1062 + 8, "p_gen_crateMultiplayerAmmoFull01x", 0, 0);
	Function_348(&iLocal_1062 + 8, "$/content/scripting/gringo/simplegringo/train_lean_rail_nospawn", 1, 0);
	Function_348(&iLocal_1062 + 8, "$/content/scripting/gringo/simplegringo/train_stand_lookdistance_w_any", 1, 0);
	Function_348(&iLocal_1062 + 8, "$/content/scripting/gringo/simplegringo/z_dlc_z_climb", 1, 0);
	Function_348(&iLocal_1062 + 8, "$/content/scripting/gringo/simplegringo/jump_from_horse", 1, 0);
	if (!Function_248(&iLocal_1062 + 8))
	{
		return 0;
	}
	iLocal_1062 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_58()));
	*(&iLocal_1062 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1062, "onTrain", 2,802597E-45f, Vector(0.0f, 2,913689f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(3,899684f, 4,472909f, 17,71123f));
	*(&iLocal_1062 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1062, "onFront", 2,802597E-45f, Vector(0.0f, 2,913689f, -4,457579f), Vector(0.0f, 0.0f, 0.0f), Vector(3,756499f, 4,472909f, 6,768486f));
	*(&iLocal_1062 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1062, "onBack", 2,802597E-45f, Vector(0.0f, 2,913689f, 3,994514f), Vector(0.0f, 0.0f, 0.0f), Vector(3,738349f, 4,472909f, 7,565088f));
	*(&iLocal_1062 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_1062, "stayOut", 2,802597E-45f, Vector(0.0f, 2,113689f, -0,75f), Vector(0.0f, 0.0f, 0.0f), Vector(6,002841f, 4,472909f, 19,9494f));
	*(&iLocal_1062 + 128) = Vector(-0,9690404f, 0,8494907f, 8,208385f);
	*(&iLocal_1062 + 128 + 12) = Vector(0.0f, -262,8362f, 0.0f);
	Function_351(&iParam0, &iLocal_1062 + 128);
	*(&iLocal_1062 + 152) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "GuardingFront", Vector(-0,9690404f, 0,8494907f, 8,208385f), Vector(0.0f, -262,8362f, 0.0f));
	*(&iLocal_1062 + 160) = Vector(-1,040968f, 0,8004913f, -8,218503f);
	*(&iLocal_1062 + 160 + 12) = Vector(0.0f, 76,56722f, 0.0f);
	Function_351(&iParam0, &iLocal_1062 + 160);
	*(&iLocal_1062 + 184) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "GuardingBack", Vector(-1,040968f, 0,8004913f, -8,218503f), Vector(0.0f, 76,56722f, 0.0f));
	*(&iLocal_1062 + 192) = Vector(-1,320253f, 1,084862f, 1,627733f);
	*(&iLocal_1062 + 192 + 12) = Vector(0.0f, -278,5902f, 0.0f);
	Function_351(&iParam0, &iLocal_1062 + 192);
	*(&iLocal_1062 + 216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "GuardingMid", Vector(-1,320253f, 1,084862f, 1,627733f), Vector(0.0f, -278,5902f, 0.0f));
	*(&iLocal_1062 + 224) = CREATE_OBJECTSET_IN_LAYOUT("DefendPos1Set", &iLocal_1062, 8, 0);
	*(&iLocal_1062 + 232[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "Def_1", Vector(-1,412868f, 1,08065f, 1,72801f), Vector(0.0f, 92,60244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 232[0], &iLocal_1062 + 224);
	*(&iLocal_1062 + 232[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "Def_5", Vector(1,218355f, 1,085525f, 1,37169f), Vector(0.0f, 276,4541f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 232[1], &iLocal_1062 + 224);
	*(&iLocal_1062 + 232[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "Def_6", Vector(1,267388f, 1,087534f, -6,896013f), Vector(0.0f, 270,7169f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 232[2], &iLocal_1062 + 224);
	*(&iLocal_1062 + 232[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "Def_7", Vector(-1,382259f, 1,08065f, -6,495248f), Vector(0.0f, 449,6314f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 232[3], &iLocal_1062 + 224);
	*(&iLocal_1062 + 232[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "Def_8", Vector(1,271683f, 1,083226f, -1,485292f), Vector(0.0f, 267,7339f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 232[4], &iLocal_1062 + 224);
	*(&iLocal_1062 + 232[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "Def_9", Vector(1,114372f, 1,0939f, 6,413198f), Vector(0.0f, 181,7339f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 232[5], &iLocal_1062 + 224);
	*(&iLocal_1062 + 288) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "Def_10", Vector(1,114372f, 1,0939f, 6,413198f), Vector(0.0f, 181,7339f, 0.0f));
	*(&iLocal_1062 + 296) = CREATE_OBJECTSET_IN_LAYOUT("ZombieFollowLeftSet", &iLocal_1062, 8, 0);
	*(&iLocal_1062 + 304[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "zf_L_01", Vector(-5,65844f, 0,1281526f, 1,394819f), Vector(0.0f, 92,60244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 304[0], &iLocal_1062 + 296);
	*(&iLocal_1062 + 304[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "zf_L_02", Vector(-4,048771f, 0,08064997f, -3,407602f), Vector(0.0f, 92,60244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 304[1], &iLocal_1062 + 296);
	*(&iLocal_1062 + 304[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "zf_L_03", Vector(-4,382504f, -0,06935003f, -9,648886f), Vector(0.0f, 92,60244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 304[2], &iLocal_1062 + 296);
	*(&iLocal_1062 + 336) = CREATE_OBJECTSET_IN_LAYOUT("ZombieFollowRightSet", &iLocal_1062, 8, 0);
	*(&iLocal_1062 + 344[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "zf_R_01", Vector(5,584477f, 0,03064997f, -9,50129f), Vector(0.0f, 92,60244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 344[0], &iLocal_1062 + 336);
	*(&iLocal_1062 + 344[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "zf_R_02", Vector(4,117798f, -0,11935f, -4,32936f), Vector(0.0f, 92,60244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 344[1], &iLocal_1062 + 336);
	*(&iLocal_1062 + 344[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "zf_R_03", Vector(5,604891f, -0,11935f, -0,2426678f), Vector(0.0f, 92,60244f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_1062 + 344[2], &iLocal_1062 + 336);
	*(&iLocal_1062 + 376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "train_lean_rail_nospawn", "train_lean_rail_nospawn", Vector(-0,3141045f, 1,08065f, -1,751267f), Vector(0.0f, 89,06522f, 0.0f));
	*(&iLocal_1062 + 384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "train_rand_idle_stand_nospawn", "train_stand_lookdistance_w_any", Vector(1,284201f, 1,08065f, -0,4395666f), Vector(0.0f, 271,5391f, 0.0f));
	*(&iLocal_1062 + 392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "z_dlc_z_climb1", "z_dlc_z_climb", Vector(4,35f, -0,349983f, 1,656989f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_1062 + 400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "z_dlc_z_climb", "z_dlc_z_climb", Vector(4,35f, -0,375f, 6,990816f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_1062 + 408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "z_dlc_z_climb2", "z_dlc_z_climb", Vector(4,35f, -0,375f, -2,125458f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_1062 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "z_dlc_z_climb3", "z_dlc_z_climb", Vector(4,35f, -0,375f, -6,889865f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_1062 + 424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "jump_from_horse", "jump_from_horse", Vector(1,712382f, 1,08065f, 5,1021f), Vector(0.0f, 1.0f, 0.0f));
	*(&iLocal_1062 + 432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "jump_from_horse1", "jump_from_horse", Vector(1,803739f, 1,08065f, -4,047189f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_1062 + 440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "jump_from_horse2", "jump_from_horse", Vector(-1,677039f, 1,08065f, -1,963834f), Vector(0.0f, 2.0f, 0.0f));
	*(&iLocal_1062 + 448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "jump_from_horse3", "jump_from_horse", Vector(-1,666663f, 1,08065f, 5,190672f), Vector(0.0f, -1.0f, 0.0f));
	PushArrayP();
	*(&iLocal_1062 + 456) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_1062, "Disembark_Front_left");
}

vector3 V?Yx:Aç@mH   (bool bParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139) //Position: 0x15B72 / 88946
{
	*(&iLocal_1062 + 464) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, 3510);
	PushArrayP();
	*(&iLocal_1062 + 472) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_1062, "Disembark_Front_right");
	*(&iLocal_1062 + 480) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1062, "crateMultiplayerAmmoFull01x0", "p_gen_crateMultiplayerAmmoFull01x", Vector(-0,09885825f, 1,08065f, 4,454755f), Vector(0.0f, 0.0f, 0.0f), false);
	Function_346(&iLocal_1062, &bParam0);
	return 1;
	bParam2 = false;
	bParam2 = false;
	while (bParam2 < 2)
	{
		Local_1620[bParam22] = TRAIN_GET_CAR(bLocal_1693, bParam2);
		if (IS_OBJECT_VALID(&(Local_1620[bParam22])))
		{
			PRINTINT(bParam2);
			PRINTNL();
		}
		else
		{
			PRINTINT(bParam2);
			PRINTNL();
		}
		bParam2++;
	}
	return;
	if (!iLocal_1711)
	{
		uLocal_1634 = CREATE_WORLD_SECTOR(&iLocal_1261, "swRailRoad");
		iLocal_1711 = 1;
		bLocal_1693 = 4294967295;
	}
	else if (IS_WORLD_SECTOR_LOADED(&uLocal_1634))
	{
		if (bLocal_1693 < 0)
		{
			bLocal_1693 = TRAIN_CREATE_NEW_TRAIN(3, "rail__rrtrack_02x", 0);
		}
		TRAIN_SET_MAX_ACCEL(bLocal_1693, 1,25f);
		TRAIN_SET_MAX_DECEL(bLocal_1693, -0,75f);
		TRAIN_SET_TARGET_SPEED(bLocal_1693, 0.0f);
		UNK_0x44986367(&uParam5, bParam2);
		TRAIN_SET_POSITION_DIRECTION_PRECISELY(bLocal_1693, &bParam0, &uParam5, 16);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1693, 1166);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1693, 1167);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_1693, 1164);
		return 1;
	}
	return 0;
	switch (iLocal_1708)
	{
		case 0x00000000:
			bLocal_1747 = 9;
			Function_363(bLocal_1747, 1, 0, 0, 0);
			Function_360(bLocal_1747, 1, 0);
			if (Function_164(bLocal_1747))
			{
				if (Function_359(bLocal_1747))
				{
					if (Function_357(bLocal_1747))
					{
						Unknown_Function();
						while (true)
						{
							Function_371(&iLocal_1596);
							iLocal_1708++;
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (bLocal_1747)
			{
				return 1;
			}
			break;
	}
	return 0;
	if (Global_42825 == bParam0)
	{
		return 1;
	}
	return 0;
	if (Global_42825 == bParam0)
	{
		return 1;
	}
	if (Global_42826 == bParam0)
	{
		return 1;
	}
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to swap to an invalid outfit");
		return 0;
	}
	if (!Function_357(bParam0) && !&bParam2)
	{
		return 0;
	}
	Global_42826 = bParam0;
	if (&bParam1)
	{
		Function_356(bParam0, 8192);
	}
	DECOR_SET_BOOL(&Global_54076, "playerChangeOutfits", true);
	return 1;
}

void Function_356(bool bParam0, int iParam1) //Position: 0x15EE4 / 89828
{
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_357(bool bParam0) //Position: 0x15F39 / 89913
{
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_358(bParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_358(int iParam0, int iParam1) //Position: 0x15F8A / 89994
{
	int iVar0;
	
	if (!Function_164(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_359(bool bParam0) //Position: 0x15FB7 / 90039
{
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_358(bParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_360(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16009 / 90121
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_357(bParam0))
	{
		if (!Function_359(bParam0))
		{
			Function_363(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_91(457, 1, 0, 0);
		Function_356(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_362(0, 0, 1, 1))
			{
				Function_45(1);
				Function_44(1, 0);
			}
			else
			{
				Function_361();
			}
		}
	}
	return;
}

void Function_361() //Position: 0x161AA / 90538
{
	return;
}

bool Function_362(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x161B0 / 90544
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_363(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1625F / 90719
{
	char* cVar0[32];
	
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_370(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_359(bParam0))
	{
		Function_91(456, 1, 0, 0);
		Function_356(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_362(0, 0, 1, 1))
			{
				Function_45(1);
				Function_44(1, 5);
			}
			else
			{
				Function_361();
			}
		}
		Function_366(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_365() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_365() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_364(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_113(Global_119934, 2))
			{
				Function_108(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_364(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x163BB / 91067
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_365() //Position: 0x16446 / 91206
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_366(bool bParam0) //Position: 0x16473 / 91251
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_369(bParam0, Function_182(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_369(bParam0, Function_182(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_368(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_38(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_367(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_367(int iParam0) //Position: 0x16623 / 91683
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_164(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

var Function_368(int iParam0) //Position: 0x1667A / 91770
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_164(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_369(bool bParam0, bool bParam1) //Position: 0x166D0 / 91856
{
	int iVar0;
	
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_370(int iParam0) //Position: 0x1672F / 91951
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_371(int iParam0) //Position: 0x1674B / 91979
{
	Function_372(&iParam0, 0.0f);
	return;
}

void Function_372(vector3 vParam0) //Position: 0x16758 / 91992
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_80(&vParam0, 1);
	Function_46(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_373(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1677D / 92029
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_374(bool bParam0) //Position: 0x1688D / 92301
{
	Function_375(0, 0x40400000);
	Function_168();
	Function_167();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_375(float fParam0, float fParam1) //Position: 0x168C3 / 92355
{
	(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_377();
	Function_376();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_376() //Position: 0x169D4 / 92628
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_377() //Position: 0x16A08 / 92680
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_378() //Position: 0x16B0E / 92942
{
	Function_452();
	if (iLocal_1350 > 7)
	{
		Function_443(&(Local_1620[22]), "Zombie02_Warn_Train", "Zombie02_Fail_Train", "Z02_Blip_Train", &bLocal_1662);
		Function_197(&Local_4 + 3648[0]);
		if (!Function_438(StackVal, "$/cutscene/MEXICO_CROSSING_5_CS_SEQ/MEXICO_CROSSING_5_CS_SEQ", &uLocal_1529, Function_197(&Local_4 + 3648[0]), 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
		{
		}
	}
	switch (iLocal_1350)
	{
		case 0x00000000:
			Function_374(0);
			iLocal_1695 = 4294967295;
			Function_437();
			if (!iLocal_1509[4])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_436();
				Function_371(&iLocal_1596);
				iLocal_1350 = 1;
			}
			else
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (Function_329())
					{
						Function_197(&Local_4 + 3648[0]);
						if (Function_344(StackVal, Function_197(&Local_4 + 3648[0]), 242.0f))
						{
							Function_371(&iLocal_1596);
							iLocal_1350 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1263, iLocal_1349) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MEXICO_CROSSING_CS_SEQ/MEXICO_CROSSING_CS_SEQ"))
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				Function_371(&iLocal_1596);
				iLocal_1350 = 3;
			}
			else
			{
				AUDIO_MUSIC_FORCE_TRACK("FTR_ZMB_SONG_01", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_274();
				Function_371(&iLocal_1596);
				iLocal_1350 = 4;
			}
			break;
		
		case 0x00000003:
			switch (iLocal_1695)
			{
				case 0xFFFFFFFF:
					if (TRAIN_GET_VELOCITY(bLocal_1693) > 8.0f)
					{
						Function_433();
						CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
						iLocal_1695++;
					}
					break;
				
				case 0x00000000:
					if (Function_430("$/cutscene/MEXICO_CROSSING_CS_SEQ/MEXICO_CROSSING_CS_SEQ", &iLocal_1337, &Local_1263, &iLocal_1349, 80316, 79646, 79303, 65904, 103732, 103725, 1, 2, 1, 2, 2, 0, 1, 1))
					{
						iLocal_1695++;
						Function_371(&iLocal_1596);
						iLocal_1350 = 4;
					}
					break;
			}
			break;
		
		case 0x00000004:
			Function_196(iLocal_1349);
			Function_423(StackVal, Function_196(iLocal_1349), iLocal_1349, Global_46736[3], Function_199(iLocal_1349), 0);
			iLocal_1703 = 0;
			Function_371(&iLocal_1596);
			iLocal_1350 = 5;
			break;
		
		case 0x00000005:
			if (Function_422() && Function_420(&bLocal_1662, 1))
			{
				Function_230(1.0f);
				STREAMING_UNLOAD_BOUNDS();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_1350 = 6;
			}
			else if (SQUAD_GET_SIZE(&bLocal_1662) < 0)
			{
				Function_276();
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED() && !HUD_IS_FADING())
			{
				Function_419();
				Function_413();
				iLocal_1699 = 0;
				Function_371(&iLocal_1616);
				Function_371(&iLocal_1596);
				iLocal_1350 = 7;
			}
			break;
		
		case 0x00000007:
			if (!iLocal_1733 && Function_237(&iLocal_1596) < 2.0f)
			{
				Function_27("Zombie02_Stg02_obj11", 0x40f00000, 1, 2, 0, 0, 0, 0);
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				iLocal_1733 = 1;
			}
			Function_383();
			if (!iLocal_1730)
			{
				if (Function_237(&iLocal_1596) <= 4.0f)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					iLocal_1730 = 1;
				}
			}
			if (!iLocal_1713)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) < 5)
				{
					Function_382(&bLocal_1662, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_27("Zombie02_Stg02_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_1713 = 1;
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 2560) >= 0)
			{
				Function_184(&bLocal_1662);
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				Function_371(&iLocal_1596);
				iLocal_1350 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_381(0x40800000))
			{
				Function_380();
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1062 + 480)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_1062 + 480));
				}
				ADD_BLIP_FOR_OBJECT(&iLocal_1234 + 40, 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_1234 + 40), "Z02_Blip_Train_Brakes");
				iLocal_1654 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Z02_Disengage", &iLocal_1234 + 40, 0, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
				Function_371(&iLocal_1596);
				iLocal_1350 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_381(2.0f))
			{
				Function_27("Zombie02_Stg06_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_371(&iLocal_1596);
				iLocal_1350 = 11;
			}
			break;
		
		case 0x0000006A:
			Function_379();
			STREAMING_UNLOAD_BOUNDS();
			iLocal_1509[5] = 1;
			TASK_CLEAR(&Global_54076);
			iLocal_1349 = 101;
			iLocal_1350 = 0;
			break;
	}
	return;
}

void Function_379() //Position: 0x1707D / 94333
{
	Function_138(&Local_4 + 1192);
	return;
}

void Function_380() //Position: 0x1708B / 94347
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Z02_BoardTrain", "Z02_BoardTrain", true, 1, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_381(bool bParam0) //Position: 0x170CE / 94414
{
	return (((!HUD_IS_FADING() && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !HUD_IS_SHOWING_OBJECTIVE()) && Function_237(&iLocal_1596) < &bParam0);
}

void Function_382(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x170ED / 94445
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_383() //Position: 0x171FD / 94717
{
	var uVar0;
	var uVar1;
	
	Function_411();
	Function_407(80.0f);
	Function_395();
	if (!Function_239(&iLocal_1600))
	{
		Function_394(&iLocal_1600);
	}
	switch (iLocal_1702)
	{
		case 0x00000000:
			if (Function_393(&bLocal_1662, &Local_4 + 2824))
			{
				if (Function_392(&Local_4 + 1416[42], &Local_4 + 1504, 1))
				{
					uVar0 = &Local_4 + 1416[42];
					if (Function_391())
					{
						uVar1 = &Local_4 + 3648[10];
					}
					else
					{
						uVar1 = &Local_4 + 3648[11];
					}
					SET_ACTOR_ONE_SHOT_DEATH(&uVar0, true);
					TASK_CLEAR(&uVar0);
					Function_389(&uVar0, &uVar1, 0, 2, -1.0f, 1, 0, 0, 1);
				}
				Function_371(&iLocal_1600);
				iLocal_1702++;
			}
			break;
		
		case 0x00000001:
			if (Function_237(&iLocal_1600) < RAND_FLOAT_RANGE(2.0f, 5.0f))
			{
				if (Function_392(&Local_4 + 1416[02], &Local_4 + 1504, 1))
				{
					uVar0 = &Local_4 + 1416[02];
					if (Function_391())
					{
						uVar1 = &Local_4 + 3648[12];
					}
					else
					{
						uVar1 = &Local_4 + 3648[13];
					}
					TASK_CLEAR(&uVar0);
					Function_389(&uVar0, &uVar1, 0, 2, -1.0f, 1, 0, 0, 1);
					Function_388();
				}
				Function_371(&iLocal_1600);
				iLocal_1702++;
			}
			break;
		
		case 0x00000002:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) > 4 && Function_387(2.0f))
			{
				if (!SQUAD_IS_VALID(&Local_4 + 2560))
				{
					Function_386();
					Function_385(&Local_4 + 2560, 0, 0, 0);
					iLocal_1702++;
					Function_371(&iLocal_1600);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_237(&iLocal_1600) < 2.0f && Function_237(&iLocal_1600) > 4.0f)
			{
				if (IS_ACTOR_VALID(&Local_4 + 2488[02]))
				{
					Function_313(&Local_4 + 2488[02], 1, 0);
					Function_265(&Local_4 + 2488[02], 1, 1, 1, 1, 0, 1);
					Function_372(&iLocal_1600, 4.0f);
				}
			}
			else if (Function_237(&iLocal_1600) < 4,5f && Function_237(&iLocal_1600) > 6.0f)
			{
				if (IS_ACTOR_VALID(&Local_4 + 2488[12]))
				{
					Function_313(&Local_4 + 2488[12], 1, 0);
					Function_265(&Local_4 + 2488[12], 1, 1, 1, 1, 0, 1);
					TASK_MELEE_ATTACK(&Local_4 + 2488[12], &Global_54076, -1.0f);
					Function_372(&iLocal_1600, 7.0f);
				}
			}
			else if (Function_237(&iLocal_1600) < 7,5f && Function_237(&iLocal_1600) > 9.0f)
			{
				if (IS_ACTOR_VALID(&Local_4 + 2488[22]))
				{
					Function_313(&Local_4 + 2488[22], 1, 0);
					Function_265(&Local_4 + 2488[22], 1, 1, 1, 1, 0, 1);
					TASK_MELEE_ATTACK(&Local_4 + 2488[22], &Global_54076, -1.0f);
					Function_372(&iLocal_1600, 9.0f);
				}
			}
			else if (Function_237(&iLocal_1600) < 9,5f)
			{
				if (IS_ACTOR_VALID(&Local_4 + 2488[32]))
				{
					Function_313(&Local_4 + 2488[32], 1, 0);
					Function_265(&Local_4 + 2488[32], 1, 1, 1, 1, 0, 1);
					TASK_MELEE_ATTACK(&Local_4 + 2488[32], &Global_54076, -1.0f);
					Function_382(&Local_4 + 2560, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					iLocal_1702++;
				}
			}
			break;
		
		case 0x00000004:
			Function_197(&Local_4 + 3648[9]);
			Function_384(StackVal, &Local_4 + 1416[42], Function_197(&Local_4 + 3648[9]), &Local_4 + 4136, 1);
			Function_197(&Local_4 + 3648[8]);
			Function_384(StackVal, &Local_4 + 1416[02], Function_197(&Local_4 + 3648[8]), &Local_4 + 4128, 0);
			iLocal_1703++;
			iLocal_1702++;
			Function_371(&iLocal_1600);
			break;
		
		default:
			iLocal_1702++;
			break;
	}
	return;
}

void Function_384(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x17579 / 95609
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (&iParam0 != &Local_4 + 1416[02])
		{
			SAY_SINGLE_LINE_CONTEXT(&iParam0, 28, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
		}
		AI_IGNORE_ACTOR(&iParam0);
		SET_ACTOR_ONE_SHOT_DEATH(&iParam0, &iParam4);
		SQUAD_LEAVE(&iParam0);
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &uParam3, 4, 1, 0, 1, false);
		TASK_GO_TO_COORD_NONSTOP(0, &uParam1, 4, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(&iParam0);
		TASK_SEQUENCE_PERFORM(&iParam0, bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
		TASK_PRIORITY_SET(&iParam0, true);
	}
}

void Function_385(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x175FD / 95741
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_265(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1, &iParam2, &iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_386() //Position: 0x17638 / 95800
{
	*(&Local_4 + 2560) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "S06_ZWv02_Barricade"));
	*(&Local_4 + 2488[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nBZ_W2_T01", 1222, Vector(-3706,322f, 24,16634f, 4024,736f), Vector(0.0f, 245,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2488[02], &Local_4 + 2560);
	TASK_STAND_STILL(&Local_4 + 2488[02], -1.0f, 0, 0);
	Function_312(&Local_4 + 2488[02], 1, 0);
	*(&Local_4 + 2488[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nBZ_W2_B02", 1215, Vector(-3708,476f, 23,83561f, 4027,285f), Vector(0.0f, 267,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2488[12], &Local_4 + 2560);
	TASK_STAND_STILL(&Local_4 + 2488[12], -1.0f, 0, 0);
	Function_312(&Local_4 + 2488[12], 1, 0);
	*(&Local_4 + 2488[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nBZ_W2_B05", 1218, Vector(-3706,06f, 23,6364f, 4020,113f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2488[22], &Local_4 + 2560);
	TASK_STAND_STILL(&Local_4 + 2488[22], -1.0f, 0, 0);
	Function_312(&Local_4 + 2488[22], 1, 0);
	*(&Local_4 + 2488[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nBZ_W2_B06", 1219, Vector(-3708,298f, 24,09716f, 4023,791f), Vector(0.0f, 241,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2488[32], &Local_4 + 2560);
	TASK_STAND_STILL(&Local_4 + 2488[32], -1.0f, 0, 0);
	Function_312(&Local_4 + 2488[32], 1, 0);
	return;
}

bool Function_387(bool bParam0) //Position: 0x177F7 / 96247
{
	return ((!HUD_IS_FADING() && !IS_SCRIPTED_CONVERSATION_ONGOING()) && Function_237(&iLocal_1616) < &bParam0);
}

void Function_388() //Position: 0x17811 / 96273
{
	SQUAD_GOALS_CLEAR(&bLocal_1662);
	if (IS_ACTOR_ALIVE(&Local_4 + 1416[42]))
	{
		if (Function_392(&Local_4 + 1416[42], &Local_4 + 1504, 1))
		{
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, false, 1, 3);
			TASK_MELEE_ATTACK(0, &Local_4 + 1416[42], -1.0f);
		}
	}
	if (IS_ACTOR_ALIVE(&Local_4 + 1416[02]))
	{
		if (Function_392(&Local_4 + 1416[02], &Local_4 + 1504, 1))
		{
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, true, 0, 3);
			TASK_GO_NEAR_ACTOR(0, &Local_4 + 1416[02], 10.0f, 2);
		}
	}
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 2, 0, 2);
	TASK_GO_NEAR_ACTOR(0, &Global_54076, 10.0f, 1);
	return;
}

void Function_389(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8) //Position: 0x178B8 / 96440
{
	vector3 vVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return;
	}
	if (GET_OBJECT_TYPE(&uParam1) != 8)
	{
		return;
	}
	GET_OBJECT_POSITION(&uParam1, &vVar0);
	(&vVar0 + 12)->f_4 = GET_OBJECT_HEADING(&uParam1);
	Function_390(StackVal, StackVal, &uParam0, vVar0, &iParam2, &iParam3, &fParam4, &iParam5, &iParam6, &iParam7, &iParam8);
}

void Function_390(bool bParam0, struct<2> Param1, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7, bool bParam8, Vector3 vParam9, bool bParam10) //Position: 0x1791C / 96540
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	uVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, &Param1, 2,5f, 90.0f, 7);
	bVar1 = TASK_SEQUENCE_OPEN();
	if (IS_COVER_LOCATION_VALID(&uVar0))
	{
		if (&iParam5 != 2)
		{
			Function_336(&bParam0);
			if (VDIST(Function_336(&bParam0), Param1) < 5.0f)
			{
				if (&bParam10)
				{
					TASK_GO_NEAR_COORD(false, &Param1, 2.0f, &iParam5);
				}
				else
				{
					TASK_GO_TO_COORD_NONSTOP(0, &Param1, &iParam5, 3212836864);
				}
			}
		}
		if (&bParam7)
		{
			if (&bParam8)
			{
				TASK_SHOOT_FROM_COVER(false, &Global_54076, &uVar0, &uParam6, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(false, &uVar0, &uParam6, 1086324736);
			}
		}
		else
		{
			TASK_HIDE_AT_COVER(0, &uVar0, &uParam6, 6.0f, &vParam9);
		}
	}
	else if (&bParam7)
	{
		TASK_GO_NEAR_COORD(false, &Param1, 5.0f, &iParam5);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Param1, &uParam6);
	}
	else
	{
		TASK_GO_TO_COORD(false, &Param1, &iParam5);
		UNK_0x44986367(StackVal, &Var2);
		Param1 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Param1, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal);
		TASK_FACE_COORD(0, &Param1, 0);
		TASK_CROUCH(false, &uParam6);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&bParam0);
	TASK_PRIORITY_SET(&bParam0, &uParam4);
	TASK_SEQUENCE_PERFORM(&bParam0, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
}

bool Function_391() //Position: 0x17A4E / 96846
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_392(int iParam0, int iParam1, bool bParam2) //Position: 0x17A61 / 96865
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

bool Function_393(var uParam0, int iParam1) //Position: 0x17AA9 / 96937
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_394(int iParam0) //Position: 0x17B37 / 97079
{
	if (!Function_239(&iParam0))
	{
		Function_372(&iParam0, 0.0f);
	}
	return;
}

void Function_395() //Position: 0x17B4E / 97102
{
	switch (iLocal_1703)
	{
		case 0x00000000:
			if (Function_406(&bLocal_1662, &Global_54076) || IS_ACTOR_SHOOTING(&Global_54076))
			{
				Function_371(&iLocal_1612);
			}
			if (Function_387(0x41000000))
			{
				if (Function_405(&Global_54076, &Local_4 + 1416[02]) <= 35.0f)
				{
					Function_404();
					Function_371(&iLocal_1616);
				}
				else if (GET_LAST_ATTACKER(&Global_54076) == &Local_4 + 1416[02])
				{
					Function_403();
					CLEAR_LAST_ATTACK(&Global_54076);
					CLEAR_LAST_HIT(&Global_54076);
					Function_371(&iLocal_1616);
				}
				else if (Function_402(&bLocal_1662, &Global_54076) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) > 4)
				{
					Function_401();
					Function_371(&iLocal_1612);
					Function_371(&iLocal_1616);
				}
				else if (Function_237(&iLocal_1612) < 16.0f)
				{
					Function_400();
					Function_371(&iLocal_1612);
					Function_371(&iLocal_1616);
				}
				else if (Function_237(&iLocal_1616) < (8.0f + 6.0f))
				{
					if (Function_391())
					{
						Function_399();
					}
					else
					{
						Function_398();
					}
					Function_371(&iLocal_1616);
				}
			}
			break;
		
		case 0x00000001:
			if (Function_387(2.0f))
			{
				Function_397();
				Function_371(&iLocal_1596);
				Function_371(&iLocal_1616);
				iLocal_1703++;
			}
			break;
		
		case 0x00000002:
			if (Function_387(2.0f))
			{
				Function_396();
				Function_371(&iLocal_1616);
				iLocal_1703++;
			}
			break;
		
		case 0x00000003:
			if (Function_387(4.0f))
			{
				SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_RED_MIST_DESCENDS", true, false, 2, 0, true, false);
				Function_371(&iLocal_1616);
				iLocal_1703++;
			}
			break;
	}
	return;
}

void Function_396() //Position: 0x17CDD / 97501
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Z02_CaptFlees", "Z02_CaptFlees", true, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_397() //Position: 0x17D1E / 97566
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_DecidesFlee", "Z02_DecidesFlee", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_398() //Position: 0x17D63 / 97635
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_TauntsZomby", "Z02_TauntsZomby", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_399() //Position: 0x17DA8 / 97704
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_ShoutsEnco", "Z02_ShoutsEnco", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_400() //Position: 0x17DEB / 97771
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_JonNoHelp", "Z02_JonNoHelp", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_401() //Position: 0x17E2C / 97836
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_CleanUpStrags", "Z02_CleanUpStrags", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_402(bool bParam0, int iParam1) //Position: 0x17E75 / 97909
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(&uVar3) == &iParam1)
				{
					if (!IS_ACTOR_ALIVE(&uVar3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_403() //Position: 0x17EF1 / 98033
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_ShootsJonAcc", "Z02_ShootsJonAcc", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_404() //Position: 0x17F38 / 98104
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_JonRunsAway", "Z02_JonRunsAway", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

float Function_405(var uParam0, int iParam1) //Position: 0x17F7D / 98173
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

int Function_406(bool bParam0, int iParam1) //Position: 0x1807C / 98428
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(&uVar3) == &iParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_407(float fParam0) //Position: 0x180EE / 98542
{
	if (IS_ACTOR_VALID(&Local_4 + 1416[32]))
	{
		Function_197(&Local_4 + 3648[1]);
		if (StackVal && Function_408(!Function_410(&Local_4 + 1416[32], 0x3f800000, 0x42960000, 1, 1, 0), &Local_4 + 1416[32], Function_197(&Local_4 + 3648[1])) < fParam0)
		{
			DESTROY_ACTOR(&Local_4 + 1416[32]);
		}
	}
	if (IS_ACTOR_VALID(&Local_4 + 1416[22]))
	{
		Function_197(&Local_4 + 3648[1]);
		if (StackVal && Function_408(!Function_410(&Local_4 + 1416[22], 0x3f800000, 0x42960000, 1, 1, 0), &Local_4 + 1416[22], Function_197(&Local_4 + 3648[1])) < fParam0)
		{
			DESTROY_ACTOR(&Local_4 + 1416[22]);
		}
	}
	if (IS_ACTOR_VALID(&Local_4 + 1416[02]))
	{
		Function_197(&Local_4 + 3648[1]);
		if (StackVal && Function_408(!Function_410(&Local_4 + 1416[02], 0x3f800000, 0x42960000, 1, 1, 0), &Local_4 + 1416[02], Function_197(&Local_4 + 3648[1])) < fParam0)
		{
			DESTROY_ACTOR(&Local_4 + 1416[02]);
		}
	}
	if (IS_ACTOR_VALID(&Local_4 + 1416[42]))
	{
		Function_197(&Local_4 + 3648[1]);
		if (StackVal && Function_408(!Function_410(&Local_4 + 1416[42], 0x3f800000, 0x42960000, 1, 1, 0), &Local_4 + 1416[42], Function_197(&Local_4 + 3648[1])) < fParam0)
		{
			DESTROY_ACTOR(&Local_4 + 1416[42]);
		}
	}
	return;
}

float Function_408(bool bParam0, struct<2> Param1) //Position: 0x18244 / 98884
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_409(&bParam0);
		Var0 = Function_409(&bParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_409(bool bParam0) //Position: 0x182BB / 99003
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_410(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x18327 / 99111
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_411() //Position: 0x18347 / 99143
{
	float fVar0;
	bool bVar1;
	
	if (!IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_1654))
	{
		if (GET_WEAPON_IN_HAND(&Global_54076) < 4294967295 && GET_WEAPON_IN_HAND(&Global_54076) > 21)
		{
			fVar0 = _GET_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&Global_54076)), 1);
			bVar1 = (_GET_MAX_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&Global_54076))) * 0,1f);
		}
		if (Function_387(0x41000000))
		{
			if (Function_239(&iLocal_1608))
			{
				if (fVar0 > (bVar1 - fVar0))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1062 + 480)))
					{
						SET_BLIP_BLINK(ADD_BLIP_FOR_OBJECT(&iLocal_1062 + 480, 335, 0f, 2, 0), 1, 0, 5f);
						SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_1062 + 480), "Z02_Blip_Ammo");
						if (iLocal_1704 <= 2)
						{
							iLocal_1721 = 1;
						}
					}
				}
				else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1062 + 480)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_1062 + 480));
				}
			}
			else
			{
				Function_394(&iLocal_1608);
			}
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1062 + 480)))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_1062 + 480));
	}
	if ((Function_412(&Global_54076, &iLocal_1062 + 480, 1,25f) && GET_WEAPON_IN_HAND(&Global_54076) < 4294967295) && GET_WEAPON_IN_HAND(&Global_54076) > 21)
	{
		fVar0 = _GET_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&Global_54076)), 1);
		bVar1 = (_GET_MAX_AMMO_AMOUNT(&Global_54076, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&Global_54076))) * 0,1f);
		if (fVar0 <= 0.0f)
		{
			if (iLocal_1740)
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&Global_54076)), bVar1, 0, 1);
				Function_364("Zombie02_Help_Ammo", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_1721 = 0;
				iLocal_1722 = 1;
				iLocal_1740 = 0;
			}
			else if (fVar0 > (bVar1 - fVar0))
			{
				_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&Global_54076)), (bVar1 - fVar0), 0, 1);
				if (iLocal_1705 <= 2)
				{
					iLocal_1721 = 0;
					iLocal_1722 = 1;
				}
			}
		}
	}
	return;
}

bool Function_412(var uParam0, var uParam1, float fParam2) //Position: 0x18534 / 99636
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_409(&uParam0);
			Function_273(&uParam1);
			if (VDIST(Function_409(&uParam0), Function_273(&uParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_413() //Position: 0x18652 / 99922
{
	Function_418(&Local_4 + 1504, 1);
	Function_284(&Local_4 + 1504, 1);
	Function_417(&Local_4 + 1504, 0, 3212836864);
	Function_415(&Local_4 + 1504, 75.0f, 0x40400000, 0x40000000);
	Function_279(&Local_4 + 1504, 0,1f);
	Function_306(&Local_4 + 1504, &bLocal_1662, 4);
	Function_306(&bLocal_1662, &Local_4 + 1504, 4);
	Function_307(&Local_4 + 1504, 0);
	Function_414(&Local_4 + 1504);
	iLocal_1354 = 1;
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[32]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1416[22]);
	Function_197(&Local_4 + 3648[8]);
	Function_384(StackVal, &Local_4 + 1416[32], Function_197(&Local_4 + 3648[8]), &Local_4 + 4128, 1);
	Function_197(&Local_4 + 3648[9]);
	Function_384(StackVal, &Local_4 + 1416[22], Function_197(&Local_4 + 3648[9]), &Local_4 + 4136, 1);
	return;
}

void Function_414(int iParam0) //Position: 0x1872C / 100140
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&iParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_415(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x1877B / 100219
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_416(&uVar1, fParam1, &iParam2, &iParam3);
		}
		bVar0++;
	}
}

void Function_416(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x187C9 / 100297
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

void Function_417(var uParam0, bool bParam1, int iParam2) //Position: 0x1881A / 100378
{
	bool bVar0;
	var uVar1;
	var uVar2;
	bool bVar4;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			GET_POSITION(&uVar1, &uVar2);
			bVar4 = GET_HEADING(&uVar1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(&uVar1, &uVar2, bVar4, &iParam2);
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_418(bool bParam0, int iParam1) //Position: 0x1887D / 100477
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_419() //Position: 0x188C2 / 100546
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_FinalWave", "Z02_FinalWave", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_420(bool bParam0, int iParam1) //Position: 0x18903 / 100611
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (!Function_421(&uVar1, iParam1, 0x41700000))
				{
					return 0;
				}
			}
			return 0;
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_421(int iParam0, bool bParam1, float fParam2) //Position: 0x18969 / 100713
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&iParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&iParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&iParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&iParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

bool Function_422() //Position: 0x18A0B / 100875
{
	if ((IS_ACTOR_FULLY_FADED_EXT(GET_ACTOR_FROM_OBJECT(&(Local_1620[22])), true) && Function_420(&Local_4 + 1504, 1)) && STREAMING_IS_WORLD_LOADED())
	{
		return 1;
	}
	return 0;
}

void Function_423(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x18A34 / 100916
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (iParam2 != Global_53524.f_48 && !Function_342())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_429(0);
	Function_428();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_98())
	{
		Function_426(iParam2);
	}
	Function_425(uParam3, iVar0, iVar1);
	Function_424();
}

void Function_424() //Position: 0x18ADD / 101085
{
	if (Global_119941)
	{
		UNK_0x6287203C(Global_53524.f_184);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	return;
}

void Function_425(int iParam0, bool bParam1, bool bParam2) //Position: 0x18B1E / 101150
{
	Global_53524.f_28 = 1;
	Global_53524.f_32 = 0;
	if (&bParam1)
	{
		Global_53524.f_64++;
	}
	if (&bParam2)
	{
		Global_53524.f_68 = 0;
		if (Global_53524.f_184 >= 0)
		{
			Global_53524.f_184 = (Global_53524.f_184 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
		}
	}
	else
	{
		Global_53524.f_184++;
		Global_53524.f_68++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_53524.f_24 = Global_43788;
	}
	else
	{
		Global_53524.f_24 = iParam0;
	}
	if (Function_88(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_426(bool bParam0) //Position: 0x18C87 / 101511
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_427() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_29(0));
	PLAYSTAT_INT("HC_FAME", Function_29(3));
	PLAYSTAT_INT("HC_HONOR", Function_29(1));
	return;
}

struct<16> Function_427() //Position: 0x18E1F / 101919
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (IS_SCRIPT_VALID(&Global_6667[iVar028] + 160))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar028] + 16) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_428() //Position: 0x18E65 / 101989
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_429(bool bParam0) //Position: 0x18E89 / 102025
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_430(var uParam0, int iParam1, struct<41> Param2) //Position: 0x18EB8 / 102072
{
	if (!&bParam15)
	{
		Function_243(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (uParam3 != 99 && (Function_242(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &uParam11, &uParam12, &uParam13, &uParam14);
				Call_Loc(uParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_371(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_241())
					{
						if ((!HUD_IS_FADED() && !HUD_IS_FADING()) && !&bParam17)
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_240(1);
						if (&bParam17)
						{
							CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
						}
						else
						{
							CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
						}
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_371(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_240(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_237(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_237(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&uParam5);
					if (StackVal)
					{
						Function_235(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_240(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_371(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&uParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_230(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&uParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_233();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&uParam8);
				if (StackVal)
				{
					Function_232(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&uParam9);
				if (StackVal)
				{
					Call_Loc(&uParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && uParam3 == 99) && !Function_242(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

int Function_431() //Position: 0x1952D / 103725
{
	return 1;
}

int Function_432() //Position: 0x19534 / 103732
{
	Function_255(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_433() //Position: 0x19549 / 103753
{
	CLEAR_CHARACTER_BLOOD();
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_435(&Local_4 + 1504, 0);
	Function_434(&Local_4 + 1504);
	Function_278(&Local_4 + 1504);
	Function_434(&bLocal_1662);
	return;
}

void Function_434(bool bParam0) //Position: 0x19578 / 103800
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_435(var uParam0, bool bParam1) //Position: 0x195C5 / 103877
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			STOP_PED_SPEAKING(&uVar1, &bParam1);
			bVar0++;
		}
	}
	return;
}

void Function_436() //Position: 0x195FF / 103935
{
	iLocal_1695 = 0;
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (!IS_ACTOR_VALID(&bLocal_1658))
	{
		bLocal_1658 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	Function_373(&Global_54076, &Local_4 + 3648[1], 0, 1, 1);
	Function_373(&bLocal_1658, &Local_4 + 3464[1], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1658, -1.0f, 0, 0);
	return;
}

void Function_437() //Position: 0x1965A / 104026
{
	if (IS_OBJECTSET_VALID(&Local_4 + 4224))
	{
		Function_340(&Local_4 + 4224);
		DESTROY_OBJECTSET(&Local_4 + 4224);
	}
	return;
}

bool Function_438(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x1967E / 104062
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_441(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_442()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && uParam1 == 0)
		{
			if (uParam1 != 5)
			{
				uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			uParam1 = 0;
			return 0;
		}
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_77(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_439();
					CUTSCENE_MANAGER_RESUME_LOADING();
					uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if ((!Function_441(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_442()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_441(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_439() //Position: 0x198E6 / 104678
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_440(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_440(char* cParam0) //Position: 0x1993A / 104762
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_441(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x19A63 / 105059
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_409(&bParam0);
		if (VDIST(Function_409(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_442() //Position: 0x19AEF / 105199
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_443(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x19AFE / 105214
{
	if (Function_445(&iLocal_1604, 100.0f, 200.0f, &uParam0, &uParam1, &uParam2, &bLocal_1526, 1, &Local_4, &iLocal_1261, 330, 1, &uParam3))
	{
		if (!iLocal_1735)
		{
			if (iLocal_1713)
			{
				Function_444(&bParam4, 0);
				iLocal_1735 = 1;
			}
		}
	}
	else if (iLocal_1735)
	{
		Function_444(&bParam4, 1);
		iLocal_1735 = 0;
	}
}

void Function_444(var uParam0, bool bParam1) //Position: 0x19B60 / 105312
{
	if (SQUAD_IS_VALID(&uParam0))
	{
		bLocal_1709 = false;
		while (bLocal_1709 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uParam0))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bLocal_1709))))
			{
				SET_BLIP_VISIBLE(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bLocal_1709)), &bParam1);
			}
			bLocal_1709++;
		}
	}
	return;
}

bool Function_445(struct<2> Param0, float fParam2, int iParam3, var uParam4, char* cParam5, var uParam6, bool bParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x19BAE / 105390
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_412(&Global_54076, &iParam3, fParam2))
	{
		Function_191(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_412(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_451(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_27(&uParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_450(1);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_449(&uParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_449(&uParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &uParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&uParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &uParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_451(1))
	{
		Function_448(1);
		if (!Function_447())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_446();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_449(&uParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_449(&uParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_446() //Position: 0x19D57 / 105815
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	uVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&uVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&uVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

bool Function_447() //Position: 0x19D85 / 105861
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return DECOR_GET_INT(&Global_54076, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_448(bool bParam0) //Position: 0x19DCC / 105932
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_46(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_449(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x19E33 / 106035
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && bParam3)) && &iVar1 == &iParam4)
		{
			iVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&iVar2))
			{
				if ((GET_BLIP_ICON(&iVar2) == 322 && GET_BLIP_ICON(&iVar2) == 323) && GET_BLIP_ICON(&iVar2) == 324)
				{
					SET_BLIP_VISIBLE(&iVar2, bParam1);
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_450(bool bParam0) //Position: 0x19EEE / 106222
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_80(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_451(bool bParam0) //Position: 0x19F55 / 106325
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_452() //Position: 0x19F9F / 106399
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iLocal_1654))
	{
		if (IS_SCRIPT_USE_CONTEXT_PRESSED(&iLocal_1654))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1234 + 40)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_1234 + 40));
				Function_453();
				Function_371(&iLocal_1596);
				iLocal_1350 = 106;
			}
		}
	}
	return;
}

void Function_453() //Position: 0x19FE2 / 106466
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_454() //Position: 0x19FEE / 106478
{
	if (iLocal_1350 >= 6)
	{
		Function_443(&(Local_1620[22]), "Zombie02_Warn_Train", "Zombie02_Fail_Train", "Z02_Blip_Train", &bLocal_1662);
		Function_197(&Local_4 + 3648[0]);
		if (!Function_438(StackVal, "$/cutscene/MEXICO_CROSSING_CS_SEQ/MEXICO_CROSSING_CS_SEQ", &uLocal_1529, Function_197(&Local_4 + 3648[0]), 0, 150.0f, 250.0f, 2, 1, 2, 2, 0, 1))
		{
		}
	}
	Function_497();
	switch (iLocal_1350)
	{
		case 0x00000000:
			Function_374(0);
			if (!iLocal_1509[3])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_494();
				Function_493();
				Function_371(&iLocal_1596);
				iLocal_1350 = 1;
			}
			else
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (Function_492())
					{
						Function_197(&Local_4 + 3248[2]);
						if (Function_344(StackVal, Function_197(&Local_4 + 3248[2]), 175,438f))
						{
							Function_371(&iLocal_1596);
							iLocal_1350 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1263, iLocal_1349) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/mexico_crossing_3_cs/mexico_crossing_3_cs"))
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				Function_371(&iLocal_1596);
				iLocal_1350 = 3;
			}
			else
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				Function_299();
				Function_371(&iLocal_1596);
				iLocal_1350 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_231("$/cutscene/mexico_crossing_3_cs/mexico_crossing_3_cs", &iLocal_1337, &Local_1263, &iLocal_1349, 80316, 79646, 79303, 65904, 64755, 43407, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_422())
			{
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1638);
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1640);
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1642);
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1644);
				Function_196(iLocal_1349);
				Function_423(StackVal, Function_196(iLocal_1349), iLocal_1349, Global_46736[1], Function_199(iLocal_1349), 0);
				Function_301();
				STREAMING_UNLOAD_BOUNDS();
				Function_329();
				Function_230(1.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				REMOVE_OBJECT_ATTACHMENT(&uLocal_1646);
				SQUAD_GOALS_CLEAR(&bLocal_1662);
				SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, false, 0, 4294967295);
				TASK_FOLLOW_ACTOR(0, &Global_54076);
				iLocal_1703 = 0;
				iLocal_1350 = 6;
			}
			break;
		
		case 0x00000006:
			Function_485();
			Function_411();
			Function_475();
			Function_473(&bLocal_1662);
			Function_471();
			if (iLocal_1703 > 3)
			{
				Function_467();
				ADD_COMPANION_PERMANENT();
				Function_371(&iLocal_1596);
				iLocal_1350 = 7;
			}
			break;
		
		case 0x00000007:
			Function_411();
			Function_475();
			Function_473(&bLocal_1662);
			Function_471();
			Function_457();
			if (IS_VOLUME_VALID(&Local_4 + 2872))
			{
				if (IS_OBJECT_IN_VOLUME(&(Local_1620[02]), &Local_4 + 2872))
				{
					DESTROY_VOLUME(&Local_4 + 2872);
					DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1636, 0);
					Function_456();
					iLocal_1710 = 5;
					Function_371(&iLocal_1596);
					iLocal_1350 = 8;
				}
			}
			break;
		
		case 0x00000008:
			Function_455();
			if (Function_381(5.0f))
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 106;
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&(Local_1620[22]))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&(Local_1620[22])));
			}
			iLocal_1509[4] = 1;
			iLocal_1713 = 0;
			iLocal_1735 = 0;
			iLocal_1730 = 0;
			Function_142();
			iLocal_1349 = 5;
			iLocal_1350 = 0;
			break;
	}
	return;
}

void Function_455() //Position: 0x1A3BB / 107451
{
	var uVar0;
	
	uVar0 = Vector(-3698,474f, 24,06728f, 4028,62f);
	switch (iLocal_1710)
	{
		case 0x00000005:
			TASK_CLEAR(&Local_4 + 1416[02]);
			TASK_FACE_COORD(&Local_4 + 1416[02], &uVar0, 1);
			DELETE_WEAPON_FROM_ACTOR(&Local_4 + 1416[02], 23);
			Function_371(&iLocal_1600);
			iLocal_1710++;
			break;
		
		case 0x00000006:
			if (Function_237(&iLocal_1600) <= RAND_FLOAT_RANGE(2.0f, 3.0f))
			{
				TASK_CLEAR(&Local_4 + 1416[32]);
				TASK_FACE_COORD(&Local_4 + 1416[32], &uVar0, 1);
				TASK_CLEAR(&Local_4 + 1416[42]);
				TASK_FACE_COORD(&Local_4 + 1416[42], &uVar0, 1);
				Function_371(&iLocal_1600);
				iLocal_1710++;
			}
			break;
		
		case 0x00000007:
			if (Function_237(&iLocal_1600) <= RAND_FLOAT_RANGE(1.0f, 2.0f))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW(&Local_4 + 1416[22], &Local_4 + 1416[02], 6.0f, 0);
				TASK_CLEAR(&Local_4 + 1416[22]);
				TASK_GO_NEAR_ACTOR(&Local_4 + 1416[22], &Local_4 + 1416[02], 9.0f, 2);
				Function_371(&iLocal_1600);
				iLocal_1710++;
			}
			break;
	}
	return;
}

void Function_456() //Position: 0x1A4DC / 107740
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_SeesRodBlok", "Z02_SeesRodBlok", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_457() //Position: 0x1A521 / 107809
{
	switch (iLocal_1710)
	{
		case 0x00000000:
			if (IS_VOLUME_VALID(&Local_4 + 2752))
			{
				if (IS_OBJECT_IN_VOLUME(&(Local_1620[02]), &Local_4 + 2752) || IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2752))
				{
					bLocal_1709 = false;
					if (!SQUAD_IS_VALID(&bLocal_1664))
					{
						bLocal_1664 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "climaxZ_Squad"));
					}
					Function_465(&bLocal_1664, &Local_4 + 3768, 0, 8, &iLocal_1530, &bLocal_1542, 1);
					Function_460(&bLocal_1664);
					GIVE_WEAPON_TO_ACTOR(&Local_4 + 1416[02], 23, false, 1, 1);
					ACTOR_PUT_WEAPON_IN_HAND(&Local_4 + 1416[02], 23, 1);
					Function_459(&bLocal_1662, 2);
					Function_371(&iLocal_1596);
					iLocal_1710++;
					DESTROY_VOLUME(&Local_4 + 2752);
				}
			}
			break;
		
		case 0x00000001:
			if (Function_237(&iLocal_1596) < 7,5f)
			{
				Function_465(&bLocal_1664, &Local_4 + 3776, 0, 8, &iLocal_1530, &bLocal_1542, 1);
				Function_460(&bLocal_1664);
				iLocal_1710++;
				Function_371(&iLocal_1596);
			}
			break;
		
		case 0x00000002:
			if (Function_237(&iLocal_1596) < 5.0f)
			{
				Function_465(&bLocal_1664, &Local_4 + 3784, 0, 6, &iLocal_1530, &bLocal_1542, 1);
				Function_460(&bLocal_1664);
				iLocal_1710++;
				Function_371(&iLocal_1596);
			}
			break;
		
		case 0x00000003:
			Function_458();
			break;
	}
	return;
}

void Function_458() //Position: 0x1A67E / 108158
{
	if (IS_VOLUME_VALID(&Local_4 + 2880))
	{
		if (IS_OBJECT_IN_VOLUME(&(Local_1620[02]), &Local_4 + 2880))
		{
			DESTROY_VOLUME(&Local_4 + 2880);
			AUDIO_MUSIC_SUSPEND(8000);
			Function_459(&bLocal_1662, 1);
		}
	}
	return;
}

void Function_459(bool bParam0, bool bParam1) //Position: 0x1A6BA / 108218
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_460(bool bParam0) //Position: 0x1A709 / 108297
{
	var uVar0;
	
	bLocal_1709 = false;
	while (bLocal_1709 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bParam0))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709)))
		{
			Function_336(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709));
			uVar0 = Function_336(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709));
			TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709));
			switch (RAND_INT_RANGE(true, 4))
			{
				case 0x00000001:
					TASK_SHOOT_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709), &Global_54076, &uVar0);
					break;
				
				case 0x00000002:
					TASK_SHOOT_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709), &Local_4 + 1416[02], &uVar0);
					break;
				
				case 0x00000003:
					TASK_SHOOT_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709), &Local_4 + 1416[32], &uVar0);
					break;
				
				case 0x00000004:
					TASK_SHOOT_FROM_POSITION(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709), &Local_4 + 1416[22], &uVar0);
					break;
			}
			SET_ACTOR_VISION_XRAY(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709), true);
			TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709), true);
			AI_SET_FIRE_DELAY(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709), 0.0f);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bLocal_1709), 0.0f, 0.0f);
		}
		bLocal_1709++;
	}
	Function_415(&bParam0, 200.0f, 0x40400000, 0x40000000);
	Function_306(&Local_4 + 1504, &bParam0, 4);
	Function_306(&bParam0, &Local_4 + 1504, 4);
	Function_464(&bParam0, &Local_4 + 1504, 1);
	Function_418(&bParam0, 1);
	Function_462(&Local_4 + 1504, &bParam0, 0);
	Function_462(&bParam0, &Local_4 + 1504, 0);
	Function_461(&Local_4 + 1504, 100.0f);
	return;
}

void Function_461(var uParam0, bool bParam1) //Position: 0x1A87A / 108666
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (iVar0 - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(&uVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&uVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(&uVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(&uVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_462(bool bParam0, bool bParam1, int iParam2) //Position: 0x1A8DB / 108763
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&bParam1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar2);
		if (IS_ACTOR_VALID(&uVar0))
		{
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(&bParam1) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar3);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_463(&uVar0, &uVar1, &iParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_463(var uParam0, bool bParam1, bool bParam2) //Position: 0x1A962 / 108898
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &bParam1);
			Function_409(&bParam1);
			uVar0 = Function_409(&bParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&uParam0, &bParam1, true);
			}
			else
			{
				MEMORY_REPORT_POSITION(&uParam0, &bParam1, &uVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

void Function_464(bool bParam0, var uParam1, bool bParam2) //Position: 0x1AA73 / 109171
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&uParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(&uVar2, &uVar3, bParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_465(bool bParam0, var uParam1, int iParam2, int iParam3, int[] iParam4, bool[] bParam5, int iParam6) //Position: 0x1AB06 / 109318
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam2 - 1))
	{
		uVar2 = Function_466(iParam4[RAND_INT_RANGE(false, (iParam4 - 1))], &uParam1, &iVar1);
		ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar2, false);
		Function_257(&uVar2, 0, 1);
		SQUAD_JOIN(&uVar2, &bParam0);
		if (&iParam6 != 4294967295)
		{
			if (Function_391())
			{
				Function_312(&uVar2, 0, 1);
			}
			else
			{
				Function_312(&uVar2, 1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iParam3 - 1))
	{
		uVar2 = Function_466(bParam5[RAND_INT_RANGE(false, (bParam5 - 1))], &uParam1, &iVar1);
		ACTOR_SET_GRABBED_BY_CUTSCENE(&uVar2, false);
		Function_257(&uVar2, 0, 1);
		SQUAD_JOIN(&uVar2, &bParam0);
		if (&iParam6 != 4294967295)
		{
			if (Function_391())
			{
				Function_312(&uVar2, 0, 1);
			}
			else
			{
				Function_312(&uVar2, 1, 1);
			}
		}
		iVar0++;
	}
}

int Function_466(bool bParam0, var uParam1, int iParam2) //Position: 0x1ABE2 / 109538
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	var uVar4;
	bool bVar5;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = iParam2;
	while (iVar1 <= GET_OBJECTSET_SIZE(&uParam1))
	{
		uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
		iParam2++;
		if (iParam2 == GET_OBJECTSET_SIZE(&uParam1))
		{
			iParam2 = 0;
		}
		GET_OBJECT_POSITION(&uVar4, &Var2);
		bVar5 = GET_OBJECT_HEADING(&uVar4);
		return CREATE_ACTOR_IN_LAYOUT(StackVal, &Local_4, Function_58(), bParam0, Var2, Vector(0.0f, bVar5, 0.0f));
		bVar0++;
		iVar1++;
		if (bVar0 == GET_OBJECTSET_SIZE(&uParam1))
		{
			bVar0 = false;
		}
	}
	return "";
}

void Function_467() //Position: 0x1AC6B / 109675
{
	int iVar0;
	
	if (!iLocal_1732)
	{
		Function_470(&Local_4 + 1504);
		Function_284(&Local_4 + 1504, 1);
		Function_418(&Local_4 + 1504, 1);
		Function_306(&Local_4 + 1504, &bLocal_1662, 4);
		Function_306(&bLocal_1662, &Local_4 + 1504, 4);
		Function_285(&Local_4 + 1504, &Global_54076, 0);
		Function_461(&Local_4 + 1504, 200.0f);
		Function_469(&Local_4 + 1504, 359.0f);
		Function_286(&Local_4 + 1504, 0);
		Function_464(&Local_4 + 1504, &bLocal_1662, 1);
		Function_462(&Local_4 + 1504, &bLocal_1662, 0);
		Function_278(&Local_4 + 1504);
		Function_300(&Local_4 + 1504, 0, 3212836864, 0, 1);
		Function_459(&Local_4 + 1504, 5);
		iLocal_1732 = 1;
		Function_468(&Local_4 + 1504, 0);
		Function_197(&iLocal_1062 + 232[5]);
		iVar0 = Function_197(&iLocal_1062 + 232[5]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[22]);
		SET_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[22], &iLocal_1062 + 96, 2, false);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[42]);
		SET_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[42], &iLocal_1184 + 40, 2, false);
		AI_SET_NAV_PATHFINDING_ENABLED(&Local_4 + 1416[42], 0);
		TASK_PRIORITY_SET(&Local_4 + 1416[42], true);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[32]);
		SET_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[32], &iLocal_1184 + 56, 2, false);
		TASK_PRIORITY_SET(&Local_4 + 1416[32], true);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[02]);
		SET_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[02], &iLocal_1184 + 64, 2, false);
		TASK_PRIORITY_SET(&Local_4 + 1416[02], true);
		Function_435(&Local_4 + 1504, 1);
	}
	return;
}

void Function_468(var uParam0, bool bParam1) //Position: 0x1AE00 / 110080
{
	bool bVar0;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		SET_MOVER_FROZEN(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), bParam1);
		bVar0++;
	}
	return;
}

void Function_469(var uParam0, bool bParam1) //Position: 0x1AE3A / 110138
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_VISION_FIELD_OF_VIEW(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_470(var uParam0) //Position: 0x1AE7F / 110207
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_471() //Position: 0x1AEB7 / 110263
{
	if (!Function_472(&Global_54076))
	{
		if (Function_412(&Global_54076, &(Local_1620[02]), 80.0f))
		{
			if (Function_237(&iLocal_1604) <= 12.0f)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&(Local_1620[22]))))
				{
					ADD_BLIP_FOR_OBJECT(&(Local_1620[22]), 330, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&(Local_1620[22])), "Z02_Blip_Train");
					iLocal_1724 = 1;
				}
				Function_371(&iLocal_1604);
			}
		}
		else
		{
			Function_191("Zombie02_Fail_Train");
			bLocal_1526 = true;
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&(Local_1620[22]))))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT(&(Local_1620[22])));
		iLocal_1724 = 0;
	}
	return;
}

bool Function_472(int iParam0) //Position: 0x1AF7B / 110459
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (((IS_ACTOR_IN_VOLUME(&iParam0, &iLocal_1062 + 96) || IS_ACTOR_IN_VOLUME(&iParam0, &iLocal_1184 + 32)) || IS_ACTOR_IN_VOLUME(&iParam0, &iLocal_1234 + 32)) || IS_ACTOR_ON_TRAIN(&iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_473(bool bParam0) //Position: 0x1AFBE / 110526
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &uVar1, 90.0f))
				{
					Function_474(&uVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_474(var uParam0) //Position: 0x1B011 / 110609
{
	SQUAD_LEAVE(&uParam0);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&uParam0, false);
	Function_257(&uParam0, 0, 1);
	MEMORY_CLEAR_ALL(&uParam0);
	Function_144(&uParam0);
	DESTROY_ACTOR(&uParam0);
	return;
}

void Function_475() //Position: 0x1B03E / 110654
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	struct<2> Var7;
	int iVar9;
	bool bVar10;
	
	bVar0 = false;
	iVar1 = 0;
	bVar3 = true;
	if (IS_VOLUME_VALID(&Local_4 + 2896))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2896))
		{
			iLocal_1703++;
			DESTROY_VOLUME(&Local_4 + 2896);
			Function_484(&iVar9, 0, 1);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (Local_4.f_2680 - 1))
			{
				if (IS_VOLUME_VALID(&Local_4 + 2680[bVar0]))
				{
					if (IS_OBJECT_IN_VOLUME(&(Local_1620[22]), &Local_4 + 2680[bVar0]))
					{
						uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Local_4 + 3632);
						if (IS_OBJECT_VALID(&uVar4))
						{
							bVar2 = DECOR_GET_INT(&uVar4, "iNumZombies");
							bVar3 = DECOR_GET_BOOL(&uVar4, "bFollowRight");
							DESTROY_VOLUME(&Local_4 + 2680[bVar0]);
							iVar1 = 0;
							while (iVar1 < (bVar2 - 1))
							{
								Var7 = RAND_FLOAT_RANGE(-2.0f, 2.0f);
								Var7.f_8 = RAND_FLOAT_RANGE(-2.0f, 2.0f);
								GET_OBJECT_RELATIVE_POSITION(&uVar4, Var7, &Var5);
								if ((RAND_INT_RANGE(false, 12) % 3) == 0)
								{
									bVar10 = bLocal_1542[RAND_INT_RANGE(false, (bLocal_1542 - 1))];
								}
								else
								{
									bVar10 = iLocal_1530[RAND_INT_RANGE(false, (iLocal_1530 - 1))];
								}
								iVar9 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Local_4, Function_58(), bVar10, Var5, Vector(0.0f, 0.0f, 0.0f));
								ACTOR_SET_GRABBED_BY_CUTSCENE(&iVar9, false);
								Function_257(&iVar9, 0, 1);
								Function_481(&iVar9, &(Local_1620[22]));
								AI_ACTOR_FORCE_SPEED(&iVar9, 3);
								if (bVar3)
								{
									TASK_FOLLOW_OBJECT_AT_DISTANCE(&iVar9, Function_480(&iLocal_1062 + 336), 5.0f, 3);
								}
								else
								{
									TASK_FOLLOW_OBJECT_AT_DISTANCE(&iVar9, Function_480(&iLocal_1062 + 296), 5.0f, 3);
								}
								TASK_PRIORITY_SET(&iVar9, true);
								SQUAD_JOIN(&iVar9, &bLocal_1662);
								Function_479(&Local_4 + 1504, &iVar9, 1);
								Function_478(&Local_4 + 1504, &iVar9, 1);
								Function_476(&Local_4 + 1504, &iVar9, 0);
								ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iVar9, &iLocal_1184 + 72);
								ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iVar9, &iLocal_1062 + 120);
								iVar1++;
							}
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_476(var uParam0, int iParam1, bool bParam2) //Position: 0x1B230 / 111152
{
	Function_479(&uParam0, &iParam1, 1);
	Function_418(&uParam0, 1);
	Function_285(&uParam0, &iParam1, 4);
	Function_477(&uParam0, &iParam1);
	if (&bParam2)
	{
		Function_382(&uParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_477(bool bParam0, int iParam1) //Position: 0x1B279 / 111225
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_478(var uParam0, var uParam1, bool bParam2) //Position: 0x1B2D4 / 111316
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&uVar1, &uParam1);
			if (!&bParam2)
			{
				GET_POSITION(&uParam1, &uVar2);
				MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
			}
			else
			{
				MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, true);
			}
		}
		bVar0++;
	}
	return;
}

void Function_479(var uParam0, var uParam1, bool bParam2) //Position: 0x1B340 / 111424
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, true);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

var Function_480(var uParam0) //Position: 0x1B3B8 / 111544
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = "";
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		iVar1 = GET_OBJECTSET_SIZE(&uParam0);
		if (iVar1 >= 0)
		{
			bVar2 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % IntToFloat(iVar1)));
			iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uParam0);
		}
	}
	PRINTSTRING("Finished getting random object");
	PRINTNL();
	return &iVar0;
}

void Function_481(var uParam0, int iParam1) //Position: 0x1B424 / 111652
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam1, &Var0);
	Function_482(StackVal, &uParam0, Var0);
	return;
}

void Function_482(var uParam0, struct<2> Param1) //Position: 0x1B43D / 111677
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_483(&uParam0, &uParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_483(GET_MOUNT(&uParam0), &uParam0, Param1), 1);
	}
	return;
}

var Function_483(var uParam0, struct<2> Param1) //Position: 0x1B478 / 111736
{
	struct<2> Var0;
	
	Function_336(&uParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_336(&uParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

void Function_484(var uParam0, bool bParam1, bool bParam2) //Position: 0x1B4F9 / 111865
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_410(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_485() //Position: 0x1B582 / 112002
{
	if (iLocal_1724)
	{
		if (Function_381(2.0f))
		{
			if (iLocal_1707 <= 3)
			{
				Function_491();
				iLocal_1707++;
				Function_371(&iLocal_1596);
			}
			Function_27("Zombie02_Stg04_obj05", 0x40f00000, 1, 2, 0, 0, 0, 0);
		}
	}
	switch (iLocal_1703)
	{
		case 0x00000000:
			if (Function_381(0x40800000))
			{
				Function_490();
				iLocal_1703++;
				Function_371(&iLocal_1596);
			}
			break;
		
		case 0x00000001:
			if (Function_381(0x40800000))
			{
				if ((Function_489() % 2) <= 1)
				{
					Function_488();
				}
				else
				{
					Function_487();
				}
				iLocal_1703++;
				Function_371(&iLocal_1596);
			}
			break;
		
		case 0x00000002:
			if (Function_381(2.0f))
			{
				Function_486();
				AUDIO_MUSIC_FORCE_TRACK("ZOMBIE_CUSTOM_TRAIN_SONG", "IDLE", 0.0f, 4294967295, 4294967295, 0.0f, 0);
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_ZOMBIE_CUSTOM_TRAIN_SONG", &uLocal_1636);
				Function_371(&iLocal_1596);
				Function_371(&iLocal_1612);
				iLocal_1703++;
			}
			break;
	}
	return;
}

void Function_486() //Position: 0x1B6B3 / 112307
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_SpotsMoreZombies", "Z02_SpotsMoreZombies", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_487() //Position: 0x1B702 / 112386
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_SetsOffBant_v2_AA", "Z02_SetsOffBant_v2_AA", false, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_SetsOffBant_v2_AB", "Z02_SetsOffBant_v2_AB", true, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Z02_SetsOffBant_v2_AC", "Z02_SetsOffBant_v2_AC", false, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_SetsOffBant_v2_AD", "Z02_SetsOffBant_v2_AD", true, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Z02_SetsOffBant_v2_AE", "Z02_SetsOffBant_v2_AE", false, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_SetsOffBant_v2_AF1", "Z02_SetsOffBant_v2_AF1", true, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_SetsOffBant_v2_AF2", "Z02_SetsOffBant_v2_AF2", true, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_488() //Position: 0x1B8AD / 112813
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Z02_SetsOffBant_v1_AA", "Z02_SetsOffBant_v1_AA", true, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Z02_SetsOffBant_v1_AB", "Z02_SetsOffBant_v1_AB", false, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_SetsOffBant_v1_AC", "Z02_SetsOffBant_v1_AC", true, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Z02_SetsOffBant_v1_AD1", "Z02_SetsOffBant_v1_AD1", false, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Z02_SetsOffBant_v1_AD2", "Z02_SetsOffBant_v1_AD2", false, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_SetsOffBant_v1_AE", "Z02_SetsOffBant_v1_AE", true, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_489() //Position: 0x1BA1F / 113183
{
	return Global_53524.f_64;
}

void Function_490() //Position: 0x1BA2A / 113194
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_TrainSetsOff", "Z02_TrainSetsOff", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_491() //Position: 0x1BA71 / 113265
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_JonJumpsOffTrain", "Z02_JonJumpsOffTrain", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_492() //Position: 0x1BAC0 / 113344
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_1530 - 1))
	{
		Function_330(&iLocal_1554, iLocal_1530[iVar0], 2, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (bLocal_1542 - 1))
	{
		Function_330(&iLocal_1554, bLocal_1542[iVar0], 2, 0);
		iVar0++;
	}
	if (Function_248(&iLocal_1554))
	{
		return 1;
	}
	return 0;
}

void Function_493() //Position: 0x1BB21 / 113441
{
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (!IS_ACTOR_VALID(&bLocal_1658))
	{
		bLocal_1658 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	Function_373(&Global_54076, &Local_4 + 3248[19], 1, 1, 1);
	Function_373(&bLocal_1658, &Local_4 + 3464[1], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1658, -1.0f, 0, 0);
	return;
}

void Function_494() //Position: 0x1BB79 / 113529
{
	Function_495(&iLocal_1530, 1204, 1213);
	Function_495(&bLocal_1542, 1222, 1227);
	return;
}

void Function_495(bool[] bParam0, bool bParam1, bool bParam2) //Position: 0x1BB97 / 113559
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (bParam0 - 1))
	{
		bVar1 = RAND_INT_RANGE(bParam1, bParam2);
		while (Function_496(bVar1, &bParam0) && bVar1 > bParam2)
		{
			bVar1++;
		}
		bParam0[iVar0] = bVar1;
		iVar0++;
	}
	return;
}

int Function_496(int iParam0, int[] iParam1) //Position: 0x1BBE3 / 113635
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (iParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_497() //Position: 0x1BC17 / 113687
{
	if (IS_VOLUME_VALID(&Local_4 + 2832))
	{
		if (IS_OBJECT_IN_VOLUME(&(Local_1620[02]), &Local_4 + 2832))
		{
			DESTROY_VOLUME(&Local_4 + 2832);
			TRAIN_SET_JUNCTION_STATE(bLocal_1693, 11, 1);
		}
	}
	if (IS_VOLUME_VALID(&Local_4 + 2888))
	{
		if (IS_OBJECT_IN_VOLUME(&(Local_1620[02]), &Local_4 + 2888))
		{
			DESTROY_VOLUME(&Local_4 + 2888);
			Function_197(&Local_4 + 3648[0]);
			uLocal_1674 = Function_197(&Local_4 + 3648[0]);
			TRAIN_SET_TARGET_POS(bLocal_1693, &uLocal_1674);
			TRAIN_SET_TARGET_SPEED(bLocal_1693, 0.0f);
		}
	}
	return;
}

void Function_498() //Position: 0x1BC97 / 113815
{
	if (iLocal_1350 >= 6)
	{
		Function_443(&(Local_1620[22]), "Zombie02_Warn_Train", "Zombie02_Fail_Train", "Z02_Blip_Train", &bLocal_1662);
		if (!bLocal_1731)
		{
			bLocal_1731 = Function_492();
		}
		Function_411();
		Function_516();
		Function_197(&Local_4 + 3248[2]);
		if (!Function_438(StackVal, "$/cutscene/mexico_crossing_3_cs/mexico_crossing_3_cs", &uLocal_1529, Function_197(&Local_4 + 3248[2]), 0, 80.0f, 120.0f, 2, 1, 2, 2, 0, 1))
		{
		}
	}
	switch (iLocal_1350)
	{
		case 0x00000000:
			Function_374(0);
			Function_515();
			if (!iLocal_1509[2])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_373(&Global_54076, &Local_4 + 3248[19], 1, 1, 1);
				Function_371(&iLocal_1596);
				iLocal_1350 = 1;
			}
			else
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (Function_514())
					{
						Function_197(&Local_4 + 3248[2]);
						if (Function_344(StackVal, Function_197(&Local_4 + 3248[2]), 175,438f))
						{
							Function_304();
							Function_515();
							Function_371(&iLocal_1596);
							iLocal_1350 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1263, iLocal_1349) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/mexico_crossing_2_cs/mexico_crossing_2_cs"))
			{
				Function_515();
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				Function_371(&iLocal_1596);
				iLocal_1350 = 3;
			}
			else
			{
				AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
				Function_302();
				Function_371(&iLocal_1596);
				iLocal_1350 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_231("$/cutscene/mexico_crossing_2_cs/mexico_crossing_2_cs", &iLocal_1337, &Local_1263, &iLocal_1349, 80316, 79646, 79303, 65904, 64755, 43407, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_422())
			{
				Function_196(iLocal_1349);
				Function_423(StackVal, Function_196(iLocal_1349), iLocal_1349, Global_46736[1], Function_199(iLocal_1349), 0);
				STREAMING_UNLOAD_BOUNDS();
				AI_STOP_IGNORING_ACTORS();
				Function_494();
				iLocal_1703 = 0;
				Function_230(1.0f);
				iLocal_1350 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_381(0x40800000))
			{
				Function_27("Zombie02_Stg02_obj09", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1354 = 1;
				Function_394(&iLocal_1600);
				Function_371(&iLocal_1596);
				iLocal_1350 = 7;
			}
			break;
		
		case 0x00000007:
			Function_504();
			Function_499();
			if (iLocal_1699 > 10)
			{
				if (Function_237(&iLocal_1596) <= 1.0f)
				{
					Function_468(&Local_4 + 1504, 0);
					Function_371(&iLocal_1596);
					iLocal_1350 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_381(1.0f) && iLocal_1703 < 3)
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 106;
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			STREAMING_UNLOAD_SCENE();
			iLocal_1509[3] = 1;
			TASK_CLEAR(&Global_54076);
			iLocal_1735 = 0;
			iLocal_1349 = 4;
			iLocal_1350 = 0;
			break;
	}
	return;
}

void Function_499() //Position: 0x1C024 / 114724
{
	if (!iLocal_1717)
	{
		if (StackVal || Function_441((IS_ACTOR_SHOOTING(&Global_54076) || Function_502(&Global_54076, &bLocal_1662, 1, 0, 1, 16.0f)), &Global_54076, Vector(-3707,454f, 8,111f, 3489,138f), 16.0f))
		{
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			iLocal_1717 = 1;
			Function_500();
			Function_278(&bLocal_1662);
			Function_477(&bLocal_1662, &Global_54076);
			Function_278(&bLocal_1662);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 2, 0, 2);
			TASK_GO_NEAR_OBJECT(0, &Global_54076, 9.0f, 2, 0, 1);
		}
	}
	return;
}

void Function_500() //Position: 0x1C0BD / 114877
{
	int iVar0;
	
	Function_284(&Local_4 + 1504, 1);
	Function_418(&Local_4 + 1504, 1);
	Function_306(&Local_4 + 1504, &Local_4 + 2096, 4);
	Function_306(&Local_4 + 2096, &Local_4 + 1504, 4);
	Function_461(&Local_4 + 1504, 60.0f);
	Function_469(&Local_4 + 1504, 359.0f);
	Function_336(&Local_4 + 1416[02]);
	iVar0 = Function_336(&Local_4 + 1416[02]);
	SET_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[02], &iLocal_1184 + 40, 2, false);
	TASK_CLEAR(&Local_4 + 1416[02]);
	TASK_STAND_STILL(&Local_4 + 1416[02], -1.0f, 0, 0);
	Function_336(Function_501(&Local_4 + 2096, &Local_4 + 1416[02], 0, 0));
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &Local_4 + 1416[02], Function_483(&iVar0, &Local_4 + 1416[02], Function_336(Function_501(&Local_4 + 2096, &Local_4 + 1416[02], 0, 0))), -1.0f);
	SET_ACTOR_PROOF(&Local_4 + 1416[02], 8);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1416[02], true);
	TASK_PRIORITY_SET(&Local_4 + 1416[02], true);
	TASK_CLEAR(&Local_4 + 1416[32]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&Local_4 + 1416[32], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_1234 + 88), -1.0f, 1086324736);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1416[32], true);
	TASK_PRIORITY_SET(&Local_4 + 1416[32], true);
	TASK_CLEAR(&Local_4 + 1416[42]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&Local_4 + 1416[42], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_1184 + 192), -1.0f, 1086324736);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1416[42], true);
	TASK_PRIORITY_SET(&Local_4 + 1416[42], true);
	Function_336(&Local_4 + 1416[22]);
	iVar0 = Function_336(&Local_4 + 1416[22]);
	TASK_CLEAR(&Local_4 + 1416[22]);
	SET_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[22], &iLocal_1062 + 104, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&Local_4 + 1416[22], &iVar0, 90.0f, 3212836864);
	SET_ACTOR_INVULNERABILITY(&Local_4 + 1416[22], true);
	Function_336(&Local_4 + 1416[12]);
	iVar0 = Function_336(&Local_4 + 1416[12]);
	TASK_CLEAR(&Local_4 + 1416[12]);
	SET_ACTOR_STAY_WITHIN_VOLUME(&Local_4 + 1416[12], &iLocal_1062 + 112, 1, false);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&Local_4 + 1416[12], &iVar0, 160.0f, 3212836864);
	REMOVE_OBJECT_ATTACHMENT(&uLocal_1642);
	SET_MOVER_FROZEN(&Local_4 + 1416[02], true);
	Function_279(&Local_4 + 1504, 0,1f);
	return;
}

var Function_501(bool bParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C2EA / 115434
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4), iVar5))
			{
				uVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&uVar4))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_405(&uVar4, &iParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar1);
	}
	return "";
}

bool Function_502(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, float fParam5) //Position: 0x1C3B5 / 115637
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_503(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &fParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_503(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1C420 / 115744
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&iParam0 == &iParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(&iParam1) == &iParam0)
		{
			CLEAR_LAST_HIT(&iParam1);
			return 1;
		}
	}
	if (&bParam3)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			return 1;
		}
	}
	if (&bParam4)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_504() //Position: 0x1C526 / 116006
{
	Function_513(StackVal, Vector(-3729,209f, 8,584f, 3483,748f));
	if (!SQUAD_IS_VALID(&bLocal_1662))
	{
		bLocal_1662 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "stationZombiesSquad"));
		SQUAD_JOIN(&Local_4 + 1944[32], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 1944[42], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 1944[52], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 1944[62], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 1944[72], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 1944[82], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 1944[02], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 1944[12], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 1944[22], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 2104[12], &bLocal_1662);
		SQUAD_JOIN(&Local_4 + 2104[02], &bLocal_1662);
	}
	if (iLocal_1699 <= 2)
	{
		Function_511(&Local_4 + 1504, &Local_4 + 3464[0], 2.0f, 6.0f);
		Function_510();
	}
	switch (iLocal_1699)
	{
		case 0x00000000:
			if ((Function_237(&iLocal_1600) <= 70.0f && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) >= 2) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) >= 1)
			{
				SAY_SINGLE_LINE_CONTEXT(Function_501(&Local_4 + 1504, &Global_54076, 1, 0), 119, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
				Function_507();
				iLocal_1726 = 1;
				Function_306(&Local_4 + 1504, &bLocal_1662, 4);
				Function_306(&bLocal_1662, &Local_4 + 1504, 4);
				Function_285(&bLocal_1662, &Global_54076, 4);
				Function_371(&iLocal_1600);
				iLocal_1699 = 1;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_1713)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) < 5)
				{
					Function_382(&bLocal_1662, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_27("Zombie02_Stg02_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_RED_MIST_DESCENDS", true, false, 2, 0, false, false);
					iLocal_1713 = 1;
				}
			}
			if (!iLocal_1730)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) < 3)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
					iLocal_1730 = 1;
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) <= 1)
			{
				Function_505();
				iLocal_1703++;
				iLocal_1699++;
				Function_371(&iLocal_1600);
				Function_371(&iLocal_1596);
				Function_371(&iLocal_1616);
				iLocal_1699 = 10;
			}
			break;
	}
	return;
}

void Function_505() //Position: 0x1C7AA / 116650
{
	Function_468(&Local_4 + 1504, 0);
	Function_506(&Local_4 + 1504, 1);
	REMOVE_OBJECT_ATTACHMENT(&uLocal_1638);
	Function_278(&Local_4 + 1504);
	Function_300(&Local_4 + 1504, 1, -1.0f, 1, 1);
	return;
}

void Function_506(var uParam0, bool bParam1) //Position: 0x1C7E1 / 116705
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&uVar1, &bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_507() //Position: 0x1C827 / 116775
{
	if (!SQUAD_IS_VALID(&Local_4 + 2304))
	{
		Function_509();
		Function_310(&Local_4 + 2304, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	}
	SQUAD_JOIN(&Local_4 + 2152[32], &bLocal_1662);
	SQUAD_JOIN(&Local_4 + 2152[42], &bLocal_1662);
	SQUAD_JOIN(&Local_4 + 2152[52], &bLocal_1662);
	SQUAD_JOIN(&Local_4 + 2152[62], &bLocal_1662);
	SQUAD_JOIN(&Local_4 + 2152[72], &bLocal_1662);
	SQUAD_JOIN(&Local_4 + 2152[82], &bLocal_1662);
	SQUAD_JOIN(&Local_4 + 2152[02], &bLocal_1662);
	SQUAD_JOIN(&Local_4 + 2152[12], &bLocal_1662);
	SQUAD_JOIN(&Local_4 + 2152[22], &bLocal_1662);
	Function_278(&bLocal_1662);
	SQUAD_GOALS_CLEAR(&bLocal_1662);
	Function_279(&bLocal_1662, 0,6f);
	Function_418(&bLocal_1662, 1);
	Function_418(&bLocal_1662, 1);
	Function_306(&Local_4 + 1504, &bLocal_1662, 4);
	Function_306(&bLocal_1662, &Local_4 + 1504, 4);
	Function_305(&bLocal_1662, &Local_4 + 2816);
	if (IS_ACTOR_VALID(&Local_4 + 1416[12]))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, false, 2, 2);
		TASK_GO_NEAR_ACTOR(0, &Local_4 + 1416[12], 10.0f, 2);
	}
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 2, 2, 2);
	TASK_GO_NEAR_OBJECT(0, &Local_4 + 3504[3], 10.0f, 2, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, true, 2, 2);
	TASK_GO_NEAR_OBJECT(0, &Global_54076, 0.0f, 2, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 3, 2, 4294967295);
	TASK_GO_NEAR_OBJECT(0, &Local_4 + 3248[17], 10.0f, 2, 0, 1);
	Function_508();
	return;
}

void Function_508() //Position: 0x1C9BC / 117180
{
	var uVar0;
	
	Function_197(&Local_4 + 3248[23]);
	uVar0 = Function_197(&Local_4 + 3248[23]);
	if (IS_ACTOR_VALID(&Local_4 + 1416[12]))
	{
		if (IS_MOVER_FROZEN(&Local_4 + 1416[12]))
		{
			SET_MOVER_FROZEN(&Local_4 + 1416[12], false);
		}
		TASK_CLEAR(&Local_4 + 1416[12]);
		Function_336(Function_501(&bLocal_1662, &Local_4 + 1416[12], 0, 0));
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &Local_4 + 1416[12], Function_483(&uVar0, &Local_4 + 1416[12], Function_336(Function_501(&bLocal_1662, &Local_4 + 1416[12], 0, 0))), -1.0f);
		TASK_PRIORITY_SET(&Local_4 + 1416[12], false);
		SAY_SINGLE_LINE_CONTEXT(&Local_4 + 1416[12], 118, &Global_54076, 1, 1, 3, 4294967295, 4294967295, 0, 1);
	}
	return;
}

void Function_509() //Position: 0x1CA5F / 117343
{
	(&Local_4 + 2304) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "S04_Z_Station_Wv02"));
	*(&Local_4 + 2152[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_E01", 202, Vector(-3706,942f, 8,52854f, 3451,102f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[02], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[02], -1.0f, 0, 0);
	*(&Local_4 + 2152[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_E02", 87, Vector(-3710,862f, 8,031372f, 3455,702f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[12], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[12], -1.0f, 0, 0);
	*(&Local_4 + 2152[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_E03", 48, Vector(-3714,86f, 7,781372f, 3459,988f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[22], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[22], -1.0f, 0, 0);
	*(&Local_4 + 2152[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_M01", 311, Vector(-3715,893f, 7,781372f, 3468,04f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[32], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[32], -1.0f, 0, 0);
	*(&Local_4 + 2152[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_M02", 49, Vector(-3716,399f, 7,781364f, 3476,129f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[42], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[42], -1.0f, 0, 0);
	*(&Local_4 + 2152[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_M03", 50, Vector(-3715,116f, 7,783278f, 3484,485f), Vector(0.0f, 321,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[52], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[52], -1.0f, 0, 0);
	*(&Local_4 + 2152[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_H01", 74, Vector(-3713,091f, 8,044673f, 3490,644f), Vector(0.0f, 308,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[62], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[62], -1.0f, 0, 0);
	*(&Local_4 + 2152[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_H02", 142, Vector(-3708,783f, 8,312814f, 3495,267f), Vector(0.0f, 317,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[72], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[72], -1.0f, 0, 0);
	*(&Local_4 + 2152[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "nDnD_2_H03", 136, Vector(-3698,843f, 8,977999f, 3454,708f), Vector(0.0f, 172,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 2152[82], &Local_4 + 2304);
	TASK_STAND_STILL(&Local_4 + 2152[82], -1.0f, 0, 0);
	return;
}

void Function_510() //Position: 0x1CD93 / 118163
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&bLocal_1662))
	{
		if (!iLocal_1718)
		{
			if ((Function_472(&Global_54076) || !SQUAD_GOAL_IS_VALID(&uLocal_1666)) || !SQUAD_GOAL_IS_VALID(&uLocal_1668))
			{
				bVar0 = RAND_INT_RANGE(false, 3);
				bVar1 = RAND_INT_RANGE_DIFFERENT(bVar0, 0, 3);
				uLocal_1666 = SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_1648)), "UseCase1", true, 4);
				uLocal_1668 = SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1662, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uLocal_1648)), "UseCase1", true, 4);
				iLocal_1718 = 1;
			}
			else
			{
				iLocal_1718 = 0;
			}
		}
		else if (!SQUAD_GOAL_IS_VALID(&uLocal_1666) || !SQUAD_GOAL_IS_VALID(&uLocal_1668))
		{
			iLocal_1718 = 0;
		}
		if (!IS_ACTOR_VALID(&uLocal_1670))
		{
			if (SQUAD_GOAL_IS_VALID(&uLocal_1666))
			{
				uLocal_1670 = SQUAD_GET_SINGLE_ACTOR_CONTROLLED_BY_GOAL(&bLocal_1662, &uLocal_1666);
				AI_IGNORE_ACTOR(&uLocal_1670);
			}
		}
		else if (IS_ACTOR_IN_VOLUME(&uLocal_1670, &iLocal_1062 + 96) && GET_TASK_STATUS(&uLocal_1670, 45) == 1)
		{
			if (iLocal_1706 <= 3)
			{
				iLocal_1723 = 1;
			}
			TASK_CLEAR(&uLocal_1670);
			TASK_MELEE_ATTACK(&uLocal_1670, Function_501(&Local_4 + 1504, &uLocal_1670, 0, 0), -1.0f);
			Function_476(&Local_4 + 1504, &uLocal_1670, 0);
			AI_STOP_IGNORING_ACTOR(&uLocal_1670);
		}
		if (!IS_ACTOR_VALID(&iLocal_1672))
		{
			if (SQUAD_GOAL_IS_VALID(&uLocal_1668))
			{
				iLocal_1672 = SQUAD_GET_SINGLE_ACTOR_CONTROLLED_BY_GOAL(&bLocal_1662, &uLocal_1668);
				AI_IGNORE_ACTOR(&iLocal_1672);
			}
		}
		else if (IS_ACTOR_IN_VOLUME(&iLocal_1672, &iLocal_1062 + 96) && GET_TASK_STATUS(&iLocal_1672, 45) == 1)
		{
			if (iLocal_1706 <= 3)
			{
				iLocal_1723 = 1;
			}
			TASK_CLEAR(&iLocal_1672);
			TASK_MELEE_ATTACK(&iLocal_1672, Function_501(&Local_4 + 1504, &iLocal_1672, 0, 0), -1.0f);
			Function_476(&Local_4 + 1504, &iLocal_1672, 0);
			AI_STOP_IGNORING_ACTOR(&iLocal_1672);
		}
	}
	return;
}

void Function_511(var uParam0, var uParam1, float fParam2, bool bParam3) //Position: 0x1CF66 / 118630
{
	var uVar0;
	
	if (Function_412(&Global_54076, &uParam1, 170.0f))
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_1692) < 0.0f)
		{
			fLocal_1692 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(&fParam2, &bParam3));
			uVar0 = Function_512(&uParam0);
			switch (RAND_INT_RANGE(false, 11))
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
				case 0x00000003:
					SAY_SINGLE_LINE_CONTEXT(&uVar0, 60, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					break;
				
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					SAY_SINGLE_LINE_CONTEXT(&uVar0, 96, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					break;
				
				case 0x00000008:
				case 0x00000009:
				case 0x0000000A:
				case 0x0000000B:
					SAY_SINGLE_LINE_CONTEXT(&uVar0, 27, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					break;
				
				default:
					SAY_SINGLE_LINE_CONTEXT(&uVar0, 96, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					break;
				}
			}
	}
}

var Function_512(int iParam0) //Position: 0x1D050 / 118864
{
	if (SQUAD_GET_SIZE(&iParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam0, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(&iParam0) - 1)));
	}
	return "";
}

void Function_513(struct<2> Param0) //Position: 0x1D075 / 118901
{
	if (IS_ACTOR_VALID(&bLocal_1658))
	{
		if (!IS_ACTOR_MOUNTED(&bLocal_1658))
		{
			if (!Function_441(StackVal, &bLocal_1658, Param0, 10.0f))
			{
				Function_336(&Global_54076);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &bLocal_1658, &Param0, Function_483(2, &bLocal_1658, Function_336(&Global_54076)));
			}
		}
		else
		{
			TASK_CLEAR(&bLocal_1658);
		}
	}
	return;
}

bool Function_514() //Position: 0x1D0C6 / 118982
{
	Function_330(&Local_4 + 992, 202, 2, 0);
	Function_330(&Local_4 + 992, 87, 2, 0);
	Function_330(&Local_4 + 992, 22, 2, 0);
	Function_330(&Local_4 + 992, 311, 2, 0);
	Function_330(&Local_4 + 992, 49, 2, 0);
	Function_330(&Local_4 + 992, 50, 2, 0);
	Function_330(&Local_4 + 992, 74, 2, 0);
	Function_330(&Local_4 + 992, 142, 2, 0);
	Function_330(&Local_4 + 992, 136, 2, 0);
	Function_330(&Local_4 + 992, 1204, 2, 0);
	Function_330(&Local_4 + 992, 1219, 2, 0);
	Function_330(&Local_4 + 992, 48, 2, 0);
	if (Function_248(&Local_4 + 992))
	{
		return 1;
	}
	return 0;
}

int Function_515() //Position: 0x1D179 / 119161
{
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Fast_04", &Local_4 + 2104[02]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_03", &Local_4 + 1944[02]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_04", &Local_4 + 1944[12]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_05", &Local_4 + 1944[22]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Toxic_06", &Local_4 + 1944[32]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_01", &Local_4 + 1944[42]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_03", &Local_4 + 1944[52]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_05", &Local_4 + 1944[62]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_06", &Local_4 + 2104[12]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_07", &Local_4 + 1944[72]);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("ZOMBIE_Bruiser_08", &Local_4 + 1944[82]);
	return 1;
}

void Function_516() //Position: 0x1D2D6 / 119510
{
	switch (iLocal_1703)
	{
		case 0x00000000:
			if (Function_387(0x41000000) && Function_525(&Global_54076, &Local_4 + 1416[02], 40.0f))
			{
				Function_524();
				iLocal_1703++;
				Function_371(&iLocal_1616);
			}
			break;
		
		case 0x00000001:
			if (Function_387(5.0f))
			{
				Function_523();
				iLocal_1703++;
				Function_371(&iLocal_1616);
			}
			break;
		
		case 0x00000002:
			if (Function_406(&bLocal_1662, &Global_54076) || IS_ACTOR_SHOOTING(&Global_54076))
			{
				Function_371(&iLocal_1612);
			}
			if (Function_387(8.0f))
			{
				if (Function_405(&Global_54076, &Local_4 + 1416[02]) <= 35.0f)
				{
					Function_404();
					Function_371(&iLocal_1616);
				}
				else if (GET_LAST_ATTACKER(&Global_54076) == &Local_4 + 1416[02])
				{
					Function_403();
					CLEAR_LAST_ATTACK(&Global_54076);
					CLEAR_LAST_HIT(&Global_54076);
					Function_371(&iLocal_1616);
				}
				else if (GET_ACTOR_HEALTH(&Global_54076) > (GET_ACTOR_MAX_HEALTH(&Global_54076) * 0,7f) && !iLocal_1727)
				{
					Function_522();
					iLocal_1727 = 1;
					Function_371(&iLocal_1616);
				}
				else if (iLocal_1725)
				{
					Function_521();
					iLocal_1725 = 0;
					Function_371(&iLocal_1616);
				}
				else if (iLocal_1726)
				{
					Function_419();
					iLocal_1726 = 0;
					Function_371(&iLocal_1616);
				}
				else if (iLocal_1721)
				{
					Function_520();
					iLocal_1704++;
					iLocal_1721 = 0;
					Function_371(&iLocal_1616);
				}
				else if (iLocal_1722)
				{
					Function_519();
					iLocal_1705++;
					iLocal_1722 = 0;
					Function_371(&iLocal_1616);
				}
				else if (iLocal_1723)
				{
					Function_518();
					iLocal_1706++;
					iLocal_1723 = 0;
					Function_371(&iLocal_1616);
				}
				else if (Function_402(&bLocal_1662, &Global_54076) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1662) > 4)
				{
					Function_401();
					Function_371(&iLocal_1612);
					Function_371(&iLocal_1616);
				}
				else if (Function_237(&iLocal_1612) < 16.0f)
				{
					Function_400();
					Function_371(&iLocal_1612);
					Function_371(&iLocal_1616);
				}
				else if (Function_237(&iLocal_1616) < (8.0f + 6.0f))
				{
					if (Function_391())
					{
						Function_399();
					}
					else
					{
						Function_398();
					}
					Function_371(&iLocal_1616);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_387(2.0f))
			{
				Function_517();
				iLocal_1703++;
				Function_371(&iLocal_1612);
				Function_371(&iLocal_1616);
			}
			break;
	}
	return;
}

void Function_517() //Position: 0x1D50D / 120077
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_AllZombysDead", "Z02_AllZombysDead", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_518() //Position: 0x1D556 / 120150
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_ZombsBoardTrain", "Z02_ZombsBoardTrain", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_519() //Position: 0x1D5A3 / 120227
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_JonGetsAmmo", "Z02_JonGetsAmmo", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_520() //Position: 0x1D5E8 / 120296
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_AmmoInBak", "Z02_AmmoInBak", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_521() //Position: 0x1D629 / 120361
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_Spots2ndWave", "Z02_Spots2ndWave", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_522() //Position: 0x1D670 / 120432
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_CoverInBak", "Z02_CoverInBak", false, 2, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_523() //Position: 0x1D6B3 / 120499
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_HoldThemOff", "Z02_HoldThemOff", false, 3, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_524() //Position: 0x1D6F8 / 120568
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_JonArrives", "Z02_JonArrives", false, 3, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_525(var uParam0, var uParam1, bool bParam2) //Position: 0x1D73B / 120635
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_526() //Position: 0x1D850 / 120912
{
	if (iLocal_1350 > 8)
	{
		Function_547();
		Function_545();
		Function_197(&Local_4 + 3248[2]);
		if (!Function_438(StackVal, "$/cutscene/mexico_crossing_2_cs/mexico_crossing_2_cs", &uLocal_1529, Function_197(&Local_4 + 3248[2]), 0, 350.0f, 400.0f, 2, 1, 2, 2, 0, 1))
		{
		}
	}
	switch (iLocal_1350)
	{
		case 0x00000000:
			Function_374(0);
			Function_544();
			if (!iLocal_1509[1])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_371(&iLocal_1596);
				iLocal_1350 = 1;
			}
			else
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 2;
			}
			break;
		
		case 0x00000001:
			Unknown_Function();
			if (StackVal)
			{
				if (STREAMING_IS_WORLD_LOADED() && Function_543())
				{
					Function_197(&Local_4 + 3000[2]);
					if (Function_344(StackVal, Function_197(&Local_4 + 3000[2]), 175,438f))
					{
						AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
						Function_536();
						Function_371(&iLocal_1596);
						iLocal_1350 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_196(iLocal_1349);
			Function_423(StackVal, Function_196(iLocal_1349), iLocal_1349, Global_46736[1], Function_199(iLocal_1349), 0);
			Function_230(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			Function_514();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 4.0f, 1);
			if (iLocal_1728)
			{
				iLocal_1703 = 3;
			}
			else
			{
				iLocal_1703 = 0;
			}
			iLocal_1694 = 0;
			iLocal_1350 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_4 + 4104)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_4 + 4104));
				}
				if (IS_ACTOR_ALIVE(&Local_4 + 1512[02]))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Local_4 + 1512[02])))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&Local_4 + 1512[02]));
					}
				}
				ADD_BLIP_FOR_OBJECT(&iLocal_1062 + 96, 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_1062 + 96), "Z02_Blip_Train");
				Function_201();
				Function_394(&iLocal_1600);
				Function_371(&iLocal_1596);
				iLocal_1350 = 7;
			}
			break;
		
		case 0x00000007:
			Function_529();
			if (Function_381(0x40800000))
			{
				Function_27("Zombie02_Stg03_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_385(&Local_4 + 1568, 1, 1, 1);
				Function_371(&iLocal_1596);
				iLocal_1350 = 8;
			}
			break;
		
		case 0x00000008:
			Function_529();
			Function_528(&Local_4 + 2784, 200.0f);
			if (!iLocal_1730)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
					iLocal_1730 = 1;
				}
			}
			if (!iLocal_1746)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2944))
				{
					STREAMING_UNLOAD_SCENE();
					if (SQUAD_IS_VALID(&bLocal_1660))
					{
						Function_484(&bLocal_1660, 0, 0);
					}
					if (SQUAD_IS_VALID(&Local_4 + 1568))
					{
						Function_484(&Local_4 + 1568, 0, 0);
					}
					iLocal_1746 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2936))
			{
				Function_304();
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2784))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1062 + 96)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_1062 + 96));
				}
				Function_371(&iLocal_1596);
				iLocal_1350 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_527();
			STREAMING_UNLOAD_BOUNDS();
			iLocal_1509[2] = 1;
			iLocal_1735 = 0;
			iLocal_1349 = 3;
			iLocal_1350 = 0;
			break;
	}
	return;
}

void Function_527() //Position: 0x1DB9E / 121758
{
	Function_138(&Local_4 + 824);
	return;
}

void Function_528(bool bParam0, float fParam1) //Position: 0x1DBAC / 121772
{
	if (Function_412(&Global_54076, &bParam0, fParam1))
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_1692) < 0.0f)
		{
			fLocal_1692 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(0,5f, 2.0f));
			if (Function_391())
			{
				Function_197(&bParam0);
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_LO_POWER_MASTER", Function_197(&bParam0));
			}
			else
			{
				Function_197(&bParam0);
				PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_RIFLE_HI_POWER_MASTER", Function_197(&bParam0));
			}
		}
	}
	return;
}

void Function_529() //Position: 0x1DC3E / 121918
{
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1568) >= 0)
	{
		switch (iLocal_1703)
		{
			case 0x00000000:
				if (Function_387(2.0f))
				{
					Function_535();
					iLocal_1703++;
					Function_371(&iLocal_1616);
				}
				break;
			
			case 0x00000001:
				if (Function_387(2.0f))
				{
					if (IS_ACTOR_VALID(&Local_4 + 1512[02]))
					{
						if (Function_405(&Global_54076, &Local_4 + 1512[02]) >= 30.0f && Function_237(&iLocal_1616) < 15.0f)
						{
							Function_534();
							iLocal_1703++;
							Function_371(&iLocal_1616);
						}
						else if (Function_405(&Global_54076, &Local_4 + 1512[02]) < 30.0f)
						{
							iLocal_1703++;
						}
					}
					else
					{
						iLocal_1703++;
					}
				}
				break;
			
			case 0x00000002:
				if (Function_387(4.0f))
				{
					if (Function_533(&Global_54076, &Local_4 + 3056[6]) <= 35.0f)
					{
						Function_532();
						iLocal_1703++;
						Function_371(&iLocal_1616);
					}
				}
				break;
			
			case 0x00000003:
				if (iLocal_1728)
				{
					Function_531();
					iLocal_1728 = 0;
					iLocal_1703 = 5;
					Function_371(&iLocal_1616);
				}
				break;
			
			case 0x00000004:
				Function_530();
				iLocal_1703++;
				Function_371(&iLocal_1616);
				break;
			}
	}
	return;
}

void Function_530() //Position: 0x1DD73 / 122227
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_JonShootsMen", "Z02_JonShootsMen", false, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_531() //Position: 0x1DDBA / 122298
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_JonStealsUniform", "Z02_JonStealsUniform", false, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_532() //Position: 0x1DE09 / 122377
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Z02_WishYaLuk", "Z02_WishYaLuk", 2, 3, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

float Function_533(bool bParam0, float fParam1) //Position: 0x1DE4A / 122442
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&fParam1))
		{
			Function_409(&bParam0);
			Var0 = Function_409(&bParam0);
			Function_273(&fParam1);
			Var2 = Function_273(&fParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_534() //Position: 0x1DEEC / 122604
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_Loitering", "Z02_Loitering", false, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_535() //Position: 0x1DF2D / 122669
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Z02_Thanks", "Z02_Thanks", 2, 1, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_536() //Position: 0x1DF68 / 122728
{
	var uVar0;
	var uVar2;
	
	if (Function_542(Local_1263) == 0)
	{
		Function_197(&Local_4 + 3056[16]);
		uVar0 = Function_197(&Local_4 + 3056[16]);
		Function_541();
		uVar2 = LOCATE_GRINGO_OF_TYPE("lean_fence_h_talking", &uVar0, 4.0f, 0);
		SNAP_ACTOR_TO_GRINGO(&Local_4 + 1512[02], GET_OBJECT_FROM_GRINGO(&uVar2), "USECASE1", true, 0, 0);
		TASK_USE_GRINGO(&Local_4 + 1512[02], &uVar2, "USECASE1", true, 1);
		TASK_WANDER_IN_VOLUME(&Local_4 + 1512[12], &Local_4 + 2920, -1.0f);
		TASK_WANDER_IN_VOLUME(&Local_4 + 1512[22], &Local_4 + 2920, -1.0f);
		Function_373(&Local_4 + 1512[12], &Local_4 + 3056[7], 1, 1, 1);
		Function_373(&Local_4 + 1512[22], &Local_4 + 3056[8], 1, 1, 1);
		Function_286(&Local_4 + 1568, 0);
	}
	else if (Function_542(Local_1263) == 1)
	{
		Function_541();
		iLocal_1728 = 1;
		Function_470(&Local_4 + 1568);
		Function_385(&Local_4 + 1568, 1, 1, 1);
		Function_285(&Local_4 + 1568, &Global_54076, 4);
		Function_306(&Local_4 + 1568, &bLocal_1660, 4);
		SQUAD_SET_FACTION(&Local_4 + 1568, 19);
		Function_476(&Local_4 + 1568, &Global_54076, 0);
		Function_277(&Local_4 + 1568, &Local_4 + 2912, 4, 0);
		Function_278(&Local_4 + 1568);
		SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1568, true, 1, 4294967295);
		TASK_KILL_CHAR(false, &Global_54076);
		Function_373(&Local_4 + 1512[12], &Local_4 + 3056[7], 1, 1, 1);
		Function_373(&Local_4 + 1512[22], &Local_4 + 3056[8], 1, 1, 1);
		Function_286(&Local_4 + 1568, 0);
	}
	else if (Function_542(Local_1263) == 2)
	{
		if (!SQUAD_IS_VALID(&bLocal_1660))
		{
			bLocal_1660 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "campZombiesSquad"));
		}
		Function_538();
		Function_541();
		iLocal_1728 = 1;
		Function_470(&Local_4 + 1568);
		Function_385(&Local_4 + 1568, 1, 1, 1);
		Function_285(&Local_4 + 1568, &Global_54076, 4);
		Function_306(&Local_4 + 1568, &bLocal_1660, 4);
		SQUAD_SET_FACTION(&Local_4 + 1568, 19);
		Function_476(&Local_4 + 1568, &Global_54076, 0);
		Function_277(&Local_4 + 1568, &Local_4 + 2912, 4, 0);
		Function_278(&Local_4 + 1568);
		SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1568, true, 1, 4294967295);
		TASK_KILL_CHAR(false, &Global_54076);
		Function_373(&Local_4 + 1512[12], &Local_4 + 3056[7], 1, 1, 1);
		Function_373(&Local_4 + 1512[22], &Local_4 + 3056[8], 1, 1, 1);
		Function_286(&Local_4 + 1568, 0);
	}
	else if (Function_542(Local_1263) == 3)
	{
		iLocal_1728 = 1;
		if (!SQUAD_IS_VALID(&bLocal_1660))
		{
			bLocal_1660 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "campZombiesSquad"));
		}
		Function_538();
	}
	else
	{
		iLocal_1728 = 1;
	}
	Function_537(StackVal, &Local_4 + 4200, "amb_factory_smoke", Vector(0,569f, 0.0f, 0,712f), 1);
	return;
}

void Function_537(int iParam0, float fParam1, struct<2> Param2, bool bParam4) //Position: 0x1E278 / 123512
{
	struct<2> Var0;
	var uVar2;
	
	GET_OBJECT_RELATIVE_POSITION(&iParam0, Param2, &Var0);
	if (&bParam4)
	{
		uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Local_4, Function_58(), 3, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 10.0f, 2.0f));
		RESET_RMPTFX_IN_VOLUME(&uVar2);
	}
	UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_58(), &fParam1, Var0), Vector(0.0f, 0.0f, 0.0f));
}

void Function_538() //Position: 0x1E2CE / 123598
{
	Function_540();
	Function_310(&Local_4 + 1936, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	SQUAD_JOIN(&Local_4 + 1784[02], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1784[12], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1784[22], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1784[32], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1784[42], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1784[52], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1784[62], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1784[72], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1784[82], &bLocal_1660);
	Function_306(&Local_4 + 1568, &bLocal_1660, 4);
	Function_306(&bLocal_1660, &Local_4 + 1568, 4);
	Function_539(&bLocal_1660, &Local_4 + 1568, 0);
	Function_278(&bLocal_1660);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1660, false, 2, 4);
	TASK_GO_NEAR_OBJECT(0, &Local_4 + 3056[3], 0.0f, 1, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1660, false, 2, 2);
	TASK_GO_NEAR_OBJECT(0, &Global_54076, 0.0f, 4, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1660, false, 2, 4294967295);
	TASK_GO_NEAR_OBJECT(0, &Local_4 + 3056[4], 0.0f, 1, 0, 1);
	return;
}

void Function_539(int iParam0, var uParam1, bool bParam2) //Position: 0x1E3FA / 123898
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&uParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(&uVar2, &uVar3, &bParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_540() //Position: 0x1E478 / 124024
{
	(&Local_4 + 1936) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "S02_CampZombies_Wv02"));
	*(&Local_4 + 1784[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_E01", 153, Vector(-4341,712f, 4,057462f, 3739,319f), Vector(0.0f, 205,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[02], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[02], -1.0f, 0, 0);
	*(&Local_4 + 1784[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_E02", 142, Vector(-4332.0f, 5,24222f, 3757,225f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[12], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[12], -1.0f, 0, 0);
	*(&Local_4 + 1784[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_E03", 74, Vector(-4312f, 4,445021f, 3763,082f), Vector(0.0f, 245,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[22], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[22], -1.0f, 0, 0);
	*(&Local_4 + 1784[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_M01", 50, Vector(-4288f, 2,993114f, 3756,566f), Vector(0.0f, 245,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[32], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[32], -1.0f, 0, 0);
	*(&Local_4 + 1784[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_M02", 49, Vector(-4285,485f, 3,071273f, 3734,514f), Vector(0.0f, 266,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[42], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[42], -1.0f, 0, 0);
	*(&Local_4 + 1784[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_M03", 311, Vector(-4291,396f, 4,009795f, 3719,212f), Vector(0.0f, -53,72361f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[52], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[52], -1.0f, 0, 0);
	*(&Local_4 + 1784[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_M04", 22, Vector(-4325f, 3,296772f, 3725f), Vector(0.0f, 185,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[62], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[62], -1.0f, 0, 0);
	*(&Local_4 + 1784[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_M05", 87, Vector(-4302,593f, 4,589622f, 3720,25f), Vector(0.0f, 162,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[72], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[72], -1.0f, 0, 0);
	*(&Local_4 + 1784[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_Wv02_H01", 202, Vector(-4290,937f, 3,290339f, 3748.0f), Vector(0.0f, 85,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1784[82], &Local_4 + 1936);
	TASK_STAND_STILL(&Local_4 + 1784[82], -1.0f, 0, 0);
	return;
}

void Function_541() //Position: 0x1E7C0 / 124864
{
	*(&Local_4 + 1568) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "nDeserters"));
	*(&Local_4 + 1512[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "speaker", 371, Vector(-4316,071f, 8,23325f, 3741,462f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1512[02], &Local_4 + 1568);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1512[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1512[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1512[02], 8, 0,5f, 1, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_4 + 1512[02], 0.0f);
	TASK_STAND_STILL(&Local_4 + 1512[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1512[02], 23);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 1512[02], true);
	*(&Local_4 + 1512[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "deserter_2", 370, Vector(-4310,72f, 7,759778f, 3739,249f), Vector(0.0f, -37,51608f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1512[12], &Local_4 + 1568);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1512[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1512[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1512[12], 8, 0,5f, 1, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_4 + 1512[12], 0,1f);
	TASK_STAND_STILL(&Local_4 + 1512[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1512[12], 23);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 1512[12], true);
	*(&Local_4 + 1512[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "deserter_3", 369, Vector(-4310,702f, 7,764156f, 3746,989f), Vector(0.0f, 208,9703f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1512[22], &Local_4 + 1568);
	SET_ACTOR_UPDATE_PRIORITY(&Local_4 + 1512[22], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_4 + 1512[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_4 + 1512[22], 8, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_4 + 1512[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1512[22], 23);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_4 + 1512[22], true);
	return;
}

int Function_542(int iParam0) //Position: 0x1E9DB / 125403
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

int Function_543() //Position: 0x1E9F5 / 125429
{
	Function_330(&Local_4 + 824, 371, 2, 0);
	Function_330(&Local_4 + 824, 153, 2, 0);
	Function_330(&Local_4 + 824, 142, 2, 0);
	Function_330(&Local_4 + 824, 74, 2, 0);
	Function_330(&Local_4 + 824, 50, 2, 0);
	Function_330(&Local_4 + 824, 49, 2, 0);
	Function_330(&Local_4 + 824, 311, 2, 0);
	Function_330(&Local_4 + 824, 22, 2, 0);
	Function_330(&Local_4 + 824, 87, 2, 0);
	Function_330(&Local_4 + 824, 202, 2, 0);
	if (Function_248(&Local_4 + 824))
	{
		return 1;
	}
	return 0;
}

void Function_544() //Position: 0x1EA8D / 125581
{
	if (!IS_ACTOR_VALID(&bLocal_1658))
	{
		bLocal_1658 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	Function_373(&bLocal_1658, &Local_4 + 3056[1], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_1658, -1.0f, 0, 0);
	Function_373(&Global_54076, &Local_4 + 3056[2], 1, 1, 1);
	return;
}

void Function_545() //Position: 0x1EADD / 125661
{
	if (SQUAD_IS_VALID(&Local_4 + 1568))
	{
		switch (iLocal_1694)
		{
			case 0x00000000:
				if (Function_502(&Global_54076, &Local_4 + 1568, 1, 0, 0, -1.0f) || Function_546(&Local_4 + 1568, &Global_54076))
				{
					Function_470(&Local_4 + 1568);
					Function_385(&Local_4 + 1568, 1, 1, 1);
					Function_285(&Local_4 + 1568, &Global_54076, 4);
					SQUAD_SET_FACTION(&Local_4 + 1568, 19);
					Function_476(&Local_4 + 1568, &Global_54076, 0);
					Function_277(&Local_4 + 1568, &Local_4 + 2912, 4, 0);
					Function_278(&Local_4 + 1568);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1568, true, 1, 4294967295);
					TASK_KILL_CHAR(false, &Global_54076);
					iLocal_1703 = 4;
					iLocal_1694++;
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(&Local_4 + 1512[02]))
				{
					if (Function_405(&Global_54076, &Local_4 + 1512[02]) <= 80.0f)
					{
						RELEASE_ACTOR_AS_AMBIENT(&Local_4 + 1512[02]);
					}
				}
				if (IS_ACTOR_VALID(&Local_4 + 1512[12]))
				{
					if (Function_405(&Global_54076, &Local_4 + 1512[12]) <= 80.0f)
					{
						RELEASE_ACTOR_AS_AMBIENT(&Local_4 + 1512[12]);
					}
				}
				if (IS_ACTOR_VALID(&Local_4 + 1512[22]))
				{
					if (Function_405(&Global_54076, &Local_4 + 1512[22]) <= 80.0f)
					{
						RELEASE_ACTOR_AS_AMBIENT(&Local_4 + 1512[22]);
					}
				}
				break;
			}
	}
	return;
}

int Function_546(var uParam0, int iParam1) //Position: 0x1EC3E / 126014
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar1)) > 1.0f)
				{
					if (GET_LAST_ATTACKER(&uVar1) == &iParam1)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_547() //Position: 0x1ECBC / 126140
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2792))
	{
		if (!SQUAD_IS_VALID(&Local_4 + 1504))
		{
			Function_298();
			TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Local_4 + 1416[42], &iLocal_1062 + 152, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
			TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Local_4 + 1416[12], &iLocal_1062 + 216, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
			TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Local_4 + 1416[02], &iLocal_1184 + 104, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_4 + 1416[02], 4294967295);
			Function_287(0, 1);
			Function_385(&Local_4 + 1504, 0, 0, 0);
			Function_549();
		}
		if (iLocal_1349 > 3 && !iLocal_1737)
		{
			if (Function_502(&Global_54076, &Local_4 + 1504, 1, 1, 0, 3212836864))
			{
				SQUAD_SET_FACTION(&Local_4 + 1504, 22);
				Function_548();
				iLocal_1737 = 1;
			}
		}
	}
	else if (SQUAD_IS_VALID(&Local_4 + 1504))
	{
		iLocal_1736 = 0;
		iLocal_1737 = 0;
		Function_287(0, 0);
		Function_275(&Local_4 + 1504);
		DESTROY_OBJECT(&Local_4 + 1504);
	}
	return;
}

void Function_548() //Position: 0x1EDC7 / 126407
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Z02_AssaultsArmyCapt", "Z02_AssaultsArmyCapt", false, 3, 1, 0, 1);
	Function_180(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_549() //Position: 0x1EE16 / 126486
{
	Unknown_Function();
	if (!9 && !iLocal_1736)
	{
		Function_278(&Local_4 + 1504);
		SQUAD_SET_FACTION(&Local_4 + 1504, 1);
		SNAP_ACTOR_TO_GRINGO(&Local_4 + 1416[02], &iLocal_1234 + 80, "USECASE1", true, 0, 0);
		TASK_USE_GRINGO(&Local_4 + 1416[02], GET_GRINGO_FROM_OBJECT(&iLocal_1234 + 80), "UseCase1", 4294967295, 1);
		TASK_PRIORITY_SET(&Local_4 + 1416[02], 2);
		TASK_WANDER_IN_VOLUME(&Local_4 + 1416[42], &Local_4 + 2928, -1f);
		TASK_WANDER_IN_VOLUME(&Local_4 + 1416[32], &Local_4 + 2928, -1f);
		TASK_WANDER_IN_VOLUME(&Local_4 + 1416[22], &Local_4 + 2928, -1f);
		TASK_STAND_STILL(&Local_4 + 1416[12], -1.0f, 1, 0);
		TASK_PRIORITY_SET(&Local_4 + 1416[42], 2);
		TASK_PRIORITY_SET(&Local_4 + 1416[32], 2);
		TASK_PRIORITY_SET(&Local_4 + 1416[12], 2);
		TASK_PRIORITY_SET(&Local_4 + 1416[22], 2);
		Function_279(&Local_4 + 1504, 0.0f);
		Function_385(&Local_4 + 1504, 1, 1, 1);
		iLocal_1736 = 1;
	}
	return;
}

void Function_550() //Position: 0x1EF2F / 126767
{
	if (iLocal_1350 > 6)
	{
		Function_584();
		Function_577();
	}
	if (iLocal_1350 > 9)
	{
		Function_443(&Local_4 + 3056[5], "Zombie02_Warn_Camp", "Zombie02_Fail_Camp", "Z02_Deserter_Camp", &bLocal_1660);
		Function_576();
		Function_547();
	}
	switch (iLocal_1350)
	{
		case 0x00000000:
			Function_374(0);
			if (!iLocal_1509[0])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_575();
				Function_371(&iLocal_1596);
				iLocal_1350 = 1;
			}
			else
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_574())
				{
					Function_197(&Local_4 + 3000[2]);
					if (Function_344(StackVal, Function_197(&Local_4 + 3000[2]), 175,438f))
					{
						AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
						Function_371(&iLocal_1596);
						iLocal_1350 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADING())
			{
				Function_196(iLocal_1349);
				Function_423(StackVal, Function_196(iLocal_1349), iLocal_1349, Global_46736[1], Function_199(iLocal_1349), 0);
				Function_230(1.0f);
				STREAMING_UNLOAD_BOUNDS();
				Function_543();
				Function_573(Local_1263, 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_1703 = 0;
				Function_371(&iLocal_1596);
				iLocal_1350 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2760) || Function_572(&Local_4 + 1568) < 0))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Local_4 + 3056[5])))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Local_4 + 3056[5]));
				}
				Function_371(&iLocal_1596);
				iLocal_1350 = 9;
			}
			break;
		
		case 0x00000009:
			Function_569();
			Function_567();
			AUDIO_SET_PLAYER_MOOD(1, 0);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			iLocal_1694 = 0;
			Function_371(&iLocal_1596);
			iLocal_1350 = 10;
			break;
		
		case 0x0000000A:
			Function_563();
			if (Function_381(0x40800000))
			{
				Function_27("Zombie02_Stg02_obj10", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_562(1, 0);
				iLocal_1350 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_563();
			break;
		
		case 0x0000000C:
			Function_560();
			break;
		
		case 0x0000000D:
			Function_553();
			break;
		
		case 0x00000010:
			Function_562(0, 0);
			Function_552();
			ADD_BLIP_FOR_OBJECT(&Local_4 + 4104, 330, 0f, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&Local_4 + 4104), "Z02_Blip_UniformChest");
			Function_27("Zombie02_Stg02_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_371(&iLocal_1596);
			iLocal_1350 = 17;
			break;
		
		case 0x00000011:
			if (Function_357(9) && iLocal_1697 <= 1)
			{
				Unknown_Function();
				if (StackVal)
				{
					Function_373(&Global_54076, &Local_4 + 3056[2], 1, 1, 1);
					Function_371(&iLocal_1596);
					iLocal_1350 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1568) >= 0)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) >= 0)
				{
					if (bLocal_1720 || iLocal_1728)
					{
						Function_573(Local_1263, 2);
					}
				}
				else if (bLocal_1720 || iLocal_1728)
				{
					Function_573(Local_1263, 1);
				}
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) >= 0)
			{
				Function_573(Local_1263, 3);
			}
			else
			{
				Function_573(Local_1263, 4);
			}
			STREAMING_UNLOAD_BOUNDS();
			STREAMING_UNLOAD_SCENE();
			iLocal_1509[1] = 1;
			iLocal_1713 = 0;
			iLocal_1730 = 0;
			Function_551();
			iLocal_1349 = 2;
			iLocal_1350 = 0;
			break;
	}
	return;
}

void Function_551() //Position: 0x1F2CC / 127692
{
	Function_138(&Local_4 + 608);
	return;
}

void Function_552() //Position: 0x1F2DA / 127706
{
	Function_435(&Local_4 + 1568, 0);
	Function_278(&Local_4 + 1568);
	Function_286(&Local_4 + 1568, 0);
	SQUAD_SET_FACTION(&Local_4 + 1568, 1);
	if (IS_ACTOR_VALID(&Local_4 + 1512[02]))
	{
		SET_ACTOR_FACTION(&Local_4 + 1512[02], 1);
		TASK_WANDER_IN_VOLUME(&Local_4 + 1512[02], &Local_4 + 2920, -1.0f);
	}
	if (IS_ACTOR_VALID(&Local_4 + 1512[12]))
	{
		SET_ACTOR_FACTION(&Local_4 + 1512[12], 1);
		TASK_WANDER_IN_VOLUME(&Local_4 + 1512[12], &Local_4 + 2920, -1.0f);
	}
	if (IS_ACTOR_VALID(&Local_4 + 1512[22]))
	{
		SET_ACTOR_FACTION(&Local_4 + 1512[22], 1);
		TASK_WANDER_IN_VOLUME(&Local_4 + 1512[22], &Local_4 + 2920, -1.0f);
	}
	return;
}

void Function_553() //Position: 0x1F394 / 127892
{
	if (iLocal_1698 <= 1)
	{
		iLocal_1698++;
	}
	Function_559();
	Function_558();
	if (!bLocal_1720)
	{
		if (!IS_ACTOR_ALIVE(&Local_4 + 1512[02]))
		{
			Function_557();
		}
		switch (iLocal_1694)
		{
			case 0x00000000:
				if (IS_ACTOR_ALIVE(&Local_4 + 1512[02]))
				{
					Function_285(&Local_4 + 1568, &Global_54076, 2);
					Function_556(&Local_4 + 1568);
				}
				Function_555();
				iLocal_1694 = 1;
				Function_371(&iLocal_1616);
				Function_371(&iLocal_1604);
				Function_371(&iLocal_1596);
				break;
			
			case 0x00000001:
				if (IS_ACTOR_ALIVE(&Local_4 + 1512[02]))
				{
					if ((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2776) && IS_ACTOR_IN_VOLUME(&Local_4 + 1512[02], &Local_4 + 2776)) && Function_237(&iLocal_1596) < 2.0f)
					{
						iLocal_1694 = 2;
					}
					else if (Function_237(&iLocal_1604) <= 5.0f)
					{
						Function_27("Zombie02_Stg02_obj08", 0x40f00000, 1, 2, 0, 0, 0, 0);
						Function_562(1, 1);
						Function_554(&bLocal_1660);
						Function_371(&iLocal_1604);
						Function_371(&iLocal_1596);
						iLocal_1694 = 2;
					}
				}
				break;
			
			case 0x00000002:
				if ((IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2776) && IS_ACTOR_IN_VOLUME(&Local_4 + 1512[02], &Local_4 + 2776)) && Function_237(&iLocal_1596) < 2.0f)
				{
					Function_453();
					Function_144(&Local_4 + 1512[02]);
					iLocal_1734 = 1;
					Function_371(&iLocal_1596);
					iLocal_1694 = 3;
				}
				break;
			}
	}
	return;
}

void Function_554(bool bParam0) //Position: 0x1F502 / 128258
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_555() //Position: 0x1F556 / 128342
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_FormPerim", "Z02_FormPerim", false, 3, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_556(bool bParam0) //Position: 0x1F597 / 128407
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		CLEAR_LAST_HIT(&uVar1);
		bVar0++;
	}
	return;
}

void Function_557() //Position: 0x1F5CA / 128458
{
	iLocal_1694 = 0;
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) >= 0)
	{
		Function_285(&Local_4 + 1568, &Global_54076, 4);
		iLocal_1728 = 1;
	}
	Function_371(&iLocal_1596);
	iLocal_1350 = 17;
	return;
}

void Function_558() //Position: 0x1F5FC / 128508
{
	if (IS_ACTOR_VALID(&Local_4 + 1512[22]))
	{
		if (!IS_ACTOR_IN_VOLUME(&Local_4 + 1512[22], &Local_4 + 2800))
		{
			if (!iLocal_1742)
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&Local_4 + 1512[22], 1);
				iLocal_1742 = 1;
			}
		}
	}
	if (IS_ACTOR_VALID(&Local_4 + 1512[12]))
	{
		if (!IS_ACTOR_IN_VOLUME(&Local_4 + 1512[12], &Local_4 + 2800))
		{
			if (!iLocal_1743)
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&Local_4 + 1512[12], 1);
				iLocal_1743 = 1;
			}
		}
	}
	if (IS_ACTOR_VALID(&Local_4 + 1512[02]))
	{
		if (!IS_ACTOR_IN_VOLUME(&Local_4 + 1512[02], &Local_4 + 2800))
		{
			if (!iLocal_1744)
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&Local_4 + 1512[02], 1);
				iLocal_1744 = 1;
			}
		}
	}
	return;
}

void Function_559() //Position: 0x1F6B9 / 128697
{
	if (Function_402(&Local_4 + 1568, &Global_54076))
	{
		iLocal_1698 += 2;
	}
	if (Function_502(&Global_54076, &Local_4 + 1568, 1, 0, 0, -1.0f) || Function_546(&Local_4 + 1568, &Global_54076))
	{
		if (iLocal_1698 > 1)
		{
			bLocal_1720 = true;
			iLocal_1694 = 0;
			Function_371(&iLocal_1604);
			iLocal_1350 = 12;
		}
		else
		{
			iLocal_1698++;
			Function_556(&Local_4 + 1568);
		}
	}
	return;
}

void Function_560() //Position: 0x1F727 / 128807
{
	switch (iLocal_1694)
	{
		case 0x00000000:
			Function_470(&Local_4 + 1568);
			Function_385(&Local_4 + 1568, 1, 1, 1);
			Function_285(&Local_4 + 1568, &Global_54076, 4);
			Function_306(&Local_4 + 1568, &bLocal_1660, 4);
			SQUAD_SET_FACTION(&Local_4 + 1568, 19);
			Function_476(&Local_4 + 1568, &Global_54076, 0);
			Function_277(&Local_4 + 1568, &Local_4 + 2912, 4, 0);
			Function_278(&Local_4 + 1568);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_4 + 1568, true, 1, 4294967295);
			TASK_KILL_CHAR(false, &Global_54076);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1568) >= 0)
			{
				Function_554(&Local_4 + 1568);
				Function_382(&Local_4 + 1568, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			Function_371(&iLocal_1596);
			iLocal_1694 = 1;
			break;
		
		case 0x00000001:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1568) >= 0)
			{
				if (Function_381(0x40800000))
				{
					Function_27("Zombie02_Stg02_obj07", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_371(&iLocal_1596);
					iLocal_1694 = 2;
				}
				else if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
				}
			}
			else
			{
				Function_371(&iLocal_1596);
				iLocal_1694 = 2;
			}
			break;
		
		case 0x00000002:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1568) <= 1)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) >= 0)
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) >= 5)
					{
						if (Function_381(0x40800000))
						{
							Function_27("Zombie02_Stg02_obj11", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_371(&iLocal_1596);
							iLocal_1694 = 3;
						}
						else if (Function_561())
						{
							Function_453();
						}
					}
					else
					{
						Function_371(&iLocal_1596);
						iLocal_1694 = 3;
					}
				}
				else
				{
					Function_371(&iLocal_1596);
					iLocal_1694 = 4;
				}
			}
			break;
		
		case 0x00000003:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) >= 5 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) < 0)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_1660)))
				{
					Function_382(&bLocal_1660, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (Function_381(0x40800000))
				{
					Function_27("Zombie02_Stg02_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_371(&iLocal_1596);
					iLocal_1694 = 4;
				}
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) < 0)
			{
				Function_371(&iLocal_1596);
				iLocal_1694 = 4;
			}
			break;
		
		case 0x00000004:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) < 0)
			{
				Function_453();
				Function_371(&iLocal_1596);
				iLocal_1350 = 16;
			}
			break;
	}
	return;
}

bool Function_561() //Position: 0x1F9A3 / 129443
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_562(bool bParam0, bool bParam1) //Position: 0x1F9B0 / 129456
{
	if (&bParam0)
	{
		if (IS_ACTOR_VALID(&Local_4 + 1512[02]))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Local_4 + 1512[02])))
			{
				ADD_BLIP_FOR_ACTOR(&Local_4 + 1512[02], 325, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&Local_4 + 1512[02]), "Z02_Blip_Deserters");
			}
		}
		if (!&bParam1)
		{
			if (IS_ACTOR_VALID(&Local_4 + 1512[12]))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Local_4 + 1512[12])))
				{
					ADD_BLIP_FOR_ACTOR(&Local_4 + 1512[12], 325, 0, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&Local_4 + 1512[12]), "Z02_Blip_Deserters");
				}
			}
			if (IS_ACTOR_VALID(&Local_4 + 1512[22]))
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Local_4 + 1512[22])))
				{
					ADD_BLIP_FOR_ACTOR(&Local_4 + 1512[22], 325, 0, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&Local_4 + 1512[22]), "Z02_Blip_Deserters");
				}
			}
		}
	}
	else
	{
		if (IS_ACTOR_VALID(&Local_4 + 1512[02]))
		{
			Function_144(&Local_4 + 1512[02]);
		}
		if (IS_ACTOR_VALID(&Local_4 + 1512[12]))
		{
			Function_144(&Local_4 + 1512[12]);
		}
		if (IS_ACTOR_VALID(&Local_4 + 1512[22]))
		{
			Function_144(&Local_4 + 1512[22]);
		}
	}
	return;
}

void Function_563() //Position: 0x1FB22 / 129826
{
	if (iLocal_1701 <= 3)
	{
		Function_565();
		Function_513(StackVal, *(&Local_4 + 3800));
	}
	Function_559();
	switch (iLocal_1701)
	{
		case 0x00000000:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) < 3)
			{
				Function_538();
				iLocal_1701++;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_1713)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) < 5)
				{
					Function_562(0, 0);
					Function_382(&bLocal_1660, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_27("Zombie02_Stg02_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_1713 = 1;
					iLocal_1701++;
				}
			}
			break;
		
		case 0x00000002:
			if (!iLocal_1730)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) < 2)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
					iLocal_1730 = 1;
				}
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1660) < 0)
			{
				AUDIO_SET_PLAYER_MOOD(0, 0);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				Function_564();
				iLocal_1697 = 0;
				iLocal_1694 = 0;
				iLocal_1701++;
				Function_371(&iLocal_1604);
				iLocal_1350 = 13;
			}
			break;
	}
	return;
}

void Function_564() //Position: 0x1FC3C / 130108
{
	var uVar0;
	
	SQUAD_GOALS_CLEAR(&Local_4 + 1568);
	Function_435(&Local_4 + 1568, 1);
	uVar0 = &Local_4 + 1512[02];
	if (IS_ACTOR_VALID(&uVar0))
	{
		MEMORY_CLEAR_ALL(&uVar0);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&uVar0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&uVar0, 0);
		iLocal_1744 = 0;
		bLocal_1700 = TASK_SEQUENCE_OPEN();
		TASK_STAND_STILL(false, RAND_FLOAT_RANGE(3.0f, 4.0f), 0, 0);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_4 + 4160, 1, 0, 0, 1, false);
		TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(&uVar0);
		TASK_SEQUENCE_PERFORM(&uVar0, bLocal_1700);
		TASK_SEQUENCE_RELEASE(bLocal_1700, 1);
		TASK_PRIORITY_SET(&uVar0, true);
	}
	uVar0 = &Local_4 + 1512[12];
	if (IS_ACTOR_VALID(&uVar0))
	{
		MEMORY_CLEAR_ALL(&uVar0);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&uVar0, 0);
		iLocal_1742 = 0;
		bLocal_1700 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(0, 1);
		TASK_STAND_STILL(false, RAND_FLOAT_RANGE(2.0f, 4.0f), 0, 0);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_4 + 4152, 1, 0, 0, 1, false);
		TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(&uVar0);
		TASK_SEQUENCE_PERFORM(&uVar0, bLocal_1700);
		TASK_SEQUENCE_RELEASE(bLocal_1700, 1);
		TASK_PRIORITY_SET(&uVar0, true);
	}
	uVar0 = &Local_4 + 1512[22];
	if (IS_ACTOR_VALID(&uVar0))
	{
		MEMORY_CLEAR_ALL(&uVar0);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&uVar0, 0);
		iLocal_1743 = 0;
		bLocal_1700 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(0, 1);
		TASK_STAND_STILL(false, RAND_FLOAT_RANGE(1.0f, 3.0f), 0, 0);
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &Local_4 + 4144, 1, 0, 0, 1, false);
		TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 1, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(&uVar0);
		TASK_SEQUENCE_PERFORM(&uVar0, bLocal_1700);
		TASK_SEQUENCE_RELEASE(bLocal_1700, 1);
		TASK_PRIORITY_SET(&uVar0, true);
	}
	return;
}

void Function_565() //Position: 0x1FDEC / 130540
{
	var uVar0;
	bool bVar1;
	
	if (!Function_566(&Local_4 + 1568, &Local_4 + 2800))
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Local_4 + 1568))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 1568, bVar1);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (!IS_ACTOR_IN_VOLUME(&uVar0, &Local_4 + 2800))
				{
					if (GET_TASK_STATUS(&uVar0, 50) != 1)
					{
						TASK_CLEAR(&uVar0);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar0, -1.0f);
					}
				}
			}
			bVar1++;
		}
	}
	return;
}

bool Function_566(var uParam0, int iParam1) //Position: 0x1FE5F / 130655
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (!IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
				{
					return 0;
				}
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_567() //Position: 0x1FEB5 / 130741
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	bool bVar5;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&Local_4 + 1568))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_4 + 1568, bVar0);
		Function_336(&uVar1);
		bVar2 = Function_568(StackVal, &Local_4 + 3200, Function_336(&uVar1), 0, 0x42960000);
		bVar5 = GET_OBJECT_HEADING(&bVar2);
		Function_197(&bVar2);
		iVar3 = Function_197(&bVar2);
		bLocal_1700 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(false, &iVar3, bVar5, -1.0f);
		TASK_CROUCH(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(&uVar1);
		TASK_SEQUENCE_PERFORM(&uVar1, bLocal_1700);
		TASK_SEQUENCE_RELEASE(bLocal_1700, 1);
		TASK_PRIORITY_SET(&uVar1, true);
		SET_OBJECT_POSITION(StackVal, &bVar2, Vector(0.0f, 0.0f, 0.0f));
		bVar0++;
	}
	return;
}

var Function_568(var uParam0, struct<2> Param1, float fParam3, float fParam4) //Position: 0x1FF4F / 130895
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	bool bVar6;
	
	bVar3 = 999999.0f;
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(&uParam0) < 0)
	{
		return "";
	}
	bVar6 = false;
	while (bVar6 < (GET_OBJECTSET_SIZE(&uParam0) - 1))
	{
		fVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, &uParam0);
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Param1, Var4);
		if ((bVar2 >= bVar3 && bVar2 <= &fParam3) && bVar2 >= &fParam4)
		{
			bVar3 = bVar2;
			uVar1 = &fVar0;
		}
		bVar6++;
	}
	return &uVar1;
}

void Function_569() //Position: 0x1FFDD / 131037
{
	if (!SQUAD_IS_VALID(&bLocal_1660))
	{
		bLocal_1660 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "campZombiesSquad"));
	}
	if (!SQUAD_IS_VALID(&Local_4 + 1728))
	{
		Function_571();
	}
	if (!SQUAD_IS_VALID(&Local_4 + 1776))
	{
		Function_570();
	}
	AI_STOP_IGNORING_ACTORS();
	Function_306(&Local_4 + 1728, &Local_4 + 1776, 0);
	Function_306(&Local_4 + 1776, &Local_4 + 1728, 0);
	bLocal_1660 = &Local_4 + 1728;
	Function_310(&bLocal_1660, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	SQUAD_JOIN(&Local_4 + 1736[02], &bLocal_1660);
	SQUAD_JOIN(&Local_4 + 1736[12], &bLocal_1660);
	Function_306(&Local_4 + 1568, &bLocal_1660, 4);
	Function_306(&bLocal_1660, &Local_4 + 1568, 4);
	Function_539(&bLocal_1660, &Local_4 + 1568, 0);
	Function_278(&bLocal_1660);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1660, false, 2, 4);
	TASK_GO_NEAR_OBJECT(0, &Local_4 + 3056[3], 0.0f, 1, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1660, false, 2, 2);
	TASK_GO_NEAR_OBJECT(0, &Global_54076, 0.0f, 4, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1660, false, 2, 4294967295);
	TASK_GO_NEAR_OBJECT(0, &Local_4 + 3056[4], 0.0f, 1, 0, 1);
	return;
}

void Function_570() //Position: 0x2011B / 131355
{
	(&Local_4 + 1776) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "S02_Camp_Special_Z"));
	*(&Local_4 + 1736[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_T03", 1224, Vector(-4304,435f, 5,475019f, 3738,8f), Vector(0.0f, 143,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1736[02], &Local_4 + 1776);
	TASK_STAND_STILL(&Local_4 + 1736[02], -1.0f, 0, 0);
	*(&Local_4 + 1736[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_T04", 1227, Vector(-4323,217f, 4,915652f, 3748.0f), Vector(0.0f, -54,72361f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1736[12], &Local_4 + 1776);
	TASK_STAND_STILL(&Local_4 + 1736[12], -1.0f, 0, 0);
	return;
}

void Function_571() //Position: 0x201ED / 131565
{
	*(&Local_4 + 1728) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "S02_CampZombies"));
	*(&Local_4 + 1576[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_E01", 202, Vector(-4315,316f, 4,995399f, 3732f), Vector(0.0f, 205,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[02], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[02], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[02]);
	*(&Local_4 + 1576[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_E02", 87, Vector(-4317,871f, 4,674454f, 3733,87f), Vector(0.0f, 222,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[12], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[12], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[12]);
	*(&Local_4 + 1576[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_E03", 46, Vector(-4321,102f, 4,685884f, 3737,318f), Vector(0.0f, 245,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[22], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[22], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[22]);
	*(&Local_4 + 1576[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_M01", 311, Vector(-4324,269f, 4,867883f, 3741,711f), Vector(0.0f, 245,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[32], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[32], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[32]);
	*(&Local_4 + 1576[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_M02", 49, Vector(-4325,416f, 5,258275f, 3746,678f), Vector(0.0f, 266,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[42], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[42], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[42]);
	*(&Local_4 + 1576[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_M03", 50, Vector(-4323,798f, 5,27557f, 3751,063f), Vector(0.0f, -53,72361f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[52], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[52], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[52]);
	*(&Local_4 + 1576[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_M04", 74, Vector(-4312.0f, 5,067668f, 3733,999f), Vector(0.0f, 185,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[62], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[62], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[62], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[62]);
	*(&Local_4 + 1576[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_M05", 142, Vector(-4306,496f, 5,174467f, 3736f), Vector(0.0f, 162,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[72], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[72], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[72], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[72]);
	*(&Local_4 + 1576[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_4, "CZ_H01", 153, Vector(-4302,252f, 5,209476f, 3740,512f), Vector(0.0f, 85,2764f, 0.0f));
	SQUAD_JOIN(&Local_4 + 1576[82], &Local_4 + 1728);
	TASK_STAND_STILL(&Local_4 + 1576[82], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&Local_4 + 1576[82], 19);
	AI_IGNORE_ACTOR(&Local_4 + 1576[82]);
	return;
}

int Function_572(int iParam0) //Position: 0x205F8 / 132600
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (Function_410(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_573(int iParam0, int iParam1) //Position: 0x20648 / 132680
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

bool Function_574() //Position: 0x20663 / 132707
{
	Function_330(&Local_4 + 608, 371, 2, 0);
	Function_330(&Local_4 + 608, 202, 2, 0);
	Function_330(&Local_4 + 608, 87, 2, 0);
	Function_330(&Local_4 + 608, 46, 2, 0);
	Function_330(&Local_4 + 608, 311, 2, 0);
	Function_330(&Local_4 + 608, 49, 2, 0);
	Function_330(&Local_4 + 608, 50, 2, 0);
	Function_330(&Local_4 + 608, 74, 2, 0);
	Function_330(&Local_4 + 608, 142, 2, 0);
	Function_330(&Local_4 + 608, 153, 2, 0);
	Function_330(&Local_4 + 608, 1224, 2, 0);
	Function_330(&Local_4 + 608, 1227, 2, 0);
	Function_330(&Local_4 + 608, 22, 2, 0);
	if (Function_248(&Local_4 + 608))
	{
		return 1;
	}
	return 0;
}

void Function_575() //Position: 0x20724 / 132900
{
	if (!IS_ACTOR_VALID(&bLocal_1658))
	{
		bLocal_1658 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	TASK_STAND_STILL(&bLocal_1658, -1.0f, 0, 0);
	ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_1658);
	Function_373(&bLocal_1658, &Local_4 + 3248[1], 1, 1, 1);
	ADD_BLIP_FOR_OBJECT(&Local_4 + 3056[5], 330, 0f, 2, 0);
	SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&Local_4 + 3056[5]), "Z02_Deserter_Camp");
	return;
}

void Function_576() //Position: 0x207A3 / 133027
{
	switch (iLocal_1697)
	{
		case 0xFFFFFFFE:
			if (!IS_GRINGO_VALID(&iLocal_1656))
			{
				iLocal_1656 = GET_GRINGO_FROM_OBJECT(&Local_4 + 4104);
			}
			else if (GRINGO_IS_ACTIVATION_ALLOWED(&iLocal_1656))
			{
				GRINGO_ALLOW_ACTIVATION(&iLocal_1656, false);
				iLocal_1697 = 4294967295;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!GRINGO_IS_ACTIVATION_ALLOWED(&iLocal_1656))
			{
				GRINGO_ALLOW_ACTIVATION(&iLocal_1656, true);
				iLocal_1697 = 0;
			}
			break;
		
		case 0x00000000:
			if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&Local_4 + 4104))
			{
				Function_185(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0);
				HUD_CLEAR_OBJECTIVE();
				iLocal_1697 = 1;
			}
			break;
		
		case 0x00000001:
			if ((GET_CURRENT_GRINGO(&Global_54076) != "" && DECOR_CHECK_EXIST(&Local_4 + 4104, "GringoIsDone")) || HUD_IS_FADED())
			{
				Function_562(0, 0);
				Function_363(9, 1, 0, 0, 1);
				Function_360(9, 1, 0);
				Function_557();
				iLocal_1697 = 2;
			}
			break;
	}
	return;
}

void Function_577() //Position: 0x20886 / 133254
{
	if (bLocal_1720 && iLocal_1703 > 6)
	{
		iLocal_1703 = 6;
		Function_201();
		if (IS_ACTOR_ALIVE(&Local_4 + 1512[02]))
		{
			Function_530();
		}
	}
	switch (iLocal_1703)
	{
		case 0x00000000:
			if (Function_583(&Local_4 + 2760, 1.0f, 80.0f, 1, 1, 0))
			{
				if (Function_387(0x41000000))
				{
					Function_582();
					iLocal_1703++;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_405(&Global_54076, &Local_4 + 1512[02]) > 25.0f)
			{
				if (Function_387(0x41000000))
				{
					Function_581();
					iLocal_1703++;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_405(&Global_54076, &Local_4 + 1512[02]) > 40.0f)
			{
				if (Function_387(0x41000000))
				{
					Function_179();
					Function_371(&iLocal_1616);
					iLocal_1703++;
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_1701 >= 0)
			{
				if (Function_387(0x41000000))
				{
					Function_580();
					Function_371(&iLocal_1616);
					iLocal_1703++;
				}
			}
			else if (Function_387(0x41000000))
			{
				Function_579();
				Function_371(&iLocal_1616);
			}
			break;
		
		case 0x00000004:
			if ((Function_387(2.0f) && iLocal_1694 <= 2) && iLocal_1734)
			{
				Function_578();
				AI_GOAL_LOOK_AT_ACTOR_NEW(&Local_4 + 1512[02], &Global_54076, -1f, 0);
				iLocal_1703++;
				Function_371(&iLocal_1616);
			}
			else if (Function_387(15.0f) && iLocal_1701 > 3)
			{
				Function_579();
				Function_371(&iLocal_1616);
			}
			break;
		
		case 0x00000005:
			if (Function_387(0x41000000))
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 16;
				iLocal_1703++;
			}
			break;
	}
	return;
}

void Function_578() //Position: 0x20A2B / 133675
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_GiveMeAUniform_v1_AA", "Z02_GiveMeAUniform_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_GiveMeAUniform_v1_AB", "Z02_GiveMeAUniform_v1_AB", 2, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(2, "Z02_GiveMeAUniform_v1_AC", "Z02_GiveMeAUniform_v1_AC", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_GiveMeAUniform_v1_AD1", "Z02_GiveMeAUniform_v1_AD1", 2, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Z02_GiveMeAUniform_v1_AD2", "Z02_GiveMeAUniform_v1_AD2", 2, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(2, "Z02_GiveMeAUniform_v1_AE1", "Z02_GiveMeAUniform_v1_AE1", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(2, "Z02_GiveMeAUniform_v1_AE2", "Z02_GiveMeAUniform_v1_AE2", false, 1, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_579() //Position: 0x20C04 / 134148
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_YellsAtZombs", "Z02_YellsAtZombs", false, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_580() //Position: 0x20C4B / 134219
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_AnotWaveZombs", "Z02_AnotWaveZombs", false, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_581() //Position: 0x20C94 / 134292
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Z02_ZombClose", "Z02_ZombClose", false, 2, 1, 0, 1);
	Function_180(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_582() //Position: 0x20CD5 / 134357
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Z02_SpotsSmoke", "Z02_SpotsSmoke", 2, 1, 1, 0, 1);
	Function_180(1);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_583(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x20D18 / 134424
{
	return CAMERA_IS_VISIBLE_VOLUME(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_584() //Position: 0x20D38 / 134456
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2768))
	{
		if (!iLocal_1729)
		{
			Function_364("Zombie02_Help_Camp01", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_1729 = 1;
		}
		if (!SQUAD_IS_VALID(&Local_4 + 1568))
		{
			Function_541();
		}
		if (!SQUAD_IS_VALID(&Local_4 + 1728))
		{
			Function_571();
		}
		if (iLocal_1350 < 11)
		{
			Function_511(&Local_4 + 1568, &Local_4 + 3056[5], 0x3f000000, 0x3fe00000);
		}
		if (!iLocal_1716)
		{
			Function_385(&Local_4 + 1568, 0, 0, 0);
			Function_285(&Local_4 + 1568, &Global_54076, 1);
			Function_286(&Local_4 + 1568, 0);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_4 + 1568, 1, &Local_4 + 2912, 4294967295);
			Function_277(&Local_4 + 1568, &Local_4 + 2912, 2, 0);
			Function_279(&Local_4 + 1568, 0.0f);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Local_4 + 1568, 658056);
			Function_197(&Local_4 + 3056[13]);
			Local_1677 = Function_197(&Local_4 + 3056[13]);
			Function_320(&Local_4 + 3056[13]);
			Local_1680 = Function_320(&Local_4 + 3056[13]);
			STREAMING_LOAD_SCENE_EXT(Local_1677, Local_1680, 0);
			if (!SQUAD_IS_VALID(&bLocal_1660))
			{
				bLocal_1660 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_4, "campZombiesSquad"));
			}
			bLocal_1660 = &Local_4 + 1728;
			Function_310(&bLocal_1660, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
			Function_537(StackVal, &Local_4 + 4200, "amb_factory_smoke", Vector(0,569f, 0.0f, 0,712f), 1);
			iLocal_1701 = 0;
			iLocal_1716 = 1;
		}
	}
	return;
}

void Function_585() //Position: 0x20ECD / 134861
{
	if (iLocal_1350 >= 6)
	{
		Function_547();
	}
	switch (iLocal_1350)
	{
		case 0x00000000:
			Function_374(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_586();
			Function_371(&iLocal_1596);
			iLocal_1350 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 2;
			}
			break;
		
		case 0x00000002:
			Function_197(&Local_4 + 3000[2]);
			if (Function_344(StackVal, Function_197(&Local_4 + 3000[2]), 175,438f))
			{
				if (Function_242(&Local_1263))
				{
					Function_337();
					Function_197(&bLocal_1658);
					ENABLE_GAME_CAMERA_FOCUS(Function_197(&bLocal_1658), 0.0f, 0, 1, 1, 0);
					TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_1689, 76,72f, 0, 0, false);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(&Global_54076);
					ACTOR_POP_NEXT_GAIT(&Global_54076, 1, false);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3,5f, 0);
				}
				Function_371(&iLocal_1596);
				iLocal_1350 = 4;
			}
			break;
		
		case 0x00000004:
			Function_196(iLocal_1349);
			Function_423(StackVal, Function_196(iLocal_1349), iLocal_1349, Global_46736[1], Function_199(iLocal_1349), 0);
			Function_230(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			iLocal_1350 = 6;
			break;
		
		case 0x00000006:
			if (Function_381(1.0f))
			{
				Function_201();
				Function_27("Zombie02_Stg01_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT(&Local_4 + 3056[5], 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&Local_4 + 3056[5]), "Z02_Deserter_Camp");
				iLocal_1350 = 7;
			}
			break;
		
		case 0x00000007:
			Function_528(&Local_4 + 3056[5], 170.0f);
			if (!bLocal_1712)
			{
				bLocal_1712 = Function_574();
			}
			if (!iLocal_1730)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					AUDIO_MUSIC_SET_MOOD("DRAMATIC_LOW", 0, 4294967295, 4294967295);
					iLocal_1730 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_4 + 2768))
			{
				iLocal_1350 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_1730 = 0;
			STREAMING_UNLOAD_BOUNDS();
			iLocal_1509[0] = 1;
			iLocal_1349 = 1;
			iLocal_1350 = 0;
			break;
	}
	return;
}

void Function_586() //Position: 0x210C3 / 135363
{
	SET_DRAW_OBJECT(&uLocal_1652, 1);
	if (!IS_ACTOR_VALID(&bLocal_1658))
	{
		bLocal_1658 = Function_264(1, 0, 0, 0, 0, 0, 1, 0);
	}
	TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &bLocal_1658, &Local_4 + 3000[1], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
	TASK_STAND_STILL(&bLocal_1658, -1.0f, 0, 0);
	AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
	return;
}

void Function_587() //Position: 0x21124 / 135460
{
	switch (iLocal_1350)
	{
		case 0x00000006:
			Function_598(&Local_1263, 1);
			Function_152(&(Global_43791[Global_46796[4]]), 256);
			iLocal_1261 = CREATE_LAYOUT("ZOMBIE02_DYNAMICLAYOUT");
			Function_156(0x4000000);
			Function_126(114696);
			Function_596(1);
			Function_595(6, 1);
			Function_594();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			uLocal_1352 = CREATE_OBJECT_ITERATOR(&iLocal_1261);
			AUDIO_MUSIC_FORCE_TRACK("FTR_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_326();
			if (((Function_341(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1263, iLocal_1349) && !Function_242(&Local_1263)) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/mexico_crossing_1_cs/mexico_crossing_1_cs")) && iLocal_1260 != 0)
			{
				iLocal_1350 = 7;
			}
			else
			{
				iLocal_1350 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_1350 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_231("$/cutscene/mexico_crossing_1_cs/mexico_crossing_1_cs", &iLocal_1337, &Local_1263, &iLocal_1349, 80316, 79646, 79303, 65904, 64755, 43407, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_371(&iLocal_1596);
				iLocal_1350 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_592())
			{
				Function_590(&uLocal_1355, &iLocal_1261);
				iLocal_1714 = 0;
				iLocal_1350 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_394(&iLocal_1612);
			Function_394(&iLocal_1616);
			Function_394(&iLocal_1604);
			iLocal_1349 = iLocal_1260;
			iLocal_1350 = 0;
			Function_339(&Local_4 + 4192, 0);
			Function_339(&Local_4 + 4216, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(&Local_4 + 4216, 0);
			DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
			ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
			ENABLE_CHILD_SECTOR("dlc_frb_zombie02x");
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Function_588(&Local_1263, &iLocal_1349, &iLocal_1350);
			break;
	}
	return;
}

void Function_588(int iParam0, var uParam1, int iParam2) //Position: 0x21380 / 136064
{
	if (Function_242(&iParam0))
	{
		uParam1 = Function_343(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_589();
	}
	return;
}

void Function_589() //Position: 0x213BC / 136124
{
	if (Global_53524.f_164 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
		PRINTNL();
	}
	return;
}

int Function_590(struct<2>[] Param0) //Position: 0x2140D / 136205
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_591(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_591(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_591(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_591(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_591(struct<13> Param0) //Position: 0x21AE6 / 137958
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		DESTROY_OBJECT(&Param0);
	}
	Param0 = CREATE_EVENT_TRAP(&uParam2, iParam3, &uParam1);
	if (!IS_OBJECT_VALID(&Param0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(&Param0, 1);
	Param0.f_8 = iParam3;
	Param0.f_12 = 0;
	Function_80(&Param0 + 12, iParam4);
	return 1;
}

bool Function_592() //Position: 0x21BB5 / 138165
{
	int iVar0;
	
	iVar0 = 1;
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_248(&iLocal_1275))
		{
			iVar0 = 0;
		}
		if (!IS_LAYOUTREF_VALID(&Local_4))
		{
			Function_246();
		}
		if (IS_ACTOR_VALID(Function_264(0, 0, 0, 0, 0, 0, 1, 0)))
		{
			if (!IS_ACTOR_VALID(&bLocal_1658))
			{
				bLocal_1658 = Function_264(1, 1, 0, 0, 0, 0, 1, 0);
				iVar0 = 0;
			}
		}
		if (!Function_593())
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool Function_593() //Position: 0x21C19 / 138265
{
	Function_330(&Local_4 + 8, 1262, 2, 0);
	Function_330(&Local_4 + 8, 372, 2, 0);
	Function_330(&Local_4 + 8, 373, 2, 0);
	Function_330(&Local_4 + 8, 369, 2, 0);
	Function_330(&Local_4 + 8, 370, 2, 0);
	Function_348(&Local_4 + 8, "p_gen_tent01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_tent03x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_bedRollClosed01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_bedRollOpen01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_bottle02x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_bottleBeer01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_canteen01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_can05x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_can03x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_can01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_pot02x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_bucket03x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_carcassSmall01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_barricade01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_flag04x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_crateStack02x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_crateStack01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_crateWeapons03x", 0, 0);
	Function_348(&Local_4 + 8, "p_bat_flourSack01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_crateTnt01x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_crateTnt02x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_campfire03x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_wagonBroken02x", 0, 0);
	Function_348(&Local_4 + 8, "p_gen_package06x", 0, 0);
	Function_348(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing1", 1, 0);
	Function_348(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing2", 1, 0);
	Function_348(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing3", 1, 0);
	Function_348(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing_b1", 1, 0);
	Function_348(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing_b2", 1, 0);
	Function_348(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing_z1", 1, 0);
	Function_348(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/dlc_mexico_crossing_z2", 1, 0);
	Function_348(&Local_4 + 8, "$/content/scripting/gringo/simplegringo/zombiepack_footlocker", 1, 0);
	if (Function_248(&Local_4 + 8))
	{
		return 1;
	}
	return 0;
}

void Function_594() //Position: 0x22183 / 139651
{
	Function_348(&iLocal_1275, "dlc_zombiepack_zombie02", 10, 0);
	Function_330(&iLocal_1275, 1166, 2, 1);
	Function_330(&iLocal_1275, 1167, 2, 1);
	Function_330(&iLocal_1275, 1164, 2, 1);
	Function_348(&iLocal_1275, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_348(&iLocal_1275, "p_gen_crateMultiplayerWeapon01x", 0, 0);
	Function_348(&iLocal_1275, "p_gen_stool02x", 0, 0);
	Function_348(&iLocal_1275, "ptl_base", 5, 0);
	Function_348(&iLocal_1275, "$/content/scripting/gringo/simplegringo/stool_sit_attach_indef", 1, 0);
	return;
}

void Function_595(int iParam0, int iParam1) //Position: 0x222B9 / 139961
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &iParam1;
	return;
}

void Function_596(int iParam0) //Position: 0x222D7 / 139991
{
	Function_597(&Global_43580, iParam0);
	return;
}

void Function_597(var uParam0, int iParam1) //Position: 0x222E5 / 140005
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_598(int iParam0, bool bParam1) //Position: 0x2230D / 140045
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_604(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_242(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_99();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(iParam0);
	Var1 = { StackVal, StackVal, StackVal, (&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_242(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_176();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_201();
	Function_234();
	Function_191("");
	Function_603(0);
	Function_602();
	Function_168();
	Function_167();
	ENABLE_JOURNAL_REPLAY(0);
	Function_601();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_264(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_375(0, 0x40400000);
	}
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(&Global_54076, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_600(13);
	Function_600(14);
	Function_600(25);
	Function_600(24);
	Function_600(12);
	Function_600(27);
	Function_600(26);
	Function_600(15);
	Function_599();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_599() //Position: 0x2274D / 141133
{
	char* cVar0[24];
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&cVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&cVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(&iVar1, &Global_26172))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_26172);
			}
			RELEASE_OBJECT_REF(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&cVar0);
	}
	DESTROY_ITERATOR(&cVar0);
	return;
}

void Function_600(int iParam0) //Position: 0x227D2 / 141266
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_601() //Position: 0x227F2 / 141298
{
	var uVar0;
	
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar0);
	}
	uVar0 = GET_LASSO_TARGET(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DETACH_LASSO(&uVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_602() //Position: 0x22838 / 141368
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_603(int iParam0) //Position: 0x2284E / 141390
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_171())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_604(int iParam0, int iParam1) //Position: 0x22887 / 141447
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_605(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_605(struct<113> Param0) //Position: 0x2290E / 141582
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

bool Function_606(struct<25> Param0) //Position: 0x2296C / 141676
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (Param0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (Param0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_607(&Param0, 1);
			return 1;
		}
	}
	Function_607(&Param0, 0);
	return 0;
}

void Function_607(struct<25> Param0) //Position: 0x229F8 / 141816
{
	if (&bParam1)
	{
		Param0 = 0;
	}
	(&Param0 + 8) = "";
	Param0.f_16 = 4294967295;
	Param0.f_20 = 0;
	Param0.f_24 = 0;
	return;
}

bool Function_608(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x22A23 / 141859
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	char* cVar18[64];
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_607(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_627(&uParam3);
				ITERATE_IN_EVENT_TRAP(&uParam3, &(Param1[iVar02]));
				iVar1 = START_OBJECT_ITERATOR(&uParam3);
				while (IS_OBJECT_VALID(&iVar1))
				{
					iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
					if (IS_EVENT_VALID(&iVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(&iVar2);
							if (IS_OBJECT_VALID(&uVar4))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(&uVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(&iVar2);
							if (IS_PHYSINST_VALID(&uVar5))
							{
								uVar6 = GET_OBJECT_FROM_PHYSINST(&uVar5);
								if (IS_OBJECT_VALID(&uVar6))
								{
									if (GET_OBJECT_TYPE(&uVar6) == 15)
									{
										uVar3 = GET_ACTOR_FROM_OBJECT(&uVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(&uVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								uVar8 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar8))
								{
									iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
									if (IS_ACTOR_VALID(&iVar9))
									{
										if (&iVar9 == &Global_54076)
										{
											iVar7 = 2;
										}
										else if (&iVar9 == GET_MOUNT(&Global_54076))
										{
											iVar7 = 2;
										}
										else if (&iVar9 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								uVar11 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar11))
								{
									iVar12 = GET_ACTOR_FROM_OBJECT(&uVar11);
									if (IS_ACTOR_VALID(&iVar12))
									{
										if (&iVar12 == GET_MOUNT(&Global_54076))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								uVar14 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar14))
								{
									iVar15 = GET_ACTOR_FROM_OBJECT(&uVar14);
									if (IS_ACTOR_VALID(&iVar15))
									{
										if (&iVar15 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(&iVar1))
							{
								iVar16 = 0;
								while (iVar16 <= Param0)
								{
									if (IS_OBJECT_VALID(&(Param0[iVar1615])))
									{
										if ((Param1[iVar02].f_12 && Param0[iVar1615].f_68) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_626(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_626(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_612(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_607(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_611(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_610(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_611(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_609(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_191(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_610(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(&iVar1))
					{
						iVar1 = OBJECT_ITERATOR_NEXT(&uParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
				EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
			}
		}
		iVar0++;
	}
	Function_607(&Param2, 0);
	return 0;
}

void Function_609(char* cParam0) //Position: 0x22E39 / 142905
{
	memcpy(&cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(&cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(&cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(&cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(&cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(&cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(&cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(&cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(&cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_610(struct<25> Param0) //Position: 0x22F2D / 143149
{
	switch (bParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			Param0.f_20 = 1;
			break;
	}
	switch (bParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_46(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_46(&iParam2, 2);
			break;
	}
	Function_46(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_611(bool bParam0) //Position: 0x22FA5 / 143269
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_46(&iVar0, 1);
	Function_46(&iVar0, 2);
	Function_46(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_612(struct<57> Param0) //Position: 0x22FC9 / 143305
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(&iParam2))
	{
		return 0;
	}
	switch (Param0.f_56)
	{
		case 0x0000000F:
			iVar1 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (!IS_ACTOR_VALID(&iVar1))
			{
				return 0;
			}
			return Function_623(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_616(&Param0, &uParam1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_623(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_613(&Param0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_623(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_613(&Param0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_613(int iParam0, bool bParam1) //Position: 0x2313A / 143674
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_615(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_614(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_615(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_614(256);
			}
		}
	}
	return bParam1;
}

bool Function_614(int iParam0) //Position: 0x23276 / 143990
{
	return 2 | iParam0;
}

int Function_615(int iParam0) //Position: 0x23280 / 144000
{
	return 4 | iParam0;
}

int Function_616(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2328A / 144010
{
	if (!IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_622(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_80(&iParam3, 2);
					Function_46(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_614(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_617(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_80(&iParam3, 2);
					Function_46(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_614(16);
		}
	}
	return 0;
}

int Function_617(int iParam0, vector3 vParam1) //Position: 0x23345 / 144197
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_621(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_620(iVar0, 3, 1, bParam3))
			{
				if (!Function_626(&iParam0, 8, 1))
				{
					return Function_619(64, 1024, bParam2);
				}
			}
			return Function_618(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_620(iVar0, 2, 1, bParam3))
			{
				if (!Function_626(&iParam0, 32, 1))
				{
					return Function_619(64, 1024, bParam2);
				}
			}
			return Function_618(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_620(iVar0, 1, 1, bParam3))
			{
				if (!Function_626(&iParam0, 64, 1))
				{
					return Function_619(64, 1024, bParam2);
				}
			}
			return Function_618(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_620(iVar0, 3, 1, bParam3))
			{
				if (!Function_626(&iParam0, 128, 1))
				{
					return Function_619(64, 1024, bParam2);
				}
			}
			return Function_618(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_620(iVar0, 1, 1, bParam3))
			{
				if (!Function_626(&iParam0, 1024, 1))
				{
					return Function_619(64, 1024, bParam2);
				}
			}
			return Function_618(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_620(iVar0, 1, 1, bParam3))
			{
				if (!Function_626(&iParam0, 1024, 1))
				{
					return Function_619(64, 1024, bParam2);
				}
			}
			return Function_618(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_618(int iParam0, int iParam1, bool bParam2) //Position: 0x2350D / 144653
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_619(int iParam0, int iParam1, bool bParam2) //Position: 0x23522 / 144674
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_620(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x23537 / 144695
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_621(int iParam0) //Position: 0x23554 / 144724
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*&iParam0 + 72)[iVar0])
		{
			iVar2++;
		}
		if ((*&iParam0 + 72)[iVar0] > fVar4)
		{
			fVar4 = (*&iParam0 + 72)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*&iParam0 + 72)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_622(var uParam0, vector3 vParam1) //Position: 0x235C7 / 144839
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_621(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_620(iVar0, 3, 1, bParam2))
			{
				if (!Function_626(&uParam0, 8, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000009:
			if (Function_620(iVar0, 3, 1, bParam2))
			{
				if (!Function_626(&uParam0, 8, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x0000006E:
			if (Function_620(iVar0, 2, 1, bParam2))
			{
				if (!Function_626(&uParam0, 16, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x0000005B:
			if (Function_620(iVar0, 2, 1, bParam2))
			{
				if (!Function_626(&uParam0, 32, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000031:
			if (Function_620(iVar0, 1, 1, bParam2))
			{
				if (!Function_626(&uParam0, 64, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000007:
			if (Function_620(iVar0, 3, 1, bParam2))
			{
				if (!Function_626(&uParam0, 128, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000008:
			if (Function_620(iVar0, 2, 1, bParam2))
			{
				if (!Function_626(&uParam0, 256, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000014:
			if (Function_620(iVar0, 1, 1, bParam2))
			{
				if (!Function_626(&uParam0, 512, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000018:
			if (Function_620(iVar0, 1, 1, bParam2))
			{
				if (!Function_626(&uParam0, 512, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000057:
			if (Function_620(iVar0, 1, 1, bParam2))
			{
				if (!Function_626(&uParam0, 1024, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000058:
			if (Function_620(iVar0, 1, 1, bParam2))
			{
				if (!Function_626(&uParam0, 1024, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_623(struct<65> Param0) //Position: 0x237F0 / 145392
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (&iParam2 == &iParam3)
	{
		bVar0 = true;
	}
	switch (Param0.f_60)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_622(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_626(&Param0, 2, 1))
					{
						return Function_615(8);
					}
					return Function_614(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_626(&Param0, 4, 1))
					{
						return Function_615(16);
					}
					return Function_614(16);
				}
			}
			if (Param0.f_64)
			{
				if (GET_MOST_RECENT_MOUNT(&iParam2) == &iParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(&iParam3))
						{
							return Function_617(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_626(&Param0, 2, 1))
						{
							return Function_615(128);
						}
						return Function_614(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_626(&Param0, 4, 1))
						{
							return Function_615(256);
						}
						return Function_614(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_617(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_626(&Param0, 2, 1))
					{
						return Function_615(8);
					}
					return Function_614(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_626(&Param0, 4, 1))
					{
						return Function_615(16);
					}
					return Function_614(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_625(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_626(&Param0, 2, 1))
					{
						return Function_615(8);
					}
					return Function_614(8);
				}
				if (!Function_626(&Param0, 4, 1))
				{
					return Function_615(16);
				}
				return Function_614(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_617(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_80(&iParam4, 2);
								Function_46(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_624(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_614(128);
							}
							if (!Function_626(&Param0, 2, 1))
							{
								return Function_615(8);
							}
							return Function_614(8);
						}
						if (iParam4 == 2)
						{
							if (Function_624(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_614(256);
							}
							if (!Function_626(&Param0, 4, 1))
							{
								return Function_615(16);
							}
							return Function_614(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool Function_624(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x23AD6 / 146134
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&iParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_625(int iParam0, vector3 vParam1) //Position: 0x23BA4 / 146340
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_621(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_620(iVar0, 2, 1, bParam2))
			{
				if (!Function_626(&iParam0, 16, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x0000005B:
			if (Function_620(iVar0, 2, 1, bParam2))
			{
				if (!Function_626(&iParam0, 32, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000057:
			if (Function_620(iVar0, 1, 1, bParam2))
			{
				if (!Function_626(&iParam0, 1024, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		case 0x00000058:
			if (Function_620(iVar0, 1, 1, bParam2))
			{
				if (!Function_626(&iParam0, 1024, 1))
				{
					return Function_615(64);
				}
			}
			return Function_614(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_626(struct<69> Param0) //Position: 0x23CC6 / 146630
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, bParam1);
}

int Function_627(bool bParam0) //Position: 0x23CF0 / 146672
{
	if (IS_ITERATOR_VALID(&bParam0))
	{
		ITERATE_EVERYWHERE(&bParam0);
		ITERATE_ON_PARTIAL_NAME(&bParam0, Function_58());
		ITERATE_ON_PARTIAL_MODEL_NAME(&bParam0, Function_58());
		ITERATE_ON_OBJECT_TYPE(&bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_628(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x23D26 / 146726
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_629(int iParam0) //Position: 0x23D53 / 146771
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

