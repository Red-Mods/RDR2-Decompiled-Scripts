//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 300
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
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_11 = 0;
	iLocal_67 = 0;
	fLocal_68 = 1.0f;
	if (Function_64())
	{
		Function_63();
	}
	else
	{
		Function_60();
		ENABLE_CHILD_SECTOR("dlc_tal_race01x");
		Local_134.f_500 = 12;
		Function_59(0, 1);
		Function_59(1, 3);
		Function_58(0, TO_FLOAT(18));
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
	DISABLE_CHILD_SECTOR("dlc_tal_race01x");
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xC2 / 194
{
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0, int iParam1, int iParam2) //Position: 0xCE / 206
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

void Function_3(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B4 / 436
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

void Function_4() //Position: 0x32D / 813
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_5(bool bParam0) //Position: 0x339 / 825
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

void Function_6(int iParam0) //Position: 0x37F / 895
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

void Function_7() //Position: 0x3C5 / 965
{
	if (!Function_50(1, 1))
	{
		if (Function_48())
		{
			Function_36(6286, 5674);
		}
		else
		{
			Function_36(3796, 1011);
		}
	}
	return;
}

int Function_8(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3F3 / 1011
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

void Function_9(bool bParam0, int iParam1) //Position: 0x631 / 1585
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

struct<16> Function_10(var uParam0) //Position: 0x85E / 2142
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

int Function_11(int iParam0) //Position: 0x8CF / 2255
{
	return Function_12(0, iParam0);
}

int Function_12(int iParam0, bool bParam1) //Position: 0x8DB / 2267
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

bool Function_13(bool bParam0) //Position: 0x944 / 2372
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

var Function_14(int iParam0) //Position: 0x9E5 / 2533
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_15(int iParam0, bool bParam1) //Position: 0x9F5 / 2549
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

var Function_16(int iParam0) //Position: 0xA5C / 2652
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0xA6C / 2668
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA7D / 2685
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

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0xAE2 / 2786
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

var Function_20(int iParam0) //Position: 0xB63 / 2915
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

bool Function_21(int iParam0) //Position: 0xE7C / 3708
{
	return Function_22(Global_76905.f_132, iParam0);
}

int Function_22(var uParam0, int iParam1) //Position: 0xE8D / 3725
{
	return (uParam0 && iParam1) == 0;
}

int Function_23(int iParam0) //Position: 0xE9A / 3738
{
	return Function_15(0, iParam0);
}

void Function_24(bool bParam0, int iParam1, char* cParam2) //Position: 0xEA6 / 3750
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

bool Function_25() //Position: 0xEC7 / 3783
{
	return Function_21(32768);
}

int Function_26() //Position: 0xED4 / 3796
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

void Function_27() //Position: 0xFB1 / 4017
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

void Function_28(int iParam0, bool bParam1, int iParam2) //Position: 0xFEE / 4078
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

void Function_29(var uParam0, int iParam1) //Position: 0x1016 / 4118
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1029 / 4137
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_31(bool bParam0) //Position: 0x1038 / 4152
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

void Function_32(bool bParam0) //Position: 0x10B9 / 4281
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

struct<64> Function_33(var uParam0) //Position: 0x1142 / 4418
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_34(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1156 / 4438
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

int Function_35(bool bParam0, bool bParam1) //Position: 0x119B / 4507
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

void Function_36(int iParam0, int iParam1) //Position: 0x11CF / 4559
{
	Function_37(iParam0, iParam1, 5667);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x11E0 / 4576
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

void Function_38() //Position: 0x1379 / 4985
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

void Function_39(var uParam0, var uParam1, int iParam2) //Position: 0x1482 / 5250
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

void Function_40(bool bParam0) //Position: 0x15FA / 5626
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_28(16384, 0, 1);
	return;
}

void Function_41() //Position: 0x1614 / 5652
{
	Function_28(32768, 1, 0);
	return;
}

int Function_42() //Position: 0x1623 / 5667
{
	return 1;
}

int Function_43(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x162A / 5674
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

void Function_44(bool bParam0, bool bParam1) //Position: 0x17C8 / 6088
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

var Function_45(bool bParam0) //Position: 0x17FB / 6139
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

bool Function_46(bool bParam0) //Position: 0x1878 / 6264
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_13(bParam0);
}

int Function_47() //Position: 0x188E / 6286
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

bool Function_48() //Position: 0x191F / 6431
{
	return Function_49(4);
}

int Function_49(int iParam0) //Position: 0x1929 / 6441
{
	return Function_22((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_50(int iParam0, bool bParam1) //Position: 0x193C / 6460
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x195C / 6492
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

void Function_52(int iParam0, int iParam1) //Position: 0x198D / 6541
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_6(iParam0);
	Function_5(iVar0);
	PRINTNL();
	Function_3(iParam0, iVar0, iParam1);
	return;
}

void Function_53(int iParam0) //Position: 0x19B2 / 6578
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

void Function_54(int iParam0) //Position: 0x1A74 / 6772
{
	Function_55(8, iParam0);
	return;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x1A81 / 6785
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

void Function_56(int iParam0) //Position: 0x1AA9 / 6825
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x1AB7 / 6839
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

void Function_58(int iParam0, int iParam1) //Position: 0x1ADF / 6879
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x1B00 / 6912
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_60() //Position: 0x1B21 / 6945
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
	
	Function_62(4, 1);
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_TAL_layout");
	Local_264.f_84 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "CheckpointStart", 2, -297.658f, 84.30042f, 2074.02f, -177.785f, 272.7002f, -184.0809f, 46.48634f, 21.34459f, 36.33725f);
	DECOR_SET_INT((*&Local_264 + 4)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[0]);
	(*&Local_264 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint1", 2, -347.0776f, 88.93417f, 2061.798f, 63.13973f, 267.9396f, -63.48177f, 45.60392f, 22.76476f, 36.06103f);
	DECOR_SET_INT((*&Local_264 + 4)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[1]);
	(*&Local_264 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint2", 2, -419.3638f, 99.97334f, 2060.001f, -18.19612f, 85.60666f, -19.42648f, 25.85712f, 26.08455f, 34.7784f);
	DECOR_SET_INT((*&Local_264 + 4)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[2]);
	(*&Local_264 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint3", 2, -490.4015f, 108.2366f, 2043.454f, 0.0f, 81.82578f, 0.0f, 27.60906f, 25.36206f, 29.55965f);
	DECOR_SET_INT((*&Local_264 + 4)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[3]);
	(*&Local_264 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint4", 2, -546.263f, 110.6831f, 2043.057f, 0.0f, 433.2432f, 0.0f, 28.00816f, 21.88898f, 26.58533f);
	DECOR_SET_INT((*&Local_264 + 4)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[4]);
	(*&Local_264 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint5", 2, -595.9711f, 116.1723f, 1985.088f, 0.0f, 233.7999f, 0.0f, 36.82726f, 27.35094f, 33.43335f);
	DECOR_SET_INT((*&Local_264 + 4)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[5]);
	(*&Local_264 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint6", 2, -712.679f, 130.476f, 1980.248f, 0.0f, 85.51253f, 0.0f, 23.38502f, 17.2876f, 27.78978f);
	DECOR_SET_INT((*&Local_264 + 4)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[6]);
	(*&Local_264 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint7", 2, -737.0765f, 134.5398f, 1961.718f, 0.0f, 217.9027f, 0.0f, 29.91498f, 17.2876f, 21.247f);
	DECOR_SET_INT((*&Local_264 + 4)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[7]);
	(*&Local_264 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint8", 2, -767.3501f, 138.8492f, 1869.956f, 0.0f, 379.8739f, 0.0f, 39.27561f, 15.88622f, 39.94426f);
	DECOR_SET_INT((*&Local_264 + 4)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[8]);
	(*&Local_264 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint9", 2, -799.1406f, 142.8658f, 1801.451f, 0.0f, 196.6188f, 0.0f, 23.72411f, 15.05264f, 32.94109f);
	DECOR_SET_INT((*&Local_264 + 4)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[9]);
	(*&Local_264 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint10", 2, -811.9605f, 153.7211f, 1712.449f, 0.0f, 211.1189f, 0.0f, 21.53833f, 15.52732f, 29.02931f);
	DECOR_SET_INT((*&Local_264 + 4)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[10]);
	(*&Local_264 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint11", 2, -902.151f, 176.2363f, 1627.32f, 0.0f, 220.2947f, 0.0f, 16.76514f, 10.98092f, 24.80797f);
	DECOR_SET_INT((*&Local_264 + 4)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[11]);
	(*&Local_264 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint12", 2, -947.7434f, 183.8222f, 1543.256f, 0.0f, 177.9616f, 0.0f, 29.0772f, 14.76124f, 31.61922f);
	DECOR_SET_INT((*&Local_264 + 4)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[12]);
	(*&Local_264 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint13", 2, -933.4803f, 184.8404f, 1486.301f, 0.0f, -13.70899f, 0.0f, 36.04186f, 21.46273f, 25.04301f);
	DECOR_SET_INT((*&Local_264 + 4)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[13]);
	(*&Local_264 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint14", 2, -911.6136f, 184.9775f, 1451.972f, 0.0f, -15.9498f, 0.0f, 33.66998f, 20.26998f, 24.46649f);
	DECOR_SET_INT((*&Local_264 + 4)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[14]);
	(*&Local_264 + 4)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint15", 2, -954.3248f, 184.737f, 1373.39f, 0.0f, -107.118f, 0.0f, 36.53594f, 18.96331f, 24.86693f);
	DECOR_SET_INT((*&Local_264 + 4)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[15]);
	(*&Local_264 + 4)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint16", 2, -1010.436f, 185.7208f, 1364.194f, 0.0f, 86.72497f, 0.0f, 27.45661f, 9.872304f, 21.43421f);
	DECOR_SET_INT((*&Local_264 + 4)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[16]);
	(*&Local_264 + 4)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint17", 2, -1065.79f, 186.6446f, 1368.629f, 0.0f, 121.7592f, 0.0f, 31.53204f, 12.09107f, 23.50184f);
	DECOR_SET_INT((*&Local_264 + 4)[17], "pointNum", 17);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[17]);
	(*&Local_264 + 4)[18] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpointfinish", 2, -1141.491f, 185.7719f, 1415.122f, -347.4529f, 280.4963f, 348.8119f, 38.52295f, 13.09268f, 3.242214f);
	DECOR_SET_INT((*&Local_264 + 4)[18], "pointNum", 18);
	DECOR_SET_BOOL((*&Local_264 + 4)[18], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[18]);
	Local_264.f_88 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -226.2585f, 83.79134f, 2076.982f, 0.0f, 82.87514f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_88);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -226.1346f, 83.79134f, 2080.319f, 0.0f, 439.2224f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_88);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -221.5662f, 83.67339f, 2080.527f, 0.0f, 85.49744f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_88);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -221.7469f, 83.67339f, 2076.991f, 0.0f, 85.49744f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_88);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -217.4719f, 83.57971f, 2080.863f, 0.0f, 85.49744f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_88);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -217.7452f, 83.57971f, 2077.063f, 0.0f, 85.49744f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_88);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -213.2652f, 83.48506f, 2081.106f, 0.0f, 85.49744f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_88);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -213.6535f, 83.48506f, 2077.543f, 0.0f, 85.49744f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_88);
	Local_264.f_92 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit0", -300.3368f, 84.21566f, 2073.037f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar9, "CheckPoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_92);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit1", -347.0533f, 88.91553f, 2062.109f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar10, "CheckPoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_92);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit2", -419.361f, 99.97367f, 2059.966f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar11, "CheckPoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_92);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit3", -491.5656f, 108.6317f, 2042.174f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar12, "CheckPoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_92);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit4", -546.2223f, 110.6831f, 2042.75f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar13, "CheckPoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_92);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit5", -596.0057f, 116.1723f, 1985.141f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar14, "CheckPoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_92);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit6", -712.689f, 130.476f, 1980.323f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar15, "CheckPoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_92);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit7", -736.9963f, 134.5398f, 1961.687f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar16, "CheckPoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_92);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit8", -767.3501f, 138.8492f, 1869.956f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "CheckPoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_92);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit9", -799.2639f, 142.8658f, 1801.484f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar18, "CheckPoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_92);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit10", -816.7118f, 154.6054f, 1706.054f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar19, "CheckPoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_92);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit11", -902.3376f, 176.2517f, 1627.006f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar20, "CheckPoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_92);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit12", -947.7449f, 183.8224f, 1543.256f, 0.1026198f, -2.486804f, -0.3968248f);
	DECOR_SET_INT(bVar21, "CheckPoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_92);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit13", -933.4403f, 184.8423f, 1486.315f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar22, "CheckPoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_92);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit14", -911.6136f, 184.9775f, 1451.972f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar23, "CheckPoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_92);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit15", -954.3076f, 184.737f, 1373.299f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar24, "CheckPoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_92);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit16", -1010.427f, 185.7208f, 1364.048f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar25, "CheckPoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_92);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit17", -1065.79f, 186.6446f, 1368.629f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar26, "CheckPoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_92);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit18", -1140.898f, 185.3679f, 1415.332f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar27, "CheckPoint", 18);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_92);
	Local_264.f_96 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00", -233.2896f, 83.9354f, 2075.807f, 0.0f, 446.8556f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_96);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00a", -254.792f, 84.19195f, 2076.203f, 0.0f, 93.21194f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_96);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00b", -283.4015f, 84.41383f, 2071.648f, 0.0f, 449.3836f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_96);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00c", -301.0785f, 84.2927f, 2075.953f, -183.5239f, -244.3896f, -178.1309f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_96);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00e", -315.9999f, 84.36049f, 2063.305f, 0.0f, -271.4019f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_96);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00f", -330.8011f, 86.21748f, 2062.154f, 0.0f, -269.9326f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_96);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_01", -339.4041f, 87.24713f, 2066.391f, 0.0f, -283.7329f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_96);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_01a", -355.1024f, 90.07714f, 2063.767f, 0.0f, 81.76178f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_96);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_01b", -371.154f, 92.62778f, 2062.531f, 0.0f, 82.60057f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_96);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_01d", -398.9848f, 97.45078f, 2061.96f, -181.4683f, -266.36f, -176.1946f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_96);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02", -407.1003f, 98.40092f, 2062.333f, 0.0f, 83.26544f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_96);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02a", -423.4788f, 100.3693f, 2061.747f, 0.0f, 72.31947f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_96);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02b", -435.5302f, 103.1109f, 2059.108f, 0.0f, 67.84943f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_96);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02d", -459.8553f, 106.3104f, 2044.948f, -218.6969f, -264.8932f, -214.3869f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_96);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_02e", -474.2252f, 106.9615f, 2043.011f, -305.1216f, -266.6495f, -300.6625f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_96);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_03", -486.984f, 107.2019f, 2046.199f, 0.0f, -300.5053f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_96);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_03b", -503.4269f, 111.4137f, 2033.44f, 0.0f, -276.5722f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_96);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_03c", -518.4019f, 112.2817f, 2038.626f, 0.0f, -273.4114f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_96);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_03d", -530.0643f, 112.0377f, 2042.085f, 0.0f, -91.90909f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_96);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_04", -539.1377f, 111.5944f, 2044.011f, 0.0f, -280.4327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_96);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_04b", -559.8281f, 109.6258f, 2040.176f, 0.0f, 42.00918f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_96);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_04d", -574.9832f, 111.9564f, 2027.341f, 0.0f, 28.7266f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_96);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_04f", -583.9839f, 114.6501f, 2012.806f, 0.0f, -0.6193656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_96);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_04g", -587.3331f, 115.0671f, 2001.77f, 0.0f, 7.063746f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_96);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_05", -590.5948f, 115.4187f, 1995.245f, 0.0f, 5.515049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_96);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_05b", -603.421f, 116.35f, 1979.985f, 0.0f, -267.2798f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_96);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_05d", -627.1348f, 117.8312f, 1973.945f, 0.0f, -270.6799f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_96);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_05f", -648.4478f, 121.0873f, 1969.68f, 0.0f, -263.8099f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_96);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_05h", -667.8888f, 122.9281f, 1970.637f, 0.0f, -257.5376f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_96);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_05j", -689.1428f, 126.2296f, 1975.159f, 0.0f, -246.2925f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_96);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_05k", -699.6429f, 128.8161f, 1982.624f, 0.0f, 81.99345f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_96);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_06", -706.0488f, 129.6324f, 1983.276f, 0.0f, -283.5483f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_96);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_06c", -723.6857f, 132.1027f, 1972.821f, 0.0f, 51.47913f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_96);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_06d", -732.7927f, 133.3635f, 1969.546f, 0.0f, 35.05594f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_96);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_07", -735.8705f, 134.2071f, 1966.965f, 0.0f, 16.07517f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_96);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_07c", -735.7683f, 137.5423f, 1947.436f, 0.0f, 8.338409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_96);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_07e", -744.6047f, 139.8888f, 1931.845f, 0.0f, 27.1626f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_96);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_07g", -751.3068f, 141.1274f, 1916.895f, 0.0f, 20.39008f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_96);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_07i", -757.1701f, 141.4843f, 1901.438f, 0.0f, 4.48552f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_96);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_07l", -763.7155f, 139.2066f, 1882.183f, 0.0f, 8.315586f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_96);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_08", -764.496f, 139.0418f, 1874.185f, 0.0f, 29.76443f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_96);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_08b", -770.9614f, 139.4407f, 1858.941f, 0.0f, 26.71779f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_96);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_08d", -777.2951f, 140.8152f, 1839.276f, 0.0f, 42.26656f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_96);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_08f", -785.5564f, 143.1732f, 1825.635f, 0.0f, 37.96294f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_96);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_08h", -792.8047f, 143.2927f, 1811.86f, 0.0f, 26.3205f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_96);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_08i", -798.6392f, 142.5585f, 1807.952f, 0.0f, 0.5921029f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_96);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_09b", -802.4543f, 143.6291f, 1789.481f, 0.0f, 3.773674f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_96);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_09d", -801.4281f, 146.1386f, 1773.482f, 0.0f, -0.5735594f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_96);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_09f", -800.3876f, 148.8204f, 1757.89f, 0.0f, 8.325476f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_96);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_09h", -799.6522f, 151.2688f, 1739.875f, 0.0f, 25.22662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_96);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_09j", -803.4911f, 152.7186f, 1724.374f, 0.0f, 34.38511f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_96);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10", -805.4374f, 153.487f, 1719.448f, 0.0f, 34.76146f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_96);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10b", -815.5773f, 154.8508f, 1704.632f, 0.0f, 29.21081f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_96);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10d", -823.515f, 156.5284f, 1692.277f, 0.0f, 43.42359f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_96);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10g", -839.5126f, 160.7836f, 1675.533f, 0.0f, -310.1246f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_96);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10j", -857.1165f, 163.0592f, 1660.55f, 0.0f, -305.9637f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_96);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10l", -872.0676f, 166.9573f, 1647.397f, 0.0f, -311.7586f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_96);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10n", -885.8551f, 171.9192f, 1637.02f, 0.0f, -291.7345f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_96);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11", -899.4893f, 175.3504f, 1631.494f, 0.0f, 48.20404f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_96);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11c", -909.2272f, 179.3876f, 1613.048f, 0.0f, 31.89526f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_96);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11e", -914.2972f, 180.6666f, 1597.088f, 0.0f, 21.47445f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_96);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11g", -924.249f, 182.0469f, 1580.865f, 0.0f, 48.14349f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_96);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11i", -936.5283f, 181.9968f, 1571.844f, 0.0f, -325.6127f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_96);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11k", -943.6315f, 182.8846f, 1556.588f, 0.0f, 31.43227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_96);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12", -944.4849f, 183.3763f, 1551.607f, 0.0f, 26.00004f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_96);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12a1", -949.8657f, 183.9842f, 1540.789f, 0.0f, -9.327641f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_96);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12a3", -948.1812f, 183.7335f, 1526.553f, 0.0f, -48.12662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_96);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12a5", -936.1988f, 184.9686f, 1517.455f, 0.0f, -8.675414f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_96);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12a7", -931.64f, 185.7559f, 1498.678f, 0.0f, 7.342546f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_96);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13", -935.2015f, 185.5718f, 1493.039f, 0.0f, 3.261898f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_96);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13b", -926.8274f, 185.2631f, 1476.043f, 0.0f, -26.28663f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_96);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13d", -911.99f, 185.2302f, 1463.004f, 0.0f, -0.1078977f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_96);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14", -909.0128f, 185.055f, 1453.177f, 0.0f, 32.34139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_96);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14a1", -914.225f, 183.3359f, 1430.392f, 0.0f, 20.52878f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_96);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14a3", -920.9269f, 183.0192f, 1406.753f, 0.0f, 28.31328f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_96);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14a5", -932.5502f, 183.5549f, 1385.075f, 0.0f, 50.20588f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_96);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14a6", -940.2457f, 184.6171f, 1374.913f, 0.0f, -289.1629f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_96);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15", -949.0645f, 184.5515f, 1375.742f, 0.0f, 61.18731f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_96);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15b", -967.4949f, 185.3798f, 1366.299f, 0.0f, -271.6981f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_96);
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15d", -983.927f, 185.6094f, 1367.105f, 0.0f, -277.1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_96);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15f", -1000.549f, 185.6878f, 1368.374f, 0.0f, 80.33408f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_96);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16", -1005.164f, 185.9123f, 1363.163f, -32.04474f, -266.0849f, -50.3785f);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_96);
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16a1", -1026.383f, 185.1742f, 1361.74f, 14.31413f, -262.7204f, 13.73228f);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_96);
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16a2", -1036.028f, 184.1212f, 1367.004f, 0.0f, -309.322f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_96);
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16a3", -1042.781f, 184.6097f, 1357.919f, 0.0f, -297.834f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_264.f_96);
	bVar113 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16a4", -1053.424f, 186.9697f, 1352.197f, 0.0f, -258.2038f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar113, Local_264.f_96);
	bVar114 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17", -1066.627f, 185.8392f, 1373.418f, 0.0f, -248.8287f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar114, Local_264.f_96);
	bVar115 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17b", -1079.575f, 184.6892f, 1384.68f, 0.0f, -240.4109f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar115, Local_264.f_96);
	bVar116 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17d", -1091.636f, 184.2031f, 1400.091f, 0.0f, 97.69933f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar116, Local_264.f_96);
	bVar117 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17f", -1113.692f, 183.9716f, 1400.362f, 0.0f, -221.4469f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar117, Local_264.f_96);
	bVar118 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17h", -1129.669f, 184.5403f, 1416.524f, 0.0f, 86.21419f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar118, Local_264.f_96);
	Local_264.f_100 = CREATE_OBJECTSET_IN_LAYOUT("mp_Dir_MarkersSet", Local_264, 8, 0);
	bVar119 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_1", -715.847f, 130.5755f, 1983.004f, 0.0f, -448.9828f, 0.0f);
	DECOR_SET_BOOL(bVar119, "dirRight", true);
	DECOR_SET_INT(bVar119, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar119, Local_264.f_100);
	bVar120 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_2", -948.8581f, 183.2334f, 1549.771f, 0.0f, -490.075f, 0.0f);
	DECOR_SET_BOOL(bVar120, "dirRight", true);
	DECOR_SET_INT(bVar120, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar120, Local_264.f_100);
	bVar121 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_3", -907.5057f, 184.55f, 1456.491f, 0.0f, -603.9932f, 0.0f);
	DECOR_SET_BOOL(bVar121, "dirRight", false);
	DECOR_SET_INT(bVar121, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar121, Local_264.f_100);
	bVar122 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_4", -1065.506f, 187.8764f, 1358.491f, 0.0f, -464.1641f, 0.0f);
	DECOR_SET_BOOL(bVar122, "dirRight", false);
	DECOR_SET_INT(bVar122, "nmarkerOri", true);
	ADD_OBJECT_TO_OBJECTSET(bVar122, Local_264.f_100);
	bVar123 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_5", -935.3109f, 184.1392f, 1379.652f, 0.0f, -541.5321f, 0.0f);
	DECOR_SET_BOOL(bVar123, "dirRight", false);
	DECOR_SET_INT(bVar123, "nmarkerOri", true);
	ADD_OBJECT_TO_OBJECTSET(bVar123, Local_264.f_100);
	bVar124 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_6", -950.0302f, 183.2591f, 1528.625f, 0.0f, -508.9995f, 0.0f);
	DECOR_SET_BOOL(bVar124, "dirRight", true);
	DECOR_SET_INT(bVar124, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar124, Local_264.f_100);
	bVar125 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_7", -805.7309f, 153.7736f, 1717.64f, 0.0f, -541.5321f, 0.0f);
	DECOR_SET_BOOL(bVar125, "dirRight", false);
	DECOR_SET_INT(bVar125, "nmarkerOri", true);
	ADD_OBJECT_TO_OBJECTSET(bVar125, Local_264.f_100);
	Local_264.f_104 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 108[06]) = { -1165.788f, 186.2555f, 1421.209f };
	*(&Local_264 + 108[06] + 12) = { -9.379728f, -78.46622f, 9.334921f };
	bVar126 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -1165.788f, 186.2555f, 1421.209f, -9.379728f, -78.46622f, 9.334921f);
	ADD_OBJECT_TO_OBJECTSET(bVar126, Local_264.f_104);
}

