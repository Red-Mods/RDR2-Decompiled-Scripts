//Decompiled with MagicRDR v1.0
//Function Count : 61
//Statics Count : 302
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
	struct<501> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
		Local_134.f_500 = 0;
		ENABLE_CHILD_SECTOR("dlc_arm_race01x");
		Function_59(0, 1);
		Function_59(1, 1);
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
	DISABLE_CHILD_SECTOR("arm_flags01x");
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x9D / 157
{
	RELEASE_LAYOUT_REF(Local_264);
	return;
}

void Function_2(int iParam0, int iParam1, int iParam2) //Position: 0xA9 / 169
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

void Function_3(int iParam0, bool bParam1, bool bParam2) //Position: 0x18F / 399
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

void Function_4() //Position: 0x308 / 776
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_5(bool bParam0) //Position: 0x314 / 788
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

void Function_6(int iParam0) //Position: 0x35A / 858
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

void Function_7() //Position: 0x3A0 / 928
{
	if (!Function_50(1, 1))
	{
		if (Function_48())
		{
			Function_36(6249, 5637);
		}
		else
		{
			Function_36(3759, 974);
		}
	}
	return;
}

int Function_8(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x3CE / 974
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

void Function_9(bool bParam0, int iParam1) //Position: 0x60C / 1548
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

struct<16> Function_10(var uParam0) //Position: 0x839 / 2105
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

int Function_11(int iParam0) //Position: 0x8AA / 2218
{
	return Function_12(0, iParam0);
}

int Function_12(int iParam0, bool bParam1) //Position: 0x8B6 / 2230
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

bool Function_13(bool bParam0) //Position: 0x91F / 2335
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

var Function_14(int iParam0) //Position: 0x9C0 / 2496
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_15(int iParam0, bool bParam1) //Position: 0x9D0 / 2512
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

var Function_16(int iParam0) //Position: 0xA37 / 2615
{
	return (*&Global_78480 + 132)[iParam0];
}

bool Function_17(bool bParam0, int iParam1, int iParam2) //Position: 0xA47 / 2631
{
	var uVar0;
	
	return Function_18(bParam0, iParam1, &uVar0, iParam2);
}

int Function_18(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA58 / 2648
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

bool Function_19(bool bParam0, int iParam1, bool bParam2) //Position: 0xABD / 2749
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

var Function_20(int iParam0) //Position: 0xB3E / 2878
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

bool Function_21(int iParam0) //Position: 0xE57 / 3671
{
	return Function_22(Global_76905.f_132, iParam0);
}

int Function_22(var uParam0, int iParam1) //Position: 0xE68 / 3688
{
	return (uParam0 && iParam1) == 0;
}

int Function_23(int iParam0) //Position: 0xE75 / 3701
{
	return Function_15(0, iParam0);
}

void Function_24(bool bParam0, int iParam1, char* cParam2) //Position: 0xE81 / 3713
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

bool Function_25() //Position: 0xEA2 / 3746
{
	return Function_21(32768);
}

int Function_26() //Position: 0xEAF / 3759
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

void Function_27() //Position: 0xF8C / 3980
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

void Function_28(int iParam0, bool bParam1, int iParam2) //Position: 0xFC9 / 4041
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

void Function_29(var uParam0, int iParam1) //Position: 0xFF1 / 4081
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0x1004 / 4100
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_31(bool bParam0) //Position: 0x1013 / 4115
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

void Function_32(bool bParam0) //Position: 0x1094 / 4244
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

struct<64> Function_33(var uParam0) //Position: 0x111D / 4381
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_34(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_34(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1131 / 4401
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

int Function_35(bool bParam0, bool bParam1) //Position: 0x1176 / 4470
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

void Function_36(int iParam0, int iParam1) //Position: 0x11AA / 4522
{
	Function_37(iParam0, iParam1, 5630);
	return;
}

void Function_37(var uParam0, var uParam1, int iParam2) //Position: 0x11BB / 4539
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

void Function_38() //Position: 0x1354 / 4948
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

void Function_39(var uParam0, var uParam1, int iParam2) //Position: 0x145D / 5213
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

void Function_40(bool bParam0) //Position: 0x15D5 / 5589
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_28(16384, 0, 1);
	return;
}

void Function_41() //Position: 0x15EF / 5615
{
	Function_28(32768, 1, 0);
	return;
}

int Function_42() //Position: 0x15FE / 5630
{
	return 1;
}

int Function_43(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x1605 / 5637
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

void Function_44(bool bParam0, bool bParam1) //Position: 0x17A3 / 6051
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

var Function_45(bool bParam0) //Position: 0x17D6 / 6102
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

bool Function_46(bool bParam0) //Position: 0x1853 / 6227
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_13(bParam0);
}

int Function_47() //Position: 0x1869 / 6249
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

bool Function_48() //Position: 0x18FA / 6394
{
	return Function_49(4);
}

int Function_49(int iParam0) //Position: 0x1904 / 6404
{
	return Function_22((&Global_83591 + 140)->f_56, iParam0);
}

bool Function_50(int iParam0, bool bParam1) //Position: 0x1917 / 6423
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_51(var uParam0, int iParam1) //Position: 0x1937 / 6455
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

void Function_52(int iParam0, int iParam1) //Position: 0x1968 / 6504
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_6(iParam0);
	Function_5(iVar0);
	PRINTNL();
	Function_3(iParam0, iVar0, iParam1);
	return;
}

void Function_53(int iParam0) //Position: 0x198D / 6541
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

void Function_54(int iParam0) //Position: 0x1A4F / 6735
{
	Function_55(8, iParam0);
	return;
}

void Function_55(int iParam0, bool bParam1) //Position: 0x1A5C / 6748
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

void Function_56(int iParam0) //Position: 0x1A84 / 6788
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x1A92 / 6802
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

void Function_58(int iParam0, int iParam1) //Position: 0x1ABA / 6842
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x1ADB / 6875
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

vector3 Function_60() //Position: 0x1AFC / 6908
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
	
	Unknown_Function();
	uVar0 = uVar0;
	Local_264 = CREATE_LAYOUT("MP_Race_ARM_layout");
	Local_264.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_264, "Checkpoints_set");
	(*&Local_264 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointstart", 2, -2140.365f, 17.56f, 2611.401f, 0.0f, -269.1648f, 0.0f, 38.5121f, 11.76946f, 11.11779f);
	DECOR_SET_INT((*&Local_264 + 4)[0], "pointNum", false);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[0]);
	(*&Local_264 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint2", 2, -2182.332f, 17.68f, 2601.821f, -0.5295877f, 18.00386f, 0.01459097f, 21.40451f, 8.75667f, 12.9848f);
	DECOR_SET_INT((*&Local_264 + 4)[1], "pointNum", true);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[1]);
	(*&Local_264 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint3", 2, -2183.54f, 17.95f, 2552.76f, 0.0f, 0.0f, 0.0f, 51.24722f, 8.943779f, 16.90384f);
	DECOR_SET_INT((*&Local_264 + 4)[2], "pointNum", 2);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[2]);
	(*&Local_264 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint4", 2, -2217.0f, 19.62f, 2503.0f, 0.0f, 43.6232f, 0.0f, 103.2864f, 11.51465f, 21.33252f);
	DECOR_SET_INT((*&Local_264 + 4)[3], "pointNum", 3);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[3]);
	(*&Local_264 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint5", 2, -2276.72f, 20.67f, 2448.25f, 0.534417f, 46.256f, 2.460193f, 98.5863f, 12.10012f, 27.37354f);
	DECOR_SET_INT((*&Local_264 + 4)[4], "pointNum", 4);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[4]);
	(*&Local_264 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint6", 2, -2395.226f, 19.70367f, 2405.956f, 0.0f, 68.66947f, 0.0f, 71.05206f, 6.651261f, 24.4852f);
	DECOR_SET_INT((*&Local_264 + 4)[5], "pointNum", 5);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[5]);
	(*&Local_264 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint7", 2, -2456.997f, 21.78535f, 2367.404f, 0.0f, 67.23887f, 0.0f, 121.2553f, 9.7894f, 27.40232f);
	DECOR_SET_INT((*&Local_264 + 4)[6], "pointNum", 6);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[6]);
	(*&Local_264 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint8", 2, -2536.404f, 24.13169f, 2341.191f, 0.0f, 65.67643f, 0.0f, 121.8686f, 10.6025f, 31.08531f);
	DECOR_SET_INT((*&Local_264 + 4)[7], "pointNum", 7);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[7]);
	(*&Local_264 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint9", 2, -2605.485f, 28.04323f, 2304.135f, -2.000599f, 428.3793f, 0.4844137f, 151.8316f, 12.33072f, 33.11679f);
	DECOR_SET_INT((*&Local_264 + 4)[8], "pointNum", 8);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[8]);
	(*&Local_264 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint10", 2, -2683.705f, 36.97296f, 2333.372f, 0.0f, -52.33146f, 0.0f, 136.8186f, 7.430562f, 34.06148f);
	DECOR_SET_INT((*&Local_264 + 4)[9], "pointNum", 9);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[9]);
	(*&Local_264 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint11", 2, -2765.93f, 43.01558f, 2391.525f, 0.0f, -28.03056f, 0.0f, 136.8186f, 7.430562f, 33.22049f);
	DECOR_SET_INT((*&Local_264 + 4)[10], "pointNum", 10);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[10]);
	(*&Local_264 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint12", 2, -2761.669f, 39.00298f, 2451.79f, 178.9131f, -13.94408f, -177.9748f, 119.9636f, 10.57637f, 32.23061f);
	DECOR_SET_INT((*&Local_264 + 4)[11], "pointNum", 11);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[11]);
	(*&Local_264 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint13", 2, -2715.626f, 43.03846f, 2560.0f, 0.0f, 180.4052f, 0.0f, 105.0392f, 22.7267f, 38.06819f);
	DECOR_SET_INT((*&Local_264 + 4)[12], "pointNum", 12);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[12]);
	(*&Local_264 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint14", 2, -2715.251f, 40.00686f, 2641.768f, 0.0f, 193.6151f, 0.0f, 50.76641f, 15.7191f, 22.03807f);
	DECOR_SET_INT((*&Local_264 + 4)[13], "pointNum", 13);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[13]);
	(*&Local_264 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint15", 2, -2664.979f, 35.25905f, 2694.04f, 0.0f, 238.6486f, 0.0f, 96.7284f, 14.84547f, 17.48929f);
	DECOR_SET_INT((*&Local_264 + 4)[14], "pointNum", 14);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[14]);
	(*&Local_264 + 4)[15] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint16", 2, -2589.039f, 32.97941f, 2665.674f, 0.0f, -76.16282f, 0.0f, 88.80727f, 13.85719f, 23.62563f);
	DECOR_SET_INT((*&Local_264 + 4)[15], "pointNum", 15);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[15]);
	(*&Local_264 + 4)[16] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint17", 2, -2512.763f, 25.1669f, 2653.144f, 0.0f, 268.8199f, 0.0f, 85.26299f, 12.7437f, 25.65852f);
	DECOR_SET_INT((*&Local_264 + 4)[16], "pointNum", 16);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[16]);
	(*&Local_264 + 4)[17] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint18", 2, -2388.008f, 15.41078f, 2721.676f, 0.0f, 270.7781f, 0.0f, 96.20945f, 17.7375f, 23.92267f);
	DECOR_SET_INT((*&Local_264 + 4)[17], "pointNum", 17);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[17]);
	(*&Local_264 + 4)[18] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpoint19", 2, -2234.094f, 15.80809f, 2695.288f, 0.0f, 289.8248f, 0.0f, 95.25643f, 8.048439f, 32.90817f);
	DECOR_SET_INT((*&Local_264 + 4)[18], "pointNum", 18);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[18]);
	(*&Local_264 + 4)[19] = CREATE_VOLUME_IN_LAYOUT(Local_264, "checkpointfinish", 2, -2180.484f, 16.19941f, 2628.274f, 0.0f, 180.467f, 0.0f, 32.00591f, 11.70984f, 5.736727f);
	DECOR_SET_INT((*&Local_264 + 4)[19], "pointNum", 19);
	DECOR_SET_BOOL((*&Local_264 + 4)[19], "finishline", true);
	ADD_TO_VOLUME_SET(Local_264.f_88, (*&Local_264 + 4)[19]);
	Local_264.f_92 = CREATE_POINT_IN_LAYOUT(Local_264, "f_RaceStarter", -2104.106f, 16.44941f, 2610.79f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(Local_264.f_92, "checkpoint", 24);
	Local_264.f_96 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagGroupSet", Local_264, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_264, "nFireStart", -2140.351f, 16.11347f, 2611.401f, 0.0f, -269.1648f, 0.0f);
	DECOR_SET_INT(bVar1, "checkpoint", false);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_264.f_96);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire1", -2181.527f, 16.30049f, 2604.299f, -0.5295877f, 18.00386f, 0.01459097f);
	DECOR_SET_INT(bVar2, "checkpoint", true);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_264.f_96);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire2", -2183.54f, 16.48789f, 2552.543f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar3, "checkpoint", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_264.f_96);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire3", -2217.0f, 18.16324f, 2503.0f, 0.0f, 60.93492f, 0.0f);
	DECOR_SET_INT(bVar4, "checkpoint", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_264.f_96);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire4", -2276.666f, 19.16981f, 2448.24f, 0.7204696f, 59.1436f, 2.692605f);
	DECOR_SET_INT(bVar5, "checkpoint", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_264.f_96);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire5", -2394.929f, 19.47565f, 2405.911f, 6.253519f, 68.82066f, 6.709711f);
	DECOR_SET_INT(bVar6, "checkpoint", 5);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_264.f_96);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire6", -2460.875f, 21.77946f, 2367.112f, 0.0f, 67.23887f, 0.0f);
	DECOR_SET_INT(bVar7, "checkpoint", 6);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_264.f_96);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire7", -2535.882f, 24.05567f, 2340.825f, 0.0f, 65.67643f, 0.0f);
	DECOR_SET_INT(bVar8, "checkpoint", 7);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_264.f_96);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire8", -2605.496f, 28.29926f, 2304.132f, -10.37792f, 445.9053f, -8.007648f);
	DECOR_SET_INT(bVar9, "checkpoint", 8);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_264.f_96);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire9", -2685.744f, 35.48892f, 2330.998f, 0.0f, -46.85307f, 0.0f);
	DECOR_SET_INT(bVar10, "checkpoint", 9);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_264.f_96);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire10", -2765.738f, 42.94381f, 2392.066f, 0.0f, -20.62195f, 0.0f);
	DECOR_SET_INT(bVar11, "checkpoint", 10);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_264.f_96);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire11", -2764.133f, 39.00367f, 2446.28f, 178.6537f, -38.41464f, -177.4001f);
	DECOR_SET_INT(bVar12, "checkpoint", 11);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_264.f_96);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire12", -2715.919f, 43.03295f, 2560.0f, 0.0f, 201.1875f, 0.0f);
	DECOR_SET_INT(bVar13, "checkpoint", 12);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_264.f_96);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire13", -2714.737f, 40.00686f, 2641.495f, 0.0f, 197.4828f, 0.0f);
	DECOR_SET_INT(bVar14, "checkpoint", 13);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_264.f_96);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire14", -2664.926f, 35.83194f, 2693.007f, 0.0f, 197.4828f, 0.0f);
	DECOR_SET_INT(bVar15, "checkpoint", 14);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_264.f_96);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire15", -2586.426f, 32.83665f, 2662.98f, 0.0f, -61.22588f, 0.0f);
	DECOR_SET_INT(bVar16, "checkpoint", 15);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_264.f_96);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire16", -2512.763f, 25.1669f, 2653.144f, 0.0f, 254.697f, 0.0f);
	DECOR_SET_INT(bVar17, "checkpoint", 16);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_264.f_96);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire17", -2387.951f, 15.41078f, 2721.126f, 0.0f, 264.1257f, 0.0f);
	DECOR_SET_INT(bVar18, "checkpoint", 17);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_264.f_96);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_264, "Fire18", -2234.93f, 15.404f, 2697.056f, 0.0f, 315.1193f, 0.0f);
	DECOR_SET_INT(bVar19, "checkpoint", 18);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_264.f_96);
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_264, "FireFinish", -2180.497f, 16.19941f, 2626.732f, 0.0f, 180.467f, 0.0f);
	DECOR_SET_INT(bVar20, "checkpoint", 19);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_264.f_96);
	Local_264.f_100 = CREATE_OBJECTSET_IN_LAYOUT("StartPositionFlagsSet", Local_264, 8, 0);
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos1", -2103.974f, 16.44941f, 2613.158f, 0.0f, -267.9319f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_264.f_100);
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos2", -2104.018f, 16.44941f, 2614.864f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_264.f_100);
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos3", -2103.992f, 16.44941f, 2616.646f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_264.f_100);
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos4", -2104.077f, 16.44941f, 2611.655f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_264.f_100);
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos5", -2103.997f, 16.44941f, 2610.001f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_264.f_100);
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos6", -2104f, 16.44941f, 2608.316f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_264.f_100);
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos7", -2103.97f, 16.44941f, 2606.504f, 0.0f, 84.89618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_264.f_100);
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_264, "nStartPos8", -2103.99f, 16.44941f, 2604.824f, 0.0f, -272.4188f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_264.f_100);
	Local_264.f_104 = CREATE_OBJECTSET_IN_LAYOUT("mp_respawn_flagsSet", Local_264, 8, 0);
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00", -2112.034f, 16.12042f, 2614.381f, 0.0f, 89.61022f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_264.f_104);
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_00a", -2128f, 16.09741f, 2607.119f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_264.f_104);
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_0", -2144f, 16.09741f, 2614.832f, 0.0f, 91.64747f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_264.f_104);
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0a", -2164.036f, 16.28137f, 2615.1f, 0.0f, 68.96487f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_264.f_104);
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_0b", -2185.07f, 16.4563f, 2613.169f, 0.0f, -2.924261f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_264.f_104);
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_1", -2178.973f, 16.28197f, 2591.705f, 0.0f, 4.868393f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_264.f_104);
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_1a", -2178.659f, 16.25675f, 2570.877f, 0.0f, 6.211447f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_264.f_104);
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_2", -2179.76f, 16.46156f, 2554.893f, 0.0f, 19.46957f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_264.f_104);
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2a", -2187.497f, 16.31467f, 2530.05f, 0.0f, 46.34436f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_264.f_104);
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_2b", -2203.995f, 16.64143f, 2512.644f, 0.0f, 52.96003f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_264.f_104);
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_3", -2213.168f, 17.69039f, 2508.306f, 0.0f, 46.78394f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_264.f_104);
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3a", -2232.15f, 17.90892f, 2484.205f, 0.0f, 50.53f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_264.f_104);
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_3b", -2255.726f, 18.10698f, 2468.363f, 0.0f, 46.32618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_264.f_104);
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_4", -2268.953f, 18.71377f, 2451.762f, -182.544f, 120.7035f, -179.2732f);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_264.f_104);
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4a", -2295.427f, 18.9829f, 2436.105f, -184.5302f, 106.6748f, -181.4258f);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_264.f_104);
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4b", -2316.863f, 18.6072f, 2433.887f, -3.827863f, 70.1545f, -0.6865456f);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_264.f_104);
	bVar45 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4c", -2335.664f, 18.88086f, 2426.089f, -5.414834f, 76.10353f, -2.342646f);
	ADD_OBJECT_TO_OBJECTSET(bVar45, Local_264.f_104);
	bVar46 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4d", -2358.652f, 18.5562f, 2417.315f, -5.113889f, 75.27021f, -2.032069f);
	ADD_OBJECT_TO_OBJECTSET(bVar46, Local_264.f_104);
	bVar47 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_4e", -2378.197f, 19.02061f, 2413.61f, -3.085508f, 65.09888f, 0.1154584f);
	ADD_OBJECT_TO_OBJECTSET(bVar47, Local_264.f_104);
	bVar48 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_5", -2384.94f, 19.34319f, 2408.889f, -183.5222f, 111.6479f, -180.3598f);
	ADD_OBJECT_TO_OBJECTSET(bVar48, Local_264.f_104);
	bVar49 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_5a", -2410.895f, 20.43247f, 2398.151f, -182.3119f, 124.1816f, -178.9983f);
	ADD_OBJECT_TO_OBJECTSET(bVar49, Local_264.f_104);
	bVar50 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_5b", -2429.23f, 21.65614f, 2382.692f, -2.321286f, 55.97486f, 0.9904101f);
	ADD_OBJECT_TO_OBJECTSET(bVar50, Local_264.f_104);
	bVar51 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_6", -2445.83f, 22.07508f, 2370.698f, -3.901779f, 70.54518f, -0.7650317f);
	ADD_OBJECT_TO_OBJECTSET(bVar51, Local_264.f_104);
	bVar52 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6a", -2476.291f, 21.93625f, 2359.815f, -14.63292f, 84.85291f, -11.66183f);
	ADD_OBJECT_TO_OBJECTSET(bVar52, Local_264.f_104);
	bVar53 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6b", -2495.918f, 21.97107f, 2359.934f, -3.740941f, 69.67398f, -0.5939952f);
	ADD_OBJECT_TO_OBJECTSET(bVar53, Local_264.f_104);
	bVar54 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_6c", -2514.619f, 22.65596f, 2351.98f, 0.0f, 66.2033f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar54, Local_264.f_104);
	bVar55 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_7", -2526.067f, 23.58878f, 2348.03f, 0.0f, 56.27835f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar55, Local_264.f_104);
	bVar56 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_7a", -2549.982f, 26.23877f, 2326.515f, 0.0f, 48.0322f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar56, Local_264.f_104);
	bVar57 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_7b", -2564.97f, 26.07425f, 2312.88f, 0.0f, 59.24579f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar57, Local_264.f_104);
	bVar58 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_7c", -2582.648f, 27.00396f, 2302.258f, 0.0f, 90.05192f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar58, Local_264.f_104);
	bVar59 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_8", -2594.874f, 27.64019f, 2302.108f, 0.0f, 94.44112f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar59, Local_264.f_104);
	bVar60 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8a", -2626.651f, 29.57357f, 2306.844f, 0.0f, 97.66944f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar60, Local_264.f_104);
	bVar61 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8b", -2646.872f, 31.27586f, 2306.999f, 0.0f, 109.8161f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar61, Local_264.f_104);
	bVar62 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_8c", -2670.164f, 32.44531f, 2313.664f, 0.0f, 135.8797f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar62, Local_264.f_104);
	bVar63 = CREATE_POINT_IN_LAYOUT(Local_264, "nrespawn_9", -2678.974f, 33.77583f, 2321.886f, 0.0f, -223.5411f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar63, Local_264.f_104);
	bVar64 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9a", -2698.919f, 38.17791f, 2346.469f, 0.0f, -236.7983f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar64, Local_264.f_104);
	bVar65 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9b", -2716.315f, 40.26853f, 2356.873f, 0.0f, 111.1149f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar65, Local_264.f_104);
	bVar66 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9c", -2736.335f, 41.04236f, 2361.3f, 0.0f, 113.0397f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar66, Local_264.f_104);
	bVar67 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_9d", -2755.554f, 42.27926f, 2367.697f, 0.0f, 137.3447f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar67, Local_264.f_104);
	bVar68 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10", -2766.17f, 43.0483f, 2380.228f, 0.0f, 176.9682f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar68, Local_264.f_104);
	bVar69 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_10a", -2767.639f, 40.79965f, 2412.648f, 0.0f, 180.0539f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar69, Local_264.f_104);
	bVar70 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11", -2769.269f, 39.14173f, 2440.119f, 0.0f, -150.1041f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar70, Local_264.f_104);
	bVar71 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11a", -2756.053f, 39.08193f, 2464.63f, 0.0f, -150.0965f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar71, Local_264.f_104);
	bVar72 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11b", -2740.55f, 39.06376f, 2488.058f, 0.0f, -162.3454f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar72, Local_264.f_104);
	bVar73 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11c", -2735.824f, 39.06937f, 2507.964f, 0.0f, -161.2576f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar73, Local_264.f_104);
	bVar74 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_11d", -2730.586f, 40.0519f, 2527.328f, 0.0f, -151.365f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar74, Local_264.f_104);
	bVar75 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12", -2717.881f, 41.8706f, 2547.693f, 0.0f, -170.7033f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar75, Local_264.f_104);
	bVar76 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12a", -2718.794f, 43.5744f, 2579.926f, 0.0f, -176.8796f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar76, Local_264.f_104);
	bVar77 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12b", -2718.373f, 43.70284f, 2603.612f, 0.0f, -179.6636f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar77, Local_264.f_104);
	bVar78 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_12c", -2721.134f, 42.56748f, 2624.063f, 0.0f, -159.8701f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar78, Local_264.f_104);
	bVar79 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13", -2718.444f, 41.0129f, 2636.318f, 0.0f, -147.1142f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar79, Local_264.f_104);
	bVar80 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13a", -2698.224f, 37.58726f, 2658.271f, 0.0f, -140.0423f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar80, Local_264.f_104);
	bVar81 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_13b", -2686.578f, 31.44569f, 2688.536f, 0.0f, -110.8687f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar81, Local_264.f_104);
	bVar82 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14", -2673.452f, 33.55885f, 2693.723f, 0.0f, -91.07243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar82, Local_264.f_104);
	bVar83 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14a", -2646.678f, 35.74209f, 2694.638f, 0.0f, -82.08421f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar83, Local_264.f_104);
	bVar84 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14b1", -2627.381f, 32.87402f, 2692.656f, 0.0f, -65.26357f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar84, Local_264.f_104);
	bVar85 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_14c", -2612.719f, 31.05976f, 2682.785f, 0.0f, -62.1545f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar85, Local_264.f_104);
	bVar86 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15", -2594.679f, 32.56593f, 2669.358f, 0.0f, -55.6328f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar86, Local_264.f_104);
	bVar87 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15a", -2569.949f, 31.63263f, 2655.485f, 0.0f, -60.66163f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar87, Local_264.f_104);
	bVar88 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15b", -2552.044f, 28.36491f, 2646.296f, 0.0f, -105.0386f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar88, Local_264.f_104);
	bVar89 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_15c", -2532.094f, 27.33077f, 2653.628f, 0.0f, -89.30611f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar89, Local_264.f_104);
	bVar90 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16", -2524.005f, 26.72295f, 2651.36f, 0.0f, -90.79768f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar90, Local_264.f_104);
	bVar91 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16a", -2493.514f, 22.06837f, 2653.492f, 0.0f, -128.0616f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar91, Local_264.f_104);
	bVar92 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16b", -2480.474f, 21.30972f, 2665.592f, 0.0f, -108.0169f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar92, Local_264.f_104);
	bVar93 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16c", -2456.916f, 17.38807f, 2671.193f, 0.0f, -137.2856f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar93, Local_264.f_104);
	bVar94 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16d", -2440.439f, 16.56475f, 2694.632f, 0.0f, -130.7874f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar94, Local_264.f_104);
	bVar95 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16e", -2424.244f, 15.6339f, 2710.205f, 0.0f, -115.5175f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar95, Local_264.f_104);
	bVar96 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_16f", -2408.239f, 15.57574f, 2720.854f, 0.0f, -95.21397f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar96, Local_264.f_104);
	bVar97 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17", -2395.941f, 15.45954f, 2722.193f, 0.0f, -90.00814f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar97, Local_264.f_104);
	bVar98 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17a", -2367.827f, 14.97423f, 2719.211f, 0.0f, -90.00814f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar98, Local_264.f_104);
	bVar99 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17b", -2347.745f, 14.97491f, 2721.608f, 0.0f, -84.36685f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar99, Local_264.f_104);
	bVar100 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17c", -2323.87f, 14.9593f, 2717.378f, 0.0f, -82.95705f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar100, Local_264.f_104);
	bVar101 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17d", -2299.681f, 14.98627f, 2717.683f, 0.0f, -78.65426f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar101, Local_264.f_104);
	bVar102 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17e", -2279.731f, 15.40031f, 2714.774f, 0.0f, -77.41396f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar102, Local_264.f_104);
	bVar103 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_17f", -2254.818f, 15.54941f, 2713.33f, 0.0f, -50.58725f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar103, Local_264.f_104);
	bVar104 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18", -2242.237f, 15.82251f, 2706.772f, 0.0f, -50.07603f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar104, Local_264.f_104);
	bVar105 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18a", -2204.915f, 15.72737f, 2671.829f, 0.0f, -30.72845f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar105, Local_264.f_104);
	bVar106 = CREATE_POINT_IN_LAYOUT(Local_264, "respawn_18b", -2188.942f, 16.43666f, 2649.992f, 0.0f, -22.10517f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar106, Local_264.f_104);
	Local_264.f_108 = CREATE_OBJECTSET_IN_LAYOUT("FinishFlagSet", Local_264, 8, 0);
	*(&Local_264 + 112[06]) = { -2180.839f, 16.29295f, 2610.758f };
	*(&Local_264 + 112[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar107 = CREATE_POINT_IN_LAYOUT(Local_264, "finish", -2180.839f, 16.29295f, 2610.758f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar107, Local_264.f_108);
	Local_264.f_140 = CREATE_OBJECTSET_IN_LAYOUT("mp_Dir_MarkersSet", Local_264, 8, 0);
	bVar108 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_1", -2185.296f, 15.8f, 2607.51f, 0.0f, -86.80497f, 0.0f);
	DECOR_SET_BOOL(bVar108, "dirRight", true);
	DECOR_SET_INT(bVar108, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar108, Local_264.f_140);
	bVar109 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_2", -2188.108f, 16.1f, 2526.547f, 0.0f, 169.6969f, 0.0f);
	DECOR_SET_BOOL(bVar109, "dirRight", false);
	DECOR_SET_INT(bVar109, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar109, Local_264.f_140);
	bVar110 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_3", -2678.205f, 32.97847f, 2694.155f, 0.0f, 19.72564f, 0.0f);
	DECOR_SET_BOOL(bVar110, "dirRight", false);
	DECOR_SET_INT(bVar110, "nmarkerOri", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar110, Local_264.f_140);
	bVar111 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_4", -2242.827f, 15.99129f, 2708.913f, 0.0f, 50.94147f, 0.0f);
	DECOR_SET_BOOL(bVar111, "dirRight", false);
	DECOR_SET_INT(bVar111, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar111, Local_264.f_140);
	bVar112 = CREATE_POINT_IN_LAYOUT(Local_264, "dirMarker_5", -2768.27f, 42.46168f, 2375.459f, 0.0f, 289.2791f, 0.0f);
	DECOR_SET_BOOL(bVar112, "dirRight", false);
	DECOR_SET_INT(bVar112, "nmarkerOri", false);
	ADD_OBJECT_TO_OBJECTSET(bVar112, Local_264.f_140);
}

