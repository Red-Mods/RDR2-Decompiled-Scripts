//Decompiled with MagicRDR v1.0
//Function Count : 176
//Statics Count : 433
//Natives Count : 188
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
	float fLocal_10 = 0.0f;
	struct<105> Local_11 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	struct<649> Local_135 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	fLocal_10 = 1.0f;
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_47 = 31;
	iLocal_48 = 33;
	iLocal_49 = 1;
	fLocal_50 = 2.0f;
	iLocal_52 = 0;
	iLocal_53 = 0;
	fLocal_80 = 60.0f;
	iLocal_127 = 0;
	iLocal_128 = 0;
	iLocal_129 = 0;
	iLocal_130 = 0;
	iLocal_131 = 0;
	iLocal_132 = 0;
	iLocal_133 = 0;
	iLocal_134 = 0;
	Function_173();
	if (Function_172())
	{
		Function_171();
	}
	else
	{
		if (Function_127())
		{
			Function_126(1);
		}
		else
		{
			Function_125(1);
		}
		bVar0 = CREATE_WORLD_SECTOR(Local_135, "nchuparosa");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(false);
		}
		iVar1 = 25;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_124(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_123(64, 0);
					Function_121();
					iVar1 = 25;
				}
			}
			Function_105(&iLocal_404, 0,2f, 0,7f, 12, 1.0f, 0.0f, 0.0f, 0.0f);
			Function_92(&uLocal_302);
			Function_17();
			WAIT(false);
		}
	}
	Function_15(&uLocal_302);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_chu_ffa01x", 0);
	DISABLE_CHILD_SECTOR("mp_CHU_ffa01x");
	Function_14();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x113 / 275
{
	Function_10(&iLocal_38);
	Function_3();
	Function_2();
	return;
}

void Function_2() //Position: 0x124 / 292
{
	if (iLocal_45)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_45 = 0;
	}
	return;
}

void Function_3() //Position: 0x163 / 355
{
	Function_4();
	return;
}

