//Decompiled with MagicRDR v1.0
//Function Count : 65
//Statics Count : 317
//Natives Count : 73
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 11;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 11;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0.0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 4;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_11 = 0;
	iLocal_67 = 0;
	fLocal_68 = 1.0f;
	if (Function_63())
	{
		Function_62();
	}
	else
	{
		Function_60();
		ENABLE_CHILD_SECTOR("dlc_lsh_race01x");
		Local_134.f_500 = 7;
		Function_59(0, 1);
		Function_59(1, 2);
		Function_58(0, TO_FLOAT(28));
		Function_57(1, 1);
		Function_56(Local_264);
		Function_54(1);
		Function_53(8);
		Function_51(0, 0);
		iVar0 = CLEAR_AREA_OF_TREE_TYPE(-3170.226f, 41.65784f, 3688f, 100.0f, "");
		while (!IS_EXITFLAG_SET())
		{
			Function_7();
			WAIT(false);
		}
		RESET_THIS_TREE_TYPE_CLEARING(iVar0);
		if (StackVal != 4294967295)
		{
			Function_2(1, 0, 0);
		}
	}
	DISABLE_CHILD_SECTOR("dlc_lsh_race01x");
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xC1 / 193
{
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0, int iParam1, int iParam2) //Position: 0xCD / 205
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_3(Global_16524, bVar0, 1);
	}
	return;
}

