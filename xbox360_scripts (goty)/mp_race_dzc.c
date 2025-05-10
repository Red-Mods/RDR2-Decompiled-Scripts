//Decompiled with MagicRDR v1.0
//Function Count : 65
//Statics Count : 301
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
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
		ENABLE_CHILD_SECTOR("dlc_dzc_race01x");
		Local_134.f_500 = 1;
		Function_59(0, 1);
		Function_59(1, 2);
		Function_58(0, TO_FLOAT(19));
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
		if (Function_60() != 4294967295)
		{
			Function_2(1, 0, 0);
		}
	}
	DISABLE_CHILD_SECTOR("dlc_dzc_race01x");
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xA0 / 160
{
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0, int iParam1, int iParam2) //Position: 0xAC / 172
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

void Function_3(int iParam0, bool bParam1, bool bParam2) //Position: 0x192 / 402
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

void Function_4() //Position: 0x30B / 779
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_5(bool bParam0) //Position: 0x317 / 791
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

void Function_6(int iParam0) //Position: 0x35D / 861
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

void Function_7() //Position: 0x3A3 / 931
{
	if (!Function_50(1, 1))
	{
		if (Function_48())
		{
			Function_36(6252, 5640);
		}
		else
		{
			Function_36(3762, 977);
		}
	}
	return;
}

