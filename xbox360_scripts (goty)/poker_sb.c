//Decompiled with MagicRDR v1.0
//Function Count : 41
//Statics Count : 11
//Natives Count : 41
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
	int iLocal_10 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_10 = 0;
	Function_39(1);
	while (!IS_EXITFLAG_SET())
	{
		if (!Function_38(1, 1))
		{
			Function_1(3620, 2483);
		}
		WAIT(false);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x32 / 50
{
	Function_2(uParam0, iParam1, 2476);
	return;
}

void Function_2(var uParam0, var uParam1, int iParam2) //Position: 0x43 / 67
{
	if (Function_16(0x4000000))
	{
		Function_15();
		Function_12(0x4000000, 0, 1);
	}
	if (Function_16(0x10000000))
	{
		Function_15();
		Function_12(0x10000000, 0, 1);
	}
	if (Function_16(2) != Function_16(0x2000000))
	{
		Function_15();
		Function_12(0x2000000, Function_16(2), 1);
	}
	if (Function_11())
	{
		Function_10(!Function_16(16));
	}
	if (Function_16(16))
	{
		Function_4(&uParam0, &uParam1, &iParam2);
		if (Function_16(8192))
		{
			if (!Function_16(4194304))
			{
				Function_12(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_16(8388608))
			{
				Function_12(8388608, 1, 1);
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
			Function_3();
		}
		Function_12(16384, 1, 1);
	}
	else if (!Function_16(32))
	{
		Function_3();
	}
	Function_12(32768, 0, 1);
	return;
}

void Function_3() //Position: 0x1DC / 476
{
	if (Function_16(4194304))
	{
		Function_12(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_16(8388608))
	{
		Function_12(8388608, 0, 1);
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

void Function_4(var uParam0, var uParam1, int iParam2) //Position: 0x2E5 / 741
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_12(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_16(0x40000000);
	bVar3 = !Function_16(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_9(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_7(bVar1, 2048, 1))
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
				if (Function_5(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_16(4))
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
			if (Function_5(bVar1, (4294966296 - bVar1), 1))
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

bool Function_5(bool bParam0, bool bParam1, int iParam2) //Position: 0x45D / 1117
{
	var uVar0;
	
	return Function_6(bParam0, bParam1, &uVar0, iParam2);
}

int Function_6(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x46E / 1134
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

bool Function_7(bool bParam0, int iParam1, bool bParam2) //Position: 0x4D3 / 1235
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_38(iParam1, bParam2);
	}
	if (!Function_9(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_8(iParam1), 64);
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

var Function_8(int iParam0) //Position: 0x554 / 1364
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

bool Function_9(bool bParam0) //Position: 0x86D / 2157
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

void Function_10(bool bParam0) //Position: 0x90E / 2318
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_12(16384, 0, 1);
	return;
}

bool Function_11() //Position: 0x928 / 2344
{
	return Function_16(32768);
}

void Function_12(int iParam0, bool bParam1, int iParam2) //Position: 0x935 / 2357
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_14(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_13(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x95D / 2397
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_14(var uParam0, var uParam1) //Position: 0x970 / 2416
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

void Function_15() //Position: 0x97F / 2431
{
	Function_12(32768, 1, 0);
	return;
}

bool Function_16(int iParam0) //Position: 0x98E / 2446
{
	return Function_17(Global_76905.f_132, iParam0);
}

int Function_17(var uParam0, bool bParam1) //Position: 0x99F / 2463
{
	return (uParam0 && bParam1) == 0;
}

int Function_18() //Position: 0x9AC / 2476
{
	return 1;
}

int Function_19(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x9B3 / 2483
{
	bool bVar0;
	bool bVar1;
	
	Function_30(bParam1, uParam2, uParam3);
	bVar0 = Function_27(bParam0);
	bVar1 = Function_24(bParam0);
	if (!bParam1)
	{
		if (Function_23())
		{
			Function_5(bParam0, CEIL(bVar1), 0);
		}
		else
		{
			Function_5(bParam0, bVar0, 0);
		}
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bVar0);
	if (Function_23())
	{
		Function_21(1, bVar1);
	}
	Function_20(2, bParam0);
	return 0;
}

void Function_20(bool bParam0, bool bParam1) //Position: 0xA19 / 2585
{
	if (Function_16(4))
	{
		if (Function_7(bParam1, 1024, 1))
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

void Function_21(bool bParam0, int iParam1) //Position: 0xA4C / 2636
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_22(iParam1) };
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

struct<16> Function_22(var uParam0) //Position: 0xC79 / 3193
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

bool Function_23() //Position: 0xCEA / 3306
{
	return (Function_16(4096) || Function_16(4));
}

int Function_24(int iParam0) //Position: 0xCFB / 3323
{
	return Function_25(0, iParam0);
}

int Function_25(int iParam0, bool bParam1) //Position: 0xD07 / 3335
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_26(iParam0);
	}
	if (!Function_9(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_26(int iParam0) //Position: 0xD70 / 3440
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_27(int iParam0) //Position: 0xD80 / 3456
{
	return Function_28(0, iParam0);
}

int Function_28(int iParam0, bool bParam1) //Position: 0xD8C / 3468
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_29(iParam0);
	}
	if (!Function_9(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_29(int iParam0) //Position: 0xDF3 / 3571
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_30(bool bParam0, int iParam1, bool bParam2) //Position: 0xE03 / 3587
{
	if (bParam0)
	{
		if (Function_11())
		{
			NET_PLAYER_LIST_ADD_ITEM(bParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_31() //Position: 0xE24 / 3620
{
	if (!Function_33(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_stack");
	if (Function_23())
	{
		NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_time");
	}
	else
	{
		NET_PLAYER_LIST_SET_HEADER(3, "Common_Null");
	}
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_32();
	return 1;
}

void Function_32() //Position: 0xEC6 / 3782
{
	if (Function_16(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_12(8192, 1, 1);
	}
	else if (Function_16(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_12(8192, 1, 1);
	}
	else
	{
		Function_12(8192, 0, 1);
	}
	return;
}

bool Function_33(bool bParam0) //Position: 0xF03 / 3843
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_11() || Function_37(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_11())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_34(Function_11());
	return 1;
}

void Function_34(bool bParam0) //Position: 0xF84 / 3972
{
	if (bParam0 || Function_16(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_16(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_16(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_16(1048576) || Function_16(4)) || Function_38(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_12(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_35(var uParam0) //Position: 0x100D / 4109
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_36(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1021 / 4129
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

int Function_37(bool bParam0, bool bParam1) //Position: 0x1066 / 4198
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

bool Function_38(int iParam0, bool bParam1) //Position: 0x109A / 4250
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_39(int iParam0) //Position: 0x10BA / 4282
{
	Function_40(8, iParam0);
	return;
}

void Function_40(var uParam0, bool bParam1) //Position: 0x10C7 / 4295
{
	if (bParam1)
	{
		Function_14(&Global_83591 + 140 + 4, uParam0);
	}
	else
	{
		Function_13(&Global_83591 + 140 + 4, uParam0);
	}
	return;
}