var Bç(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195) //Position: 0x43C7 / 17351
{
	Unknown_Function();
	*(&Global_4520154 - 6056) =  };
	StackVal->f_63522 = StackVal;
	PatchTrap4();
	return StackVal == StackVal;
	(StackVal - 6114)->f_63472 = StackVal;
	PatchTrap5();
	(StackVal <= StackVal - 6229)->f_63415 = StackVal;
	0.0f->f_63333 = (66 % 233);
	PatchTrapA();
	Unknown_Function();
	Unknown_Function();
	PatchTrap7();
	PatchTrapA();
	(7.0f - 4551)->f_63178 = Vector(StackVal, StackVal, StackVal) / Vector(5, Vector(StackVal, StackVal, StackVal) + Vector(StackVal, StackVal, StackVal), StackVal) & 2;
	Unknown_Function();
	PatchTrap7();
	""->f_63140 = 184 - 2941;
	Unknown_Function();
	strcpy(138, 2.0f, 73);
	(Vector(StackVal, StackVal, StackVal) / Vector(6, FloatToInt(StackVal), StackVal) - 3715)->f_63263 = StackVal;
}

void Function_62(int iParam0, int iParam1) //Position: 0x49E5 / 18917
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

void Function_63() //Position: 0x4A2E / 18990
{
	while (!IS_EXITFLAG_SET())
	{
		if (Function_48())
		{
			Function_36(6286, 5674);
		}
		else
		{
			Function_36(3796, 1011);
		}
		WAIT(false);
	}
	return;
}

bool Function_64() //Position: 0x4A5D / 19037
{
	return Function_65(2);
}

int Function_65(var uParam0) //Position: 0x4A67 / 19047
{
	return Function_22(StackVal, uParam0);
}