void Function_3(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B3 / 435
{
	int iVar0;
	
	Function_6(iParam0);
	Function_5(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, bParam1);
	Function_4();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_4() //Position: 0x32C / 812
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_5(bool bParam0) //Position: 0x338 / 824
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_6(int iParam0) //Position: 0x37E / 894
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

void Function_7() //Position: 0x3C4 / 964
{
	if (!Function_50(1, 1))
	{
		if (Function_48())
		{
			Function_36(6285, 5673);
		}
		else
		{
			Function_36(3795, 1010);
		}
	}
	return;
}

int Function_8(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3F2 / 1010
{
	int iVar0;
	bool bVar1;
	char* cVar2[24];
	bool bVar8;
	
	Function_24(bParam1, uParam2, uParam3);
	iVar0 = Function_23(bParam0);
	if (!bParam1)
	{
		if (Function_21(4) && !Function_19(bParam0, 16, 1))
		{
			Function_17(bParam0, (iVar0 - 500), 0);
		}
		else
		{
			Function_17(bParam0, iVar0, 0);
		}
	}
	bVar8 = false;
	if (!Function_21(4) || Function_19(bParam0, 16, 1))
	{
		switch (-iVar0)
		{
			case 0x00000001:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_1"));
				bVar1 = 10;
				break;
			
			case 0x00000002:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_2"));
				bVar1 = 8;
				break;
			
			case 0x00000003:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_3"));
				bVar1 = 6;
				break;
			
			case 0x00000004:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_4"));
				bVar1 = 4;
				break;
			
			case 0x00000005:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_5"));
				bVar1 = 3;
				break;
			
			case 0x00000006:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_6"));
				bVar1 = 2;
				break;
			
			case 0x00000007:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_7"));
				bVar1 = 2;
				break;
			
			case 0x00000008:
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("mp_race_pos_v2_8"));
				bVar1 = true;
				break;
		}
	}
	else if (Function_21(4))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, UI_GET_STRING("MP_Race_DNF"));
		bVar1 = false;
	}
	if (Function_21(4))
	{
		bVar8++;
		strcpy(&cVar2, "<green>+", 24);
		stradd(&cVar2, I2STR(bVar1), 24);
		stradd(&cVar2, "</green>", 24);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, &cVar2);
		bVar8++;
		strcpy(&cVar2, "", 24);
		strcpy(&cVar2, I2STR(Function_15(5, bParam0)), 24);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar8, &cVar2);
		bVar8++;
		Function_9(bVar8, Function_11(bParam0));
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_9(bool bParam0, int iParam1) //Position: 0x630 / 1584
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_10(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_10(var uParam0) //Position: 0x85D / 2141
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

int Function_11(int iParam0) //Position: 0x8CE / 2254
{
	return Function_12(0, iParam0);
}

int Function_12(int iParam0, bool bParam1) //Position: 0x8DA / 2266
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_14(iParam0);
	}
	if (!Function_13(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

bool Function_13(bool bParam0) //Position: 0x943 / 2371
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

var Function_14(int iParam0) //Position: 0x9E4 / 2532
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_15(int iParam0, bool bParam1) //Position: 0x9F4 / 2548
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_16(iParam0);
	}
	if (!Function_13(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_16(int iParam0) //Position: 0xA5B / 2651
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0xA6B / 2667
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA7C / 2684
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0xAE1 / 2785
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_50(iParam1, bParam2);
	}
	if (!Function_13(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_20(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_20(int iParam0) //Position: 0xB62 / 2914
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

bool Function_21(int iParam0) //Position: 0xE7B / 3707
{
	return Function_22(Global_76905.f_132, iParam0);
}

int Function_22(var uParam0, int iParam1) //Position: 0xE8C / 3724
{
	return (uParam0 && iParam1) == 0;
}

int Function_23(int iParam0) //Position: 0xE99 / 3737
{
	return Function_15(0, iParam0);
}

void Function_24(bool bParam0, int iParam1, char* cParam2) //Position: 0xEA5 / 3749
{
	if (bParam0)
	{
		if (Function_25())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

bool Function_25() //Position: 0xEC6 / 3782
{
	return Function_21(32768);
}

int Function_26() //Position: 0xED3 / 3795
{
	if (!Function_31(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_rank");
	if (Function_21(4))
	{
		NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptGained");
		NET_PLAYER_LIST_SET_HEADER(4, "mp_race_sb_ptTotal");
		NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_time");
	}
	else
	{
		NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptGained");
		NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
		NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	}
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_27();
	return 1;
}

void Function_27() //Position: 0xFB0 / 4016
{
	if (Function_21(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_28(8192, 1, 1);
	}
	else if (Function_21(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_28(8192, 1, 1);
	}
	else
	{
		Function_28(8192, 0, 1);
	}
	return;
}

void Function_28(int iParam0, bool bParam1, int iParam2) //Position: 0xFED / 4077
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_30(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_29(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x1015 / 4117
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1028 / 4136
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_31(bool bParam0) //Position: 0x1037 / 4151
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_25() || Function_35(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_25())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_32(Function_25());
	return 1;
}

void Function_32(bool bParam0) //Position: 0x10B8 / 4280
{
	if (bParam0 || Function_21(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_21(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_21(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_21(1048576) || Function_21(4)) || Function_50(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_28(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_33(var uParam0) //Position: 0x1141 / 4417
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_34(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1155 / 4437
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_35(bool bParam0, bool bParam1) //Position: 0x119A / 4506
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

void Function_36(int iParam0, int iParam1) //Position: 0x11CE / 4558
{
	Function_37(iParam0, iParam1, 5666);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x11DF / 4575
{
	if (Function_21(0x4000000))
	{
		Function_41();
		Function_28(0x4000000, 0, 1);
	}
	if (Function_21(0x10000000))
	{
		Function_41();
		Function_28(0x10000000, 0, 1);
	}
	if (Function_21(2) != Function_21(0x2000000))
	{
		Function_41();
		Function_28(0x2000000, Function_21(2), 1);
	}
	if (Function_25())
	{
		Function_40(!Function_21(16));
	}
	if (Function_21(16))
	{
		Function_39(&uParam0, &uParam1, &iParam2);
		if (Function_21(8192))
		{
			if (!Function_21(4194304))
			{
				Function_28(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_21(8388608))
			{
				Function_28(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_38();
		}
		Function_28(16384, 1, 1);
	}
	else if (!Function_21(32))
	{
		Function_38();
	}
	Function_28(32768, 0, 1);
	return;
}

void Function_38() //Position: 0x1378 / 4984
{
	if (Function_21(4194304))
	{
		Function_28(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_21(8388608))
	{
		Function_28(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_39(var uParam0, var uParam1, int iParam2) //Position: 0x1481 / 5249
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_28(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_21(0x40000000);
	bVar3 = !Function_21(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_13(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_19(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_17(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_21(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_17(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

void Function_40(bool bParam0) //Position: 0x15F9 / 5625
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_28(16384, 0, 1);
	return;
}

void Function_41() //Position: 0x1613 / 5651
{
	Function_28(32768, 1, 0);
	return;
}

int Function_42() //Position: 0x1622 / 5666
{
	return 1;
}

int Function_43(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x1629 / 5673
{
	int iVar0;
	char* cVar1[24];
	bool bVar7;
	
	Function_24(bParam1, iParam2, cParam3);
	bParam1 = bParam1;
	iVar0 = Function_45(bParam0);
	Function_17(bParam0, iVar0, 0);
	bVar7 = false;
	switch (-iVar0)
	{
		case 0x00000001:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_1"));
			break;
		
		case 0x00000002:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_2"));
			break;
		
		case 0x00000003:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_3"));
			break;
		
		case 0x00000004:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_4"));
			break;
		
		case 0x00000005:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_5"));
			break;
		
		case 0x00000006:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_6"));
			break;
		
		case 0x00000007:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_7"));
			break;
		
		case 0x00000008:
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, UI_GET_STRING("mp_race_pos_v2_8"));
			break;
	}
	bVar7++;
	strcpy(&cVar1, "", 24);
	strcpy(&cVar1, I2STR(Function_15(5, bParam0)), 24);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar7, &cVar1);
	bVar7++;
	Function_9(bVar7, Function_12(5, bParam0));
	bVar7++;
	Function_44(bVar7, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x17C7 / 6087
{
	if (Function_21(4))
	{
		if (Function_19(bParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

var Function_45(bool bParam0) //Position: 0x17FA / 6138
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = Function_15(5, bParam0);
	iVar2 = 4294967295;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_46(bVar1))
		{
			if (bParam0 != bVar1)
			{
				iVar3 = Function_15(5, bVar1);
				if (iVar0 <= iVar3)
				{
					iVar2 = (iVar2 - 1);
				}
				else if (iVar0 == iVar3)
				{
					fVar4 = Function_12(5, bParam0);
					fVar5 = Function_12(5, bVar1);
					if (fVar4 < fVar5)
					{
						iVar2 = (iVar2 - 1);
					}
					else if (fVar4 != fVar5)
					{
					}
				}
			}
		}
		bVar1++;
	}
	return iVar2;
}

bool Function_46(bool bParam0) //Position: 0x1877 / 6263
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_13(bParam0);
}

int Function_47() //Position: 0x188D / 6285
{
	if (!Function_31(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_rank");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_race_sb_ptTotal");
	NET_PLAYER_LIST_SET_HEADER(4, "MP_race_totalTime");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_27();
	return 1;
}

bool Function_48() //Position: 0x191E / 6430
{
	return Function_49(4);
}

int Function_49(int iParam0) //Position: 0x1928 / 6440
{
	return Function_22((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_50(int iParam0, bool bParam1) //Position: 0x193B / 6459
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x195B / 6491
{
	Function_6(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_52(StackVal, iParam1);
	}
	return;
}

void Function_52(int iParam0, int iParam1) //Position: 0x198C / 6540
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_6(iParam0);
	Function_5(iVar0);
	PRINTNL();
	Function_3(iParam0, iVar0, iParam1);
	return;
}

void Function_53(int iParam0) //Position: 0x19B1 / 6577
{
	bool bVar0;
	
	if (Global_63399 == iParam0)
	{
		return;
	}
	if (!iParam0 & 1 != 0)
	{
		bVar0 = Global_63400;
	}
	else if (!iParam0 & 2 != 0)
	{
		bVar0 = Global_63401;
	}
	else if (!iParam0 & 4 != 0)
	{
		bVar0 = Global_63402;
	}
	else if (!iParam0 & 8 != 0)
	{
		bVar0 = Global_63403;
	}
	else if (!iParam0 & 16 != 0)
	{
		bVar0 = Global_63404;
	}
	else if (!iParam0 & 32 != 0)
	{
		bVar0 = Global_63405;
	}
	else
	{
		LOG_ERROR("SET_TIME_OF_DAY_REGION got an invalid TOD_REGION");
	}
	ADD_TIME(&bVar0, 0, false, false, 1);
	SET_TIME_OF_DAY(bVar0);
	return;
}

void Function_54(int iParam0) //Position: 0x1A73 / 6771
{
	Function_55(8, iParam0);
	return;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x1A80 / 6784
{
	if (bParam1)
	{
		Function_30(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_29(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_56(int iParam0) //Position: 0x1AA8 / 6824
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x1AB6 / 6838
{
	if (bParam1)
	{
		Function_30(&Global_83591 + 140 + 56, iParam0);
	}
	else
	{
		Function_29(&Global_83591 + 140 + 56, iParam0);
	}
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x1ADE / 6878
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x1AFF / 6911
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_60() //Position: 0x1B20 / 6944
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;
	bool bVar72;
	bool bVar73;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	bool bVar80;
	bool bVar81;
	bool bVar82;
	bool bVar83;
	bool bVar84;
	bool bVar85;
	bool bVar86;
	bool bVar87;
	bool bVar88;
	bool bVar89;
	bool bVar90;
	bool bVar91;
	bool bVar92;
	bool bVar93;
	bool bVar94;
	bool bVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	bool bVar113;
	bool bVar114;
	bool bVar115;
	bool bVar116;
	bool bVar117;
	bool bVar118;
	bool bVar119;
	bool bVar120;
	bool bVar121;
	bool bVar122;
	bool bVar123;
	bool bVar124;
	bool bVar125;
	bool bVar126;
	bool bVar127;
	bool bVar128;
	bool bVar129;
	bool bVar130;
	bool bVar131;
	bool bVar132;
	bool bVar133;
	bool bVar134;
	
	Function_61(4, 1);
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_LSH_layout");
	Local_264.f_124 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "CheckpointStart", 2, -1700.746f, 5.816195f, 4312.164f, 0.0f, 625.7947f, 0.0f, 85.66844f, 12.0306f, 44.81938f);
	DECOR_SET_INT((*&Local_264 + 4)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[0]);
	(*&Local_264 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint1", 2, -1799.133f, 2.36952f, 4194.4f, -173.7696f, -394.9637f, -183.5694f, 135.5343f, 17.63283f, 43.46068f);
	DECOR_SET_INT((*&Local_264 + 4)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[1]);
	(*&Local_264 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint2", 2, -1889.807f, 7.257974f, 4067.553f, 2.560376f, -506.7211f, 0.5347971f, 139.1991f, 15.9445f, 44.72432f);
	DECOR_SET_INT((*&Local_264 + 4)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[2]);
	(*&Local_264 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint3", 2, -1875.606f, 7.310808f, 4001.25f, -175.5146f, -376.1278f, -181.2179f, 121.9479f, 6.517538f, 39.85113f);
	DECOR_SET_INT((*&Local_264 + 4)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[3]);
	(*&Local_264 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint4", 2, -1916.741f, 7.664293f, 3965.11f, -173.1358f, -411.0529f, 174.6819f, 103.744f, 12.53843f, 40.01851f);
	DECOR_SET_INT((*&Local_264 + 4)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[4]);
	(*&Local_264 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint5", 2, -1928.715f, 10.18356f, 3909.831f, 363.1913f, -157.8194f, 0.2783931f, 115.0602f, 9.544034f, 36.03407f);
	DECOR_SET_INT((*&Local_264 + 4)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[5]);
	(*&Local_264 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint6", 2, -1967.376f, 12.30332f, 3882.109f, 183.2219f, -63.93122f, -181.2268f, 92.02697f, 17.07743f, 33.36797f);
	DECOR_SET_INT((*&Local_264 + 4)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[6]);
	(*&Local_264 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint7", 2, -2021.766f, 10.25715f, 3905.889f, 0.8903875f, 478.8987f, 1.767496f, 113.7163f, 15.53979f, 38.90125f);
	DECOR_SET_INT((*&Local_264 + 4)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[7]);
	(*&Local_264 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint8", 2, -2073.605f, 8.188443f, 3948.109f, 180.682f, 410.8849f, -178.4828f, 99.53001f, 9.571766f, 39.32951f);
	DECOR_SET_INT((*&Local_264 + 4)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[8]);
	(*&Local_264 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint9", 2, -2113.085f, 9.162201f, 3928.344f, 0.1741738f, 51.40155f, 1.855731f, 139.3037f, 13.88794f, 40.59652f);
	DECOR_SET_INT((*&Local_264 + 4)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[9]);
	(*&Local_264 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint10", 2, -2111.027f, 11.34681f, 3884.856f, -1.575596f, 357.8276f, -1.435171f, 100.8803f, 9.576327f, 39.12636f);
	DECOR_SET_INT((*&Local_264 + 4)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[10]);
	(*&Local_264 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint11", 2, -2089.204f, 11.28892f, 3795.372f, 185.2432f, 53.19831f, 541.8162f, 119.2927f, 15.90568f, 49.52748f);
	DECOR_SET_INT((*&Local_264 + 4)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[11]);
	(*&Local_264 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint12", 2, -2019.078f, 12.40777f, 3759.579f, 362.5331f, -422.3942f, 357.1738f, 106.3467f, 14.6364f, 34.3213f);
	DECOR_SET_INT((*&Local_264 + 4)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[12]);
	(*&Local_264 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint13", 2, -1946.99f, 11.96409f, 3746.703f, 101.1388f, -265.6086f, 101.2012f, 137.5154f, 6.517538f, 41.35468f);
	DECOR_SET_INT((*&Local_264 + 4)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[13]);
	(*&Local_264 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint14", 2, -1852.993f, 12.94137f, 3723.925f, 25.34427f, -259.8917f, 25.02962f, 115.5111f, 6.517538f, 37.22842f);
	DECOR_SET_INT((*&Local_264 + 4)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[14]);
	(*&Local_264 + 4)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint15", 2, -1798.311f, 11.61997f, 3786.514f, 174.0088f, -223.9639f, 175.8634f, 135.9703f, 15.1444f, 39.97659f);
	DECOR_SET_INT((*&Local_264 + 4)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[15]);
	(*&Local_264 + 4)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint16", 2, -1736.639f, 13.17701f, 3822.831f, 358.4453f, 384.4471f, -358.9756f, 133.4307f, 17.07743f, 38.71011f);
	DECOR_SET_INT((*&Local_264 + 4)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[16]);
	(*&Local_264 + 4)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint17", 2, -1647.398f, 15.63963f, 3842.969f, 349.9736f, 441.8444f, -368.2591f, 133.4307f, 17.07743f, 40.66869f);
	DECOR_SET_INT((*&Local_264 + 4)[17], "pointNum", 17);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[17]);
	(*&Local_264 + 4)[18] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint18", 2, -1558.543f, 14.14936f, 3855.263f, 288.6118f, 448.5066f, -429.7144f, 133.4307f, 17.07743f, 37.55999f);
	DECOR_SET_INT((*&Local_264 + 4)[18], "pointNum", 18);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[18]);
	(*&Local_264 + 4)[19] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint19", 2, -1555.863f, 14.02501f, 3885.452f, 357.7646f, 362.0487f, -359.7626f, 133.4307f, 17.07743f, 38.96795f);
	DECOR_SET_INT((*&Local_264 + 4)[19], "pointNum", 19);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[19]);
	(*&Local_264 + 4)[20] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint20", 2, -1548.823f, 14.28237f, 3947.478f, 358.5827f, 363.0935f, -358.4086f, 133.4307f, 17.07743f, 40.79631f);
	DECOR_SET_INT((*&Local_264 + 4)[20], "pointNum", 20);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[20]);
	(*&Local_264 + 4)[21] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint21", 2, -1583.177f, 11.90496f, 3973.14f, 357.4286f, 303.4023f, -356.185f, 133.4307f, 17.07743f, 39.90825f);
	DECOR_SET_INT((*&Local_264 + 4)[21], "pointNum", 21);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[21]);
	(*&Local_264 + 4)[22] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint22", 2, -1637.262f, 11.929f, 3984.922f, 356.5908f, 294.5398f, -355.2301f, 133.4307f, 17.07743f, 42.20171f);
	DECOR_SET_INT((*&Local_264 + 4)[22], "pointNum", 22);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[22]);
	(*&Local_264 + 4)[23] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint23", 2, -1671.878f, 13.42602f, 4017.582f, 357.4833f, 304.2267f, -356.2508f, 133.4307f, 17.07743f, 43.30032f);
	DECOR_SET_INT((*&Local_264 + 4)[23], "pointNum", 23);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[23]);
	(*&Local_264 + 4)[24] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint24", 2, -1703.031f, 14.56137f, 4050.918f, 358.5522f, 347.8218f, -358.0266f, 133.4307f, 17.07743f, 40.66869f);
	DECOR_SET_INT((*&Local_264 + 4)[24], "pointNum", 24);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[24]);
	(*&Local_264 + 4)[25] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint25", 2, -1677.956f, 14.81038f, 4108.413f, 361.6401f, 210.3515f, -359.161f, 133.4307f, 17.07743f, 42.51292f);
	DECOR_SET_INT((*&Local_264 + 4)[25], "pointNum", 25);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[25]);
	(*&Local_264 + 4)[26] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint26", 2, -1645.088f, 11.86687f, 4160.423f, 358.5836f, 362.3501f, -358.3902f, 133.4307f, 17.07743f, 40.66869f);
	DECOR_SET_INT((*&Local_264 + 4)[26], "pointNum", 26);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[26]);
	(*&Local_264 + 4)[27] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint27", 2, -1668.186f, 7.894299f, 4203.444f, 358.5433f, 346.2962f, -357.9869f, 133.4307f, 17.07743f, 45.45451f);
	DECOR_SET_INT((*&Local_264 + 4)[27], "pointNum", 27);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[27]);
	(*&Local_264 + 4)[28] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -1663.514f, 7.783425f, 4249.417f, 357.045f, -0.2631291f, 1.497847f, 139.1612f, 9.544034f, 9.531831f);
	DECOR_SET_INT((*&Local_264 + 4)[28], "pointNum", 28);
	DECOR_SET_BOOL((*&Local_264 + 4)[28], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_124, (*&Local_264 + 4)[28]);
	*(&Local_264 + 128) = { -1597.949f, 5.773518f, 4321.526f };
	*(&Local_264 + 128 + 12) = { 0.0f, -121.7011f, 0.0f };
	Local_264.f_152 = CREATE_POINT_IN_LAYOUT(Local_264, "f_RaceStarter", -1597.949f, 5.773518f, 4321.526f, 0.0f, -121.7011f, 0.0f);
	DECOR_SET_INT(Local_264.f_152, "CheckPoint", false);
	Local_264.f_156 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -1588.842f, 5.793342f, 4322.144f, 0.0f, 66.23182f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_156);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -1590.144f, 5.773518f, 4324.599f, 0.0f, 61.7636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_156);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -1591.716f, 5.773518f, 4326.956f, 0.0f, 62.17229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_156);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -1593.209f, 5.773518f, 4329.408f, 0.0f, 58.66468f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_156);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -1585.178f, 5.791894f, 4323.851f, 0.0f, 64.90804f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_156);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -1586.668f, 5.773518f, 4326.229f, 0.0f, 63.20155f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_156);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -1588.095f, 5.773518f, 4328.532f, 0.0f, 63.0784f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_156);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -1589.51f, 5.773518f, 4330.776f, 0.0f, 59.62077f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_156);
	Local_264.f_160 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit0", -1704.503f, 5.791346f, 4311.058f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar9, "CheckPoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_160);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit1", -1798.944f, 5.773514f, 4193.744f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar10, "CheckPoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_160);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit2", -1889.576f, 7.265187f, 4067.495f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar11, "CheckPoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_160);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit3", -1875.997f, 7.310808f, 4001.419f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar12, "CheckPoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_160);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit4", -1916.643f, 7.664293f, 3965.087f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar13, "CheckPoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_160);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit5", -1928.665f, 10.18356f, 3909.785f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar14, "CheckPoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_160);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit6", -1967.503f, 12.30723f, 3881.716f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar15, "CheckPoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_160);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit7", -2021.709f, 10.25715f, 3905.974f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar16, "CheckPoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_160);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit8", -2073.557f, 8.204071f, 3948.306f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "CheckPoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_160);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit9", -2112.949f, 9.155642f, 3928.301f, 0.150462f, -2.139648f, 0.2828313f);
	DECOR_SET_INT(bVar18, "CheckPoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_160);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit10", -2110.974f, 11.34681f, 3884.856f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar19, "CheckPoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_160);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit11", -2088.885f, 11.31148f, 3795.667f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar20, "CheckPoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_160);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit12", -2018.415f, 12.38754f, 3759.964f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar21, "CheckPoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_160);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit13", -1946.991f, 11.96409f, 3746.701f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar22, "CheckPoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_160);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit14", -1853.046f, 12.9423f, 3723.987f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar23, "CheckPoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_160);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit15", -1797.732f, 11.60219f, 3785.813f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar24, "CheckPoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_160);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit16", -1736.768f, 13.47658f, 3822.41f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar25, "CheckPoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_160);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit17", -1647.389f, 15.01799f, 3843.3f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar26, "CheckPoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_160);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit18", -1558.619f, 14.14936f, 3855.713f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar27, "CheckPoint", 18);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_160);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit19", -1554.116f, 13.11295f, 3885.662f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar28, "CheckPoint", 19);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_160);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit20", -1549.979f, 14.87781f, 3945.951f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar29, "CheckPoint", 20);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_160);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit21", -1583.052f, 11.90695f, 3973.298f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar30, "CheckPoint", 21);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_160);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit22", -1637.526f, 11.90726f, 3985.69f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar31, "CheckPoint", 22);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_160);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit23", -1672.225f, 13.45587f, 4017.634f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar32, "CheckPoint", 23);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_160);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit24", -1703.345f, 14.56137f, 4051.057f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar33, "CheckPoint", 24);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_160);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit25", -1676.988f, 14.81038f, 4107.664f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar34, "CheckPoint", 25);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_160);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit26", -1644.908f, 11.78901f, 4160.521f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar35, "CheckPoint", 26);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_160);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit27", -1667.926f, 7.915486f, 4203.105f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar36, "CheckPoint", 27);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_160);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit28", -1663.622f, 7.908328f, 4247.916f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar37, "CheckPoint", 28);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_160);
	Local_264.f_164 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00", -1591.905f, 6.023514f, 4319.662f, 0.0f, -285.3163f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_164);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00a", -1611.377f, 5.773518f, 4310.237f, 0.0f, 87.99763f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_164);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00b", -1632.662f, 5.799866f, 4314.871f, 0.0f, -272.6055f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_164);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00c", -1664.317f, 6.806324f, 4315.555f, 0.0f, -274.4038f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_164);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_0", -1693.801f, 6.160848f, 4317.207f, 0.0f, -304.9492f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_164);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0a", -1717.338f, 5.773511f, 4295.877f, 0.0f, -308.2883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_164);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0b", -1738.614f, 5.773515f, 4286.509f, 0.0f, -324.1127f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_164);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0c", -1752.418f, 6.023514f, 4255.963f, 0.0f, -318.1733f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_164);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0d", -1782.874f, 5.773514f, 4231.377f, 0.0f, -337.76f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_164);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01", -1789.369f, 5.773514f, 4202.949f, 0.0f, -324.3542f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_164);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01a", -1811.712f, 5.805737f, 4177.963f, 0.0f, -336.7077f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_164);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01b", -1818.059f, 5.773516f, 4152.632f, 0.0f, -308.6598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_164);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01c", -1840.714f, 5.773515f, 4140.754f, 0.0f, -318.3028f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_164);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01d", -1853.666f, 5.773518f, 4118.578f, 0.0f, -317.5496f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_164);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_01e", -1874.385f, 5.774406f, 4105.388f, 0.0f, -330.9268f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_164);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_02", -1893.921f, 6.730478f, 4075.92f, 0.0f, -18.5588f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_164);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_02a", -1876f, 9.035294f, 4048.0f, 0.0f, -1.740022f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_164);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_02b", -1881.487f, 8.872136f, 4028.0f, 0.0f, -14.02388f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_164);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_03", -1868.0f, 9.035294f, 4012.0f, 0.0f, -322.2802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_164);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_03a", -1892f, 6.325802f, 3992.0f, 0.0f, -311.4991f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_164);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_04", -1916f, 7.469142f, 3976.302f, 0.0f, 6.119701f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_164);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_04a", -1923.923f, 9.805923f, 3944.017f, 0.0f, 3.179165f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_164);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_04b", -1913.697f, 9.47604f, 3927.083f, 0.0f, 38.66827f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_164);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_05", -1918.015f, 9.335024f, 3914.27f, 0.0f, -314.6763f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_164);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_05a", -1939.646f, 11.88855f, 3892.627f, 0.0f, -299.0519f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_164);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_06", -1955.457f, 12.56524f, 3876.651f, 0.0f, -248.1974f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_164);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_06a", -1991.902f, 11.49554f, 3895.902f, 0.0f, -255.7197f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_164);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_07", -2024f, 10.28803f, 3903.698f, 0.0f, -226.2491f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_164);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_07a", -2035.902f, 7.416762f, 3928.0f, 0.0f, -239.2559f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_164);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_07b", -2055.897f, 9.035286f, 3931.897f, 0.0f, -226.4479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_164);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_08", -2064f, 7.987274f, 3948.332f, 0.0f, -268.9472f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_164);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_08a", -2096.485f, 8.998381f, 3949.551f, 0.0f, -320.4071f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_164);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_09", -2112.0f, 9.044401f, 3940f, 0.0f, -355.64f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_164);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_09a", -2110.096f, 10.97382f, 3908f, 0.0f, 4.099739f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_164);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10", -2117.088f, 12.49688f, 3895.684f, 0.0f, -28.05326f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_164);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10a", -2090.089f, 10.98075f, 3858.089f, 0.0f, -1.618439f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_164);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10b", -2095.905f, 10.27115f, 3848.055f, 0.0f, -366.078f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_164);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11", -2097.106f, 12.19602f, 3804.828f, 0.0f, -411.935f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_164);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11a", -2071.362f, 10.6572f, 3789.517f, -0.536366f, -60.23742f, 0.6113138f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_164);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11b", -2052.611f, 12.92277f, 3774.591f, 0.0f, -67.34606f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_164);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11c", -2036f, 13.89353f, 3776.0f, 0.0f, -412.1915f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_164);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12", -2028f, 12.6092f, 3760.0f, 0.0f, -436.4897f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_164);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12a", -1999.835f, 12.30951f, 3757.104f, 0.0f, -439.5755f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_164);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12b", -1976f, 13.18536f, 3758.207f, 0.0f, -434.636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_164);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13", -1956.213f, 11.67607f, 3754.914f, 0.09673474f, -426.4625f, -0.09011618f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_164);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13a", -1892.973f, 11.35526f, 3734.411f, 0.0f, -419.2639f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_164);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13b", -1878.369f, 12.19734f, 3720.0f, 0.0f, -457.4937f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_164);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14", -1864f, 13.05345f, 3716.0f, 0.0f, -130.7429f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_164);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14a", -1840.79f, 12.17113f, 3740.79f, 0.0f, -135.5162f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_164);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14b", -1820.995f, 11.26954f, 3749.498f, 0.0f, -154.4642f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_164);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14c", -1817.769f, 11.54477f, 3768.0f, 0.0f, -130.8385f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_164);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15", -1808f, 11.72866f, 3782.102f, 0.0f, -116.882f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_164);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15a", -1780.129f, 12.09713f, 3791.871f, 0.0f, -114.935f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_164);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15b", -1760.422f, 11.86481f, 3803.679f, 0.0f, -127.0205f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_164);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16", -1748f, 13.87749f, 3824.0f, 0.0f, -463.1479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_164);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16a", -1719.769f, 15.73055f, 3831.66f, 0.0f, -99.44347f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_164);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16b", -1696.646f, 16.0107f, 3829.17f, 0.0f, -465.3572f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_164);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16c", -1680.057f, 15.53233f, 3840.342f, 0.0f, -454.8527f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_164);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17", -1659.549f, 15.90247f, 3837.912f, 0.0f, -458.3554f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_164);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17a", -1627.552f, 14.56885f, 3849.191f, 0.0f, -447.8684f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_164);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17b", -1607.728f, 14.05049f, 3842.104f, 0.0f, -457.399f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_164);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17c", -1587.707f, 14.91373f, 3842.845f, 0.0f, -469.9215f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_164);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18", -1563.998f, 14.66804f, 3844.506f, 0.0f, -519.6965f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_164);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18a", -1549.648f, 14.00337f, 3866.783f, 0.0f, -550.9556f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_164);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_19", -1556.998f, 13.71362f, 3880.0f, 0.0f, -545.7008f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_164);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_19a", -1568f, 15.45574f, 3907.995f, 0.0f, -508.4051f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_164);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_19b", -1548.5f, 15.04554f, 3923.318f, 0.0f, -542.5819f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_164);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_20", -1544f, 15.36342f, 3934.103f, 0.0f, -572.1292f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_164);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_20a", -1559.981f, 12.88043f, 3963.981f, 0.0f, -609.3752f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_164);
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_21", -1574.118f, 12.58407f, 3965.746f, 0.0f, -611.2133f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_164);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_21a", -1612.764f, 11.19111f, 3969.298f, 0.0f, -593.2758f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_164);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_22", -1630.706f, 11.31449f, 3973.681f, 0.0f, -579.2131f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_164);
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_22a", -1648.094f, 13.05808f, 3992.0f, 0.0f, -581.9263f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_164);
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_23", -1660.285f, 14.63117f, 4014.684f, 0.0f, -605.824f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_164);
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_23a", -1692.135f, 14.41185f, 4024.0f, 0.0f, -561.5154f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_264.f_164);
	bVar113 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_24", -1704.133f, 15.03123f, 4036.0f, 0.0f, -527.8996f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar113, Local_264.f_164);
	bVar114 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_24a", -1703.087f, 13.85664f, 4071.543f, 0.0f, -502.2979f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar114, Local_264.f_164);
	bVar115 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_24b", -1695.362f, 13.59196f, 4091.401f, 0.0f, -490.8261f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar115, Local_264.f_164);
	bVar116 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_25", -1680.0f, 14.65033f, 4097.884f, 0.0f, -499.103f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar116, Local_264.f_164);
	bVar117 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_25a", -1656f, 14.93111f, 4116.0f, 0.0f, -515.8081f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar117, Local_264.f_164);
	bVar118 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_25b", -1643.917f, 14.26823f, 4132.0f, 0.0f, -540.6299f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar118, Local_264.f_164);
	bVar119 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_26", -1637.82f, 13.43652f, 4153.736f, 0.0f, -582.3903f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar119, Local_264.f_164);
	bVar120 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_26a", -1659.927f, 9.873272f, 4171.927f, 0.0f, -555.662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar120, Local_264.f_164);
	bVar121 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_27", -1670.716f, 8.088172f, 4191.652f, 0.0f, -533.9238f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar121, Local_264.f_164);
	bVar122 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_27a", -1662.824f, 8.031362f, 4224.0f, 0.0f, -542.2292f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar122, Local_264.f_164);
	bVar123 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_27b", -1665.689f, 8.031363f, 4243.344f, 0.0f, -527.2706f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar123, Local_264.f_164);
	Local_264.f_168 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 172[06]) = { -1663.718f, 7.934141f, 4252.881f };
	*(&Local_264 + 172[06] + 12) = { 0.0f, -87.66403f, 0.0f };
	bVar124 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -1663.718f, 7.934141f, 4252.881f, 0.0f, -87.66403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar124, Local_264.f_168);
	Local_264.f_200 = CREATE_OBJECTSET_IN_LAYOUT("dirMarker_flagsSet", Local_264, 8, 0);
	bVar125 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_1", -1895.704f, 6.568944f, 4072.066f, 0.0f, -122.8094f, 0.0f);
	DECOR_SET_BOOL(bVar125, "dirRight", true);
	DECOR_SET_INT(bVar125, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar125, Local_264.f_200);
	bVar126 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_4", -1920f, 9.487299f, 3910.277f, 0.0f, -203.4741f, 0.0f);
	DECOR_SET_BOOL(bVar126, "dirRight", false);
	DECOR_SET_INT(bVar126, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar126, Local_264.f_200);
	bVar127 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_5", -1964f, 12.33739f, 3875.317f, 0.0f, -149.6432f, 0.0f);
	DECOR_SET_BOOL(bVar127, "dirRight", false);
	DECOR_SET_INT(bVar127, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar127, Local_264.f_200);
	bVar128 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_6", -2114.0f, 8.729749f, 3937.139f, 0.0f, -80.51392f, 0.0f);
	DECOR_SET_BOOL(bVar128, "dirRight", true);
	DECOR_SET_INT(bVar128, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar128, Local_264.f_200);
	bVar129 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_2", -2094.036f, 11.32464f, 3794.036f, 0.0f, -155.1283f, 0.0f);
	DECOR_SET_BOOL(bVar129, "dirRight", true);
	DECOR_SET_INT(bVar129, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar129, Local_264.f_200);
	bVar130 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_3", -1556f, 13.67309f, 3849.253f, 0.0f, -266.7601f, 0.0f);
	DECOR_SET_BOOL(bVar130, "dirRight", true);
	DECOR_SET_INT(bVar130, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar130, Local_264.f_200);
	bVar131 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_11", -1854.628f, 12.52046f, 3716.0f, 0.0f, 130.2674f, 0.0f);
	DECOR_SET_BOOL(bVar131, "dirRight", true);
	DECOR_SET_INT(bVar131, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar131, Local_264.f_200);
	bVar132 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_8", -1633.779f, 10.9116f, 3974.22f, 0.0f, -110.8752f, 0.0f);
	DECOR_SET_BOOL(bVar132, "dirRight", false);
	DECOR_SET_INT(bVar132, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar132, Local_264.f_200);
	bVar133 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_9", -1711.678f, 14.21518f, 4048.0f, 0.0f, -58.46875f, 0.0f);
	DECOR_SET_BOOL(bVar133, "dirRight", false);
	DECOR_SET_INT(bVar133, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar133, Local_264.f_200);
	bVar134 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_10", -1636.038f, 13.05998f, 4157.652f, 0.0f, 31.46113f, 0.0f);
	DECOR_SET_BOOL(bVar134, "dirRight", true);
	DECOR_SET_INT(bVar134, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar134, Local_264.f_200);
}

void Function_61(int iParam0, int iParam1) //Position: 0x4ECD / 20173
{
	switch (iParam1)
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

void Function_62() //Position: 0x4F16 / 20246
{
	while (!IS_EXITFLAG_SET())
	{
		if (Function_48())
		{
			Function_36(6285, 5673);
		}
		else
		{
			Function_36(3795, 1010);
		}
		WAIT(false);
	}
	return;
}

bool Function_63() //Position: 0x4F45 / 20293
{
	return Function_64(2);
}

int Function_64(var uParam0) //Position: 0x4F4F / 20303
{
	return Function_22(StackVal, uParam0);
}

