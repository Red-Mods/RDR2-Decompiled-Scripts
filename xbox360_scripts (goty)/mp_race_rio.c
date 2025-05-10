//Decompiled with MagicRDR v1.0
//Function Count : 61
//Statics Count : 348
//Natives Count : 71
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
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_11 = 0;
	iLocal_67 = 0;
	fLocal_68 = 1.0f;
	Unknown_Function();
	if (StackVal)
	{
		Unknown_Function();
	}
	else
	{
		Function_60();
		ENABLE_CHILD_SECTOR("dlc_rio_race01x");
		Local_134.f_500 = 10;
		Function_59(0, 1);
		Function_59(1, 2);
		Function_58(0, TO_FLOAT(17));
		Function_57(1, 1);
		Function_56(Local_264);
		Function_54(1);
		Function_53(8);
		Function_51(0, 0);
		while (!IS_EXITFLAG_SET())
		{
			Function_7();
			WAIT(false);
		}
		if (StackVal != 4294967295)
		{
			Function_2(1, 0, 0);
		}
	}
	DISABLE_CHILD_SECTOR("dlc_rio_race01x");
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xA1 / 161
{
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0, int iParam1, int iParam2) //Position: 0xAD / 173
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

void Function_3(int iParam0, bool bParam1, bool bParam2) //Position: 0x193 / 403
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

void Function_4() //Position: 0x30C / 780
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_5(bool bParam0) //Position: 0x318 / 792
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

void Function_6(int iParam0) //Position: 0x35E / 862
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

void Function_7() //Position: 0x3A4 / 932
{
	if (!Function_50(1, 1))
	{
		if (Function_48())
		{
			Function_36(6253, 5641);
		}
		else
		{
			Function_36(3763, 978);
		}
	}
	return;
}

