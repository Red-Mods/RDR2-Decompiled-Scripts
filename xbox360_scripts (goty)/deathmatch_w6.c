//Decompiled with MagicRDR v1.0
//Function Count : 261
//Statics Count : 156
//Natives Count : 224
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
	float fLocal_11 = 0.0f;
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 5;
	var uLocal_130 = -1;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = -1;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = -1;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = -1;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	iLocal_46 = 0;
	iLocal_47 = 0;
	Function_250();
	if (Function_249())
	{
		Function_248();
	}
	else
	{
		if (Function_116())
		{
			Function_115(1);
		}
		else
		{
			Function_114(1);
		}
		iVar0 = 25;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_113(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					Function_112(64, 0);
					iVar0 = 25;
				}
			}
			Function_100(&iLocal_127, 0.15f, 0.7f, 12, 0.0f, 0.0f, 0.0f, 0.0f);
			Function_25();
			Function_22();
			WAIT(0);
		}
	}
	Function_17(0, 60, 0);
	Function_16();
	Function_3();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x90 / 144
{
	Function_2(uLocal_126);
	return;
}

int Function_2(bool bParam0) //Position: 0x9C / 156
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0xB2 / 178
{
	Function_12(&iLocal_39);
	Function_5();
	Function_4();
	return;
}

void Function_4() //Position: 0xC3 / 195
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_5() //Position: 0x102 / 258
{
	Function_6();
	return;
}

