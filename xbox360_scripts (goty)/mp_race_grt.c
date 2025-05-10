//Decompiled with MagicRDR v1.0
//Function Count : 65
//Statics Count : 299
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
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
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
		ENABLE_CHILD_SECTOR("dlc_grt_race01x");
		Local_134.f_500 = 4;
		Function_59(0, 1);
		Function_59(1, 3);
		Function_58(0, TO_FLOAT(17));
		Function_57(1, 1);
		Function_56(Local_264);
		Function_54(1);
		Function_53(4);
		Function_51(2, 0);
		while (!IS_EXITFLAG_SET())
		{
			Function_7();
			WAIT(false);
		}
		if (Function_60() != 4294967295)
		{
			Function_2(1, 0, 0);
		}
	}
	DISABLE_CHILD_SECTOR("dlc_grt_race01x");
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x9F / 159
{
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0, int iParam1, int iParam2) //Position: 0xAB / 171
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

void Function_3(int iParam0, bool bParam1, bool bParam2) //Position: 0x191 / 401
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

void Function_4() //Position: 0x30A / 778
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_5(bool bParam0) //Position: 0x316 / 790
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

void Function_6(int iParam0) //Position: 0x35C / 860
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

void Function_7() //Position: 0x3A2 / 930
{
	if (!Function_50(1, 1))
	{
		if (Function_48())
		{
			Function_36(6251, 5639);
		}
		else
		{
			Function_36(3761, 976);
		}
	}
	return;
}

