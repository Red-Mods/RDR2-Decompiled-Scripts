//Decompiled with MagicRDR v1.0
//Function Count : 61
//Statics Count : 306
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
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
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
		ENABLE_CHILD_SECTOR("dlc_swg_race01x");
		Local_134.f_500 = 11;
		Function_59(0, 1);
		Function_59(1, 2);
		Function_58(0, TO_FLOAT(17));
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
		if (Function_60() != 4294967295)
		{
			Function_2(1, 0, 0);
		}
	}
	DISABLE_CHILD_SECTOR("dlc_swg_race01x");
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

void Function_57(var uParam0, bool bParam1) //Position: 0x1AB7 / 6839
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

var Function_60() //Position: 0x1B21 / 6945
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
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_SWG_layout");
	Local_264.f_80 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "CheckpointStart", 2, -3524.848f, 9.848831f, 4261.833f, 0.0f, 474.5237f, 0.0f, 49.17628f, 12.0306f, 56.52724f);
	DECOR_SET_INT((*&Local_264 + 4)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[0]);
	(*&Local_264 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint1", 2, -3628.144f, 13.58185f, 4245.345f, -74.36915f, -275.2991f, -74.29488f, 70.30602f, 17.63283f, 56.96082f);
	DECOR_SET_INT((*&Local_264 + 4)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[1]);
	(*&Local_264 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint2", 2, -3717.068f, 12.57995f, 4364.825f, 2.180018f, -529.0464f, 1.525945f, 77.57299f, 15.9445f, 42.69967f);
	DECOR_SET_INT((*&Local_264 + 4)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[2]);
	(*&Local_264 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint3", 2, -3687.361f, 5.038554f, 4420.238f, -175.5146f, -376.1278f, -181.2179f, 66.43613f, 6.517538f, 39.0105f);
	DECOR_SET_INT((*&Local_264 + 4)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[3]);
	(*&Local_264 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint4", 2, -3649.726f, 5.03147f, 4481.747f, -174.1985f, -401.9927f, 176.1416f, 62.89497f, 12.53843f, 51.56719f);
	DECOR_SET_INT((*&Local_264 + 4)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[4]);
	(*&Local_264 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint5", 2, -3542.824f, 9.879766f, 4532.776f, 363.4009f, -150.3403f, -0.2001767f, 67.40675f, 9.544034f, 48.66398f);
	DECOR_SET_INT((*&Local_264 + 4)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[5]);
	(*&Local_264 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint6", 2, -3540.945f, 13.01452f, 4581.479f, 181.4216f, 5.411509f, -178.198f, 60.62228f, 17.07743f, 37.12366f);
	DECOR_SET_INT((*&Local_264 + 4)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[6]);
	(*&Local_264 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint7", 2, -3577.004f, 10.29811f, 4619.325f, 0.6007082f, 495.749f, 1.407153f, 63.55999f, 15.53979f, 38.90125f);
	DECOR_SET_INT((*&Local_264 + 4)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[7]);
	(*&Local_264 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint8", 2, -3649.4f, 7.493556f, 4582.33f, 179.3844f, 494.3431f, -179.4523f, 75.18979f, 9.571766f, 55.14971f);
	DECOR_SET_INT((*&Local_264 + 4)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[8]);
	(*&Local_264 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint9", 2, -3770.938f, 8.387156f, 4551.471f, 1.920584f, 86.75607f, 3.637116f, 59.29125f, 13.88794f, 55.06906f);
	DECOR_SET_INT((*&Local_264 + 4)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[9]);
	(*&Local_264 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint10", 2, -3783.477f, 8.204778f, 4581.084f, 1.840273f, 211.174f, -2.447749f, 46.76694f, 9.576327f, 30.11728f);
	DECOR_SET_INT((*&Local_264 + 4)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[10]);
	(*&Local_264 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint11", 2, -3776.274f, 11.32871f, 4646.271f, 538.8246f, -356.7358f, 179.3519f, 56.48823f, 14.6364f, 41.12692f);
	DECOR_SET_INT((*&Local_264 + 4)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[11]);
	(*&Local_264 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint12", 2, -3841.9f, 13.19361f, 4724.211f, 185.2432f, 53.19831f, 541.8162f, 119.2927f, 15.90568f, 49.52748f);
	DECOR_SET_INT((*&Local_264 + 4)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[12]);
	(*&Local_264 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint13", 2, -3899.799f, 6.95158f, 4716.48f, 62.62235f, -265.1468f, 62.56861f, 94.06906f, 6.517538f, 43.027f);
	DECOR_SET_INT((*&Local_264 + 4)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[13]);
	(*&Local_264 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint14", 2, -4000.826f, 15.04878f, 4714.155f, 12.88201f, -250.307f, 12.18199f, 78.86112f, 6.517538f, 57.28894f);
	DECOR_SET_INT((*&Local_264 + 4)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[14]);
	(*&Local_264 + 4)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint15", 2, -4099.589f, 23.00827f, 4698.449f, 170.7117f, -242.2593f, 171.7941f, 135.9703f, 15.1444f, 49.65133f);
	DECOR_SET_INT((*&Local_264 + 4)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[15]);
	(*&Local_264 + 4)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint16", 2, -4310.974f, 18.82452f, 4611.788f, 357.3253f, 418.0436f, -360.6019f, 133.4307f, 17.07743f, 73.82969f);
	DECOR_SET_INT((*&Local_264 + 4)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[16]);
	(*&Local_264 + 4)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -4342.002f, 18.64635f, 4534.242f, 356.6429f, 28.3196f, -0.1097212f, 139.1612f, 9.544034f, 9.531831f);
	DECOR_SET_INT((*&Local_264 + 4)[17], "pointNum", 17);
	DECOR_SET_BOOL((*&Local_264 + 4)[17], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[17]);
	*(&Local_264 + 84) = { -2696.675f, 31.6046f, 4243.614f };
	*(&Local_264 + 84 + 12) = { 0.0f, -71.01899f, 0.0f };
	Local_264.f_108 = CREATE_POINT_IN_LAYOUT(Local_264, "f_RaceStarter", -2696.675f, 31.6046f, 4243.614f, 0.0f, -71.01899f, 0.0f);
	DECOR_SET_INT(Local_264.f_108, "CheckPoint", false);
	Local_264.f_112 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -3438.129f, 5.998523f, 4196.012f, 0.0f, 136.5895f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_112);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -3436.124f, 5.970291f, 4197.982f, 0.0f, 130.3947f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_112);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -3434.245f, 5.988797f, 4199.824f, 0.0f, 130.7801f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_112);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -3433.075f, 5.935928f, 4201.178f, 0.0f, 130.6158f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_112);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -3433.842f, 6.204681f, 4192.499f, 0.0f, 134.309f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_112);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -3431.955f, 6.204681f, 4194.46f, 0.0f, 133.9566f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_112);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -3430.071f, 6.204681f, 4196.486f, 0.0f, 129.3824f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_112);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -3428.362f, 6.204681f, 4198.18f, 0.0f, 129.4667f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_112);
	Local_264.f_116 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit0", -3524.299f, 5.79387f, 4261.503f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar9, "CheckPoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_116);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit1", -3623.944f, 7.568076f, 4245.729f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar10, "CheckPoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_116);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit2", -3717.975f, 6.828262f, 4366.659f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar11, "CheckPoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_116);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit3", -3687.036f, 5.026695f, 4420.683f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar12, "CheckPoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_116);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit4", -3649.811f, 5.062912f, 4481.847f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar13, "CheckPoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_116);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit5", -3543.147f, 5.803216f, 4533.214f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar14, "CheckPoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_116);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit6", -3540.616f, 5.501055f, 4582.128f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar15, "CheckPoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_116);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit7", -3577.124f, 5.892365f, 4618.988f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar16, "CheckPoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_116);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit8", -3649.225f, 5.828677f, 4582.168f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "CheckPoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_116);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit9", -3770.788f, 5.773548f, 4551.7f, 0.150462f, -2.139648f, 0.2828313f);
	DECOR_SET_INT(bVar18, "CheckPoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_116);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit10", -3783.269f, 5.773548f, 4581.34f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar19, "CheckPoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_116);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit11", -3776.87f, 5.774692f, 4646.514f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar20, "CheckPoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_116);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit12", -3841.984f, 5.905942f, 4724.093f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar21, "CheckPoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_116);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit13", -3899.223f, 6.687768f, 4716.866f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar22, "CheckPoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_116);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit14", -4000.649f, 15.04803f, 4714.218f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar23, "CheckPoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_116);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit15", -4098.749f, 23.10565f, 4697.465f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar24, "CheckPoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_116);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit16", -4310.896f, 18.82452f, 4611.885f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar25, "CheckPoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_116);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit17", -4340.824f, 18.76787f, 4537.32f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar26, "CheckPoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_116);
	Local_264.f_120 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a", -3436.078f, 6.249435f, 4205.979f, 0.0f, -227.1721f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_120);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000b", -3459.594f, 6.023805f, 4217.018f, 0.0f, -223.0366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_120);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000c", -3473.237f, 6.023549f, 4242.217f, 0.0f, -226.3028f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_120);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000d", -3495.258f, 5.773544f, 4248.312f, 0.0f, -237.9442f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_120);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00a", -3510.161f, 5.937661f, 4262.664f, 0.0f, -263.5166f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_120);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00b", -3546.823f, 6.776934f, 4255.692f, 0.0f, -283.9632f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_120);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00c", -3566.536f, 6.790037f, 4249.078f, 0.0f, -276.2719f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_120);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00d", -3586.596f, 6.82683f, 4243.164f, 0.0f, -276.2719f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_120);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001", -3612.124f, 7.731608f, 4241.933f, 0.0f, -258.2585f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_120);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001a", -3645.861f, 7.853119f, 4248.646f, 0.0f, -238.1049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_120);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001b", -3660.617f, 7.142377f, 4266.342f, 0.0f, -238.1049f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_120);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001c", -3686.53f, 7.50669f, 4273.857f, 0.0f, -226.8044f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_120);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001d", -3707.266f, 8.031384f, 4290.931f, 0.0f, -199.2965f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_120);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001e", -3726.905f, 7.938693f, 4309.155f, 0.0f, -168.6816f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_120);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001f", -3742.205f, 7.943688f, 4333.854f, 0.0f, -142.6356f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_120);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002", -3727.339f, 7.186666f, 4363.472f, 0.0f, -125.4242f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_120);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a", -3699.468f, 6.860032f, 4384.201f, 0.0f, -157.2915f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_120);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003", -3694.288f, 5.955015f, 4402.086f, 0.0f, -163.7538f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_120);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a", -3679.625f, 5.134208f, 4440.111f, 0.0f, -162.3806f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_120);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003b", -3677.435f, 5.375701f, 4456.602f, 0.0f, -144.1787f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_120);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004", -3658.245f, 5.371276f, 4472.434f, 0.0f, -130.6546f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_120);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004a", -3632.421f, 5.200185f, 4493.671f, 0.0f, -109.8002f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_120);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004b", -3613.282f, 5.53126f, 4500.046f, 0.0f, -103.0673f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_120);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004c", -3592.156f, 5.172739f, 4501.025f, 0.0f, -103.0673f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_120);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004d", -3568.253f, 5.503558f, 4508.209f, 0.0f, -138.7343f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_120);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_005", -3544.96f, 6.139417f, 4521.398f, 0.0f, -154.9747f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_120);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_005a", -3537.903f, 5.58546f, 4556.001f, 0.0f, -172.0179f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_120);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_006", -3531.811f, 5.122849f, 4572.387f, 0.0f, -206.3951f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_120);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_006a", -3554.158f, 5.634678f, 4600.215f, 0.0f, -216.0701f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_120);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007", -3562.929f, 5.724691f, 4618.296f, 0.0f, -267.9268f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_120);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007a", -3597.685f, 5.794648f, 4621.497f, 0.0f, -306.0268f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_120);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007b", -3619.975f, 5.8291f, 4602.007f, 0.0f, -306.0032f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_120);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008", -3641.573f, 5.788366f, 4591.716f, 0.0f, -310.8697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_120);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a", -3665.135f, 5.779921f, 4569.725f, 0.0f, -289.3212f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_120);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008b", -3686.075f, 5.773544f, 4567.563f, 0.0f, -294.2906f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_120);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008c", -3702.983f, 5.773544f, 4553.68f, 0.0f, -282.5232f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_120);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008d", -3731.718f, 5.773549f, 4552.197f, 0.0f, -269.8788f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_120);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009", -3755.319f, 5.773549f, 4545.243f, 0.0f, -231.9058f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_120);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a", -3787.802f, 5.826349f, 4560.688f, 0.0f, -167.2969f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_120);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0010", -3788.604f, 5.779048f, 4573.311f, 0.0f, -167.1095f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_120);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0010a", -3772.578f, 5.850704f, 4598.617f, 0.0f, -180.4485f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_120);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0010b", -3764.131f, 5.797346f, 4622.756f, 0.0f, -216.0325f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_120);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0011", -3767.222f, 5.77354f, 4639.642f, 0.0f, -222.9969f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_120);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0011a", -3798.523f, 5.967168f, 4657.524f, 0.0f, -206.8709f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_120);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0011b", -3802.862f, 5.824158f, 4678.823f, 0.0f, -211.8603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_120);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0011c", -3811.552f, 5.942121f, 4703.146f, 0.0f, -239.406f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_120);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0012", -3825.029f, 5.785561f, 4721.204f, 0.0f, -266.639f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_120);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0012a", -3858.447f, 5.799788f, 4716.57f, 0.0f, -281.2798f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_120);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0012b", -3875.719f, 6.455394f, 4719.845f, 0.0f, -275.7039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_120);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0013", -3887.442f, 6.724653f, 4713.99f, 0.0f, -262.2776f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_120);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0013a", -3917.246f, 7.719018f, 4723.632f, 0.0f, -283.0097f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_120);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0013b", -3939.351f, 9.646976f, 4725.411f, 0.0f, -311.9409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_120);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0013c", -3955.69f, 12.85553f, 4696.31f, 0.0f, -275.3679f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_120);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0013d", -3970.697f, 15.19453f, 4692.171f, 0.0f, -241.3988f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_120);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0014", -3986.623f, 15.731f, 4705.826f, 0.0f, -239.2f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_120);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0014a", -4018.434f, 15.67676f, 4726.811f, 0.0f, -284.2648f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_120);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0014b", -4037.878f, 17.8608f, 4717.89f, 0.0f, -294.3259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_120);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0014c", -4062.077f, 19.87434f, 4704.754f, 0.0f, -286.3575f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_120);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015", -4083.797f, 23.61197f, 4691.099f, 0.0f, -253.5775f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_120);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015a", -4120.818f, 21.83629f, 4702.071f, 0.0f, -288.3514f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_120);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015b", -4139.706f, 21.50171f, 4691.572f, 0.0f, -278.3518f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_120);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015c", -4159.832f, 20.43137f, 4696.74f, 0.0f, -287.5182f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_120);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015d", -4183.016f, 19.96661f, 4685.326f, 0.0f, -280.5906f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_120);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015e", -4208.046f, 19.88597f, 4685.733f, 0.0f, -301.0724f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_120);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015f", -4226.345f, 19.81455f, 4670.508f, 0.0f, -295.436f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_120);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015g", -4253.695f, 19.01695f, 4662.628f, 0.0f, -311.3917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_120);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0015h", -4273.965f, 18.82452f, 4635.023f, 0.0f, -298.4059f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_120);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0016", -4298.384f, 18.92985f, 4628.235f, 0.0f, -312.3102f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_120);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0016a", -4317.172f, 18.88509f, 4590.948f, 0.0f, 22.36609f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_120);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0016b", -4327.655f, 19.107f, 4573.003f, 0.0f, -338.3342f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_120);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0016c", -4337.51f, 18.6724f, 4555.588f, 0.0f, -340.0892f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_120);
	Local_264.f_124 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 128[06]) = { -4348.081f, 18.87192f, 4521.958f };
	*(&Local_264 + 128[06] + 12) = { 0.0f, -87.66403f, 0.0f };
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -4348.081f, 18.87192f, 4521.958f, 0.0f, -87.66403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_124);
	Local_264.f_156 = CREATE_OBJECTSET_IN_LAYOUT("dirMarker_flagsSet", Local_264, 8, 0);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_3", -3743.703f, 7.339391f, 4341.065f, 0.0f, -42.4627f, 0.0f);
	DECOR_SET_BOOL(bVar99, "dirRight", false);
	DECOR_SET_INT(bVar99, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_156);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_4", -3733.0f, 6.687811f, 4365.889f, 0.0f, -33.26314f, 0.0f);
	DECOR_SET_BOOL(bVar100, "dirRight", false);
	DECOR_SET_INT(bVar100, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_156);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_5", -3720f, 6.374363f, 4374.709f, 0.0f, 334.8549f, 0.0f);
	DECOR_SET_BOOL(bVar101, "dirRight", false);
	DECOR_SET_INT(bVar101, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_156);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_9", -3544.239f, 6.116533f, 4518.417f, 0.0f, 104.7042f, 0.0f);
	DECOR_SET_BOOL(bVar102, "dirRight", true);
	DECOR_SET_INT(bVar102, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_156);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_10", -3565.277f, 5.38477f, 4621.057f, 0.0f, -3.126185f, 0.0f);
	DECOR_SET_BOOL(bVar103, "dirRight", true);
	DECOR_SET_INT(bVar103, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_156);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_11", -3780.988f, 5.466139f, 4546.334f, 0.0f, 268.2361f, 0.0f);
	DECOR_SET_BOOL(bVar104, "dirRight", false);
	DECOR_SET_INT(bVar104, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_156);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_19", -3792.296f, 5.496922f, 4564.476f, 0.0f, 287.5613f, 0.0f);
	DECOR_SET_BOOL(bVar105, "dirRight", false);
	DECOR_SET_INT(bVar105, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_156);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_13", -3766.32f, 5.41946f, 4642.474f, 0.0f, 35.34859f, 0.0f);
	DECOR_SET_BOOL(bVar106, "dirRight", true);
	DECOR_SET_INT(bVar106, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_156);
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_14", -3824.32f, 5.60619f, 4725.474f, 0.0f, -6.431475f, 0.0f);
	DECOR_SET_BOOL(bVar107, "dirRight", true);
	DECOR_SET_INT(bVar107, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_156);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_18", -3942.658f, 9.234603f, 4729.244f, 0.0f, -45.01207f, 0.0f);
	DECOR_SET_BOOL(bVar108, "dirRight", true);
	DECOR_SET_INT(bVar108, "nmarkerOri", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_156);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_15", -3984.037f, 16.15646f, 4692.348f, 0.0f, -141.2884f, 0.0f);
	DECOR_SET_BOOL(bVar109, "dirRight", false);
	DECOR_SET_INT(bVar109, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_156);
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_16", -4088.921f, 23.4618f, 4687.079f, 0.0f, -151.4429f, 0.0f);
	DECOR_SET_BOOL(bVar110, "dirRight", false);
	DECOR_SET_INT(bVar110, "nmarkerOri", true);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_156);
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_17", -4194.852f, 19.54792f, 4694.637f, 0.0f, -39.67312f, 0.0f);
	DECOR_SET_BOOL(bVar111, "dirRight", true);
	DECOR_SET_INT(bVar111, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_156);
}

