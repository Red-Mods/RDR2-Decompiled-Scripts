//Decompiled with MagicRDR v1.0
//Function Count : 603
//Statics Count : 1648
//Natives Count : 802
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<2769> Local_6 = { 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_1152 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_1164 = 99;
	iLocal_1165 = 6;
	Local_1166 = 1000;
	while (Function_267())
	{
		Function_222();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	DECOR_REMOVE(&Global_54076, "GringoNoQuit");
	FREE_FROM_HOGTIE(&Global_54076);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		AI_GOAL_LOOK_AT_ACTOR_NEW(&iLocal_1189, &Global_54076, 0,5f, 0);
	}
	AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	if (IS_ACTOR_HOGTIED(&iLocal_1189))
	{
		FREE_FROM_HOGTIE(&iLocal_1189);
	}
	if (IS_ACTOR_VALID(&iLocal_1189))
	{
		EQUIP_ACCESSORY(&iLocal_1189, 0, 1);
	}
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	if (IS_ACTOR_VALID(&Local_6 + 1208[02]))
	{
		EQUIP_ACCESSORY(&Local_6 + 1208[02], 0, 1);
	}
	Function_221();
	Function_220();
	Function_219();
	Function_218();
	Function_214(&iLocal_1268);
	Function_214(&iLocal_1218);
	DISABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
	DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
	DISABLE_CHILD_SECTOR("blk_policeStation_int_01x");
	DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
	ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
	SET_DUST_LEVEL_MODIFIER(0);
	if (IS_OBJECT_VALID(&uLocal_1393))
	{
		if (DECOR_CHECK_EXIST(&uLocal_1393, "bIgnoreStuckState"))
		{
			DECOR_REMOVE(&uLocal_1393, "bIgnoreStuckState");
		}
	}
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1630))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1630);
	}
	HUD_CLEAR_HELP_QUEUE();
	if (IS_BLIP_VALID(&uLocal_1399))
	{
		REMOVE_BLIP(&uLocal_1399);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_1189);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_1191);
	Function_211(10, 1, 0, 1, 1);
	Function_210(&iLocal_1150);
	Function_210(&Local_6);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1632, 0);
	DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1634, 0);
	Function_209();
	Function_208();
	Function_178(bLocal_1179, 1, 1, 1, 1, 1, 1, 1);
	Function_214(&iLocal_1208);
	Function_214(&iLocal_1268);
	Function_214(&iLocal_1218);
	Function_221();
	Function_220();
	Function_219();
	Function_218();
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_1350))
	{
		DESTROY_ITERATOR(&uLocal_1350);
	}
	RELEASE_LAYOUT_REF(&iLocal_1150);
	if (bLocal_1178)
	{
		Function_26(Local_1152, 1, 0, 1, 0);
	}
	else if (bLocal_1179)
	{
		Function_22(Local_1152);
	}
	else
	{
		Function_2(Local_1152);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x2DA / 730
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x2FB / 763
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x318 / 792
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x33B / 827
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x352 / 850
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

void Function_7(int iParam0) //Position: 0x3F4 / 1012
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x417 / 1047
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

void Function_9() //Position: 0x461 / 1121
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x47A / 1146
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x4CD / 1229
{
	struct<4> Var0;
	
	if (!Function_20(iParam1))
	{
		return;
	}
	switch (Function_17(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x5F7 / 1527
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

bool Function_13() //Position: 0x631 / 1585
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x64C / 1612
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x659 / 1625
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x679 / 1657
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x690 / 1680
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x6AB / 1707
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8F2 / 2290
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x91E / 2334
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

bool Function_21(int iParam0) //Position: 0x942 / 2370
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x957 / 2391
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x975 / 2421
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	iVar0 = Function_17(iParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0xA1B / 2587
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

struct<24> Function_25(char* cParam0) //Position: 0xA5A / 2650
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xCB0 / 3248
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(iParam0) == 1)
	{
		iVar2 = Function_15(iParam0);
		Function_170(&(Global_6667[iVar228]));
		Function_169(4194304);
		if (&bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_115(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (&bParam1)
		{
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_39(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_31(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(iParam0) == 1)
		{
			iVar2 = Function_15(iParam0);
			if (iVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_27();
}

void Function_27() //Position: 0xDA4 / 3492
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_28(int iParam0, bool bParam1) //Position: 0xDD6 / 3542
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
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

int Function_29(int iParam0) //Position: 0xE14 / 3604
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xE2E / 3630
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xE44 / 3652
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1141 / 4417
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0) //Position: 0x11B6 / 4534
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x11F0 / 4592
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
		if (Function_37(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x126C / 4716
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x127F / 4735
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

int Function_37(int iParam0) //Position: 0x1320 / 4896
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&bVar1, 2147483648);
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x135D / 4957
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1373 / 4979
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_84(iParam0);
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
						switch (Function_15(iParam0))
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
			Function_42(1);
			Function_41(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_40(iParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x15D1 / 5585
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x160F / 5647
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_42(bool bParam0) //Position: 0x164E / 5710
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_73();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_38(&Global_99144, 1);
		Function_38(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x16A3 / 5795
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51(0);
	Function_51(0);
	Function_48();
	Function_47();
	Function_46();
	Function_45();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x16EE / 5870
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

void Function_45() //Position: 0x17F4 / 6132
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

void Function_46() //Position: 0x1827 / 6183
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_47() //Position: 0x19BA / 6586
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_48() //Position: 0x1B73 / 7027
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1B81 / 7041
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
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
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
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

var Function_50() //Position: 0x1D9E / 7582
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1DB3 / 7603
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
					iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E5A / 7770
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x20F6 / 8438
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_54(), &Var9);
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

var Function_54() //Position: 0x2734 / 10036
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x273D / 10045
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x274E / 10062
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0) //Position: 0x2845 / 10309
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2860 / 10336
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x28C7 / 10439
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x28D9 / 10457
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x28EB / 10475
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x2A1F / 10783
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2A2E / 10798
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2A67 / 10855
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2AA4 / 10916
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C3E / 11326
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

int Function_67(bool bParam0) //Position: 0x2E82 / 11906
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2EC3 / 11971
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2F4C / 12108
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2FE3 / 12259
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x3062 / 12386
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x309F / 12447
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_73() //Position: 0x32AB / 12971
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_74(StackVal, Var0))
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

bool Function_74(char* cParam0) //Position: 0x3362 / 13154
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x337A / 13178
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &uParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
			Function_38(&Global_99144, 1);
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
		Function_77(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x3472 / 13426
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x347C / 13436
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x348D / 13453
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x34A3 / 13475
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
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x356F / 13679
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x358C / 13708
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
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
	if (!Function_82(Global_46760[2]))
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
	if (!Function_82(Global_46760[1]))
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
	if (!Function_82(Global_46796[1]))
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
	if (!Function_82(Global_46796[3]))
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
	if (!Function_82(Global_46796[2]))
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
	if (!Function_82(Global_46796[4]))
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
	if (!Function_82(Global_46816[0]))
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
	if (!Function_82(Global_46816[1]))
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
	if (!Function_82(Global_46816[2]))
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
	if (!Function_82(Global_46838[0]))
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
	if (!Function_82(Global_46850[0]))
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
	if (!Function_82(Global_46850[1]))
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
	if (!Function_82(Global_46850[2]))
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
	if (!Function_82(Global_46866[0]))
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
	if (!Function_82(Global_46866[1]))
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
	if (!Function_82(Global_46866[2]))
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
	if (!Function_82(Global_46894[2]))
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
	if (!Function_82(Global_46894[3]))
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
	if (!Function_82(Global_46894[0]))
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
	if (!Function_82(Global_46914[0]))
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
	if (!Function_82(Global_46926[2]))
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
	if (!Function_82(Global_46926[1]))
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
	if (!Function_82(Global_46926[0]))
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
	if (!Function_82(Global_46838[1]))
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
	if (!Function_82(Global_46894[1]))
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
	Function_77(&Global_99144, 2);
	Function_38(&Global_99144, 1);
	iParam1 = 0;
	if (Function_74(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x3DB8 / 15800
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3DF3 / 15859
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3E02 / 15874
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	switch (Function_17(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_87(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_88(4, 19);
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
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(iParam0) == 0)
			{
				if (Function_87(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_87(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_88(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_88(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 9);
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

bool Function_85(int iParam0) //Position: 0x42DF / 17119
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x42F5 / 17141
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x4314 / 17172
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x432E / 17198
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4398 / 17304
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x45C0 / 17856
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

void Function_91() //Position: 0x465E / 18014
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_92() //Position: 0x47C0 / 18368
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x4840 / 18496
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B97 / 19351
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

int Function_95(int iParam0) //Position: 0x4C1F / 19487
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4C39 / 19513
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4C64 / 19556
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C92 / 19602
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
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_113(iParam0);
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
				bVar0 = (Function_67(42) - Global_53524.f_168);
				bVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				bVar3 = (Function_67(49) - Global_53524.f_180);
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
				bVar4 = (Function_67(355) - Global_53524.f_168);
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
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F2E / 20270
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
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
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_35(Global_119936, 4))
			{
				Function_32(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
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

void Function_100(int iParam0, int iParam1) //Position: 0x5102 / 20738
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_101(int iParam0, char* cParam1) //Position: 0x536C / 21356
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
	Function_93(iParam0, &cParam1, 0, 1);
	iVar1 = Function_102();
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

int Function_102() //Position: 0x54FC / 21756
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x559D / 21917
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
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x565B / 22107
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

var Function_105(int iParam0) //Position: 0x56C1 / 22209
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5750 / 22352
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x58FC / 22780
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

void Function_108() //Position: 0x5941 / 22849
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5957 / 22871
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5997 / 22935
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x59D7 / 22999
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x59E6 / 23014
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

int Function_113(int iParam0) //Position: 0x5BAE / 23470
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

var Function_114() //Position: 0x5C43 / 23619
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5C68 / 23656
{
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x6137 / 24887
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_106(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_35(Global_119936, 1))
				{
					Function_32(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_101(2, Function_117(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_101(2, Function_117(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			break;
	}
	Function_100(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_117(int iParam0) //Position: 0x645E / 25694
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6501 / 25857
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_119(int iParam0, bool bParam1) //Position: 0x66FE / 26366
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_107(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x68A9 / 26793
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_67(597) + Function_67(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x697B / 27003
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
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
			Function_167(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_164(Global_46816[0]);
			Function_154(0);
			Function_152(2, 1);
			Function_152(0, 1);
			Function_152(1, 1);
			break;
		
		case 0x00000003:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_164(Global_46816[0]);
			Function_164(Global_46760[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_152(3, 1);
			break;
		
		case 0x00000005:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46816[0]);
			Function_152(39, 1);
			break;
		
		case 0x00000007:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_149())
				{
					if (!Function_148(4))
					{
						Function_138(4, 0, 0, 1, 0);
					}
				}
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_164(Global_46760[0]);
			Function_164(Global_46816[2]);
			Function_137(&(Global_43791[Global_46816[2]]), 32768);
			Function_136(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_46760[0]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_164(Global_46760[1]);
			Function_164(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_164(Global_46838[0]);
			Function_164(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_164(Global_46796[5]);
			Function_164(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[4]);
			Function_135(&Global_119935, 0x2000000);
			Function_135(&Global_119935, 0x4000000);
			Function_135(&Global_119935, 4096);
			Function_135(&Global_119935, 8);
			Function_135(&Global_119935, 8388608);
			Function_135(&Global_119935, 524288);
			Function_135(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_43791[Global_46760[4]]), 256);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_46760[0]);
			Function_164(Global_46760[5]);
			Function_162(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_46796[3]);
			Function_137(&(Global_43791[Global_46796[3]]), 32768);
			Function_136(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_43791[Global_46838[1]]), 32768);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_162(12, &bParam2, 4);
			Function_136(&(Global_43791[Global_46838[1]]), 256);
			Function_164(Global_46816[3]);
			Function_164(Global_46866[0]);
			Function_164(Global_46850[0]);
			Function_154(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_152(34, 1);
			Function_152(44, 1);
			Function_152(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_164(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_164(Global_46866[0]);
			Function_164(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_164(Global_46850[0]);
			Function_164(Global_46866[0]);
			Function_164(Global_46866[1]);
			Function_164(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, &bParam2, 3);
			Function_150(23, 1);
			Function_164(Global_46850[0]);
			Function_164(Global_46850[2]);
			Function_137(&(Global_43791[Global_46850[2]]), 32768);
			Function_136(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, &bParam2, 4);
			Function_164(Global_46850[0]);
			Function_164(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, &bParam2, 3);
			Function_150(24, 1);
			Function_164(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_164(Global_46850[0]);
			Function_164(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_164(Global_46866[12]);
			Function_164(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_164(Global_46866[12]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_162(25, &bParam2, 10);
			Function_164(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_162(13, &bParam2, 4);
			Function_164(Global_46866[2]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_164(Global_46850[0]);
			Function_154(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_152(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, &bParam2, 4);
			Function_164(Global_46914[0]);
			Function_164(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_164(Global_46914[0]);
			Function_164(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_162(17, &bParam2, 4);
			Function_164(Global_46926[0]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_133(15))
				{
					Function_128(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_136(&(Global_43791[Global_46914[1]]), 256);
			Function_154(11);
			Function_164(Global_46914[1]);
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_164(Global_46914[1]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_164(Global_46914[1]);
			Function_122(11);
			Function_154(12);
			Global_26200[1114].f_40 = 0;
			Function_152(56, 1);
			if (!&bParam2)
			{
				if (!Function_148(9))
				{
					Function_138(9, 0, 0, 0, 0);
				}
				if (!Function_148(10))
				{
					Function_138(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_122(int iParam0) //Position: 0x7296 / 29334
{
	var uVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_127(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_127(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_123(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7413 / 29715
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				Var1 = Function_125(StackVal);
				if (Function_124(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x751E / 29982
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x754A / 30026
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_126(vector3 vParam0) //Position: 0x75A1 / 30113
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

void Function_127(var uParam0, int iParam1) //Position: 0x75EF / 30191
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x764A / 30282
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0))
	{
		if (!Function_148(bParam0))
		{
			Function_138(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_131(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
	}
	return;
}

void Function_129() //Position: 0x77EB / 30699
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x77F1 / 30705
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

void Function_131(bool bParam0, int iParam1) //Position: 0x78A0 / 30880
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x78F5 / 30965
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x790B / 30987
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x795C / 31068
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

void Function_135(var uParam0, int iParam1) //Position: 0x7989 / 31113
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x799A / 31130
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x79B4 / 31156
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x79C5 / 31173
{
	char* cVar0[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_147(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_148(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_139(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7B21 / 31521
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

bool Function_140() //Position: 0x7BAC / 31660
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7BD9 / 31705
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_143(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7D89 / 32137
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_143(var uParam0, int iParam1) //Position: 0x7DE0 / 32224
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7E05 / 32261
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7E5B / 32347
{
	int iVar0;
	
	if (!Function_132(bParam0))
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

bool Function_146(bool bParam0) //Position: 0x7EBA / 32442
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7EC6 / 32454
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7EE2 / 32482
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x7F34 / 32564
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7F64 / 32612
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7FD9 / 32729
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x8052 / 32850
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x80C5 / 32965
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x8120 / 33056
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_161(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_161(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_129();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_139("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x83E0 / 33760
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_147(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_134(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_139(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_145(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_131(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_157();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_156(3, bParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x867F / 34431
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_157() //Position: 0x86EE / 34542
{
	if (Function_132(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_160(Global_42827);
			(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_158(int iParam0, int iParam1) //Position: 0x876E / 34670
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_28(6, 0) || Function_28(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_159(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_28(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_159(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_28(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_159(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_159(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_28(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_159(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_159(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_159(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_28(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_74(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_74(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_74(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_159(int iParam0) //Position: 0x93D1 / 37841
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x93E6 / 37862
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

void Function_161(var uParam0, int iParam1) //Position: 0x9435 / 37941
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x948D / 38029
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_167(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_163(int iParam0, int iParam1) //Position: 0x9500 / 38144
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9514 / 38164
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_166(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_89(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_88(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_88(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_165(int iParam0) //Position: 0x9605 / 38405
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_85(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_166(var uParam0, int iParam1) //Position: 0x965D / 38493
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x967A / 38522
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x96D4 / 38612
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x96E6 / 38630
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

void Function_170(struct<185> Param0) //Position: 0x971A / 38682
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x9785 / 38789
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
		uVar0 = MAKE_TIME_OF_DAY(iParam0, &uParam1, &iParam2);
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(int iParam0, int iParam1, bool bParam2) //Position: 0x986F / 39023
{
	int iVar0;
	
	Function_174(iParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, &iParam1);
	Function_173();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = iParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_173() //Position: 0x99EE / 39406
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x99FA / 39418
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

void Function_175() //Position: 0x9A40 / 39488
{
	Function_177();
	if (IS_LAYOUTREF_VALID(&iLocal_1010))
	{
		Function_176();
	}
	return;
}

void Function_176() //Position: 0x9A56 / 39510
{
	Function_214(&iLocal_1010 + 8);
	RELEASE_LAYOUT_REF(&iLocal_1010);
	return;
}

void Function_177() //Position: 0x9A6B / 39531
{
	Function_214(&Local_6 + 8);
	Function_214(&Local_6 + 320);
	Function_214(&Local_6 + 680);
	Function_214(&Local_6 + 704);
	Function_214(&Local_6 + 808);
	RELEASE_LAYOUT_REF(&Local_6);
	return;
}

void Function_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9A9E / 39582
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_207());
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
	Function_206();
	CLEAR_PRINTED_OBJECTIVE();
	Function_205();
	Function_203(0);
	Function_202();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_201();
	Function_200();
	Function_206();
	ENABLE_JOURNAL_REPLAY(1);
	Function_199(1);
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
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
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
		Function_198(&Global_54076);
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
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_195(Global_42825);
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
	Function_194();
	Function_193(1178687);
	Function_191(33039);
	Function_190(0x218003f);
	Function_189(4194560);
	Function_188();
	Function_187();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_184(0, 1, 1);
	}
	else
	{
		Function_184(0, 1, 1);
	}
	Function_183();
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
	Function_179();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_179() //Position: 0x9CAA / 40106
{
	int iVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			iVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_182() > 3)
		{
			iVar0 *= 2;
		}
		Function_180(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_180(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9D01 / 40193
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_181(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_181(bool bParam0) //Position: 0x9D51 / 40273
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_182() //Position: 0x9D7A / 40314
{
	return Global_21369.f_248;
}

void Function_183() //Position: 0x9D85 / 40325
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_136(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_184(int iParam0, bool bParam1, int iParam2) //Position: 0x9DAF / 40367
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
		if (Function_85(Global_43789))
		{
			Function_137(&(Global_43791[Global_43789]), 131072);
			Function_136(&(Global_43791[Global_43789]), 2097152);
			Function_185(Global_43789);
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
				if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_136(&(Global_43791[iVar0]), 2097155);
					Function_137(&(Global_43791[iVar0]), 262144);
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

void Function_185(int iParam0) //Position: 0x9EBB / 40635
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_186())
			{
				return;
			}
		}
		if (!Function_166(&(Global_43791[iParam0]), 2048))
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

bool Function_186() //Position: 0x9F3A / 40762
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_187() //Position: 0x9FA3 / 40867
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

void Function_188() //Position: 0x9FC9 / 40905
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

void Function_189(int iParam0) //Position: 0x9FEF / 40943
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_190(int iParam0) //Position: 0xA00C / 40972
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_191(int iParam0) //Position: 0xA01F / 40991
{
	Function_192(&Global_43580, iParam0);
	return;
}

void Function_192(var uParam0, int iParam1) //Position: 0xA02D / 41005
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_193(bool bParam0) //Position: 0xA04C / 41036
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_194() //Position: 0xA079 / 41081
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

void Function_195(int iParam0) //Position: 0xA0F1 / 41201
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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
		Function_196(78, 1, 1);
		if (!Function_35(Global_119935, 64))
		{
			Function_32(&Global_54076, 64, 2, 0);
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
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_196(bool bParam0, bool bParam1, int iParam2) //Position: 0xA227 / 41511
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_197(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_197(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_197(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_197(bool bParam0) //Position: 0xA275 / 41589
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

void Function_198(int iParam0) //Position: 0xA369 / 41833
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

void Function_199(bool bParam0) //Position: 0xA3EC / 41964
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
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_200() //Position: 0xA463 / 42083
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

void Function_201() //Position: 0xA4A7 / 42151
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

void Function_202() //Position: 0xA4EB / 42219
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_203(int iParam0) //Position: 0xA501 / 42241
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_204())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_204() //Position: 0xA541 / 42305
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

void Function_205() //Position: 0xA566 / 42342
{
	Global_15862 = 0.0f;
	return;
}

void Function_206() //Position: 0xA570 / 42352
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

int Function_207() //Position: 0xA59B / 42395
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_208() //Position: 0xA5B8 / 42424
{
	if (VMAG(*(&Global_99148 + 48)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_99148.f_20 < 0.0f)
	{
		Global_99148.f_8 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, Global_99148.f_12, Global_99148.f_20);
		Global_99148.f_20 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
		}
	}
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 4;
	return;
}

void Function_209() //Position: 0xA6EA / 42730
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_210(int iParam0) //Position: 0xA6F3 / 42739
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_211(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA75B / 42843
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
		Function_213(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, 1);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_212(&Global_15402[iParam014] + 8);
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
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", 1);
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

void Function_212(var uParam0) //Position: 0xAA9D / 43677
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_213(int iParam0) //Position: 0xAAD0 / 43728
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_214(int iParam0) //Position: 0xAAE7 / 43751
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_215(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_215(struct<2>[] Param0, int iParam1) //Position: 0xAB0F / 43791
{
	if (Function_217(&(Param0[iParam12]), 4))
	{
		if (Function_217(&(Param0[iParam12]), 1))
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
			Function_216(&(Param0[iParam12]), 1);
			Function_216(&(Param0[iParam12]), 2);
			Function_216(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_216(struct<13> Param0) //Position: 0xAC5A / 44122
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_217(struct<13> Param0) //Position: 0xAC77 / 44151
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_218() //Position: 0xAC95 / 44181
{
	Function_214(&Local_6 + 808);
	return;
}

void Function_219() //Position: 0xACA3 / 44195
{
	Function_214(&Local_6 + 704);
	return;
}

void Function_220() //Position: 0xACB1 / 44209
{
	Function_214(&Local_6 + 680);
	return;
}

void Function_221() //Position: 0xACBF / 44223
{
	Function_214(&Local_6 + 320);
	return;
}

void Function_222() //Position: 0xACCD / 44237
{
	var uVar0[9];
	int iVar10;
	
	if (Function_266())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02";
		uVar0[4] = "Stage 03";
		uVar0[5] = "Stage 04";
		uVar0[6] = "Last Stage";
		uVar0[7] = "Roll the logs";
		uVar0[8] = "end cutscene";
		iVar10 = Function_252(&uLocal_1181, &uVar0, &Local_1152 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_251(&iVar10, &iLocal_1164, &iLocal_1165, &Local_1166))
		{
			Function_244();
			Function_243();
		}
		if (iVar10 == 0)
		{
			Function_244();
			Function_243();
			Function_242(&bLocal_1178, 8);
		}
		else if (iVar10 == 1)
		{
			Function_244();
			Function_243();
			Function_238(iLocal_1164);
			Function_234(StackVal, 5, &bLocal_1179, &iLocal_1164, Function_240(iLocal_1164), Function_238(iLocal_1164), 0);
		}
		else if (iVar10 == 2)
		{
			Function_244();
			Function_243();
			Function_229(&bLocal_1180, 4);
		}
		else if (iVar10 == 3)
		{
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227();
			Function_225(&iLocal_1352);
			iLocal_1164 = 1;
			iLocal_1165 = 0;
			Local_1166 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227();
			Function_225(&iLocal_1352);
			iLocal_1164 = 2;
			iLocal_1165 = 0;
			Local_1166 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_227();
			Function_225(&iLocal_1352);
			iLocal_1164 = 3;
			iLocal_1165 = 0;
			Local_1166 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_244();
			Function_243();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_225(&iLocal_1352);
			iLocal_1164 = 101;
			iLocal_1165 = 0;
			Local_1166 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_244();
			Function_243();
			Function_224();
		}
		else if (iVar10 == 8)
		{
			Function_244();
			Function_243();
			Function_223(&Local_6 + 1840);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_6 + 1184[02], *(&Local_6 + 3528), 1, 1, 1);
			TASK_FOLLOW_PATH_FROM_POINT(&Local_6 + 1208[02], &Local_6 + 3960, 2, 28, 0, 0, 1, 0);
			iLocal_1165 = 9;
		}
	}
	return;
}

void Function_223(bool bParam0) //Position: 0xAF35 / 44853
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

void Function_224() //Position: 0xAF83 / 44931
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	Var4 = Vector(0.0f, 0.0f, 0.0f);
	iVar6 = Vector(0.0f, 0.0f, 0.0f);
	GET_OBJECT_AXIS(&Local_6 + 1184[02], &Var0, 0);
	GET_OBJECT_AXIS(&Local_6 + 1184[02], &Var2, 2);
	GET_OBJECT_AXIS(&Local_6 + 1184[02], &Var4, 1);
	iVar6 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var4, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var0, Vector(Var2, StackVal, StackVal) * Vector(0,25f, 0,25f, 0,25f), StackVal) * Vector(-0,07f, -0,07f, -0,07f), StackVal, StackVal), StackVal) * Vector(-0,07f, -0,07f, -0,07f), StackVal, StackVal);
	SET_PROP_ANGULAR_VELOCITY_DEGS(GET_PHYSINST_FROM_ACTOR(&Local_6 + 1184[02]), &iVar6);
	GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_GRINGO_FROM_OBJECT(&uLocal_1393));
	return;
}

void Function_225(int iParam0) //Position: 0xB018 / 45080
{
	Function_226(&iParam0, 0.0f);
	return;
}

void Function_226(vector3 vParam0) //Position: 0xB025 / 45093
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_227() //Position: 0xB04A / 45130
{
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
	{
		GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(&Global_54076));
	}
	Function_214(&iLocal_1218);
	Function_228(0);
	AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&Local_6 + 1208[02], 1);
	return;
}

void Function_228(int iParam0) //Position: 0xB07F / 45183
{
	iParam0 = iParam0;
	return;
}

void Function_229(bool bParam0, int iParam1) //Position: 0xB089 / 45193
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(&iParam1);
	bParam0 = 1;
	return;
}

void Function_230(int iParam0) //Position: 0xB0AE / 45230
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_233("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_232(2) || Function_232(8)) || Function_232(9)) || Function_232(10))
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
		Function_233("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_233("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_233("");
	}
	else if (iParam0 == 8)
	{
		Function_231();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_231();
	}
	return;
}

void Function_231() //Position: 0xB1A5 / 45477
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_232(int iParam0) //Position: 0xB1B1 / 45489
{
	int iVar0;
	
	if (!Function_30(iParam0))
	{
		return 0;
	}
	iVar0 = Function_29(iParam0);
	if (!Function_20(Function_29(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_233(char* cParam0) //Position: 0xB1E7 / 45543
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_234(int iParam0, bool bParam1, bool bParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB253 / 45651
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (bParam2 != 100)
	{
		Function_235(StackVal, Param4, uParam3, &iParam6);
		Function_230(iParam0);
		bParam1 = 1;
		bParam2 = 100;
	}
}

void Function_235(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB294 / 45716
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_237(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_236(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_236(int iParam0) //Position: 0xB316 / 45846
{
	if (!Function_85(iParam0))
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

var Function_237(struct<2> Param0, bool bParam2) //Position: 0xB7C4 / 47044
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

struct<8> Function_238(bool bParam0) //Position: 0xB830 / 47152
{
	Function_239(bParam0 + 1);
	return StackVal, Function_239(bParam0 + 1);
}

struct<8> Function_239(bool bParam0) //Position: 0xB83D / 47165
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal, *(&Local_6 + 2376[03]);
			break;
		
		case 0x00000001:
			return StackVal, *(&Local_6 + 2440[03]);
			break;
		
		case 0x00000002:
			return StackVal, *(&Local_6 + 2576[03]);
			break;
		
		case 0x00000003:
			return StackVal, *(&Local_6 + 2688[13]);
			break;
		
		case 0x00000004:
		case 0x00000065:
			return StackVal, *(&Local_6 + 3416);
			break;
	}
	PRINTSTRING("Tried to pass in SID ");
	PRINTINT(bParam0);
	PRINTNL();
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal, *(&Local_6 + 2376[03]);
}

int Function_240(bool bParam0) //Position: 0xB942 / 47426
{
	return Function_241(bParam0 + 1);
}

int Function_241(bool bParam0) //Position: 0xB94F / 47439
{
	switch (bParam0)
	{
		case 0x00000000:
			return StackVal;
			break;
		
		case 0x00000001:
			return StackVal;
			break;
		
		case 0x00000002:
			return StackVal;
			break;
		
		case 0x00000003:
			return StackVal;
			break;
		
		case 0x00000004:
		case 0x00000065:
			return StackVal;
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal;
}

void Function_242(bool bParam0, int iParam1) //Position: 0xBA3D / 47677
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(&iParam1);
	bParam0 = 1;
	return;
}

void Function_243() //Position: 0xBA62 / 47714
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_244() //Position: 0xBA77 / 47735
{
	Function_246();
	Function_245(10, 3);
	return;
}

void Function_245(int iParam0, int iParam1) //Position: 0xBA86 / 47750
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

void Function_246() //Position: 0xBBD3 / 48083
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_250())
	{
		Function_249(10, 3);
	}
	else
	{
		Function_247();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_247() //Position: 0xBC1E / 48158
{
	Function_248(25, 2);
	return;
}

void Function_248(int iParam0, int iParam1) //Position: 0xBC2A / 48170
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

void Function_249(int iParam0, int iParam1) //Position: 0xBE56 / 48726
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

bool Function_250() //Position: 0xBFA3 / 49059
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

bool Function_251(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC00B / 49163
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_244();
			Function_243();
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
		Function_233("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_252(struct<17> Param0) //Position: 0xC0BA / 49338
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_265(&Var12, &Var0);
	uVar15 = Function_264(uParam1, &Var12);
	Function_263(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_262(&Param0, uVar15);
	Function_260(StackVal, &Param0, Var12.f_12);
	Function_258(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_257(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_254(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_253(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_253(int iParam0, int iParam1, int iParam2) //Position: 0xC1AE / 49582
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

bool Function_254(struct<17> Param0) //Position: 0xC20E / 49678
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
				Function_256(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_256(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_253(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_255(Param1.f_64);
	}
	else
	{
		Function_255(Param1.f_64);
	}
	return 0;
}

void Function_255(bool bParam0) //Position: 0xC3A1 / 50081
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

void Function_256(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC3DF / 50143
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

var Function_257(int iParam0, struct<21> Param1) //Position: 0xC495 / 50325
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_258(vector3 vParam0) //Position: 0xC4BC / 50364
{
	switch (Function_259())
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

int Function_259() //Position: 0xC568 / 50536
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

void Function_260(vector3 vParam0) //Position: 0xC5A4 / 50596
{
	switch (Function_261(&vParam0))
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

int Function_261(bool bParam0) //Position: 0xC64D / 50765
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_262(struct<21> Param0) //Position: 0xC76D / 51053
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

void Function_263(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xC927 / 51495
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

var Function_264(int iParam0, struct<13> Param1) //Position: 0xC9C3 / 51651
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_265(struct<17> Param0) //Position: 0xC9DF / 51679
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

bool Function_266() //Position: 0xCA39 / 51769
{
	return Global_47307;
}

bool Function_267() //Position: 0xCA42 / 51778
{
	if (IS_EXITFLAG_SET())
	{
		Function_238(iLocal_1164);
		Function_234(StackVal, 4, &bLocal_1179, &iLocal_1164, Function_240(iLocal_1164), Function_238(iLocal_1164), 0);
		return 0;
	}
	Function_602(StackVal, StackVal, StackVal, StackVal, StackVal, Local_1152, iLocal_1164, iLocal_1165, &bLocal_1180, &bLocal_1178, &bLocal_1179);
	Function_600();
	Function_599(4);
	if (iLocal_1164 == 99 && iLocal_1164 == 100)
	{
		Function_598();
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_238(iLocal_1164);
			Function_234(StackVal, 1, &bLocal_1179, &iLocal_1164, Function_240(iLocal_1164), Function_238(iLocal_1164), 0);
			return 1;
		}
		if (Function_597(2048))
		{
			Function_238(iLocal_1164);
			Function_234(StackVal, 3, &bLocal_1179, &iLocal_1164, Function_240(iLocal_1164), Function_238(iLocal_1164), 0);
			return 1;
		}
		if (Function_577(&Local_1466, &uLocal_1412, &uLocal_1618, &uLocal_1350, iLocal_1384))
		{
			if (Function_575(&uLocal_1618))
			{
				Function_238(iLocal_1164);
				Function_234(StackVal, 5, &bLocal_1179, &iLocal_1164, Function_240(iLocal_1164), Function_238(iLocal_1164), 0);
				return 1;
			}
		}
	}
	switch (iLocal_1164)
	{
		case 0x00000063:
			Function_530();
			break;
		
		case 0x00000000:
			Function_467();
			break;
		
		case 0x00000001:
			Function_437();
			break;
		
		case 0x00000002:
			Function_413();
			break;
		
		case 0x00000003:
			Function_355();
			break;
		
		case 0x00000004:
		case 0x00000065:
			Function_270();
			break;
		
		case 0x00000064:
			if (Function_269(&bLocal_1179))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_268(&iLocal_1164, &iLocal_1165, &Local_1166))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1180)
	{
		Function_229(&bLocal_1180, 4);
		Function_1();
		return 0;
	}
	if (bLocal_1178)
	{
		Function_242(&bLocal_1178, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1179 && iLocal_1164 == 100)
	{
		Function_238(iLocal_1164);
		Function_234(StackVal, 5, &bLocal_1179, &iLocal_1164, Function_240(iLocal_1164), Function_238(iLocal_1164), 0);
	}
	return 1;
}

bool Function_268(var uParam0, var uParam1, int iParam2) //Position: 0xCBE4 / 52196
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

bool Function_269(int iParam0) //Position: 0xCC2D / 52269
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_270() //Position: 0xCC41 / 52289
{
	if (iLocal_1165 < 3 && iLocal_1165 > 105)
	{
		Function_354(&Local_6 + 1184[02]);
		Function_353(&Local_6 + 3920);
		if (iLocal_1165 <= 7 && iLocal_1165 > 15)
		{
			Function_352();
		}
		if (IS_VOLUME_VALID(&Local_6 + 2200))
		{
			if (IS_ACTOR_IN_VOLUME(&Local_6 + 1184[02], &Local_6 + 2200))
			{
				DESTROY_VOLUME(&Local_6 + 2200);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1840, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_6 + 1208[02], true);
				Function_349(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 15;
			}
		}
	}
	switch (iLocal_1165)
	{
		case 0x00000000:
			Function_345(0);
			SET_ACTOR_HEALTH(&iLocal_1189, GET_ACTOR_MAX_HEALTH(&iLocal_1189));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			iLocal_1197 = Function_344(StackVal, *(&Local_6 + 2688[13]), 0, 1, 1);
			if (!Function_343(iLocal_1197))
			{
				Function_341(&Local_1152);
			}
			if (iLocal_1198[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_338();
				iLocal_1197 = Function_344(StackVal, *(&Local_6 + 3416), 0, 1, 1);
				if (!Function_343(iLocal_1197))
				{
					Function_341(&Local_1152);
				}
				Function_329(1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_6 + 3416), 1, 1, 1);
				Function_225(&iLocal_1352);
				iLocal_1165 = 1;
			}
			else
			{
				Function_225(&iLocal_1352);
				Function_349(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
				iLocal_1165 = 15;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_343(iLocal_1197) || iLocal_1197 != 4294967295))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_6 + 1184[02], *(&Local_6 + 3528), 1, 1, 1);
				Function_225(&iLocal_1352);
				iLocal_1165 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_327())
			{
				if (Function_321(&iLocal_1268))
				{
					if (Function_320(&Local_6 + 1184[02]))
					{
						if (Function_318(&Global_54076))
						{
							Function_239(iLocal_1164);
							Function_310(StackVal, Function_239(iLocal_1164), iLocal_1164, Global_46754[0], Function_241(iLocal_1164), 3);
							Function_309();
							DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
							if (HUD_IS_FADED())
							{
								HUD_FADE_IN(1.0f, 1065353216);
							}
							TASK_OVERRIDE_CLEAR_MOVETYPE(&Local_6 + 1208[02]);
							START_VEHICLE(&Local_6 + 1184[02]);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_6 + 1208[02], true);
							TOGGLE_COVER_PROPS(0);
							MEMORY_ALLOW_SHOOTING(&iLocal_1189, false);
							MEMORY_ALLOW_SHOOTING(&Local_6 + 1208[02], false);
							DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_1189);
							DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
							Function_304(&(Local_1466[015]), &iLocal_1189, "FBI_Ross", 1, 0x5f5e100, 1);
							Function_304(&(Local_1466[115]), &Local_6 + 1208[02], "FBI_Fordham", 1, 0x5f5e100, 1);
							Function_304(&(Local_1466[215]), &Local_6 + 1552, "AmericanSoldier", 1, 0x5f5e100, 1);
							Function_303(&(Local_1466[215]), 3);
							Function_299(&(Local_1466[215]), 42);
							iLocal_1384 = 1;
							TASK_FOLLOW_PATH_FROM_POINT(&Local_6 + 1208[02], &Local_6 + 3960, 2, 28, 0, 0, 1, 0);
							Function_225(&iLocal_1352);
							iLocal_1165 = 6;
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			if (!IS_GRINGO_VALID(&iLocal_1397))
			{
				Function_298();
			}
			break;
		
		case 0x0000000F:
			Local_1166 = 1000;
			Function_284();
			TELEPORT_ACTOR(&iLocal_1189, &Local_6 + 3552, 1, 1, 1);
			TELEPORT_ACTOR(&Global_54076, &Local_6 + 3416, 1, 1, 1);
			SET_ACTOR_INVULNERABILITY(&Global_54076, 1);
			Function_283(&Local_6 + 1552);
			iLocal_1193 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "fbi02_fakePlayer", GET_ACTOR_ENUM(&Global_54076), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			SET_ACTOR_IN_VEHICLE(&iLocal_1193, &Local_6 + 1184[02], false);
			Function_225(&iLocal_1352);
			iLocal_1165 = 16;
			break;
		
		case 0x00000010:
			if (Function_280(&iLocal_1352) <= 1,5f)
			{
				Function_225(&iLocal_1352);
				iLocal_1165 = 17;
			}
			break;
		
		case 0x00000011:
			if (IS_ACTOR_VALID(&iLocal_1193))
			{
				if (!Function_318(&iLocal_1193))
				{
					DESTROY_ACTOR(&iLocal_1193);
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Local_6 + 1184[02], &Local_6 + 2320))
			{
				SET_TIME_WARP(0,25f, 1000.0f, 15.0f);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Local_1166 + 24);
				Function_277();
				Function_224();
				Function_276(&Local_6 + 3392, "DynamiteExplosion", 0, 1);
				TASK_STAND_STILL(&Local_6 + 1208[02], -1.0f, 0, 0);
				Function_225(&iLocal_1352);
				Function_226(&iLocal_1368, 10.0f);
				iLocal_1165 = 18;
			}
			break;
		
		case 0x00000012:
			Function_274();
			if (Function_280(&iLocal_1352) <= 0,6f)
			{
				CANCEL_TIME_WARP(0);
				Function_225(&iLocal_1352);
				Function_226(&iLocal_1368, 10.0f);
				iLocal_1165 = 19;
			}
			break;
		
		case 0x00000013:
			Function_274();
			if (Function_280(&iLocal_1352) <= 0,4f)
			{
				Local_1166 = 1000;
				HUD_SET_FADE_COLOR(1.0f, 1.0f, 1.0f, 1.0f);
				HUD_FADE_OUT(0,8f, 1.0f, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				Function_283(&Local_6 + 1552);
				Function_283(&Local_6 + 1840);
				Function_272(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Local_1166 + 24);
				DESTROY_OBJECT(&Local_1166 + 24);
				Function_271(&Local_6 + 1392);
				bLocal_1178 = true;
			}
			break;
	}
	return;
}

void Function_271(bool bParam0) //Position: 0xD1A3 / 53667
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (!IS_ACTOR_MOUNTED(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_272(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xD1E6 / 53734
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
		uVar0 = Function_50();
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
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_89(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_243();
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
	Function_273(&iParam9, &iParam10);
}

void Function_273(var uParam0, bool bParam1) //Position: 0xD2B5 / 53941
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
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
		Function_194();
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

void Function_274() //Position: 0xD384 / 54148
{
	if (Function_275(&Local_6 + 1184[02], 0) > 0,05f)
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&Local_6 + 1184[02]), 1);
	}
	else
	{
		PRINTSTRING("car speed = ");
		PRINTFLOAT(Function_275(&Local_6 + 1184[02], 0));
		PRINTNL();
	}
	return;
}

float Function_275(var uParam0, bool bParam1) //Position: 0xD3D8 / 54232
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_276(float fParam0, float fParam1, float fParam2, int iParam3) //Position: 0xD3F9 / 54265
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &iParam3);
}

void Function_277() //Position: 0xD419 / 54297
{
	if (!Function_278(StackVal, &Global_54076, *(&Local_6 + 3296), 5.0f))
	{
		if (MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
		{
			TELEPORT_ACTOR(&Global_54076, &Local_6 + 3296, 1, 1, 1);
			TELEPORT_ACTOR(&iLocal_1193, &Local_6 + 3296, 1, 1, 1);
		}
	}
	return;
}

bool Function_278(int iParam0, struct<2> Param1, float fParam3) //Position: 0xD45B / 54363
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_279(&iParam0);
		if (VDIST(Function_279(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_279(int iParam0) //Position: 0xD4E7 / 54503
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

float Function_280(vector3 vParam0) //Position: 0xD553 / 54611
{
	if (Function_282(&vParam0))
	{
		if (Function_281(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_281(int iParam0) //Position: 0xD620 / 54816
{
	return Function_14(iParam0, 2);
}

bool Function_282(int iParam0) //Position: 0xD62E / 54830
{
	return Function_14(iParam0, 1);
}

void Function_283(bool bParam0) //Position: 0xD63C / 54844
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
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				uVar2 = GET_VEHICLE(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				uVar2 = GET_MOUNT(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else
			{
				DESTROY_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_284() //Position: 0xD6CC / 54988
{
	CANCEL_TIME_WARP(0);
	*(&Local_1166 + 24) = Function_286(&Local_6, 0, 1, 0, 0);
	Function_285(&Local_1166 + 24, 0);
	return;
}

void Function_285(var uParam0, bool bParam1) //Position: 0xD6F0 / 55024
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_286(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xD706 / 55046
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 10, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "FBI02_blow_up_car", 10, 1);
	}
	Function_287(&uVar0);
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

void Function_287(int iParam0) //Position: 0xD793 / 55187
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_297(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_296(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_295(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_294(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 4);
	Function_293(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 5);
	Function_292(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 6);
	Function_291(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 7);
	Function_290(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 8);
	Function_289(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 9);
	Function_288(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 1,5f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 2, 3, 1,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 4, 5, 0,3f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 6, 7, 0,3f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 8, 9, 1,2f, 4, 0);
	return;
}

void Function_288(int iParam0) //Position: 0xD899 / 55449
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,14928f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-181,0103f, 125,3636f, 1727,742f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,144037f, -0,794752f, 1,479853f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_289(int iParam0) //Position: 0xD912 / 55570
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,59877f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-180,2914f, 125,2682f, 1729,521f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,124462f, -0,426869f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_290(int iParam0) //Position: 0xD987 / 55687
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,05008f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-175,1508f, 124,6126f, 1726,251f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,430636f, 0,659477f, -0,982671f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_291(int iParam0) //Position: 0xDA00 / 55808
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,05008f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-174,4657f, 125,0564f, 1726,685f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,447747f, 0,474279f, 0,489938f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_292(int iParam0) //Position: 0xDA79 / 55929
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 44,56033f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-179,2683f, 125,2721f, 1725,44f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,283794f, -0,933792f, 0,113683f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_293(int iParam0) //Position: 0xDAF2 / 56050
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 44,56033f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-178,1153f, 124,9899f, 1727,527f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,320472f, -0,318956f, -0,614522f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_294(int iParam0) //Position: 0xDB6B / 56171
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 46,25515f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-179,197f, 125,4814f, 1726,458f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,099909f, -0,689374f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_295(int iParam0) //Position: 0xDBE0 / 56288
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-172,0601f, 124,9264f, 1725,607f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,145432f, 0,872368f, -0,205756f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_296(int iParam0) //Position: 0xDC59 / 56409
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,41512f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-183,4919f, 128,1906f, 1715,962f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,141874f, 1,034385f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_297(var uParam0) //Position: 0xDCCE / 56526
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 36,41512f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-179,0473f, 127,9341f, 1715,992f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,15202f, 1,192513f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_298() //Position: 0xDD43 / 56643
{
	var uVar0;
	
	GET_OBJECT_POSITION(&Local_6 + 4008, &uVar0);
	iLocal_1397 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_detonator", &uVar0, 2.0f, 0);
	if (IS_GRINGO_VALID(&iLocal_1397))
	{
		uLocal_1195 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "", 471, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		SNAP_ACTOR_TO_GRINGO(&uLocal_1195, GET_OBJECT_FROM_GRINGO(&iLocal_1397), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&uLocal_1195, &iLocal_1397, "UseCase1", 4294967295, 1);
		SET_ACTOR_INVULNERABILITY(&uLocal_1195, 1);
	}
	return;
}

void Function_299(int iParam0, int iParam1) //Position: 0xDDFA / 56826
{
	if (iParam1 != 100000000)
	{
		Function_302(&iParam0, iParam1);
	}
	else
	{
		Function_300(&iParam0, 1);
	}
	return;
}

void Function_300(struct<69> Param0) //Position: 0xDE1C / 56860
{
	Param0.f_68 = 0;
	Function_301(&Param0, 2, &bParam1);
	Function_301(&Param0, 4, &bParam1);
	Function_301(&Param0, 8, &bParam1);
	Function_301(&Param0, 16, &bParam1);
	Function_301(&Param0, 32, &bParam1);
	Function_301(&Param0, 64, &bParam1);
	Function_301(&Param0, 128, &bParam1);
	Function_301(&Param0, 256, &bParam1);
	Function_301(&Param0, 512, &bParam1);
	Function_301(&Param0, 1024, &bParam1);
	return;
}

void Function_301(int iParam0, int iParam1, bool bParam2) //Position: 0xDE97 / 56983
{
	bool bVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_302(int iParam0, bool bParam1) //Position: 0xDED6 / 57046
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_303(struct<57> Param0) //Position: 0xDF03 / 57091
{
	if (!IS_OBJECT_VALID(&Param0))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_KILL_LIMIT: Fail Target object invalid!");
		return 0;
	}
	if (Param0.f_56 != 15 || Param0.f_56 != 8)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_KILL_LIMIT: Fail Target object type unsupported!");
		return 0;
	}
	if (bParam1 >= 0)
	{
		DECOR_SET_INT(&Param0, "MFT_LimitHuman", bParam1);
		DECOR_SET_INT(&Param0, "MFT_LimitHorse", bParam1);
	}
	else
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
	}
	return 1;
}

int Function_304(struct<69> Param0) //Position: 0xE067 / 57447
{
	if (!Function_308(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_307(&Param0, &iParam2))
	{
		return 0;
	}
	Function_306(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_305(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_305(var uParam0, int iParam1, int iParam2) //Position: 0xE0AD / 57517
{
	if (iParam1 != 100000000)
	{
		Function_301(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_300(&uParam0, &iParam2);
	}
	return;
}

void Function_306(struct<65> Param0) //Position: 0xE0D4 / 57556
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_307(int iParam0, char* cParam1) //Position: 0xE0E1 / 57569
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

bool Function_308(struct<61> Param0) //Position: 0xE16E / 57710
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

void Function_309() //Position: 0xE321 / 58145
{
	if (!IS_ACTOR_RIDING_VEHICLE(&Local_6 + 1208[02]))
	{
		SET_ACTOR_IN_VEHICLE(&Local_6 + 1208[02], &Local_6 + 1184[02], false);
	}
	if (iLocal_1164 == 2)
	{
		SET_ACTOR_INVULNERABILITY(&Local_6 + 1208[02], 1);
		SET_ACTOR_PROOF(&Local_6 + 1208[02], 8);
		SET_ACTOR_PROOF(&Local_6 + 1208[02], 16);
	}
	if (!IS_ACTOR_RIDING_VEHICLE(&iLocal_1189))
	{
		SET_ACTOR_IN_VEHICLE(&iLocal_1189, &Local_6 + 1184[02], true);
	}
	if (iLocal_1164 == 2)
	{
		SET_ACTOR_INVULNERABILITY(&iLocal_1189, 1);
		SET_ACTOR_PROOF(&iLocal_1189, 8);
		SET_ACTOR_PROOF(&iLocal_1189, 16);
	}
	return;
}

void Function_310(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0xE3BC / 58300
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (bParam2 != Global_53524.f_48 && !Function_317())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_316(0);
	Function_315();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_313(bParam2);
	}
	Function_312(uParam3, iVar0, iVar1);
	Function_311();
}

void Function_311() //Position: 0xE465 / 58469
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

void Function_312(int iParam0, bool bParam1, bool bParam2) //Position: 0xE4A6 / 58534
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
	if (Function_85(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_313(bool bParam0) //Position: 0xE60F / 58895
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_314() };
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

struct<16> Function_314() //Position: 0xE7A7 / 59303
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

void Function_315() //Position: 0xE7ED / 59373
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_316(bool bParam0) //Position: 0xE811 / 59409
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

bool Function_317() //Position: 0xE840 / 59456
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

bool Function_318(int iParam0) //Position: 0xE85B / 59483
{
	if (IS_GRINGO_READY(&uLocal_1393))
	{
		if (!Function_319(&iParam0))
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "attached"))
			{
				if (!DECOR_CHECK_EXIST(&uLocal_1391, "bAttemptingAttach"))
				{
					DECOR_SET_BOOL(&uLocal_1393, "bIgnoreStuckState", 1);
					SNAP_ACTOR_TO_GRINGO(&iParam0, &uLocal_1393, "MaximShootTruck", true, 0, 0);
					DECOR_SET_BOOL(&uLocal_1391, "bAttemptingAttach", 1);
				}
				if (!IS_OBJECT_VALID(&uLocal_1393))
				{
				}
			}
		}
		else if (IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "attached"))
		{
			if (DECOR_CHECK_EXIST(&uLocal_1391, "bAttemptingAttach"))
			{
				DECOR_REMOVE(&uLocal_1391, "bAttemptingAttach");
			}
			if (DECOR_CHECK_EXIST(&uLocal_1393, "bIgnoreStuckState"))
			{
				DECOR_REMOVE(&uLocal_1393, "bIgnoreStuckState");
			}
			return 1;
		}
	}
	return 0;
}

bool Function_319(int iParam0) //Position: 0xE9A2 / 59810
{
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_1393)))
	{
	}
	else if (IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "attached"))
	{
		return 1;
	}
	return 0;
}

bool Function_320(int iParam0) //Position: 0xE9D0 / 59856
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		uLocal_1391 = FIND_OBJECT_IN_OBJECT(&iParam0, "maximgun");
		if (IS_OBJECT_VALID(&uLocal_1391))
		{
			uLocal_1393 = FIND_OBJECT_IN_OBJECT(&uLocal_1391, "shootbabyshoot");
			DECOR_SET_BOOL(&uLocal_1393, "IndefinateUse", 1);
			return 1;
		}
	}
	return 0;
}

bool Function_321(struct<2>[] Param0) //Position: 0xEA3C / 59964
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_326();
	iVar1 = 0;
	if (!Function_217(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_325(&(Param0[iVar02]), 8);
		}
		else if (Function_324())
		{
			iVar1 = 1;
			Function_325(&(Param0[iVar02]), 8);
		}
		Function_325(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_217(&(Param0[iVar02]), 4))
		{
			if (!Function_217(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_217(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_217(&(Param0[02]), 8) || iVar1));
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
				Function_325(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_217(&(Param0[iVar02]), 4))
		{
			if (!Function_217(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
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
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_325(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_325(&(Param0[iVar02]), 2);
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
	Function_322();
	return 1;
}

void Function_322() //Position: 0xEDFE / 60926
{
	if (!Function_323(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_323(int iParam0) //Position: 0xEE3E / 60990
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_324() //Position: 0xEE5A / 61018
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

void Function_325(struct<13> Param0) //Position: 0xEE88 / 61064
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_326() //Position: 0xEE9B / 61083
{
	if (!Function_323(128))
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

bool Function_327() //Position: 0xEEDD / 61149
{
	Function_328(&Local_6 + 808, 472, 2, 0);
	Function_328(&Local_6 + 808, 471, 2, 0);
	Function_328(&Local_6 + 808, 467, 2, 0);
	Function_328(&Local_6 + 808, 468, 2, 0);
	Function_328(&Local_6 + 808, 469, 2, 0);
	Function_328(&Local_6 + 808, 1196, 2, 0);
	if (Function_321(&Local_6 + 808))
	{
		return 1;
	}
	return 0;
}

var Function_328(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xEF45 / 61253
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_217(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_325(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_325(&(Param0[iVar02]), 8);
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

void Function_329(bool bParam0) //Position: 0xF021 / 61473
{
	Function_336(10, 0, 1);
	SET_ACTOR_UPDATE_PRIORITY(&Local_6 + 1184[02], false);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (&bParam0)
	{
		if (!SQUAD_IS_VALID(&Local_6 + 1552))
		{
			Function_335();
		}
		if (!SQUAD_IS_VALID(&Local_6 + 1392))
		{
			Function_334();
		}
	}
	if (!SQUAD_IS_VALID(&Local_6 + 1232))
	{
		Function_333();
	}
	if (SQUAD_IS_VALID(&Local_6 + 1552))
	{
		if (!Function_332(&Local_6 + 1552))
		{
			Function_331(&Local_6 + 1552, &Local_6 + 1392);
		}
	}
	if (!ACTOR_HAS_ANIM_SET(&Local_6 + 1208[02], "arm_veh"))
	{
		SET_ANIM_SET_FOR_ACTOR(&Local_6 + 1208[02], "arm_veh", 1);
	}
	if (!IS_ACTOR_RIDING_VEHICLE(&Local_6 + 1208[02]))
	{
		SET_ACTOR_IN_VEHICLE(&Local_6 + 1208[02], &Local_6 + 1184[02], false);
	}
	if (!IS_ACTOR_RIDING_VEHICLE(&iLocal_1189))
	{
		SET_ACTOR_IN_VEHICLE(&iLocal_1189, &Local_6 + 1184[02], true);
	}
	DECOR_SET_BOOL(&Global_54076, "GringoNoQuit", 1);
	SET_ACTOR_IS_COMPANION(&Local_6 + 1208[02], 1);
	DEEQUIP_ACCESSORY(&iLocal_1189, 0);
	DEEQUIP_ACCESSORY(&Local_6 + 1208[02], 0);
	AI_SET_ENABLE_REACTION_VO(&Local_6 + 1208[02], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(&Local_6 + 1208[02], 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_1189);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
	SET_VEHICLE_EJECTION_ENABLED(&Local_6 + 1184[02], 0);
	TASK_CLEAR(&Local_6 + 1208[02]);
	if (SQUAD_IS_VALID(&Local_6 + 1552))
	{
		Function_330(&Local_6 + 1552);
	}
	return;
}

void Function_330(int iParam0) //Position: 0xF1AB / 61867
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_331(var uParam0, int iParam1) //Position: 0xF1E0 / 61920
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if ((SQUAD_GET_SIZE(&iParam1) - 1) > bVar0)
		{
			ACTOR_MOUNT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0));
		}
		else
		{
			PRINTSTRING("SQUAD_SET_MOUNTED_ON_HORSESQUAD: Unable to find a mount for ");
			PRINTINT(bVar0);
			PRINTSTRING(": ");
			PRINTSTRING(GET_ACTOR_NAME(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)));
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

bool Function_332(int iParam0) //Position: 0xF29C / 62108
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (!IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

void Function_333() //Position: 0xF2DC / 62172
{
	*(&Local_6 + 1232) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "s1_WagonCrew"));
	*(&Local_6 + 1208[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "wagonCrewS1", 641, Vector(783,9999f, 78,30585f, 1235,043f), Vector(0.0f, 150,3013f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1208[02], &Local_6 + 1232);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
	SET_ACTOR_INVULNERABILITY(&Local_6 + 1208[02], 1);
	SET_ACTOR_FACTION(&Local_6 + 1208[02], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1208[02], 0.0f);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1208[02], 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_6 + 1208[02], 0.0f);
	SET_ACTOR_PROOF(&Local_6 + 1208[02], 16);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&Local_6 + 1208[02], 0, 0);
	DECOR_SET_BOOL(&Local_6 + 1208[02], "Warwagon_Driver", 1);
	SET_ACTOR_CAN_PLAY_GESTURES(&Local_6 + 1208[02], false);
	SET_ACTOR_FACTION(&Local_6 + 1208[02], 20);
	UNK_0x2E84E682(&Local_6 + 1208[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1208[02], 7, true);
	AI_GOAL_LOOK_AT_NEUTRAL(&Local_6 + 1208[02], -1.0f);
	return;
}

void Function_334() //Position: 0xF417 / 62487
{
	*(&Local_6 + 1392) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "ns1_horses"));
	*(&Local_6 + 1240[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_1", 983, Vector(428f, 108,4235f, 1581,943f), Vector(0.0f, 81,49139f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[02], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[02], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[02], 1);
	*(&Local_6 + 1240[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_2", 977, Vector(434,7123f, 108,4235f, 1582,712f), Vector(0.0f, 102,0327f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[12], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[12], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[12], 1);
	*(&Local_6 + 1240[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_3", 976, Vector(436f, 108,0798f, 1577,612f), Vector(0.0f, 242,0061f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[22], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[22], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[22], 1);
	*(&Local_6 + 1240[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_4", 980, Vector(430,0766f, 108,4235f, 1576f), Vector(0.0f, 109,9136f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[32], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[32], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[32], 1);
	*(&Local_6 + 1240[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_5", 981, Vector(426,7328f, 108,374f, 1570,115f), Vector(0.0f, 145,7382f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[42], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[42], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[42], 1);
	*(&Local_6 + 1240[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_6", 986, Vector(422,2706f, 108,5547f, 1575,781f), Vector(0.0f, 43,1324f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[52], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[52], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[52], 1);
	*(&Local_6 + 1240[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_7", 984, Vector(424f, 108,4235f, 1578,355f), Vector(0.0f, -32,93537f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[62], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[62], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[62], 1);
	*(&Local_6 + 1240[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_8", 977, Vector(433,9545f, 108,1748f, 1572.0f), Vector(0.0f, 229,8503f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[72], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[72], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[72], 1);
	*(&Local_6 + 1240[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "s1_horse_9", 976, Vector(430,5646f, 108,281f, 1570,394f), Vector(0.0f, 153,125f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1240[82], &Local_6 + 1392);
	ACCESSORIZE_HORSE(&Local_6 + 1240[82], 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&Local_6 + 1240[82], 1);
	return;
}

void Function_335() //Position: 0xF7C0 / 63424
{
	*(&Local_6 + 1552) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "USCav"));
	*(&Local_6 + 1400[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav1", 376, Vector(419,5067f, 107,6271f, 1544,783f), Vector(0.0f, 63,21554f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[02], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[02], 41, 0,999f, 1, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_6 + 1400[02], 0.0f);
	SET_ACTOR_FACTION(&Local_6 + 1400[02], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[02], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[02], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[02], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[02], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[02], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[02], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[02], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[02], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[02], 54, 1.0f);
	*(&Local_6 + 1400[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav2", 373, Vector(417,2692f, 107,6469f, 1545,558f), Vector(0.0f, 283,3599f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[12], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[12], 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1400[12], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[12], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[12], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[12], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[12], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[12], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[12], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[12], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[12], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[12], 54, 1.0f);
	*(&Local_6 + 1400[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav3", 374, Vector(417,5426f, 107,471f, 1543,789f), Vector(0.0f, 238,0538f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[22], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[22], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1400[22], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[22], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[22], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[22], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[22], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[22], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[22], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[22], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[22], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[22], 54, 1.0f);
	*(&Local_6 + 1400[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav4", 370, Vector(418,7441f, 107,1915f, 1542,569f), Vector(0.0f, 206,8686f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[32], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[32], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1400[32], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[32], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[32], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[32], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[32], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[32], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[32], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[32], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[32], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[32], 54, 1.0f);
	*(&Local_6 + 1400[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav5", 375, Vector(419,3146f, 107,0234f, 1541,096f), Vector(0.0f, 195,0684f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[42], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[42], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1400[42], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[42], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[42], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[42], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[42], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[42], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[42], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[42], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[42], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[42], 54, 1.0f);
	*(&Local_6 + 1400[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav6", 372, Vector(417,0201f, 107,8437f, 1544,633f), Vector(0.0f, 268,3319f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[52], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[52]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[52], 42, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1400[52], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[52], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[52], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[52], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[52], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[52], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[52], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[52], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[52], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[52], 54, 1.0f);
	*(&Local_6 + 1400[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav7", 371, Vector(415,5003f, 107,6974f, 1543,635f), Vector(0.0f, 255,384f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[62], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[62]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[62], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1400[62], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[62], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[62], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[62], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[62], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[62], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[62], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[62], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[62], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[62], 54, 1.0f);
	*(&Local_6 + 1400[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav8", 369, Vector(417,9794f, 107,3114f, 1541,179f), Vector(0.0f, 200,7349f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[72], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[72]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[72], 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1400[72], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[72], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[72], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[72], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[72], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[72], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[72], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[72], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[72], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[72], 54, 1.0f);
	*(&Local_6 + 1400[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "usCav9", 373, Vector(417,5725f, 107,0741f, 1542,48f), Vector(0.0f, 223,0621f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1400[82], &Local_6 + 1552);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1400[82]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1400[82], 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1400[82], 20);
	AI_RIDING_SET_ENABLED(&Local_6 + 1400[82], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1400[82], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&Local_6 + 1400[82], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[82], 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[82], 0);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1400[82], 100.0f);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1400[82], 100.0f, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1400[82], 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&Local_6 + 1400[82], 54, 1.0f);
	return;
}

void Function_336(int iParam0, bool bParam1, bool bParam2) //Position: 0x1009F / 65695
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[iParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			*(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[iParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[iParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[iParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[iParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_212(&uVar1);
					}
				}
				Function_337(&uVar0);
			}
		}
	}
	return;
}

void Function_337(var uParam0) //Position: 0x101AE / 65966
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		}
	}
	return;
}

void Function_338() //Position: 0x101E1 / 66017
{
	if (HUD_IS_FADED())
	{
		Function_184(1, 0, 1);
	}
	Function_189(47);
	Function_190(256);
	Function_169(16396);
	Function_339(9);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1124);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1125);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1126);
	return;
}

void Function_339(int iParam0) //Position: 0x1021B / 66075
{
	Function_340(&Global_43580, iParam0);
	return;
}

void Function_340(var uParam0, int iParam1) //Position: 0x10229 / 66089
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_341(int iParam0) //Position: 0x10251 / 66129
{
	if (!Function_342(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_184(1, 0, 1);
		}
	}
	return;
}

bool Function_342(struct<37> Param0) //Position: 0x1026D / 66157
{
	return Param0.f_36;
}

bool Function_343(int iParam0) //Position: 0x10278 / 66168
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[iParam0]), 4);
}

int Function_344(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0x10294 / 66196
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (!(StackVal != 2 && iParam2))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && iParam3) != 7 && iParam3))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (&bParam4)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_345(bool bParam0) //Position: 0x1033A / 66362
{
	Function_346(0, 0x40400000);
	Function_201();
	Function_200();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_346(float fParam0, float fParam1) //Position: 0x10370 / 66416
{
	*(&Global_21369 + 72 + 44) = 0;
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
	Function_348();
	Function_347();
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

void Function_347() //Position: 0x10481 / 66689
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_348() //Position: 0x104B5 / 66741
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

void Function_349(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x105BB / 67003
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_243();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_50();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
			AI_IGNORE_ACTOR(&uVar1);
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
				Function_351(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_351(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_89(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_350()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_350()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
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
	if (Function_323(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_323(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_350() //Position: 0x1086D / 67693
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

struct<8> Function_351(var uParam0) //Position: 0x108FB / 67835
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_352() //Position: 0x1090D / 67853
{
	if (!Function_319(&Global_54076))
	{
		if (!DECOR_CHECK_EXIST(&uLocal_1393, "fTimeOffGun"))
		{
			DECOR_SET_FLOAT(&uLocal_1393, "fTimeOffGun", GET_CURRENT_GAME_TIME());
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_1393, "fTimeOffGun")) < 1.0f)
		{
			if (IS_ACTOR_ALIVE(&Global_54076))
			{
				DECOR_REMOVE(&uLocal_1393, "fTimeOffGun");
				Function_233("missionFail_playerDead");
				bLocal_1179 = true;
				KILL_ACTOR(&Global_54076);
			}
		}
	}
	return;
}

void Function_353(int iParam0) //Position: 0x109B8 / 68024
{
	int iVar0;
	
	if (!IS_ACTOR_DRIVING_VEHICLE(&Local_6 + 1208[02]))
	{
		if (IS_ACTOR_RIDING_VEHICLE(&iLocal_1189))
		{
			iVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(0, &Local_6 + 1184[02], 0, 4, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iParam0, 4, 0, 0, 1, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&Local_6 + 1208[02], iVar0);
			TASK_SEQUENCE_RELEASE(iVar0, 1);
		}
		else
		{
			TASK_FOLLOW_ACTOR(&Local_6 + 1208[02], &Local_6 + 1184[02]);
		}
	}
	if (!IS_ACTOR_RIDING_VEHICLE(&iLocal_1189))
	{
		TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_1189, &Local_6 + 1184[02], 1, 4, 0);
	}
	return;
}

void Function_354(var uParam0) //Position: 0x10A46 / 68166
{
	if (!IS_VEHICLE_ENGINE_RUNNING(&uParam0) || !IS_VEHICLE_ALLOWED_TO_DRIVE(&uParam0))
	{
		START_VEHICLE(&uParam0);
		SET_VEHICLE_ENGINE_RUNNING(&uParam0, 1);
	}
	return;
}

void Function_355() //Position: 0x10A6B / 68203
{
	if (iLocal_1165 < 3 && iLocal_1165 > 105)
	{
		Function_354(&Local_6 + 1184[02]);
		Function_353(&Local_6 + 3920);
		Function_411(StackVal, &bLocal_1408, (&Local_6 + 3272), 0x43160000, 0);
		if (iLocal_1165 <= 7 && iLocal_1165 > 15)
		{
			Function_352();
		}
		Function_410();
		Function_407(&Local_6 + 1848[02], &Global_54076, &uLocal_1626, 0x40c00000);
		if (IS_VOLUME_VALID(&Local_6 + 2200))
		{
			if (IS_ACTOR_IN_VOLUME(&Local_6 + 1184[02], &Local_6 + 2200))
			{
				DESTROY_VOLUME(&Local_6 + 2200);
				SQUAD_GOALS_CLEAR(&Local_6 + 1840);
				Function_330(&Local_6 + 1840);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1840, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_6 + 1208[02], true);
				Function_225(&iLocal_1352);
				iLocal_1165 = 106;
			}
		}
		Function_393(&Local_6 + 1840);
		Function_389(&Local_6 + 1848[02], &Global_54076, 110.0f, "fbi02_tntWagon_1", 5.0f);
	}
	switch (iLocal_1165)
	{
		case 0x00000000:
			Function_345(0);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_FBI02_STAGE4", &uLocal_1632);
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_FBI02_STAGE4_DEBRIS", &uLocal_1634);
			iLocal_1382 = 1;
			SET_ACTOR_HEALTH(&iLocal_1189, GET_ACTOR_MAX_HEALTH(&iLocal_1189));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			iLocal_1197 = Function_344(StackVal, *(&Local_6 + 2688[13]), 0, 1, 1);
			if (!Function_343(iLocal_1197))
			{
				Function_341(&Local_1152);
			}
			if (iLocal_1198[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				if (!SQUAD_IS_VALID(&bLocal_1408))
				{
					bLocal_1408 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "looseHorses"));
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_338();
				iLocal_1197 = Function_344(StackVal, *(&Local_6 + 2688[13]), 0, 1, 1);
				if (!Function_343(iLocal_1197))
				{
					Function_341(&Local_1152);
				}
				Function_329(1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_6 + 2688[13]), 1, 1, 1);
				Function_225(&iLocal_1352);
				iLocal_1165 = 1;
			}
			else
			{
				Function_225(&iLocal_1352);
				iLocal_1165 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_343(iLocal_1197))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_6 + 1184[02], *(&Local_6 + 2688[03]), 1, 1, 1);
				Function_383(StackVal, StackVal, &Local_6 + 1552, *(&Local_6 + 2688[23]), *(&Local_6 + 2688[23] + 12), 3, 6.0f, 2.0f, 0, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_327())
			{
				if (Function_321(&iLocal_1268))
				{
					if (Function_320(&Local_6 + 1184[02]))
					{
						if (Function_318(&Global_54076))
						{
							Function_239(iLocal_1164);
							Function_310(StackVal, Function_239(iLocal_1164), iLocal_1164, Global_46754[0], Function_241(iLocal_1164), 3);
							Function_309();
							DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
							Function_382(&Local_6 + 1552, &bLocal_1408);
							Function_381();
							Function_379(&Local_6 + 1552, &Local_6 + 1840, 2);
							SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1840, false, 1, 4294967295);
							TASK_CROUCH(0, -1.0f);
							Function_374();
							uLocal_1626 = CREATE_EVENT_TRAP(Function_54(), 5, &Local_6 + 1848[02]);
							EVENT_TRAP_ON_TARGET(&uLocal_1626, &Local_6 + 1848[02]);
							Function_366(&Local_6 + 1552, 4);
							Function_365(&Local_6 + 1552, &Local_6 + 1184[02], &Local_6 + 3944, &Local_6 + 3928, &Local_6 + 3936, &Local_6 + 3952, 6.0f, (2,3f * 12.0f), 1, 1);
							TASK_OVERRIDE_CLEAR_MOVETYPE(&Local_6 + 1208[02]);
							START_VEHICLE(&Local_6 + 1184[02]);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_6 + 1208[02], true);
							TOGGLE_COVER_PROPS(0);
							MEMORY_ALLOW_SHOOTING(&iLocal_1189, false);
							MEMORY_ALLOW_SHOOTING(&Local_6 + 1208[02], false);
							DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_1189);
							DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
							Function_304(&(Local_1466[015]), &iLocal_1189, "FBI_Ross", 1, 0x5f5e100, 1);
							Function_304(&(Local_1466[115]), &Local_6 + 1208[02], "FBI_Fordham", 1, 0x5f5e100, 1);
							Function_304(&(Local_1466[215]), &Local_6 + 1552, "AmericanSoldier", 1, 0x5f5e100, 1);
							Function_303(&(Local_1466[215]), 3);
							Function_299(&(Local_1466[215]), 42);
							iLocal_1384 = 1;
							if (iLocal_1198[2])
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_6 + 1208[02], &Local_6 + 3960, 4, 0, 0, 1, 0);
								Function_225(&iLocal_1352);
								iLocal_1165 = 6;
							}
							else
							{
								Function_225(&iLocal_1352);
								iLocal_1165 = 5;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (Function_363(StackVal, StackVal, Vector(6,867f, 117,547f, 1688,251f), Vector(-0,93f, -0,111f, 0,35f)))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_6 + 1208[02], &Local_6 + 3960, 4, 0, 0, 1, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_280(&iLocal_1352) <= 1.0f || iLocal_1198[2])
			{
				if (!HUD_IS_FADED())
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_6 + 2264))
					{
						Local_1388 = Vector(0.0f, 0.0f, -15.0f);
						GET_OBJECT_RELATIVE_POSITION(&Local_6 + 1184[02], Local_1388, &Local_1388);
						Function_362();
						Function_225(&iLocal_1352);
						iLocal_1165 = 7;
					}
				}
				else if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_360(&Local_6 + 1848[02], &Local_6 + 1184[02]);
			if (IS_ACTOR_VALID(&Local_6 + 1400[02]))
			{
				SET_ACTOR_INVULNERABILITY(&Local_6 + 1400[02], 1);
			}
			Function_359(&Local_6 + 1848[02], &Local_6 + 1552);
			if (!IS_ACTOR_VALID(&Local_6 + 1848[02]))
			{
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_IN_MOVING_CAR_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_365(&Local_6 + 1552, &Local_6 + 1184[02], &Local_6 + 3944, &Local_6 + 3928, &Local_6 + 3936, &Local_6 + 3952, 6.0f, 0x41400000, 1, 1);
				Function_225(&iLocal_1352);
				iLocal_1165 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_280(&iLocal_1352) <= 7.0f)
			{
				DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1634, 0);
				Function_356();
				Function_225(&iLocal_1352);
				iLocal_1165 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_GRINGO_VALID(&iLocal_1397))
			{
				Function_298();
			}
			break;
		
		case 0x0000006A:
			Function_271(&Local_6 + 1392);
			iLocal_1198[3] = 1;
			Function_225(&iLocal_1352);
			iLocal_1164 = 101;
			iLocal_1165 = 0;
			break;
	}
	return;
}

void Function_356() //Position: 0x1113D / 69949
{
	int iVar0;
	
	SQUAD_LEAVE(&Local_6 + 1400[02]);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&Local_6 + 1400[02], &Local_6 + 1208[02], &Local_6 + 3952, -25.0f, 1, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Local_6 + 1400[02], 0.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_MOUNT(&Local_6 + 1400[02]), 0.0f);
	iVar0 = Function_357(&Local_6 + 1552, &Global_54076, 1, 0);
	SQUAD_LEAVE(&iVar0);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&iVar0, &Local_6 + 1208[02], &Local_6 + 3952, -20.0f, 1, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_MOUNT(&iVar0), 0.0f);
	return;
}

int Function_357(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x111D3 / 70099
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
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
			fVar3 = Function_358(&uVar4, &uParam1);
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
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

float Function_358(var uParam0, int iParam1) //Position: 0x1129E / 70302
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

void Function_359(var uParam0, int iParam1) //Position: 0x11393 / 70547
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam1) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar0);
		if (IS_ACTOR_ALIVE(&iVar1))
		{
			Function_407(&uParam0, &iVar1, &uLocal_1626, 0x40c00000);
		}
		bVar0++;
	}
	return;
}

void Function_360(var uParam0, var uParam1) //Position: 0x113DB / 70619
{
	var uVar0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Var2 = Vector(0.0f, 0.0f, -9.0f);
		GET_OBJECT_RELATIVE_POSITION(&uParam1, Var2, &uVar0);
		TASK_GO_TO_COORD_NONSTOP(&uParam0, &uVar0, 3, 3212836864);
		Function_361(&uParam0);
		SET_ACTOR_UPDATE_PRIORITY(&uParam0, false);
		if (IS_OBJECT_VALID(&uLocal_1410))
		{
			DESTROY_OBJECT(&uLocal_1410);
		}
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&uParam0), 0);
		ACTIVATE_PHYSINST(GET_PHYSINST_FROM_ACTOR(&uParam0));
		START_VEHICLE(&uParam0);
		uLocal_1410 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &iLocal_1150, Function_54(), &Local_6 + 1848[02], Vector(0.0f, 8.0f, 0.0f), 160.0f, 180.0f);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_1410, "fbi02_lookAtWagon");
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_1410, 1);
	}
	return;
}

void Function_361(var uParam0) //Position: 0x11493 / 70803
{
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, false);
	AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 0);
	AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&uParam0, 0);
	TASK_OVERRIDE_SET_MOVETYPE(&uParam0, 3);
	return;
}

void Function_362() //Position: 0x114B5 / 70837
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_ACTOR(&Local_6 + 1848[02], 322, 0, 2, 0);
	SET_BLIP_SCALE(&uVar0, 1,25f);
	SET_BLIP_NAME(&uVar0, "fbi02_explodingWagonBlip");
	return;
}

bool Function_363(struct<2> Param0, struct<2> Param2) //Position: 0x114FC / 70908
{
	struct<2> Var0;
	
	Var0 = Param2;
	VSCALE(&Var0, 5.0f);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param0, Var0, StackVal);
	ENABLE_GAME_CAMERA_FOCUS(Var0, -1.0f, 6, 1, 1, 0);
	if (!Function_364(StackVal, Var0, -0,9f, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_364(struct<2> Param0, float fParam2, bool bParam3) //Position: 0x1153F / 70975
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	
	GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &uVar0);
	GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param0, StackVal);
	VNORMALIZE(&uVar4);
	if (VDOT(&uVar0, &uVar4) >= &fParam2)
	{
		return 1;
	}
	if (&bParam3)
	{
		PRINTSTRING("IS_GAME_CAMERA_FACING_DIRECTION: vdot = ");
		PRINTFLOAT(VDOT(&uVar0, &uVar4));
		PRINTNL();
	}
	return 0;
}

void Function_365(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x115BF / 71103
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	bVar1 = false;
	if (&bParam9)
	{
		SQUAD_GOALS_CLEAR(&uParam0);
	}
	bVar2 = &iParam7;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (((bParam8 && IS_ACTOR_RIDING(&uVar3)) || !&bParam8) || bParam9)
		{
			if (bVar1 >= 3)
			{
				bVar1 = false;
				bVar2 = (bVar2 + fParam6);
			}
			switch (bVar1)
			{
				case 0x00000000:
					if (&bParam9)
					{
						SQUAD_GOAL_ADD_GENERAL_TASK(&uParam0, bVar0, 0, 1);
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &uParam1, &uParam2, bVar2, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(&uVar3, &uParam1, &uParam2, bVar2, 1, 0);
					}
					break;
				
				case 0x00000001:
					if (&bParam9)
					{
						SQUAD_GOAL_ADD_GENERAL_TASK(&uParam0, bVar0, 0, 1);
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &uParam1, &uParam3, bVar2, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(&uVar3, &uParam1, &uParam3, bVar2, 1, 0);
					}
					break;
				
				case 0x00000002:
					if (&bParam9)
					{
						SQUAD_GOAL_ADD_GENERAL_TASK(&uParam0, bVar0, 0, 1);
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &uParam1, &uParam4, bVar2, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(&uVar3, &uParam1, &uParam4, bVar2, 1, 0);
					}
					break;
				
				case 0x00000003:
					if (&bParam9)
					{
						SQUAD_GOAL_ADD_GENERAL_TASK(&uParam0, bVar0, 0, 1);
						TASK_FOLLOW_OBJECT_ALONG_PATH(0, &uParam1, &uParam5, bVar2, 1, 0);
					}
					else
					{
						TASK_FOLLOW_OBJECT_ALONG_PATH(&uVar3, &uParam1, &uParam5, bVar2, 1, 0);
					}
					break;
			}
			PRINTSTRING("Added guy with back offset ");
			PRINTFLOAT(bVar2);
			PRINTNL();
			bVar1++;
		}
		bVar0++;
	}
}

void Function_366(int iParam0, int iParam1) //Position: 0x1174A / 71498
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	iVar0 = 0;
	bVar1 = (iParam1 - Function_373(&iParam0));
	PRINTSTRING("Squad has ");
	PRINTINT(Function_372(&iParam0));
	PRINTSTRING("guys in it, which makes iNumToSpawn ");
	PRINTINT(bVar1);
	PRINTNL();
	if (bVar1 >= 0)
	{
		Var4 = Vector(7.0f, 0.0f, 15.0f);
		GET_OBJECT_RELATIVE_POSITION(&Local_6 + 1184[02], Var4, &Var6);
		FIND_GROUND_INTERSECTION(&Var6, 10.0f, &Var6, &Var4);
		if (WOULD_ACTOR_BE_VISIBLE(976, &Var6, 3212836864))
		{
			Var4 = Vector(7.0f, 0.0f, -15.0f);
			GET_OBJECT_RELATIVE_POSITION(&Local_6 + 1184[02], Var4, &Var6);
			FIND_GROUND_INTERSECTION(&Var6, 10.0f, &Var6, &Var4);
		}
		iVar0 = 1;
		while (iVar0 < iParam1)
		{
			uVar3 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Local_6, Function_54(), Function_371(), Var6, Vector(0.0f, 0.0f, 0.0f));
			uVar2 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Local_6, Function_54(), Function_370(), Var6, Vector(0.0f, 0.0f, 0.0f));
			ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&uVar2, 0, 0);
			Function_367(&uVar3, &Global_54076);
			ACTOR_MOUNT_ACTOR(&uVar2, &uVar3);
			SQUAD_JOIN(&uVar2, &iParam0);
			SET_ACTOR_FACTION(&uVar2, 20);
			iVar0++;
		}
	}
	return;
}

void Function_367(var uParam0, int iParam1) //Position: 0x11887 / 71815
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_368(StackVal, &uParam0, Var0);
	return;
}

void Function_368(var uParam0, struct<2> Param1) //Position: 0x118A3 / 71843
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_369(&uParam0, &uParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_369(GET_MOUNT(&uParam0), &uParam0, Param1), 1);
	}
	return;
}

var Function_369(var uParam0, struct<2> Param1) //Position: 0x118DE / 71902
{
	struct<2> Var0;
	
	Function_351(&uParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_351(&uParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

int Function_370() //Position: 0x1195F / 72031
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = RAND_INT_RANGE(0, 2);
	switch (iVar0)
	{
		case 0x00000000:
			return 372;
			break;
		
		case 0x00000001:
			return 373;
			break;
		
		case 0x00000002:
			return 374;
			break;
	}
	return 372;
}

int Function_371() //Position: 0x119A0 / 72096
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = RAND_INT_RANGE(0, 5);
	switch (iVar0)
	{
		case 0x00000000:
			return 976;
			break;
		
		case 0x00000001:
			return 977;
			break;
		
		case 0x00000002:
			return 980;
			break;
		
		case 0x00000003:
			return 981;
			break;
		
		case 0x00000004:
			return 983;
			break;
		
		case 0x00000005:
			return 984;
			break;
	}
	return 976;
}

int Function_372(int iParam0) //Position: 0x11A08 / 72200
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int Function_373(int iParam0) //Position: 0x11A5E / 72286
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		if (IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_374() //Position: 0x11A99 / 72345
{
	(&Local_6 + 1848[02]) = Function_375(StackVal, StackVal, &Local_6, "tntWagon01", 1196, 976, Vector(-147,9999f, 122,4784f, 1778,86f), Vector(0.0f, -35,65685f, 0.0f), 1, 976, 976, 976, 4);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&Local_6 + 1848[02]), 0);
	*(&Local_6 + 1848[12]) = Function_375(StackVal, StackVal, &Local_6, "tntWagon02", 1196, 976, Vector(-165,6537f, 125,6235f, 1769,653f), Vector(0.0f, -43,6316f, 0.0f), 1, 976, 976, 976, 4);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&Local_6 + 1848[12]), 0);
	return;
}

int Function_375(int iParam0, int iParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x11B49 / 72521
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &iParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_378(&(Global_46972[6]), 4, 23, 0) && iParam8)
			{
				bVar16 = Function_377(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_376(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_376(int iParam0, bool[] bParam1) //Position: 0x11D9C / 73116
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_377(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x11DD0 / 73168
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_378(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x11DEC / 73196
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

void Function_379(var uParam0, var uParam1, int iParam2) //Position: 0x11E18 / 73240
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_380(&uVar1, &uParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_380(var uParam0, var uParam1, bool bParam2) //Position: 0x11E6F / 73327
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

void Function_381() //Position: 0x11EC1 / 73409
{
	(&Local_6 + 1840) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "Ambush_2"));
	*(&Local_6 + 1752[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rider_ambush2_6", 472, Vector(-168,2829f, 126,821f, 1704,282f), Vector(0.0f, 238,5933f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1752[02], &Local_6 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1752[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1752[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 1752[02], 1);
	SET_ACTOR_FACTION(&Local_6 + 1752[02], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 1752[02], 0);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1752[02], 50.0f, 1);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1752[02], 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 1752[02], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1752[02], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 1752[02], 359.0f);
	*(&Local_6 + 1752[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rider_ambush2_8", 471, Vector(-165,6311f, 127,4979f, 1700,557f), Vector(0.0f, 231,116f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1752[12], &Local_6 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1752[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1752[12], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 1752[12], 1);
	SET_ACTOR_FACTION(&Local_6 + 1752[12], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 1752[12], 0);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1752[12], 50.0f, 1);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1752[12], 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 1752[12], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1752[12], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 1752[12], 359.0f);
	*(&Local_6 + 1752[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nambush2_1", 467, Vector(-129,5336f, 121,5519f, 1701,336f), Vector(0.0f, 261,4771f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1752[22], &Local_6 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1752[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1752[22], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 1752[22], 1);
	SET_ACTOR_FACTION(&Local_6 + 1752[22], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 1752[22], 0);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1752[22], 50.0f, 1);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1752[22], 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 1752[22], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1752[22], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 1752[22], 359.0f);
	*(&Local_6 + 1752[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nambush2_2", 468, Vector(-126,5477f, 122,0079f, 1716f), Vector(0.0f, 261,4771f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1752[32], &Local_6 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1752[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1752[32], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 1752[32], 1);
	SET_ACTOR_FACTION(&Local_6 + 1752[32], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 1752[32], 0);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1752[32], 50.0f, 1);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1752[32], 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 1752[32], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1752[32], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 1752[32], 359.0f);
	*(&Local_6 + 1752[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nambush2_3", 469, Vector(-139,216f, 122,2996f, 1709,072f), Vector(0.0f, 261,4771f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1752[42], &Local_6 + 1840);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1752[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1752[42], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 1752[42], 1);
	SET_ACTOR_FACTION(&Local_6 + 1752[42], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 1752[42], 0);
	SET_ACTOR_VISION_MAX_RANGE(&Local_6 + 1752[42], 50.0f, 1);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1752[42], 1);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 1752[42], 0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1752[42], 30.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 1752[42], 359.0f);
	return;
}

void Function_382(var uParam0, bool bParam1) //Position: 0x1235C / 74588
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
		{
			SQUAD_JOIN(GET_MOUNT(&uVar1), &bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_383(var uParam0, struct<2> Param1, struct<2> Param3, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9) //Position: 0x123A2 / 74658
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	struct<2> Var8;
	bool bVar10;
	bool bVar11;
	var uVar12;
	
	uVar12 = StackVal;
	uVar6 = Vector(0.0f, 1.0f, 0.0f);
	UNK_0x44986367(StackVal, &Param3);
	VCROSS(&uVar6, &Param3, &Var4);
	VSCALE(&Var4, fParam6);
	VSCALE(&Param3, bParam6);
	Var2 = Param1;
	Var2.f_4 = (StackVal + &fParam7);
	bVar0 = false;
	bVar11 = false;
	bVar10 = false;
	while (bVar10 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar10);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if ((bParam8 && !Function_388(&iVar1, 0x3f800000, 0x42960000, 1, 1, 0)) || !&bParam8)
			{
				if (!Function_385(&iVar1, &Global_54076, &fParam9))
				{
					if (bVar0 == iParam5)
					{
						bVar0 = false;
						bVar11++;
						Var2 = Param1;
						Var8 = Param3;
						VSCALE(&Var8, TO_FLOAT(bVar11));
						Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Var8, Var2, StackVal);
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Hit max cols, starting a new row");
						PRINTNL();
					}
					else
					{
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - current col is ");
						PRINTINT(bVar0);
						PRINTNL();
					}
					Function_384(StackVal, &iVar1, Var2, uVar12, 1, 1, 1);
					PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Teleporting  ");
					PRINTSTRING(GET_ACTOR_NAME(&iVar1));
					PRINTSTRING(" with index ");
					PRINTINT(bVar10);
					PRINTSTRING(" to ");
					PRINTVECTOR(Var2);
					PRINTNL();
					if (&fParam9 < 0.0f)
					{
						PRINTSTRING("He was ");
						PRINTFLOAT(Function_358(&Global_54076, &iVar1));
						PRINTSTRING("m away");
						PRINTNL();
					}
					bVar0++;
					Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Var4, Var2, StackVal);
				}
			}
		}
		bVar10++;
	}
}

void Function_384(var uParam0, struct<2> Param1, float fParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x125B5 / 75189
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, fParam3, &bParam4, &uParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, fParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, fParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

bool Function_385(var uParam0, var uParam1, float fParam2) //Position: 0x12684 / 75396
{
	float fVar0;
	
	fVar0 = Function_386(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_386(var uParam0, int iParam1) //Position: 0x126A3 / 75427
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_387(&uVar0, &uVar2);
	return iVar4;
}

var Function_387(struct<2> Param0) //Position: 0x126C4 / 75460
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_388(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x126E3 / 75491
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_389(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4) //Position: 0x12703 / 75523
{
	if (IS_ACTOR_VALID(&uParam0) && IS_ACTOR_VALID(&uParam1))
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "bSpoke"))
		{
			if (Function_385(&uParam0, &uParam1, fParam2))
			{
				DECOR_SET_BOOL(&uParam0, "bSpoke", 1);
				uParam3 = &uParam3;
				uParam4 = uParam4;
				Function_390();
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
	}
}

void Function_390() //Position: 0x12784 / 75652
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_InWagons", "FBI02_InWagons", 0, 2, 1, 0, 1);
		Function_391(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_391(int iParam0) //Position: 0x127C9 / 75721
{
	Function_392(0, &Global_54076, iParam0, 0);
	Function_392(1, &iLocal_1189, iParam0, 0);
	Function_392(2, &Local_6 + 1208[02], iParam0, 0);
	Function_392(3, &Local_6 + 1560[02], iParam0, 0);
	Function_392(4, &Local_6 + 1400[02], iParam0, 0);
	Function_392(5, FIND_ACTOR_IN_LAYOUT(&Local_6, "blkArmy_sgt"), iParam0, 0);
	return;
}

void Function_392(int iParam0, char* cParam1, var uParam2, int iParam3) //Position: 0x12830 / 75824
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &cParam1, 0);
	}
}

void Function_393(int iParam0) //Position: 0x12858 / 75864
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		bVar2 = DECOR_CHECK_EXIST(&iVar1, "bThrowStuff");
		if (bVar2)
		{
			if (ACTOR_HAS_WEAPON(&iVar1, 23))
			{
				SET_ACTOR_ONE_SHOT_DEATH(&iVar1, 1);
				if (!IS_ACTOR_ALIVE(&iVar1))
				{
					DECOR_REMOVE(&iVar1, "bThrowStuff");
					GET_POSITION(&iVar1, &fVar3);
					Function_276(&fVar3, "FireBottleExplosion", 0, 1);
				}
			}
		}
		if (IS_ACTOR_ALIVE(&iVar1))
		{
			if (GET_TASK_STATUS(&iVar1, 18) == 1 && GET_TASK_STATUS(&iVar1, 78) == 1)
			{
				if (((bVar2 && (Function_405(&Local_6 + 1552, &iVar1, 70.0f, 1) || Function_385(&iVar1, &Global_54076, 70.0f))) || (!bVar2 && (Function_385(&iVar1, &Global_54076, 60.0f) || Function_404(&Global_54076, &iVar1, 1, 0, 0, 3212836864)))) || Function_404(&Global_54076, &iVar1, 1, 0, 0, 3212836864))
				{
					if (!iLocal_1382)
					{
						Function_403(&Local_6 + 1552, 0);
						iLocal_1382 = 1;
						Function_402();
						AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_IN_MOVING_CAR_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
						Function_365(&Local_6 + 1552, &Local_6 + 1184[02], &Local_6 + 3944, &Local_6 + 3928, &Local_6 + 3936, &Local_6 + 3952, 10.0f, 0x41400000, 1, 1);
					}
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar1)))
					{
						ADD_BLIP_FOR_ACTOR(&iVar1, 322, 0, 2, 0);
					}
					Function_401(&Local_6 + 1552, &iVar1, 4);
					Function_400(&iVar1, &Global_54076, 1);
					if (bVar2)
					{
						if (RAND_INT_RANGE(0, true) >= 0)
						{
							Function_397(&iVar1, 23, 40.0f);
						}
						else
						{
							Function_397(&iVar1, 24, 50.0f);
							Function_396(&iVar1);
						}
					}
					else
					{
						if (DECOR_CHECK_EXIST(&iVar1, "bLieInGrass"))
						{
							Function_395(&iVar1);
							DECOR_REMOVE(&iVar1, "bLieInGrass");
						}
						Function_394(&iVar1, 3212836864);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_394(int iParam0, int iParam1) //Position: 0x12AA1 / 76449
{
	var uVar0;
	
	GET_POSITION(&iParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iParam0, &uVar0, GET_HEADING(&iParam0), &iParam1);
	return;
}

void Function_395(int iParam0) //Position: 0x12AC0 / 76480
{
	SET_ACTION_NODE_FOR_ACTOR(&iParam0, "FBI02_ambush/Ambush");
	Function_401(&Local_6 + 1552, &iParam0, 4);
	MEMORY_ALLOW_SHOOTING(&iParam0, true);
	SET_ACTOR_POSTURE(&iParam0, 1);
	return;
}

void Function_396(int iParam0) //Position: 0x12AFE / 76542
{
	int iVar0;
	
	iVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &iVar0, &iParam0, "", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &uLocal_1395);
	return;
}

void Function_397(int iParam0, bool bParam1, int iParam2) //Position: 0x12B39 / 76601
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	int iVar6;
	
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
	UNK_0x2E84E682(&iParam0, 0);
	GIVE_WEAPON_TO_ACTOR(&iParam0, bParam1, 0f, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&iParam0, bParam1, 1);
	SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 15, false);
	TASK_PRIORITY_SET(&iParam0, true);
	Function_351(&Local_6 + 1184[02]);
	Function_351(&iParam0);
	Function_399(StackVal, StackVal, Function_351(&Local_6 + 1184[02]), Function_351(&iParam0), &iParam2);
	uVar0 = Function_399(StackVal, StackVal, Function_351(&Local_6 + 1184[02]), Function_351(&iParam0), &iParam2);
	FIND_GROUND_INTERSECTION(&uVar0, 10.0f, &Var2, &uVar4);
	iVar6 = TASK_SEQUENCE_OPEN();
	Function_398(StackVal, &iParam0, Var2, 5.0f);
	Function_394(&iParam0, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iParam0, iVar6);
	TASK_SEQUENCE_RELEASE(iVar6, 1);
	return;
}

void Function_398(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x12BCE / 76750
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_AT_COORD_FROM_POSITION(&uParam0, &uParam1, &uVar0, &fParam3);
}

struct<8> Function_399(struct<2> Param0, struct<2> Param2, bool bParam4) //Position: 0x12BEB / 76779
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, bParam4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Param0, Var0, StackVal);
	return StackVal, Var0;
}

void Function_400(int iParam0, int iParam1, bool bParam2) //Position: 0x12C1B / 76827
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			MEMORY_IDENTIFY(&iParam0, &iParam1);
			Function_279(&iParam1);
			uVar0 = Function_279(&iParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&iParam0, &iParam1, &uVar0);
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

void Function_401(var uParam0, int iParam1, bool bParam2) //Position: 0x12D2C / 77100
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
			MEMORY_CONSIDER_AS(&uVar1, &iParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_402() //Position: 0x12D78 / 77176
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_EnemyBehindRox", "FBI02_EnemyBehindRox", 0, 2, 1, 0, 1);
		Function_391(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_403(var uParam0, bool bParam1) //Position: 0x12DC9 / 77257
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

bool Function_404(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x12E0F / 77327
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

bool Function_405(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0x12F15 / 77589
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
	if (!IS_ACTOR_VALID(&uParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&uParam1))
	{
		if (Global_6623)
		{
		}
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
				if (ACTORS_IN_RANGE(&uVar1, &uParam1, bParam2))
				{
					if (!Function_406(&uVar1, 1) || iParam3)
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

bool Function_406(int iParam0, int iParam1) //Position: 0x12FBA / 77754
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_407(var uParam0, int iParam1, var uParam2, float fParam3) //Position: 0x1300C / 77836
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (Function_385(&uParam0, &iParam1, &fParam3) || EVENT_TRAP_SUCCESSFUL_TRAP(&uParam2))
			{
				Function_351(&uParam0);
				Var0 = Function_351(&uParam0);
				Function_409(&uParam0);
				Var2 = Function_409(&uParam0);
				GET_OBJECT_AXIS(&uParam0, &Var4, 2);
				VSCALE(&Var4, -3,5f);
				Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Var4, StackVal);
				Function_276(&Var0, "Merchant03BlockadeExplosion", 0, 1);
				if (Function_385(&uParam0, &iParam1, (&fParam3 * 2.0f)))
				{
					if (&iParam1 == &Global_54076)
					{
						Function_224();
					}
					KILL_ACTOR(&iParam1);
				}
				else
				{
					PRINTSTRING("Target dist = ");
					PRINTFLOAT(Function_358(&uParam0, &iParam1));
					PRINTNL();
				}
				DESTROY_OBJECT(&uParam0);
				if (IS_OBJECT_VALID(&uLocal_1410))
				{
					DESTROY_OBJECT(&uLocal_1410);
				}
				Function_408(StackVal, StackVal, "p_gen_wagonExplode01bx", Var0, Var2);
				Function_408(StackVal, StackVal, "p_gen_wagonExplode01cx", Var0, Var2);
				Function_408(StackVal, StackVal, "p_gen_wagonExplode01dx", Var0, Var2);
				Function_408(StackVal, StackVal, "p_gen_wagonExplode01ex", Var0, Var2);
				Function_408(StackVal, StackVal, "p_gen_wagonExplode01fx", Var0, Var2);
			}
		}
	}
}

void Function_408(var uParam0, struct<2> Param1, struct<2> Param3) //Position: 0x131A8 / 78248
{
	var uVar0;
	struct<9> Var1;
	
	vVar1 = RAND_FLOAT_RANGE(4.0f, 9.0f);
	vVar1.f_4 = RAND_FLOAT_RANGE(8.0f, 14.0f);
	vVar1.f_8 = RAND_FLOAT_RANGE(4.0f, 9.0f);
	if (RAND_INT_RANGE(0, 10) <= 6)
	{
		vVar1 = (vVar1.x * -1.0f);
	}
	if (RAND_INT_RANGE(0, 10) <= 6)
	{
		vVar1.f_8 = (vVar1.z * -1.0f);
	}
	uVar0 = CREATE_PROP_IN_LAYOUT(&iLocal_1150, Function_54(), &uParam0, Param1, Param3, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar0, 0);
	ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar0));
	SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&uVar0), &vVar1);
	VSCALE(&vVar1, 0,25f);
	SET_PROP_ANGULAR_VELOCITY_DEGS(GET_PHYSINST_FROM_OBJECT(&uVar0), &vVar1);
}

struct<8> Function_409(var uParam0) //Position: 0x13248 / 78408
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

void Function_410() //Position: 0x13271 / 78449
{
	return;
}

void Function_411(var uParam0, struct<2> Param1, bool bParam3, bool bParam4) //Position: 0x13277 / 78455
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (!IS_ACTOR_MOUNTED(&uVar1))
				{
					if (&bParam4)
					{
						SET_ACTOR_FACTION(&uVar1, 21);
					}
					if (Function_74(StackVal, Param1))
					{
						TASK_FLEE_ACTOR(&uVar1, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_GO_TO_COORD(&uVar1, &Param1, 3);
					}
					if (!Function_412(&uVar1, &Global_54076, &bParam3))
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

bool Function_412(var uParam0, var uParam1, bool bParam2) //Position: 0x1330C / 78604
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

void Function_413() //Position: 0x13421 / 78881
{
	if (iLocal_1165 < 3 && iLocal_1165 > 105)
	{
		Function_436(&iLocal_1402, &Global_54076, 200.0f, 1);
		Function_354(&Local_6 + 1184[02]);
		Function_353(&Local_6 + 3920);
		Function_431(&Local_6 + 1176);
		if (iLocal_1165 > 6)
		{
			Function_352();
		}
		Function_382(&Local_6 + 1552, &bLocal_1408);
		Function_411(StackVal, &bLocal_1408, *(&Local_6 + 3272), 0x43160000, 0);
		Function_410();
	}
	switch (iLocal_1165)
	{
		case 0x00000000:
			Function_345(0);
			Function_430(&Local_6 + 1744, 0, 0, 0);
			SET_ACTOR_HEALTH(&iLocal_1189, GET_ACTOR_MAX_HEALTH(&iLocal_1189));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			iLocal_1197 = Function_344(StackVal, *(&Local_6 + 2576[03]), 0, 1, 1);
			if (!Function_343(iLocal_1197))
			{
			}
			if (!iLocal_1198[1])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_184(1, 0, 1);
				if (!SQUAD_IS_VALID(&bLocal_1408))
				{
					bLocal_1408 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "looseHorses"));
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_338();
				iLocal_1197 = Function_344(StackVal, *(&Local_6 + 2576[03]), 0, 1, 1);
				if (!Function_343(iLocal_1197))
				{
					Function_341(&Local_1152);
				}
				Function_329(1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_6 + 2576[03]), 1, 1, 1);
				Function_225(&iLocal_1352);
				iLocal_1165 = 1;
			}
			else
			{
				Function_225(&iLocal_1352);
				iLocal_1165 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_343(iLocal_1197) || iLocal_1197 != 4294967295)) && Function_427())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_1010))
				{
					Function_425();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_6 + 1184[02], *(&Local_6 + 2576[13]), 1, 1, 1);
				Function_383(StackVal, StackVal, &Local_6 + 1552, *(&Local_6 + 2576[33]), *(&Local_6 + 2576[33] + 12), 3, 6.0f, 2.0f, 0, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_424())
			{
				if (Function_321(&iLocal_1268))
				{
					if (Function_320(&Local_6 + 1184[02]))
					{
						if (Function_318(&Global_54076))
						{
							TOGGLE_COVER_PROPS(0);
							Function_239(iLocal_1164);
							Function_310(StackVal, Function_239(iLocal_1164), iLocal_1164, Global_46754[0], Function_241(iLocal_1164), 3);
							Function_309();
							DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
							Function_423();
							Function_379(&Local_6 + 1552, &Local_6 + 1176, 2);
							Function_379(&Local_6 + 1176, &Local_6 + 1552, 2);
							SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1176, false, 1, 4294967295);
							TASK_CROUCH(0, -1.0f);
							Function_422(&Local_6 + 912[102]);
							Function_422(&Local_6 + 912[112]);
							Function_422(&Local_6 + 912[122]);
							if (!iLocal_1198[1])
							{
								if (!SQUAD_IS_VALID(&iLocal_1402))
								{
									iLocal_1402 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "nbackSquad"));
								}
								Function_421();
								Function_420(&Local_6 + 1888, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
								SQUADS_MERGE(&Local_6 + 1888, &iLocal_1402);
								DESTROY_OBJECT(&Local_6 + 1888);
								Function_379(&Local_6 + 1552, &Local_6 + 1888, 4);
								Function_419();
							}
							MEMORY_ALLOW_SHOOTING(&iLocal_1189, false);
							MEMORY_ALLOW_SHOOTING(&Local_6 + 1208[02], false);
							DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_1189);
							DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
							Function_304(&(Local_1466[015]), &iLocal_1189, "FBI_Ross", 1, 0x5f5e100, 1);
							Function_304(&(Local_1466[115]), &Local_6 + 1208[02], "FBI_Fordham", 1, 0x5f5e100, 1);
							Function_304(&(Local_1466[215]), &Local_6 + 1552, "AmericanSoldier", 1, 0x5f5e100, 1);
							Function_303(&(Local_1466[215]), 3);
							Function_299(&(Local_1466[215]), 42);
							Function_304(&(Local_1466[415]), &Local_6 + 1392, "AmericanSoldier_horse", 1, 0x5f5e100, 1);
							Function_299(&(Local_1466[415]), 42);
							iLocal_1384 = 1;
							Function_365(&Local_6 + 1552, &Local_6 + 1184[02], &Local_6 + 3944, &Local_6 + 3928, &Local_6 + 3936, &Local_6 + 3952, 6.0f, 0x41400000, 1, 1);
							START_VEHICLE(&Local_6 + 1184[02]);
							TASK_OVERRIDE_CLEAR_MOVETYPE(&Local_6 + 1208[02]);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_6 + 1208[02], true);
							if (iLocal_1198[1])
							{
								TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_6 + 1208[02], &Local_6 + 3920, 4, 0, 0, 1, 0);
								Function_225(&iLocal_1352);
								iLocal_1165 = 6;
							}
							else
							{
								Function_225(&iLocal_1352);
								iLocal_1165 = 5;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (Function_363(StackVal, StackVal, Vector(367,008f, 114,736f, 1504,961f), Vector(-0,814f, -0,007f, 0,581f)))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_6 + 1208[02], &Local_6 + 3920, 4, 0, 0, 1, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_280(&iLocal_1352) < 1.0f || iLocal_1198[1])
			{
				if (!HUD_IS_FADED())
				{
					Function_415();
					if (iLocal_1382 && IS_VOLUME_VALID(&Local_6 + 2312))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &Local_6 + 2312))
						{
							DESTROY_VOLUME(&Local_6 + 2312);
						}
						Function_414();
					}
					Function_393(&Local_6 + 1176);
					if (IS_ACTOR_IN_VOLUME(&Local_6 + 1184[02], &Local_6 + 2176))
					{
						Function_225(&iLocal_1352);
						iLocal_1165 = 106;
					}
				}
				else if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_271(&Local_6 + 1392);
				iLocal_1198[2] = 1;
				Function_225(&iLocal_1352);
				iLocal_1164 = 3;
				iLocal_1165 = 0;
			}
			break;
	}
	return;
}

void Function_414() //Position: 0x139DC / 80348
{
	int iVar0;
	
	if (fLocal_1379 >= 0.0f)
	{
		fLocal_1379 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(6.0f, 10.0f));
	}
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && GET_CURRENT_GAME_TIME() < fLocal_1379)
	{
		if (iLocal_1164 == 2)
		{
			iVar0 = RAND_INT_RANGE(2, 4);
		}
		else
		{
			iVar0 = RAND_INT_RANGE(0, 4);
		}
		if (((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) <= 45.0f && GET_LAST_ATTACK_TIME(&Global_54076) < 0.0f) || (GET_LAST_ATTACK_TIME(&Global_54076) >= 0.0f && Function_280(&iLocal_1356) <= 45.0f))
		{
			iVar0 = RAND_INT_RANGE(5, 6);
		}
		switch (iVar0)
		{
			case 0x00000000:
				SAY_SINGLE_LINE_SCRIPTED(&iLocal_1189, "FBI02_TauntsAttakrs", 0, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				SAY_SINGLE_LINE_SCRIPTED(&Local_6 + 1208[02], "FBI02_FordTaunts", 0, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000003:
				SAY_SINGLE_LINE_SCRIPTED(&iLocal_1189, "FBI02_RossShoutsEnc", 0, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000004:
				SAY_SINGLE_LINE_SCRIPTED(&Local_6 + 1208[02], "FBI02_FordShoutsEnc", 0, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000005:
				SAY_SINGLE_LINE_SCRIPTED(&iLocal_1189, "FBI02_JonNoShootGat", 0, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000006:
				SAY_SINGLE_LINE_SCRIPTED(&Local_6 + 1208[02], "FBI02_JonNoShootGat2", 0, 0, 0, 0, 0, 0);
				break;
		}
		fLocal_1379 = (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(6.0f, 10.0f));
	}
	return;
}

void Function_415() //Position: 0x13B89 / 80777
{
	if (IS_VOLUME_VALID(&Local_6 + 2296))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2296))
		{
			DESTROY_VOLUME(&Local_6 + 2296);
			switch (RAND_INT_RANGE(0, true))
			{
				case 0x00000000:
					Function_418();
					break;
				
				case 0x00000001:
					Function_418();
					break;
				}
			}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2304))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2304))
		{
			DESTROY_VOLUME(&Local_6 + 2304);
			switch (RAND_INT_RANGE(0, true))
			{
				case 0x00000000:
					Function_417();
					break;
				
				case 0x00000001:
					Function_416();
					break;
				}
			}
	}
	return;
}

void Function_416() //Position: 0x13C1D / 80925
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI02_CommentsOffRoad_v4_AA", "FBI02_CommentsOffRoad_v4_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_1720", "", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_CommentsOffRoad_v4_AB", "FBI02_CommentsOffRoad_v4_AB", 0, 2, 0, 0, 1);
		Function_391(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_417() //Position: 0x13CE0 / 81120
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_CommentsOffRoad_v3_AA", "FBI02_CommentsOffRoad_v3_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_CommentsOffRoad_v3_AB", "FBI02_CommentsOffRoad_v3_AB", 0, 2, 0, 0, 1);
		Function_391(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_418() //Position: 0x13D84 / 81284
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI02_CommentsOffRoad_v1_AA", "FBI02_CommentsOffRoad_v1_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_CommentsOffRoad_v1_AB", "FBI02_CommentsOffRoad_v1_AB", 0, 2, 0, 0, 1);
		Function_391(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_419() //Position: 0x13E28 / 81448
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	bVar0 = false;
	iLocal_1373 = TASK_SEQUENCE_OPEN();
	TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 1, 0, 0);
	TASK_SEQUENCE_CLOSE();
	SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1402, false, 1, 4294967295);
	TASK_SEQUENCE_PERFORM(0, iLocal_1373);
	TASK_SEQUENCE_RELEASE(iLocal_1373, 1);
	iVar1 = SQUAD_GET_SIZE(&iLocal_1402);
	if (iVar1 >= 5)
	{
		iVar1 = 5;
	}
	bVar0 = false;
	while (bVar0 < (iVar1 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1402, bVar0);
		switch (bVar0)
		{
			case 0x00000000:
				iVar2 = &Local_6 + 3920;
				break;
			
			case 0x00000001:
				iVar2 = &Local_6 + 3928;
				break;
			
			case 0x00000002:
				iVar2 = &Local_6 + 3936;
				break;
			
			case 0x00000003:
				iVar2 = &Local_6 + 3944;
				break;
			
			case 0x00000004:
				iVar2 = &Local_6 + 3952;
				break;
		}
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&uVar3, &iVar2, 4, 0, 0, 1, 0);
		bVar0++;
	}
	return;
}

void Function_420(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x13F02 / 81666
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
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
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
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_421() //Position: 0x14013 / 81939
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_6 + 1888) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "s3_runningGuys"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "runningGuy_1", 470, Vector(315,9331f, 113,7242f, 1573,942f), Vector(0.0f, 85,20281f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 23, 0,5f, 1, 1);
	MEMORY_CONSIDER_AS(&iVar0, &Global_54076, 2);
	SET_ACTOR_FACTION(&iVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iVar0, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "runningGuy_2", 471, Vector(282,6664f, 114,447f, 1552.0f), Vector(0.0f, 149,2935f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 23, 0,5f, 1, 1);
	AI_SHOOT_TARGET_SET_OFFSET(StackVal, &iVar0, &Global_54076, Vector(0.0f, 0.0f, 9.0f));
	MEMORY_CONSIDER_AS(&iVar0, &Global_54076, 2);
	SET_ACTOR_FACTION(&iVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iVar0, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "runningGuy_3", 472, Vector(284.0f, 114,447f, 1566,184f), Vector(0.0f, 134,1721f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iVar0, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "runningGuy_4", 470, Vector(314,787f, 112,7554f, 1554,782f), Vector(0.0f, 120,1469f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 23, 0,5f, 1, 1);
	AI_SHOOT_TARGET_SET_OFFSET(StackVal, &iVar0, &Global_54076, Vector(0.0f, 0.0f, 9.0f));
	SET_ACTOR_FACTION(&iVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iVar0, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "runningGuy_5", 471, Vector(277,2505f, 114,3998f, 1539,976f), Vector(0.0f, -195,7852f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iVar0, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "runningGuy_6", 472, Vector(300.0f, 114,2173f, 1566,943f), Vector(0.0f, 128,3285f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1888);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(&iVar0, 19);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&iVar0, 0, 0);
	return;
}

void Function_422(var uParam0) //Position: 0x142D7 / 82647
{
	SET_ANIM_SET_FOR_ACTOR(&uParam0, "FBI02_ambush", 0);
	SET_ACTION_NODE_FOR_ACTOR(&uParam0, "FBI02_ambush/Idle");
	Function_401(&Local_6 + 1552, &uParam0, 2);
	MEMORY_ALLOW_SHOOTING(&uParam0, false);
	return;
}

void Function_423() //Position: 0x14323 / 82723
{
	*(&Local_6 + 1176) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "Ambush_1"));
	*(&Local_6 + 912[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nraider1_1", 470, Vector(209,1733f, 121,4643f, 1623,475f), Vector(0.0f, -68,84229f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[02], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[02], 41, 0,5f, 1, 1);
	DECOR_SET_BOOL(&Local_6 + 912[02], "bThrowStuff", 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[02], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[02], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[02], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[02], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[02], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[02], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[02], 359.0f);
	*(&Local_6 + 912[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nraider1_2", 471, Vector(236,0338f, 117,4632f, 1638,638f), Vector(0.0f, -14,16725f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[12], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[12], 41, 0,5f, 1, 1);
	DECOR_SET_BOOL(&Local_6 + 912[12], "bThrowStuff", 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[12], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[12], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[12], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[12], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[12], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[12], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[12], 359.0f);
	*(&Local_6 + 912[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nraider1_3", 472, Vector(122,3131f, 123,4823f, 1670,846f), Vector(0.0f, 255,3872f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[22], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[22], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[22], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[22], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[22], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[22], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[22], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[22], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[22], 359.0f);
	*(&Local_6 + 912[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nraider1_4", 470, Vector(138,0918f, 121,4745f, 1671,222f), Vector(0.0f, -68,60242f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[32], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[32], 41, 0,5f, 1, 1);
	DECOR_SET_BOOL(&Local_6 + 912[32], "bThrowStuff", 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[32], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[32], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[32], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[32], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[32], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[32], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[32], 359.0f);
	*(&Local_6 + 912[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nraider1_6", 472, Vector(127,6142f, 121,4745f, 1680,138f), Vector(0.0f, 254,3575f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[42], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[42], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[42], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[42], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[42], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[42], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[42], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[42], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[42], 359.0f);
	*(&Local_6 + 912[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_10", 470, Vector(14,3372f, 115,785f, 1716f), Vector(0.0f, -61,93494f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[52], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[52]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[52], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[52], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[52], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[52], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[52], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[52], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[52], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[52], 359.0f);
	*(&Local_6 + 912[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_11", 471, Vector(25,7993f, 115,5098f, 1706,003f), Vector(0.0f, -78,34709f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[62], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[62]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[62], 23, 0,5f, 1, 1);
	AI_SHOOT_TARGET_SET_OFFSET(StackVal, &Local_6 + 912[62], &Global_54076, Vector(0.0f, 0.0f, 9.0f));
	DECOR_SET_BOOL(&Local_6 + 912[62], "bThrowStuff", 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[62], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[62], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[62], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[62], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[62], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[62], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[62], 359.0f);
	*(&Local_6 + 912[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_12", 472, Vector(0,8033489f, 114,2182f, 1680,939f), Vector(0.0f, 255,3872f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[72], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[72]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[72], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[72], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[72], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[72], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[72], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[72], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[72], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[72], 359.0f);
	*(&Local_6 + 912[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_16", 472, Vector(174,1234f, 125,4901f, 1637,638f), Vector(0.0f, -96,10498f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[82], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[82]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[82], 41, 0,77816f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[82], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[82], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[82], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[82], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[82], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[82], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[82], 359.0f);
	*(&Local_6 + 912[92]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_17", 471, Vector(189,8876f, 123,3036f, 1627,92f), Vector(0.0f, -84,81548f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[92], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[92]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[92], 41, 0,77816f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[92], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[92], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[92], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[92], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[92], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[92], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[92], 359.0f);
	*(&Local_6 + 912[102]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_grass_1", 476, Vector(219,556f, 119,497f, 1614,867f), Vector(0.0f, -41,43051f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[102], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[102]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[102], 41, 0,77816f, 1, 1);
	DECOR_SET_BOOL(&Local_6 + 912[102], "bLieInGrass", 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[102], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[102], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[102], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[102], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[102], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[102], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[102], 359.0f);
	*(&Local_6 + 912[112]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_grass_3", 470, Vector(60,013f, 116,2084f, 1699,948f), Vector(0.0f, -89,55028f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[112], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[112]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[112], 41, 0,77816f, 1, 1);
	DECOR_SET_BOOL(&Local_6 + 912[112], "bLieInGrass", 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[112], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[112], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[112], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[112], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[112], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[112], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[112], 359.0f);
	*(&Local_6 + 912[122]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_grass_4", 471, Vector(54,087f, 116,3005f, 1688,851f), Vector(0.0f, -89,55028f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[122], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[122]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[122], 41, 0,77816f, 1, 1);
	DECOR_SET_BOOL(&Local_6 + 912[122], "bLieInGrass", 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[122], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[122], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[122], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[122], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[122], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[122], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[122], 359.0f);
	*(&Local_6 + 912[132]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_18", 472, Vector(203,44f, 123,5412f, 1641,915f), Vector(0.0f, 297,2941f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[132], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[132]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[132], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[132], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[132], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[132], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[132], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[132], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[132], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[132], 359.0f);
	*(&Local_6 + 912[142]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_19", 468, Vector(180,555f, 124,4862f, 1645,694f), Vector(0.0f, -62,70588f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[142], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[142]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[142], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[142], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[142], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[142], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[142], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[142], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[142], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[142], 359.0f);
	*(&Local_6 + 912[152]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "raider1_21", 475, Vector(108,962f, 117,2741f, 1713,029f), Vector(0.0f, -66,51694f, 0.0f));
	SQUAD_JOIN(&Local_6 + 912[152], &Local_6 + 1176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 912[152]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 912[152], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&Local_6 + 912[152], 1);
	SET_ACTOR_FACTION(&Local_6 + 912[152], 19);
	SET_CRIPPLE_ENABLE(&Local_6 + 912[152], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 912[152], 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 912[152], 30.0f);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&Local_6 + 912[152], 0, 0);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&Local_6 + 912[152], 359.0f);
	return;
}

bool Function_424() //Position: 0x15184 / 86404
{
	Function_328(&Local_6 + 704, 470, 2, 0);
	Function_328(&Local_6 + 704, 471, 2, 0);
	Function_328(&Local_6 + 704, 472, 2, 0);
	Function_328(&Local_6 + 704, 476, 2, 0);
	Function_328(&Local_6 + 704, 468, 2, 0);
	Function_328(&Local_6 + 704, 475, 2, 0);
	if (Function_321(&Local_6 + 704))
	{
		return 1;
	}
	return 0;
}

void Function_425() //Position: 0x151EC / 86508
{
	var uVar0;
	
	Function_426(4, 1);
	uVar0 = &uVar0;
	iLocal_1010 = CREATE_LAYOUT("Fbi02_armycamp_layout");
	*(&iLocal_1010 + 416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "look_distance_binocs", "look_distance_binocs", Vector(453,3785f, 101,497f, 1515,082f), Vector(0.0f, -427,0073f, 0.0f));
	*(&iLocal_1010 + 424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "look_distance_binocs1", "look_distance_binocs", Vector(394,1541f, 118,581f, 1472,063f), Vector(0.0f, -231,2571f, 0.0f));
	*(&iLocal_1010 + 432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "look_distance_binocs2", "look_distance_binocs", Vector(388,4677f, 109,4749f, 1546,983f), Vector(0.0f, -282,3839f, 0.0f));
	*(&iLocal_1010 + 440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "sit_ground_smoke_indef", "sit_ground_smoke_indef", Vector(419,9046f, 106,4962f, 1524,937f), Vector(0.0f, -26,92577f, 0.0f));
	*(&iLocal_1010 + 448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "Sit_Ground_Campfire_Tend_indef", "Sit_Ground_Campfire_Tend_indef", Vector(418,4863f, 106,527f, 1523,237f), Vector(0.0f, -82,53272f, 0.0f));
	*(&iLocal_1010 + 456) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncover_low", Vector(402,1702f, 108,6218f, 1550,744f), Vector(0.0f, 94,68436f, 0.0f), 4);
	*(&iLocal_1010 + 464) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "cover_low1", Vector(404,2731f, 108,4822f, 1544,991f), Vector(0.0f, 68,87098f, 0.0f), 4);
	*(&iLocal_1010 + 472) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "cover_low2", Vector(378,4546f, 112,3012f, 1499,364f), Vector(0.0f, 174,3452f, 0.0f), 4);
	*(&iLocal_1010 + 480) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "cover_low3", Vector(376,5225f, 112,4385f, 1499,118f), Vector(0.0f, 153,3905f, 0.0f), 4);
	*(&iLocal_1010 + 488) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "cover_low4", Vector(375,956f, 112,617f, 1497,827f), Vector(0.0f, 103,3632f, 0.0f), 4);
	*(&iLocal_1010 + 496) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "cover_low5", Vector(376,1976f, 112,8397f, 1495,864f), Vector(0.0f, 103,3632f, 0.0f), 4);
	*(&iLocal_1010 + 504) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "cover_low6", Vector(406,4937f, 108,4756f, 1539,422f), Vector(0.0f, 60,39168f, 0.0f), 4);
	*(&iLocal_1010 + 512) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "cover_low7", Vector(406,8357f, 108,4685f, 1542,813f), Vector(0.0f, 53,40545f, 0.0f), 4);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "campfireCombined01x0", "p_gen_campfireCombined01x", Vector(411,064f, 107,655f, 1531,178f), Vector(-3,683969f, -0,643417f, -7,06261f), 1);
	*(&iLocal_1010 + 520) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x0", "p_gen_crate16x", Vector(417,1959f, 107,2949f, 1537,26f), Vector(-1,888012f, -0,5854804f, -5,769275f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate02x0", "p_gen_crate02x", Vector(420,6118f, 106,6589f, 1530,347f), Vector(3,536665f, 134,8675f, -6,802464f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateWeapons01x0", "p_gen_crateWeapons01x", Vector(829,2085f, 110,4314f, 554,7914f), Vector(0.0f, 144,9008f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x0", "p_gen_tent01x", Vector(425,6691f, 105,6355f, 1525,503f), Vector(-5,102506f, 53,43818f, -13,35043f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x1", "p_gen_tent01x", Vector(426,8347f, 105,3195f, 1523,072f), Vector(-6,049973f, 59,37539f, -14,33522f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x2", "p_gen_tent01x", Vector(428,5924f, 104,9102f, 1520,67f), Vector(-5,524034f, 64,24527f, -13,02293f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x3", "p_gen_tent01x", Vector(409,6927f, 107,5858f, 1523,464f), Vector(-4,4681f, -41,11765f, -3,53403f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x4", "p_gen_tent01x", Vector(407,8672f, 108,4189f, 1534,267f), Vector(-179,0215f, 41,1004f, -182,08f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x5", "p_gen_tent01x", Vector(405,9298f, 108,358f, 1532,577f), Vector(-180,0789f, 38,2014f, -179,7905f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x6", "p_gen_tent01x", Vector(403,8558f, 108,5154f, 1531,077f), Vector(-179,9667f, 38,23446f, -190,2087f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x7", "p_gen_tent01x", Vector(405,869f, 107,9951f, 1523,047f), Vector(-7,130809f, 61,78443f, -12,7664f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x8", "p_gen_tent01x", Vector(411,5623f, 107,4941f, 1525,501f), Vector(-4,663695f, -43,79419f, -3,244348f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent01x9", "p_gen_tent01x", Vector(403,2255f, 108,5773f, 1527,748f), Vector(-8,275621f, 51,00029f, -11,95623f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ntent01x10", "p_gen_tent01x", Vector(404,5331f, 108,281f, 1525,45f), Vector(-3,02156f, 52,55341f, -8,757248f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ntent01x11", "p_gen_tent01x", Vector(413,8942f, 107,3619f, 1527,74f), Vector(-4,663695f, -43,79419f, -3,244348f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ntent01x12", "p_gen_tent01x", Vector(423,9755f, 105,975f, 1527,665f), Vector(-2,967471f, 46,30334f, -10,66498f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "campFire01x0", "p_gen_campFire01x", Vector(419,4054f, 106,4267f, 1522,862f), Vector(-4,975491f, -35,68994f, -4,891445f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateWeapons02x0", "p_gen_crateWeapons02x", Vector(414,7395f, 107,7464f, 1535,324f), Vector(2,820395f, -42,969f, -11,49121f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateWeapons02x1", "p_gen_crateWeapons02x", Vector(413,6996f, 107,8756f, 1536,585f), Vector(2,558888f, -36,25008f, -11,08174f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x1", "p_gen_crate16x", Vector(416,3072f, 107,3882f, 1538,545f), Vector(-2,794163f, 62,0979f, -9,357506f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x2", "p_gen_crate16x", Vector(415,6345f, 108,5148f, 1537,194f), Vector(2,08659f, 128,7953f, -5,261193f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "lantern05x0", "p_gen_lantern05x", Vector(412,1043f, 108,7266f, 1539,968f), Vector(0.0f, 0.0f, -5,076805f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ntable04x0", "p_gen_table04x", Vector(411,2194f, 108,0594f, 1540,268f), Vector(-3,277082f, -40,6016f, -6,759641f), 1);
	*(&iLocal_1010 + 528) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_1010, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x0", "p_bat_flourSack01x", Vector(385,9764f, 109,7499f, 1565,798f), Vector(-104,3442f, 81,19582f, -100,875f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x1", "p_bat_flourSack01x", Vector(385,7733f, 109,6033f, 1564,128f), Vector(-189,5169f, 119,7505f, -185,6219f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x2", "p_bat_flourSack01x", Vector(386,4424f, 109,5462f, 1562,62f), Vector(-184,9492f, 133,0641f, -185,1741f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x0", "p_bat_flourSack02x", Vector(389,0233f, 109,8016f, 1532,485f), Vector(0.0f, 69,60867f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x1", "p_bat_flourSack02x", Vector(388,4067f, 109,8132f, 1524,399f), Vector(0.0f, -236,2592f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x3", "p_bat_flourSack01x", Vector(387,0255f, 110,234f, 1567,25f), Vector(-159,7046f, 57,3027f, -152,5943f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x4", "p_bat_flourSack01x", Vector(387,6384f, 109,5507f, 1549,35f), Vector(-137,6001f, 83,73592f, -138,9546f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x5", "p_bat_flourSack01x", Vector(387,5385f, 109,4577f, 1547,56f), Vector(-7,147091f, 72,77776f, -12,4533f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x6", "p_bat_flourSack01x", Vector(388,3583f, 109,3339f, 1550,924f), Vector(0.0f, 116,5692f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x2", "p_bat_flourSack02x", Vector(388,7671f, 108,8984f, 1545,124f), Vector(0.0f, 141,7215f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x3", "p_bat_flourSack02x", Vector(388,559f, 108,8077f, 1552,009f), Vector(0.0f, 57,12818f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x4", "p_bat_flourSack02x", Vector(388,595f, 109,1059f, 1560,864f), Vector(0.0f, 120,4057f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x7", "p_bat_flourSack01x", Vector(392,2057f, 118,5574f, 1471,987f), Vector(41,07465f, -258,4477f, 36,84415f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x8", "p_bat_flourSack01x", Vector(393,3272f, 118,4866f, 1473,132f), Vector(-3,868252f, -233,3289f, -3,040926f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x9", "p_bat_flourSack01x", Vector(394,6819f, 118,2733f, 1474,023f), Vector(-6,330058f, -213,3555f, -7,162781f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x10", "p_bat_flourSack01x", Vector(396,1122f, 118,2205f, 1473,725f), Vector(3,40242f, -168,6672f, -0,5680826f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x11", "p_bat_flourSack01x", Vector(386,979f, 110,2373f, 1526,703f), Vector(0.0f, 59,74313f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x12", "p_bat_flourSack01x", Vector(386,8881f, 110,3626f, 1528,475f), Vector(-70,38712f, 84,28273f, -70,29659f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x13", "p_bat_flourSack01x", Vector(387,494f, 110,3412f, 1530,031f), Vector(-174,2152f, 65,32664f, -172,3003f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x14", "p_bat_flourSack01x", Vector(388,6706f, 110,4054f, 1531,305f), Vector(-181,9521f, 48,34349f, -178,3685f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x3", "p_gen_crate16x", Vector(403,3308f, 109,8428f, 1533,729f), Vector(-10,30375f, 3,4597f, -13,23177f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x4", "p_gen_crate16x", Vector(403,3849f, 109,0677f, 1535,39f), Vector(8,574318f, -206,4716f, -7,433196f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateWeapons02x2", "p_gen_crateWeapons02x", Vector(401,8834f, 109,0597f, 1532,708f), Vector(-14,42371f, -55,5336f, -2,128053f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x5", "p_bat_flourSack02x", Vector(380,3189f, 111,596f, 1500,877f), Vector(0.0f, -254,8191f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateWeapons02x3", "p_gen_crateWeapons02x", Vector(377,4356f, 113,0202f, 1495,226f), Vector(20,93113f, -53,3825f, -24,72054f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x15", "p_bat_flourSack01x", Vector(374,7879f, 112,7747f, 1497,062f), Vector(-347,5254f, 70,40131f, -349,0211f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x16", "p_bat_flourSack01x", Vector(375,0489f, 112,5256f, 1498,64f), Vector(-211,0956f, 81,93536f, -211,6382f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x17", "p_bat_flourSack01x", Vector(379,2047f, 112,2125f, 1500,264f), Vector(-180,206f, -7,589703f, -180,2876f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x18", "p_bat_flourSack01x", Vector(377,5465f, 112,3744f, 1500,456f), Vector(-180,7195f, 18,44005f, -176,9465f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x19", "p_bat_flourSack01x", Vector(375,9757f, 112,3794f, 1499,955f), Vector(-181,1288f, 52,79261f, -177,618f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x6", "p_bat_flourSack02x", Vector(454,892f, 101,0668f, 1517,177f), Vector(0.0f, -0,710117f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x7", "p_bat_flourSack02x", Vector(453,8491f, 101,0543f, 1513,571f), Vector(0.0f, -115,4457f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x20", "p_bat_flourSack01x", Vector(455,9283f, 101,3611f, 1515,933f), Vector(-168,3553f, 62,29498f, -169,6598f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate02x1", "p_gen_crate02x", Vector(390,6351f, 110,2262f, 1564,814f), Vector(-17,15241f, 43,90225f, -3,46805f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x5", "p_gen_crate16x", Vector(391,0736f, 109,9949f, 1563,37f), Vector(-23,60545f, 61,72784f, -12,80111f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x6", "p_gen_crate16x", Vector(390,7832f, 110,8969f, 1564,024f), Vector(32,8244f, 114,7644f, 41,23474f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x21", "p_bat_flourSack01x", Vector(403,1539f, 108,9601f, 1534,12f), Vector(-164,2247f, 53,20502f, -174,3324f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x22", "p_bat_flourSack01x", Vector(415,3774f, 107,6979f, 1537,61f), Vector(0.0f, 144,2912f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x8", "p_bat_flourSack02x", Vector(409,4127f, 107,4805f, 1528,54f), Vector(0.0f, 454,7915f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x9", "p_bat_flourSack02x", Vector(408,7675f, 107,5335f, 1529,282f), Vector(0.0f, 343,7823f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x10", "p_bat_flourSack02x", Vector(408,6759f, 107,6621f, 1528,246f), Vector(0.0f, 198,0812f, 0.0f), 1), &iLocal_1010 + 528);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x23", "p_bat_flourSack01x", Vector(413,4308f, 107,9393f, 1537,225f), Vector(-7,868567f, 55,31015f, -9,541054f), 1), &iLocal_1010 + 528);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent03x0", "p_bat_tent03x", Vector(410,9334f, 108,4193f, 1543,818f), Vector(-6,356432f, 50,066f, -10,238f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "tent03x1", "p_bat_tent03x", Vector(416,812f, 107,342f, 1535,339f), Vector(-5,505f, 41,307f, -8,306f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ntable04x1", "p_gen_table04x", Vector(417,4608f, 107,1411f, 1531,324f), Vector(-3,277082f, -40,6016f, -6,759641f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x7", "p_gen_crate16x", Vector(418,6788f, 107,802f, 1531,82f), Vector(2,291467f, -145,4831f, -7,087502f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x8", "p_gen_crate16x", Vector(417,6502f, 107,2074f, 1533,652f), Vector(-2,334753f, -323,9683f, -7,162451f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "cot01x0", "p_gen_cot01x", Vector(416,6261f, 107,3494f, 1533,047f), Vector(-2,021317f, 44,46125f, -5,282106f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate02x2", "p_gen_crate02x", Vector(418,4755f, 106,9502f, 1529,932f), Vector(6,019142f, 135,0748f, -3,294034f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x0", "p_bat_rockGreatPlains01x", Vector(359,7465f, 110,2085f, 1532,453f), Vector(0.0f, 80,27997f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x1", "p_bat_rockGreatPlains01x", Vector(360f, 109,9181f, 1572.0f), Vector(0.0f, 276,1015f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x2", "p_bat_rockGreatPlains01x", Vector(346,9407f, 110,5879f, 1524,561f), Vector(0.0f, 243,8274f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "nwagon02x0", "p_bat_wagon02x", Vector(344,1985f, 112,076f, 1538,475f), Vector(0.0f, 73,09178f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x3", "p_bat_rockGreatPlains01x", Vector(368,6876f, 109,9282f, 1555,06f), Vector(0.0f, -101,3021f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x4", "p_bat_rockGreatPlains01x", Vector(369,4876f, 109,8038f, 1567,918f), Vector(0.0f, 93,56078f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x5", "p_bat_rockGreatPlains01x", Vector(371,3437f, 109,6727f, 1526,27f), Vector(0.0f, -130,3594f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x6", "p_bat_rockGreatPlains01x", Vector(369,954f, 109,8419f, 1545,039f), Vector(0.0f, 63,93962f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x7", "p_bat_rockGreatPlains01x", Vector(359,0331f, 110,7675f, 1520,233f), Vector(0.0f, 226,7108f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "rockGreatPlains01x8", "p_bat_rockGreatPlains01x", Vector(191,5294f, 122,5669f, 1627,529f), Vector(38,58346f, -104,5197f, -39,49326f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "wagonBroken02x0", "p_gen_wagonBroken02x", Vector(567,2713f, 87,85955f, 1410,846f), Vector(-0,07290947f, 137,136f, -10,3562f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateBreak02x0", "p_gen_crateBreak02x", Vector(567,3553f, 87,80026f, 1415,45f), Vector(9,612803f, 89,90281f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateBreak02x1", "p_gen_crateBreak02x", Vector(566,9315f, 89,40697f, 1413,904f), Vector(0,04668765f, 69,65842f, -9,569015f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateWeapons02x4", "p_gen_crateWeapons02x", Vector(408,0776f, 108,4502f, 1545,2f), Vector(-1,957979f, -50,95555f, -0,4521722f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerItem01x0", "p_gen_crateMultiplayerItem01x", Vector(410,277f, 108,3928f, 1545,77f), Vector(0.0f, -46,46017f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "nwagon03x0", "p_bat_wagon03x", Vector(407,4763f, 108,4755f, 1548,059f), Vector(0.0f, 61,77194f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "nwagon01x0", "p_gen_wagon01x", Vector(405,0728f, 108,5046f, 1541,731f), Vector(0,3082116f, 52,52235f, -2,595515f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "nwagon01x1", "p_gen_wagon01x", Vector(403,0171f, 108,5122f, 1547,782f), Vector(177,9286f, 138,8989f, 177,0296f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerItem01x1", "p_gen_crateMultiplayerItem01x", Vector(409,7261f, 108,3928f, 1545,351f), Vector(0.0f, -46,46017f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerItem01x2", "p_gen_crateMultiplayerItem01x", Vector(410,0289f, 108,3928f, 1545,064f), Vector(0.0f, -46,46017f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerItem01x3", "p_gen_crateMultiplayerItem01x", Vector(410,5861f, 108,3928f, 1545,489f), Vector(0.0f, -46,46017f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerItem01x4", "p_gen_crateMultiplayerItem01x", Vector(410,3193f, 108,597f, 1545,743f), Vector(0.0f, -46,46017f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerItem01x5", "p_gen_crateMultiplayerItem01x", Vector(409,8971f, 108,597f, 1545,166f), Vector(0.0f, -46,46017f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x24", "p_bat_flourSack01x", Vector(403,7032f, 108,5993f, 1542,25f), Vector(0.0f, 58,44306f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x25", "p_bat_flourSack01x", Vector(402,8658f, 108,5993f, 1543,88f), Vector(0.0f, 66,49752f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x26", "p_bat_flourSack01x", Vector(402,1163f, 108,6595f, 1545,603f), Vector(-7,390171f, 66,28865f, -8,062958f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x27", "p_bat_flourSack01x", Vector(401,4846f, 108,6274f, 1547,328f), Vector(-10,49772f, 73,50739f, -11,36543f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x28", "p_bat_flourSack01x", Vector(401,3022f, 108,7227f, 1549,089f), Vector(-33,23282f, 84,58438f, -34,40601f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x29", "p_bat_flourSack01x", Vector(401,2979f, 108,8202f, 1550,969f), Vector(-107,6696f, 84,03652f, -108,9641f), 1);
	*(&iLocal_1010 + 536) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x11", "p_bat_flourSack02x", Vector(400,6299f, 108,3466f, 1551,937f), Vector(0.0f, 17,84182f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate02x3", "p_gen_crate02x", Vector(403,1916f, 108,5319f, 1544,478f), Vector(11,59121f, 74,94587f, 3,337426f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerWeapon01x0", "p_gen_crateMultiplayerWeapon01x", Vector(402,5735f, 108,8683f, 1545,118f), Vector(3,744503f, 70,87244f, 3,962634f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerWeapon01x1", "p_gen_crateMultiplayerWeapon01x", Vector(402,5575f, 108,5873f, 1545,164f), Vector(3,744503f, 70,87244f, 3,962634f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crateMultiplayerWeapon01x2", "p_gen_crateMultiplayerWeapon01x", Vector(416,4292f, 107,3764f, 1537,555f), Vector(-3,170882f, 48,81967f, -4,855439f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "ncrate16x9", "p_gen_crate16x", Vector(410,2775f, 108,3946f, 1546,952f), Vector(2,319519f, -48,10269f, -5,430342f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "crate16x10", "p_gen_crate16x", Vector(410,2131f, 108,5943f, 1546,921f), Vector(2,017446f, -39,84898f, -4,99643f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack01x30", "p_bat_flourSack01x", Vector(404,6546f, 108,5448f, 1540,701f), Vector(-8,092105f, 58,08849f, -9,508478f), 1);
	*(&iLocal_1010 + 544) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flourSack02x12", "p_bat_flourSack02x", Vector(406,1143f, 107,98f, 1538,146f), Vector(0.0f, 144,6192f, 0.0f), 1);
	*(&iLocal_1010 + 552) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_1010, "flag05x0", "p_gen_flag05x", Vector(408,882f, 108,271f, 1528,83f), Vector(0.0f, 19,158f, 0.0f), 1);
	return;
}

void Function_426(int iParam0, int iParam1) //Position: 0x17877 / 96375
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

bool Function_427() //Position: 0x178C1 / 96449
{
	Function_428(&iLocal_1010 + 8, "p_gen_campfireCombined01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_crate16x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_crate02x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_crateWeapons01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_tent01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_campFire01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_crateWeapons02x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_lantern05x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_table04x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_bat_flourSack01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_bat_flourSack02x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_bat_tent03x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_cot01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_bat_rockGreatPlains01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_bat_wagon02x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_wagonBroken02x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_crateBreak02x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_crateMultiplayerItem01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_bat_wagon03x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_wagon01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_crateMultiplayerWeapon01x", 0, 0);
	Function_428(&iLocal_1010 + 8, "p_gen_flag05x", 0, 0);
	Function_428(&iLocal_1010 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_428(&iLocal_1010 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_indef", 1, 0);
	Function_428(&iLocal_1010 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend_indef", 1, 0);
	if (Function_321(&iLocal_1010 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_428(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x17C7D / 97405
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_429(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_325(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_429(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x17CBB / 97467
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_217(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_325(&(Param0[iVar02]), 4);
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

void Function_430(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17D8A / 97674
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
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
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				bVar2 = GET_VEHICLE(&uVar1);
				if (&bParam3)
				{
					DESTROY_ACTOR(&uVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_388(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_388(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar2);
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
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = GET_MOUNT(&uVar1);
				if (&bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					DESTROY_ACTOR(&uVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_388(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_388(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
						}
						DESTROY_ACTOR(&bVar2);
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
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else
			{
				if (&bParam3)
				{
					DESTROY_ACTOR(&uVar1);
				}
				else if (&bParam2)
				{
					if (!Function_388(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
		}
		else
		{
			bVar0++;
		}
	}
}

void Function_431(int iParam0) //Position: 0x17FC3 / 98243
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	float fVar5;
	
	bVar0 = false;
	fVar5 = 999999,9f;
	uVar2 = &uVar2;
	bVar1 = 4294967295;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (Function_358(&uVar4, &Global_54076) > fVar5)
		{
			if (IS_ACTOR_ALIVE(&uVar4))
			{
				if (!DECOR_CHECK_EXIST(&uVar4, "bKill"))
				{
					if (Function_385(&uVar4, &Global_54076, 30.0f))
					{
						PRINTSTRING(GET_ACTOR_NAME(&uVar4));
						PRINTSTRING(" is in range");
						PRINTNL();
						if (Function_434(&uVar4, &Local_6 + 1184[02], 0,5f))
						{
							bVar1 = bVar0;
							fVar5 = Function_358(&uVar4, &Global_54076);
							DECOR_SET_BOOL(&uVar4, "bKill", 1);
						}
						else
						{
							PRINTSTRING(GET_ACTOR_NAME(&uVar4));
							PRINTSTRING(" is in range but not behind!");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar1 >= 0)
	{
		PRINTSTRING("iClosestIndex = ");
		PRINTINT(bVar1);
		PRINTNL();
		iVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
		Function_433(&Local_6 + 1552, &iVar3);
		fVar5 = 999999,9f;
		bVar1 = 4294967295;
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&Local_6 + 1552) - 1))
		{
			uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (DECOR_CHECK_EXIST(&uVar4, "oTgt"))
			{
				if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar4, "oTgt"))))
				{
					DECOR_REMOVE(&uVar4, "oTgt");
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar2, 30.0f);
				}
			}
			if (Function_358(&uVar4, &iVar3) > fVar5)
			{
				if (IS_ACTOR_ALIVE(&uVar4))
				{
					if (!DECOR_CHECK_EXIST(&uVar4, "oTgt"))
					{
						if (MEMORY_GET_IS_VISIBLE(&uVar4, &iVar3))
						{
							bVar1 = bVar0;
							fVar5 = Function_358(&uVar4, &iVar3);
						}
					}
				}
			}
			bVar0++;
		}
		if (bVar1 >= 0)
		{
			uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Local_6 + 1552, bVar1);
			SET_ACTOR_ONE_SHOT_DEATH(&iVar3, 1);
			Function_432(&uVar2, &iVar3);
			DECOR_SET_OBJECT(&uVar2, "oTgt", &iVar3);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar2, 200.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar2, 54, 1.0f);
		}
	}
	return;
}

void Function_432(var uParam0, int iParam1) //Position: 0x181FF / 98815
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(&uParam0, &iParam1, &uVar0);
	return;
}

void Function_433(var uParam0, int iParam1) //Position: 0x18218 / 98840
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_SHOOT_AT_OBJECT(&uVar1, &iParam1);
		}
		bVar0++;
	}
	return;
}

bool Function_434(bool bParam0, bool bParam1, float fParam2) //Position: 0x1826D / 98925
{
	var uVar0;
	bool bVar2;
	
	GET_OBJECT_AXIS(&bParam1, &uVar0, 2);
	Function_435(&bParam0);
	Function_435(&bParam1);
	bVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Function_435(&bParam1), Function_435(&bParam0), StackVal);
	VNORMALIZE(&bVar2);
	if (VDOT(&bVar2, &uVar0) <= &fParam2)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_435(bool bParam0) //Position: 0x182A3 / 98979
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

void Function_436(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x182CC / 99020
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!Function_412(&uParam1, &uVar1, bParam2))
			{
				SQUAD_LEAVE(&uVar1);
				RELEASE_ACTOR(&uVar1);
				if (&bParam3)
				{
					if (IS_ACTOR_RIDING(&uVar1))
					{
						RELEASE_ACTOR(GET_MOUNT(&uVar1));
					}
				}
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
}

void Function_437() //Position: 0x18358 / 99160
{
	if (iLocal_1165 < 5 && iLocal_1165 > 105)
	{
		Function_354(&Local_6 + 1184[02]);
		if (iLocal_1165 > 7)
		{
			Function_352();
		}
		Function_411(StackVal, &bLocal_1408, *(&Local_6 + 2768[23]), 0x43160000, 0);
	}
	switch (iLocal_1165)
	{
		case 0x00000000:
			Function_345(0);
			Function_221();
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1630))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1630);
			}
			SET_ACTOR_HEALTH(&iLocal_1189, GET_ACTOR_MAX_HEALTH(&iLocal_1189));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_1198[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				Function_184(1, 0, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_338();
				iLocal_1197 = Function_344(StackVal, *(&Local_6 + 2440[03]), 0, 1, 1);
				if (!Function_343(iLocal_1197))
				{
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_6 + 2440[03]), 1, 1, 1);
				Function_225(&iLocal_1352);
				iLocal_1165 = 1;
			}
			else
			{
				Function_225(&iLocal_1352);
				iLocal_1165 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_343(iLocal_1197) || iLocal_1197 != 4294967295)) && Function_427())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_1010))
				{
					Function_425();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_6 + 1184[02], *(&Local_6 + 2440[23]), 1, 1, 1);
				Function_225(&iLocal_1352);
				iLocal_1165 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_466())
			{
				if (Function_280(&iLocal_1352) <= 1.0f)
				{
					if (Function_320(&Local_6 + 1184[02]))
					{
						if (Function_318(&Global_54076) || iLocal_1198[0])
						{
							TOGGLE_COVER_PROPS(0);
							if (iLocal_1198[0] == 0)
							{
								Function_329(1);
								Function_223(&Local_6 + 1552);
								SET_PLAYER_CONTROL(0, 1, 0, 0);
								Function_335();
								SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1552, false, 1, 4294967295);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1392, false, 1, 4294967295);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								Function_465();
								SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1744, false, 1, 4294967295);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
								Function_464();
							}
							Function_239(iLocal_1164);
							Function_310(StackVal, Function_239(iLocal_1164), iLocal_1164, Global_46754[0], Function_241(iLocal_1164), 3);
							DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_1189);
							iLocal_1402 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "nbackSquad"));
							uLocal_1404 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "midSquad"));
							uLocal_1406 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "frontSquad"));
							bLocal_1408 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "looseHorses"));
							Function_463(&iLocal_1402, &Local_6 + 2016[0], 0, 2);
							Function_463(&iLocal_1402, &Local_6 + 2016[1], 0, 2);
							Function_463(&iLocal_1402, &Local_6 + 2016[2], 0, 2);
							Function_463(&uLocal_1404, &Local_6 + 2056[0], 0, 4);
							Function_463(&uLocal_1404, &Local_6 + 2056[1], 0, 4);
							Function_463(&uLocal_1406, &Local_6 + 2256, 0, 4294967295);
							bLocal_1372 = 20;
							Function_304(&(Local_1466[015]), &iLocal_1189, "FBI_Ross", 1, 0x5f5e100, 1);
							Function_304(&(Local_1466[115]), &Local_6 + 1208[02], "FBI_Fordham", 1, 0x5f5e100, 1);
							Function_304(&(Local_1466[215]), &Local_6 + 1552, "AmericanSoldier", 1, 0x5f5e100, 1);
							Function_299(&(Local_1466[215]), 34);
							iLocal_1384 = 1;
							Function_304(&(Local_1466[415]), &Local_6 + 1392, "AmericanSoldier_horse", 1, 0x5f5e100, 1);
							AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
							if (!iLocal_1198[0])
							{
								Function_225(&iLocal_1352);
								iLocal_1165 = 5;
							}
							else
							{
								Function_225(&iLocal_1352);
								iLocal_1165 = 6;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (Function_364(StackVal, *(&Local_6 + 2768[03]), -0,8f, 1))
			{
				DISABLE_GAME_CAMERA_FOCUS();
				Function_225(&iLocal_1352);
				iLocal_1165 = 6;
			}
			else
			{
				ENABLE_GAME_CAMERA_FOCUS(*(&Local_6 + 2768[03]), -1.0f, 6, 1, 1, 0);
			}
			break;
		
		case 0x00000006:
			if (Function_280(&iLocal_1352) < 1.0f || iLocal_1198[0])
			{
				if (!HUD_IS_FADED())
				{
					if (!iLocal_1383)
					{
						if (Function_280(&iLocal_1352) <= 6.0f)
						{
							iLocal_1383 = 1;
							Function_462();
						}
					}
					if (Function_280(&iLocal_1352) < 20.0f && Function_321(&iLocal_1268))
					{
						Function_461();
						AI_GOAL_LOOK_AT_COORD_NEW(&iLocal_1189, &Local_6 + 2768[03], -1.0f);
						AI_GOAL_LOOK_AT_COORD_NEW(&Local_6 + 1208[02], &Local_6 + 2768[03], -1.0f);
						AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_IN_CAR", 0, 4294967295, 4294967295, 3212836864, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[02], 0);
						TASK_SHOOT_ENEMIES_FROM_COVER(&Local_6 + 1400[02], GET_COVER_LOCATION_FROM_OBJECT(&Local_6 + 3672), -1.0f, 1086324736);
						Function_460(&Local_6 + 1552, 0);
						Function_460(&Local_6 + 1744, 0);
						Function_459(&Local_6 + 1744, 20, 1.0f);
						Function_459(&Local_6 + 1552, 20, 1.0f);
						Function_225(&iLocal_1352);
						iLocal_1165 = 7;
					}
				}
				else if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
			}
			break;
		
		case 0x00000007:
			Function_450();
			Function_447(&uLocal_1404, 2);
			Function_414();
			PRINTSTRING("iEnemiesTotal = ");
			PRINTINT(bLocal_1376);
			PRINTNL();
			PRINTSTRING("numEnemiesLeft = ");
			PRINTINT(bLocal_1372);
			PRINTNL();
			if ((bLocal_1372 >= 0 && bLocal_1376 >= 4) && (GET_CURRENT_GAME_TIME() - fLocal_1380) < 3.0f)
			{
				SQUADS_MERGE(&uLocal_1406, &iLocal_1402);
				SQUADS_MERGE(&uLocal_1404, &iLocal_1402);
				SQUAD_GOALS_CLEAR(&iLocal_1402);
				Function_330(&iLocal_1402);
				Function_446(&iLocal_1402, 10.0f);
				Function_419();
				Function_225(&iLocal_1352);
				iLocal_1165 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_280(&iLocal_1352) <= 2.0f)
			{
				Function_445();
				AI_GOAL_LOOK_CLEAR(&iLocal_1189);
				AI_GOAL_LOOK_CLEAR(&Local_6 + 1208[02]);
				Function_225(&iLocal_1352);
				iLocal_1165 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_280(&iLocal_1352) <= 2.0f)
			{
				Function_444();
				Function_443(&Local_6 + 1552, &Local_6 + 1392, 1);
				Function_442(&Local_6 + 1552, &Local_6 + 1392, 0);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&Local_6 + 1208[02], &Local_6 + 1184[02], 0, 2, 0);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_1189, &Local_6 + 1184[02], 1, 2, 0);
				SQUAD_GOALS_CLEAR(&Local_6 + 1552);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1552, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_280(&iLocal_1352) <= 3.0f)
			{
				Function_225(&iLocal_1352);
				iLocal_1165 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_439();
			if (IS_ACTOR_RIDING_VEHICLE(&iLocal_1189) && IS_ACTOR_DRIVING_VEHICLE(&Local_6 + 1208[02]))
			{
				START_VEHICLE(&Local_6 + 1184[02]);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1208[02]);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&Local_6 + 1208[02]);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_6 + 1208[02], &Local_6 + 3976, 4, 0, 0, 1, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_6 + 1208[02], true);
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "GUNFIGHT_IN_MOVING_CAR", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_438(&Local_6 + 1208[02], &Local_6 + 3976) > 3.0f || GET_TASK_STATUS(&Local_6 + 1208[02], 43) != 0)
			{
				TASK_STAND_STILL(&Local_6 + 1208[02], -1.0f, 0, 0);
				if (Function_373(&Local_6 + 1552) <= 6)
				{
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&Local_6 + 1208[02], 0.0f);
					STOP_VEHICLE(&Local_6 + 1184[02]);
				}
				Function_225(&iLocal_1352);
				iLocal_1165 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_372(&Local_6 + 1552) <= 6)
			{
				Function_366(&Local_6 + 1552, 6);
			}
			if (Function_373(&Local_6 + 1552) > 1)
			{
				Function_460(&Local_6 + 1552, 1);
				Function_225(&iLocal_1352);
				iLocal_1165 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_1198[1] = 1;
			Function_225(&iLocal_1352);
			iLocal_1164 = 2;
			iLocal_1165 = 0;
			break;
	}
	return;
}

float Function_438(int iParam0, float fParam1) //Position: 0x18BB5 / 101301
{
	struct<2> Var0;
	int iVar2;
	struct<2> Var3;
	
	iVar2 = (GET_PATH_NUM_POINTS(&fParam1) - 1);
	GET_PATH_POINT(&fParam1, iVar2, &Var0);
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_279(&iParam0);
		Var3 = Function_279(&iParam0);
		return VDIST(Var3, Var0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_439() //Position: 0x18C45 / 101445
{
	if (!Function_441(StackVal, &Local_6 + 1392, *(&Local_6 + 3344), 2.0f))
	{
		if (!Function_440(StackVal, *(&Local_6 + 3344), 0x3f800000, 0x42960000, 1, 1, 0))
		{
			Function_383(StackVal, StackVal, &Local_6 + 1392, *(&Local_6 + 3344), *(&Local_6 + 3344 + 12), 4, 3.0f, 0,5f, 1, 0);
		}
	}
	return;
}

bool Function_440(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x18C9D / 101533
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_441(var uParam0, struct<2> Param1, float fParam3) //Position: 0x18CBE / 101566
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (Function_74(StackVal, Param1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				Function_279(&iVar1);
				if (VDIST(Function_279(&iVar1), Param1) >= fParam3)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_442(var uParam0, var uParam1, int iParam2) //Position: 0x18D33 / 101683
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if ((SQUAD_GET_SIZE(&uParam1) - 1) > bVar0)
		{
			TASK_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0), &iParam2, 1, 2, 2147483647);
		}
		else
		{
			PRINTSTRING("SQUAD_MOUNT_HORSESQUAD: Unable to find a mount for ");
			PRINTINT(bVar0);
			PRINTSTRING(": ");
			PRINTSTRING(GET_ACTOR_NAME(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)));
			PRINTNL();
		}
		bVar0++;
	}
	return;
}

void Function_443(var uParam0, var uParam1, bool bParam2) //Position: 0x18DEF / 101871
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar2);
		if (IS_ACTOR_VALID(&uVar0))
		{
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(&uParam1) - 1))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar3);
				if (IS_ACTOR_VALID(&iVar1))
				{
					Function_400(&uVar0, &iVar1, &bParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_444() //Position: 0x18E76 / 102006
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = (SQUAD_GET_SIZE(&Local_6 + 1552) - SQUAD_GET_SIZE(&Local_6 + 1392));
	while (iVar1 < 0 && bVar0 > (Function_372(&Local_6 + 1744) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&Local_6 + 1744, bVar0);
		if (IS_ACTOR_ALIVE(&uVar2))
		{
			SQUAD_LEAVE(&uVar2);
			SQUAD_JOIN(&uVar2, &Local_6 + 1552);
			iVar1 = (iVar1 - 1);
		}
		bVar0++;
	}
	return;
}

void Function_445() //Position: 0x18EE2 / 102114
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "FBI02_EnemysRetreat", "FBI02_EnemysRetreat", 0, 2, 1, 0, 1);
		Function_391(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_446(var uParam0, bool bParam1) //Position: 0x18F31 / 102193
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
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_447(var uParam0, int iParam1) //Position: 0x18F80 / 102272
{
	bool bVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	var uVar4;
	
	bVar0 = false;
	iVar1 = 0;
	fVar2 = 99999,9f;
	bVar3 = false;
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_ALIVE(&uVar4) && !IS_ACTOR_CRIPPLED(&uVar4, 5))
		{
			if (GET_TASK_STATUS(&uVar4, 8) != 1 || GET_TASK_STATUS(&uVar4, 27) != 1)
			{
				iVar1++;
			}
			else if (Function_358(&uVar4, &Global_54076) > fVar2)
			{
				fVar2 = Function_358(&uVar4, &Global_54076);
				bVar3 = bVar0;
			}
		}
		bVar0++;
	}
	uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar3);
	if (iVar1 <= iParam1)
	{
		if (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&uVar4)) != 41)
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar4);
			GIVE_WEAPON_TO_ACTOR(&uVar4, 41, 1.0f, 1, 1);
		}
		Function_448(&uVar4, &Global_54076, 15.0f, 0, -1.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar4, 70.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar4, 13, false);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar4, 15, false);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar4, 9, 0.0f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uVar4, 0.0f, 1.0f);
	}
	return;
}

void Function_448(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x19088 / 102536
{
	var uVar0;
	
	uVar0 = Function_449(&uParam0, uParam2);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
		PRINTSTRING("Failed to find cover location for ");
		PRINTSTRING(GET_ACTOR_NAME(&uParam0));
		PRINTSTRING(", shooting from any cover instead.");
		PRINTNL();
		Function_432(&uParam0, &uParam1);
		TASK_PRIORITY_SET(&uParam0, bParam3);
	}
	else
	{
		TASK_SHOOT_FROM_COVER(&uParam0, &uParam1, &uVar0, uParam4, 1086324736);
		TASK_PRIORITY_SET(&uParam0, bParam3);
	}
}

var Function_449(var uParam0, bool bParam1) //Position: 0x19130 / 102704
{
	var uVar0;
	
	Function_83(&uParam0, &uVar0);
	return FIND_NEAREST_COVER_LOCATION(&uVar0, bParam1, GET_HEADING(&uParam0), 120.0f, 7);
}

void Function_450() //Position: 0x19151 / 102737
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar7;
	
	bVar1 = false;
	iVar7 = "";
	if (iLocal_1377 >= 4)
	{
		iLocal_1377 = 0;
	}
	bLocal_1376 = ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_1402) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_1404)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_1406));
	switch (iLocal_1377)
	{
		case 0x00000000:
			Function_458(&Local_6 + 1552, 1.0f, 2.0f);
			Function_458(&Local_6 + 1744, 2.0f, 2.0f);
			break;
		
		case 0x00000001:
			if (bLocal_1372 >= 0)
			{
				if ((8 - bLocal_1376) >= 3)
				{
					fLocal_1380 = GET_CURRENT_GAME_TIME();
					bVar1 = false;
					while (bVar1 < 3)
					{
						iVar0 = RAND_INT_RANGE(0, (Local_6.f_2768 - 1));
						if (iVar0 == 0)
						{
							iVar7 = Function_456(StackVal, &iLocal_1402, (&Local_6 + 2768[iVar03]), 120.0f, 0);
						}
						else
						{
							iVar7 = Function_456(StackVal, &iLocal_1402, *(&Local_6 + 2768[iVar03]), 120.0f, 1);
						}
						GET_VOLUME_CENTER(Function_455(&iVar7, &Local_6 + 2016), &uVar5);
						iVar4 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(0, &uVar5, 8.0f, 3);
						TASK_DISMOUNT(0, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iVar7, iVar4);
						TASK_SEQUENCE_RELEASE(iVar4, 1);
						if (IS_ACTOR_VALID(GET_MOUNT(&iVar7)))
						{
							SQUAD_JOIN(GET_MOUNT(&iVar7), &bLocal_1408);
						}
						bLocal_1372 = (bLocal_1372 - 1);
						bVar1++;
					}
				}
			}
			break;
		
		case 0x00000002:
			iVar7 = "";
			iVar2 = Function_453(&iLocal_1402, &Local_6 + 2016);
			iVar3 = Function_453(&uLocal_1404, &Local_6 + 2056);
			if (iVar2 >= 1)
			{
				iVar7 = Function_357(&iLocal_1402, &Global_54076, 1, 1);
				if (IS_ACTOR_VALID(&iVar7))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iVar7);
					SQUAD_LEAVE(&iVar7);
					SQUAD_JOIN(&iVar7, &uLocal_1404);
					AI_ENABLE_PERCEPTION(&iVar7);
				}
			}
			break;
		
		case 0x00000003:
			iVar7 = "";
			iVar3 = Function_453(&uLocal_1404, &Local_6 + 2056);
			if (iVar3 >= 4)
			{
				iVar7 = Function_357(&uLocal_1404, &Global_54076, 1, 1);
				if (IS_ACTOR_VALID(&iVar7))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iVar7);
					SQUAD_LEAVE(&iVar7);
					SQUAD_JOIN(&iVar7, &uLocal_1406);
					AI_ENABLE_PERCEPTION(&iVar7);
					DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar7);
					if (RAND_INT_RANGE(0, 10) >= 5)
					{
						GIVE_WEAPON_TO_ACTOR(&iVar7, 23, 0f, 1, 1);
					}
					else
					{
						GIVE_WEAPON_TO_ACTOR(&iVar7, 24, 0f, 1, 1);
						Function_396(&iVar7);
					}
				}
			}
			break;
		
		case 0x00000004:
			iVar7 = "";
			iVar2 = Function_453(&iLocal_1402, &Local_6 + 2016);
			iVar3 = Function_453(&uLocal_1404, &Local_6 + 2056);
			if (iVar3 >= 0)
			{
				if (Function_280(&iLocal_1352) <= fLocal_1378)
				{
					iVar7 = Function_357(&uLocal_1404, &Global_54076, 1, 1);
					if (IS_ACTOR_VALID(&iVar7))
					{
						Function_451(&iVar7, &Global_54076, 24, 25.0f, 20.0f, 50.0f);
						Function_396(&iVar7);
					}
					fLocal_1378 = (5.0f + RAND_FLOAT_RANGE(0.0f, 4.0f));
					Function_225(&iLocal_1352);
				}
			}
			else if (iVar2 >= 0)
			{
				if (Function_280(&iLocal_1352) <= fLocal_1378)
				{
					iVar7 = Function_357(&iLocal_1402, &Global_54076, 1, 1);
					if (IS_ACTOR_VALID(&iVar7))
					{
						Function_451(&iVar7, &Global_54076, 24, 25.0f, 20.0f, 50.0f);
						Function_396(&iVar7);
					}
					fLocal_1378 = (5.0f + RAND_FLOAT_RANGE(0.0f, 4.0f));
					Function_225(&iLocal_1352);
				}
			}
			break;
		
		case 0x00000005:
			bVar1 = false;
			while (bVar1 < (SQUAD_GET_SIZE(&iLocal_1402) - 1))
			{
				iVar7 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1402, bVar1);
				if (!IS_ACTOR_RIDING(&iVar7))
				{
					AI_ENABLE_PERCEPTION(&iVar7);
				}
				bVar1++;
			}
			break;
	}
	iLocal_1377++;
	return;
}

void Function_451(int iParam0, var uParam1, bool bParam2, float fParam3, float fParam4, float fParam5) //Position: 0x1949A / 103578
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	GET_POSITION(&uParam1, &Var2);
	GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var0);
	Var0.f_4 = 0.0f;
	VNORMALIZE(&Var0);
	VSCALE(&Var0, RAND_FLOAT_RANGE(fParam4, fParam3));
	Var4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
	Function_452(StackVal, StackVal, Var4, Var2, RAND_FLOAT_RANGE(((&fParam5 / 2.0f) * -1.0f), (&fParam5 / 2.0f)));
	Var4 = Function_452(StackVal, StackVal, Var4, Var2, RAND_FLOAT_RANGE(((&fParam5 / 2.0f) * -1.0f), (&fParam5 / 2.0f)));
	if (!IS_WEAPONENUM_LOCKED(bParam2))
	{
		GIVE_WEAPON_TO_ACTOR(&iParam0, bParam2, 0f, 1, 1);
		_SET_ACTOR_INFINITE_AMMO_FLAG(&iParam0, GET_AMMO_ENUM(bParam2), 0);
		_SET_ACTOR_AMMO_OF_TYPE(&iParam0, GET_AMMO_ENUM(bParam2), 1.0f, 0);
		ACTOR_PUT_WEAPON_IN_HAND(&iParam0, bParam2, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 15, false);
		Function_398(StackVal, &iParam0, Var4, 10.0f);
		Function_351(&iParam0);
		AI_SET_WEAPON_MAX_RANGE(&iParam0, (VDIST(Function_351(&iParam0), Var4) + 5.0f));
		TASK_PRIORITY_SET(&iParam0, true);
	}
}

struct<8> Function_452(vector3 vParam0) //Position: 0x1955F / 103775
{
	struct<2> Var0;
	
	vParam0 = (vParam0.x - vParam2.x);
	vParam0.f_4 = (vParam0.y - vParam2.y);
	vParam0.f_8 = (vParam0.z - vParam2.z);
	Var0 = ((COS_DEGREE(bParam4) * vParam0.x) - (SIN_DEGREE(bParam4) * vParam0.z));
	Var0.f_8 = ((COS_DEGREE(bParam4) * vParam0.z) + (SIN_DEGREE(bParam4) * vParam0.x));
	Var0 = (Var0 + vParam2.x);
	Var0.f_4 = (StackVal + vParam2.y);
	Var0.f_8 = (StackVal + vParam2.z);
	return StackVal, Var0;
}

int Function_453(var uParam0, int[] iParam1) //Position: 0x195D9 / 103897
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam1 - 1))
	{
		iVar1 = (iVar1 + Function_454(&uParam0, &(iParam1[iVar0])));
		iVar0++;
	}
	return iVar1;
}

int Function_454(var uParam0, int iParam1) //Position: 0x19611 / 103953
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(&uVar2, &iParam1))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

var Function_455(bool bParam0, int[] iParam1) //Position: 0x1966A / 104042
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = 1,001638E+07.0f;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam1 - 1))
	{
		Function_435(&bParam0);
		Function_435(&(iParam1[iVar0]));
		if (VDIST(Function_435(&bParam0), Function_435(&(iParam1[iVar0]))) > bVar2)
		{
			Function_435(&bParam0);
			Function_435(&(iParam1[iVar0]));
			bVar2 = VDIST(Function_435(&bParam0), Function_435(&(iParam1[iVar0])));
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return &(iParam1[iVar1]);
}

var Function_456(var uParam0, struct<2> Param1, float fParam3, bool bParam4) //Position: 0x196D0 / 104144
{
	var uVar0;
	var uVar1;
	
	if (&bParam4)
	{
		Function_76();
		uVar1 = CREATE_ACTOR_IN_LAYOUT(&Local_6, Function_54(), Function_371(), Param1, Function_76());
		Function_76();
		uVar0 = CREATE_ACTOR_IN_LAYOUT(&Local_6, Function_54(), Function_457(), Param1, Function_76());
		ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
		Function_367(&uVar1, &Global_54076);
	}
	else
	{
		Function_76();
		uVar0 = CREATE_ACTOR_IN_LAYOUT(&Local_6, Function_54(), Function_457(), Param1, Function_76());
		Function_367(&uVar0, &Global_54076);
		SET_ACTOR_POSTURE(&uVar0, 1);
	}
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&uVar0, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 41, 0f, 1, 1);
	if (&fParam3 <= 0.0f)
	{
		SET_ACTOR_VISION_MAX_RANGE(&uVar0, &fParam3, 1);
	}
	SET_ACTOR_VISION_XRAY(&uVar0, 1);
	SQUAD_JOIN(&uVar0, &uParam0);
	AI_SET_WEAPON_MAX_RANGE(&uVar0, 120.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar0, 90.0f);
	AI_ACTOR_FORCE_SPEED(&uVar0, 3);
	AI_SHOOT_TARGET_SET_BONE(&uVar0, &Global_54076, "head");
	Function_400(&uVar0, &Global_54076, 1);
	ADD_BLIP_FOR_ACTOR(&uVar0, 322, 0, 2, 0);
	SET_ACTOR_FACTION(&uVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 20, 1.0f);
	AI_GOAL_SHOOT_AT_OBJECT(&uVar0, &Global_54076);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar0, 54, 1.0f);
	return &uVar0;
}

int Function_457() //Position: 0x197F1 / 104433
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = RAND_INT_RANGE(0, 5);
	switch (iVar0)
	{
		case 0x00000000:
			return 470;
			break;
		
		case 0x00000001:
			return 471;
			break;
		
		case 0x00000002:
			return 472;
			break;
		
		case 0x00000003:
			return 474;
			break;
		
		case 0x00000004:
			return 475;
			break;
		
		case 0x00000005:
			return 476;
			break;
	}
	return 470;
}

void Function_458(var uParam0, float fParam1, float fParam2) //Position: 0x19859 / 104537
{
	bool bVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	
	bVar0 = false;
	if (!DECOR_CHECK_EXIST(&uParam0, "fUpdateFreq"))
	{
		DECOR_SET_FLOAT(&uParam0, "fUpdateFreq", 1.0f);
	}
	if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uParam0, "fUpdateFreq")) < fParam2)
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (Function_275(&uVar1, 0) > 1,5f)
			{
				if (Function_372(&uLocal_1404) >= 0)
				{
					uVar2 = Function_357(&uLocal_1404, &uVar1, 1, 0);
				}
				else
				{
					uVar2 = Function_357(&iLocal_1402, &uVar1, 1, 0);
				}
				if (Function_385(&uVar2, &uVar1, 150.0f))
				{
					GET_POSITION(&uVar2, &Var3);
					PRINTSTRING("position of target = ");
					PRINTVECTOR(Var3);
					PRINTNL();
					GET_OBJECT_AXIS(&uVar2, &Var5, 0);
					VSCALE(&Var5, RAND_FLOAT_RANGE(-5.0f, 5.0f));
					Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var5, Var3, StackVal);
					Var3.f_4 = (StackVal + RAND_FLOAT_RANGE(0,1f, 5.0f));
					PRINTSTRING("after adjustment = ");
					PRINTVECTOR(Var3);
					PRINTNL();
					Function_398(StackVal, &uVar1, Var3, -1.0f);
					if (fParam1 < 0.0f)
					{
						if (GET_TASK_STATUS(&uVar1, 33) != 1)
						{
							TASK_CROUCH(&uVar1, -1.0f);
							fParam1 = (fParam1 - 1.0f);
						}
					}
					DECOR_SET_FLOAT(&uParam0, "fUpdateFreq", GET_CURRENT_GAME_TIME());
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_459(var uParam0, int iParam1, float fParam2) //Position: 0x199E8 / 104936
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
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uVar1, iParam1, fParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_460(var uParam0, bool bParam1) //Position: 0x19A39 / 105017
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
		if (bParam1)
		{
			AI_ENABLE_PERCEPTION(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		}
		else
		{
			AI_DISABLE_PERCEPTION(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0));
		}
		bVar0++;
	}
	return;
}

void Function_461() //Position: 0x19A84 / 105092
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_SpotsEnemsHorizon", "FBI02_SpotsEnemsHorizon", 0, 2, 1, 0, 1);
		Function_391(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462() //Position: 0x19ADB / 105179
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_WaitEnemAttaks", "FBI02_WaitEnemAttaks", 0, 2, 1, 0, 1);
		Function_391(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_463(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0x19B2C / 105260
{
	var uVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return &uVar0;
	}
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&uParam0, iParam2, &uParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&uParam0, 0, &uParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(&uParam0, &iVar1, &uVar0);
	return &uVar0;
}

void Function_464() //Position: 0x19B73 / 105331
{
	RELEASE_ACTOR(&Local_6 + 1560[52]);
	RELEASE_ACTOR(&Local_6 + 1560[62]);
	RELEASE_ACTOR(&Local_6 + 1560[72]);
	RELEASE_ACTOR(&Local_6 + 1560[82]);
	SQUAD_GOALS_CLEAR(&Local_6 + 1744);
	Function_330(&Local_6 + 1744);
	TASK_SHOOT_ENEMIES_FROM_COVER(&Local_6 + 1560[42], GET_COVER_LOCATION_FROM_OBJECT(&Local_6 + 3656), -1.0f, 1086324736);
	TASK_SHOOT_ENEMIES_FROM_COVER(&Local_6 + 1560[102], GET_COVER_LOCATION_FROM_OBJECT(&Local_6 + 3648), -1.0f, 1086324736);
	TASK_SHOOT_ENEMIES_FROM_COVER(&Local_6 + 1560[92], GET_COVER_LOCATION_FROM_OBJECT(&Local_6 + 3664), -1.0f, 1086324736);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_6 + 1744, 0, &Local_6 + 2240, 4);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_6 + 1744, 5, &Local_6 + 2248, 4294967295);
	SQUAD_GOALS_CLEAR(&Local_6 + 1552);
	Function_330(&Local_6 + 1552);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_6 + 1552, 0, &Local_6 + 2216, 3);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_6 + 1552, 0, &Local_6 + 2224, 2);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&Local_6 + 1552, 0, &Local_6 + 2232, 3);
	TASK_USE_GRINGO(&Local_6 + 1400[02], GET_GRINGO_FROM_OBJECT(&iLocal_1010 + 432), "UseCase1", 4294967295, 2);
	return;
}

void Function_465() //Position: 0x19C9E / 105630
{
	(&Local_6 + 1744) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "nRearGuard"));
	*(&Local_6 + 1560[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard1", 373, Vector(453,8115f, 101,5502f, 1516,708f), Vector(0.0f, 302,9411f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[02], &Local_6 + 1744);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[02], 13, 0,5f, 1, 1);
	TASK_STAND_STILL(&Local_6 + 1560[02], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[02]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[02], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[02], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[02], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[02], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[02], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[02], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[02], 13, true);
	*(&Local_6 + 1560[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard2", 374, Vector(453,2494f, 101,5224f, 1515,108f), Vector(0.0f, -59,61174f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[12], &Local_6 + 1744);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[12]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[12], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[12], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[12], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[12], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[12], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[12], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[12], 13, true);
	*(&Local_6 + 1560[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard3", 373, Vector(418,3743f, 106,6682f, 1523,332f), Vector(0.0f, -70,41425f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[22], &Local_6 + 1744);
	AI_GOAL_LOOK_AT_ACTOR(&Local_6 + 1560[22], &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[22]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[22], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[22], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[22], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[22], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[22], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[22], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[22], 13, true);
	*(&Local_6 + 1560[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard4", 372, Vector(419,9846f, 106,5184f, 1525,123f), Vector(0.0f, -27,33479f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[32], &Local_6 + 1744);
	AI_GOAL_LOOK_AT_ACTOR(&Local_6 + 1560[32], &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[32]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[32], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[32], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[32], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[32], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[32], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[32], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[32], 13, true);
	*(&Local_6 + 1560[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard5", 371, Vector(394,3388f, 118,5625f, 1472f), Vector(0.0f, 147,6008f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[42], &Local_6 + 1744);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[42]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[42], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[42], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[42], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[42], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[42], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[42], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[42], 13, true);
	*(&Local_6 + 1560[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard6", 370, Vector(420,4122f, 106,8644f, 1533,038f), Vector(0.0f, 218,0132f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[52], &Local_6 + 1744);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1560[52], 0);
	AI_GOAL_LOOK_AT_ACTOR(&Local_6 + 1560[52], &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[52]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[52], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[52], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[52], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[52], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[52], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[52], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[52], 13, true);
	*(&Local_6 + 1560[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard7", 369, Vector(419,2176f, 107,0408f, 1534,097f), Vector(0.0f, 222,8706f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[62], &Local_6 + 1744);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1560[62], 0);
	AI_GOAL_LOOK_AT_ACTOR(&Local_6 + 1560[62], &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[62]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[62], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[62], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[62], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[62], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[62], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[62], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[62], 13, true);
	*(&Local_6 + 1560[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard8", 378, Vector(411,593f, 108,0688f, 1540,804f), Vector(0.0f, -93,45993f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[72], &Local_6 + 1744);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[72]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[72], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[72], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[72], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[72], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[72], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[72], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[72], 13, true);
	*(&Local_6 + 1560[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard9", 375, Vector(413,9012f, 107,6956f, 1540,845f), Vector(0.0f, 82,24022f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[82], &Local_6 + 1744);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[82]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[82], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[82], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[82], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[82], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[82], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[82], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[82], 13, true);
	*(&Local_6 + 1560[92]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard10", 373, Vector(393,0771f, 118,657f, 1471,106f), Vector(0.0f, 127,7862f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[92], &Local_6 + 1744);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[92]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[92], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[92], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[92], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[92], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[92], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[92], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[92], 13, true);
	*(&Local_6 + 1560[102]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "rearGuard11", 374, Vector(394,957f, 118,4667f, 1472,995f), Vector(0.0f, 154,1053f, 0.0f));
	SQUAD_JOIN(&Local_6 + 1560[102], &Local_6 + 1744);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&Local_6 + 1560[102]);
	GIVE_WEAPON_TO_ACTOR(&Local_6 + 1560[102], 42, 0,999f, 1, 1);
	SET_ACTOR_FACTION(&Local_6 + 1560[102], 20);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&Local_6 + 1560[102], 0.0f);
	AI_RIDING_SET_ENABLED(&Local_6 + 1560[102], 0);
	SET_ACTOR_VISION_XRAY(&Local_6 + 1560[102], 1);
	AI_SET_WEAPON_MAX_RANGE(&Local_6 + 1560[102], 100.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&Local_6 + 1560[102], 13, true);
	return;
}

bool Function_466() //Position: 0x1A5ED / 108013
{
	Function_328(&Local_6 + 680, 378, 2, 0);
	if (Function_321(&Local_6 + 680))
	{
		return 1;
	}
	return 0;
}

void Function_467() //Position: 0x1A60F / 108047
{
	if (iLocal_1165 < 4 && iLocal_1165 > 105)
	{
		SET_ACTOR_HEALTH(&iLocal_1189, GET_ACTOR_MAX_HEALTH(&iLocal_1189));
		Function_527(&Local_6 + 1552, 7.0f);
		Function_527(&Local_6 + 1744, 7.0f);
		Function_524();
		Function_520();
		Function_354(&Local_6 + 1184[02]);
		if (iLocal_1165 <= 11)
		{
			Function_353(&Local_6 + 3904);
		}
		Function_519();
		Function_505();
		if (SQUAD_IS_VALID(&Local_6 + 1896))
		{
			if (!DECOR_CHECK_EXIST(&Local_6 + 1896, "bFlyAway"))
			{
				if (Function_504(&Global_54076, &Local_6 + 1896, 1, 0, 0, 3212836864))
				{
					Function_330(&Local_6 + 1896);
					SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1896, false, 1, 4294967295);
					TASK_BIRD_SOAR_AT_COORD(0, &Local_6 + 3368, -1.0f, 1106247680);
					Function_503();
					DECOR_SET_BOOL(&Local_6 + 1896, "bFlyAway", 1);
				}
			}
		}
		if (IS_ACTOR_VALID(&Local_6 + 1560[12]))
		{
			if (!DECOR_CHECK_EXIST(&Local_6 + 1560[12], "bSpoke"))
			{
				if (!HUD_IS_FADED())
				{
					if (Function_385(&Global_54076, &Local_6 + 1560[12], 24.0f))
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&Local_6 + 1208[02], 4.0f);
						Function_502();
						DECOR_SET_BOOL(&Local_6 + 1560[12], "bSpoke", 1);
					}
				}
			}
		}
		Function_500();
		if (iLocal_1165 <= 9)
		{
			Function_499();
		}
	}
	switch (iLocal_1165)
	{
		case 0x00000000:
			Function_345(0);
			CLEAR_LAST_ATTACK(&Global_54076);
			iLocal_1386 = 0;
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&iLocal_1189, GET_ACTOR_MAX_HEALTH(&iLocal_1189));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(50);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_1197 = Function_344(StackVal, *(&Local_6 + 2376[03]), 0, 1, 1);
			if (!Function_343(iLocal_1197))
			{
			}
			Function_338();
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&Local_6 + 2376[03]), 1, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_1189, *(&Local_6 + 2376[13]), 1, 1, 1);
			Function_336(10, 0, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_329(1);
			Function_223(&Local_6 + 1552);
			Function_223(&Local_6 + 1392);
			Function_225(&iLocal_1360);
			Function_225(&iLocal_1352);
			iLocal_1165 = 1;
			break;
		
		case 0x00000001:
			if (!Global_99145)
			{
				Function_488();
			}
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_343(iLocal_1197) || iLocal_1197 != 4294967295)
				{
					if (Function_487())
					{
						if (Function_321(&iLocal_1218))
						{
							if (MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
							{
								Function_228(1);
								Function_225(&iLocal_1352);
								iLocal_1165 = 2;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_320(&Local_6 + 1184[02]))
			{
				Function_309();
				Function_486();
				Function_483();
				Function_482();
				Function_481();
				Function_480();
				TOGGLE_COVER_PROPS(0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 3;
				if (Function_342(&Local_1152) || Global_99145)
				{
					Function_479();
				}
				Function_239(iLocal_1164);
				Function_310(StackVal, Function_239(iLocal_1164), iLocal_1164, Global_46754[0], Function_241(iLocal_1164), 3);
			}
			break;
		
		case 0x00000003:
			if (Function_488())
			{
				Function_225(&iLocal_1352);
				iLocal_1165 = 4;
			}
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			START_VEHICLE(&Local_6 + 1184[02]);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_1189);
			Function_304(&(Local_1466[015]), &iLocal_1189, "FBI_Ross", 1, 0x5f5e100, 1);
			Function_304(&(Local_1466[115]), &Local_6 + 1208[02], "FBI_Fordham", 1, 0x5f5e100, 1);
			Function_226(&iLocal_1356, 10.0f);
			uLocal_1628 = CREATE_EVENT_TRAP("shootNearSoldiers", 5, &Local_6);
			EVENT_TRAP_ON_VOLUME(&uLocal_1628, &Local_6 + 2368);
			Function_225(&iLocal_1352);
			iLocal_1165 = 5;
			break;
		
		case 0x00000005:
			if ((Function_280(&iLocal_1352) < 2.0f || !HUD_IS_FADED()) && Function_319(&Global_54076))
			{
				TASK_FOLLOW_PATH(&Local_6 + 1208[02], &Local_6 + 3904, 4, 1, 0, 1, 0);
				UI_SHOW("reticule");
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_225(&iLocal_1352);
				iLocal_1165 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "DRAMATIC_IN_CAR", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_278(StackVal, &Global_54076, *(&Local_6 + 3176), 250.0f))
			{
				if (Function_427())
				{
					if (!IS_LAYOUTREF_VALID(&iLocal_1010))
					{
						Function_425();
					}
				}
			}
			if ((Function_278(StackVal, &Global_54076, *(&Local_6 + 3176), 15.0f) && iLocal_1374 >= 1) || Function_474())
			{
				Function_228(0);
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1630))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1630);
				}
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				iLocal_1373 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
				TASK_ACTION_PERFORM(0, "FBI02_soldiers_stn/Soldiers_pre");
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Local_6 + 1560[02], iLocal_1373);
				TASK_SEQUENCE_RELEASE(iLocal_1373, 1);
				AI_GOAL_LOOK_AT_ACTOR(&Local_6 + 1560[02], &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
				TASK_FACE_ACTOR(&Local_6 + 1560[12], &Global_54076, 1, 3212836864);
				Function_221();
				Function_466();
				Function_225(&iLocal_1352);
				iLocal_1165 = 8;
			}
			break;
		
		case 0x00000008:
			if (!DECOR_CHECK_EXIST(&Local_6 + 1400[02], "bLooking"))
			{
				if (IS_ACTOR_VALID(&Local_6 + 1400[02]))
				{
					if (Function_412(&iLocal_1189, &Local_6 + 1400[02], 30.0f))
					{
						Function_473(&Local_6 + 1552, &Global_54076);
						AI_GOAL_LOOK_CLEAR(&Local_6 + 1400[02]);
						AI_GOAL_LOOK_AT_ACTOR(&Local_6 + 1400[02], &iLocal_1189, 1, 1065353216, 3212836864, 3212836864, 0);
						RESET_ANIM_SET_FOR_ACTOR(&Local_6 + 1400[02], 1);
						TASK_FACE_ACTOR(&Local_6 + 1400[02], &iLocal_1189, 1, 3212836864);
						DECOR_SET_BOOL(&Local_6 + 1400[02], "bLooking", 1);
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Local_6 + 1184[02], &Local_6 + 2192))
			{
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&Local_6 + 1208[02], 1);
				AI_GOAL_LOOK_AT_ACTOR(&iLocal_1189, &Local_6 + 1400[02], 1, 1065353216, 3212836864, 3212836864, 0);
				AI_GOAL_LOOK_AT_ACTOR(&Local_6 + 1208[02], &Local_6 + 1400[02], 1, 1065353216, 3212836864, 3212836864, 0);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(&Local_6 + 1400[02], 0);
				Function_472();
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&Local_6 + 1208[02], 0.0f);
				STOP_VEHICLE(&Local_6 + 1184[02]);
				TASK_STAND_STILL(&Local_6 + 1208[02], -1.0f, 0, 0);
				SQUAD_GOALS_CLEAR(&Local_6 + 1552);
				SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1552, false, 1, 4294967295);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				Function_225(&iLocal_1352);
				iLocal_1165 = 9;
			}
			break;
		
		case 0x00000009:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_280(&iLocal_1352) <= 10.0f) || Function_280(&iLocal_1352) <= 35.0f)
			{
				if (IS_OBJECT_VALID(&uLocal_1628))
				{
					DESTROY_OBJECT(&uLocal_1628);
				}
				AI_GOAL_LOOK_CLEAR(&iLocal_1189);
				AI_GOAL_LOOK_CLEAR(&Local_6 + 1208[02]);
				AI_GOAL_LOOK_CLEAR(&Local_6 + 1400[02]);
				Function_471(&Local_6 + 1552);
				Function_471(&Local_6 + 1744);
				iLocal_1374 = 0;
				AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 10;
			}
			else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_280(&iLocal_1356) < 1.0f)
				{
					Function_472();
					Function_225(&iLocal_1356);
				}
			}
			break;
		
		case 0x0000000A:
			Function_468();
			if (Function_280(&iLocal_1352) <= 1.0f)
			{
				START_VEHICLE(&Local_6 + 1184[02]);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&Local_6 + 1208[02]);
				TASK_FOLLOW_PATH(&Local_6 + 1208[02], &Local_6 + 3912, 2, 0, 0, 1, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&Local_6 + 1208[02], true);
				Function_225(&iLocal_1352);
				iLocal_1165 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_468();
			if ((Function_438(&Local_6 + 1208[02], &Local_6 + 3912) > 3.0f || GET_TASK_STATUS(&Local_6 + 1208[02], 16) != 0) || GET_TASK_STATUS(&Local_6 + 1208[02], 16) != 4)
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&Local_6 + 1208[02], 0.0f);
				STOP_VEHICLE(&Local_6 + 1184[02]);
				AI_ACTOR_FORCE_SPEED(&Local_6 + 1208[02], 5);
				TASK_STAND_STILL(&Local_6 + 1208[02], -1.0f, 0, 0);
				Function_225(&iLocal_1352);
				iLocal_1165 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_468();
			if (Function_275(&Local_6 + 1208[02], 0) > 1.0f)
			{
				Function_225(&iLocal_1352);
				iLocal_1165 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_214(&iLocal_1218);
			Function_221();
			iLocal_1198[0] = 1;
			Function_225(&iLocal_1352);
			iLocal_1164 = 1;
			iLocal_1165 = 0;
			break;
	}
	return;
}

void Function_468() //Position: 0x1AF42 / 110402
{
	var uVar0;
	
	switch (iLocal_1374)
	{
		case 0x00000000:
			SQUAD_COMPUTE_CENTROID(&Local_6 + 1552, &uVar0);
			TASK_FACE_COORD(&Local_6 + 1400[02], &uVar0, 1);
			Function_225(&iLocal_1364);
			iLocal_1374 = 1;
			break;
		
		case 0x00000001:
			if (Function_280(&iLocal_1364) <= 1,5f)
			{
				SAY_SINGLE_LINE_SCRIPTED(&Local_6 + 1400[42], "FBI02_InFormation_v1_AB", 0, 1, 1, 0, 0, 0);
				Function_225(&iLocal_1364);
				iLocal_1374 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_280(&iLocal_1364) <= 1,5f)
			{
				Function_225(&iLocal_1364);
				iLocal_1374 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_280(&iLocal_1364) <= 1,5f)
			{
				Function_470(&Local_6 + 1552, 0);
				Function_464();
				Function_225(&iLocal_1364);
				iLocal_1374 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_280(&iLocal_1364) <= 1,5f)
			{
				Function_469();
				Function_225(&iLocal_1364);
				iLocal_1374 = 5;
			}
			break;
	}
	return;
}

void Function_469() //Position: 0x1B042 / 110658
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_MovePositions_v1_AA", "FBI02_MovePositions_v1_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI01_RideOutDutch_v2_AB", "FBI01_RideOutDutch_v2_AB", 1, 2, 1, 0, 1);
		Function_391(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470(var uParam0, int iParam1) //Position: 0x1B0DC / 110812
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
			RESET_ANIM_SET_FOR_ACTOR(&uVar1, &iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_471(bool bParam0) //Position: 0x1B123 / 110883
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_LOOK_CLEAR(&uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_472() //Position: 0x1B16A / 110954
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_RossTalksAtCamp_v1_AA", "FBI02_RossTalksAtCamp_v1_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "FBI02_RossTalksAtCamp_v1_AB", "FBI02_RossTalksAtCamp_v1_AB", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_RossTalksAtCamp_v1_AC", "FBI02_RossTalksAtCamp_v1_AC", 0, 2, 0, 0, 1);
		Function_391(19);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473(var uParam0, bool bParam1) //Position: 0x1B254 / 111188
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_GOAL_LOOK_AT_ACTOR(&uVar1, &bParam1, 1, 1.0f, 1000.0f, 1001.0f, 1);
		}
		bVar0++;
	}
	return;
}

int Function_474() //Position: 0x1B2B6 / 111286
{
	var uVar0;
	
	switch (iLocal_1374)
	{
		case 0x00000000:
			if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1630))
			{
				uLocal_1630 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", 0, "@UI.ACCEPT", 0, 0, 0, 0, 4294967295, 0);
				iLocal_1374 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1630))
			{
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1630))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1630);
					Function_89(17, 1, 0, 0);
					HUD_CLEAR_SMALL_TEXT();
					ABORT_SCRIPTED_CONVERSATION(0);
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
					iLocal_1374 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				if (IS_LAYOUTREF_VALID(&iLocal_1010))
				{
					SET_ACTOR_SPEED(&Local_6 + 1184[02], 0.0f);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Local_6 + 1184[02], *(&Local_6 + 3176), 1, 1, 1);
					if (IS_VOLUME_VALID(&Local_6 + 2088[4]))
					{
						Function_478(&Local_6 + 1904);
						Function_478(&Local_6 + 1912);
						DESTROY_VOLUME(&Local_6 + 2088[4]);
						Function_223(&Local_6 + 1920);
						Function_477();
						Function_475();
						Function_228(0);
					}
					TASK_STAND_STILL(&Local_6 + 1208[02], -1.0f, 0, 0);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					iLocal_1374 = 3;
				}
				else if (Function_427())
				{
					if (!IS_LAYOUTREF_VALID(&iLocal_1010))
					{
						iLocal_1385 = 1;
						Function_425();
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Function_278(StackVal, &Local_6 + 1184[02], *(&Local_6 + 3176), 5.0f))
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (!IS_VEHICLE_ENGINE_RUNNING(&Local_6 + 1184[02]))
					{
						START_VEHICLE(&Local_6 + 1184[02]);
					}
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&Local_6 + 1208[02], &Local_6 + 3904, 4, 1, 0, 1, 0);
					iLocal_1374 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (Function_318(&Global_54076))
			{
				ACTIVATE_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Local_6 + 1184[02]));
				uVar0 = Vector(0.0f, -0,1f, 0.0f);
				SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(&Local_6 + 1184[02]), &uVar0);
				ACTIVATE_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Local_6 + 1208[02]));
				uVar0 = Vector(0.0f, -0,1f, 0.0f);
				SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(&Local_6 + 1208[02]), &uVar0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				AI_ACTOR_FORCE_SPEED(&Local_6 + 1208[02], 4);
				HUD_FADE_IN(1.0f, 1065353216);
				iLocal_1374 = 5;
			}
			break;
		
		case 0x00000005:
			if (!HUD_IS_FADING())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_475() //Position: 0x1B513 / 111891
{
	if (SQUAD_IS_VALID(&Local_6 + 1552))
	{
		Function_283(&Local_6 + 1552);
		DESTROY_OBJECT(&Local_6 + 1552);
	}
	if (SQUAD_IS_VALID(&Local_6 + 1392))
	{
		Function_283(&Local_6 + 1392);
		DESTROY_OBJECT(&Local_6 + 1392);
	}
	Function_334();
	Function_335();
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Local_6 + 1400[02], 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1552, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1392, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_465();
	SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1744, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_USE_GRINGO(&Local_6 + 1560[12], GET_GRINGO_FROM_OBJECT(&iLocal_1010 + 416), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO(&Local_6 + 1560[42], GET_GRINGO_FROM_OBJECT(&iLocal_1010 + 424), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO(&Local_6 + 1560[32], GET_GRINGO_FROM_OBJECT(&iLocal_1010 + 440), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO(&Local_6 + 1560[22], GET_GRINGO_FROM_OBJECT(&iLocal_1010 + 448), "UseCase1", 4294967295, 1);
	Function_476();
	SET_ANIM_SET_FOR_ACTOR(&Local_6 + 1560[02], "FBI02_soldiers_stn", 0);
	SET_ACTION_NODE_FOR_ACTOR(&Local_6 + 1560[02], "FBI02_soldiers_stn/Soldiers_idl");
	Function_304(&(Local_1466[215]), &Local_6 + 1552, "AmericanSoldier", 1, 0x5f5e100, 1);
	Function_299(&(Local_1466[215]), 42);
	Function_304(&(Local_1466[315]), &Local_6 + 1744, "AmericanSoldier", 1, 0x5f5e100, 1);
	Function_299(&(Local_1466[315]), 42);
	Function_304(&(Local_1466[415]), &Local_6 + 1392, "AmericanSoldier_horse", 1, 0x5f5e100, 1);
	Function_299(&(Local_1466[415]), 42);
	return;
}

void Function_476() //Position: 0x1B728 / 112424
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_6 + 1552) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_6 + 1552, bVar0);
		ACTOR_DRAW_ANY_WEAPON(&uVar1, 0);
		RESET_ANIM_SET_FOR_ACTOR(&uVar1, 0);
		SET_ANIM_SET_FOR_ACTOR(&uVar1, "fbi02_rifle_stand", 0);
		switch (RAND_INT_RANGE(0, 2))
		{
			case 0x00000000:
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "fbi02_rifle_stand/A");
				break;
			
			case 0x00000001:
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "fbi02_rifle_stand/B");
				break;
			
			case 0x00000002:
				SET_ACTION_NODE_FOR_ACTOR(&uVar1, "fbi02_rifle_stand/C");
				break;
		}
		bVar0++;
	}
	RESET_ANIM_SET_FOR_ACTOR(&Local_6 + 1400[02], 0);
	SET_ANIM_SET_FOR_ACTOR(&Local_6 + 1400[02], "fbi_commander", 0);
	SET_ACTION_NODE_FOR_ACTOR(&Local_6 + 1400[02], "fbi_commander/talking");
	return;
}

void Function_477() //Position: 0x1B852 / 112722
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_6 + 1896) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "theBirds"));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "bird1", 1132, Vector(567,7019f, 89,29438f, 1411,659f), Vector(0.0f, 175,0234f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1896);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "bird2", 1132, Vector(567,3667f, 89,31069f, 1413,338f), Vector(0.0f, 358,2055f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1896);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "bird3", 1132, Vector(567,3114f, 89,63567f, 1412,429f), Vector(0.0f, 238,8174f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1896);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "bird4", 1132, Vector(567,9818f, 89,19457f, 1412,028f), Vector(0.0f, 238,8174f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1896);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "bird5", 1132, Vector(568,3037f, 89,19457f, 1411,766f), Vector(0.0f, 219,1082f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1896);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "bird6", 1132, Vector(567,6915f, 89,32242f, 1412,504f), Vector(0.0f, 113,533f, 0.0f));
	SQUAD_JOIN(&iVar0, &Local_6 + 1896);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	return;
}

void Function_478(var uParam0) //Position: 0x1BA04 / 113156
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			DESTROY_OBJECT(&uVar0);
		}
	}
	return;
}

void Function_479() //Position: 0x1BA53 / 113235
{
	var uVar0;
	
	uVar0 = GET_GRINGO_FROM_OBJECT(&uLocal_1393);
	TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Global_54076, &uLocal_1393, Vector(0.0f, 0.0f, 0,5f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
	GRINGO_SET_USABLE_BY_PLAYER(&uVar0, "MaximShootTruck", 0);
	GRINGO_SET_USABLE_BY_PLAYER(&uVar0, "MaximShoot", 1);
	SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_1393, "MaximShoot", true, 0, 0);
	UI_HIDE("reticule");
	return;
}

void Function_480() //Position: 0x1BAD7 / 113367
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uLocal_1391))
	{
		REMOVE_OBJECT_ATTACHMENT(_GET_OBJECT_ATTACHMENT(&uLocal_1391));
		GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(&Local_6 + 1184[02]), "gattling_attach", &Var0, &Var2);
		ATTACH_OBJECTS(&uLocal_1391, &Local_6 + 1184[02], Function_54(), Var0, Var2, 4294967295);
	}
	return;
}

void Function_481() //Position: 0x1BB34 / 113460
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&Local_6 + 1920) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Local_6 + 1920, bVar0);
		TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
		ACTOR_PUT_WEAPON_IN_HAND(&uVar1, 13, 0);
		SET_ANIM_SET_FOR_ACTOR(&uVar1, "FBI02_soldiers_stn", 0);
		SET_ACTION_NODE_FOR_ACTOR(&uVar1, "FBI02_soldiers_stn/Soldiers_idl");
		if (bVar0 >= 0)
		{
			AI_GOAL_LOOK_AT_NEUTRAL(&uVar1, -1.0f);
		}
		else
		{
			AI_GOAL_LOOK_AT_ACTOR(&uVar1, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
		}
		bVar0++;
	}
	return;
}

void Function_482() //Position: 0x1BBE7 / 113639
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	*(&Local_6 + 1920) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Local_6, "blkArmy"));
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "blkArmy_sgt", 375, Vector(785,4946f, 78,30585f, 1249,259f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nblkArmy_1", 374, Vector(785,5227f, 78,30585f, 1256,132f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nblkArmy_8", 369, Vector(784,0264f, 78,30585f, 1252,65f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nblkArmy_2", 373, Vector(785,5715f, 78,30585f, 1254,398f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nblkArmy_3", 371, Vector(784,1702f, 78,30585f, 1254,592f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nblkArmy_4", 370, Vector(784,1055f, 78,30585f, 1256,07f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nblkArmy_5", 372, Vector(785,4901f, 78,30586f, 1250,917f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nblkArmy_6", 373, Vector(785,4409f, 78,30585f, 1252,668f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "nblkArmy_7", 369, Vector(784,0623f, 78,30585f, 1250,865f), Vector(0.0f, -89,76551f, 0.0f));
	SQUAD_JOIN(&uVar0, &Local_6 + 1920);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	GIVE_WEAPON_TO_ACTOR(&uVar0, 13, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uVar0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	return;
}

void Function_483() //Position: 0x1BF6B / 114539
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&Local_6 + 1912) = CREATE_OBJECTSET_IN_LAYOUT("townFolk_2", &Local_6, 15, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_speaker_3", 52, Vector(745,9465f, 78,30585f, 1389,185f), Vector(0.0f, -66,81185f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &Local_6 + 1912);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&iVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	TASK_PRIORITY_SET(&iVar0, 2);
	iVar0 = Function_484(StackVal, StackVal, &Local_6, "townGuy_speaker_5", 87, Function_54(), 984, Vector(772,0708f, 78,30721f, 1387,651f), Vector(0.0f, -68,87864f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &Local_6 + 1912);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&iVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	TASK_PRIORITY_SET(&iVar0, 2);
	iVar0 = Function_484(StackVal, StackVal, &Local_6, "horseGuy_rdm_1", 228, Function_54(), 985, Vector(773,0982f, 78,30721f, 1390,311f), Vector(0.0f, -68,87864f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &Local_6 + 1912);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&iVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	TASK_PRIORITY_SET(&iVar0, 2);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "walker1_rdm_1", 53, Vector(745,6218f, 78,30585f, 1387,688f), Vector(0.0f, -74,80203f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &Local_6 + 1912);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&iVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	TASK_PRIORITY_SET(&iVar0, 2);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "walker2_rdm_1", 89, Vector(728,213f, 78,30585f, 1381,394f), Vector(0.0f, 183,5235f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &Local_6 + 1912);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&iVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	TASK_PRIORITY_SET(&iVar0, 2);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "walker2_rdm_2", 87, Vector(729,435f, 78,30585f, 1381,815f), Vector(0.0f, 178,893f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar0, &Local_6 + 1912);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&iVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	TASK_PRIORITY_SET(&iVar0, 2);
	return;
}

var Function_484(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x1C243 / 115267
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_485(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_485(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &fParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_485(int iParam0) //Position: 0x1C37B / 115579
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_486() //Position: 0x1C392 / 115602
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	(&Local_6 + 1904) = CREATE_OBJECTSET_IN_LAYOUT("townFolk_1", &Local_6, 15, 0);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_speaker_1", 160, Vector(796,5785f, 78,30591f, 1325,698f), Vector(0.0f, 195,8002f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_speaker_2", 161, Vector(798,4022f, 78,47489f, 1293,726f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_speaker_6", 45, Vector(780,794f, 78,30585f, 1345,855f), Vector(0.0f, -25,31391f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_rdm_1", 96, Vector(801,4587f, 78,47489f, 1292,484f), Vector(0.0f, -50,79493f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_rdm_2", 151, Vector(802,3169f, 78,47489f, 1291,784f), Vector(0.0f, -237,1222f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_rdm_3", 169, Vector(796,2884f, 79,6116f, 1264,465f), Vector(0.0f, 83,33788f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_PRIORITY_SET(&uVar0, 2);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_rdm_4", 166, Vector(796,274f, 79,6116f, 1263,737f), Vector(0.0f, 83,33788f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_PRIORITY_SET(&uVar0, 2);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_rdm_5", 89, Vector(779,9691f, 78,30585f, 1294,843f), Vector(0.0f, 183,6397f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_rdm_6", 223, Vector(780,1486f, 78,30585f, 1295,922f), Vector(0.0f, 4,356511f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "ngun_rdm_1", 87, Vector(780,0002f, 78,30585f, 1312,527f), Vector(0.0f, -2,961067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_speaker_4", 229, Vector(780,7594f, 78,30585f, 1312,28f), Vector(0.0f, 29,90821f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "ngun_rdm_3", 146, Vector(780,0002f, 78,30585f, 1311,137f), Vector(0.0f, 211,3952f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "fact_rdm_1", 41, Vector(796,6411f, 78,30591f, 1327,522f), Vector(0.0f, 7,898496f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "fact_rdm_2", 159, Vector(799,027f, 78,30591f, 1327,48f), Vector(0.0f, -39,18901f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "fact_rdm_3", 158, Vector(800,4258f, 78,30591f, 1325,725f), Vector(0.0f, 132,8452f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "townGuy_rdm_7", 44, Vector(781,2634f, 78,30585f, 1346,459f), Vector(0.0f, -25,31391f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar0, &Local_6 + 1904);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	AI_GOAL_LOOK_AT_ACTOR(&uVar0, &Global_54076, 1, 1.0f, 1000.0f, 1001.0f, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar0, 1);
	TASK_PRIORITY_SET(&uVar0, 2);
	return;
}

bool Function_487() //Position: 0x1CAA9 / 117417
{
	Function_328(&Local_6 + 320, 378, 2, 0);
	Function_328(&Local_6 + 320, 1132, 2, 0);
	Function_328(&Local_6 + 320, 160, 2, 0);
	Function_328(&Local_6 + 320, 161, 2, 0);
	Function_328(&Local_6 + 320, 45, 2, 0);
	Function_328(&Local_6 + 320, 96, 2, 0);
	Function_328(&Local_6 + 320, 151, 2, 0);
	Function_328(&Local_6 + 320, 169, 2, 0);
	Function_328(&Local_6 + 320, 166, 2, 0);
	Function_328(&Local_6 + 320, 89, 2, 0);
	Function_328(&Local_6 + 320, 223, 2, 0);
	Function_328(&Local_6 + 320, 87, 2, 0);
	Function_328(&Local_6 + 320, 229, 2, 0);
	Function_328(&Local_6 + 320, 146, 2, 0);
	Function_328(&Local_6 + 320, 41, 2, 0);
	Function_328(&Local_6 + 320, 159, 2, 0);
	Function_328(&Local_6 + 320, 158, 2, 0);
	Function_328(&Local_6 + 320, 44, 2, 0);
	Function_328(&Local_6 + 320, 52, 2, 0);
	Function_328(&Local_6 + 320, 228, 2, 0);
	Function_328(&Local_6 + 320, 985, 2, 0);
	Function_328(&Local_6 + 320, 53, 2, 0);
	if (Function_321(&Local_6 + 320))
	{
		return 1;
	}
	return 0;
}

bool Function_488() //Position: 0x1CBDE / 117726
{
	if (Global_99145)
	{
		return 1;
	}
	Function_496(&Local_1166, 1);
	switch (Local_1166)
	{
		case 0x000003E8:
			if (Function_342(&Local_1152) || Local_1152.f_40 < 1)
			{
				Local_1166 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/FBI_02_Seq/FBI_02_Seq"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_1166 = 1106;
				return 0;
			}
			ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
			ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
			ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
			ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
			DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_349(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_494(StackVal, &iLocal_1150, *(&Global_6667[4728] + 88), &Local_1166 + 32, 0, 0, 0, 0, 1, 1);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(50);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_338();
			Function_184(1, 0, 1);
			Global_99147 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/FBI_02_Seq/FBI_02_Seq", 0, 2, 1, 2, 2);
			Local_1166.f_40 = 0;
			Function_225(&Local_1166 + 4);
			Local_1166 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_280(&Local_1166 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1166 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_1166 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_493();
			Function_321(&iLocal_1208);
			if (IS_ACTOR_VALID(&Local_6 + 1184[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&Local_6 + 1184[02]);
			}
			if (IS_ACTOR_VALID(&iLocal_1189))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_1189);
			}
			if (IS_ACTOR_VALID(&Local_6 + 1208[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&Local_6 + 1208[02]);
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1166 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Function_492(&iLocal_1150, 37,33f, 1, 0.0f, 2.0f, 1, 7, 0, 0, 0, 0, 0, 0, 0);
				Function_490(StackVal, StackVal, Vector(786,545f, 80,996f, 1225,384f), Vector(-0,006f, -0,051f, 0,999f), 0x40a00000, 0, 1);
				Function_479();
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x000003ED:
			if (Function_319(&Global_54076))
			{
				TASK_FOLLOW_PATH(&Local_6 + 1208[02], &Local_6 + 3904, 4, 1, 0, 1, 0);
				Function_225(&Local_1166 + 4);
				Local_1166 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (Function_280(&Local_1166 + 4) <= 1.0f)
			{
				Function_208();
				Function_225(&Local_1166 + 4);
				Local_1166 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_280(&Local_1166 + 4) <= 2.0f)
			{
				Local_1166 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				if (iLocal_1165 != 3 && iLocal_1164 != 0)
				{
					Function_489(1, 1);
					DISABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
					DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
					DISABLE_CHILD_SECTOR("blk_policeStation_int_01x");
					DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
					ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
					AI_STOP_IGNORING_ACTORS();
					if (Local_1166.f_40)
					{
						Function_479();
					}
					Global_99147 = 0;
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1166 + 32);
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_1166 + 32);
					DESTROY_VOLUME(&Local_1166 + 32);
					Function_272(2, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1);
					Local_1166 = 1000;
				}
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_99147 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				Local_1166.f_40 = 1;
				Local_1166 = 1104;
			}
			break;
		
		case 0x00000452:
			Global_99147 = 0;
			Local_1166 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_489(bool bParam0, bool bParam1) //Position: 0x1D11C / 119068
{
	if (&bParam0)
	{
		if (VMAG(*(&Global_99148 + 48)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(&Global_99148))
	{
		if (!&bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
		}
		DESTROY_OBJECT(&Global_99148);
	}
	return;
}

void Function_490(struct<2> Param0, struct<2> Param2, int iParam4, var uParam5, var uParam6) //Position: 0x1D172 / 119154
{
	Function_491(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (&iParam4 >= 0.0f)
	{
		iParam4 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &uParam6);
	Global_99148.f_8 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, 0f, &iParam4);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam5))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &uParam5, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_491(float fParam0) //Position: 0x1D28B / 119435
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_492(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, var uParam13) //Position: 0x1D29E / 119454
{
	Function_489(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	Global_99148.f_16 = &uParam3;
	Global_99148.f_20 = &uParam4;
	Global_99148.f_24 = &uParam5;
	Global_99148.f_28 = &uParam6;
	Global_99148.f_32 = &uParam7;
	Global_99148.f_36 = &uParam8;
	Global_99148.f_40 = &uParam9;
	Global_99148.f_44 = &fParam10;
	Global_99148.f_48 = &fParam11;
	(&Global_99148 + 48)->f_4 = &fParam12;
	(&Global_99148 + 48)->f_8 = &uParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	if (&bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &uParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &uParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam1);
	Global_99148.f_8 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

bool Function_493() //Position: 0x1D3A7 / 119719
{
	Function_328(&Local_6 + 8, 1193, 2, 0);
	Function_328(&Local_6 + 8, 641, 2, 0);
	Function_328(&Local_6 + 8, 983, 2, 0);
	Function_328(&Local_6 + 8, 977, 2, 0);
	Function_328(&Local_6 + 8, 976, 2, 0);
	Function_328(&Local_6 + 8, 980, 2, 0);
	Function_328(&Local_6 + 8, 981, 2, 0);
	Function_328(&Local_6 + 8, 986, 2, 0);
	Function_328(&Local_6 + 8, 984, 2, 0);
	Function_328(&Local_6 + 8, 376, 2, 0);
	Function_328(&Local_6 + 8, 373, 2, 0);
	Function_328(&Local_6 + 8, 374, 2, 0);
	Function_328(&Local_6 + 8, 370, 2, 0);
	Function_328(&Local_6 + 8, 375, 2, 0);
	Function_328(&Local_6 + 8, 372, 2, 0);
	Function_328(&Local_6 + 8, 371, 2, 0);
	Function_328(&Local_6 + 8, 369, 2, 0);
	Function_428(&Local_6 + 8, "p_gen_detonator01x", 0, 0);
	Function_428(&Local_6 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	if (Function_321(&Local_6 + 8))
	{
		return 1;
	}
	return 0;
}

void Function_494(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, bool bParam8, bool bParam9) //Position: 0x1D4F4 / 120052
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &uParam5;
	Var2.f_4 = &uParam6;
	Var2.f_8 = &uParam7;
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
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &uParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_495(&uVar1, &uParam0);
			}
		}
		if (!Function_74(StackVal, Var2))
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

void Function_495(var uParam0, int iParam1) //Position: 0x1D794 / 120724
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
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &iParam1);
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
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &iParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_496(var uParam0, int iParam1) //Position: 0x1D816 / 120854
{
	Function_497(&uParam0, &iParam1, 0);
	return;
}

void Function_497(var uParam0, bool bParam1, bool bParam2) //Position: 0x1D826 / 120870
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
			Function_498(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
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
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_498(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_498(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x1D99E / 121246
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

void Function_499() //Position: 0x1D9C8 / 121288
{
	if (IS_ACTOR_SHOOTING(&Global_54076))
	{
		if (Function_280(&iLocal_1356) < 10.0f)
		{
			if (!IS_ACTOR_IN_VOLUME(&Local_6 + 1184[02], &Local_6 + 2192))
			{
				Function_225(&iLocal_1356);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1189, "FBI02_ShootsBeforeENems", "FBI02_ShootsBeforeENems", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
			}
		}
	}
	return;
}

void Function_500() //Position: 0x1DA4B / 121419
{
	int iVar0;
	
	iVar0 = GET_LAST_ATTACK_TARGET(&Global_54076);
	if (!bLocal_1179)
	{
		if (IS_ACTOR_SHOOTING(&Global_54076) && IS_ACTOR_VALID(&iVar0))
		{
			if (((((&iVar0 == &Local_6 + 1184[02] && &iVar0 == &iLocal_1189) && &iVar0 == &Local_6 + 1208[02]) && !Function_501(&iVar0, &Local_6 + 1744, 1)) && !Function_501(&iVar0, &Local_6 + 1552, 1)) && (IS_ACTOR_MOUNTED(&iVar0) || !IS_ACTOR_ANIMAL(&iVar0)))
			{
				if (IS_ACTOR_IN_VOLUME(&iVar0, &Local_6 + 2288))
				{
					if (Function_501(&iVar0, &Local_6 + 1920, 1))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iVar0, 1);
					}
					Function_233("Fbi02_fail_firedEarly");
					bLocal_1179 = true;
				}
			}
		}
	}
	return;
}

bool Function_501(int iParam0, int iParam1, bool bParam2) //Position: 0x1DB0C / 121612
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

void Function_502() //Position: 0x1DB54 / 121684
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "FBI02_SpotsWarWagon", "FBI02_SpotsWarWagon", 0, 2, 1, 0, 1);
		Function_391(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_503() //Position: 0x1DBA4 / 121764
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_ShootsObjects", "FBI02_ShootsObjects", 0, 2, 1, 0, 1);
		Function_391(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_504(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1DBF3 / 121843
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_404(&uParam0, &uVar1, uParam2, &uParam3, &uParam4, &uParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_505() //Position: 0x1DC5E / 121950
{
	Function_517();
	if (IS_VOLUME_VALID(&Local_6 + 2088[4]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[4]))
		{
			Function_478(&Local_6 + 1904);
			Function_516(&Local_6 + 1912);
			DESTROY_VOLUME(&Local_6 + 2088[4]);
			iLocal_1387 = 1;
			Function_223(&Local_6 + 1920);
			Function_477();
			Function_228(0);
		}
	}
	else if (Function_427())
	{
		if (!iLocal_1385)
		{
			if (!IS_LAYOUTREF_VALID(&iLocal_1010))
			{
				Function_425();
				Function_475();
				iLocal_1385 = 1;
			}
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2368))
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_1628))
		{
			DESTROY_VOLUME(&Local_6 + 2368);
			DESTROY_OBJECT(&uLocal_1628);
			Function_470(&Local_6 + 1920, 0);
			SQUAD_GOALS_CLEAR(&Local_6 + 1920);
			Function_330(&Local_6 + 1920);
			SQUAD_GOAL_ADD_GENERAL_TASK(&Local_6 + 1920, false, 0, 4294967295);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
			Function_401(&Local_6 + 1920, &Global_54076, 4);
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2088[8]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[8]))
		{
			DESTROY_VOLUME(&Local_6 + 2088[8]);
			Function_515();
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2088[0]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[0]))
		{
			DESTROY_VOLUME(&Local_6 + 2088[0]);
			Function_514();
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2088[1]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[1]))
		{
			DESTROY_VOLUME(&Local_6 + 2088[1]);
			Function_513();
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2088[2]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[2]))
		{
			DESTROY_VOLUME(&Local_6 + 2088[2]);
			Function_512();
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2088[3]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[3]))
		{
			DESTROY_VOLUME(&Local_6 + 2088[3]);
			Function_510();
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2088[5]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[5]))
		{
			DESTROY_VOLUME(&Local_6 + 2088[5]);
			Function_509();
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2088[6]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[6]))
		{
			DESTROY_VOLUME(&Local_6 + 2088[6]);
			Function_508();
		}
	}
	if (IS_VOLUME_VALID(&Local_6 + 2088[7]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_1189, &Local_6 + 2088[7]))
		{
			DESTROY_VOLUME(&Local_6 + 2088[7]);
			Function_506();
		}
	}
	return;
}

void Function_506() //Position: 0x1DECC / 122572
{
	var uVar0;
	int iVar1;
	
	uVar0 = FIND_ACTOR_IN_LAYOUT(&Local_6, "walker2_rdm_1");
	iVar1 = FIND_ACTOR_IN_LAYOUT(&Local_6, "walker2_rdm_2");
	AI_AVOID_IGNORE_ACTOR(&uVar0, &iVar1);
	Function_507(&uVar0, &Local_6 + 4000, 0,7f, 1);
	Function_507(&iVar1, &Local_6 + 4000, -0,7f, 1);
	return;
}

void Function_507(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1DF31 / 122673
{
	int iVar0;
	
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH(0, &uParam1, 1, 0, 0, 1, iParam2);
	if (bParam3)
	{
		TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
	}
	else
	{
		TASK_STAND_STILL(false, -1.0f, 0, 0);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uParam0, iVar0);
	TASK_SEQUENCE_RELEASE(iVar0, 1);
	TASK_PRIORITY_SET(&uParam0, 2);
	AI_GOAL_LOOK_AT_ACTOR(&uParam0, &iLocal_1189, 1, 1.0f, 100.0f, 1000.0f, 1);
}

void Function_508() //Position: 0x1DF97 / 122775
{
	var uVar0;
	var uVar1;
	
	uVar0 = FIND_ACTOR_IN_LAYOUT(&Local_6, "townGuy_speaker_3");
	uVar1 = FIND_ACTOR_IN_LAYOUT(&Local_6, "walker1_rdm_1");
	AI_AVOID_IGNORE_ACTOR(&uVar0, &uVar1);
	Function_507(&uVar0, &Local_6 + 3992, 0,7f, 1);
	Function_507(&uVar1, &Local_6 + 3992, -0,7f, 1);
	return;
}

void Function_509() //Position: 0x1E000 / 122880
{
	var uVar0;
	var uVar1;
	
	uVar0 = FIND_ACTOR_IN_LAYOUT(&Local_6, "townGuy_speaker_5");
	uVar1 = FIND_ACTOR_IN_LAYOUT(&Local_6, "horseGuy_rdm_1");
	AI_AVOID_IGNORE_ACTOR(&uVar0, &uVar1);
	Function_507(&uVar0, &Local_6 + 3984, -1,2f, 0);
	Function_507(&uVar1, &Local_6 + 3984, 1,2f, 0);
	ADD_OBJECT_TO_OBJECTSET(GET_MOUNT(&uVar0), &Local_6 + 1912);
	ADD_OBJECT_TO_OBJECTSET(GET_MOUNT(&uVar1), &Local_6 + 1912);
	return;
}

void Function_510() //Position: 0x1E08A / 123018
{
	Function_511("townGuy_speaker_1", "fact_react_1", 1, "null", "null", 0);
	Function_511("fact_rdm_1", "fact_react_2", 1, "null", "null", 0);
	Function_511("fact_rdm_2", "fact_react_3", 1, "null", "null", 0);
	Function_511("fact_rdm_3", "fact_react_4", 1, "null", "null", 0);
	TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_6, "townGuy_speaker_6"), &Global_54076, 1, 3212836864);
	TASK_PRIORITY_SET(FIND_ACTOR_IN_LAYOUT(&Local_6, "townGuy_speaker_6"), 2);
	TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_6, "townGuy_rdm_7"), &Global_54076, 1, 3212836864);
	TASK_PRIORITY_SET(FIND_ACTOR_IN_LAYOUT(&Local_6, "townGuy_speaker_6"), 2);
	return;
}

void Function_511(var uParam0, var uParam1, int iParam2, char* cParam3, int iParam4, bool bParam5) //Position: 0x1E1D9 / 123353
{
	var uVar0;
	var uVar2;
	int iVar3;
	int iVar4;
	
	cParam3 = &cParam3;
	iParam4 = &iParam4;
	iVar3 = FIND_ACTOR_IN_LAYOUT(&Local_6, &uParam0);
	uVar2 = FIND_OBJECT_IN_LAYOUT(&Local_6, &uParam1);
	GET_OBJECT_POSITION(&uVar2, &uVar0);
	AI_SET_NAV_PATHFINDING_ENABLED(&iVar3, 0);
	iVar4 = TASK_SEQUENCE_OPEN();
	if (&bParam5 < 0.0f)
	{
		TASK_STAND_STILL(false, &bParam5, 0, 0);
	}
	TASK_GO_TO_COORD(0, &uVar0, iParam2);
	TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iVar3, iVar4);
	TASK_SEQUENCE_RELEASE(iVar4, 1);
	TASK_PRIORITY_SET(&iVar3, 2);
	AI_GOAL_LOOK_AT_ACTOR(&iVar3, &iLocal_1189, 1, 1.0f, 100.0f, 1000.0f, 1);
}

void Function_512() //Position: 0x1E270 / 123504
{
	Function_511("ngun_rdm_1", "gun_react_1", 1, "null", "null", 0);
	Function_511("townGuy_speaker_4", "gun_react_2", 1, "null", "null", 0);
	Function_511("ngun_rdm_3", "gun_react_3", 1, "null", "null", 0);
	return;
}

void Function_513() //Position: 0x1E305 / 123653
{
	Function_511("townGuy_rdm_5", "tailor_react_1", 1, "null", "null", 0);
	Function_511("townGuy_rdm_6", "tailor_react_2", 1, "null", "null", 0);
	return;
}

void Function_514() //Position: 0x1E373 / 123763
{
	Function_511("townGuy_speaker_2", "docks_react_1", 2, "null", "null", 0);
	Function_511("townGuy_rdm_1", "docks_react_3", 2, "talking_stand", "talking_stand/Listen_B", 0,2f);
	Function_511("townGuy_rdm_2", "docks_react_2", 2, "talking_stand", "talking_stand/Listen_B", 0.0f);
	return;
}

void Function_515() //Position: 0x1E450 / 123984
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_SetOffForCamp", "FBI02_SetOffForCamp", 0, 2, 1, 0, 1);
		Function_391(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516(var uParam0) //Position: 0x1E49F / 124063
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_OBJECT_REF(&uVar0);
		}
	}
	return;
}

void Function_517() //Position: 0x1E4EE / 124142
{
	Function_518("townGuy_speaker_1", 1, 12.0f, 0);
	Function_518("townGuy_speaker_2", 2, 22.0f, 1);
	Function_518("townGuy_speaker_3", 3, 21.0f, 1);
	Function_518("townGuy_speaker_4", 4, 17.0f, 0);
	Function_518("townGuy_speaker_5", 5, 18.0f, 0);
	Function_518("townGuy_speaker_6", 6, 18.0f, 0);
	if (DECOR_CHECK_EXIST(FIND_ACTOR_IN_LAYOUT(&Local_6, "townGuy_speaker_3"), "bSpoke"))
	{
		TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_6, "townGuy_speaker_3"), &Global_54076, 1, 3212836864);
		TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(&Local_6, "walker1_rdm_1"), &Global_54076, 1, 3212836864);
	}
	return;
}

void Function_518(var uParam0, int iParam1, float fParam2, bool bParam3) //Position: 0x1E61B / 124443
{
	var uVar0;
	char* cVar1[24];
	
	strcpy(&cVar1, "FBI02_Amazed_0", 24);
	straddi(&cVar1, iParam1, 24);
	uVar0 = FIND_ACTOR_IN_LAYOUT(&Local_6, &uParam0);
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (!DECOR_CHECK_EXIST(&uVar0, "bSpoke"))
		{
			if (Function_385(&uVar0, &iLocal_1189, fParam2))
			{
				DECOR_SET_BOOL(&uVar0, "bSpoke", 1);
				SAY_SINGLE_LINE_SCRIPTED(&uVar0, &cVar1, 0, 1, 1, 0, 0, 0);
				if (&bParam3)
				{
					SET_ANIM_SET_FOR_ACTOR(&uVar0, "aiming_point", 0);
					SET_ACTION_NODE_FOR_ACTOR(&uVar0, "aiming_point");
					AI_GOAL_AIM_AT_OBJECT(&uVar0, &iLocal_1189, 0);
					DECOR_SET_FLOAT(&uVar0, "fPointTimeStart", GET_CURRENT_GAME_TIME());
				}
				PRINTSTRING("tried to say ");
				PRINTSTRING(&cVar1);
				PRINTNL();
			}
		}
		else if (DECOR_CHECK_EXIST(&uVar0, "fPointTimeStart"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar0, "fPointTimeStart")) < 2,6f)
			{
				AI_GOAL_AIM_CLEAR(&uVar0);
				RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				DECOR_REMOVE(&uVar0, "fPointTimeStart");
			}
		}
	}
}

void Function_519() //Position: 0x1E772 / 124786
{
	if (iLocal_1386)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			TASK_OVERRIDE_CLEAR_MOVETYPE(&Local_6 + 1208[02]);
			iLocal_1386 = 0;
		}
	}
	return;
}

void Function_520() //Position: 0x1E795 / 124821
{
	float fVar0;
	
	if (iLocal_1387)
	{
		if (!IS_ACTOR_SHOOTING(&Global_54076) && Function_280(&iLocal_1356) < 10.0f)
		{
			if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI02_reactionBanter_v1_AA"))
			{
				Function_523();
				fVar0 = 5,3f;
			}
			else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI02_BanterToCamp_v2_AA1"))
			{
				Function_522();
				fVar0 = 4.0f;
			}
			else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("FBI02_BanterToCamp_v3_AA1"))
			{
				Function_521();
				fVar0 = 3,5f;
			}
			iLocal_1387 = 0;
			iLocal_1386 = 1;
			TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&Local_6 + 1208[02], fVar0);
		}
	}
	return;
}

void Function_521() //Position: 0x1E859 / 125017
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AA1", "FBI02_BanterToCamp_v3_AA1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AA2", "FBI02_BanterToCamp_v3_AA2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v3_AB", "FBI02_BanterToCamp_v3_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_BanterToCamp_v3_AC", "FBI02_BanterToCamp_v3_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v3_AD1", "FBI02_BanterToCamp_v3_AD1", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v3_AD2", "FBI02_BanterToCamp_v3_AD2", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AE1", "FBI02_BanterToCamp_v3_AE1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AE2", "FBI02_BanterToCamp_v3_AE2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AE3", "FBI02_BanterToCamp_v3_AE3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v3_AF", "FBI02_BanterToCamp_v3_AF", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AG1", "FBI02_BanterToCamp_v3_AG1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AG2", "FBI02_BanterToCamp_v3_AG2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AG3", "FBI02_BanterToCamp_v3_AG3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v3_AH", "FBI02_BanterToCamp_v3_AH", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AI1", "FBI02_BanterToCamp_v3_AI1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AI2", "FBI02_BanterToCamp_v3_AI2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v3_AJ", "FBI02_BanterToCamp_v3_AJ", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v3_AK", "FBI02_BanterToCamp_v3_AK", 0, 2, 1, 0, 1);
		Function_391(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x1ECF9 / 126201
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AA1", "FBI02_BanterToCamp_v2_AA1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AA2", "FBI02_BanterToCamp_v2_AA2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v2_AB", "FBI02_BanterToCamp_v2_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AC1", "FBI02_BanterToCamp_v2_AC1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AC2", "FBI02_BanterToCamp_v2_AC2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v2_AD", "FBI02_BanterToCamp_v2_AD", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AE1", "FBI02_BanterToCamp_v2_AE1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AE2", "FBI02_BanterToCamp_v2_AE2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v2_AF", "FBI02_BanterToCamp_v2_AF", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_BanterToCamp_v2_AG", "FBI02_BanterToCamp_v2_AG", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v2_AH", "FBI02_BanterToCamp_v2_AH", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AI1", "FBI02_BanterToCamp_v2_AI1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AI2", "FBI02_BanterToCamp_v2_AI2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AI3", "FBI02_BanterToCamp_v2_AI3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AI4", "FBI02_BanterToCamp_v2_AI4", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v2_AJ", "FBI02_BanterToCamp_v2_AJ", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v2_AK", "FBI02_BanterToCamp_v2_AK", 0, 2, 1, 0, 1);
		Function_391(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1F156 / 127318
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "FBI02_reactionBanter_v1_AA", "FBI02_reactionBanter_v1_AA", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_reactionBanter_v1_AB", "FBI02_reactionBanter_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_reactionBanter_v1_AC", "FBI02_reactionBanter_v1_AC", 2, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_620", "", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_reactionBanter_v1_AD1", "FBI02_reactionBanter_v1_AD1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_reactionBanter_v1_AD2", "FBI02_reactionBanter_v1_AD2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "SFX_PAUSE_3000", "", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v1_AA1", "FBI02_BanterToCamp_v1_AA1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v1_AA2", "FBI02_BanterToCamp_v1_AA2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "FBI02_BanterToCamp_v1_AB", "FBI02_BanterToCamp_v1_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v1_AC", "FBI02_BanterToCamp_v1_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1300", "", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "FBI02_BanterToCamp_v1_AD", "FBI02_BanterToCamp_v1_AD", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "FBI02_BanterToCamp_v1_AE", "FBI02_BanterToCamp_v1_AE", 1, 2, 1, 0, 1);
		Function_391(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x1F499 / 128153
{
	if (SQUAD_IS_VALID(&Local_6 + 1920))
	{
		if (SQUAD_GET_SIZE(&Local_6 + 1920) >= 0)
		{
			if (!DECOR_CHECK_EXIST(&Local_6 + 1920, "iDrillState"))
			{
				DECOR_SET_INT(&Local_6 + 1920, "iDrillState", false);
			}
			else
			{
				switch (DECOR_GET_INT(&Local_6 + 1920, "iDrillState"))
				{
					case 0x00000000:
						Function_526(&Local_6 + 1920, "FBI02_soldiers_stn/Soldiers_idl");
						DECOR_SET_INT(&Local_6 + 1920, "iDrillState", true);
						break;
					
					case 0x00000001:
						if (Function_405(&Local_6 + 1920, &Global_54076, 15.0f, 1))
						{
							SAY_SINGLE_LINE_SCRIPTED(FIND_ACTOR_IN_LAYOUT(&Local_6, "blkArmy_sgt"), "FBI02_InFormation_v1_AA", 0, 1, 1, 0, 0, 0);
							Function_525(&Local_6 + 1920, 3, 0);
							DECOR_SET_FLOAT(&Local_6 + 1920, "fShoulderTime", GET_CURRENT_GAME_TIME());
							DECOR_SET_INT(&Local_6 + 1920, "iDrillState", 2);
						}
						break;
					
					case 0x00000002:
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_6 + 1920, "fShoulderTime")) < 0,05f)
						{
							DECOR_SET_FLOAT(&Local_6 + 1920, "fShoulderTime", GET_CURRENT_GAME_TIME());
							Function_525(&Local_6 + 1920, 3, 1);
							DECOR_SET_INT(&Local_6 + 1920, "iDrillState", 3);
						}
						break;
					
					case 0x00000003:
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Local_6 + 1920, "fShoulderTime")) < 0,05f)
						{
							DECOR_REMOVE(&Local_6 + 1920, "fShoulderTime");
							Function_525(&Local_6 + 1920, 3, 2);
							DECOR_SET_INT(&Local_6 + 1920, "iDrillState", 4);
						}
						break;
					}
				}
			}
	}
	return;
}

void Function_525(var uParam0, int iParam1, int iParam2) //Position: 0x1F6CC / 128716
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if ((bVar0 % &iParam1) == &iParam2)
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			SET_ACTION_NODE_FOR_ACTOR(&uVar1, "FBI02_soldiers_stn/Soldiers_pre");
		}
		bVar0++;
	}
	return;
}

void Function_526(var uParam0, int iParam1) //Position: 0x1F72E / 128814
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
			SET_ACTION_NODE_FOR_ACTOR(&uVar1, &iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_527(var uParam0, float fParam1) //Position: 0x1F776 / 128886
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<9> Var5;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (&iVar2 != &Local_6 + 1400[02])
			{
				if (IS_ACTOR_VALID(&iVar2))
				{
					if (IS_ACTOR_ALIVE(&iVar2))
					{
						Function_529(GET_EVENT_LAYOUT(), 5);
						Var3 = Function_529(GET_EVENT_LAYOUT(), 5);
						if (Function_528(StackVal, &iVar2, Var3) >= fParam1)
						{
							vVar5 = *(&Local_6 + 3576);
							vVar5 = (vVar5.x + RAND_FLOAT_RANGE(-6.0f, 5.0f));
							vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(-6.0f, 5.0f));
							iVar1 = TASK_SEQUENCE_OPEN();
							if (Function_385(&iVar2, &Global_54076, 30.0f))
							{
								TASK_GO_NEAR_COORD(0, &vVar5, 1.0f, 3);
								TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
							}
							else
							{
								TASK_CROUCH(0, 10.0f);
								TASK_STAND_STILL(false, -1.0f, 0, 0);
							}
							TASK_SEQUENCE_CLOSE();
							if ((RAND_INT_RANGE(0, 10) % 3) == 0)
							{
								AUDIO_PLAY_VOCAL_EFFECT(&iVar2, 10, 1);
							}
							else
							{
								SAY_SINGLE_LINE_STRING(&iVar2, "MINOR_SHOCK", false, false, 0, 0, true, false);
							}
							RESET_ANIM_SET_FOR_ACTOR(&iVar2, 1);
							TASK_SEQUENCE_PERFORM(&iVar2, iVar1);
							TASK_SEQUENCE_RELEASE(iVar1, 1);
						}
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

float Function_528(var uParam0, struct<2> Param1) //Position: 0x1F89B / 129179
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_279(&uParam0);
		Var0 = Function_279(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_529(float fParam0, int iParam1) //Position: 0x1F912 / 129298
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!IS_LAYOUTREF_VALID(&fParam0))
	{
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	uVar2 = CREATE_OBJECT_ITERATOR(&fParam0);
	ITERATE_IN_LAYOUT(&uVar2, GET_EVENT_LAYOUT());
	uVar3 = START_OBJECT_ITERATOR(&uVar2);
	if (IS_OBJECT_VALID(&uVar3))
	{
		while (IS_OBJECT_VALID(&uVar3))
		{
			uVar4 = GET_EVENT_FROM_OBJECT(&uVar3);
			if (IS_EVENT_VALID(&uVar4))
			{
				if (GET_EVENT_TYPE(&uVar4) == iParam1)
				{
					GET_OBJECT_POSITION(GET_OBJECT_FROM_EVENT(&uVar4), &Var0);
					DESTROY_ITERATOR(&uVar2);
					return StackVal, Var0;
				}
			}
			uVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
		}
	}
	DESTROY_ITERATOR(&uVar2);
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_530() //Position: 0x1F99E / 129438
{
	switch (iLocal_1165)
	{
		case 0x00000006:
			Function_566(&Local_1152, 1);
			iLocal_1150 = CREATE_LAYOUT(Function_54());
			SET_DUST_LEVEL_MODIFIER(4294967295);
			Function_565();
			if (!Global_99145)
			{
				Local_1166 = 1000;
			}
			iLocal_1165 = 7;
			break;
		
		case 0x00000007:
			if (Local_1166 != 1004 || Function_488())
			{
				iLocal_1165 = 8;
			}
			break;
		
		case 0x00000008:
			Function_488();
			if (Function_548())
			{
				iLocal_1165 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(&Local_6))
			{
				uLocal_1350 = CREATE_OBJECT_ITERATOR(&Local_6);
			}
			AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_GETTING_BEHIND_GATLING");
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_336(10, 1, 1);
			RESET_ACTOR_GAITS(&iLocal_1189, 0);
			SET_CRIPPLE_ENABLE(&iLocal_1189, 0);
			SET_ACTOR_FACTION(&iLocal_1189, 20);
			TASK_PRIORITY_SET(&iLocal_1189, true);
			TASK_STAND_STILL(&iLocal_1189, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_1189, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_1189, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_1189, GET_ACTOR_MAX_HEALTH(&iLocal_1189));
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_1189, 0);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iLocal_1189, 0.0f);
			SET_ACTOR_PROOF(&iLocal_1189, 16);
			UNK_0x2E84E682(&iLocal_1189, 0);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_1189, 7, true);
			SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_1189, false);
			AI_GOAL_LOOK_AT_NEUTRAL(&iLocal_1189, -1.0f);
			RESET_ACTOR_GAITS(&uLocal_1191, 0);
			TASK_PRIORITY_SET(&uLocal_1191, true);
			TASK_STAND_STILL(&uLocal_1191, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&uLocal_1191, 50.0f);
			SET_ACTOR_HEALTH(&uLocal_1191, GET_ACTOR_MAX_HEALTH(&uLocal_1191));
			SET_WEAPONENUM_LOCKED(17, 0);
			SET_WEAPONENUM_LOCKED(2, 0);
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_1189, &Global_54076, 60.0f, 10.0f, 50.0f);
			DECOR_SET_BOOL(&Global_54076, "GringoNoQuit", 1);
			Function_336(10, 0, 1);
			Function_540();
			Function_538(&Local_6 + 1184[02], 4);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_6 + 2360);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Local_6 + 2360);
			uLocal_1395 = CREATE_OBJECTSET_IN_LAYOUT("osTNTSPLOSIONS", &Local_6, 8, 0);
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			Function_537(&iLocal_1352);
			Function_537(&iLocal_1356);
			Function_537(&iLocal_1360);
			Function_537(&iLocal_1364);
			Function_537(&iLocal_1368);
			Function_535(&uLocal_1412, &iLocal_1150);
			iLocal_1164 = 0;
			iLocal_1165 = 0;
			Function_532(&Local_1152, &iLocal_1164, &iLocal_1165);
			Function_531(StackVal, StackVal, StackVal, StackVal, Function_542(), Local_1152);
			break;
	}
	return;
}

void Function_531(struct<41> Param0) //Position: 0x1FBF2 / 130034
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_1164 = 0;
			break;
		
		case 0x00000002:
			iLocal_1164 = 1;
			break;
		
		case 0x00000003:
			iLocal_1164 = 2;
			break;
		
		case 0x00000004:
			iLocal_1164 = 3;
			break;
		
		case 0x00000005:
			iLocal_1164 = 4;
			break;
		
		case 0x00000006:
			iLocal_1164 = 5;
			break;
		
		case 0x00000007:
			iLocal_1164 = 6;
			break;
		
		case 0x00000008:
			iLocal_1164 = 7;
			break;
		
		case 0x00000009:
			iLocal_1164 = 8;
			break;
		
		case 0x0000000A:
			iLocal_1164 = 101;
			break;
	}
}

void Function_532(int iParam0, var uParam1, int iParam2) //Position: 0x1FC87 / 130183
{
	if (Function_342(&iParam0))
	{
		uParam1 = Function_534(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_533();
	}
	return;
}

void Function_533() //Position: 0x1FCC3 / 130243
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

var Function_534(int iParam0) //Position: 0x1FD14 / 130324
{
	if (Function_342(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_535(struct<2>[] Param0) //Position: 0x1FD2D / 130349
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_536(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_536(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_536(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_536(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_536(struct<13> Param0) //Position: 0x20408 / 132104
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
	Function_77(&Param0 + 12, iParam4);
	return 1;
}

void Function_537(int iParam0) //Position: 0x204D7 / 132311
{
	if (!Function_282(&iParam0))
	{
		Function_226(&iParam0, 0.0f);
	}
	return;
}

void Function_538(var uParam0, int iParam1) //Position: 0x204EE / 132334
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&uParam0) == 1194 && GET_ACTOR_ENUM(&uParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "carSettings"))
	{
		Function_539(&uParam0);
	}
	bVar0 = DECOR_GET_INT(&uParam0, "carSettings");
	Function_77(&bVar0, iParam1);
	DECOR_SET_INT(&uParam0, "carSettings", bVar0);
	return;
}

void Function_539(var uParam0) //Position: 0x2056A / 132458
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&uParam0) == 1194 && GET_ACTOR_ENUM(&uParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "carSettings"))
	{
		DECOR_SET_INT(&uParam0, "carSettings", false);
	}
	bVar0 = DECOR_GET_INT(&uParam0, "carSettings");
	Function_77(&bVar0, 1);
	Function_38(&bVar0, 2);
	Function_38(&bVar0, 4);
	Function_77(&bVar0, 8);
	Function_77(&bVar0, 16);
	Function_77(&bVar0, 32);
	Function_77(&bVar0, 64);
	Function_77(&bVar0, 128);
	Function_77(&bVar0, 256);
	Function_77(&bVar0, 512);
	DECOR_SET_INT(&uParam0, "carSettings", bVar0);
	return;
}

void Function_540() //Position: 0x20634 / 132660
{
	*(&Local_6 + 1184[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &Local_6, "WarWagon", 1193, Vector(789,067f, 78,299f, 1226,797f), Vector(0.0f, 176,456f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&Local_6 + 1184[02], false);
	Function_541(&Local_6 + 1184[02], 1);
	SET_VEHICLE_EJECTION_ENABLED(&Local_6 + 1184[02], 0);
	return;
}

void Function_541(var uParam0, int iParam1) //Position: 0x20696 / 132758
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (GET_ACTOR_ENUM(&uParam0) == 1194 && GET_ACTOR_ENUM(&uParam0) == 1193)
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "carSettings"))
	{
		Function_539(&uParam0);
	}
	bVar0 = DECOR_GET_INT(&uParam0, "carSettings");
	Function_38(&bVar0, iParam1);
	DECOR_SET_INT(&uParam0, "carSettings", bVar0);
	return;
}

var Function_542() //Position: 0x20712 / 132882
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
	bool bVar25;
	bool bVar26;
	bool bVar27;
	
	Function_426(4, 1);
	uVar0 = &uVar0;
	Local_6 = CREATE_LAYOUT("Fbi02_layout");
	*(&Local_6 + 2008) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_6, "CutsceneVol_set");
	*(&Local_6 + 1928[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene01Vol", 2,802597E-45f, Vector(815,7831f, 114,0187f, 561,9284f), Vector(0.0f, 0.0f, 0.0f), Vector(9,534748f, 12,32802f, 34,15328f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[0]);
	*(&Local_6 + 1928[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene02Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[1]);
	*(&Local_6 + 1928[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene03Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[2]);
	*(&Local_6 + 1928[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene04Vol", 2,802597E-45f, Vector(-262,8722f, 138,832f, 1712,067f), Vector(0.0f, -37,32303f, 0.0f), Vector(27,40369f, 14,1944f, 30,82307f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[3]);
	*(&Local_6 + 1928[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene06Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[4]);
	*(&Local_6 + 1928[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene07Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[5]);
	*(&Local_6 + 1928[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene08Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[6]);
	*(&Local_6 + 1928[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene09Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[7]);
	*(&Local_6 + 1928[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "Cutscene10Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&Local_6 + 2008, &Local_6 + 1928[8]);
	*(&Local_6 + 2048) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_6, "bv_back_set");
	*(&Local_6 + 2016[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "nbv_back_2", 2,802597E-45f, Vector(344,2489f, 112,4391f, 1536,322f), Vector(0.0f, -8,277484f, 0.0f), Vector(10,33553f, 14,3807f, 30,46423f));
	ADD_TO_VOLUME_SET(&Local_6 + 2048, &Local_6 + 2016[0]);
	*(&Local_6 + 2016[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "nbv_back_3", 2,802597E-45f, Vector(344,4681f, 112,4391f, 1566,642f), Vector(0.0f, 1,630945f, 0.0f), Vector(14,11672f, 14,3807f, 21,06984f));
	ADD_TO_VOLUME_SET(&Local_6 + 2048, &Local_6 + 2016[1]);
	*(&Local_6 + 2016[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "nbv_back_4", 2,802597E-45f, Vector(369,3867f, 111,4353f, 1535,236f), Vector(0.0f, -8,403739f, 0.0f), Vector(7,699083f, 14,3807f, 24,22723f));
	ADD_TO_VOLUME_SET(&Local_6 + 2048, &Local_6 + 2016[2]);
	*(&Local_6 + 2080) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_6, "bv_mid_set");
	*(&Local_6 + 2056[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "bv_mid_1", 2,802597E-45f, Vector(357,5548f, 111,4353f, 1563,212f), Vector(0.0f, 7,233166f, 0.0f), Vector(10,08987f, 14,3807f, 22,50257f));
	ADD_TO_VOLUME_SET(&Local_6 + 2080, &Local_6 + 2056[0]);
	*(&Local_6 + 2056[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "bv_mid_2", 2,802597E-45f, Vector(358,1025f, 111,4353f, 1534,403f), Vector(0.0f, -8,937272f, 0.0f), Vector(9,811433f, 14,3807f, 34,26941f));
	ADD_TO_VOLUME_SET(&Local_6 + 2080, &Local_6 + 2056[1]);
	*(&Local_6 + 2168) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_6, "reactTriggers_set");
	*(&Local_6 + 2088[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "dockReactTrig", 2,802597E-45f, Vector(787,9281f, 78,30589f, 1267,447f), Vector(0.0f, 0.0f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[0]);
	*(&Local_6 + 2088[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "TailorReactTrig", 2,802597E-45f, Vector(787,9281f, 78,30589f, 1272,054f), Vector(0.0f, 0.0f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[1]);
	*(&Local_6 + 2088[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "gunsmithReact", 2,802597E-45f, Vector(787,9281f, 78,30589f, 1291,596f), Vector(0.0f, 0.0f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[2]);
	*(&Local_6 + 2088[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "factoryReact", 2,802597E-45f, Vector(787,9281f, 78,30589f, 1301,562f), Vector(0.0f, 0.0f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[3]);
	*(&Local_6 + 2088[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "startBanter", 2,802597E-45f, Vector(749,1542f, 80,3516f, 1395,758f), Vector(0.0f, -79,03985f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[4]);
	*(&Local_6 + 2088[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "horsesGo", 2,802597E-45f, Vector(788,2354f, 78,30588f, 1283,344f), Vector(0.0f, 0.0f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[5]);
	*(&Local_6 + 2088[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "walkers1_go", 2,802597E-45f, Vector(786,377f, 80,3516f, 1360,464f), Vector(0.0f, -1,190624f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[6]);
	*(&Local_6 + 2088[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "walkers2_go", 2,802597E-45f, Vector(779,8836f, 80,3516f, 1382,381f), Vector(0.0f, -62,08088f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[7]);
	*(&Local_6 + 2088[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "fingerOffTrigger", 2,802597E-45f, Vector(787,7109f, 78,30588f, 1255,065f), Vector(0.0f, -0,03992511f, 0.0f), Vector(29,0003f, 16,38764f, 5,643216f));
	ADD_TO_VOLUME_SET(&Local_6 + 2168, &Local_6 + 2088[8]);
	*(&Local_6 + 2176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "S3_end", 2,802597E-45f, Vector(6,212352f, 116,4946f, 1695,253f), Vector(0.0f, 102,181f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "s4_end", 2,802597E-45f, Vector(-239,8221f, 137,5025f, 1721,903f), Vector(0.0f, 55,92413f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "meetCav", 2,802597E-45f, Vector(428,8682f, 108,3147f, 1545,806f), Vector(0.0f, 149,8101f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "triggerS3Ambush", 2,802597E-45f, Vector(-165,1945f, 118,5166f, 1718,628f), Vector(0.0f, 106,3051f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "s4_end_backup", 2,802597E-45f, Vector(-262,805f, 137,5025f, 1706,356f), Vector(0.0f, 55,92413f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "bunker_1", 2,802597E-45f, Vector(387,1876f, 109,4274f, 1564,064f), Vector(0.0f, -19,4055f, 0.0f), Vector(5,439455f, 7,286525f, 10,62235f));
	*(&Local_6 + 2224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "bunker_2", 2,802597E-45f, Vector(389,1004f, 109,4274f, 1548,134f), Vector(0.0f, 0,01178728f, 0.0f), Vector(5,439455f, 7,286525f, 7,702875f));
	*(&Local_6 + 2232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "bunker_3", 2,802597E-45f, Vector(388,4063f, 109,4274f, 1527,957f), Vector(0.0f, 4,676243f, 0.0f), Vector(6,480597f, 7,286525f, 11,55157f));
	*(&Local_6 + 2240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "bunker_4", 2,802597E-45f, Vector(377,1512f, 112,4076f, 1497,935f), Vector(0.0f, 44,90334f, 0.0f), Vector(6,310698f, 7,286525f, 9,018141f));
	*(&Local_6 + 2248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "campRear", 2,802597E-45f, Vector(412,6877f, 108,8746f, 1539,846f), Vector(0.0f, 1,994218f, 0.0f), Vector(19,45747f, 11,19291f, 30,39388f));
	*(&Local_6 + 2256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "bv_close_1", 2,802597E-45f, Vector(368,8326f, 111,4353f, 1561,153f), Vector(0.0f, 4,576015f, 0.0f), Vector(7,72825f, 14,3807f, 23,35022f));
	*(&Local_6 + 2264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "rollWagon_1", 2,802597E-45f, Vector(-26,14577f, 115,4243f, 1701,272f), Vector(0.0f, 110,2697f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "rollWagon_2", 2,802597E-45f, Vector(-80,5292f, 119,6164f, 1718,741f), Vector(0.0f, 110,2697f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "rollWagon_3", 2,802597E-45f, Vector(-133,1719f, 115,4243f, 1726,555f), Vector(0.0f, 55,12092f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "blackWaterVol", 2,802597E-45f, Vector(713,6379f, 96,94091f, 1284,931f), Vector(0.0f, 0.0f, 0.0f), Vector(177,3676f, 47,97482f, 251,901f));
	*(&Local_6 + 2296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "offRoadbanter_1", 2,802597E-45f, Vector(320,6332f, 112,4392f, 1518,061f), Vector(0.0f, 137,3721f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "offRoadbanter_2", 2,802597E-45f, Vector(287,0046f, 112,4392f, 1554,596f), Vector(0.0f, 137,3721f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "stopTaunts", 2,802597E-45f, Vector(107,1959f, 116,4946f, 1691,093f), Vector(0.0f, 102,181f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "blowTNT", 2,802597E-45f, Vector(-176,4535f, 118,5166f, 1721,921f), Vector(0.0f, 106,3051f, 0.0f), Vector(66,58469f, 37,39709f, 3,517241f));
	*(&Local_6 + 2360) = CREATE_VOLUME_SET_IN_LAYOUT(&Local_6, "stayOffStreets_set");
	*(&Local_6 + 2328[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "stayOffStreets_1", 2,802597E-45f, Vector(788,087f, 79,56884f, 1299,159f), Vector(0.0f, 0.0f, 0.0f), Vector(9,360932f, 17,34166f, 175,1804f));
	ADD_TO_VOLUME_SET(&Local_6 + 2360, &Local_6 + 2328[0]);
	*(&Local_6 + 2328[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "stayOffStreets_2", 2,802597E-45f, Vector(757,8166f, 79,56884f, 1391,508f), Vector(0.0f, -69,72727f, 0.0f), Vector(9,360932f, 17,34166f, 59,04287f));
	ADD_TO_VOLUME_SET(&Local_6 + 2360, &Local_6 + 2328[1]);
	*(&Local_6 + 2328[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "stayOffStreets_3", 2,802597E-45f, Vector(703,0756f, 79,56884f, 1404,799f), Vector(0.0f, -81,07839f, 0.0f), Vector(9,360932f, 17,34166f, 59,04287f));
	ADD_TO_VOLUME_SET(&Local_6 + 2360, &Local_6 + 2328[2]);
	*(&Local_6 + 2368) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Local_6, "soldiersReactVol", 2,802597E-45f, Vector(784,632f, 81,25748f, 1252,821f), Vector(0.0f, 1,98556f, 0.0f), Vector(17,60086f, 7,727757f, 22,82952f));
	*(&Local_6 + 2376[03]) = Vector(782,2799f, 78,30585f, 1236f);
	*(&Local_6 + 2376[03] + 12) = Vector(0.0f, -124,0031f, 0.0f);
	*(&Local_6 + 2376[13]) = Vector(783,9999f, 78,30585f, 1237,487f);
	*(&Local_6 + 2376[13] + 12) = Vector(0.0f, 52,93388f, 0.0f);
	*(&Local_6 + 2432) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &Local_6, 8, 0);
	*(&Local_6 + 2440[03]) = Vector(394,005f, 109,4274f, 1538,005f);
	*(&Local_6 + 2440[03] + 12) = Vector(0.0f, 75,9081f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "PlayerStart02", Vector(394,005f, 109,4274f, 1538,005f), Vector(0.0f, 75,9081f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &Local_6 + 2432);
	*(&Local_6 + 2440[13]) = Vector(324,5222f, 111,9052f, 1691,187f);
	*(&Local_6 + 2440[13] + 12) = Vector(0.0f, -90.0f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "PlayerEnd02", Vector(324,5222f, 111,9052f, 1691,187f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &Local_6 + 2432);
	*(&Local_6 + 2440[23]) = Vector(393,5218f, 109,4328f, 1536,925f);
	*(&Local_6 + 2440[23] + 12) = Vector(0.0f, -6,288388f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "CompanionStart02", Vector(393,5218f, 109,4328f, 1536,925f), Vector(0.0f, -6,288388f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &Local_6 + 2432);
	*(&Local_6 + 2440[33]) = Vector(326,2187f, 111,7031f, 1689,259f);
	*(&Local_6 + 2440[33] + 12) = Vector(0.0f, 90.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "CompanionEnd02", Vector(326,2187f, 111,7031f, 1689,259f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &Local_6 + 2432);
	*(&Local_6 + 2440[43]) = Vector(280,6942f, 112,3031f, 1736,73f);
	*(&Local_6 + 2440[43] + 12) = Vector(0.0f, 159,1154f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "CavTP02", Vector(280,6942f, 112,3031f, 1736,73f), Vector(0.0f, 159,1154f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &Local_6 + 2432);
	*(&Local_6 + 2568) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &Local_6, 8, 0);
	*(&Local_6 + 2576[03]) = Vector(365,6226f, 111,6644f, 1516,344f);
	*(&Local_6 + 2576[03] + 12) = Vector(0.0f, -285,1503f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "PlayerStart03", Vector(365,6226f, 111,6644f, 1516,344f), Vector(0.0f, -285,1503f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &Local_6 + 2568);
	*(&Local_6 + 2576[13]) = Vector(361,6671f, 112,1746f, 1507,68f);
	*(&Local_6 + 2576[13] + 12) = Vector(0.0f, 69,99233f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "CompanionStart03", Vector(361,6671f, 112,1746f, 1507,68f), Vector(0.0f, 69,99233f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &Local_6 + 2568);
	*(&Local_6 + 2576[23]) = Vector(-60,95473f, 116,6154f, 1744,574f);
	*(&Local_6 + 2576[23] + 12) = Vector(0.0f, 40,47247f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "CompanionEnd03", Vector(-60,95473f, 116,6154f, 1744,574f), Vector(0.0f, 40,47247f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &Local_6 + 2568);
	*(&Local_6 + 2576[33]) = Vector(369,7011f, 111,5975f, 1512,907f);
	*(&Local_6 + 2576[33] + 12) = Vector(0.0f, 70,99059f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "CavTP03", Vector(369,7011f, 111,5975f, 1512,907f), Vector(0.0f, 70,99059f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &Local_6 + 2568);
	*(&Local_6 + 2680) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &Local_6, 8, 0);
	*(&Local_6 + 2688[03]) = Vector(0,8774205f, 114,0902f, 1690,381f);
	*(&Local_6 + 2688[03] + 12) = Vector(0.0f, 86,48029f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "CompanionStart04", Vector(0,8774205f, 114,0902f, 1690,381f), Vector(0.0f, 86,48029f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &Local_6 + 2680);
	*(&Local_6 + 2688[13]) = Vector(1,939613f, 114,1288f, 1694,133f);
	*(&Local_6 + 2688[13] + 12) = Vector(0.0f, 55,71302f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "PlayerStart04", Vector(1,939613f, 114,1288f, 1694,133f), Vector(0.0f, 55,71302f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &Local_6 + 2680);
	*(&Local_6 + 2688[23]) = Vector(5,107378f, 115,0238f, 1701,969f);
	*(&Local_6 + 2688[23] + 12) = Vector(0.0f, 91,07485f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "CavTP04", Vector(5,107378f, 115,0238f, 1701,969f), Vector(0.0f, 91,07485f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &Local_6 + 2680);
	*(&Local_6 + 2768[03]) = Vector(291,843f, 114,0812f, 1543,791f);
	*(&Local_6 + 2768[03] + 12) = Vector(0.0f, -81,33614f, 0.0f);
	*(&Local_6 + 2768[13]) = Vector(324,8949f, 117,052f, 1626,85f);
	*(&Local_6 + 2768[13] + 12) = Vector(0.0f, -9,575944f, 0.0f);
	*(&Local_6 + 2768[23]) = Vector(226,3534f, 117,5693f, 1470,353f);
	*(&Local_6 + 2768[23] + 12) = Vector(0.0f, -123,5144f, 0.0f);
	*(&Local_6 + 2768[33]) = Vector(332.0f, 119,4667f, 1441,184f);
	*(&Local_6 + 2768[33] + 12) = Vector(0.0f, -182,0139f, 0.0f);
	*(&Local_6 + 2872) = CREATE_OBJECTSET_IN_LAYOUT("reactPointsSet", &Local_6, 8, 0);
	*(&Local_6 + 2880[03]) = Vector(796,6031f, 78,47311f, 1292,255f);
	*(&Local_6 + 2880[03] + 12) = Vector(0.0f, 36,52666f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "docks_react_1", Vector(796,6031f, 78,47311f, 1292,255f), Vector(0.0f, 36,52666f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &Local_6 + 2872);
	*(&Local_6 + 2880[13]) = Vector(795,0814f, 78,47311f, 1289,368f);
	*(&Local_6 + 2880[13] + 12) = Vector(0.0f, 75,60387f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "docks_react_2", Vector(795,0814f, 78,47311f, 1289,368f), Vector(0.0f, 75,60387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &Local_6 + 2872);
	*(&Local_6 + 2880[23]) = Vector(795,4435f, 78,47311f, 1290,733f);
	*(&Local_6 + 2880[23] + 12) = Vector(0.0f, 62,17315f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "docks_react_3", Vector(795,4435f, 78,47311f, 1290,733f), Vector(0.0f, 62,17315f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &Local_6 + 2872);
	*(&Local_6 + 2880[33]) = Vector(781,503f, 78,30585f, 1292,795f);
	*(&Local_6 + 2880[33] + 12) = Vector(0.0f, -45,63672f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "tailor_react_1", Vector(781,503f, 78,30585f, 1292,795f), Vector(0.0f, -45,63672f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &Local_6 + 2872);
	*(&Local_6 + 2880[43]) = Vector(781,6802f, 78,30585f, 1293,671f);
	*(&Local_6 + 2880[43] + 12) = Vector(0.0f, -60,71291f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "tailor_react_2", Vector(781,6802f, 78,30585f, 1293,671f), Vector(0.0f, -60,71291f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &Local_6 + 2872);
	*(&Local_6 + 2880[53]) = Vector(784,4751f, 78,30585f, 1309,238f);
	*(&Local_6 + 2880[53] + 12) = Vector(0.0f, -60,71291f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "gun_react_1", Vector(784,4751f, 78,30585f, 1309,238f), Vector(0.0f, -60,71291f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &Local_6 + 2872);
	*(&Local_6 + 2880[63]) = Vector(784,1608f, 78,30585f, 1311,316f);
	*(&Local_6 + 2880[63] + 12) = Vector(0.0f, -60,71291f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "gun_react_2", Vector(784,1608f, 78,30585f, 1311,316f), Vector(0.0f, -60,71291f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &Local_6 + 2872);
	*(&Local_6 + 2880[73]) = Vector(784,1828f, 78,30585f, 1307,509f);
	*(&Local_6 + 2880[73] + 12) = Vector(0.0f, -45,65202f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "gun_react_3", Vector(784,1828f, 78,30585f, 1307,509f), Vector(0.0f, -45,65202f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &Local_6 + 2872);
	*(&Local_6 + 2880[83]) = Vector(793,8182f, 78,3059f, 1324,581f);
	*(&Local_6 + 2880[83] + 12) = Vector(0.0f, 67,03926f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "fact_react_1", Vector(793,8182f, 78,3059f, 1324,581f), Vector(0.0f, 67,03926f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &Local_6 + 2872);
	*(&Local_6 + 2880[93]) = Vector(793,7115f, 78,3059f, 1325,906f);
	*(&Local_6 + 2880[93] + 12) = Vector(0.0f, 67,03926f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "fact_react_2", Vector(793,7115f, 78,3059f, 1325,906f), Vector(0.0f, 67,03926f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &Local_6 + 2872);
	*(&Local_6 + 2880[103]) = Vector(792,6205f, 78,3059f, 1327,351f);
	*(&Local_6 + 2880[103] + 12) = Vector(0.0f, 67,03926f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "fact_react_3", Vector(792,6205f, 78,3059f, 1327,351f), Vector(0.0f, 67,03926f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &Local_6 + 2872);
	*(&Local_6 + 2880[113]) = Vector(791,8589f, 78,3059f, 1329,776f);
	*(&Local_6 + 2880[113] + 12) = Vector(0.0f, 67,03926f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "fact_react_4", Vector(791,8589f, 78,3059f, 1329,776f), Vector(0.0f, 67,03926f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &Local_6 + 2872);
	*(&Local_6 + 3176) = Vector(465,6306f, 98,60591f, 1499,899f);
	*(&Local_6 + 3176 + 12) = Vector(0.0f, 128,2891f, 0.0f);
	*(&Local_6 + 3200) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "skipGoHere", Vector(465,6306f, 98,60591f, 1499,899f), Vector(0.0f, 128,2891f, 0.0f));
	*(&Local_6 + 3208) = Vector(338,1498f, 118,0941f, 821,873f);
	*(&Local_6 + 3208 + 12) = Vector(0.0f, -128,6968f, 0.0f);
	*(&Local_6 + 3232) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "truckSpawn22", Vector(338,1498f, 118,0941f, 821,873f), Vector(0.0f, -128,6968f, 0.0f));
	*(&Local_6 + 3240) = Vector(321,2591f, 119,4478f, 802,741f);
	*(&Local_6 + 3240 + 12) = Vector(0.0f, -144,4964f, 0.0f);
	*(&Local_6 + 3264) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "cavSpawn22", Vector(321,2591f, 119,4478f, 802,741f), Vector(0.0f, -144,4964f, 0.0f));
	*(&Local_6 + 3272) = Vector(-286,2458f, 141,3958f, 1746,245f);
	*(&Local_6 + 3272 + 12) = Vector(0.0f, -56,67029f, 0.0f);
	*(&Local_6 + 3296) = Vector(-124,1309f, 120,8568f, 1714,777f);
	*(&Local_6 + 3296 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_6 + 3320) = Vector(34,51505f, 115,3308f, 1694,515f);
	*(&Local_6 + 3320 + 12) = Vector(0.0f, -56,67029f, 0.0f);
	*(&Local_6 + 3344) = Vector(401,7699f, 108,0834f, 1517,697f);
	*(&Local_6 + 3344 + 12) = Vector(0.0f, 89,48291f, 0.0f);
	*(&Local_6 + 3368) = Vector(532,9803f, 104,6659f, 1433,335f);
	*(&Local_6 + 3368 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_6 + 3392) = Vector(-177,8353f, 125,161f, 1718,184f);
	*(&Local_6 + 3392 + 12) = Vector(0.0f, 185,9178f, 0.0f);
	*(&Local_6 + 3416) = Vector(-145,0322f, 122,4783f, 1776f);
	*(&Local_6 + 3416 + 12) = Vector(0.0f, 185,9178f, 0.0f);
	*(&Local_6 + 3440) = CREATE_OBJECTSET_IN_LAYOUT("clear_GrassSet", &Local_6, 8, 0);
	*(&Local_6 + 3448[03]) = Vector(423,874f, 105,7884f, 1522,312f);
	*(&Local_6 + 3448[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	bVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "clearGrass_1", Vector(423,874f, 105,7884f, 1522,312f), Vector(0.0f, 0.0f, 0.0f));
	Function_435(&bVar25);
	CLEAR_AREA_OF_GRASS(Function_435(&bVar25), 7.0f);
	ADD_OBJECT_TO_OBJECTSET(&bVar25, &Local_6 + 3440);
	*(&Local_6 + 3448[13]) = Vector(416,9778f, 107,5178f, 1536,939f);
	*(&Local_6 + 3448[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	bVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "clearGrass_2", Vector(416,9778f, 107,5178f, 1536,939f), Vector(0.0f, 0.0f, 0.0f));
	Function_435(&bVar26);
	CLEAR_AREA_OF_GRASS(Function_435(&bVar26), 11.0f);
	ADD_OBJECT_TO_OBJECTSET(&bVar26, &Local_6 + 3440);
	*(&Local_6 + 3448[23]) = Vector(406,9558f, 108,1482f, 1528,532f);
	*(&Local_6 + 3448[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	bVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &Local_6, "clearGrass_3", Vector(406,9558f, 108,1482f, 1528,532f), Vector(0.0f, 0.0f, 0.0f));
	Function_435(&bVar27);
	CLEAR_AREA_OF_GRASS(Function_435(&bVar27), 8.0f);
	ADD_OBJECT_TO_OBJECTSET(&bVar27, &Local_6 + 3440);
	*(&Local_6 + 3528) = Vector(-159,1444f, 123,0038f, 1718,328f);
	*(&Local_6 + 3528 + 12) = Vector(0.0f, 105,9981f, 0.0f);
	*(&Local_6 + 3552) = Vector(-143,9999f, 122,4784f, 1778,626f);
	*(&Local_6 + 3552 + 12) = Vector(0.0f, 185,9178f, 0.0f);
	*(&Local_6 + 3576) = Vector(395,2312f, 109,4274f, 1531,144f);
	*(&Local_6 + 3576 + 12) = Vector(0.0f, -83,4408f, 0.0f);
	*(&Local_6 + 3600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_6, "nlean_rail", "nlean_rail", Vector(796,274f, 79,6116f, 1263,737f), Vector(0.0f, 91,12948f, 0.0f));
	*(&Local_6 + 3608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Local_6, "lean_rail1", "nlean_rail", Vector(796,2884f, 79,6116f, 1264,465f), Vector(0.0f, 91,12948f, 0.0f));
	*(&Local_6 + 3616) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low_def_2", Vector(325,2711f, 121,1839f, 633,2513f), Vector(0.0f, 23,48793f, 0.0f), 4);
	*(&Local_6 + 3624) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low_def_3", Vector(323,7151f, 121,4686f, 633,6918f), Vector(0.0f, 18,44679f, 0.0f), 4);
	*(&Local_6 + 3632) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low9", Vector(827,2305f, 110,4314f, 555,8179f), Vector(0.0f, -33,22537f, 0.0f), 4);
	*(&Local_6 + 3640) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low10", Vector(830,1528f, 110,4314f, 569,1914f), Vector(0.0f, -180,7273f, 0.0f), 4);
	*(&Local_6 + 3648) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low109", Vector(394,916f, 118,425f, 1472,959f), Vector(0.0f, 166,8041f, 0.0f), 4);
	*(&Local_6 + 3656) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low110", Vector(393,925f, 118,5433f, 1472,385f), Vector(0.0f, 132,5398f, 0.0f), 4);
	*(&Local_6 + 3664) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low111", Vector(393,1105f, 118,526f, 1471,172f), Vector(0.0f, 109,2635f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low113", Vector(388,1169f, 109,9822f, 1526,166f), Vector(0.0f, 68,29737f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low114", Vector(388,8074f, 110,1116f, 1530,193f), Vector(0.0f, 122,968f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low115", Vector(387,951f, 110,1308f, 1528,165f), Vector(0.0f, 96,40691f, 0.0f), 4);
	*(&Local_6 + 3672) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low116", Vector(388,8631f, 109,4274f, 1546,736f), Vector(0.0f, 68,56435f, 0.0f), 4);
	*(&Local_6 + 3680) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low117", Vector(388,4439f, 109,4412f, 1548,245f), Vector(0.0f, 90,52711f, 0.0f), 4);
	*(&Local_6 + 3688) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low118", Vector(389,0094f, 109,4454f, 1549,928f), Vector(0.0f, 113,6965f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low119", Vector(388,222f, 109,5153f, 1562,233f), Vector(0.0f, 35,37614f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low120", Vector(386,9906f, 109,5385f, 1563,939f), Vector(0.0f, 81,39385f, 0.0f), 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low121", Vector(387,2291f, 109,9233f, 1565,678f), Vector(0.0f, 105,699f, 0.0f), 4);
	*(&Local_6 + 3696) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "ncover_low", Vector(357,1089f, 111,2029f, 1533,028f), Vector(0.0f, -95,47557f, 0.0f), 4);
	*(&Local_6 + 3704) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low128", Vector(357,2636f, 110,8181f, 1531,414f), Vector(0.0f, -95,47557f, 0.0f), 4);
	*(&Local_6 + 3712) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low129", Vector(369,5695f, 110,5238f, 1525,993f), Vector(0.0f, -127,0309f, 0.0f), 4);
	*(&Local_6 + 3720) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low130", Vector(370,4431f, 110,5238f, 1524,835f), Vector(0.0f, -127,0309f, 0.0f), 4);
	*(&Local_6 + 3728) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low131", Vector(367,6453f, 110,4313f, 1543,899f), Vector(0.0f, -106,6651f, 0.0f), 4);
	*(&Local_6 + 3736) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low132", Vector(367,2588f, 110,4313f, 1545,19f), Vector(0.0f, -106,6651f, 0.0f), 4);
	*(&Local_6 + 3744) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low133", Vector(366,9903f, 110,5398f, 1554,009f), Vector(0.0f, -98,93766f, 0.0f), 4);
	*(&Local_6 + 3752) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low134", Vector(366,8124f, 110,5398f, 1555,817f), Vector(0.0f, -90,09119f, 0.0f), 4);
	*(&Local_6 + 3760) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low135", Vector(366,9899f, 110,4313f, 1567,936f), Vector(0.0f, -80,90719f, 0.0f), 4);
	*(&Local_6 + 3768) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low136", Vector(367,2048f, 110,4313f, 1569,279f), Vector(0.0f, -78,11464f, 0.0f), 4);
	*(&Local_6 + 3776) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low137", Vector(358,4018f, 110,4711f, 1573,11f), Vector(0.0f, -78,11464f, 0.0f), 4);
	*(&Local_6 + 3784) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low138", Vector(358,0848f, 110,6104f, 1571,486f), Vector(0.0f, -83,57352f, 0.0f), 4);
	*(&Local_6 + 3792) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low139", Vector(352,8519f, 111,7704f, 1555,97f), Vector(0.0f, -83,57352f, 0.0f), 4);
	*(&Local_6 + 3800) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low140", Vector(353,1076f, 111,7704f, 1558,514f), Vector(0.0f, -79,9073f, 0.0f), 4);
	*(&Local_6 + 3808) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low141", Vector(354,0071f, 111,6565f, 1563,99f), Vector(0.0f, -68,71457f, 0.0f), 4);
	*(&Local_6 + 3816) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low142", Vector(353,0031f, 111,4353f, 1549,183f), Vector(0.0f, -94,64856f, 0.0f), 4);
	*(&Local_6 + 3824) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low143", Vector(347,0593f, 112,2025f, 1561,651f), Vector(0.0f, -60,12757f, 0.0f), 4);
	*(&Local_6 + 3832) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low145", Vector(342,5257f, 112,4391f, 1566,805f), Vector(0.0f, -78,72852f, 0.0f), 4);
	*(&Local_6 + 3840) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low146", Vector(345,6051f, 111,2666f, 1570,796f), Vector(0.0f, -78,72852f, 0.0f), 4);
	*(&Local_6 + 3848) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low147", Vector(341,0582f, 112,3625f, 1547,914f), Vector(0.0f, -78,72852f, 0.0f), 4);
	*(&Local_6 + 3856) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low148", Vector(341,0293f, 112,3625f, 1545,395f), Vector(0.0f, -99,4157f, 0.0f), 4);
	*(&Local_6 + 3864) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low149", Vector(341,9179f, 112,2822f, 1538,267f), Vector(0.0f, -99,4157f, 0.0f), 4);
	*(&Local_6 + 3872) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low150", Vector(342,1736f, 112,2822f, 1536,725f), Vector(0.0f, -99,4157f, 0.0f), 4);
	*(&Local_6 + 3880) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low151", Vector(345,6431f, 111,4353f, 1523,694f), Vector(0.0f, -115,609f, 0.0f), 4);
	*(&Local_6 + 3888) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low152", Vector(358,6421f, 111,6835f, 1518,241f), Vector(0.0f, -140,502f, 0.0f), 4);
	*(&Local_6 + 3896) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &Local_6, "cover_low153", Vector(357,6692f, 111,6444f, 1519,205f), Vector(0.0f, -132,37f, 0.0f), 4);
}

void }CØBÒÎD¿-CÓ*NB×DÂÓç,è:B@°:¯ogoToShootPos p   ´CÕæBÕeDÁ {CÓB×dDÁ}1CÐtBØ<ÎDÁÑ§CÎ×BØ¬DÂ&lCÍp`BÚKDÂüCÌMBÚÎDÂÝÌCÊQfBÚõ#DÂû"CÈwLBÚþ0DÂÓDCÇBÛ?DÂ¼CÆLBÛåDÂbCÆ	ÌBÛ
tDÂ*CÅôBÛDÁ×ÓCÄõWBÚúYDÁOÏCÄ¢(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x22EDA / 143066
{
	((StackVal - StackVal <= StackVal - 9493))->f_49324 = StackVal;
}

vector3 CC*áBù :DÍscC72ÓBù4DÎ^.C0Bö]öDÏ}C*ñBõCDÏò¯C!îBòûQDÐcC:±BðVDÑVéC£ÈBîý1DÒZyBý¬BïQDÒîvBî;ÐBïDÒæëBá	mBï8 DÓêBÓ_<BïpòDÓ  BÁìBì^DÓeB¬+BêåDÔWB{Bé¶DÔÖ;BBèÈ#DÕlBdk(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, bool bParam67) //Position: 0x2333F / 144191
{
}

vector3 C/>BôJJDÑÅC$ÌÔBòLDÑûCp?(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, int iParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x23D83 / 146819
{
	int iVar23806;
	
	(StackVal - 4078)->f_53892 = StackVal;
	PatchTrap1();
	(StackVal >= (Vector(StackVal, (StackVal / StackVal + 67) - 4425, Global_4510541))->f_1299 - 4208)->f_54263 = StackVal;
	PatchTrap7();
	return StackVal, StackVal, StackVal - 3355 - 4125;
	StackVal->f_54363 = StackVal;
	(IntToFloat(4.0f - 4433))->f_54368 = StackVal - 7500;
	(-3.0f - 4384)->f_54367 = StackVal - 10782;
	(StackVal - 14042 - 5147)->f_54423 = StackVal;
	itos(StackVal - 18418, StackVal, 66);
	176->f_54556 = StackVal;
	straddi(Global_36420, (StackVal - 21919)->f_66, 66);
	PatchTrap3();
	((StackVal * 4 - 5911))->f_54958 = StackVal;
	PatchTrap1();
	(&iVar23806 + 8192 - 6273)->f_54762 = (StackVal + 21939)->f_17128;
	return;
	(4294965738 - 6305)->f_54759 = StackVal;
	PatchTrapE();
	0.0f->f_54624 = 4294934528 - 6393;
	Unknown_Function();
	PatchTrap6();
	PatchTrapA();
	Unknown_Function();
	(&Global_17125 ^ &Global_16467157)->f_54562 = StackVal;
}

vector3 Â\BçÍ'DÖ(;Â<-BébDÖRÂ­¬vBë_¯DÖ"ÑÂ·>OBëß)DÕøWÂÀ BìSÎDÖúÂÆ¦¡Bìu´DÖxÂÍìkBìÆDÖZ©ÂÖtBìD×	5ÂÞÝûBðD×âUÂíÝBòc!DØT¤Âú[BôDØ$ÜÃ¥&BôQD×æÃ4¤Bô#óDÖ"ÃBôq¼DÖUµÃ6 Bù>¹D×¼dÃS²-BþºDÙLrÃ_ÆaC  bDÙUÑÃg%hCrDØô3ÃmúyC&gDØr:Ã}$BCüDÖùäÃ>ÞC0DÖn(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x240AB / 147627
{
	return StackVal, StackVal, StackVal;
	PatchTrap1();
	StackVal->f_1427->f_54742 = StackVal;
	return StackVal, StackVal, StackVal;
	*(&Local_6 + 3960) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, StackVal);
	PushArrayP();
	*(&Local_6 + 3968) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_6, "collisionCourse");
	PushArrayP();
	*(&Local_6 + 3976) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &Local_6, "s3_go_to_road");
	PushArrayP();
}

void D¬hDCBðBD«¯DCQ2BD©,è:B°:¯owalker_2_path    p   TD6+pBD¬Ô»D6,}BD­ñ¼D5üwBD®æD5UBD®@D4í·BD®Z®D4EËBD®n{D-/B D®ëÛ,è:(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65) //Position: 0x243DF / 148447
{
	*(!StackVal + 4000) = StackVal;
	*(&Local_6 + 4008) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Local_6, "detonator01x0", "p_gen_detonator01x", Vector(-195,763f, 129,7899f, 1707,672f), Vector(0.0f, -132,1044f, 0.0f), 1);
	return;
}

bool Function_548() //Position: 0x244CC / 148684
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_493())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_321(&iLocal_1208))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_1189))
		{
			iLocal_1189 = Function_557(10, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&uLocal_1191))
		{
			uLocal_1191 = Function_550(1, 0, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_549("MINI_GAMES_AND_JOBS\\CAR"))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_549(bool bParam0) //Position: 0x24555 / 148821
{
	if (REQUEST_MISSION_AUDIO_BANK(&bParam0))
	{
		return 1;
	}
	return 0;
}

var Function_550(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x24567 / 148839
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
		Function_556(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_555())
		{
			return "";
		}
	}
	if (!Function_553())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_194();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_435(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_435(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_435(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_435(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_552(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_552(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
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
				if (!Function_74(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
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
		Function_551(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_551(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x248C4 / 149700
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

var Function_552(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2490E / 149774
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

bool Function_553() //Position: 0x249AE / 149934
{
	if (Function_554() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_554() //Position: 0x249C4 / 149956
{
	return Global_21369.f_244;
}

bool Function_555() //Position: 0x249CF / 149967
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_556(var uParam0, bool bParam1, bool bParam2) //Position: 0x249EF / 149999
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_77(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_77(&Global_21369 + 72 + 32, 64);
	}
	return;
}

var Function_557(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x24A1E / 150046
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	uParam2 = &uParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_166(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, 1, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_336(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_564(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_560(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &uParam3;
			Var3.f_4 = &uParam4;
			Var3.f_8 = &uParam5;
			if (Function_74(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_559(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, 0);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 0);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_558(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_558(var uParam0, bool bParam1) //Position: 0x24F5E / 151390
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_559(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x24F80 / 151424
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_560(int iParam0, int iParam1) //Position: 0x24FE1 / 151521
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_485(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == iParam0)
					{
						Function_561(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_561(var uParam0, int iParam1) //Position: 0x2506F / 151663
{
	Function_563(&uParam0);
	Function_562(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_562(int iParam0) //Position: 0x2509B / 151707
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_563(int iParam0) //Position: 0x250C1 / 151745
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

var Function_564(int iParam0, var uParam1) //Position: 0x25197 / 151959
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (GET_ACTOR_ENUM(&uVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&uVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &uVar2;
				}
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

void Function_565() //Position: 0x2523D / 152125
{
	Function_428(&iLocal_1208, "fbi02", 10, 0);
	Function_428(&iLocal_1208, "arm_veh", 5, 0);
	Function_428(&iLocal_1218, "talking_stand", 5, 0);
	Function_428(&iLocal_1218, "custom/talking_stand", 8, 0);
	Function_428(&iLocal_1218, "aiming_point", 5, 0);
	Function_428(&iLocal_1218, "custom/aiming_point", 8, 0);
	Function_428(&iLocal_1218, "one_handed_wave", 5, 0);
	Function_428(&iLocal_1218, "custom/one_handed_wave", 8, 0);
	Function_428(&iLocal_1218, "FBI02_rifle_stand", 5, 0);
	Function_428(&iLocal_1218, "custom/FBI02_rifle_stand", 8, 0);
	Function_428(&iLocal_1218, "FBI_commander", 5, 0);
	Function_428(&iLocal_1218, "custom/FBI_commander", 8, 0);
	Function_428(&iLocal_1218, "FBI02_soldiers_stn", 5, 0);
	Function_428(&iLocal_1218, "custom/FBI02_soldiers_stn", 8, 0);
	Function_428(&iLocal_1268, "p_gen_wagonExplode01ax", 0, 0);
	Function_428(&iLocal_1268, "p_gen_wagonExplode01bx", 0, 0);
	Function_428(&iLocal_1268, "p_gen_wagonExplode01cx", 0, 0);
	Function_428(&iLocal_1268, "p_gen_wagonExplode01dx", 0, 0);
	Function_428(&iLocal_1268, "p_gen_wagonExplode01ex", 0, 0);
	Function_428(&iLocal_1268, "p_gen_wagonExplode01fx", 0, 0);
	Function_328(&iLocal_1268, 976, 2, 0);
	Function_328(&iLocal_1268, 977, 2, 0);
	Function_328(&iLocal_1268, 980, 2, 0);
	Function_328(&iLocal_1268, 981, 2, 0);
	Function_328(&iLocal_1268, 983, 2, 0);
	Function_328(&iLocal_1268, 984, 2, 0);
	Function_328(&iLocal_1268, 470, 2, 0);
	Function_328(&iLocal_1268, 471, 2, 0);
	Function_328(&iLocal_1268, 472, 2, 0);
	Function_328(&iLocal_1268, 474, 2, 0);
	Function_328(&iLocal_1268, 475, 2, 0);
	Function_328(&iLocal_1268, 476, 2, 0);
	Function_428(&iLocal_1268, "FBI02_ambush", 5, 0);
	Function_428(&iLocal_1268, "custom/FBI02_ambush", 8, 0);
	return;
}

void Function_566(int iParam0, bool bParam1) //Position: 0x2556C / 152940
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_573(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_342(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
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
	if (!Function_342(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_209();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_243();
	Function_572();
	Function_233("");
	Function_571(0);
	Function_570();
	Function_201();
	Function_200();
	ENABLE_JOURNAL_REPLAY(0);
	Function_569();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_550(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_346(0, 0x40400000);
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
	Function_568(13);
	Function_568(14);
	Function_568(25);
	Function_568(24);
	Function_568(12);
	Function_568(27);
	Function_568(26);
	Function_568(15);
	Function_567();
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

void Function_567() //Position: 0x259AC / 154028
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

void Function_568(int iParam0) //Position: 0x25A31 / 154161
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_569() //Position: 0x25A51 / 154193
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

void Function_570() //Position: 0x25A97 / 154263
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_571(int iParam0) //Position: 0x25AAD / 154285
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_204())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_572() //Position: 0x25AE6 / 154342
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_573(int iParam0, int iParam1) //Position: 0x25AF8 / 154360
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
			Function_574(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_574(struct<113> Param0) //Position: 0x25B7F / 154495
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

bool Function_575(struct<25> Param0) //Position: 0x25BDD / 154589
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
			Function_576(&Param0, 1);
			return 1;
		}
	}
	Function_576(&Param0, 0);
	return 0;
}

void Function_576(struct<25> Param0) //Position: 0x25C69 / 154729
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

bool Function_577(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x25C94 / 154772
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
		Function_576(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_596(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_595(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_595(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_581(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_576(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_580(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_579(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_580(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_578(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_233(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_579(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_576(&Param2, 0);
	return 0;
}

void Function_578(char* cParam0) //Position: 0x260AA / 155818
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

void Function_579(struct<25> Param0) //Position: 0x2619E / 156062
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
			Function_38(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_38(&iParam2, 2);
			break;
	}
	Function_38(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_580(bool bParam0) //Position: 0x26216 / 156182
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_581(struct<57> Param0) //Position: 0x2623A / 156218
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
			return Function_592(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_585(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_592(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_582(&Param0, bVar2);
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
						bVar2 = Function_592(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_582(&Param0, bVar2);
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

var Function_582(int iParam0, bool bParam1) //Position: 0x263AB / 156587
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
				bParam1 = Function_584(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_583(16);
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
				bParam1 = Function_584(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_583(256);
			}
		}
	}
	return bParam1;
}

bool Function_583(int iParam0) //Position: 0x264E7 / 156903
{
	return 2 | iParam0;
}

int Function_584(int iParam0) //Position: 0x264F1 / 156913
{
	return 4 | iParam0;
}

int Function_585(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x264FB / 156923
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
				iParam3 = Function_591(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_583(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_586(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_583(16);
		}
	}
	return 0;
}

int Function_586(int iParam0, vector3 vParam1) //Position: 0x265B6 / 157110
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_590(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_589(iVar0, 3, 1, bParam3))
			{
				if (!Function_595(&iParam0, 8, 1))
				{
					return Function_588(64, 1024, bParam2);
				}
			}
			return Function_587(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_589(iVar0, 2, 1, bParam3))
			{
				if (!Function_595(&iParam0, 32, 1))
				{
					return Function_588(64, 1024, bParam2);
				}
			}
			return Function_587(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_589(iVar0, 1, 1, bParam3))
			{
				if (!Function_595(&iParam0, 64, 1))
				{
					return Function_588(64, 1024, bParam2);
				}
			}
			return Function_587(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_589(iVar0, 3, 1, bParam3))
			{
				if (!Function_595(&iParam0, 128, 1))
				{
					return Function_588(64, 1024, bParam2);
				}
			}
			return Function_587(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_589(iVar0, 1, 1, bParam3))
			{
				if (!Function_595(&iParam0, 1024, 1))
				{
					return Function_588(64, 1024, bParam2);
				}
			}
			return Function_587(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_589(iVar0, 1, 1, bParam3))
			{
				if (!Function_595(&iParam0, 1024, 1))
				{
					return Function_588(64, 1024, bParam2);
				}
			}
			return Function_587(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_587(int iParam0, int iParam1, bool bParam2) //Position: 0x2677E / 157566
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_588(int iParam0, int iParam1, bool bParam2) //Position: 0x26793 / 157587
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_589(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x267A8 / 157608
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_590(int iParam0) //Position: 0x267C5 / 157637
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

int Function_591(var uParam0, vector3 vParam1) //Position: 0x26838 / 157752
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_590(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_589(iVar0, 3, 1, bParam2))
			{
				if (!Function_595(&uParam0, 8, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000009:
			if (Function_589(iVar0, 3, 1, bParam2))
			{
				if (!Function_595(&uParam0, 8, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x0000006E:
			if (Function_589(iVar0, 2, 1, bParam2))
			{
				if (!Function_595(&uParam0, 16, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x0000005B:
			if (Function_589(iVar0, 2, 1, bParam2))
			{
				if (!Function_595(&uParam0, 32, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000031:
			if (Function_589(iVar0, 1, 1, bParam2))
			{
				if (!Function_595(&uParam0, 64, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000007:
			if (Function_589(iVar0, 3, 1, bParam2))
			{
				if (!Function_595(&uParam0, 128, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000008:
			if (Function_589(iVar0, 2, 1, bParam2))
			{
				if (!Function_595(&uParam0, 256, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000014:
			if (Function_589(iVar0, 1, 1, bParam2))
			{
				if (!Function_595(&uParam0, 512, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000018:
			if (Function_589(iVar0, 1, 1, bParam2))
			{
				if (!Function_595(&uParam0, 512, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000057:
			if (Function_589(iVar0, 1, 1, bParam2))
			{
				if (!Function_595(&uParam0, 1024, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000058:
			if (Function_589(iVar0, 1, 1, bParam2))
			{
				if (!Function_595(&uParam0, 1024, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_592(struct<65> Param0) //Position: 0x26A61 / 158305
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
						return Function_591(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_595(&Param0, 2, 1))
					{
						return Function_584(8);
					}
					return Function_583(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_595(&Param0, 4, 1))
					{
						return Function_584(16);
					}
					return Function_583(16);
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
							return Function_586(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_595(&Param0, 2, 1))
						{
							return Function_584(128);
						}
						return Function_583(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_595(&Param0, 4, 1))
						{
							return Function_584(256);
						}
						return Function_583(256);
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
						return Function_586(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_595(&Param0, 2, 1))
					{
						return Function_584(8);
					}
					return Function_583(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_595(&Param0, 4, 1))
					{
						return Function_584(16);
					}
					return Function_583(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_594(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_595(&Param0, 2, 1))
					{
						return Function_584(8);
					}
					return Function_583(8);
				}
				if (!Function_595(&Param0, 4, 1))
				{
					return Function_584(16);
				}
				return Function_583(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_586(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_593(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_583(128);
							}
							if (!Function_595(&Param0, 2, 1))
							{
								return Function_584(8);
							}
							return Function_583(8);
						}
						if (iParam4 == 2)
						{
							if (Function_593(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_583(256);
							}
							if (!Function_595(&Param0, 4, 1))
							{
								return Function_584(16);
							}
							return Function_583(16);
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

bool Function_593(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x26D47 / 159047
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

int Function_594(int iParam0, vector3 vParam1) //Position: 0x26E15 / 159253
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_590(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_589(iVar0, 2, 1, bParam2))
			{
				if (!Function_595(&iParam0, 16, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x0000005B:
			if (Function_589(iVar0, 2, 1, bParam2))
			{
				if (!Function_595(&iParam0, 32, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000057:
			if (Function_589(iVar0, 1, 1, bParam2))
			{
				if (!Function_595(&iParam0, 1024, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		case 0x00000058:
			if (Function_589(iVar0, 1, 1, bParam2))
			{
				if (!Function_595(&iParam0, 1024, 1))
				{
					return Function_584(64);
				}
			}
			return Function_583(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_595(struct<69> Param0) //Position: 0x26F37 / 159543
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

int Function_596(int iParam0) //Position: 0x26F61 / 159585
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_597(int iParam0) //Position: 0x26F97 / 159639
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_598() //Position: 0x26FB5 / 159669
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	if ((iLocal_1375 % 2) == 0)
	{
		if (IS_OBJECTSET_VALID(&uLocal_1395))
		{
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_1395) - 1))
			{
				uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_1395);
				if (DECOR_CHECK_EXIST(&uVar2, "nfDropTime"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar2, "nfDropTime")) < 3.0f)
					{
						GET_OBJECT_POSITION(&uVar2, &uVar3);
						Function_276(&uVar3, "DynamiteExplosion", 0, 1);
						REMOVE_OBJECT_FROM_OBJECTSET(&uVar2, &uLocal_1395);
						DESTROY_OBJECT(&uVar2);
					}
				}
				else
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(GET_OBJECT_ATTACHED_TO(_GET_OBJECT_ATTACHMENT(&uVar2)));
					if (!IS_ACTOR_ALIVE(&uVar1))
					{
						DECOR_SET_FLOAT(&uVar2, "nfDropTime", GET_CURRENT_GAME_TIME());
					}
				}
				bVar0++;
			}
		}
	}
	iLocal_1375++;
	return;
}

void Function_599(var uParam0) //Position: 0x27095 / 159893
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_99472 && uParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_99472 && uParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_99471);
	}
	return;
}

void Function_600() //Position: 0x270C8 / 159944
{
	if (IS_ACTOR_VALID(&Local_6 + 1184[02]))
	{
		if (GET_ACTOR_STUCK_STATE(&Local_6 + 1184[02]) != 0)
		{
			Function_351(&Local_6 + 1184[02]);
			Function_601(StackVal, Function_351(&Local_6 + 1184[02]), 10.0f);
		}
	}
	return;
}

void Function_601(struct<2> Param0, bool bParam2) //Position: 0x27101 / 160001
{
	var uVar0;
	int iVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		Function_435(&iVar1);
		if (GET_OBJECT_TYPE(&iVar1) != 29 && VDIST(Param0, Function_435(&iVar1)) >= bParam2)
		{
			DESTROY_OBJECT(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_602(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x27160 / 160096
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