int Function_8(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3D0 / 976
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

void Function_9(bool bParam0, int iParam1) //Position: 0x60E / 1550
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

struct<16> Function_10(var uParam0) //Position: 0x83B / 2107
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

int Function_11(int iParam0) //Position: 0x8AC / 2220
{
	return Function_12(0, iParam0);
}

int Function_12(int iParam0, bool bParam1) //Position: 0x8B8 / 2232
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

bool Function_13(bool bParam0) //Position: 0x921 / 2337
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

var Function_14(int iParam0) //Position: 0x9C2 / 2498
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_15(int iParam0, bool bParam1) //Position: 0x9D2 / 2514
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

var Function_16(int iParam0) //Position: 0xA39 / 2617
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0xA49 / 2633
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA5A / 2650
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

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0xABF / 2751
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

var Function_20(int iParam0) //Position: 0xB40 / 2880
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

bool Function_21(int iParam0) //Position: 0xE59 / 3673
{
	return Function_22(Global_76905.f_132, iParam0);
}

int Function_22(var uParam0, int iParam1) //Position: 0xE6A / 3690
{
	return (uParam0 && iParam1) == 0;
}

int Function_23(int iParam0) //Position: 0xE77 / 3703
{
	return Function_15(0, iParam0);
}

void Function_24(bool bParam0, int iParam1, char* cParam2) //Position: 0xE83 / 3715
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

bool Function_25() //Position: 0xEA4 / 3748
{
	return Function_21(32768);
}

int Function_26() //Position: 0xEB1 / 3761
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

void Function_27() //Position: 0xF8E / 3982
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

void Function_28(int iParam0, bool bParam1, int iParam2) //Position: 0xFCB / 4043
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

void Function_29(var uParam0, int iParam1) //Position: 0xFF3 / 4083
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1006 / 4102
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_31(bool bParam0) //Position: 0x1015 / 4117
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

void Function_32(bool bParam0) //Position: 0x1096 / 4246
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

struct<64> Function_33(var uParam0) //Position: 0x111F / 4383
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_34(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1133 / 4403
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

int Function_35(bool bParam0, bool bParam1) //Position: 0x1178 / 4472
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

void Function_36(int iParam0, int iParam1) //Position: 0x11AC / 4524
{
	Function_37(iParam0, iParam1, 5632);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x11BD / 4541
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

void Function_38() //Position: 0x1356 / 4950
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

void Function_39(var uParam0, var uParam1, int iParam2) //Position: 0x145F / 5215
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

void Function_40(bool bParam0) //Position: 0x15D7 / 5591
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_28(16384, 0, 1);
	return;
}

void Function_41() //Position: 0x15F1 / 5617
{
	Function_28(32768, 1, 0);
	return;
}

int Function_42() //Position: 0x1600 / 5632
{
	return 1;
}

int Function_43(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x1607 / 5639
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

void Function_44(bool bParam0, bool bParam1) //Position: 0x17A5 / 6053
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

var Function_45(bool bParam0) //Position: 0x17D8 / 6104
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

bool Function_46(bool bParam0) //Position: 0x1855 / 6229
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_13(bParam0);
}

int Function_47() //Position: 0x186B / 6251
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

bool Function_48() //Position: 0x18FC / 6396
{
	return Function_49(4);
}

int Function_49(int iParam0) //Position: 0x1906 / 6406
{
	return Function_22((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_50(int iParam0, bool bParam1) //Position: 0x1919 / 6425
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x1939 / 6457
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

void Function_52(int iParam0, int iParam1) //Position: 0x196A / 6506
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_6(iParam0);
	Function_5(iVar0);
	PRINTNL();
	Function_3(iParam0, iVar0, iParam1);
	return;
}

void Function_53(int iParam0) //Position: 0x198F / 6543
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

void Function_54(int iParam0) //Position: 0x1A51 / 6737
{
	Function_55(8, iParam0);
	return;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x1A5E / 6750
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

void Function_56(int iParam0) //Position: 0x1A86 / 6790
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x1A94 / 6804
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

void Function_58(int iParam0, int iParam1) //Position: 0x1ABC / 6844
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x1ADD / 6877
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

vector3 Function_60() //Position: 0x1AFE / 6910
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
	bool bVar135;
	bool bVar136;
	bool bVar137;
	bool bVar138;
	bool bVar139;
	bool bVar140;
	bool bVar141;
	bool bVar142;
	bool bVar143;
	bool bVar144;
	bool bVar145;
	bool bVar146;
	bool bVar147;
	bool bVar148;
	bool bVar149;
	bool bVar150;
	bool bVar151;
	bool bVar152;
	bool bVar153;
	bool bVar154;
	bool bVar155;
	bool bVar156;
	bool bVar157;
	bool bVar158;
	bool bVar159;
	bool bVar160;
	bool bVar161;
	bool bVar162;
	bool bVar163;
	bool bVar164;
	bool bVar165;
	bool bVar166;
	
	Function_61(4, 1);
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_GRT_layout");
	Local_264.f_80 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointstart", 2, -426.8473f, 134.5513f, 1909.828f, 0.0f, 449.4113f, 0.0f, 31.44857f, 11.11823f, 34.15554f);
	DECOR_SET_INT((*&Local_264 + 4)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[0]);
	(*&Local_264 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint1", 2, -308.4893f, 123.2868f, 1930.267f, -17.05221f, -90.46375f, 16.36966f, 45.27448f, 28.90702f, 57.47948f);
	DECOR_SET_INT((*&Local_264 + 4)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[1]);
	(*&Local_264 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint2", 2, -222.2504f, 115.7276f, 1919.706f, 0.0f, -69.44724f, 0.0f, 53.7081f, 37.34396f, 50.44579f);
	DECOR_SET_INT((*&Local_264 + 4)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[2]);
	(*&Local_264 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint3", 2, -132.2193f, 119.7624f, 1843.116f, 0.0f, -412.437f, 0.0f, 66.28597f, 36.57503f, 48.40913f);
	DECOR_SET_INT((*&Local_264 + 4)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[3]);
	(*&Local_264 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint4", 2, -45.08544f, 113.1099f, 1765.265f, 0.0f, -363.2089f, 0.0f, 34.01873f, 33.90895f, 36.44876f);
	DECOR_SET_INT((*&Local_264 + 4)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[4]);
	(*&Local_264 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint5", 2, -105.1356f, 118.1462f, 1715.371f, 0.0f, -504.8447f, 0.0f, 60.05904f, 32.34703f, 47.19361f);
	DECOR_SET_INT((*&Local_264 + 4)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[5]);
	(*&Local_264 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint6", 2, -130.8094f, 118.1989f, 1657.261f, 0.0f, -352.0398f, 0.0f, 37.23018f, 18.72441f, 34.30468f);
	DECOR_SET_INT((*&Local_264 + 4)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[6]);
	(*&Local_264 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint7", 2, -112.4113f, 118.2116f, 1595.816f, 0.0f, -179.6964f, 0.0f, 34.69301f, 20.1854f, 30.58572f);
	DECOR_SET_INT((*&Local_264 + 4)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[7]);
	(*&Local_264 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint8", 2, -131.9119f, 118.2958f, 1505.631f, -0.4208843f, 172.125f, -0.1626535f, 31.81996f, 19.0715f, 34.12349f);
	DECOR_SET_INT((*&Local_264 + 4)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[8]);
	(*&Local_264 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint9", 2, -109.8423f, 117.7185f, 1400.576f, 0.0f, -22.20688f, 0.0f, 30.95159f, 23.56289f, 31.33562f);
	DECOR_SET_INT((*&Local_264 + 4)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[9]);
	(*&Local_264 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint10", 2, -63.7989f, 113.5491f, 1285.861f, 0.0f, -6.899177f, 0.0f, 32.58691f, 17.81021f, 41.73185f);
	DECOR_SET_INT((*&Local_264 + 4)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[10]);
	(*&Local_264 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint11", 2, -103.2614f, 112.8567f, 1230.981f, 0.0f, -109.6058f, 0.0f, 40.47634f, 9.655113f, 41.43489f);
	DECOR_SET_INT((*&Local_264 + 4)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[11]);
	(*&Local_264 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint12", 2, -178.627f, 123.9348f, 1265.829f, 0.0f, -71.0f, 0.0f, 36.66795f, 16.67831f, 51.36256f);
	DECOR_SET_INT((*&Local_264 + 4)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[12]);
	(*&Local_264 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint13", 2, -285.2732f, 129.2946f, 1298.521f, 0.0f, -65.0f, 0.0f, 45.42073f, 14.27343f, 51.36256f);
	DECOR_SET_INT((*&Local_264 + 4)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[13]);
	(*&Local_264 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint14", 2, -387.6946f, 140.656f, 1359.959f, 0.0f, -69.83244f, 0.0f, 61.91448f, 16.09359f, 43.11735f);
	DECOR_SET_INT((*&Local_264 + 4)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[14]);
	(*&Local_264 + 4)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint15", 2, -452.0487f, 151.9695f, 1390.483f, 0.0f, -41.09546f, 0.0f, 35.27853f, 13.20653f, 32.76104f);
	DECOR_SET_INT((*&Local_264 + 4)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[15]);
	(*&Local_264 + 4)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint16", 2, -460.8945f, 147.6429f, 1475.719f, 0.0f, -83.65459f, 0.0f, 27.12357f, 34.9024f, 95.53324f);
	DECOR_SET_INT((*&Local_264 + 4)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[16]);
	(*&Local_264 + 4)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -411.486f, 152.4609f, 1664.751f, 0.0f, 380.6812f, 0.0f, 80.62506f, 23.5303f, 7.558227f);
	DECOR_SET_INT((*&Local_264 + 4)[17], "pointNum", 17);
	DECOR_SET_BOOL((*&Local_264 + 4)[17], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_80, (*&Local_264 + 4)[17]);
	Local_264.f_84 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nFireStart", -428.4724f, 134.5493f, 1904.429f, 176.0945f, 81.83194f, 176.1602f);
	DECOR_SET_INT(bVar1, "checkpoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_84);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire1", -308.6601f, 123.2868f, 1931.792f, -3.905491f, 98.16806f, -3.839747f);
	DECOR_SET_INT(bVar2, "checkpoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_84);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire2", -222.2941f, 115.7276f, 1921.071f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar3, "checkpoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_84);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire3", -135.9884f, 119.6735f, 1845.775f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar4, "checkpoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_84);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire4", -45.44555f, 113.1345f, 1766.511f, -0.8199378f, 1.710444f, 0.622048f);
	DECOR_SET_INT(bVar5, "checkpoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_84);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire5", -130.1872f, 118.1989f, 1658.444f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar6, "checkpoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_84);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire6", -130.362f, 118.1989f, 1658.441f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar7, "checkpoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_84);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire7", -112.9117f, 118.2116f, 1596.982f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar8, "checkpoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_84);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire8", -130.95f, 118.2951f, 1507.108f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar9, "checkpoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_84);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire9", -109.4039f, 117.7172f, 1401.977f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar10, "checkpoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_84);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire10", -64.54358f, 113.5504f, 1286.802f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar11, "checkpoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_84);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire11", -103.5123f, 112.8583f, 1231.559f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar12, "checkpoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_84);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire12", -178.9113f, 123.9294f, 1266.785f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar13, "checkpoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_84);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire13", -285.2681f, 129.3026f, 1300.091f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar14, "checkpoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_84);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire14", -391.1384f, 141.3631f, 1363.042f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar15, "checkpoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_84);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire15", -451.7076f, 151.9663f, 1392.181f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar16, "checkpoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_84);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire16", -460.7671f, 147.642f, 1476.905f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "checkpoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_84);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "FireFinish", -412.376f, 152.4609f, 1662.202f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar18, "checkpoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_84);
	Local_264.f_88 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -471.4258f, 142.2299f, 1907.862f, 0.0f, -102.4786f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_88);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -471.2033f, 142.1763f, 1910.416f, 151.7308f, -84.91882f, -151.2423f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_88);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -470.73f, 142.0748f, 1912.981f, 0.0f, -83.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_88);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -470.2259f, 141.9699f, 1914.98f, 0.0f, -68.78201f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_88);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -470.1732f, 141.4571f, 1916.953f, 4.467182f, -66.98891f, -4.555171f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_88);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -474.006f, 142.3925f, 1909.414f, 0.0f, -95.83377f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_88);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -473.3982f, 142.3425f, 1912.066f, 0.0f, -83.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_88);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -472.8836f, 142.2352f, 1914.458f, 0.0f, -83.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_88);
	Local_264.f_92 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a", -440.706f, 136.3915f, 1902.352f, 0.0f, -86.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_92);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a1", -424.8476f, 133.968f, 1901.678f, 0.0f, -86.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_92);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a2", -412.1398f, 132.5503f, 1900.753f, 0.0f, -103.0492f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_92);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a3", -398.0367f, 130.5424f, 1912.33f, -179.5013f, -93.42802f, 179.1752f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_92);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a4", -382.3346f, 128.9943f, 1907.376f, -180.4299f, -64.9039f, 180.1163f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_92);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a5", -366.4381f, 127.7186f, 1920.425f, -180.9164f, -85.23631f, 180.5939f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_92);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a6", -351.6305f, 126.4051f, 1917.361f, -180.4559f, -69.40664f, 180.1402f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_92);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_000a7", -339.0738f, 126.0634f, 1930.828f, -180.8199f, -84.31407f, 180.4978f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_92);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001a", -331.8802f, 124.9541f, 1921.579f, 0.0f, -109.8522f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_92);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001a1", -323.0129f, 124.7947f, 1934.785f, 0.0f, -90.03544f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_92);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001a2", -307.5984f, 123.6382f, 1937.373f, 0.0f, -90.03544f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_92);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001a3", -290.9522f, 122.2301f, 1938.467f, 0.0f, -90.03544f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_92);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001a4", -278.523f, 120.8654f, 1936.875f, 0.0f, -90.03544f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_92);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001a5", -262.5635f, 119.3811f, 1934.949f, 0.0f, -83.03117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_92);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_001a6", -246.7549f, 117.5974f, 1932.323f, 0.0f, -59.87182f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_92);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a", -242.1096f, 117.1267f, 1931.346f, 0.0f, -62.14231f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_92);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a1", -233.2776f, 116.5395f, 1921.022f, 4.001248f, -94.14925f, -4.422753f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_92);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a2", -221.3714f, 115.8973f, 1916.506f, 0.0f, -87.85933f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_92);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a3", -207.4474f, 115.7733f, 1918.988f, 0.0f, -57.46545f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_92);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a4", -195.1642f, 116.0625f, 1910.144f, 0.0f, -33.62917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_92);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a5", -183.1111f, 116.928f, 1898.881f, 0.0f, -33.62917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_92);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a6", -170.7746f, 117.7641f, 1885.726f, 0.0f, -33.62917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_92);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a7", -162.4612f, 117.2261f, 1876.354f, 0.0f, -33.62917f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_92);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_002a8", -157.8275f, 119.1983f, 1856.625f, 0.0f, -69.6478f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_92);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a", -146.0776f, 118.9387f, 1858.974f, 0.0f, -37.28289f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_92);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a1", -133.3494f, 119.9357f, 1851.082f, 0.0f, -47.91047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_92);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a2", -119.7299f, 119.6946f, 1843.087f, 0.0f, -47.91047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_92);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a3", -104.9577f, 118.9804f, 1835.389f, 0.0f, -47.91047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_92);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a4", -91.4243f, 117.9928f, 1826.058f, 0.0f, -47.91047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_92);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a5", -78.81675f, 117.2316f, 1815.365f, 0.0f, -47.91047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_92);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a6", -68.1514f, 116.3792f, 1803.072f, 0.0f, -47.91047f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_92);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a7", -56.74938f, 115.3073f, 1793.174f, 0.0f, -30.74392f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_92);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_003a8", -46.41145f, 113.9541f, 1786.807f, 0.0f, -19.06319f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_92);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004a", -40.77919f, 112.7964f, 1782.125f, 0.0f, 17.08637f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_92);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004a1", -37.58591f, 112.2328f, 1765.976f, 0.0f, 47.86015f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_92);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004a2", -42.60254f, 114.0007f, 1754.264f, 0.0f, 56.65002f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_92);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004a3", -54.76898f, 115.5377f, 1743.336f, 0.0f, 56.65002f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_92);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004a4", -69.07288f, 116.737f, 1733.016f, 0.0f, 56.65002f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_92);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004a5", -83.05959f, 117.4489f, 1740.261f, 0.0f, 56.65002f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_92);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_004a6", -92.30568f, 118.0299f, 1739.054f, 0.0f, 36.13733f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_92);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_005a", -102.2774f, 118.91f, 1738.749f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_92);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_005a1", -107.9871f, 118.9827f, 1726.74f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_92);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_005a2", -112.8888f, 118.7535f, 1713.38f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_92);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_005a3", -115.8509f, 118.4367f, 1698.32f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_92);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_005a4", -121.1838f, 118.4618f, 1684.909f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_92);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_006a", -128.7193f, 118.5054f, 1674.357f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_92);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_006a1", -135.6706f, 118.6767f, 1662.643f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_92);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_006a2", -123.4231f, 118.2972f, 1650.657f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_92);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_006a3", -119.4723f, 118.29f, 1641.217f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_92);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_006a4", -114.8361f, 118.2475f, 1627.786f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_92);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_006a5", -110.5948f, 118.2829f, 1614.654f, 0.0f, -10.87884f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_92);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007a", -108.8482f, 118.3296f, 1608.588f, 0.0f, -5.620344f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_92);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007a1", -117.6215f, 118.5856f, 1601.025f, 0.0f, -5.620344f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_92);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007a2", -118.6099f, 118.4296f, 1589.468f, 0.0f, -5.620344f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_92);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007a3", -110.4133f, 118.3921f, 1576.145f, 0.0f, 13.75684f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_92);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007a4", -112.7372f, 118.2588f, 1561.566f, 0.08335522f, 12.31917f, 0.008820933f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_92);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007a5", -117.536f, 118.1353f, 1546.084f, 0.08335522f, 12.31917f, 0.008820933f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_92);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_007a6", -130.5812f, 118.4349f, 1534.666f, 0.08125753f, -1.433663f, 0.008620523f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_92);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a", -134.165f, 118.4723f, 1522.045f, 0.0f, -5.620344f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_92);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a1", -136.5352f, 118.4492f, 1509.176f, 0.0f, -23.46963f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_92);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a2", -124.1631f, 118.4337f, 1502.071f, 0.2948824f, -17.1315f, -0.1671866f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_92);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a3", -116.1699f, 118.3878f, 1491.298f, 0.2948824f, -17.1315f, -0.1671866f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_92);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a4", -107.1129f, 118.4992f, 1474.908f, 0.2540278f, -3.007106f, -0.159989f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_92);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a5", -117.5888f, 118.5331f, 1458.016f, 0.2540278f, -3.007106f, -0.159989f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_92);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a6", -120.4642f, 118.4491f, 1438.51f, 0.3045803f, -20.25111f, -0.1702956f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_92);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_008a7", -119.9333f, 118.221f, 1420.113f, 0.3045803f, -20.25111f, -0.1702956f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_92);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a", -117.6343f, 118.0926f, 1411.848f, 0.0f, -32.98174f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_92);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a1", -111.6609f, 117.9021f, 1397.059f, 0.0f, -64.4803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_92);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a2", -96.74169f, 117.3993f, 1398.304f, 0.0f, -31.19354f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_92);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a3", -84.2029f, 117.7085f, 1389.519f, 0.0f, -1.891225f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_92);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a4", -79.08107f, 117.8258f, 1373.047f, 0.0f, 7.341057f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_92);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a5", -77.25048f, 117.7966f, 1356.561f, 0.0f, 7.341057f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_92);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a6", -78.14471f, 117.8726f, 1343.366f, 0.0f, 18.00278f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_92);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a7", -86.57243f, 117.7332f, 1332.999f, 0.0f, -24.31597f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_92);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a8", -85.15736f, 116.9405f, 1318.797f, 0.0f, -49.32857f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_92);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_009a9", -71.71705f, 115.6265f, 1313.349f, 0.0f, -21.47391f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_92);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_010a", -67.40568f, 114.9106f, 1306.148f, 0.0f, 11.35449f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_92);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_010a1", -61.69586f, 114.1104f, 1295.029f, 0.2592886f, 7.54469f, 0.03989966f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_92);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_010a2", -59.81945f, 113.3164f, 1280.673f, 0.2732581f, 25.9021f, 0.04397155f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_92);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_010a3", -65.41144f, 112.7489f, 1267.227f, 0.2813161f, 34.58004f, 0.04804154f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_92);
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_010a4", -71.73588f, 112.4331f, 1257.521f, 0.3047152f, 52.021f, 0.06427691f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_92);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_010a5", -80.27747f, 112.2778f, 1248.323f, 0.3077731f, 53.63732f, 0.0667138f);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_92);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_011a", -85.56636f, 112.2523f, 1238.81f, 0.0f, 83.60358f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_92);
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_011a1", -91.87393f, 112.0417f, 1229.121f, 0.0f, 106.7607f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_92);
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_011a2", -104.1546f, 112.9615f, 1226.597f, 0.0f, 120.0423f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_92);
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_011a3", -114.3179f, 113.6525f, 1229.706f, 0.0f, 129.1422f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_264.f_92);
	bVar113 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_011a4", -125.3474f, 114.5226f, 1233.8f, 0.0f, 129.1422f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar113, Local_264.f_92);
	bVar114 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_011a5", -137.0007f, 115.6287f, 1238.868f, 0.0f, 129.1422f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar114, Local_264.f_92);
	bVar115 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_011a6", -148.3271f, 117.0074f, 1243.824f, 0.0f, 129.1422f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar115, Local_264.f_92);
	bVar116 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_012a", -160.0757f, 119.524f, 1249.916f, 0.0f, 123.0704f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar116, Local_264.f_92);
	bVar117 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_012a1", -169.4484f, 121.3186f, 1255.435f, 0.0f, 123.0704f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar117, Local_264.f_92);
	bVar118 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_012a2", -182.0547f, 123.7504f, 1263.534f, 0.0f, 123.0704f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar118, Local_264.f_92);
	bVar119 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_012a3", -197.0037f, 125.3082f, 1270.78f, 0.0f, 123.0704f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar119, Local_264.f_92);
	bVar120 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_012a4", -211.9558f, 125.9899f, 1276.366f, 0.0f, 123.0704f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar120, Local_264.f_92);
	bVar121 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_012a5", -226.1913f, 126.4948f, 1280.795f, 0.0f, 114.5379f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar121, Local_264.f_92);
	bVar122 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_012a6", -241.3407f, 127.2531f, 1283.527f, 0.0f, 114.5379f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar122, Local_264.f_92);
	bVar123 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_012a7", -255.7606f, 127.553f, 1287.249f, 0.0f, 114.5379f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar123, Local_264.f_92);
	bVar124 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a", -264.1183f, 127.833f, 1288.881f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar124, Local_264.f_92);
	bVar125 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a1", -276.6415f, 128.4846f, 1292.909f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar125, Local_264.f_92);
	bVar126 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a2", -292.3791f, 129.4797f, 1298.454f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar126, Local_264.f_92);
	bVar127 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a3", -305.8363f, 130.6941f, 1303.745f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar127, Local_264.f_92);
	bVar128 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a4", -318.31f, 132.0556f, 1310.869f, 0.0f, 129.1387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar128, Local_264.f_92);
	bVar129 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a5", -329.5605f, 133.542f, 1319.489f, 0.0f, 129.1387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar129, Local_264.f_92);
	bVar130 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a6", -341.8375f, 134.9501f, 1329.816f, 0.0f, 129.1387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar130, Local_264.f_92);
	bVar131 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a7", -354.8786f, 136.5361f, 1341.162f, 0.0f, 129.1387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar131, Local_264.f_92);
	bVar132 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_013a8", -368.071f, 137.7365f, 1347.156f, 0.0f, 129.1387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar132, Local_264.f_92);
	bVar133 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_014a", -372.8506f, 138.37f, 1349.568f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar133, Local_264.f_92);
	bVar134 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_014a1", -384.29f, 140.2377f, 1355.099f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar134, Local_264.f_92);
	bVar135 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_014a2", -394.7141f, 142.0345f, 1360.3f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar135, Local_264.f_92);
	bVar136 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_014a3", -404.1042f, 143.7228f, 1363.682f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar136, Local_264.f_92);
	bVar137 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_014a4", -415.8142f, 146.1997f, 1368.488f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar137, Local_264.f_92);
	bVar138 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_014a5", -427.5693f, 148.8504f, 1373.528f, 0.0f, 117.1061f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar138, Local_264.f_92);
	bVar139 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_014a6", -437.1962f, 150.5173f, 1376.032f, 0.0f, 129.7249f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar139, Local_264.f_92);
	bVar140 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_015a", -444.9717f, 151.5239f, 1381.026f, 0.0f, 151.4998f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar140, Local_264.f_92);
	bVar141 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_015a1", -455.3f, 152.2225f, 1388.534f, 0.0f, 151.4998f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar141, Local_264.f_92);
	bVar142 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_015a2", -462.6055f, 152.316f, 1400.068f, 0.0f, 168.9092f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar142, Local_264.f_92);
	bVar143 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_015a3", -467.226f, 152.4003f, 1417.087f, 0.0f, 179.736f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar143, Local_264.f_92);
	bVar144 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_015a4", -467.896f, 151.4382f, 1433.753f, 0.0f, 179.736f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar144, Local_264.f_92);
	bVar145 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_015a5", -470.7893f, 149.1856f, 1447.765f, 0.0f, 179.736f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar145, Local_264.f_92);
	bVar146 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_015a6", -468.7711f, 147.8432f, 1461.389f, 0.0f, 197.2826f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar146, Local_264.f_92);
	bVar147 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a", -467.6786f, 147.806f, 1468.492f, 0.0f, 202.776f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar147, Local_264.f_92);
	bVar148 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a1", -464.6554f, 147.9587f, 1479.302f, 0.0f, 202.776f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar148, Local_264.f_92);
	bVar149 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a2", -462.4832f, 148.3879f, 1488.641f, 0.0f, 202.776f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar149, Local_264.f_92);
	bVar150 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a3", -461.8709f, 148.9132f, 1500.566f, 0.0f, 202.776f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar150, Local_264.f_92);
	bVar151 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a4", -459.6885f, 149.2531f, 1512.85f, 0.0f, 209.9397f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar151, Local_264.f_92);
	bVar152 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a5", -454.116f, 149.102f, 1526.345f, 0.0f, 216.2616f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar152, Local_264.f_92);
	bVar153 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a6", -442.3364f, 148.074f, 1535.116f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar153, Local_264.f_92);
	bVar154 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a7", -437.3608f, 148.5942f, 1551.802f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar154, Local_264.f_92);
	bVar155 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a8", -441.8036f, 149.704f, 1566.609f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar155, Local_264.f_92);
	bVar156 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a9", -428.7825f, 150.9805f, 1576.624f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar156, Local_264.f_92);
	bVar157 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a10", -430.1388f, 151.4307f, 1594.022f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar157, Local_264.f_92);
	bVar158 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a11", -417.308f, 151.0234f, 1610.499f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar158, Local_264.f_92);
	bVar159 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a12", -423.8376f, 151.2982f, 1625.149f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar159, Local_264.f_92);
	bVar160 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a13", -412.4333f, 151.3725f, 1638.915f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar160, Local_264.f_92);
	bVar161 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_016a14", -420.4897f, 152.1491f, 1650.213f, 0.0f, 197.2229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar161, Local_264.f_92);
	Local_264.f_96 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 100[06]) = { -408.0346f, 153.2402f, 1675.915f };
	*(&Local_264 + 100[06] + 12) = { 0.0f, -361.6438f, 0.0f };
	bVar162 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -408.0346f, 153.2402f, 1675.915f, 0.0f, -361.6438f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar162, Local_264.f_96);
	Local_264.f_128 = CREATE_OBJECTSET_IN_LAYOUT("mp_Dir_MarkersSet", Local_264, 8, 0);
	bVar163 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_1", -53.627f, 114.4083f, 1789.899f, 0.0f, -274.805f, 0.0f);
	DECOR_SET_BOOL(bVar163, "dirRight", false);
	DECOR_SET_INT(bVar163, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar163, Local_264.f_128);
	bVar164 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_2", -103.1493f, 118.3413f, 1729.825f, 0.0f, -455.7697f, 0.0f);
	DECOR_SET_BOOL(bVar164, "dirRight", true);
	DECOR_SET_INT(bVar164, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar164, Local_264.f_128);
	bVar165 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_3", -44.49263f, 114.2507f, 1750.89f, 0.0f, -196.0577f, 0.0f);
	DECOR_SET_BOOL(bVar165, "dirRight", false);
	DECOR_SET_INT(bVar165, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar165, Local_264.f_128);
	bVar166 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_4", -84.75284f, 112.0368f, 1240.371f, 0.0f, -542.7737f, 0.0f);
	DECOR_SET_BOOL(bVar166, "dirRight", false);
	DECOR_SET_INT(bVar166, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar166, Local_264.f_128);
}

void Function_61(int iParam0, int iParam1) //Position: 0x5095 / 20629
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

void Function_62() //Position: 0x50DE / 20702
{
	while (!IS_EXITFLAG_SET())
	{
		if (Function_48())
		{
			Function_36(6251, 5639);
		}
		else
		{
			Function_36(3761, 976);
		}
		WAIT(false);
	}
	return;
}

bool Function_63() //Position: 0x510D / 20749
{
	return Function_64(2);
}

int Function_64(var uParam0) //Position: 0x5117 / 20759
{
	return Function_22(StackVal, uParam0);
}