int Function_8(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3D2 / 978
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

void Function_9(bool bParam0, int iParam1) //Position: 0x610 / 1552
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

struct<16> Function_10(var uParam0) //Position: 0x83D / 2109
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

int Function_11(int iParam0) //Position: 0x8AE / 2222
{
	return Function_12(0, iParam0);
}

int Function_12(int iParam0, bool bParam1) //Position: 0x8BA / 2234
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

bool Function_13(bool bParam0) //Position: 0x923 / 2339
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

var Function_14(int iParam0) //Position: 0x9C4 / 2500
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_15(int iParam0, bool bParam1) //Position: 0x9D4 / 2516
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

var Function_16(int iParam0) //Position: 0xA3B / 2619
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0xA4B / 2635
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA5C / 2652
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

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0xAC1 / 2753
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

var Function_20(int iParam0) //Position: 0xB42 / 2882
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

bool Function_21(int iParam0) //Position: 0xE5B / 3675
{
	return Function_22(Global_76905.f_132, iParam0);
}

int Function_22(var uParam0, int iParam1) //Position: 0xE6C / 3692
{
	return (uParam0 && iParam1) == 0;
}

int Function_23(int iParam0) //Position: 0xE79 / 3705
{
	return Function_15(0, iParam0);
}

void Function_24(bool bParam0, int iParam1, char* cParam2) //Position: 0xE85 / 3717
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

bool Function_25() //Position: 0xEA6 / 3750
{
	return Function_21(32768);
}

int Function_26() //Position: 0xEB3 / 3763
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

void Function_27() //Position: 0xF90 / 3984
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

void Function_28(int iParam0, bool bParam1, int iParam2) //Position: 0xFCD / 4045
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

void Function_29(var uParam0, int iParam1) //Position: 0xFF5 / 4085
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1008 / 4104
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_31(bool bParam0) //Position: 0x1017 / 4119
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

void Function_32(bool bParam0) //Position: 0x1098 / 4248
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

struct<64> Function_33(var uParam0) //Position: 0x1121 / 4385
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_34(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1135 / 4405
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

int Function_35(bool bParam0, bool bParam1) //Position: 0x117A / 4474
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

void Function_36(int iParam0, int iParam1) //Position: 0x11AE / 4526
{
	Function_37(iParam0, iParam1, 5634);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x11BF / 4543
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

void Function_38() //Position: 0x1358 / 4952
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

void Function_39(var uParam0, var uParam1, int iParam2) //Position: 0x1461 / 5217
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

void Function_40(bool bParam0) //Position: 0x15D9 / 5593
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_28(16384, 0, 1);
	return;
}

void Function_41() //Position: 0x15F3 / 5619
{
	Function_28(32768, 1, 0);
	return;
}

int Function_42() //Position: 0x1602 / 5634
{
	return 1;
}

int Function_43(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x1609 / 5641
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

void Function_44(bool bParam0, bool bParam1) //Position: 0x17A7 / 6055
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

var Function_45(bool bParam0) //Position: 0x17DA / 6106
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

bool Function_46(bool bParam0) //Position: 0x1857 / 6231
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_13(bParam0);
}

int Function_47() //Position: 0x186D / 6253
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

bool Function_48() //Position: 0x18FE / 6398
{
	return Function_49(4);
}

int Function_49(int iParam0) //Position: 0x1908 / 6408
{
	return Function_22((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_50(int iParam0, bool bParam1) //Position: 0x191B / 6427
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x193B / 6459
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

void Function_52(int iParam0, int iParam1) //Position: 0x196C / 6508
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_6(iParam0);
	Function_5(iVar0);
	PRINTNL();
	Function_3(iParam0, iVar0, iParam1);
	return;
}

void Function_53(int iParam0) //Position: 0x1991 / 6545
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

void Function_54(int iParam0) //Position: 0x1A53 / 6739
{
	Function_55(8, iParam0);
	return;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x1A60 / 6752
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

void Function_56(int iParam0) //Position: 0x1A88 / 6792
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x1A96 / 6806
{
	if (bParam1)
	{
		Function_30(&Global_83591 + 140 + 56, uParam0);
	}
	else
	{
		Function_29(&Global_83591 + 140 + 56, uParam0);
	}
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x1ABE / 6846
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x1ADF / 6879
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_60() //Position: 0x1B00 / 6912
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
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_RIO_layout");
	Local_264.f_80 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "CheckpointStart", 2, -2385.163f, 13.83644f, 3914.443f, 0.0f, 467.904f, 0.0f, 12.02092f, 3.924256f, 25.64039f);
	DECOR_SET_INT((*&Local_264 + 4)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[0]);
	(*&Local_264 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint1", 2, -2408.884f, 13.77401f, 3848.221f, -0.4277582f, -347.8923f, -5.175203f, 50.79892f, 17.63283f, 34.89797f);
	DECOR_SET_INT((*&Local_264 + 4)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[1]);
	(*&Local_264 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint2", 2, -2545.081f, 20.46345f, 3825.59f, 2.180018f, -529.0464f, 1.525945f, 32.31812f, 15.9445f, 53.51468f);
	DECOR_SET_INT((*&Local_264 + 4)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[2]);
	(*&Local_264 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint3", 2, -2696.138f, 28.88305f, 3724.189f, -173.9824f, -417.9667f, -182.2062f, 48.6851f, 6.517538f, 39.12332f);
	DECOR_SET_INT((*&Local_264 + 4)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[3]);
	(*&Local_264 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint4", 2, -2867.982f, 35.38286f, 3757.282f, -32.70278f, -445.1213f, 36.01961f, 68.65327f, 12.53843f, 28.63948f);
	DECOR_SET_INT((*&Local_264 + 4)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[4]);
	(*&Local_264 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint5", 2, -2932.659f, 40.56734f, 3789.156f, 349.9643f, -89.24599f, 13.33872f, 53.75913f, 9.544034f, 25.25382f);
	DECOR_SET_INT((*&Local_264 + 4)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[5]);
	(*&Local_264 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint6", 2, -3027.317f, 45.44495f, 3746.457f, 363.8117f, -108.9639f, -0.5387043f, 61.96484f, 9.544034f, 25.25382f);
	DECOR_SET_INT((*&Local_264 + 4)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[6]);
	(*&Local_264 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint7", 2, -3129.646f, 43.66912f, 3729.945f, 182.4711f, 34.19492f, -177.8309f, 87.75138f, 17.07743f, 21.07419f);
	DECOR_SET_INT((*&Local_264 + 4)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[7]);
	(*&Local_264 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint8", 2, -3153.568f, 42.15525f, 3790.573f, 0.6007082f, 495.749f, 1.407153f, 64.97733f, 15.53979f, 30.17075f);
	DECOR_SET_INT((*&Local_264 + 4)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[8]);
	(*&Local_264 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint9", 2, -3313.552f, 33.16356f, 3825.135f, 179.1735f, 514.7182f, -179.5766f, 28.93064f, 9.571766f, 58.74992f);
	DECOR_SET_INT((*&Local_264 + 4)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[9]);
	(*&Local_264 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint10", 2, -3489.111f, 30.84167f, 3929.116f, 1.920584f, 86.75607f, 3.637116f, 134.3278f, 13.88794f, 34.17194f);
	DECOR_SET_INT((*&Local_264 + 4)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[10]);
	(*&Local_264 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint11", 2, -3614.718f, 30.11165f, 4009.202f, 171.8345f, 256.4669f, -171.0163f, 85.48004f, 9.576327f, 18.04039f);
	DECOR_SET_INT((*&Local_264 + 4)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[11]);
	(*&Local_264 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint12", 2, -3778.62f, 26.03593f, 3922.673f, 538.8246f, -356.7358f, 179.3519f, 49.29032f, 14.6364f, 30.60272f);
	DECOR_SET_INT((*&Local_264 + 4)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[12]);
	(*&Local_264 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint13", 2, -3849.488f, 11.10601f, 3810.934f, 183.1558f, 6.063884f, 537.9474f, 102.8583f, 15.90568f, 33.11271f);
	DECOR_SET_INT((*&Local_264 + 4)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[13]);
	(*&Local_264 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint14", 2, -3796.667f, 7.812202f, 3697.356f, 5.646155f, -220.2161f, 3.682838f, 73.06622f, 6.517538f, 26.95802f);
	DECOR_SET_INT((*&Local_264 + 4)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[14]);
	(*&Local_264 + 4)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint15", 2, -3744.349f, 7.812383f, 3607.682f, 2.252271f, -206.1012f, 4.796613f, 26.72646f, 4.817145f, 19.23094f);
	DECOR_SET_INT((*&Local_264 + 4)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[15]);
	(*&Local_264 + 4)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint16", 2, -3746.878f, 8.639969f, 3540.102f, 62.62235f, -265.1468f, 62.56861f, 21.09437f, 6.517538f, 54.94271f);
	DECOR_SET_INT((*&Local_264 + 4)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[16]);
	(*&Local_264 + 4)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -3716.45f, 7.781364f, 3470.262f, 0.0f, -8.753026f, 0.0f, 139.1612f, 9.544034f, 9.531831f);
	DECOR_SET_INT((*&Local_264 + 4)[17], "pointNum", 17);
	DECOR_SET_BOOL((*&Local_264 + 4)[17], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[17]);
	Local_264.f_84 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	*(&Local_264 + 88[06]) = { -2374.492f, 13.57215f, 3962.59f };
	*(&Local_264 + 88[06] + 12) = { 0.0f, 12.3201f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -2374.492f, 13.57215f, 3962.59f, 0.0f, 12.3201f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_84);
	*(&Local_264 + 88[16]) = { -2371.925f, 13.57215f, 3961.899f };
	*(&Local_264 + 88[16] + 12) = { 0.0f, 12.31994f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -2371.925f, 13.57215f, 3961.899f, 0.0f, 12.31994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_84);
	*(&Local_264 + 88[26]) = { -2374.046f, 13.57959f, 3965.866f };
	*(&Local_264 + 88[26] + 12) = { 0.0f, 12.31994f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -2374.046f, 13.57959f, 3965.866f, 0.0f, 12.31994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_84);
	*(&Local_264 + 88[36]) = { -2371.367f, 13.57959f, 3965.331f };
	*(&Local_264 + 88[36] + 12) = { 0.0f, 12.31994f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -2371.367f, 13.57959f, 3965.331f, 0.0f, 12.31994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_84);
	*(&Local_264 + 88[46]) = { -2373.51f, 13.56483f, 3968.942f };
	*(&Local_264 + 88[46] + 12) = { 0.0f, 12.31994f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -2373.51f, 13.56483f, 3968.942f, 0.0f, 12.31994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_84);
	*(&Local_264 + 88[56]) = { -2370.502f, 13.56483f, 3968.456f };
	*(&Local_264 + 88[56] + 12) = { 0.0f, 12.31994f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -2370.502f, 13.56483f, 3968.456f, 0.0f, 12.31994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_84);
	*(&Local_264 + 88[66]) = { -2372.983f, 13.54249f, 3972.297f };
	*(&Local_264 + 88[66] + 12) = { 0.0f, 12.31994f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -2372.983f, 13.54249f, 3972.297f, 0.0f, 12.31994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_84);
	*(&Local_264 + 88[76]) = { -2369.89f, 13.56483f, 3971.691f };
	*(&Local_264 + 88[76] + 12) = { 0.0f, 12.31994f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -2369.89f, 13.56483f, 3971.691f, 0.0f, 12.31994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_84);
	Local_264.f_284 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit0", -2385.164f, 13.83644f, 3914.443f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar9, "CheckPoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_284);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit1", -2408.638f, 13.77544f, 3848.08f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar10, "CheckPoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_284);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit2", -2545.081f, 20.46345f, 3825.59f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar11, "CheckPoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_284);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit3", -2696.138f, 28.88305f, 3724.189f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar12, "CheckPoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_284);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit4", -2867.962f, 35.38286f, 3757.324f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar13, "CheckPoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_284);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit5", -2932.659f, 40.56734f, 3789.156f, 0.0f, 23.85345f, 0.0f);
	DECOR_SET_INT(bVar14, "CheckPoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_284);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit6", -3027.317f, 45.44495f, 3746.457f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar15, "CheckPoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_284);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit7", -3129.646f, 43.66912f, 3729.945f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar16, "CheckPoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_284);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit8", -3153.568f, 42.15525f, 3790.573f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "CheckPoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_284);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit9", -3313.552f, 33.16356f, 3825.135f, 0.0f, -20.37577f, 0.0f);
	DECOR_SET_INT(bVar18, "CheckPoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_284);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit10", -3489.111f, 30.84167f, 3929.116f, 0.150462f, -2.139648f, 0.2828313f);
	DECOR_SET_INT(bVar19, "CheckPoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_284);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit11", -3614.718f, 30.11165f, 4009.202f, 0.0f, 27.73856f, 0.0f);
	DECOR_SET_INT(bVar20, "CheckPoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_284);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit12", -3778.561f, 26.0367f, 3922.597f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar21, "CheckPoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_284);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit13", -3849.722f, 11.11014f, 3810.854f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar22, "CheckPoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_284);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit14", -3796.667f, 7.812202f, 3697.356f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar23, "CheckPoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_284);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit15", -3744.065f, 7.812383f, 3607.671f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar24, "CheckPoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_284);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit16", -3747.152f, 8.63354f, 3539.867f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar25, "CheckPoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_284);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit17", -3717.225f, 7.781364f, 3473.932f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar26, "CheckPoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_284);
	Local_264.f_288 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00", -2370.669f, 13.48178f, 3959.251f, 0.0f, -339.993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_288);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00a", -2381.268f, 13.56483f, 3941.479f, 0.0f, -344.7203f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_288);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00b", -2379.265f, 13.64177f, 3928.298f, 0.0f, -339.993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_288);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_0", -2381.148f, 13.92508f, 3913.882f, 0.0f, -339.993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_288);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0a", -2387.094f, 13.9259f, 3898.503f, 0.0f, -339.993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_288);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0b", -2393.143f, 13.9372f, 3881.442f, 0.0f, -339.993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_288);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_1", -2399.843f, 13.93863f, 3862.698f, 0.0f, -339.993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_288);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1a", -2407.119f, 13.99639f, 3842.054f, 0.0f, -299.6169f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_288);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1b", -2426.673f, 15.63962f, 3822.326f, 0.0f, -278.5495f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_288);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1c", -2454.54f, 16.86241f, 3816.749f, 0.0f, -267.7275f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_288);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1d", -2483.984f, 17.85215f, 3817.926f, 0.0f, -264.8488f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_288);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1e", -2512.595f, 18.06377f, 3820.651f, 0.0f, -259.4808f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_288);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_2", -2530.449f, 19.24099f, 3828.936f, 0.0f, -274.7959f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_288);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2a", -2551.142f, 21.16692f, 3829.405f, 0.0f, -304.6555f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_288);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2b", -2571.522f, 22.02199f, 3817.854f, 0.0f, -314.8027f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_288);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2c", -2584.968f, 23.67306f, 3798.131f, 0.0f, -303.7852f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_288);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2d", -2605.927f, 26.19192f, 3780.166f, 0.0f, -306.5434f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_288);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2e", -2628.389f, 28.66186f, 3760.453f, 0.0f, -305.4999f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_288);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2f", -2644.583f, 29.86396f, 3744.899f, 0.0f, -297.5564f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_288);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2g", -2669.51f, 29.812f, 3729.617f, 0.0f, -284.2542f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_288);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_3", -2676.98f, 29.56318f, 3727.361f, 0.0f, -285.5511f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_288);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3a", -2701.259f, 28.96182f, 3719.364f, 0.0f, -271.3964f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_288);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3b", -2726.715f, 28.70988f, 3717.389f, 0.0f, -254.1022f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_288);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3c", -2749.206f, 29.81789f, 3721.374f, 0.0f, -254.8371f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_288);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3d", -2773.478f, 30.03152f, 3725.979f, 0.0f, -249.506f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_288);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3e", -2802.076f, 26.76531f, 3736.126f, 0.0f, -236.854f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_288);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3f", -2827.691f, 23.64319f, 3755.542f, 0.0f, -271.3688f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_288);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3g", -2849.049f, 30.10884f, 3747.614f, 0.0f, -249.444f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_288);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_4", -2856.963f, 32.701f, 3748.231f, 0.0f, -240.3667f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_288);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4a", -2875.474f, 36.38827f, 3755.15f, 0.0f, -219.3158f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_288);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4b", -2891.567f, 37.41202f, 3770.7f, 0.0f, -230.2878f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_288);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4c", -2910.533f, 38.89993f, 3790.844f, 0.0f, -271.2871f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_288);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_5", -2921.618f, 39.74678f, 3788.565f, -0.1432262f, -276.5378f, -0.1827954f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_288);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_5a", -2943.244f, 41.38653f, 3788.466f, -0.0394631f, -288.46f, -0.07926661f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_288);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_5b", -2967.656f, 43.28251f, 3782.748f, -0.0008184368f, -305.8574f, -0.04432113f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_288);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_5c", -2985.867f, 44.40997f, 3765.979f, -0.0009415589f, -300.6087f, -0.04446818f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_288);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_5d", -3006.93f, 45.40047f, 3752.475f, -0.03773183f, -289.6187f, -0.07732344f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_288);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_6", -3018.325f, 45.6158f, 3746.244f, -0.07011273f, -288.6166f, -0.103931f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_288);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6a", -3042.86f, 45.84106f, 3736.08f, -0.0710733f, -288.3559f, -0.1049439f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_288);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6b", -3066.294f, 46.18037f, 3727.086f, -0.08301482f, -285.6416f, -0.1174274f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_288);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6c", -3089.733f, 45.6333f, 3718.527f, 0.6910846f, -268.144f, 0.6532352f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_288);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6d", -3119.583f, 44.05206f, 3715.558f, 0.05310918f, -214.8919f, 0.03331213f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_288);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_7", -3131.118f, 43.36292f, 3716.907f, 0.04069477f, -192.1552f, 0.02655737f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_288);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_7a", -3125.829f, 44.08746f, 3738.062f, 0.04374115f, -197.4465f, 0.02595676f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_288);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_7b", -3128.251f, 43.96292f, 3759.141f, 0.05267987f, -214.2392f, 0.03274084f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_288);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_7c", -3137.083f, 43.12098f, 3777.259f, 0.0702103f, -233.0894f, 0.04481335f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_288);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_8", -3142.93f, 42.84226f, 3783.711f, 0.06396946f, -228.7642f, 0.03678028f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_288);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8a", -3160.225f, 41.15477f, 3800.606f, 0.09930731f, -246.414f, 0.07291862f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_288);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8b", -3188.635f, 38.2511f, 3814.794f, 0.9850785f, -268.2539f, 0.9529141f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_288);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8c", -3217.051f, 36.25657f, 3812.03f, 0.4971273f, -266.7838f, 0.4627532f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_288);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8d", -3238.048f, 35.64403f, 3818.304f, 0.7792881f, -267.6295f, 0.7491697f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_288);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8e", -3260.799f, 35.98209f, 3810.761f, 0.1675112f, -258.9065f, 0.1349296f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_288);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8f", -3279.571f, 35.5066f, 3811.521f, 0.1314259f, -254.9155f, 0.09976047f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_288);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_9", -3303.297f, 33.87688f, 3816.175f, 0.07173321f, -234.6727f, 0.04489775f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_288);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9a", -3325.343f, 33.06167f, 3827.306f, 0.07173321f, -234.6727f, 0.04489775f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_288);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9b", -3345.873f, 32.17155f, 3839.404f, 0.06856867f, -232.7759f, 0.04097293f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_288);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9c", -3364.28f, 31.04811f, 3860.568f, 0.09166224f, -241.9827f, 0.0736879f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_288);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9d", -3390.543f, 31.0938f, 3868.693f, 0.07305068f, -233.8844f, 0.05178042f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_288);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9e", -3411.927f, 30.91416f, 3889.973f, 0.09696152f, -244.9495f, 0.07298455f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_288);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9f", -3442.867f, 30.91197f, 3898.845f, 0.07414887f, -236.3798f, 0.04688941f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_288);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9g", -3463.551f, 30.96986f, 3918.583f, 0.08477379f, -245.2092f, 0.05160981f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_288);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10", -3475.491f, 30.98026f, 3916.194f, 0.07448491f, -236.6058f, 0.0471696f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_288);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10a", -3495.996f, 30.81215f, 3936.859f, 0.07407376f, -234.2489f, 0.05435485f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_288);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10b", -3524.443f, 31.05526f, 3947.657f, 0.05626417f, -219.1829f, 0.0375995f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_288);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10c", -3539.667f, 30.8762f, 3972.159f, 0.06606785f, -228.6916f, 0.05167988f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_288);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10d", -3560.882f, 30.86924f, 3984.601f, 0.0717207f, -233.8428f, 0.04715374f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_288);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10e", -3575.899f, 30.99475f, 4003.879f, 0.148578f, -256.4628f, 0.1180555f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_288);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10f", -3595.752f, 31.0931f, 4011.587f, -0.4888003f, -273.5739f, -0.5191207f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_288);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11", -3606.681f, 30.64408f, 4012.945f, -0.05606492f, -285.8954f, -0.09479233f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_288);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11a", -3634.186f, 28.88822f, 4009.552f, -0.05606492f, -285.8954f, -0.09479233f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_288);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11b", -3662.731f, 27.91161f, 3998.187f, -0.01073094f, -292.6549f, -0.0533673f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_288);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11c", -3687.306f, 28.03178f, 3990.662f, -0.007870956f, -301.6775f, -0.05016267f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_288);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11d", -3709.209f, 27.57661f, 3972.268f, -0.0001103472f, -297.9426f, -0.04375789f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_288);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11e", -3733.854f, 27.09212f, 3963.5f, -7.886624E-05f, -310.9676f, -0.04371996f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_288);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11f", -3749.264f, 26.82516f, 3945.055f, -7.829074E-05f, -311.3344f, -0.04371919f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_288);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12", -3769.701f, 26.41665f, 3935.287f, 0.01466611f, -315.0179f, -0.03204287f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_288);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12a", -3783.401f, 25.89223f, 3914.698f, 0.01508071f, -313.4626f, -0.03146421f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_288);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12b", -3808.367f, 24.80114f, 3898.829f, 0.01291907f, -323.4155f, -0.03471027f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_288);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12c", -3823.498f, 21.06192f, 3871.531f, 0.02390666f, -317.1482f, -0.02372923f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_288);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12d", -3844.743f, 17.44625f, 3855.435f, 0.02754364f, -343.7663f, -0.02704008f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_288);
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12e", -3855.909f, 14.42078f, 3833.599f, 0.03948306f, -372.1352f, -0.02870145f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_288);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13", -3855.961f, 12.73734f, 3820.292f, 0.712805f, -383.2238f, -0.1021267f);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_288);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13a", -3846.465f, 9.912693f, 3796.426f, 0.731151f, -391.9877f, -0.1106528f);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_288);
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13b", -3831.548f, 8.90406f, 3777.856f, 0.647099f, -376.5995f, 0.09180863f);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_288);
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13c", -3830.679f, 8.029381f, 3752.432f, 0.6785626f, -383.9513f, 0.001200088f);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_288);
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13d", -3826.837f, 7.026042f, 3729.765f, 0.7509879f, -399.8934f, -0.1223238f);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_264.f_288);
	bVar113 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13e", -3813.801f, 7.358866f, 3711.804f, 0.7768546f, -408.024f, -0.1403242f);
	ADD_OBJECT_TO_OBJECTSET(bVar113, Local_264.f_288);
	bVar114 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14", -3809.092f, 7.681084f, 3702.897f, 0.4891303f, -415.6812f, 0.2165536f);
	ADD_OBJECT_TO_OBJECTSET(bVar114, Local_264.f_288);
	bVar115 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14a", -3787.548f, 8.002274f, 3696.551f, 0.7558534f, -401.5979f, -0.1254998f);
	ADD_OBJECT_TO_OBJECTSET(bVar115, Local_264.f_288);
	bVar116 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14b", -3768.145f, 8.184566f, 3679.199f, 0.660313f, -378.2368f, 0.05373763f);
	ADD_OBJECT_TO_OBJECTSET(bVar116, Local_264.f_288);
	bVar117 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14c", -3770.475f, 7.866816f, 3655.035f, 0.5917696f, -400.9594f, 0.1234697f);
	ADD_OBJECT_TO_OBJECTSET(bVar117, Local_264.f_288);
	bVar118 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14d", -3749.328f, 7.814624f, 3640.105f, 0.5604579f, -378.0626f, 0.2471726f);
	ADD_OBJECT_TO_OBJECTSET(bVar118, Local_264.f_288);
	bVar119 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14e", -3741.38f, 8.03334f, 3623.588f, 0.6746919f, -358.8695f, -0.06464957f);
	ADD_OBJECT_TO_OBJECTSET(bVar119, Local_264.f_288);
	bVar120 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15", -3737.976f, 8.015347f, 3615.998f, 0.644708f, -343.4854f, -0.09788975f);
	ADD_OBJECT_TO_OBJECTSET(bVar120, Local_264.f_288);
	bVar121 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15a", -3748.673f, 8.024132f, 3597.996f, 0.6835476f, -366.6931f, -0.09449555f);
	ADD_OBJECT_TO_OBJECTSET(bVar121, Local_264.f_288);
	bVar122 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15b", -3756.324f, 8.031372f, 3577.022f, 0.6835476f, -366.6931f, -0.09449555f);
	ADD_OBJECT_TO_OBJECTSET(bVar122, Local_264.f_288);
	bVar123 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15c", -3762.634f, 8.775563f, 3554.573f, 0.7804972f, -408.9998f, -0.1430529f);
	ADD_OBJECT_TO_OBJECTSET(bVar123, Local_264.f_288);
	bVar124 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16", -3763.992f, 8.453779f, 3547.433f, 0.8439822f, -421.3034f, -0.1954547f);
	ADD_OBJECT_TO_OBJECTSET(bVar124, Local_264.f_288);
	bVar125 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16a", -3749.78f, 8.594162f, 3538.352f, 0.9476804f, -410.5148f, -0.4183956f);
	ADD_OBJECT_TO_OBJECTSET(bVar125, Local_264.f_288);
	bVar126 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16b", -3733.989f, 8.569489f, 3532.193f, 0.6615576f, -384.3735f, 0.04001639f);
	ADD_OBJECT_TO_OBJECTSET(bVar126, Local_264.f_288);
	bVar127 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16c", -3724.57f, 8.031372f, 3512.845f, 0.7013027f, -377.0421f, -0.09816185f);
	ADD_OBJECT_TO_OBJECTSET(bVar127, Local_264.f_288);
	bVar128 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16d", -3723.512f, 7.83122f, 3489.595f, 0.7068288f, -376.3271f, -0.1672814f);
	ADD_OBJECT_TO_OBJECTSET(bVar128, Local_264.f_288);
	Local_264.f_292 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 296[06]) = { -3715.683f, 7.781372f, 3460.015f };
	*(&Local_264 + 296[06] + 12) = { 0.0f, -87.66403f, 0.0f };
	bVar129 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -3715.683f, 7.781372f, 3460.015f, 0.0f, -87.66403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar129, Local_264.f_292);
	Local_264.f_324 = CREATE_OBJECTSET_IN_LAYOUT("dirMarker_flagsSet", Local_264, 8, 0);
	bVar130 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_1", -3125.188f, 43.60998f, 3716.058f, 0.0f, -102.5855f, 0.0f);
	DECOR_SET_BOOL(bVar130, "dirRight", false);
	DECOR_SET_INT(bVar130, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar130, Local_264.f_324);
}