void Function_6() //Position: 0x10B / 267
{
	if (Function_10(4194304))
	{
		Function_7(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_10(8388608))
	{
		Function_7(8388608, 0, 1);
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

void Function_7(int iParam0, bool bParam1, int iParam2) //Position: 0x214 / 532
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_9(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_8(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x23C / 572
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x24F / 591
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_10(int iParam0) //Position: 0x25E / 606
{
	return Function_11(Global_76905.f_132, iParam0);
}

bool Function_11(var uParam0, int iParam1) //Position: 0x26F / 623
{
	return (uParam0 && iParam1) == 0;
}

void Function_12(int iParam0) //Position: 0x27C / 636
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_13(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x2A2 / 674
{
	if (Function_15(uParam0[iParam13], 4))
	{
		if (Function_15(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_14(uParam0[iParam13], 1);
			Function_14(uParam0[iParam13], 2);
			Function_14(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x3D0 / 976
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x3EA / 1002
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x407 / 1031
{
	Function_12(&Local_48 + 4);
	RELEASE_LAYOUT_REF(Local_48);
	return;
}

void Function_17(int iParam0, int iParam1, int iParam2) //Position: 0x419 / 1049
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
		Function_18(Global_16524, bVar0, 1);
	}
	return;
}

void Function_18(int iParam0, bool bParam1, bool bParam2) //Position: 0x4FF / 1279
{
	int iVar0;
	
	Function_21(iParam0);
	Function_20(bParam1);
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
	Function_19();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_19() //Position: 0x678 / 1656
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_20(bool bParam0) //Position: 0x684 / 1668
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

void Function_21(int iParam0) //Position: 0x6CA / 1738
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

void Function_22() //Position: 0x710 / 1808
{
	Function_23(2);
	return;
}

void Function_23(int iParam0) //Position: 0x71A / 1818
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_24(iParam0);
		}
	}
	return;
}

void Function_24(var uParam0) //Position: 0x74C / 1868
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_25() //Position: 0x75B / 1883
{
	Function_98();
	if (Function_97(1, 1))
	{
		Function_81(StackVal, StackVal, 7977, vLocal_43, 1, 7869);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_76(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		if (Function_73())
		{
			Function_52(5726, 5350);
		}
		else
		{
			Function_52(3884, 2044);
		}
		Function_26();
	}
	return;
}

void Function_26() //Position: 0x7BA / 1978
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_27(&Local_12);
	}
	return;
}

void Function_27(int iParam0) //Position: 0x7D6 / 2006
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	return;
}

int Function_28(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x7FC / 2044
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_43(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_42(bParam0);
	bVar2 = Function_41(bParam0);
	bVar3 = Function_38(bParam0);
	iVar4 = Function_37((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_35(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), false, false);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_33(38, bParam0));
		bVar0++;
		Function_29(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_29(bool bParam0, bool bParam1) //Position: 0x8E1 / 2273
{
	if (Function_10(4))
	{
		if (Function_30(bParam1, 1024, 1))
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

bool Function_30(bool bParam0, int iParam1, bool bParam2) //Position: 0x914 / 2324
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_97(iParam1, bParam2);
	}
	if (!Function_32(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_31(iParam1), 64);
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

var Function_31(int iParam0) //Position: 0x995 / 2453
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

bool Function_32(bool bParam0) //Position: 0xCAE / 3246
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

int Function_33(int iParam0, bool bParam1) //Position: 0xD4F / 3407
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_34(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_34(int iParam0) //Position: 0xDBD / 3517
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

bool Function_35(bool bParam0, int iParam1, int iParam2) //Position: 0xDD6 / 3542
{
	var uVar0;
	
	return Function_36(bParam0, iParam1, &uVar0, iParam2);
}

int Function_36(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xDE7 / 3559
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

var Function_37(int iParam0, int iParam1, int iParam2) //Position: 0xE4C / 3660
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_38(bool bParam0) //Position: 0xE61 / 3681
{
	return Function_39(0, bParam0);
}

int Function_39(int iParam0, bool bParam1) //Position: 0xE6D / 3693
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_40(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_40(int iParam0) //Position: 0xED4 / 3796
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_41(bool bParam0) //Position: 0xEE4 / 3812
{
	return Function_33(12, bParam0);
}

int Function_42(int iParam0) //Position: 0xEF1 / 3825
{
	return Function_33(11, iParam0);
}

void Function_43(bool bParam0, int iParam1, char* cParam2) //Position: 0xEFE / 3838
{
	if (bParam0)
	{
		if (Function_44())
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

bool Function_44() //Position: 0xF1F / 3871
{
	return Function_10(32768);
}

int Function_45() //Position: 0xF2C / 3884
{
	if (!Function_47(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_46();
	return 1;
}

void Function_46() //Position: 0xFC0 / 4032
{
	if (Function_10(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_7(8192, 1, 1);
	}
	else if (Function_10(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_7(8192, 1, 1);
	}
	else
	{
		Function_7(8192, 0, 1);
	}
	return;
}

bool Function_47(bool bParam0) //Position: 0xFFD / 4093
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_44() || Function_51(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_44())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_48(Function_44());
	return 1;
}

void Function_48(bool bParam0) //Position: 0x107E / 4222
{
	if (bParam0 || Function_10(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_10(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_10(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_10(1048576) || Function_10(4)) || Function_97(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_7(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_49(int iParam0) //Position: 0x1107 / 4359
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_50(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_50(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x111B / 4379
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

int Function_51(bool bParam0, bool bParam1) //Position: 0x1160 / 4448
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

void Function_52(int iParam0, int iParam1) //Position: 0x1194 / 4500
{
	Function_53(iParam0, iParam1, 5343);
	return;
}

void Function_53(var uParam0, var uParam1, int iParam2) //Position: 0x11A5 / 4517
{
	if (Function_10(0x4000000))
	{
		Function_56();
		Function_7(0x4000000, 0, 1);
	}
	if (Function_10(0x10000000))
	{
		Function_56();
		Function_7(0x10000000, 0, 1);
	}
	if (Function_10(2) != Function_10(0x2000000))
	{
		Function_56();
		Function_7(0x2000000, Function_10(2), 1);
	}
	if (Function_44())
	{
		Function_55(!Function_10(16));
	}
	if (Function_10(16))
	{
		Function_54(&uParam0, &uParam1, &iParam2);
		if (Function_10(8192))
		{
			if (!Function_10(4194304))
			{
				Function_7(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_10(8388608))
			{
				Function_7(8388608, 1, 1);
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
			Function_6();
		}
		Function_7(16384, 1, 1);
	}
	else if (!Function_10(32))
	{
		Function_6();
	}
	Function_7(32768, 0, 1);
	return;
}

void Function_54(var uParam0, var uParam1, int iParam2) //Position: 0x133E / 4926
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_7(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_10(0x40000000);
	bVar3 = !Function_10(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_32(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_30(bVar1, 2048, 1))
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
				if (Function_35(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_10(4))
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
			if (Function_35(bVar1, (4294966296 - bVar1), 1))
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

void Function_55(bool bParam0) //Position: 0x14B6 / 5302
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_7(16384, 0, 1);
	return;
}

void Function_56() //Position: 0x14D0 / 5328
{
	Function_7(32768, 1, 0);
	return;
}

int Function_57() //Position: 0x14DF / 5343
{
	return 1;
}

int Function_58(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x14E6 / 5350
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_43(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_42(bParam0);
	bVar2 = Function_41(bParam0);
	bVar3 = Function_38(bParam0);
	iVar4 = Function_37((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_35(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), false, false);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_33(38, bParam0));
		bVar0++;
		Function_29(bVar0, bParam0);
	}
	if (Function_59(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_59(bool bParam0) //Position: 0x15DB / 5595
{
	if (Function_61(bParam0, 1, 0) != 4294967295 && Function_60() != 4294967295)
	{
		return 0;
	}
	return Function_61(bParam0, 1, 0) != Function_60();
}

int Function_60() //Position: 0x1603 / 5635
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_61(GET_LOCAL_SLOT(), 1, 0);
}

int Function_61(bool bParam0, bool bParam1, bool bParam2) //Position: 0x161A / 5658
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_32(bParam0))
			{
				if (!Function_30(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_62() //Position: 0x165E / 5726
{
	if (!Function_47(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_63();
	Function_46();
	return 1;
}

void Function_63() //Position: 0x16F5 / 5877
{
	if (Function_73())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_72())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_64(0, 0);
		Function_64(1, 0);
	}
	return;
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x1720 / 5920
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_60())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_71(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_65(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_65(int iParam0, int iParam1, bool bParam2) //Position: 0x17BF / 6079
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_44())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_67(iParam1, 0) };
				break;
			
			default:
				break;
		}
		if (iParam0 == 2)
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&Var1), 5);
		}
		else
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(&Var1), 2);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(iParam0);
		if (Function_66())
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "--");
			bVar0++;
			if (iParam0 == 1)
			{
			}
			else if (iParam0 == 2)
			{
			}
		}
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, bParam2);
	return;
}

bool Function_66() //Position: 0x18B2 / 6322
{
	return (Function_10(4096) || Function_10(4));
}

struct<16> Function_67(var uParam0, var uParam1) //Position: 0x18C3 / 6339
{
	return StackVal, StackVal, StackVal, Function_68(Function_69(uParam0), uParam1);
}

struct<16> Function_68(bool bParam0, bool bParam1) //Position: 0x18D5 / 6357
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Team_", 16);
	if (bParam1)
	{
		strcpy(&cVar0, "TeamDef_", 16);
	}
	stradd(&cVar0, I2STR(bParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_69(int iParam0) //Position: 0x190A / 6410
{
	if (!Function_70())
	{
		return 0;
	}
	return StackVal;
}

bool Function_70() //Position: 0x1923 / 6435
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_71(int iParam0) //Position: 0x1930 / 6448
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_72() //Position: 0x194C / 6476
{
	return Function_60() == 4294967295;
}

bool Function_73() //Position: 0x1957 / 6487
{
	return Function_74(2);
}

int Function_74(int iParam0) //Position: 0x1961 / 6497
{
	return Function_75(&Global_79349, iParam0);
}

int Function_75(var uParam0, int iParam1) //Position: 0x1970 / 6512
{
	return Function_11(uParam0->f_44, iParam1);
}

void Function_76(vector3 vParam0, float fParam3) //Position: 0x197F / 6527
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_80(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_80(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_77(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_77(bool bParam0) //Position: 0x1A32 / 6706
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(bParam0, "shootBabyShoot");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return "";
	}
	return Function_78(bVar0);
}

int Function_78(bool bParam0) //Position: 0x1A6D / 6765
{
	bool bVar0;
	
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (!IS_BLIP_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bParam0), "cannon"))
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 523, 0f, 2, 0);
		}
		else
		{
			bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, 524, 0f, 2, 0);
		}
	}
	Function_79(bVar0);
	return bVar0;
}

void Function_79(bool bParam0) //Position: 0x1ABB / 6843
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_80() //Position: 0x1ACE / 6862
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_81(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1AFD / 6909
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_82(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7768, 1, 125, 0, 0, 0);
	Function_82(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_82(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1B80 / 7040
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_83(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_83(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1BCB / 7115
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0.01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2.25f || fVar4 <= 625.0f)
		{
			Function_27(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_11;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && uParam12)
		{
			fVar5 = 14.0f;
		}
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0.5f, 0.5f, 0.5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3.14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(bParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0.1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3.14159f * 0.5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3.14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_27(iParam0);
				}
			}
			else if ((iParam0->f_36 - fVar9) <= 0.0f)
			{
				iParam0->f_32 = 0;
				iParam0->f_44 = fParam4;
				if (iParam0->f_36 < fVar9)
				{
					bVar10 = true;
				}
			}
		}
		if (FABS((iParam0->f_36 - fVar9)) > 0.0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0.01f, -0.01f, -0.01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(uParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(uParam14);
			Call_Loc(uParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(uParam14);
				Call_Loc(uParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			fVar14 = Function_84(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, fVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, fVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_84(float fParam0) //Position: 0x1E4A / 7754
{
	return (fParam0 * 57.29578f);
}

var Function_85(int iParam0, var uParam1) //Position: 0x1E58 / 7768
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_86(int iParam0, var uParam1) //Position: 0x1EBD / 7869
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("DM_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_87() //Position: 0x1F29 / 7977
{
	int iVar0;
	
	iVar0 = Function_93(Global_83591.f_140, &vLocal_43, 0.0f, &Global_83591 + 276, 1);
	Function_88(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_88(bool bParam0, int iParam1) //Position: 0x1F56 / 8022
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	GET_OBJECT_RELATIVE_POSITION(bParam0, 0.2f, 0.0f, 0.51f, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(bParam0, 0.0f, 0.0f, 0.0f, &vVar3);
	vVar9 = { StackVal, StackVal, vVar0 };
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, &vVar0, &uVar6))
	{
		vVar0 = { StackVal, StackVal, vVar9 };
	}
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_92(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_91((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_91((*iParam1)[iVar202], &iVar21))
		{
			if (Function_89((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
			{
				GET_OBJECT_RELATIVE_POSITION(bVar12, vVar13, &vVar0);
				GET_OBJECT_RELATIVE_ORIENTATION(bVar12, vVar16, &vVar3);
				CREATE_PROP_IN_LAYOUT(bVar12, "", GET_WEAPON_FRAGMENT_NAME((*iParam1)[iVar202]), vVar0, vVar3, 1);
				iVar22++;
			}
		}
		iVar20++;
	}
	return bVar12;
}

bool Function_89(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x2065 / 8293
{
	float fVar0;
	
	if (!Function_90(bParam0))
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		iParam4 = 3;
		bParam3 = true;
	}
	fVar0 = (((TO_FLOAT(bParam3) / TO_FLOAT((iParam4 - 1))) * (0.535f - -0.46f)) + -0.46f);
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
		case default:
			*uParam1 = { fVar0, 0.333f, -0.055f };
			*uParam2 = { (-30.0f + RAND_FLOAT_RANGE(-15.0f, 15.0f)), 0.0f, 90.0f };
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*uParam1 = { fVar0, 0.315f, 0.006f };
			*uParam2 = { (-10.0f + RAND_FLOAT_RANGE(-7.5f, 7.5f)), -68.0f, (90.0f + RAND_FLOAT_RANGE(-3.0f, 3.0f)) };
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*uParam1 = { fVar0, 0.333f, -0.055f };
			*uParam2 = { (-60.0f + RAND_FLOAT_RANGE(-10.0f, 10.0f)), 0.0f, -90.0f };
			return 1;
			break;
	}
	return 0;
}

bool Function_90(int iParam0) //Position: 0x218C / 8588
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_91(bool bParam0, int iParam1) //Position: 0x219E / 8606
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			*iParam1 = 0;
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*iParam1 = 1;
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*iParam1 = 2;
			return 1;
			break;
	}
	return 0;
}

var Function_92() //Position: 0x21FA / 8698
{
	int iVar0;
	
	return iVar0;
}

var Function_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2202 / 8706
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_95(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_91((*uParam3)[iVar12], &iVar2))
		{
			iVar10[iVar2]++;
			if (iVar10[iVar2] == 2)
			{
				iVar10[iVar2] = 3;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_91((*uParam3)[iVar12], &iVar2))
		{
			if (Function_94((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
			{
				bVar9 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar6, Vector("", bVar0, StackVal) + Vector(*uParam1, vVar3, GET_WEAPON_FRAGMENT_NAME((*uParam3)[iVar12])), StackVal) + Vector(0.0f, uParam2, 0.0f), 1);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar9, 0);
				if (IS_OBJECT_VALID(bVar9))
				{
					ATTACH_OBJECTS(bVar9, bVar0, "", vVar3, vVar6, 4294967295);
				}
				iVar10[iVar2] = (iVar10[iVar2] - 1);
			}
		}
		iVar1++;
	}
	return bVar0;
}

bool Function_94(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x22F0 / 8944
{
	if (!Function_90(bParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			if (iParam3 == 1)
			{
				*uParam1 = { 0.08916403f, 0.8989502f, 0.07509536f };
				*uParam2 = { -60.09727f, -101.49f, 47.60939f };
			}
			else
			{
				*uParam1 = { 0.02631292f, 0.8451666f, -0.1088216f };
				*uParam2 = { 81.3988f, -1.648355f, -169.4713f };
			}
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			if (iParam3 == 1)
			{
				*uParam1 = { 0.3568475f, 1.28952f, -0.22761f };
				*uParam2 = { -124.3062f, 85.737f, -40.141f };
			}
			else if (iParam3 == 2)
			{
				*uParam1 = { 0.06225565f, 1.28952f, -0.22761f };
				*uParam2 = { -219.3702f, -86.19345f, 135.0233f };
			}
			else
			{
				*uParam1 = { 0.3401467f, 1.258268f, -0.22761f };
				*uParam2 = { -91.1388f, 85.737f, -40.141f };
			}
			return 1;
			break;
		
		case 0x00000030:
			*uParam1 = { 0.4015671f, 0.9808789f, -0.01462308f };
			*uParam2 = { -122.852f, 27.893f, 5.454f };
			return 1;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0.3715671f, 0.8808789f, -0.1146231f };
			*uParam2 = { 57.148f, 27.893f, 5.454f };
			return 1;
			break;
	}
	return 0;
}

var Function_95(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2481 / 9345
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar3 = { StackVal, StackVal, *iParam1 };
	if (bParam3)
	{
		if (!FIND_GROUND_INTERSECTION(&vVar3, 2.0f, iParam1, &uVar0))
		{
			*iParam1 = { StackVal, StackVal, vVar3 };
		}
	}
	else
	{
		*iParam1 = { StackVal, StackVal, vVar3 };
	}
	vVar6 = { 0.2f, 0.0f, -0.065f };
	ROTATE_VECTOR_XZ(&vVar6, bParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_96()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_96() //Position: 0x24ED / 9453
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_97(bool bParam0, bool bParam1) //Position: 0x2514 / 9492
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_98() //Position: 0x2534 / 9524
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_46)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000002:
						Function_99("DM_help", 4294967295);
						break;
					
					case 0x00000011:
						Function_99("TDM_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_4();
	}
	return;
}

void Function_99(char* cParam0, bool bParam1) //Position: 0x25A4 / 9636
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (bParam1 == 4294967295)
	{
		strcpy(&cVar0, cParam0, 32);
		stradd(&cVar0, "_count", 32);
		bParam1 = STRING_TO_INT(UI_GET_STRING(&cVar0));
	}
	if (Global_6286 == 0)
	{
		Global_6286 = ROUND((GET_PROFILE_TIME() * 1000.0f));
	}
	strcpy(&cVar8, cParam0, 32);
	stradd(&cVar8, "_", 32);
	stradd(&cVar8, I2STR((Global_6286 % bParam1)), 32);
	Global_6286++;
	UI_SET_TEXT("LoadingTip", &cVar8);
	UI_ENTER("LoadingTip");
	UI_REFRESH("LoadingScreen");
	return;
}

void Function_100(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x263B / 9787
{
	float fVar0;
	
	if (Function_111())
	{
		if (Function_110(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_106(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_104((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_101((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_104((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_101((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_101(int iParam0, var uParam1, int iParam2) //Position: 0x26DE / 9950
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_103(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_102(iParam2);
	}
	return;
}

void Function_102(int iParam0) //Position: 0x2703 / 9987
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_103(int iParam0) //Position: 0x2718 / 10008
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_104(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x272D / 10029
{
	int iVar0;
	bool bVar1;
	
	Function_21(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_105(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_18(StackVal, bVar1, bParam4);
		}
	}
}

void Function_105(int iParam0, int iParam1) //Position: 0x279F / 10143
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_21(iParam0);
	Function_20(iVar0);
	PRINTNL();
	Function_18(iParam0, iVar0, iParam1);
	return;
}

float Function_106(int iParam0) //Position: 0x27C4 / 10180
{
	return -Function_107(iParam0);
}

float Function_107(int iParam0) //Position: 0x27D0 / 10192
{
	if (Function_110(iParam0))
	{
		if (Function_109(iParam0))
		{
			return StackVal;
		}
		Function_108();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_108() //Position: 0x28A1 / 10401
{
	if (!Function_111())
	{
	}
	return;
}

bool Function_109(int iParam0) //Position: 0x28AE / 10414
{
	return Function_11(*iParam0, 2);
}

bool Function_110(int iParam0) //Position: 0x28BB / 10427
{
	return Function_11(*iParam0, 1);
}

bool Function_111() //Position: 0x28C8 / 10440
{
	return NET_IS_IN_SESSION();
}

void Function_112(int iParam0, bool bParam1) //Position: 0x28D1 / 10449
{
	if (bParam1)
	{
		Function_9(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_8(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_113(int iParam0) //Position: 0x28F9 / 10489
{
	return Function_11(StackVal, iParam0);
}

void Function_114(bool bParam0) //Position: 0x290C / 10508
{
	Function_112(16, bParam0);
	return;
}

void Function_115(var uParam0) //Position: 0x2919 / 10521
{
	Function_112(8, uParam0);
	return;
}

bool Function_116() //Position: 0x2926 / 10534
{
	Function_247(&iLocal_127, 0, 9, 30, 0, 0, 1);
	Function_247(&iLocal_127, 1, 9, 30, 2, 2, 1);
	Function_247(&iLocal_127, 2, 11, 0, 1, 2, 2);
	Function_247(&iLocal_127, 3, 11, 0, 1, 1, 0);
	Function_247(&iLocal_127, 4, 23, 0, 1, 0, 1);
	Function_244(&iLocal_127);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_242();
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_235(&Global_83591 + 276, 0);
	Function_230(&Global_83591, 1, 22, 1, 1);
	Function_230(&Global_83591, 2, 17, 15, 1);
	Function_230(&Global_83591, 3, 4, 10, 1);
	Function_230(&Global_83591, 4, 29, 20, 1);
	Function_229(&Global_83591);
	Function_228(&Global_83591 + 276, 4);
	Function_227(0, 6);
	Function_227(1, 1);
	Function_219();
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_117();
	return 1;
}

void Function_117() //Position: 0x29E4 / 10724
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 10833);
	uLocal_126 = Function_118("DLCPVP");
	return;
}

var Function_118(bool bParam0) //Position: 0x2A01 / 10753
{
	bool bVar0;
	
	bVar0 = Function_119();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_119() //Position: 0x2A15 / 10773
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_120(var uParam0) //Position: 0x2A51 / 10833
{
	struct<33> Var0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &Var0, 11);
	if (Var0.f_28)
	{
	}
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	bVar12 = GET_LOCAL_SLOT();
	switch (StackVal)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			bVar11 = Function_74(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_218())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_217())
							{
								case 0x00000002:
									break;
								
								case 0x00000011:
									break;
								
								case 0x00000009:
									break;
								
								case 0x00000007:
									break;
								
								case 0x00000008:
									break;
							}
							Function_214(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_210(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_125(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_123() || Function_121(4096))
						{
							if (Function_97(131072, 1))
							{
							}
							if (Function_30(Var0, 131072, 1))
							{
							}
						}
					}
				}
				else if (Var0.f_32 >= 0)
				{
					if (bVar11)
					{
					}
				}
			}
			else if (Var0 == bVar12)
			{
				Global_56092[231] = 0;
				if (bVar11)
				{
					if (IS_SLOT_VALID(StackVal))
					{
						Global_56352[231] = StackVal;
					}
				}
			}
			if (bVar11 && !Function_121(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_121(int iParam0) //Position: 0x2BB5 / 11189
{
	return Function_122(Global_79336, iParam0);
}

bool Function_122(var uParam0, bool bParam1) //Position: 0x2BC4 / 11204
{
	return (uParam0 && bParam1) == 0;
}

int Function_123() //Position: 0x2BD1 / 11217
{
	if (Function_124())
	{
		return (Function_217() != 1 || Function_217() != 0);
	}
	return 0;
}

bool Function_124() //Position: 0x2BEA / 11242
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_125(struct<29> Param0) //Position: 0x2BF3 / 11251
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_130(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_130(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_129(), 29, 1);
					Global_83823[29] = 1;
					Function_126(6002);
					Function_126(6005);
					Function_126(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_126(6001);
				Function_126(6004);
			}
			break;
	}
}

void Function_126(int iParam0) //Position: 0x2CD4 / 11476
{
	Function_127(iParam0, 1);
	return;
}

void Function_127(int iParam0, bool bParam1) //Position: 0x2CE0 / 11488
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_9(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_128((iVar0 % 32)));
	}
	else
	{
		Function_8(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_128((iVar0 % 32)));
	}
	return;
}

int Function_128(bool bParam0) //Position: 0x2D36 / 11574
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_129() //Position: 0x2D42 / 11586
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_130(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x2D57 / 11607
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_131(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_131(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x2D83 / 11651
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_209(uParam0, uParam2, uParam3);
			}
			Function_132(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_132(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_132(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_132(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x2E00 / 11776
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_208(*uParam0);
	if (Global_83864.f_1264 > iParam1)
	{
		Global_50170[*uParam022].f_28++;
		bVar1 = Global_50170[*uParam022].f_28;
		if (bVar1 > bParam2)
		{
			bVar2 = false;
			if (iParam3 == 4294967295)
			{
				bVar2 = true;
			}
			else if (StackVal == 10)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				uParam0->f_4 = 2;
				if (iParam4 == 3)
				{
					Function_206(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_150(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_139(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_138(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_133(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_133(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2ECE / 11982
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_137(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_136(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_137(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_135(iParam0, 4))
	{
		Function_134(Function_137(iParam0), 0);
	}
}

void Function_134(var uParam0, int iParam1) //Position: 0x2F85 / 12165
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

bool Function_135(int iParam0, int iParam1) //Position: 0x2FAA / 12202
{
	return Function_11(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_136(int iParam0) //Position: 0x2FBE / 12222
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_137(int iParam0) //Position: 0x2FF2 / 12274
{
	return Global_50170[iParam022].f_24;
}

var Function_138(int iParam0, int iParam1) //Position: 0x3001 / 12289
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_139(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3014 / 12308
{
	Function_147(*uParam0);
	Function_140(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_137(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_137(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_140(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x30B9 / 12473
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_146(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_137(iParam0));
	if ((bParam3 && Function_135(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_137(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_145(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_136(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_144(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_142(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_137(iParam0), &Var7, 0, 2, Function_135(iParam0, 4));
			if (!bParam3)
			{
				Function_141(iParam0, 4);
			}
		}
	}
}

void Function_141(int iParam0, int iParam1) //Position: 0x3176 / 12662
{
	Function_9(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_142(int iParam0) //Position: 0x318A / 12682
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_136(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_143(int iParam0) //Position: 0x31AA / 12714
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_144(int iParam0) //Position: 0x31D8 / 12760
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_145(int iParam0) //Position: 0x3208 / 12808
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_146(int iParam0) //Position: 0x3239 / 12857
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_147(int iParam0) //Position: 0x33B7 / 13239
{
	Function_148(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_148(bool bParam0, bool bParam1, bool bParam2) //Position: 0x33CD / 13261
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_149();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_149() //Position: 0x3442 / 13378
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_150(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x348F / 13455
{
	struct<4> Var0;
	
	Function_205(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_136(*uParam0) };
	Function_200(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_199(*uParam0, 4);
	Function_151();
}

void Function_151() //Position: 0x34ED / 13549
{
	if (!Function_124())
	{
		if (!Function_198(1, 3, 1, 1))
		{
			Function_186(1);
			Function_185(1, 8);
		}
	}
	else
	{
		Function_152(0);
	}
	return;
}

void Function_152(bool bParam0) //Position: 0x3516 / 13590
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_183(2);
	if (bParam0)
	{
		Function_183(1);
	}
	else
	{
		Function_181(1);
	}
	Function_153();
	return;
}

void Function_153() //Position: 0x359F / 13727
{
	Function_179();
	Function_178();
	Function_178();
	Function_177();
	Function_177();
	Function_176();
	Function_176();
	Function_160(0);
	Function_160(0);
	if (!Function_124())
	{
		Function_158();
		Function_157();
		Function_156();
		Function_155();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_154();
	return;
}

void Function_154() //Position: 0x35F1 / 13809
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_155() //Position: 0x36F7 / 14071
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
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
	Global_83815 = fVar0;
	return;
}

void Function_156() //Position: 0x372A / 14122
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_157() //Position: 0x38B8 / 14520
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_158() //Position: 0x3A6C / 14956
{
	Function_159(&Global_28260, 1, 0);
	return;
}

void Function_159(int iParam0, bool bParam1, int iParam2) //Position: 0x3A7A / 14970
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_129();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_160(int iParam0) //Position: 0x3C6B / 15467
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
					iVar2 = ((Function_175((50 + iVar4)) + Function_175((183 + iVar4))) + Function_175((90 + iVar4)));
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
	Function_161(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_161(int iParam0, bool bParam1, bool bParam2) //Position: 0x3D11 / 15633
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_174(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_173(iParam0);
	if (bParam2)
	{
		Function_162(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_162(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3FAC / 16300
{
	char* cVar0;
	char* cVar1[32];
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
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_172(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_171(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_171(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_169(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_166(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_163(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_92(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_163(int iParam0) //Position: 0x45DB / 17883
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_164(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x45EC / 17900
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_165(char* cParam0, bool bParam1) //Position: 0x46E1 / 18145
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_166(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x46FA / 18170
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_168(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_167(Function_168(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_167(int iParam0, int iParam1) //Position: 0x475F / 18271
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_168(int iParam0, bool bParam1) //Position: 0x4771 / 18289
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_169(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4783 / 18307
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
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_170(iParam0) != 19 || Function_170(iParam0) != 17) || Function_170(iParam0) != 10) || Function_170(iParam0) != 9)
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
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_170(int iParam0) //Position: 0x48B3 / 18611
{
	return Global_35278[iParam020].f_48;
}

float Function_171(int iParam0) //Position: 0x48C2 / 18626
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_172(int iParam0) //Position: 0x48FB / 18683
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_173(int iParam0) //Position: 0x4938 / 18744
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_174(int iParam0, bool bParam1, bool bParam2) //Position: 0x4AD2 / 19154
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
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
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = bParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

int Function_175(bool bParam0) //Position: 0x4D16 / 19734
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_176() //Position: 0x4D57 / 19799
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
		iVar2 = ((Function_175((50 + iVar3) + 15) + Function_175((183 + iVar3) + 15)) + Function_175((90 + iVar3) + 15));
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
	Function_161(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_177() //Position: 0x4DE0 / 19936
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
			iVar2 = ((Function_175((50 + iVar3) + 8) + Function_175((183 + iVar3) + 8)) + Function_175((90 + iVar3) + 8));
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
	Function_161(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_178() //Position: 0x4E77 / 20087
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
		iVar2 = ((Function_175((50 + iVar3)) + Function_175((183 + iVar3))) + Function_175((90 + iVar3)));
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
	Function_161(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_179() //Position: 0x4EF6 / 20214
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_180(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_161(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x4F2F / 20271
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_174(iParam0, bParam1, 1);
	Function_173(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_162(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_181(int iParam0) //Position: 0x5139 / 20793
{
	Function_182(&Global_79338, iParam0);
	return;
}

void Function_182(var uParam0, int iParam1) //Position: 0x5148 / 20808
{
	Function_8(uParam0, iParam1);
	return;
}

void Function_183(int iParam0) //Position: 0x5155 / 20821
{
	Function_184(&Global_79338, iParam0);
	return;
}

void Function_184(var uParam0, int iParam1) //Position: 0x5164 / 20836
{
	Function_9(uParam0, iParam1);
	return;
}

void Function_185(var uParam0, int iParam1) //Position: 0x5171 / 20849
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_124())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_186(bool bParam0) //Position: 0x51B3 / 20915
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_187();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_153();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_8(&Global_63095, 1);
		Function_8(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_187() //Position: 0x5204 / 20996
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_197())
	{
		Function_194(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_194(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_189(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_189(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_188(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_188(vector3 vParam0) //Position: 0x52BF / 21183
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_189(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x52D7 / 21207
{
	int iVar0;
	
	iVar0 = Function_192(uParam2, uParam3);
	if (Function_191(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_9(&Global_63095, 1);
			Function_8(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_9(&Global_63095, 2);
			Function_8(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_9(&Global_63095, 2);
		Function_8(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_190();
	return StackVal, StackVal, Function_190();
}

vector3 Function_190() //Position: 0x53BE / 21438
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_191(int iParam0) //Position: 0x53C7 / 21447
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_192(bool bParam0, bool bParam1) //Position: 0x53DD / 21469
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_193(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_193(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_191(bVar0) && !bParam1)
	{
		bVar0 = Function_192(bParam0, 1);
	}
	return bVar0;
}

float Function_193(vector3 vParam0, vector3 vParam3) //Position: 0x54A4 / 21668
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_194(var uParam0, int iParam1) //Position: 0x54C1 / 21697
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_196(Global_34573, &vVar4);
	if (!Function_195(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_195(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_9(&Global_63095, 2);
	Function_8(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_188(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_195(int iParam0) //Position: 0x5CE6 / 23782
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || !Function_11(uVar0, 0x10000000));
}

void Function_196(bool bParam0, int iParam1) //Position: 0x5D21 / 23841
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_197() //Position: 0x5D2E / 23854
{
	if (Function_11(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_198(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x5D49 / 23881
{
	uParam0 = uParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && uParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_199(int iParam0, int iParam1) //Position: 0x5DED / 24045
{
	Function_8(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_200(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5E01 / 24065
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_80();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_204(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_203(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_202(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_201(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_204(), iVar1 + 1);
	return;
}

struct<16> Function_201(int iParam0) //Position: 0x5E73 / 24179
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_202(int iParam0) //Position: 0x5E94 / 24212
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_203(int iParam0) //Position: 0x5EB5 / 24245
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_204() //Position: 0x5ED6 / 24278
{
	return "CQueue_Count";
}

void Function_205(bool bParam0, bool bParam1) //Position: 0x5EEB / 24299
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_149();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			(*&Global_50170[bParam022] + 36)[bVar0] = 0.0f;
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		Global_50170[bParam022].f_28 = 0;
	}
	return;
}

void Function_206(var uParam0, bool bParam1, bool bParam2) //Position: 0x6037 / 24631
{
	Function_205(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_137(*uParam0), 1.0f, 0, 0);
	Function_207(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_200(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_151();
	return;
}

void Function_207(int iParam0, int iParam1) //Position: 0x609C / 24732
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_146(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_137(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_145(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_136(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_142(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_137(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_137(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_137(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_208(int iParam0) //Position: 0x611E / 24862
{
	return Global_50170[iParam022].f_12;
}

void Function_209(var uParam0, bool bParam1, bool bParam2) //Position: 0x612D / 24877
{
	Function_147(*uParam0);
	if (!Function_135(*uParam0, 2))
	{
		Function_140(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_141(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_137(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_210(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x616A / 24938
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_59(Param3) && Param3.f_12 != 29)
						{
							if (Function_122(Param3.f_40, 1048576))
							{
								Global_50170[23022].f_28++;
							}
						}
					}
				}
				bVar0 = Global_50170[23022].f_28;
				if (bVar0 > 1)
				{
					*uParam0 = 2;
					Function_212(230, 150, Function_213(), 4294967295);
					Function_126(6007);
					Function_126(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_211(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_133(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_211(var uParam0, bool bParam1, int iParam2) //Position: 0x622C / 25132
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_212(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6244 / 25156
{
	Function_205(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_137(iParam0), 1.0f, 0, 0);
	Function_207(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_126(iParam3);
	}
	Function_200(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_151();
}

bool Function_213() //Position: 0x62AA / 25258
{
	return "MP_TrickShot_Icon_128";
}

void Function_214(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x62C8 / 25288
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_208(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_215(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_216(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_126(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_211(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_133(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_208(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_212(231, 100, Function_216(), 4294967295);
					Function_126(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_211(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_133(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_215(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x63F0 / 25584
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_136(uParam0) };
	Function_200(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_211(&uParam5, uParam8, uParam9);
	Function_133(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_140(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_126(iParam12);
	}
	Function_199(uParam0, 4);
	Function_151();
}

var Function_216() //Position: 0x6466 / 25702
{
	return "MP_Revenge_Icon_128";
}

int Function_217() //Position: 0x6482 / 25730
{
	return Global_79349.f_16;
}

bool Function_218() //Position: 0x648E / 25742
{
	if (Function_121(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_219() //Position: 0x64B8 / 25784
{
	Function_223(Local_48);
	Function_221(Local_48.f_308);
	if (Function_73())
	{
		Function_220("FTR_SONG_07", "FTR_SONG_08", 0, 58, 58, 1);
	}
	else
	{
		Function_220("FTR_SONG_02", "FTR_SONG_08", 0, 58, 58, 1);
	}
	return;
}

void Function_220(char* cParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x651C / 25884
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = iParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = iParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], bParam2, 32);
		(&Global_83591 + 28[29])->f_32 = iParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

void Function_221(bool bParam0) //Position: 0x65AC / 26028
{
	DECOR_SET_OBJECT(Function_222(), "LobbyGringoSet", bParam0);
	return;
}

var Function_222() //Position: 0x65CC / 26060
{
	return Global_83591.f_140;
}

void Function_223(var uParam0) //Position: 0x65D8 / 26072
{
	if (Function_226())
	{
		Function_228(&Global_83591 + 276, 2);
	}
	Function_225(uParam0);
	Global_83591.f_4 = 2;
	Function_224();
	vLocal_43 = { StackVal, StackVal, Function_224() };
	return;
}

vector3 Function_224() //Position: 0x6602 / 26114
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_222();
	vVar1 = { StackVal, StackVal, *(&Global_79349 + 28) };
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar4 = FIND_OBJECT_IN_LAYOUT(bVar0, "LobbyCenter");
		if (IS_OBJECT_VALID(bVar4))
		{
			GET_OBJECT_POSITION(bVar4, &vVar1);
		}
	}
	return StackVal, StackVal, vVar1;
}

void Function_225(var uParam0) //Position: 0x664A / 26186
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_226() //Position: 0x6658 / 26200
{
	return Function_11(Global_79962, 1024);
}

void Function_227(int iParam0, int iParam1) //Position: 0x6668 / 26216
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_228(int iParam0, int iParam1) //Position: 0x6676 / 26230
{
	(iParam0 + 228)->f_220 = 0;
	Function_9(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_229(int iParam0) //Position: 0x668E / 26254
{
	iParam0->f_844 = 0;
	return;
}

void Function_230(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x669A / 26266
{
	Function_231(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_231(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x66B2 / 26290
{
	Function_232(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_232(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x66C7 / 26311
{
	if (!Function_234(iParam1))
	{
		return;
	}
	Function_233(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_233(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x66EA / 26346
{
	*uParam0 = bParam1;
	if (bParam3)
	{
		uParam0->f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		uParam0->f_4 = iParam2;
	}
}

bool Function_234(int iParam0) //Position: 0x6714 / 26388
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_235(int iParam0, bool bParam1) //Position: 0x6724 / 26404
{
	Function_239(iParam0);
	Function_239(iParam0 + 228);
	if (bParam1)
	{
		Function_236(iParam0);
	}
	return;
}

void Function_236(int iParam0) //Position: 0x6740 / 26432
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_237(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_237(var uParam0, int iParam1) //Position: 0x6760 / 26464
{
	Function_238(uParam0, iParam1, 0);
	return;
}

void Function_238(int iParam0, int iParam1, int iParam2) //Position: 0x676E / 26478
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_239(int iParam0) //Position: 0x677F / 26495
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_241(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_240(iParam0, 0.0f);
	return;
}

void Function_240(var uParam0, int iParam1) //Position: 0x67AC / 26540
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_241(var uParam0) //Position: 0x67B8 / 26552
{
	Function_233(uParam0, 4294967295, 0, 1);
	return;
}

void Function_242() //Position: 0x67C6 / 26566
{
	var uVar0;
	
	Function_243(4, 1);
	uVar0 = uVar0;
	Local_48 = CREATE_LAYOUT("Deathmatch_W6_layout");
	Local_48.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_48, "playablespace", 3, -3162.03f, 59.10868f, 3315.081f, 0.0f, -4.067378f, 0.0f, 155.4063f, 26.80177f, 88.22293f);
	Local_48.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_0", 3, -3085.921f, 46.32261f, 3282.08f, 0.0f, -41.48392f, 0.0f, 1.786804f, 3.633499f, 1.786804f);
	Local_48.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_1", 3, -3100.832f, 44.97101f, 3269.147f, 0.0f, 305.3951f, 0.0f, 1.969158f, 2.629602f, 1.969158f);
	Local_48.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_2", 3, -3124.608f, 39.483f, 3261.395f, 0.0f, -14.24729f, 0.0f, 1.813576f, 3.924283f, 1.813576f);
	Local_48.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_3", 3, -3151.142f, 39.15295f, 3267.379f, 0.0f, -9.990473f, 0.0f, 1.63151f, 2.677369f, 1.63151f);
	Local_48.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_4", 3, -3175.581f, 39.15295f, 3268.92f, 0.0f, 9.273561f, 0.0f, 1.916307f, 4.289428f, 1.916307f);
	Local_48.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_5", 3, -3192f, 39.15295f, 3272.187f, 0.0f, 10.50666f, 0.0f, 1.767268f, 3.095076f, 1.767268f);
	Local_48.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_6", 3, -3202.198f, 40.15686f, 3271.207f, 0.0f, -336.2547f, 0.0f, 1.836189f, 2.698035f, 1.836189f);
	Local_48.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_7", 3, -3229.708f, 39.97724f, 3266.412f, 0.0f, 27.90823f, 0.0f, 1.521093f, 2.302962f, 1.521093f);
	Local_48.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_8", 3, -3241.532f, 38.15194f, 3280f, 0.0f, 33.6625f, 0.0f, 2.095463f, 2.770645f, 2.095463f);
	Local_48.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_9", 3, -3252.62f, 38.14902f, 3292.069f, 0.0f, 103.9838f, 0.0f, 1.797026f, 2.534858f, 1.797026f);
	Local_48.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_10", 3, -3261.437f, 38.8358f, 3305.333f, 0.0f, 94.85208f, 0.0f, 1.591105f, 1.988304f, 1.591105f);
	Local_48.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_11", 3, -3267.199f, 39.18381f, 3325.096f, 0.0f, -241.4764f, 0.0f, 1.782935f, 2.635807f, 1.782935f);
	Local_48.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_12", 3, -3254.233f, 39.27884f, 3332.42f, 0.0f, 127.3676f, 0.0f, 1.665079f, 2.343765f, 1.665079f);
	Local_48.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_13", 3, -3237.181f, 39.64384f, 3335.117f, 0.0f, -189.1495f, 0.0f, 1.762493f, 2.700519f, 1.762493f);
	Local_48.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_14", 3, -3211.789f, 40.21255f, 3341.992f, 0.0f, 212.87f, 0.0f, 1.546582f, 2.39561f, 1.546582f);
	Local_48.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_16", 3, -3173.131f, 40.17643f, 3359.895f, 0.0f, 207.7266f, 0.0f, 1.68486f, 2.239642f, 1.68486f);
	Local_48.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_17", 3, -3164.899f, 40.24315f, 3361.672f, 0.0f, 128.6204f, 0.0f, 1.277238f, 2.046721f, 1.277238f);
	Local_48.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_18", 3, -3140f, 42.20122f, 3358.031f, 0.0f, -164.2899f, 0.0f, 1.238259f, 1.979082f, 1.238259f);
	Local_48.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_19", 3, -3116.766f, 43.67989f, 3359.424f, 0.0f, -174.5144f, 0.0f, 1.180082f, 1.515658f, 1.180082f);
	Local_48.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_20", 3, -3093.885f, 50.91294f, 3345.885f, 0.0f, -138.921f, 0.0f, 1.287954f, 1.616333f, 1.287954f);
	Local_48.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_21", 3, -3087.866f, 54.21176f, 3325.831f, 0.0f, 240.6949f, 0.0f, 1.084449f, 1.356934f, 1.084449f);
	Local_48.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_22", 3, -3079.66f, 54.38923f, 3312.04f, 0.0f, -91.61997f, 0.0f, 1.353017f, 1.860995f, 1.353017f);
	Local_48.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_23", 3, -3242.778f, 45.20134f, 3316.71f, 0.0f, -186.9013f, 0.0f, 2.296662f, 3.158921f, 2.296662f);
	Local_48.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_24", 3, -3214.014f, 46.23196f, 3294.57f, 0.0f, -260.9784f, 0.0f, 1.65681f, 2.278843f, 1.65681f);
	Local_48.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_25", 3, -3209.099f, 48.88158f, 3316.248f, 0.0f, -405.2271f, 0.0f, 1.695575f, 2.332162f, 1.695575f);
	Local_48.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_26", 3, -3205.358f, 48.83468f, 3306.947f, 0.0f, -544.2413f, 0.0f, 1.744527f, 2.399492f, 1.744527f);
	Local_48.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_27", 3, -3197.207f, 48.21319f, 3318.526f, 0.0f, -720.777f, 0.0f, 1.39669f, 1.921063f, 1.39669f);
	Local_48.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_28", 3, -3167.5f, 48.80842f, 3306.067f, 0.0f, -640.7969f, 0.0f, 1.151992f, 1.584496f, 1.151992f);
	Local_48.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_29", 3, -3160.081f, 50.74608f, 3330.417f, 0.0f, -639.6171f, 0.0f, 1.110368f, 1.527245f, 1.110368f);
	Local_48.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_30", 3, -3166.003f, 48.03205f, 3338.234f, 0.0f, -826.4784f, 0.0f, 1.66721f, 2.293148f, 1.66721f);
	Local_48.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_31", 3, -3152.814f, 55.2498f, 3317.935f, 0.0f, -1076.048f, 0.0f, 0.9815857f, 1.350113f, 0.9815857f);
	Local_48.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_32", 3, -3147.999f, 47.18394f, 3295.998f, 0.0f, -799.7647f, 0.0f, 0.9815857f, 1.350113f, 0.9815857f);
	Local_48.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_33", 3, -3115.042f, 47.93846f, 3286.781f, 0.0f, -853.101f, 0.0f, 2.056663f, 2.828817f, 2.056663f);
	Local_48.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_34", 3, -3106.695f, 56.66319f, 3306.634f, 0.0f, -821.0455f, 0.0f, 1.085687f, 1.493298f, 1.085687f);
	Local_48.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_35", 3, -3102.266f, 52.30231f, 3332.16f, 0.0f, -888.6016f, 0.0f, 1.406865f, 1.937012f, 1.406865f);
	Local_48.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_36", 3, -3115.883f, 49.13227f, 3344.908f, 0.0f, -871.4816f, 0.0f, 1.406865f, 1.937012f, 1.406865f);
	Local_48.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_37", 3, -3134.578f, 56.36343f, 3319.284f, 0.0f, -778.8983f, 0.0f, 0.9947892f, 1.368273f, 0.9947892f);
	Local_48.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_48, "SpawnVol_38", 3, -3126.713f, 54.86869f, 3325.516f, 0.0f, -864.3062f, 0.0f, 0.9947892f, 1.368273f, 0.9947892f);
	*(&Local_48 + 224) = { -3113.83f, 39.763f, 3232.288f };
	*(&Local_48 + 224 + 12) = { 0.0f, -128.2285f, 0.0f };
	Local_48.f_248 = CREATE_POINT_IN_LAYOUT(Local_48, "Showdown_A", -3113.83f, 39.763f, 3232.288f, 0.0f, -128.2285f, 0.0f);
	*(&Local_48 + 252) = { -3117.601f, 39.62663f, 3236.618f };
	*(&Local_48 + 252 + 12) = { 0.0f, 52.31951f, 0.0f };
	Local_48.f_276 = CREATE_POINT_IN_LAYOUT(Local_48, "Showdown_B", -3117.601f, 39.62663f, 3236.618f, 0.0f, 52.31951f, 0.0f);
	*(&Local_48 + 280) = { -3133.792f, 39.51382f, 3248.088f };
	*(&Local_48 + 280 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_48.f_304 = CREATE_POINT_IN_LAYOUT(Local_48, "StandoffCenter", -3133.792f, 39.51382f, 3248.088f, 0.0f, 0.0f, 0.0f);
	Local_48.f_308 = CREATE_OBJECTSET_IN_LAYOUT(Function_92(), Local_48, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "rand_idle_stand", "rand_idle_stand", -3156.646f, 39.08096f, 3255.048f, 0.0f, 90.08775f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "rand_idle_stand1", "rand_idle_stand", -3157.293f, 39.25262f, 3250.707f, 0.0f, 132.1089f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "rand_idle_stand2", "rand_idle_stand", -3164f, 39.15761f, 3250.646f, 0.0f, -142.6636f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "rand_idle_stand3", "rand_idle_stand", -3157.46f, 39.15295f, 3257.6f, 0.0f, 48.06196f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "rand_idle_stand4", "rand_idle_stand", -3162.302f, 39.15295f, 3258.276f, 0.0f, -18.70283f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_dnd_rowdydrink_MP", "stand_dnd_rowdydrink_MP", -3158.393f, 39.03309f, 3255.851f, 0.0f, 68.28481f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_dnd_rowdydrink_MP1", "stand_dnd_rowdydrink_MP", -3160f, 39.23333f, 3250.238f, 0.0f, 178.169f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_dnd_rowdydrink_MP2", "stand_dnd_rowdydrink_MP", -3154.264f, 39.15331f, 3258.142f, 0.0f, 58.37186f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_dnd_rowdydrink_MP3", "stand_dnd_rowdydrink_MP", -3166.375f, 39.16115f, 3249.626f, 0.0f, -162.334f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_dnd_rowdydrink_MP4", "stand_dnd_rowdydrink_MP", -3164.671f, 39.01574f, 3255.105f, 0.0f, -86.78267f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_dnd_rowdydrink_MP5", "stand_dnd_rowdydrink_MP", -3160.2f, 39.15295f, 3258.773f, 0.0f, 8.917141f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -3160.657f, 39.01772f, 3254.943f, 0.0f, 0.0f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -3152.64f, 39.13144f, 3254.682f, 0.0f, -67.50611f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3168.695f, 39.0047f, 3255.186f, 0.0f, 87.22597f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3158.48f, 39.68349f, 3245.521f, 0.0f, 0.0f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -3158.697f, 39.17263f, 3252f, 0.0f, 145.6905f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -3162.128f, 39.153f, 3252f, 0.0f, 209.3408f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", -3154.864f, 39.144f, 3254.19f, 0.0f, 98.3634f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", -3163.667f, 39.15295f, 3256.954f, 0.0f, -51.31724f, 0.0f), Local_48.f_308);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_48, "stand_drunkdancing_e_any4", "stand_drunkdancing_e_any", -3162.636f, 39.01875f, 3254.364f, 0.0f, -103.4928f, 0.0f), Local_48.f_308);
	return;
}

void Function_243(int iParam0, int iParam1) //Position: 0x78D7 / 30935
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

void Function_244(int iParam0) //Position: 0x7920 / 31008
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_246("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_245(StackVal, 0);
	return;
}

void Function_245(var uParam0, int iParam1) //Position: 0x7992 / 31122
{
	Function_21(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_105(StackVal, iParam1);
	}
	return;
}

bool Function_246(char* cParam0) //Position: 0x79C3 / 31171
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x79E2 / 31202
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_248() //Position: 0x7A24 / 31268
{
	while (!IS_EXITFLAG_SET())
	{
		Function_98();
		if (Function_73())
		{
			Function_52(5726, 5350);
		}
		else
		{
			Function_52(3884, 2044);
		}
		WAIT(0);
	}
	return;
}

bool Function_249() //Position: 0x7A56 / 31318
{
	return Function_113(2);
}

void Function_250() //Position: 0x7A60 / 31328
{
	if (Function_249())
	{
		return;
	}
	Function_260();
	Function_258(&iLocal_39, Function_96(), 0, 0);
	while (!Function_252(&iLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_98();
	Function_251();
	return;
}

void Function_251() //Position: 0x7A94 / 31380
{
	while (!Function_113(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_252(int iParam0) //Position: 0x7AAF / 31407
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_257();
	iVar1 = 0;
	if (!Function_15(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_256(iParam0[iVar03], 8);
		}
		else if (Function_255())
		{
			iVar1 = 1;
			Function_256(iParam0[iVar03], 8);
		}
		Function_256(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_15(iParam0[iVar03], 4))
		{
			if (!Function_15(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_15(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_15(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_256(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_15(iParam0[iVar03], 4))
		{
			if (!Function_15(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_256(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_256(iParam0[iVar03], 2);
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
	Function_253();
	return 1;
}

void Function_253() //Position: 0x7E2A / 32298
{
	if (!Function_254(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_254(int iParam0) //Position: 0x7E6A / 32362
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_255() //Position: 0x7E86 / 32390
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_256(var uParam0, int iParam1) //Position: 0x7EB1 / 32433
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_257() //Position: 0x7EC2 / 32450
{
	if (!Function_254(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

var Function_258(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7F04 / 32516
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_259(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_256(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_259(var uParam0, int iParam1, int iParam2) //Position: 0x7F3C / 32572
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_15(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_256(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_260() //Position: 0x8000 / 32768
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