int Function_8(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3D1 / 977
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

void Function_9(bool bParam0, int iParam1) //Position: 0x60F / 1551
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

struct<16> Function_10(var uParam0) //Position: 0x83C / 2108
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

int Function_11(int iParam0) //Position: 0x8AD / 2221
{
	return Function_12(0, iParam0);
}

int Function_12(int iParam0, bool bParam1) //Position: 0x8B9 / 2233
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

bool Function_13(bool bParam0) //Position: 0x922 / 2338
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

var Function_14(int iParam0) //Position: 0x9C3 / 2499
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_15(int iParam0, bool bParam1) //Position: 0x9D3 / 2515
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

var Function_16(int iParam0) //Position: 0xA3A / 2618
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0xA4A / 2634
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA5B / 2651
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

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0xAC0 / 2752
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

var Function_20(int iParam0) //Position: 0xB41 / 2881
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

bool Function_21(int iParam0) //Position: 0xE5A / 3674
{
	return Function_22(Global_76905.f_132, iParam0);
}

int Function_22(var uParam0, int iParam1) //Position: 0xE6B / 3691
{
	return (uParam0 && iParam1) == 0;
}

int Function_23(int iParam0) //Position: 0xE78 / 3704
{
	return Function_15(0, iParam0);
}

void Function_24(bool bParam0, int iParam1, char* cParam2) //Position: 0xE84 / 3716
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

bool Function_25() //Position: 0xEA5 / 3749
{
	return Function_21(32768);
}

int Function_26() //Position: 0xEB2 / 3762
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

void Function_27() //Position: 0xF8F / 3983
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

void Function_28(int iParam0, bool bParam1, int iParam2) //Position: 0xFCC / 4044
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

void Function_29(var uParam0, int iParam1) //Position: 0xFF4 / 4084
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1007 / 4103
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_31(bool bParam0) //Position: 0x1016 / 4118
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

void Function_32(bool bParam0) //Position: 0x1097 / 4247
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

struct<64> Function_33(var uParam0) //Position: 0x1120 / 4384
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_34(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1134 / 4404
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

int Function_35(bool bParam0, bool bParam1) //Position: 0x1179 / 4473
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

void Function_36(int iParam0, int iParam1) //Position: 0x11AD / 4525
{
	Function_37(iParam0, iParam1, 5633);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x11BE / 4542
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

void Function_38() //Position: 0x1357 / 4951
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

void Function_39(var uParam0, var uParam1, int iParam2) //Position: 0x1460 / 5216
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

void Function_40(bool bParam0) //Position: 0x15D8 / 5592
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_28(16384, 0, 1);
	return;
}

void Function_41() //Position: 0x15F2 / 5618
{
	Function_28(32768, 1, 0);
	return;
}

int Function_42() //Position: 0x1601 / 5633
{
	return 1;
}

int Function_43(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x1608 / 5640
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

void Function_44(bool bParam0, bool bParam1) //Position: 0x17A6 / 6054
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

var Function_45(bool bParam0) //Position: 0x17D9 / 6105
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

bool Function_46(bool bParam0) //Position: 0x1856 / 6230
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_13(bParam0);
}

int Function_47() //Position: 0x186C / 6252
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

bool Function_48() //Position: 0x18FD / 6397
{
	return Function_49(4);
}

int Function_49(int iParam0) //Position: 0x1907 / 6407
{
	return Function_22((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_50(int iParam0, bool bParam1) //Position: 0x191A / 6426
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x193A / 6458
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

void Function_52(int iParam0, int iParam1) //Position: 0x196B / 6507
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_6(iParam0);
	Function_5(iVar0);
	PRINTNL();
	Function_3(iParam0, iVar0, iParam1);
	return;
}

void Function_53(int iParam0) //Position: 0x1990 / 6544
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

void Function_54(int iParam0) //Position: 0x1A52 / 6738
{
	Function_55(8, iParam0);
	return;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x1A5F / 6751
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

void Function_56(int iParam0) //Position: 0x1A87 / 6791
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x1A95 / 6805
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

void Function_58(int iParam0, int iParam1) //Position: 0x1ABD / 6845
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x1ADE / 6878
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

struct<272> Function_60() //Position: 0x1AFF / 6911
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
	
	Function_61(4, 1);
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_DZC_layout");
	Local_264.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointstart", 2, -713.7844f, 11.90321f, 3755.511f, 0.0f, -383.6687f, 0.0f, 114.5977f, 19.96502f, 54.50048f);
	DECOR_SET_INT((*&Local_264 + 4)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[0]);
	(*&Local_264 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint1", 2, -610.2545f, 12.9171f, 3759.486f, 0.0f, -267.3798f, 0.0f, 93.84852f, 20.75001f, 66.39968f);
	DECOR_SET_INT((*&Local_264 + 4)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[1]);
	(*&Local_264 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint2", 2, -544.3674f, 17.64004f, 3799.468f, 0.0f, -313.7079f, 0.0f, 95.16315f, 10.01146f, 61.37272f);
	DECOR_SET_INT((*&Local_264 + 4)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[2]);
	(*&Local_264 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint3", 2, -496.2074f, 18.4433f, 3878.504f, 0.0f, -149.9308f, 0.0f, 122.4785f, 9.848449f, 63.43259f);
	DECOR_SET_INT((*&Local_264 + 4)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[3]);
	(*&Local_264 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint4", 2, -450.2456f, 20.56453f, 3916.758f, 0.06682768f, -114.8079f, -0.1042715f, 102.6678f, 21.50336f, 54.62568f);
	DECOR_SET_INT((*&Local_264 + 4)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[4]);
	(*&Local_264 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint5", 2, -414.6682f, 20.77549f, 4071.542f, 0.0f, -150.96f, 0.0f, 69.88697f, 23.58289f, 55.8762f);
	DECOR_SET_INT((*&Local_264 + 4)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[5]);
	(*&Local_264 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint6", 2, -438.0166f, 20.06084f, 4121.948f, 0.0f, -212.8281f, 0.0f, 101.0963f, 12.19492f, 52.61808f);
	DECOR_SET_INT((*&Local_264 + 4)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[6]);
	(*&Local_264 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint7", 2, -423.8618f, 17.71842f, 4196.847f, -0.1831186f, -162.3017f, 0.03526188f, 117.2454f, 11.8598f, 63.89721f);
	DECOR_SET_INT((*&Local_264 + 4)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[7]);
	(*&Local_264 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint8", 2, -465.0073f, 16.44833f, 4250.912f, 0.0f, -222.241f, 0.0f, 106.0426f, 13.01255f, 62.15385f);
	DECOR_SET_INT((*&Local_264 + 4)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[8]);
	(*&Local_264 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint9", 2, -547.425f, 13.85109f, 4232.525f, 0.0f, -283.2464f, 0.0f, 92.24504f, 14.07785f, 63.43817f);
	DECOR_SET_INT((*&Local_264 + 4)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[9]);
	(*&Local_264 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint10", 2, -645.4633f, 10.95851f, 4241.717f, 0.0f, -260.0005f, 0.0f, 95.75374f, 12.77207f, 65.3657f);
	DECOR_SET_INT((*&Local_264 + 4)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[10]);
	(*&Local_264 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint11", 2, -760.0583f, 10.92612f, 4299.723f, 0.0f, -245.6022f, 0.0f, 95.75374f, 12.77207f, 68.96087f);
	DECOR_SET_INT((*&Local_264 + 4)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[11]);
	(*&Local_264 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint12", 2, -857.3388f, 7.230417f, 4355.987f, 0.0f, -227.3509f, 0.0f, 190.8102f, 12.77207f, 65.19509f);
	DECOR_SET_INT((*&Local_264 + 4)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[12]);
	(*&Local_264 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint13", 2, -931.7994f, 5.938951f, 4361.776f, 0.0f, -272.5668f, 0.0f, 190.8102f, 12.77207f, 58.80213f);
	DECOR_SET_INT((*&Local_264 + 4)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[13]);
	(*&Local_264 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint14", 2, -990.2197f, 5.938984f, 4295.324f, 0.0f, -311.3646f, 0.0f, 138.453f, 12.77207f, 67.6887f);
	DECOR_SET_INT((*&Local_264 + 4)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[14]);
	(*&Local_264 + 4)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint15", 2, -1048.816f, 5.840975f, 4211.043f, 0.0f, -344.519f, 0.0f, 138.453f, 12.77207f, 66.98854f);
	DECOR_SET_INT((*&Local_264 + 4)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[15]);
	(*&Local_264 + 4)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint16", 2, -965.7385f, 5.886481f, 4121.964f, 0.0f, -402.6181f, 0.0f, 138.453f, 12.77207f, 67.2838f);
	DECOR_SET_INT((*&Local_264 + 4)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[16]);
	(*&Local_264 + 4)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint17", 2, -952.3331f, 6.409627f, 3995.117f, 0.0f, -359.4965f, 0.0f, 138.453f, 12.77207f, 63.22266f);
	DECOR_SET_INT((*&Local_264 + 4)[17], "pointNum", 17);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[17]);
	(*&Local_264 + 4)[18] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint18", 2, -909.4458f, 6.789422f, 3908.601f, 0.0f, -395.3363f, 0.0f, 127.8304f, 12.77207f, 62.77221f);
	DECOR_SET_INT((*&Local_264 + 4)[18], "pointNum", 18);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[18]);
	(*&Local_264 + 4)[19] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -781.8373f, 16.24382f, 3846.513f, -181.3493f, 56.54786f, -180.5433f, 150.8669f, 19.67244f, 3.256881f);
	DECOR_SET_INT((*&Local_264 + 4)[19], "pointNum", 19);
	DECOR_SET_BOOL((*&Local_264 + 4)[19], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[19]);
	Local_264.f_92 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 96[06]) = { -775.8788f, 10.43852f, 3841.177f };
	*(&Local_264 + 96[06] + 12) = { 0.0f, -400.7785f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -775.8788f, 10.43852f, 3841.177f, 0.0f, -400.7785f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_92);
	Local_264.f_124 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -766.7652f, 10.7452f, 3833.354f, 2.127434f, -29.06506f, -1.28781f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_124);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -768.5991f, 10.76299f, 3831.853f, 2.123008f, -28.4449f, -1.180979f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_124);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -770.7167f, 10.77529f, 3830.338f, 2.283318f, -35.16742f, -1.490295f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_124);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -772.904f, 10.85083f, 3828.697f, 2.170387f, -31.88876f, -1.492866f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_124);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -771.1343f, 10.59916f, 3839.666f, 2.150933f, -30.42635f, -1.376083f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_124);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -772.9545f, 10.57636f, 3838.269f, 2.200372f, -33.44103f, -1.585879f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_124);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -775.313f, 10.58783f, 3836.607f, 2.228696f, -34.52754f, -1.636549f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_124);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -777.6298f, 10.60946f, 3834.882f, 2.361465f, -37.97964f, -1.693382f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_124);
	Local_264.f_128 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "nFireStart", -713.6577f, 11.88635f, 3755.969f, 176.0945f, 81.83194f, 176.1602f);
	DECOR_SET_INT(bVar10, "checkpoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_128);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire1", -610.2356f, 12.9171f, 3759.869f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar11, "checkpoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_128);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire2", -544.0137f, 16.06109f, 3801.7f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar12, "checkpoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_128);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire3", -496.4089f, 18.4433f, 3879.757f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar13, "checkpoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_128);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire4", -450.337f, 20.56453f, 3917.929f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar14, "checkpoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_128);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire5", -414.3058f, 20.85166f, 4071.483f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar15, "checkpoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_128);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire6", -438.3595f, 19.06802f, 4123.507f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar16, "checkpoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_128);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire7", -424.1474f, 17.71842f, 4198.002f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "checkpoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_128);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire8", -465.081f, 16.44833f, 4252.315f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar18, "checkpoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_128);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire9", -547.6116f, 13.85109f, 4234.025f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar19, "checkpoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_128);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire10", -645.2439f, 10.95851f, 4243.383f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar20, "checkpoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_128);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire11", -760.2359f, 10.92612f, 4300.767f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar21, "checkpoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_128);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire12", -856.7551f, 7.226027f, 4357.076f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar22, "checkpoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_128);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire13", -932.5313f, 5.938951f, 4363.468f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar23, "checkpoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_128);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire14", -990.7137f, 5.938984f, 4296.871f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar24, "checkpoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_128);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire15", -1048.922f, 5.841245f, 4212.27f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar25, "checkpoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_128);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire16", -965.922f, 5.889313f, 4123.187f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar26, "checkpoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_128);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire17", -952.4701f, 6.409627f, 3996.285f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar27, "checkpoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_128);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire18", -909.6799f, 6.789422f, 3909.615f, -3.00237f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar28, "checkpoint", 18);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_128);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "FireFinish", -783.114f, 9.902624f, 3847.518f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar29, "checkpoint", 19);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_128);
	Local_264.f_132 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00", -764.5519f, 10.92751f, 3829.008f, 0.0f, -27.75562f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_132);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00a", -759.5688f, 11.55877f, 3808.609f, 0.0f, -38.30249f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_132);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00b", -745.9161f, 11.7987f, 3789.559f, 0.0f, -38.30249f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_132);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_0", -728.7969f, 12.4099f, 3754.978f, 0.0f, -90.85836f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_132);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0a", -694.1232f, 11.89803f, 3759.449f, 0.0f, -91.57349f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_132);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0b", -674.017f, 12.01106f, 3753.811f, 0.0f, -90.19793f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_132);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0c", -653.9827f, 12.75874f, 3759.573f, 0.0f, -92.93175f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_132);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_1", -624.892f, 12.80094f, 3755.002f, 0.0f, -104.2258f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_132);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1a", -585.6917f, 13.70228f, 3761.281f, 0.0f, -132.9908f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_132);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1b", -576.1715f, 14.70656f, 3778.215f, 0.0f, -123.8701f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_132);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_2", -552.7754f, 15.46445f, 3787.635f, 0.0f, -133.2145f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_132);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2a", -535.6304f, 16.85369f, 3819.853f, 0.0f, -146.4747f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_132);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2b", -519.0823f, 16.8962f, 3833.3f, 0.0f, -155.0071f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_132);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_3", -508.6837f, 17.03564f, 3869.071f, 0.0f, -137.4441f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_132);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3a", -478.7621f, 19.4211f, 3888.44f, 0.0f, -117.0301f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_132);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_4", -452.5334f, 20.21877f, 3900.435f, 0.0f, -173.3315f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_132);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4a", -457.3201f, 21.23596f, 3937.483f, 0.0f, -164.5799f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_132);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4b", -448.0163f, 21.5699f, 3956.519f, 0.0f, -164.246f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_132);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4c", -447.2774f, 22.31867f, 3977.314f, 0.0f, -155.7137f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_132);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4d", -433.4933f, 22.91926f, 3993.159f, 0.0f, -158.888f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_132);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4e", -431.9745f, 22.85708f, 4014.343f, 0.0f, -146.2485f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_132);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4f", -415.8545f, 21.85763f, 4028.107f, 0.0f, -159.2432f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_132);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_5", -406.8307f, 20.81904f, 4056.007f, 0.0f, -205.317f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_132);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_5a", -429.6108f, 20.78622f, 4084.641f, 0.0f, -202.2824f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_132);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_6", -440.5784f, 19.76865f, 4106.756f, 0.0f, -178.6045f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_132);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6a", -432.9618f, 18.82734f, 4142.739f, 0.0f, -166.2485f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_132);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6b", -434.607f, 18.3459f, 4164.231f, 0.0f, -157.3966f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_132);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_7", -421.5924f, 18.00625f, 4181.608f, 0.0f, -178.1401f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_132);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_7a", -425.5735f, 17.11066f, 4218.664f, 0.0f, -214.4462f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_132);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_8", -449.0579f, 16.80157f, 4247.68f, 0.0f, 106.1648f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_132);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8a", -481.8931f, 15.82569f, 4254.838f, 0.0f, 69.62348f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_132);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8b", -499.0917f, 14.74799f, 4241.747f, 0.0f, 76.72617f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_132);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_9", -532.9589f, 14.29776f, 4239.856f, 0.0f, 73.30075f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_132);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9a", -567.2689f, 12.95005f, 4226.56f, 0.0f, 87.71932f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_132);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9b", -587.3926f, 12.08929f, 4231.474f, 0.0f, 84.36102f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_132);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9c", -608.2178f, 11.39395f, 4225.268f, 0.0f, 110.598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_132);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10", -629.8868f, 10.99097f, 4238.679f, 0.0f, 110.2709f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_132);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10a", -662.8458f, 10.97538f, 4252.36f, 0.0f, 118.8973f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_132);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10b", -678.0103f, 10.95882f, 4267.865f, 0.0f, 108.7161f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_132);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10c", -699.3544f, 10.96205f, 4268.089f, 0.0f, 116.1017f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_132);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10d", -710.7515f, 10.96435f, 4282.653f, 0.0f, 102.0488f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_132);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11", -747.1234f, 10.95922f, 4291.243f, 0.0f, 116.5916f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_132);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11a", -776.8871f, 10.84699f, 4310.907f, 0.0f, 115.5096f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_132);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11b", -796.3901f, 10.48542f, 4316.08f, 0.0f, 112.4282f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_132);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11c", -813.0724f, 9.662428f, 4328.482f, 0.0f, 111.9519f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_132);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12", -847.4598f, 7.946606f, 4343.842f, 0.0f, 133.9559f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_132);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12a", -871.7048f, 6.477563f, 4371.668f, 0.0f, 110.4741f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_132);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12b", -891.4348f, 6.003046f, 4381.377f, 0.0f, 77.04291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_132);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13", -921.5112f, 5.783871f, 4376.327f, 0.0f, 45.94184f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_132);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13a", -940.2931f, 5.938952f, 4344.011f, 0.0f, 49.16006f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_132);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13b", -959.9124f, 5.950485f, 4334.794f, 0.0f, 48.12632f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_132);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14", -978.0585f, 5.959115f, 4307.202f, 0.0f, 47.65498f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_132);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14a", -1010.021f, 5.884466f, 4289.323f, 0.0f, 45.97004f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_132);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14b", -1022.354f, 5.709145f, 4270.554f, 0.0f, 57.07117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_132);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14c", -1042.676f, 5.901113f, 4262.531f, 0.0f, 382.0203f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_132);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15", -1053.773f, 5.886143f, 4230.261f, 0.0f, 346.5871f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_132);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15a", -1042.309f, 5.886146f, 4193.258f, 0.0f, 307.4392f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_132);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15b", -1024.015f, 5.77441f, 4185.054f, 0.0f, 314.3627f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_132);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15c", -1010.817f, 5.821018f, 4164.091f, 0.0f, 306.0536f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_132);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15d", -990.361f, 5.922991f, 4156.114f, 0.0f, 319.6055f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_132);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16", -971.7148f, 5.886482f, 4139.394f, 0.0f, 332.7421f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_132);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16a", -961.0706f, 5.886482f, 4103.393f, 0.0f, 347.9398f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_132);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16b", -950.6949f, 5.840602f, 4084.668f, 0.0f, -0.3497341f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_132);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16c", -957.1055f, 5.773526f, 4064.086f, 0.0f, -8.730672f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_132);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16d", -956.6329f, 5.77351f, 4044.322f, 0.0f, 0.9809494f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_132);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17", -949.4921f, 5.948122f, 4012.274f, 0.0f, 0.2577163f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_132);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17a", -953.2877f, 6.774151f, 3975.835f, 0.0f, -16.74196f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_132);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17b", -947.5693f, 6.777455f, 3956.043f, 0.0f, -28.4563f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_132);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17c", -932.4357f, 6.797883f, 3941.113f, 0.0f, -28.4563f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_132);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18", -924.7225f, 6.786396f, 3916.753f, 0.0f, 302.7908f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_132);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18a", -891.1163f, 7.368294f, 3901.649f, 0.0f, 300.984f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_132);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18b", -864.4604f, 8.155698f, 3876.521f, 0.0f, -65.41772f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_132);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18c", -828.8513f, 8.087645f, 3869.701f, 0.0f, -68.21015f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_132);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18d", -810.9904f, 8.04739f, 3858.941f, -1.826626f, 298.0992f, 1.898331f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_132);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18e", -790.2156f, 9.403564f, 3856.666f, 0.0f, -44.8373f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_132);
	Local_264.f_136 = CREATE_OBJECTSET_IN_LAYOUT("dirMarker_flagsSet", Local_264, 8, 0);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "ndirMarker", -721.46f, 11.67427f, 3751.23f, 0.0f, -184.7124f, 0.0f);
	DECOR_SET_BOOL(bVar105, "dirRight", true);
	DECOR_SET_INT(bVar105, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_136);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker1", -496.346f, 18.44814f, 3887.823f, 0.0f, -361.7137f, 0.0f);
	DECOR_SET_BOOL(bVar106, "dirRight", false);
	DECOR_SET_INT(bVar106, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_136);
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker2", -647.1108f, 10.56028f, 4236.698f, 0.0f, -471.7846f, 0.0f);
	DECOR_SET_BOOL(bVar107, "dirRight", false);
	DECOR_SET_INT(bVar107, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_136);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker3", -938.46f, 5.302194f, 4371.23f, 0.0f, -73.90874f, 0.0f);
	DECOR_SET_BOOL(bVar108, "dirRight", true);
	DECOR_SET_INT(bVar108, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_136);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker4", -1056.102f, 5.284634f, 4209.914f, 0.0f, -129.9888f, 0.0f);
	DECOR_SET_BOOL(bVar109, "dirRight", true);
	DECOR_SET_INT(bVar109, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_136);
}

void Function_61(int iParam0, int iParam1) //Position: 0x469D / 18077
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

void Function_62() //Position: 0x46E6 / 18150
{
	while (!IS_EXITFLAG_SET())
	{
		if (Function_48())
		{
			Function_36(6252, 5640);
		}
		else
		{
			Function_36(3762, 977);
		}
		WAIT(false);
	}
	return;
}

bool Function_63() //Position: 0x4715 / 18197
{
	return Function_64(2);
}

int Function_64(var uParam0) //Position: 0x471F / 18207
{
	return Function_22(StackVal, uParam0);
}