void Function_4() //Position: 0x16C / 364
{
	if (Function_8(4194304))
	{
		Function_5(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_8(8388608))
	{
		Function_5(8388608, 0, 1);
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x275 / 629
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_7(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_6(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x29D / 669
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x2B0 / 688
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x2BF / 703
{
	return Function_9(Global_76905.f_132, iParam0);
}

bool Function_9(var uParam0, int iParam1) //Position: 0x2D0 / 720
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x2DD / 733
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_11(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x303 / 771
{
	if (Function_13(uParam0[iParam13], 4))
	{
		if (Function_13(uParam0[iParam13], 1))
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
			Function_12(uParam0[iParam13], 1);
			Function_12(uParam0[iParam13], 2);
			Function_12(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x431 / 1073
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x44B / 1099
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14() //Position: 0x468 / 1128
{
	Function_10(&Local_135 + 4);
	RELEASE_LAYOUT_REF(Local_135);
	return;
}

void Function_15(int iParam0) //Position: 0x47A / 1146
{
	Function_123(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x48B / 1163
{
	if (iParam0->f_400 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_400, 0);
		iParam0->f_400 = "";
	}
	return;
}

void Function_17() //Position: 0x4AB / 1195
{
	Function_90();
	if (Function_89(1, 1))
	{
		Function_73(StackVal, StackVal, 7145, vLocal_42, 1, 7037);
	}
	else
	{
		if (!iLocal_46)
		{
			iLocal_46 = 1;
			Function_68(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		if (Function_65())
		{
			Function_44(4894, 4518);
		}
		else
		{
			Function_44(3052, 1356);
		}
		Function_18();
	}
	return;
}

void Function_18() //Position: 0x50A / 1290
{
	if (IS_OBJECT_VALID(Local_11.f_104))
	{
		DESTROY_OBJECT(Local_11.f_104);
		Function_19(&Local_11);
	}
	return;
}

void Function_19(int iParam0) //Position: 0x526 / 1318
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

int Function_20(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x54C / 1356
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_35(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_34(bParam0);
	bVar2 = Function_33(bParam0);
	bVar3 = Function_30(bParam0);
	iVar4 = Function_29((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_27(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), 0, 0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_25(38, bParam0));
		bVar0++;
		Function_21(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_21(bool bParam0, bool bParam1) //Position: 0x631 / 1585
{
	if (Function_8(4))
	{
		if (Function_22(bParam1, 1024, 1))
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

bool Function_22(bool bParam0, int iParam1, bool bParam2) //Position: 0x664 / 1636
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_89(iParam1, bParam2);
	}
	if (!Function_24(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_23(iParam1), 64);
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

var Function_23(int iParam0) //Position: 0x6E5 / 1765
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
	}
	return "UNKNOWN";
}

bool Function_24(bool bParam0) //Position: 0x96E / 2414
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

int Function_25(int iParam0, bool bParam1) //Position: 0xA0F / 2575
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_26(iParam0);
	}
	if (!Function_24(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_26(int iParam0) //Position: 0xA7D / 2685
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

bool Function_27(bool bParam0, int iParam1, int iParam2) //Position: 0xA96 / 2710
{
	var uVar0;
	
	return Function_28(bParam0, iParam1, &uVar0, iParam2);
}

int Function_28(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xAA7 / 2727
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

var Function_29(int iParam0, int iParam1, int iParam2) //Position: 0xB0C / 2828
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_30(bool bParam0) //Position: 0xB21 / 2849
{
	return Function_31(0, bParam0);
}

int Function_31(int iParam0, bool bParam1) //Position: 0xB2D / 2861
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_32(iParam0);
	}
	if (!Function_24(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_32(int iParam0) //Position: 0xB94 / 2964
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_33(bool bParam0) //Position: 0xBA4 / 2980
{
	return Function_25(12, bParam0);
}

int Function_34(int iParam0) //Position: 0xBB1 / 2993
{
	return Function_25(11, iParam0);
}

void Function_35(bool bParam0, int iParam1, char* cParam2) //Position: 0xBBE / 3006
{
	if (bParam0)
	{
		if (Function_36())
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

bool Function_36() //Position: 0xBDF / 3039
{
	return Function_8(32768);
}

int Function_37() //Position: 0xBEC / 3052
{
	if (!Function_39(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_38();
	return 1;
}

void Function_38() //Position: 0xC80 / 3200
{
	if (Function_8(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_5(8192, 1, 1);
	}
	else if (Function_8(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_5(8192, 1, 1);
	}
	else
	{
		Function_5(8192, 0, 1);
	}
	return;
}

bool Function_39(bool bParam0) //Position: 0xCBD / 3261
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_36() || Function_43(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_41(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_36())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_40(Function_36());
	return 1;
}

void Function_40(bool bParam0) //Position: 0xD3E / 3390
{
	if (bParam0 || Function_8(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_8(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_8(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_8(1048576) || Function_8(4)) || Function_89(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_5(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_41(int iParam0) //Position: 0xDC7 / 3527
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_42(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xDDB / 3547
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

int Function_43(bool bParam0, bool bParam1) //Position: 0xE20 / 3616
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

void Function_44(int iParam0, int iParam1) //Position: 0xE54 / 3668
{
	Function_45(iParam0, iParam1, 4511);
	return;
}

void Function_45(var uParam0, var uParam1, int iParam2) //Position: 0xE65 / 3685
{
	if (Function_8(0x4000000))
	{
		Function_48();
		Function_5(0x4000000, 0, 1);
	}
	if (Function_8(0x10000000))
	{
		Function_48();
		Function_5(0x10000000, 0, 1);
	}
	if (Function_8(2) != Function_8(0x2000000))
	{
		Function_48();
		Function_5(0x2000000, Function_8(2), 1);
	}
	if (Function_36())
	{
		Function_47(!Function_8(16));
	}
	if (Function_8(16))
	{
		Function_46(&uParam0, &uParam1, &iParam2);
		if (Function_8(8192))
		{
			if (!Function_8(4194304))
			{
				Function_5(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_8(8388608))
			{
				Function_5(8388608, 1, 1);
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
			Function_4();
		}
		Function_5(16384, 1, 1);
	}
	else if (!Function_8(32))
	{
		Function_4();
	}
	Function_5(32768, 0, 1);
	return;
}

void Function_46(var uParam0, var uParam1, int iParam2) //Position: 0xFFE / 4094
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_5(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_8(0x40000000);
	bVar3 = !Function_8(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_24(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_22(bVar1, 2048, 1))
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
				if (Function_27(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_8(4))
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
			if (Function_27(bVar1, (4294966296 - bVar1), 1))
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

void Function_47(bool bParam0) //Position: 0x1176 / 4470
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_5(16384, 0, 1);
	return;
}

void Function_48() //Position: 0x1190 / 4496
{
	Function_5(32768, 1, 0);
	return;
}

int Function_49() //Position: 0x119F / 4511
{
	return 1;
}

int Function_50(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x11A6 / 4518
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_35(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_34(bParam0);
	bVar2 = Function_33(bParam0);
	bVar3 = Function_30(bParam0);
	iVar4 = Function_29((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_27(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), 0, 0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_25(38, bParam0));
		bVar0++;
		Function_21(bVar0, bParam0);
	}
	if (Function_51(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_51(bool bParam0) //Position: 0x129B / 4763
{
	if (Function_53(bParam0, 1, 0) != 4294967295 && Function_52() != 4294967295)
	{
		return 0;
	}
	return Function_53(bParam0, 1, 0) != Function_52();
}

int Function_52() //Position: 0x12C3 / 4803
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_53(GET_LOCAL_SLOT(), 1, 0);
}

int Function_53(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12DA / 4826
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_24(bParam0))
			{
				if (!Function_22(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_54() //Position: 0x131E / 4894
{
	if (!Function_39(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_55();
	Function_38();
	return 1;
}

void Function_55() //Position: 0x13B5 / 5045
{
	if (Function_65())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_64())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_56(0, 0);
		Function_56(1, 0);
	}
	return;
}

void Function_56(bool bParam0, bool bParam1) //Position: 0x13E0 / 5088
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_52())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_63(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), 0, 0);
	if (bParam1)
	{
		Function_57(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_57(int iParam0, int iParam1, bool bParam2) //Position: 0x147F / 5247
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_36())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_59(iParam1, 0) };
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
		if (Function_58())
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

bool Function_58() //Position: 0x1572 / 5490
{
	return (Function_8(4096) || Function_8(4));
}

struct<16> Function_59(var uParam0, var uParam1) //Position: 0x1583 / 5507
{
	return StackVal, StackVal, StackVal, Function_60(Function_61(uParam0), uParam1);
}

struct<16> Function_60(bool bParam0, bool bParam1) //Position: 0x1595 / 5525
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

int Function_61(int iParam0) //Position: 0x15CA / 5578
{
	if (!Function_62())
	{
		return 0;
	}
	return StackVal;
}

bool Function_62() //Position: 0x15E3 / 5603
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_63(int iParam0) //Position: 0x15F0 / 5616
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_64() //Position: 0x160C / 5644
{
	return Function_52() == 4294967295;
}

bool Function_65() //Position: 0x1617 / 5655
{
	return Function_66(2);
}

int Function_66(int iParam0) //Position: 0x1621 / 5665
{
	return Function_67(&Global_79349, iParam0);
}

int Function_67(var uParam0, int iParam1) //Position: 0x1630 / 5680
{
	return Function_9(uParam0->f_44, iParam1);
}

void Function_68(vector3 vParam0, var uParam3) //Position: 0x163F / 5695
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_72(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_72(), "TurretFinderVol", false, vParam0, 0.0f, 0.0f, 0.0f, uParam3, uParam3, uParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_69(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_69(bool bParam0) //Position: 0x16F2 / 5874
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
	return Function_70(bVar0);
}

int Function_70(bool bParam0) //Position: 0x172D / 5933
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
	Function_71(bVar0);
	return bVar0;
}

void Function_71(bool bParam0) //Position: 0x177B / 6011
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0,4f);
	return;
}

var Function_72() //Position: 0x178E / 6030
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_73(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x17BD / 6077
{
	if (!IS_OBJECT_VALID(Local_11.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_11.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_11.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_74(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11) + Vector(0.0f, 2,45f, 0.0f), 1, 6936, 1, 125, 0, 0, 0);
	Function_74(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11 + 48) + Vector(0.0f, 2,15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_74(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1840 / 6208
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_75(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_75(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) //Position: 0x188B / 6283
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	bool bVar14;
	
	if (!HUD_IS_FADED())
	{
		fVar0 = (fParam4 - iParam0->f_44);
		vVar1 = { StackVal, StackVal, Vector(vParam7, StackVal, StackVal) + Vector(0.0f, (SIN_DEGREE((75.0f * fVar0)) * 0,01f), 0.0f) };
		fVar4 = VDIST2(vParam1, vVar1);
		if (fVar4 > 2,25f || fVar4 <= 625.0f)
		{
			Function_19(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_10;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && uParam12)
		{
			fVar5 = 14.0f;
		}
		vVar6 = { StackVal, StackVal, Vector(Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), vParam1, StackVal), StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f) };
		*(iParam0 + 20) = { StackVal, StackVal, vVar6 };
		fVar9 = (UNK_0xADF7D54B(&vVar6) + 3,14159f);
		bVar10 = false;
		if (iParam0->f_32 == 0)
		{
			if (fVar0 <= fVar5 && fVar5 <= 0.0f)
			{
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(cParam6, "HUD_STINGER_TEXT_MASTER"));
				iParam0->f_32 = 1;
			}
			fVar9 = (fVar9 + (SIN_DEGREE((100.0f * fVar0)) * 0,1f));
			bVar10 = true;
		}
		else
		{
			iParam0->f_36 = (iParam0->f_36 + (17.0f * fParam5));
			if (iParam0->f_32 == 1)
			{
				if (FABS((iParam0->f_36 - fVar9)) <= (3,14159f * 0,5f))
				{
					iParam0->f_32 = 2;
					iParam0->f_36 = (iParam0->f_36 - 3,14159f);
					iParam0->f_40++;
					if (iParam0->f_40 > iParam10)
					{
						iParam0->f_40 = 0;
					}
					Function_19(iParam0);
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
		if (FABS((iParam0->f_36 - fVar9)) > 0,0001f)
		{
			return;
		}
		if (bVar10)
		{
			iParam0->f_36 = fVar9;
		}
		vVar11 = { 0,01f, -0,01f, -0,01f };
		ROTATE_VECTOR_XZ(&vVar11, iParam0->f_36, 1);
		if (!IS_OBJECT_VALID(*iParam0))
		{
			Stack.Push(bParam6);
			Stack.Push(uParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(uParam14);
			Call_Loc(uParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, uParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(uParam14);
				Call_Loc(uParam11);
			}
		}
	}
}

var Function_76(float fParam0) //Position: 0x1B0A / 6922
{
	return (fParam0 * 57,29578f);
}

var Function_77(int iParam0, var uParam1) //Position: 0x1B18 / 6936
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_11.f_96 != iParam0)
	{
		Local_11.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_41(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_78(int iParam0, var uParam1) //Position: 0x1B7D / 7037
{
	uParam1 = uParam1;
	if (Local_11.f_100 != iParam0)
	{
		Local_11.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("DM_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0);
	}
	return "mp_lobby_summary";
}

var Function_79() //Position: 0x1BE9 / 7145
{
	int iVar0;
	
	iVar0 = Function_85(Global_83591.f_140, &vLocal_42, 0.0f, &Global_83591 + 276, 1);
	Function_80(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_80(bool bParam0, int iParam1) //Position: 0x1C16 / 7190
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
	
	GET_OBJECT_RELATIVE_POSITION(bParam0, 0,2f, 0.0f, 0,51f, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(bParam0, 0.0f, 0.0f, 0.0f, &vVar3);
	vVar9 = { StackVal, StackVal, vVar0 };
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, &vVar0, &uVar6))
	{
		vVar0 = { StackVal, StackVal, vVar9 };
	}
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_84(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_83((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_83((*iParam1)[iVar202], &iVar21))
		{
			if (Function_81((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_81(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1D25 / 7461
{
	float fVar0;
	
	if (!Function_82(bParam0))
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		iParam4 = 3;
		bParam3 = true;
	}
	fVar0 = (((TO_FLOAT(bParam3) / TO_FLOAT((iParam4 - 1))) * (0,535f - -0,46f)) + -0,46f);
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
		case default:
			*uParam1 = { fVar0, 0,333f, -0,055f };
			*uParam2 = { (-30.0f + RAND_FLOAT_RANGE(-15.0f, 15.0f)), 0.0f, 90.0f };
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			*uParam1 = { fVar0, 0,315f, 0,006f };
			*uParam2 = { (-10.0f + RAND_FLOAT_RANGE(-7,5f, 7,5f)), -68.0f, (90.0f + RAND_FLOAT_RANGE(-3.0f, 3.0f)) };
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			*uParam1 = { fVar0, 0,333f, -0,055f };
			*uParam2 = { (-60.0f + RAND_FLOAT_RANGE(-10.0f, 10.0f)), 0.0f, -90.0f };
			return 1;
			break;
	}
	return 0;
}

bool Function_82(int iParam0) //Position: 0x1E4C / 7756
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_83(bool bParam0, int iParam1) //Position: 0x1E5E / 7774
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

var Function_84() //Position: 0x1EBA / 7866
{
	int iVar0;
	
	return iVar0;
}

var Function_85(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1EC2 / 7874
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_87(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_83((*uParam3)[iVar12], &iVar2))
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
		if (Function_83((*uParam3)[iVar12], &iVar2))
		{
			if (Function_86((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_86(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1FB0 / 8112
{
	if (!Function_82(bParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000027:
		case 0x00000028:
			if (iParam3 == 1)
			{
				*uParam1 = { 0,08916403f, 0,8989502f, 0,07509536f };
				*uParam2 = { -60,09727f, -101,49f, 47,60939f };
			}
			else
			{
				*uParam1 = { 0,02631292f, 0,8451666f, -0,1088216f };
				*uParam2 = { 81,3988f, -1,648355f, -169,4713f };
			}
			return 1;
			break;
		
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002B:
			if (iParam3 == 1)
			{
				*uParam1 = { 0,3568475f, 1,28952f, -0,22761f };
				*uParam2 = { -124,3062f, 85,737f, -40,141f };
			}
			else if (iParam3 == 2)
			{
				*uParam1 = { 0,06225565f, 1,28952f, -0,22761f };
				*uParam2 = { -219,3702f, -86,19345f, 135,0233f };
			}
			else
			{
				*uParam1 = { 0,3401467f, 1,258268f, -0,22761f };
				*uParam2 = { -91,1388f, 85,737f, -40,141f };
			}
			return 1;
			break;
		
		case 0x0000002F:
		case 0x00000030:
			if (bParam0 != 25)
			{
				*uParam1 = { 0,3715671f, 0,8808789f, -0,1146231f };
				*uParam2 = { 57,148f, 27,893f, 5,454f };
			}
			else
			{
				*uParam1 = { 0,4015671f, 0,9808789f, -0,01462308f };
				*uParam2 = { -122,852f, 27,893f, 5,454f };
			}
			return 1;
			break;
	}
	return 0;
}

var Function_87(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2144 / 8516
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
	vVar6 = { 0,2f, 0.0f, -0,065f };
	ROTATE_VECTOR_XZ(&vVar6, bParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_88()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_88() //Position: 0x21B0 / 8624
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_89(bool bParam0, bool bParam1) //Position: 0x21D7 / 8663
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_90() //Position: 0x21F7 / 8695
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_45)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000002:
						Function_91("DM_help", 4294967295);
						break;
					
					case 0x00000011:
						Function_91("TDM_help", 4294967295);
						break;
				}
				iLocal_45 = 1;
			}
		}
	}
	else
	{
		Function_2();
	}
	return;
}

void Function_91(char* cParam0, int iParam1) //Position: 0x2267 / 8807
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (iParam1 == 4294967295)
	{
		strcpy(&cVar0, cParam0, 32);
		stradd(&cVar0, "_count", 32);
		iParam1 = STRING_TO_INT(UI_GET_STRING(&cVar0));
	}
	if (Global_6286 == 0)
	{
		Global_6286 = ROUND((GET_PROFILE_TIME() * 1000.0f));
	}
	strcpy(&cVar8, cParam0, 32);
	stradd(&cVar8, "_", 32);
	stradd(&cVar8, I2STR((Global_6286 % iParam1)), 32);
	Global_6286++;
	UI_SET_TEXT("LoadingTip", &cVar8);
	UI_ENTER("LoadingTip");
	UI_REFRESH("LoadingScreen");
	return;
}

int Function_92(int iParam0) //Position: 0x22FE / 8958
{
	int iVar0;
	
	if (!Function_103(*iParam0) || (Function_124(64) && Function_99()))
	{
		iParam0->f_4 = 0;
		Function_16(iParam0);
		if (!Function_103(*iParam0))
		{
		}
		if (Function_124(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_103(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 400);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_396)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_96(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_9((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_6(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_9((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_396)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_396)
				{
					if (!Function_9((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_9((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_95((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_94((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_396)
			{
				iParam0->f_404 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_404) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_16(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_93(3, iParam0->f_396))
			{
				if (iParam0->f_396 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_396);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_9((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_9((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_7(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_9((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_9((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_9((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
							}
						}
						else if (StackVal || !IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_OPENING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
						{
							CLOSE_DOOR((iParam0 + 12[StackVal5])->f_12, 1.0f);
						}
					}
				}
				iVar0++;
			}
			break;
	}
	return 1;
}

int Function_93(int iParam0, int iParam1) //Position: 0x2685 / 9861
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_94(bool bParam0, bool bParam1) //Position: 0x2697 / 9879
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_95(bool bParam0, bool bParam1) //Position: 0x26EB / 9963
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

int Function_96(var uParam0, var uParam1, int iParam2) //Position: 0x273C / 10044
{
	return Function_97(Global_29006, uParam0, uParam1, iParam2);
}

int Function_97(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x274E / 10062
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_98(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

bool Function_98(int iParam0) //Position: 0x27EA / 10218
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_99() //Position: 0x2800 / 10240
{
	return !Function_100();
}

bool Function_100() //Position: 0x280A / 10250
{
	if (Function_102())
	{
		return (Function_101() != 1 || Function_101() != 0);
	}
	return 0;
}

int Function_101() //Position: 0x2823 / 10275
{
	return Global_79349.f_16;
}

bool Function_102() //Position: 0x282F / 10287
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_103(int iParam0) //Position: 0x2838 / 10296
{
	if (!Function_98(iParam0))
	{
		return 1;
	}
	return Function_104(&(Global_29008[iParam0]), 4);
}

int Function_104(var uParam0, bool bParam1) //Position: 0x2854 / 10324
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_105(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2870 / 10352
{
	float fVar0;
	
	if (Function_120())
	{
		if (Function_119(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_115(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_109((iParam0 + 8[iParam0->f_1125])->f_12, 0, bParam3, 0, 0);
				Function_106((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_109((iParam0 + 8[iParam0->f_1125])->f_16, 0, bParam3, 0, 0);
				Function_106((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_106(int iParam0, var uParam1, int iParam2) //Position: 0x2913 / 10515
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_108(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_107(iParam2);
	}
	return;
}

void Function_107(int iParam0) //Position: 0x2938 / 10552
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_108(int iParam0) //Position: 0x294D / 10573
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_109(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2962 / 10594
{
	int iVar0;
	bool bVar1;
	
	Function_114(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_113(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_110(StackVal, bVar1, bParam4);
		}
	}
}

void Function_110(bool bParam0, bool bParam1, bool bParam2) //Position: 0x29D4 / 10708
{
	int iVar0;
	
	Function_114(bParam0);
	Function_112(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, bParam1);
	Function_111();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
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
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_111() //Position: 0x2B4D / 11085
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_112(bool bParam0) //Position: 0x2B59 / 11097
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

void Function_113(int iParam0, int iParam1) //Position: 0x2B9F / 11167
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_114(iParam0);
	Function_112(iVar0);
	PRINTNL();
	Function_110(iParam0, iVar0, iParam1);
	return;
}

void Function_114(int iParam0) //Position: 0x2BC4 / 11204
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

float Function_115(int iParam0) //Position: 0x2C0A / 11274
{
	return -Function_116(iParam0);
}

float Function_116(int iParam0) //Position: 0x2C16 / 11286
{
	if (Function_119(iParam0))
	{
		if (Function_118(iParam0))
		{
			return StackVal;
		}
		Function_117();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_117() //Position: 0x2CE7 / 11495
{
	if (!Function_120())
	{
	}
	return;
}

bool Function_118(int iParam0) //Position: 0x2CF4 / 11508
{
	return Function_9(*iParam0, 2);
}

bool Function_119(int iParam0) //Position: 0x2D01 / 11521
{
	return Function_9(*iParam0, 1);
}

bool Function_120() //Position: 0x2D0E / 11534
{
	return NET_IS_IN_SESSION();
}

void Function_121() //Position: 0x2D17 / 11543
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_84());
	Function_122(bVar0, "bottle", Local_135.f_84);
	Function_122(bVar0, "glass", Local_135.f_84);
	Function_122(bVar0, "crate14", Local_135.f_84);
	Function_122(bVar0, "crate13", Local_135.f_84);
	Function_122(bVar0, "package", Local_135.f_84);
	Function_122(bVar0, "nlantern05", Local_135.f_84);
	Function_122(bVar0, "c_gen_blanket", Local_135.f_84);
	Function_122(bVar0, "c_tes_blanket", Local_135.f_84);
	Function_122(bVar0, "p_gen_bucket02x", Local_135.f_84);
	Function_122(bVar0, "jar0", Local_135.f_84);
	Function_122(bVar0, "book", Local_135.f_84);
	Function_122(bVar0, "spittoon", Local_135.f_84);
	Function_122(bVar0, "milkcan", Local_135.f_84);
	Function_122(bVar0, "jug0", Local_135.f_84);
	Function_122(bVar0, "fish", Local_135.f_84);
	Function_122(bVar0, "gourd", Local_135.f_84);
	Function_122(bVar0, "candy", Local_135.f_84);
	Function_122(bVar0, "pitcher", Local_135.f_84);
	Function_122(bVar0, "p_gen_potclay01x", Local_135.f_84);
	Function_122(bVar0, "p_gen_potclay02x", Local_135.f_84);
	Function_122(bVar0, "potclay", Local_135.f_84);
	Function_122(bVar0, "sackcorn", Local_135.f_84);
	Function_122(bVar0, "basket", Local_135.f_84);
	Function_122(bVar0, "terracotta", Local_135.f_84);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_122(bool bParam0, char* cParam1, bool bParam2) //Position: 0x2F0B / 12043
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_84(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, bParam2, cParam1, 1);
	bVar2 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_SET(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
		iVar0++;
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_OBJECTSET(bVar1);
	DESTROY_ITERATOR(bVar2);
	return;
}

void Function_123(int iParam0, bool bParam1) //Position: 0x2F64 / 12132
{
	if (bParam1)
	{
		Function_7(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_6(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_124(int iParam0) //Position: 0x2F8C / 12172
{
	return Function_9(StackVal, iParam0);
}

void Function_125(bool bParam0) //Position: 0x2F9F / 12191
{
	Function_123(16, bParam0);
	return;
}

void Function_126(var uParam0) //Position: 0x2FAC / 12204
{
	Function_123(8, uParam0);
	return;
}

bool Function_127() //Position: 0x2FB9 / 12217
{
	Function_170(&iLocal_404, 0, 9, 30, 0, 0, 1);
	Function_170(&iLocal_404, 1, 9, 30, 3, 3, 3);
	Function_170(&iLocal_404, 2, 12, 0, 1, 2, 2);
	Function_170(&iLocal_404, 3, 12, 0, 1, 1, 0);
	Function_170(&iLocal_404, 4, 23, 0, 0, 0, 1);
	Function_167(&iLocal_404);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	while (!Function_160())
	{
		if (IS_EXITFLAG_SET())
		{
			return 0;
		}
		WAIT(false);
	}
	ENABLE_CHILD_SECTOR("mp_chu_ffa01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_chu_ffa01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_153(&Global_83591 + 276, 0);
	Function_151(&Global_83591, 1, 22, 1, 1);
	Function_151(&Global_83591, 2, 1, 10, 1);
	Function_151(&Global_83591, 3, 12, 10, 1);
	Function_151(&Global_83591, 4, 15, 15, 1);
	Function_146(&Global_83591, 1, 20, 2, 1);
	Function_146(&Global_83591, 2, 3, 10, 1);
	Function_146(&Global_83591, 3, 13, 10, 1);
	Function_146(&Global_83591, 4, 16, 15, 1);
	Function_145(&Global_83591);
	Function_144(&Global_83591 + 276, 4);
	Function_143(0, 6);
	Function_143(1, 1);
	Function_140(&bLocal_298, "p_gen_gatlingGun01x", 0, 0);
	if (!Function_136(&uLocal_302))
	{
		return 0;
	}
	Function_128();
	return 1;
}

void Function_128() //Position: 0x3104 / 12548
{
	Function_132(Local_135);
	if (Function_65())
	{
		Function_131("MEX_SONG_03", "MEX_SONG_01", 0, 58, 58, 1);
	}
	else
	{
		Function_131("MEX_SONG_03", "MEX_SONG_05", 0, 58, 58, 1);
	}
	Function_129(Local_135.f_648);
	return;
}

void Function_129(bool bParam0) //Position: 0x3168 / 12648
{
	DECOR_SET_OBJECT(Function_130(), "LobbyGringoSet", bParam0);
	return;
}

var Function_130() //Position: 0x3188 / 12680
{
	return Global_83591.f_140;
}

void Function_131(char* cParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3194 / 12692
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

void Function_132(var uParam0) //Position: 0x3224 / 12836
{
	if (Function_135())
	{
		Function_144(&Global_83591 + 276, 2);
	}
	Function_134(uParam0);
	Global_83591.f_4 = 2;
	Function_133();
	vLocal_42 = { StackVal, StackVal, Function_133() };
	return;
}

vector3 Function_133() //Position: 0x324E / 12878
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_130();
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

void Function_134(var uParam0) //Position: 0x3296 / 12950
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_135() //Position: 0x32A4 / 12964
{
	return Function_9(Global_79962, 1024);
}

bool Function_136(bool bParam0) //Position: 0x32B4 / 12980
{
	if (!Function_139(bParam0, Global_30693[0]))
	{
		return 0;
	}
	Function_137(bParam0, "nchuparosa", "bank01", 1, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "bank01", 2, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "bank01", 3, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "church01", 1, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "trainstation01", 1, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "trainstation01", 2, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "trainstation01", 3, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "trainstation01", 4, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "trainstation01", 5, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 1, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 2, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 3, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 4, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 5, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 6, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 7, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 8, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 9, 1, 0, 1, 1);
	Function_137(bParam0, "nchuparosa", "cityHall01", 10, 1, 0, 1, 1);
	return 1;
}

int Function_137(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3581 / 13697
{
	int iVar0;
	
	iVar0 = iParam0->f_396;
	if (!Function_138(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_7(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_7(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_7(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_7(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_138(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x35F2 / 13810
{
	if (iParam0->f_396 > 19)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_3965] = uParam1;
	(iParam0 + 12[iParam0->f_3965])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_3965])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_3965])->f_16 = 0;
	iParam0->f_396++;
	return 1;
}

bool Function_139(int iParam0, int iParam1) //Position: 0x364E / 13902
{
	int iVar0;
	
	if (!Function_98(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_396 = 0;
	iParam0->f_4 = 0;
	iParam0->f_400 = "";
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		(*iParam0 + 12)[iVar05] = "";
		(iParam0 + 12[iVar05])->f_4 = "";
		(iParam0 + 12[iVar05])->f_8 = 0;
		(iParam0 + 12[iVar05])->f_16 = 0;
		(iParam0 + 12[iVar05])->f_12 = "";
		iVar0++;
	}
	return 1;
}

var Function_140(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x36C4 / 14020
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_142(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_141(uParam0[iVar03], 8);
	}
	return iVar0;
}

void Function_141(var uParam0, int iParam1) //Position: 0x36FC / 14076
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

var Function_142(var uParam0, int iParam1, int iParam2) //Position: 0x370D / 14093
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_13(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_141(uParam0[iVar03], 4);
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

void Function_143(int iParam0, int iParam1) //Position: 0x37D1 / 14289
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_144(int iParam0, int iParam1) //Position: 0x37DF / 14303
{
	(iParam0 + 228)->f_220 = 0;
	Function_7(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_145(int iParam0) //Position: 0x37F7 / 14327
{
	iParam0->f_844 = 0;
	return;
}

void Function_146(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3803 / 14339
{
	Function_147(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_147(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x381B / 14363
{
	Function_148(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_148(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3832 / 14386
{
	if (!Function_150(iParam1))
	{
		return;
	}
	Function_149(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_149(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3855 / 14421
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

bool Function_150(int iParam0) //Position: 0x387F / 14463
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x388F / 14479
{
	Function_152(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_152(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x38A7 / 14503
{
	Function_148(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_153(int iParam0, bool bParam1) //Position: 0x38BC / 14524
{
	Function_157(iParam0);
	Function_157(iParam0 + 228);
	if (bParam1)
	{
		Function_154(iParam0);
	}
	return;
}

void Function_154(int iParam0) //Position: 0x38D8 / 14552
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_155(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_155(var uParam0, int iParam1) //Position: 0x38F8 / 14584
{
	Function_156(uParam0, iParam1, 0);
	return;
}

void Function_156(int iParam0, int iParam1, int iParam2) //Position: 0x3906 / 14598
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_157(int iParam0) //Position: 0x3917 / 14615
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_159(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_158(iParam0, 0.0f);
	return;
}

void Function_158(var uParam0, int iParam1) //Position: 0x3944 / 14660
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_159(var uParam0) //Position: 0x3950 / 14672
{
	Function_149(uParam0, 4294967295, 0, 1);
	return;
}

bool Function_160() //Position: 0x395E / 14686
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
	
	Function_166(3, 3);
	uVar0 = uVar0;
	Function_140(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/mex_lean_window", 1, 0);
	Function_140(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_140(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_140(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/knl_watertrough", 1, 0);
	Function_140(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_loose", 1, 0);
	Function_140(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	if (!Function_161(&Local_135 + 4))
	{
		return 0;
	}
	Local_135 = FIND_NAMED_LAYOUT("Deathmatch_CHU_layout");
	if (!IS_LAYOUTREF_VALID(Local_135))
	{
		Local_135 = CREATE_LAYOUT("Deathmatch_CHU_layout");
	}
	Local_135.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_135, "playablespace", 3, -2699,35f, 31,3649f, 4256,934f, 0.0f, 9,94408f, 0.0f, 111,9685f, 39,9726f, 89,20029f);
	Local_135.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_135, "v_clear_vol", 2, -2681,861f, 31,5313f, 4254,708f, 0.0f, 0.0f, 0.0f, 219,4927f, 45,04032f, 127,2684f);
	Local_135.f_112 = CREATE_VOLUME_SET_IN_LAYOUT(Local_135, "CapVols_set");
	(*&Local_135 + 88)[0] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_4", 3, -2703,664f, 31,15573f, 4262,842f, 0.0f, 44,66443f, 0.0f, 1,5f, 1,5f, 1,5f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[0]);
	(*&Local_135 + 88)[1] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_3", 3, -2644,05f, 31,12158f, 4234,607f, 0.0f, 289,4312f, 0.0f, 1,396057f, 1,396057f, 1,396057f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[1]);
	(*&Local_135 + 88)[2] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_2", 3, -2657,862f, 31,38304f, 4255,961f, 0.0f, 259,8388f, 0.0f, 0,92353f, 0,5419421f, 0,6464341f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[2]);
	(*&Local_135 + 88)[3] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_1", 3, -2710,074f, 32,13754f, 4211,14f, 0.0f, -1,063508f, 0.0f, 1,116659f, 1,116659f, 1,116659f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[3]);
	(*&Local_135 + 88)[4] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_0", 3, -2759,117f, 31,97549f, 4269,509f, 0.0f, -261,3787f, 0.0f, 1,730813f, 1,730813f, 1,730813f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[4]);
	Local_135.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_0", 3, -2760,512f, 32,12549f, 4256f, 0.0f, 9,233223f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_1", 3, -2748,588f, 32,12549f, 4251,412f, 0.0f, 46,20432f, 0.0f, 0,9022594f, 0,9034847f, 0,9022594f);
	Local_135.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_2", 3, -2744.0f, 32,12549f, 4245,574f, 0.0f, 135,6665f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_3", 3, -2738,575f, 37,05106f, 4239,249f, 0.0f, 49,19656f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_4", 3, -2734,75f, 36,39109f, 4227,83f, 0.0f, 34,35859f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_5", 3, -2729,205f, 32,12549f, 4224,676f, 0.0f, -61,05159f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_6", 3, -2721,499f, 32,27308f, 4240,707f, 0.0f, -57,00735f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_7", 3, -2724,598f, 32,01712f, 4212,325f, 0.0f, 98,80845f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_8", 3, -2699,351f, 32,04588f, 4209,363f, 0.0f, -86,14007f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_9", 3, -2700,719f, 32,278f, 4217,393f, 0.0f, -13,28103f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_10", 3, -2693,202f, 32,42036f, 4220,326f, 0.0f, -10,46397f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_11", 3, -2685,337f, 37,30204f, 4222,66f, 0.0f, -12,02485f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_12", 3, -2682,895f, 32,46119f, 4223,428f, 0.0f, -0,2914835f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_13", 3, -2671,783f, 32,0428f, 4222,503f, 0.0f, -10,38336f, 0.0f, 0,6935719f, 0,6945138f, 0,6935719f);
	Local_135.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_14", 3, -2648,276f, 31,74105f, 4224,108f, 0.0f, 23,81742f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_15", 3, -2641,641f, 30,95173f, 4246,359f, 0.0f, 187,2254f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_16", 3, -2641,966f, 30,50269f, 4269,966f, 0.0f, 149,6369f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_17", 3, -2658,259f, 31,38693f, 4248,428f, 0.0f, -97,31637f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_18", 3, -2648,525f, 31,38304f, 4250,552f, 0.0f, -8,40016f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_19", 3, -2652f, 31,11643f, 4264,457f, 0.0f, -97,31332f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_20", 3, -2650,904f, 35,67748f, 4264,538f, 0.0f, -99,03541f, 0.0f, 0,8338634f, 0,8349957f, 0,8338634f);
	Local_135.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_21", 3, -2662,458f, 40,50032f, 4255,347f, 0.0f, 72,98388f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_22", 3, -2657,712f, 31,26224f, 4278,634f, 0.0f, -43,77999f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_23", 3, -2669,73f, 31,25181f, 4282,102f, 0.0f, -176,702f, 0.0f, 0,7241939f, 0,7251773f, 0,7241939f);
	Local_135.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_24", 3, -2650,365f, 37,47691f, 4275,292f, 0.0f, -135,0193f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_25", 3, -2682,648f, 31,51851f, 4293,608f, 0.0f, 93,46996f, 0.0f, 0,9461301f, 0,9474149f, 0,9461301f);
	Local_135.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_26", 3, -2707,332f, 31,18518f, 4291,591f, 0,9350824f, -182,6491f, -1,598515f, 0,8757765f, 0,8769658f, 0,8757765f);
	Local_135.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_27", 3, -2682,453f, 31,92464f, 4286,938f, 0.0f, 88,61055f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_28", 3, -2698,622f, 32,07688f, 4287,92f, 0.0f, 179,3026f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_29", 3, -2719,374f, 32,82863f, 4296f, 0.0f, 90,42851f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_30", 3, -2733,317f, 33,04647f, 4291,812f, 0.0f, 150,1028f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	Local_135.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_31", 3, -2753,526f, 32,66684f, 4281,099f, 0.0f, -161,4441f, 0.0f, 1,045797f, 1,047217f, 1,045797f);
	*(&Local_135 + 244) = { -2698,209f, 31,38086f, 4250,51f };
	*(&Local_135 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_135.f_268 = CREATE_POINT_IN_LAYOUT(Local_135, "Showdown_A", -2698,209f, 31,38086f, 4250,51f, 0.0f, 0.0f, 0.0f);
	*(&Local_135 + 272) = { -2699,573f, 31,6074f, 4242,584f };
	*(&Local_135 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_135.f_296 = CREATE_POINT_IN_LAYOUT(Local_135, "Showdown_B", -2699,573f, 31,6074f, 4242,584f, 0.0f, 0.0f, 0.0f);
	*(&Local_135 + 300) = { -2632.0f, 30,25276f, 4260f };
	*(&Local_135 + 300 + 12) = { 0.0f, 97,61549f, 0.0f };
	Local_135.f_324 = CREATE_POINT_IN_LAYOUT(Local_135, "StandoffCenter", -2632.0f, 30,25276f, 4260f, 0.0f, 97,61549f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_0", -2746,696f, 31,12157f, 4228f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_1", -2740.0f, 32,12549f, 4232f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_2", -2732,156f, 32,60661f, 4245,396f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_3", -2712,647f, 32,29871f, 4241,44f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_4", -2694,7f, 32,38525f, 4230,658f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_5", -2676,544f, 32,52636f, 4225,905f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_6", -2673,749f, 32,39965f, 4214,452f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_7", -2631,997f, 30,25627f, 4260,001f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_8", -2667,735f, 35,70315f, 4254,354f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_9", -2661,697f, 31,26665f, 4267,013f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_10", -2673,559f, 31,52944f, 4290,958f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_11", -2712f, 32,83507f, 4296f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_12", -2726,021f, 32,82832f, 4276f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_13", -2721,946f, 32,73097f, 4258,055f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_14", -2690,314f, 31,40886f, 4246,347f, 0.0f, 0.0f, 0.0f);
	Local_135.f_328 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_135, 8, 0);
	*(&Local_135 + 332[06]) = { -2647,086f, 35,67685f, 4250,521f };
	*(&Local_135 + 332[06] + 12) = { 0.0f, 260,2415f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P4", -2647,086f, 35,67685f, 4250,521f, 0.0f, 260,2415f, 0.0f);
	DECOR_SET_INT(bVar1, "type", true);
	DECOR_SET_INT(bVar1, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_135.f_328);
	*(&Local_135 + 332[16]) = { -2680,887f, 32,10298f, 4234,228f };
	*(&Local_135 + 332[16] + 12) = { 0.0f, -9,236032f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P3", -2680,887f, 32,10298f, 4234,228f, 0.0f, -9,236032f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_135.f_328);
	*(&Local_135 + 332[26]) = { -2709,112f, 32,81695f, 4281,229f };
	*(&Local_135 + 332[26] + 12) = { 0.0f, 246,8756f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P2", -2709,112f, 32,81695f, 4281,229f, 0.0f, 246,8756f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_135.f_328);
	*(&Local_135 + 332[36]) = { -2740,321f, 32,6093f, 4253,142f };
	*(&Local_135 + 332[36] + 12) = { 0.0f, 46,82956f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P1", -2740,321f, 32,6093f, 4253,142f, 0.0f, 46,82956f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_135.f_328);
	*(&Local_135 + 332[46]) = { -2713,089f, 32,20023f, 4219,024f };
	*(&Local_135 + 332[46] + 12) = { 0.0f, 124,5924f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_R2", -2713,089f, 32,20023f, 4219,024f, 0.0f, 124,5924f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_135.f_328);
	*(&Local_135 + 332[56]) = { -2692,54f, 31,13263f, 4281,21f };
	*(&Local_135 + 332[56] + 12) = { 0.0f, 180,6923f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_R1", -2692,54f, 31,13263f, 4281,21f, 0.0f, 180,6923f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_135.f_328);
	*(&Local_135 + 332[66]) = { -2664,633f, 31,25797f, 4278,045f };
	*(&Local_135 + 332[66] + 12) = { 0.0f, 226,0254f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_B2", -2664,633f, 31,25797f, 4278,045f, 0.0f, 226,0254f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_135.f_328);
	*(&Local_135 + 332[76]) = { -2742,662f, 32,12549f, 4239,732f };
	*(&Local_135 + 332[76] + 12) = { 0.0f, 225,0674f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_B1", -2742,662f, 32,12549f, 4239,732f, 0.0f, 225,0674f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_135.f_328);
	*(&Local_135 + 332[86]) = { -2665,004f, 37,47691f, 4287,313f };
	*(&Local_135 + 332[86] + 12) = { 0.0f, 133,4951f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_S1", -2665,004f, 37,47691f, 4287,313f, 0.0f, 133,4951f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_135.f_328);
	*(&Local_135 + 332[96]) = { -2708,544f, 32,08113f, 4242,181f };
	*(&Local_135 + 332[96] + 12) = { 0.0f, 32,18698f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_D1", -2708,544f, 32,08113f, 4242,181f, 0.0f, 32,18698f, 0.0f);
	DECOR_SET_INT(bVar10, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_135.f_328);
	*(&Local_135 + 332[106]) = { -2752,052f, 32,67473f, 4280,769f };
	*(&Local_135 + 332[106] + 12) = { 0.0f, 283,9405f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_A1", -2752,052f, 32,67473f, 4280,769f, 0.0f, 283,9405f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_135.f_328);
	*(&Local_135 + 332[116]) = { -2692,147f, 31,95225f, 4234,373f };
	*(&Local_135 + 332[116] + 12) = { 18,10959f, 345,8849f, 0,1011724f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_A2", -2692,147f, 31,95225f, 4234,373f, 18,10959f, 345,8849f, 0,1011724f);
	DECOR_SET_INT(bVar12, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_135.f_328);
	*(&Local_135 + 332[126]) = { -2635,281f, 30,61998f, 4247,832f };
	*(&Local_135 + 332[126] + 12) = { 0.0f, 181,0491f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_A3", -2635,281f, 30,61998f, 4247,832f, 0.0f, 181,0491f, 0.0f);
	DECOR_SET_INT(bVar13, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_135.f_328);
	Local_135.f_648 = CREATE_OBJECTSET_IN_LAYOUT(Function_84(), Local_135, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "mex_lean_window", "mex_lean_window", -2710,029f, 32,26497f, 4240,836f, 0.0f, -144,4665f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand2", "smoking_stand", -2709,256f, 32,28f, 4240,337f, 0.0f, 215,0796f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "nlean_rail", "nlean_rail", -2715,355f, 32,28f, 4244,152f, 0.0f, -145,1052f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand3", "smoking_stand", -2716,927f, 32,28f, 4245,252f, 0.0f, 230,7018f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "knl_watertrough", "knl_watertrough", -2715,935f, 32,14197f, 4246,886f, 0.0f, 31,39256f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand4", "smoking_stand", -2702,035f, 31,3081f, 4255,997f, 0.0f, -41,39224f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "lean_rail1", "nlean_rail", -2700,94f, 31,2599f, 4255,972f, 0.0f, 0.0f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand5", "smoking_stand", -2698,667f, 31,3622f, 4255,305f, 0.0f, -2,336277f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand6", "smoking_stand", -2690,602f, 31,54942f, 4254,714f, 0.0f, -0,7959735f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand_loose", "smoking_stand_loose", -2713,749f, 32,3705f, 4251,811f, 0.0f, -53,04388f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand", "smoking_stand", -2705,178f, 32,27924f, 4252,158f, 0.0f, 12,41498f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand_loose1", "smoking_stand_loose", -2703,59f, 32,08671f, 4238,959f, 0.0f, -194,7893f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -2699,977f, 31,80704f, 4239,073f, 0.0f, -215,4837f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -2713,366f, 32,28628f, 4242,655f, 0.0f, -125,9982f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand1", "smoking_stand", -2686,161f, 31,54775f, 4251,192f, 0.0f, 79,20399f, 0.0f), Local_135.f_648);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_dnd_rowdydrink2", "stand_dnd_rowdydrink", -2707,374f, 32,28f, 4238,586f, 0.0f, -148,7523f, 0.0f), Local_135.f_648);
	return 1;
}

bool Function_161(int iParam0) //Position: 0x52FD / 21245
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_165();
	iVar1 = 0;
	if (!Function_13(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_141(iParam0[iVar03], 8);
		}
		else if (Function_164())
		{
			iVar1 = 1;
			Function_141(iParam0[iVar03], 8);
		}
		Function_141(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_13(iParam0[iVar03], 4))
		{
			if (!Function_13(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_13(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_13(iParam0[03], 8) || iVar1));
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
				Function_141(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_13(iParam0[iVar03], 4))
		{
			if (!Function_13(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_141(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_141(iParam0[iVar03], 2);
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
							Function_141(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_141(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_141(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_141(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_141(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_141(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_141(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_141(iParam0[iVar03], 2);
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
	Function_162();
	return 1;
}

void Function_162() //Position: 0x5678 / 22136
{
	if (!Function_163(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_163(int iParam0) //Position: 0x56B8 / 22200
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_164() //Position: 0x56D4 / 22228
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

void Function_165() //Position: 0x56FF / 22271
{
	if (!Function_163(128))
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

void Function_166(int iParam0, int iParam1) //Position: 0x5741 / 22337
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

void Function_167(int iParam0) //Position: 0x578A / 22410
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_169("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], false));
	Function_168(StackVal, 0);
	return;
}

void Function_168(var uParam0, int iParam1) //Position: 0x57FC / 22524
{
	Function_114(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_113(StackVal, iParam1);
	}
	return;
}

bool Function_169(char* cParam0) //Position: 0x582D / 22573
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x584C / 22604
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_171() //Position: 0x588E / 22670
{
	while (!IS_EXITFLAG_SET())
	{
		Function_90();
		if (Function_65())
		{
			Function_44(4894, 4518);
		}
		else
		{
			Function_44(3052, 1356);
		}
		WAIT(false);
	}
	return;
}

bool Function_172() //Position: 0x58C0 / 22720
{
	return Function_124(2);
}

void Function_173() //Position: 0x58CA / 22730
{
	if (Function_172())
	{
		return;
	}
	Function_175();
	Function_140(&iLocal_38, Function_88(), 0, 0);
	while (!Function_161(&iLocal_38))
	{
		WAIT(false);
	}
	fLocal_10 = 5.0f;
	Function_90();
	Function_174();
	return;
}

void Function_174() //Position: 0x58FE / 22782
{
	while (!Function_124(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_175() //Position: 0x5919 / 22809
{
	Local_11.f_96 = 4294967295;
	Local_11.f_100 = 4294967295;
	return;
}

