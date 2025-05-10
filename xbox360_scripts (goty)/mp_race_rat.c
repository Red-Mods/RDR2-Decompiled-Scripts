//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 293
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
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
		Local_134.f_500 = 9;
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
		if (Function_60() != 4294967295)
		{
			Function_2(1, 0, 0);
		}
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x98 / 152
{
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0, int iParam1, int iParam2) //Position: 0xA4 / 164
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

void Function_3(int iParam0, bool bParam1, bool bParam2) //Position: 0x18A / 394
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

void Function_4() //Position: 0x303 / 771
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_5(bool bParam0) //Position: 0x30F / 783
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

void Function_6(int iParam0) //Position: 0x355 / 853
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

void Function_7() //Position: 0x39B / 923
{
	if (!Function_50(1, 1))
	{
		if (Function_48())
		{
			Function_36(6244, 5632);
		}
		else
		{
			Function_36(3754, 969);
		}
	}
	return;
}

int Function_8(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3C9 / 969
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

void Function_9(bool bParam0, int iParam1) //Position: 0x607 / 1543
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

struct<16> Function_10(var uParam0) //Position: 0x834 / 2100
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

int Function_11(int iParam0) //Position: 0x8A5 / 2213
{
	return Function_12(0, iParam0);
}

int Function_12(int iParam0, bool bParam1) //Position: 0x8B1 / 2225
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

bool Function_13(bool bParam0) //Position: 0x91A / 2330
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

var Function_14(int iParam0) //Position: 0x9BB / 2491
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_15(int iParam0, bool bParam1) //Position: 0x9CB / 2507
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

var Function_16(int iParam0) //Position: 0xA32 / 2610
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0xA42 / 2626
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA53 / 2643
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

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0xAB8 / 2744
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

var Function_20(int iParam0) //Position: 0xB39 / 2873
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

bool Function_21(int iParam0) //Position: 0xE52 / 3666
{
	return Function_22(Global_76905.f_132, iParam0);
}

int Function_22(var uParam0, int iParam1) //Position: 0xE63 / 3683
{
	return (uParam0 && iParam1) == 0;
}

int Function_23(int iParam0) //Position: 0xE70 / 3696
{
	return Function_15(0, iParam0);
}

void Function_24(bool bParam0, int iParam1, char* cParam2) //Position: 0xE7C / 3708
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

bool Function_25() //Position: 0xE9D / 3741
{
	return Function_21(32768);
}

int Function_26() //Position: 0xEAA / 3754
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

void Function_27() //Position: 0xF87 / 3975
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

void Function_28(int iParam0, bool bParam1, int iParam2) //Position: 0xFC4 / 4036
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

void Function_29(var uParam0, int iParam1) //Position: 0xFEC / 4076
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0xFFF / 4095
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_31(bool bParam0) //Position: 0x100E / 4110
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

void Function_32(bool bParam0) //Position: 0x108F / 4239
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

struct<64> Function_33(var uParam0) //Position: 0x1118 / 4376
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_34(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x112C / 4396
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

int Function_35(bool bParam0, bool bParam1) //Position: 0x1171 / 4465
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

void Function_36(int iParam0, int iParam1) //Position: 0x11A5 / 4517
{
	Function_37(iParam0, iParam1, 5625);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x11B6 / 4534
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

void Function_38() //Position: 0x134F / 4943
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

void Function_39(var uParam0, var uParam1, int iParam2) //Position: 0x1458 / 5208
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

void Function_40(bool bParam0) //Position: 0x15D0 / 5584
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_28(16384, 0, 1);
	return;
}

void Function_41() //Position: 0x15EA / 5610
{
	Function_28(32768, 1, 0);
	return;
}

int Function_42() //Position: 0x15F9 / 5625
{
	return 1;
}

int Function_43(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x1600 / 5632
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

void Function_44(bool bParam0, bool bParam1) //Position: 0x179E / 6046
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

var Function_45(bool bParam0) //Position: 0x17D1 / 6097
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

bool Function_46(bool bParam0) //Position: 0x184E / 6222
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_13(bParam0);
}

int Function_47() //Position: 0x1864 / 6244
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

bool Function_48() //Position: 0x18F5 / 6389
{
	return Function_49(4);
}

int Function_49(int iParam0) //Position: 0x18FF / 6399
{
	return Function_22((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_50(int iParam0, bool bParam1) //Position: 0x1912 / 6418
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x1932 / 6450
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

void Function_52(int iParam0, int iParam1) //Position: 0x1963 / 6499
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_6(iParam0);
	Function_5(iVar0);
	PRINTNL();
	Function_3(iParam0, iVar0, iParam1);
	return;
}

void Function_53(int iParam0) //Position: 0x1988 / 6536
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

void Function_54(int iParam0) //Position: 0x1A4A / 6730
{
	Function_55(8, iParam0);
	return;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x1A57 / 6743
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

void Function_56(int iParam0) //Position: 0x1A7F / 6783
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x1A8D / 6797
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

void Function_58(int iParam0, int iParam1) //Position: 0x1AB5 / 6837
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x1AD6 / 6870
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

vector3 Function_60() //Position: 0x1AF7 / 6903
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
	
	Function_62(4, 1);
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_RAT_layout");
	Local_264.f_84 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "CheckpointStart", 2, -3736.08f, 29.61103f, 2295.188f, -179.6264f, 18.9317f, -181.7165f, 104.7786f, 11.90765f, 51.35865f);
	DECOR_SET_INT((*&Local_264 + 4)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[0]);
	(*&Local_264 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint1", 2, -3795.632f, 24.95757f, 2336.558f, -174.8891f, 68.47056f, -175.1668f, 125.9524f, 11.65616f, 41.78875f);
	DECOR_SET_INT((*&Local_264 + 4)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[1]);
	(*&Local_264 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint2", 2, -4000.652f, 22.98673f, 2487.877f, 2.387313f, 149.2389f, 1.247016f, 96.99289f, 12.38203f, 59.54456f);
	DECOR_SET_INT((*&Local_264 + 4)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[2]);
	(*&Local_264 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint3", 2, -3970.823f, 26.59624f, 2662.552f, 2.045871f, 204.1583f, -0.6908139f, 116.62f, 14.22664f, 46.17349f);
	DECOR_SET_INT((*&Local_264 + 4)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[3]);
	(*&Local_264 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint4", 2, -3993.697f, 27.65144f, 2763.684f, 2.281114f, 145.2287f, 1.386571f, 113.6664f, 13.19652f, 48.65899f);
	DECOR_SET_INT((*&Local_264 + 4)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[4]);
	(*&Local_264 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint5", 2, -4037.142f, 31.20214f, 2926.553f, 1.876242f, 180.663f, -0.004294252f, 96.39857f, 9.160811f, 46.91831f);
	DECOR_SET_INT((*&Local_264 + 4)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[5]);
	(*&Local_264 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint6", 2, -4010.241f, 30.99442f, 3060.626f, 1.939936f, 555.1469f, -0.5808892f, 71.83414f, 7.346482f, 46.25586f);
	DECOR_SET_INT((*&Local_264 + 4)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[6]);
	(*&Local_264 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint7", 2, -3943.709f, 26.85588f, 3083.144f, 3.323052f, 253.6707f, 0.4379626f, 49.61354f, 11.14772f, 48.13171f);
	DECOR_SET_INT((*&Local_264 + 4)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[7]);
	(*&Local_264 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint8", 2, -3859.874f, 28.37863f, 3096.58f, 167.4593f, 261.3285f, -167.6228f, 52.83474f, 7.277775f, 43.21951f);
	DECOR_SET_INT((*&Local_264 + 4)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[8]);
	(*&Local_264 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint9", 2, -3771.431f, 27.95274f, 3045.767f, -0.9446417f, 304.8734f, 0.01183356f, 24.29391f, 11.34479f, 35.26681f);
	DECOR_SET_INT((*&Local_264 + 4)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[9]);
	(*&Local_264 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint10", 2, -3768.859f, 26.08534f, 2877.403f, 359.464f, 12.8954f, -2.577167f, 30.82384f, 7.539063f, 32.20367f);
	DECOR_SET_INT((*&Local_264 + 4)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[10]);
	(*&Local_264 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint11", 2, -3759.822f, 30.76809f, 2744.347f, -7.282845f, 1.705059f, 3.071899f, 34.72567f, 13.07615f, 34.2917f);
	DECOR_SET_INT((*&Local_264 + 4)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[11]);
	(*&Local_264 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint12", 2, -3794.169f, 20.62047f, 2599.775f, -1.869396f, 364.3069f, 0.02166688f, 108.0274f, 13.03821f, 38.77634f);
	DECOR_SET_INT((*&Local_264 + 4)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[12]);
	(*&Local_264 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint13", 2, -3763.688f, 22.71693f, 2511.957f, -1.852952f, 360.2536f, 0.2108599f, 97.37669f, 6.511747f, 40.74159f);
	DECOR_SET_INT((*&Local_264 + 4)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[13]);
	(*&Local_264 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint14", 2, -3774.585f, 20.80147f, 2408.182f, -1.875789f, 3.184114f, -0.1783706f, 94.91752f, 15.08535f, 41.73617f);
	DECOR_SET_INT((*&Local_264 + 4)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[14]);
	(*&Local_264 + 4)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint15", 2, -3746.078f, 26.63552f, 2305.946f, -178.6668f, 187.627f, 180.9137f, 103.7134f, 10.44047f, 36.97875f);
	DECOR_SET_INT((*&Local_264 + 4)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[15]);
	(*&Local_264 + 4)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint16", 2, -3673.191f, 35.99063f, 2267.035f, -164.1269f, 247.8245f, 169.283f, 95.79372f, 14.64703f, 36.22545f);
	DECOR_SET_INT((*&Local_264 + 4)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[16]);
	(*&Local_264 + 4)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "Checkpoint17", 2, -3594.716f, 39.14125f, 2173.792f, -164.7796f, 212.3147f, 166.7845f, 41.88884f, 20.20855f, 33.72808f);
	DECOR_SET_INT((*&Local_264 + 4)[17], "pointNum", 17);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[17]);
	(*&Local_264 + 4)[18] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -3634.91f, 42.72469f, 2137.578f, 2.360018f, 223.5444f, -4.125531f, 13.53472f, 3.124544f, 3.22407f);
	DECOR_SET_INT((*&Local_264 + 4)[18], "pointNum", 18);
	DECOR_SET_BOOL((*&Local_264 + 4)[18], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_84, (*&Local_264 + 4)[18]);
	Local_264.f_88 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -3699.125f, 41.15973f, 2154.558f, 2.581603f, -223.3604f, 1.782189f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_88);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -3697.629f, 41.14062f, 2155.99f, 2.485395f, -221.0964f, 1.558619f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_88);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -3696.047f, 41.16019f, 2157.439f, 2.547715f, -222.6618f, 1.656735f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_88);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -3694.508f, 41.12751f, 2158.844f, 2.568042f, -223.1887f, 1.860648f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_88);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -3695.621f, 41.44378f, 2151.114f, 2.567483f, -223.0438f, 1.79497f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_88);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -3694.211f, 41.45134f, 2152.475f, 2.474242f, -220.935f, 1.75177f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_88);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -3692.72f, 41.42971f, 2153.821f, 2.516091f, -222.0213f, 1.814951f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_88);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -3691.063f, 41.41726f, 2155.419f, 2.569279f, -223.0727f, 1.749948f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_88);
	Local_264.f_92 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit0", -3735.707f, 24.85064f, 2294.907f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar9, "CheckPoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_92);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit1", -3796.062f, 21.83624f, 2336.878f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar10, "CheckPoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_92);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit2", -4001.171f, 20.6005f, 2487.504f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar11, "CheckPoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_92);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit3", -3970.952f, 21.33158f, 2662.883f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar12, "CheckPoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_92);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit4", -3994.041f, 22.72525f, 2763.967f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar13, "CheckPoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_92);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit5", -4037.082f, 28.63556f, 2926.601f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar14, "CheckPoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_92);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit6", -4010.597f, 29.19158f, 3060.72f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar15, "CheckPoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_92);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit7", -3943.997f, 26.85588f, 3083.473f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar16, "CheckPoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_92);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit8", -3859.933f, 26.18598f, 3096.555f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "CheckPoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_92);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Firepit9", -3771.237f, 26.40869f, 3045.803f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar18, "CheckPoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_92);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit10", -3768.454f, 26.64044f, 2877.059f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar19, "CheckPoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_92);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit11", -3760.099f, 27.07509f, 2743.922f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar20, "CheckPoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_92);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit12", -3794.617f, 19.07811f, 2600.002f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar21, "CheckPoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_92);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit13", -3763.719f, 21.43435f, 2512.003f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar22, "CheckPoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_92);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit14", -3775.518f, 22.39051f, 2408.005f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar23, "CheckPoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_92);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit15", -3746.154f, 24.46827f, 2305.886f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar24, "CheckPoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_92);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit16", -3673.56f, 31.07337f, 2266.481f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar25, "CheckPoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_92);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit17", -3594.624f, 34.98272f, 2172.271f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar26, "CheckPoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_92);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "nFirepit18", -3633.922f, 42.1828f, 2138.466f, 0.004766393f, -1.439483f, 0.03824284f);
	DECOR_SET_INT(bVar27, "CheckPoint", 18);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_92);
	Local_264.f_96 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00", -3702.103f, 40.92996f, 2157.175f, -351.8723f, 156.0429f, -357.8832f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_96);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00a", -3714.268f, 38.05195f, 2183.403f, -352.5309f, 173.6738f, -360.3744f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_96);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00b", -3716.672f, 36.34933f, 2204.142f, -172.6469f, -2.315442f, -181.8715f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_96);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00c", -3708.728f, 33.75389f, 2232.072f, -172.6525f, -0.5926915f, -181.6492f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_96);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00d", -3708.551f, 30.43997f, 2251.921f, -172.2766f, 17.90664f, -179.185f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_96);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_00e", -3712.605f, 27.43453f, 2272.798f, -169.9029f, 43.16225f, -174.6275f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_96);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_0", -3724.484f, 25.30868f, 2293.285f, -173.6284f, 57.75246f, -178.3551f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_96);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_0a", -3748.729f, 25.00001f, 2303.221f, -175.9009f, 35.2502f, -184.6656f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_96);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_0b", -3761.865f, 22.80757f, 2327.001f, -176.0762f, 71.4933f, -179.558f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_96);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_1", -3788.32f, 22.05196f, 2338.773f, -179.8469f, 83.85686f, -183.4214f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_96);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1a", -3813.592f, 21.83625f, 2333.993f, -172.3009f, 75.96316f, -177.4608f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_96);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1b", -3847.208f, 24.23767f, 2339.152f, -175.9305f, 62.7496f, -181.3135f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_96);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1c", -3869.356f, 23.71364f, 2347.69f, -176.9572f, 52.2553f, -182.5257f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_96);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1d", -3883.862f, 23.04225f, 2365.528f, 0.0f, 129.014f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_96);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1e", -3911.777f, 21.88507f, 2380.474f, 0.0f, 132.4426f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_96);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1f", -3930.211f, 22.02279f, 2395.756f, -174.3414f, 51.77855f, -180.2802f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_96);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1g", -3940.923f, 20.83234f, 2413.529f, -175.1799f, 55.0362f, -181.0089f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_96);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1h", -3959.19f, 21.0342f, 2430.33f, -172.6494f, 51.62619f, -178.1244f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_96);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1i", -3975.305f, 20.85621f, 2433.557f, -175.6045f, 42.62054f, -183.0323f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_96);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_1j", -3987.498f, 20.8324f, 2446.308f, -172.575f, 24.33417f, -179.0789f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_96);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_2", -3999.554f, 21.37185f, 2470.512f, -173.1216f, 10.52714f, -180.8902f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_96);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_2a", -4001.633f, 19.81311f, 2507.593f, -171.6287f, 22.96926f, -177.1711f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_96);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_2b", -4013.746f, 19.33109f, 2527.246f, -172.2843f, -3.228343f, -180.8949f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_96);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_2c", -4015.473f, 21.02719f, 2549.864f, -172.16f, -10.68135f, -181.9197f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_96);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_2d", -4003.288f, 20.84571f, 2571.115f, -171.9226f, -17.44998f, -182.8946f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_96);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_2e", -3993.933f, 22.33599f, 2594.668f, -172.16f, -10.68135f, -181.9197f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_96);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_2f", -3993.62f, 21.63543f, 2617.291f, -171.476f, -25.26626f, -184.1181f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_96);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_2g", -3978.677f, 21.33783f, 2632.496f, -171.9925f, -15.79288f, -182.6503f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_96);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_3", -3978.178f, 21.87786f, 2651.733f, -171.9716f, -16.30765f, -182.7257f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_96);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_3a", -3964.867f, 21.17602f, 2679.607f, -172.2784f, 3.93053f, 180.0748f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_96);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_3b", -3961.948f, 21.71502f, 2699.829f, -171.9466f, 16.90176f, 181.8979f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_96);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_3c", -3958.664f, 21.71032f, 2722.242f, -174.5071f, 43.82542f, -181.0773f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_96);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_3d", -3979.496f, 22.35176f, 2736.829f, -173.1634f, 29.53833f, -179.4323f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_96);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_4", -3991.178f, 23.16969f, 2753.83f, -172.9165f, 32.8763f, -178.9559f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_96);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_4a", -4000.639f, 23.33566f, 2784.537f, -173.5649f, 22.47417f, -180.3461f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_96);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_4b", -4012.933f, 24.07795f, 2802.951f, -173.8316f, 15.4555f, -181.1652f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_96);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_4c", -4017.972f, 24.50355f, 2832.484f, -173.746f, 18.06631f, -180.8685f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_96);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_4d", -4029.477f, 26.87499f, 2859.313f, -173.8708f, 14.07267f, -181.3192f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_96);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_4e", -4031.364f, 28.2072f, 2884.376f, -173.8708f, 14.07267f, -181.3192f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_96);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_5", -4041.257f, 28.46048f, 2914.287f, -174.0275f, -5.539606f, -183.3936f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_96);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_5a", -4032.007f, 29.34104f, 2943.48f, -174.0547f, -0.8848284f, -182.9071f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_96);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_5b", -4028.467f, 30.0636f, 2970.653f, -174.0543f, 1.119019f, -182.6984f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_96);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_5c", -4033.327f, 29.27021f, 2998.672f, -173.9196f, -12.11433f, -184.0956f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_96);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_5d", -4030.556f, 29.24252f, 3026.92f, -171.5721f, -25.62754f, -184.4725f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_96);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_6", -4020.944f, 29.12749f, 3053.548f, -164.9748f, -59.35373f, -193.8092f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_96);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_6a", -3993.674f, 28.7932f, 3070.434f, -108.6187f, -81.98431f, -252.0162f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_96);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_6b", -3971.466f, 27.85982f, 3066.006f, -165.4674f, -58.22231f, -193.2332f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_96);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_7", -3954.155f, 27.17252f, 3071.155f, -168.2743f, -49.44028f, -189.7669f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_96);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_7a", -3925.316f, 26.81842f, 3101.736f, -128.9192f, -80.22109f, -231.4761f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_96);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_7b", -3904.259f, 26.7318f, 3106.364f, -41.72795f, -78.54847f, -319.6494f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_96);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_7c", -3883.709f, 26.61727f, 3106.641f, -21.41733f, -68.78382f, -340.7204f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_96);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_8", -3871.014f, 26.71501f, 3104.931f, -15.4487f, -60.25831f, -347.8125f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_96);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_8a", -3845.697f, 26.12162f, 3088.672f, -13.19941f, -54.63915f, -349.9776f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_96);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_8b", -3829.266f, 26.1121f, 3071.017f, -27.66419f, -73.46379f, -334.1248f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_96);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_8c", -3807.521f, 26.48792f, 3070.676f, -18.96963f, -66.01356f, -343.3709f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_96);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_8d", -3787.898f, 26.35394f, 3069.303f, -10.39579f, -42.91803f, -353.6849f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_96);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "nRespawn_9", -3771.76f, 25.88585f, 3058.075f, -7.831605f, -4.244856f, 1.603541f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_96);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_9a", -3765.81f, 24.68504f, 3015.485f, -7.810108f, 0.3180689f, 0.9766093f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_96);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_9b", -3768.501f, 24.40099f, 2988.344f, -9.879035f, -5.881268f, 1.619203f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_96);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_9c", -3762.92f, 24.79458f, 2959.027f, -8.061386f, 14.30111f, -0.9834964f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_96);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_9d", -3764.07f, 24.88729f, 2920.913f, -7.999618f, 12.46082f, -0.7166285f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_96);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_9e", -3771.211f, 24.51147f, 2911.025f, -7.824715f, -3.505017f, 1.501593f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_96);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10", -3773.664f, 25.25384f, 2883.477f, -4.011514f, -29.41348f, 1.544572f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_96);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10a", -3759.486f, 28.43788f, 2858.839f, -3.496969f, -2.463238f, -0.2774823f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_96);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10b", -3753.787f, 28.44313f, 2836.799f, -7.999618f, 12.46082f, -0.7166285f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_96);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10c", -3762.279f, 28.65071f, 2813.819f, -7.816636f, -2.356058f, 1.343578f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_96);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10d", -3763.367f, 28.11544f, 2787.312f, -7.810059f, -0.2447869f, 1.053812f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_96);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_10e", -3764.709f, 28.13309f, 2765.698f, -7.952518f, -10.82984f, 2.523783f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_96);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11", -3753.874f, 27.51477f, 2747.312f, -8.234015f, 18.40819f, -1.596169f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_96);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11a", -3767.067f, 25.96593f, 2724.75f, -8.176216f, 17.15849f, -1.406932f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_96);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11b", -3772.341f, 28.38636f, 2685.811f, -8.878857f, 28.30761f, -3.216454f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_96);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11c", -3783.552f, 22.99162f, 2692.248f, -8.127481f, 16.01636f, -1.236228f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_96);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11d", -3793.307f, 22.1124f, 2658.916f, -7.824558f, -3.48632f, 1.499018f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_96);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11e", -3778.508f, 26.11656f, 2657.943f, -7.813175f, 1.631791f, 0.7963579f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_96);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_11f", -3792.456f, 19.54998f, 2629.923f, -7.814753f, 1.994856f, 0.7465091f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_96);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12", -3798.338f, 18.89693f, 2608.563f, -8.335565f, -20.38851f, 3.94234f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_96);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12a", -3787.566f, 19.83356f, 2580.587f, -8.751868f, -26.73619f, 4.982139f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_96);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_12b", -3770.193f, 20.48264f, 2554.122f, -7.902001f, -8.72485f, 2.226367f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_96);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13", -3762.858f, 20.9324f, 2524.146f, -7.824246f, 3.448871f, 0.5466097f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_96);
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13a", -3764.468f, 21.44343f, 2491.912f, -7.881704f, 7.710969f, -0.04389764f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_96);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13b", -3766.643f, 21.58479f, 2467.943f, -7.881704f, 7.710969f, -0.04389764f);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_96);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_13c", -3771.638f, 21.5841f, 2442.205f, -7.836328f, 4.684481f, 0.3762613f);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_96);
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14", -3776.124f, 22.09486f, 2420.239f, -7.842547f, -5.206479f, 1.736351f);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_96);
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14a", -3771.897f, 21.4634f, 2390.683f, -8.17121f, -17.04522f, 3.430382f);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_96);
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14b", -3756.986f, 21.83627f, 2373.145f, -7.839683f, -4.972992f, 1.704069f);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_264.f_96);
	bVar113 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_14c", -3762.255f, 23.69693f, 2349.081f, -8.05563f, -14.14068f, 3.000537f);
	ADD_OBJECT_TO_OBJECTSET(bVar113, Local_264.f_96);
	bVar114 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15", -3757.58f, 23.34218f, 2313.741f, -12.01879f, -49.26361f, 10.18413f);
	ADD_OBJECT_TO_OBJECTSET(bVar114, Local_264.f_96);
	bVar115 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15a", -3729.532f, 25.11119f, 2287.646f, -22.23712f, -68.95664f, 21.90618f);
	ADD_OBJECT_TO_OBJECTSET(bVar115, Local_264.f_96);
	bVar116 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_15b", -3706.937f, 26.41551f, 2286.632f, -18.37005f, -64.45741f, 17.69949f);
	ADD_OBJECT_TO_OBJECTSET(bVar116, Local_264.f_96);
	bVar117 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16", -3678.324f, 30.31598f, 2275.324f, -8.968563f, -29.34564f, 5.442971f);
	ADD_OBJECT_TO_OBJECTSET(bVar117, Local_264.f_96);
	bVar118 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16a", -3671.043f, 32.90454f, 2247.622f, -8.733183f, -26.49371f, 4.94043f);
	ADD_OBJECT_TO_OBJECTSET(bVar118, Local_264.f_96);
	bVar119 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16b", -3667.012f, 33.77544f, 2225.478f, -11.43701f, -46.66806f, 9.380029f);
	ADD_OBJECT_TO_OBJECTSET(bVar119, Local_264.f_96);
	bVar120 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16c", -3649.552f, 34.80082f, 2206.38f, -20.77046f, -67.46866f, 20.32685f);
	ADD_OBJECT_TO_OBJECTSET(bVar120, Local_264.f_96);
	bVar121 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16d", -3627.482f, 33.84437f, 2202.671f, -26.09434f, -72.00452f, 25.99696f);
	ADD_OBJECT_TO_OBJECTSET(bVar121, Local_264.f_96);
	bVar122 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_16e", -3600.282f, 33.40712f, 2201.338f, -8.671021f, -25.66393f, 4.799031f);
	ADD_OBJECT_TO_OBJECTSET(bVar122, Local_264.f_96);
	bVar123 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17", -3588.338f, 34.60984f, 2184.563f, -8.883121f, 28.35822f, -3.225438f);
	ADD_OBJECT_TO_OBJECTSET(bVar123, Local_264.f_96);
	bVar124 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17a", -3610.554f, 36.86972f, 2154.35f, -12.9054f, 52.52383f, -9.285754f);
	ADD_OBJECT_TO_OBJECTSET(bVar124, Local_264.f_96);
	bVar125 = CREATE_POINT_IN_LAYOUT(Local_264, "Respawn_17b", -3627.621f, 41.83692f, 2148.069f, -9.877835f, 37.61501f, -5.046404f);
	ADD_OBJECT_TO_OBJECTSET(bVar125, Local_264.f_96);
	Local_264.f_100 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	bVar126 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -3648f, 42.1656f, 2124.0f, 2.255165f, -214.0937f, 1.405906f);
	ADD_OBJECT_TO_OBJECTSET(bVar126, Local_264.f_100);
	Local_264.f_104 = CREATE_OBJECTSET_IN_LAYOUT("dirMarker_flagsSet", Local_264, 8, 0);
	bVar127 = CREATE_POINT_IN_LAYOUT(Local_264, "ndirMarker", -4016.254f, 29.36521f, 3064.342f, 0.0f, -9.920479f, 0.0f);
	DECOR_SET_BOOL(bVar127, "dirRight", false);
	DECOR_SET_INT(bVar127, "dirOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar127, Local_264.f_104);
	bVar128 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker2", -3945.165f, 27.00253f, 3072.532f, 0.0f, 119.5304f, 0.0f);
	DECOR_SET_BOOL(bVar128, "dirRight", true);
	DECOR_SET_INT(bVar128, "dirOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar128, Local_264.f_104);
	bVar129 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker1", -3766.654f, 25.18632f, 3060.384f, 0.0f, 92.77763f, 0.0f);
	DECOR_SET_BOOL(bVar129, "dirRight", false);
	DECOR_SET_INT(bVar129, "dirOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar129, Local_264.f_104);
	bVar130 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker3", -3776.5f, 24.16845f, 2888.917f, 0.0f, 228.9595f, 0.0f);
	DECOR_SET_BOOL(bVar130, "dirRight", true);
	DECOR_SET_INT(bVar130, "dirOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar130, Local_264.f_104);
	bVar131 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker4", -3706.626f, 26.70104f, 2275.172f, 0.0f, 168.5104f, 0.0f);
	DECOR_SET_BOOL(bVar131, "dirRight", true);
	DECOR_SET_INT(bVar131, "dirOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar131, Local_264.f_104);
}

var A×ÍSE2ÿ¸Å|ùAá¦E4?ûÅ|IÂAã*XE5@ØÅ|sÐAâÜ±E6?ÆÅ|H¼AçjE7@Å|:AëÍÈE8ADÅ|¦Aîc(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196) //Position: 0x47BB / 18363
{
}

void Function_62(int iParam0, int iParam1) //Position: 0x4D91 / 19857
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

void Function_63() //Position: 0x4DDA / 19930
{
	while (!IS_EXITFLAG_SET())
	{
		if (Function_48())
		{
			Function_36(6244, 5632);
		}
		else
		{
			Function_36(3754, 969);
		}
		WAIT(false);
	}
	return;
}

bool Function_64() //Position: 0x4E09 / 19977
{
	return Function_65(2);
}

int Function_65(var uParam0) //Position: 0x4E13 / 19987
{
	return Function_22(StackVal, uParam0);
}

