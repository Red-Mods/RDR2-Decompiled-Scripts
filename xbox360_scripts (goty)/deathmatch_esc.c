//Decompiled with MagicRDR v1.0
//Function Count : 280
//Statics Count : 502
//Natives Count : 247
//Parameters Count : 0

#region Local Var
	struct<1045> Local_0 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	iLocal_272 = 0;
	fLocal_273 = 1.0f;
	iLocal_308 = 0;
	iLocal_309 = 0;
	Function_269();
	if (Function_268())
	{
		Function_267();
	}
	else
	{
		if (Function_132())
		{
			Function_131(1);
		}
		else
		{
			Function_130(1);
		}
		bVar0 = CREATE_WORLD_SECTOR(Local_0, "escalara");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(0);
		}
		Function_128();
		iVar1 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_127(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_126(64, 0);
					Function_128();
					iVar1 = 10;
				}
			}
			Function_110(&iLocal_473, 0.15f, 0.7f, 12, 0.0f, 0.0f, 0.0f, 0.0f);
			Function_97(&uLocal_311);
			Function_22();
			Function_19();
			WAIT(0);
		}
	}
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_esc_ffa02x", 0);
	DISABLE_CHILD_SECTOR("mp_esc_ffa02x");
	Function_17(&uLocal_311);
	Function_16();
	Function_3();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xEF / 239
{
	Function_2(uLocal_310);
	return;
}

int Function_2(bool bParam0) //Position: 0xFC / 252
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x112 / 274
{
	Function_12(&iLocal_301);
	Function_5();
	Function_4();
	return;
}

void Function_4() //Position: 0x124 / 292
{
	if (iLocal_308)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_308 = 0;
	}
	return;
}

void Function_5() //Position: 0x165 / 357
{
	Function_6();
	return;
}

void Function_6() //Position: 0x16E / 366
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

void Function_7(int iParam0, bool bParam1, int iParam2) //Position: 0x277 / 631
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

void Function_8(var uParam0, int iParam1) //Position: 0x29F / 671
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x2B2 / 690
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_10(int iParam0) //Position: 0x2C1 / 705
{
	return Function_11(Global_76905.f_132, iParam0);
}

bool Function_11(var uParam0, int iParam1) //Position: 0x2D2 / 722
{
	return (uParam0 && iParam1) == 0;
}

void Function_12(int iParam0) //Position: 0x2DF / 735
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

void Function_13(var uParam0, int iParam1) //Position: 0x305 / 773
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

void Function_14(var uParam0, int iParam1) //Position: 0x433 / 1075
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x44D / 1101
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x46A / 1130
{
	Function_12(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_17(int iParam0) //Position: 0x47C / 1148
{
	Function_126(64, 0);
	Function_18(iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0x48D / 1165
{
	if (iParam0->f_640 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_640, 0);
		iParam0->f_640 = "";
	}
	return;
}

void Function_19() //Position: 0x4AD / 1197
{
	Function_20(2);
	return;
}

void Function_20(int iParam0) //Position: 0x4B7 / 1207
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
			Function_21(iParam0);
		}
	}
	return;
}

void Function_21(var uParam0) //Position: 0x4E9 / 1257
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_22() //Position: 0x4F8 / 1272
{
	Function_95();
	if (Function_94(1, 1))
	{
		Function_78(StackVal, StackVal, 7384, vLocal_305, 1, 7274);
	}
	else
	{
		if (!iLocal_309)
		{
			iLocal_309 = 1;
			Function_73(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		if (Function_70())
		{
			Function_49(5121, 4745);
		}
		else
		{
			Function_49(3279, 1439);
		}
		Function_23();
	}
	return;
}

void Function_23() //Position: 0x55A / 1370
{
	if (IS_OBJECT_VALID(Local_274.f_104))
	{
		DESTROY_OBJECT(Local_274.f_104);
		Function_24(&Local_274);
	}
	return;
}

void Function_24(int iParam0) //Position: 0x579 / 1401
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

int Function_25(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x59F / 1439
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_40(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_39(bParam0);
	bVar2 = Function_38(bParam0);
	bVar3 = Function_35(bParam0);
	iVar4 = Function_34((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_32(bParam0, iVar4, 0);
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
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_30(38, bParam0));
		bVar0++;
		Function_26(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_26(bool bParam0, bool bParam1) //Position: 0x684 / 1668
{
	if (Function_10(4))
	{
		if (Function_27(bParam1, 1024, 1))
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

bool Function_27(bool bParam0, int iParam1, bool bParam2) //Position: 0x6B7 / 1719
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_94(iParam1, bParam2);
	}
	if (!Function_29(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_28(iParam1), 64);
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

var Function_28(int iParam0) //Position: 0x738 / 1848
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

bool Function_29(bool bParam0) //Position: 0xA51 / 2641
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

int Function_30(int iParam0, bool bParam1) //Position: 0xAF2 / 2802
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_31(iParam0);
	}
	if (!Function_29(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_31(int iParam0) //Position: 0xB60 / 2912
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

bool Function_32(bool bParam0, int iParam1, int iParam2) //Position: 0xB79 / 2937
{
	var uVar0;
	
	return Function_33(bParam0, iParam1, &uVar0, iParam2);
}

int Function_33(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xB8A / 2954
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

var Function_34(int iParam0, int iParam1, int iParam2) //Position: 0xBEF / 3055
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_35(bool bParam0) //Position: 0xC04 / 3076
{
	return Function_36(0, bParam0);
}

int Function_36(int iParam0, bool bParam1) //Position: 0xC10 / 3088
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_37(iParam0);
	}
	if (!Function_29(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_37(int iParam0) //Position: 0xC77 / 3191
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_38(bool bParam0) //Position: 0xC87 / 3207
{
	return Function_30(12, bParam0);
}

int Function_39(int iParam0) //Position: 0xC94 / 3220
{
	return Function_30(11, iParam0);
}

void Function_40(bool bParam0, int iParam1, char* cParam2) //Position: 0xCA1 / 3233
{
	if (bParam0)
	{
		if (Function_41())
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

bool Function_41() //Position: 0xCC2 / 3266
{
	return Function_10(32768);
}

int Function_42() //Position: 0xCCF / 3279
{
	if (!Function_44(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_43();
	return 1;
}

void Function_43() //Position: 0xD63 / 3427
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

bool Function_44(bool bParam0) //Position: 0xDA0 / 3488
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_41() || Function_48(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_41())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_45(Function_41());
	return 1;
}

void Function_45(bool bParam0) //Position: 0xE21 / 3617
{
	if (bParam0 || Function_10(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_10(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_10(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_10(1048576) || Function_10(4)) || Function_94(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_7(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_46(int iParam0) //Position: 0xEAA / 3754
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_47(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xEBE / 3774
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

int Function_48(bool bParam0, bool bParam1) //Position: 0xF03 / 3843
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

void Function_49(int iParam0, int iParam1) //Position: 0xF37 / 3895
{
	Function_50(iParam0, iParam1, 4738);
	return;
}

void Function_50(var uParam0, var uParam1, int iParam2) //Position: 0xF48 / 3912
{
	if (Function_10(0x4000000))
	{
		Function_53();
		Function_7(0x4000000, 0, 1);
	}
	if (Function_10(0x10000000))
	{
		Function_53();
		Function_7(0x10000000, 0, 1);
	}
	if (Function_10(2) != Function_10(0x2000000))
	{
		Function_53();
		Function_7(0x2000000, Function_10(2), 1);
	}
	if (Function_41())
	{
		Function_52(!Function_10(16));
	}
	if (Function_10(16))
	{
		Function_51(&uParam0, &uParam1, &iParam2);
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

void Function_51(var uParam0, var uParam1, int iParam2) //Position: 0x10E1 / 4321
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
			if (!Function_29(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_27(bVar1, 2048, 1))
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
				if (Function_32(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_32(bVar1, (4294966296 - bVar1), 1))
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

void Function_52(bool bParam0) //Position: 0x1259 / 4697
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_7(16384, 0, 1);
	return;
}

void Function_53() //Position: 0x1273 / 4723
{
	Function_7(32768, 1, 0);
	return;
}

int Function_54() //Position: 0x1282 / 4738
{
	return 1;
}

int Function_55(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x1289 / 4745
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_40(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_39(bParam0);
	bVar2 = Function_38(bParam0);
	bVar3 = Function_35(bParam0);
	iVar4 = Function_34((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_32(bParam0, iVar4, 0);
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
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_30(38, bParam0));
		bVar0++;
		Function_26(bVar0, bParam0);
	}
	if (Function_56(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_56(bool bParam0) //Position: 0x137E / 4990
{
	if (Function_58(bParam0, 1, 0) != 4294967295 && Function_57() != 4294967295)
	{
		return 0;
	}
	return Function_58(bParam0, 1, 0) != Function_57();
}

int Function_57() //Position: 0x13A6 / 5030
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_58(GET_LOCAL_SLOT(), 1, 0);
}

int Function_58(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13BD / 5053
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_29(bParam0))
			{
				if (!Function_27(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_59() //Position: 0x1401 / 5121
{
	if (!Function_44(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_60();
	Function_43();
	return 1;
}

void Function_60() //Position: 0x1498 / 5272
{
	if (Function_70())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_69())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_61(0, 0);
		Function_61(1, 0);
	}
	return;
}

void Function_61(bool bParam0, bool bParam1) //Position: 0x14C3 / 5315
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_57())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_68(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_62(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_62(int iParam0, int iParam1, bool bParam2) //Position: 0x1562 / 5474
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_41())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_64(iParam1, 0) };
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
		if (Function_63())
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

bool Function_63() //Position: 0x1655 / 5717
{
	return (Function_10(4096) || Function_10(4));
}

struct<16> Function_64(var uParam0, var uParam1) //Position: 0x1666 / 5734
{
	return StackVal, StackVal, StackVal, Function_65(Function_66(uParam0), uParam1);
}

struct<16> Function_65(bool bParam0, bool bParam1) //Position: 0x1678 / 5752
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

int Function_66(int iParam0) //Position: 0x16AD / 5805
{
	if (!Function_67())
	{
		return 0;
	}
	return StackVal;
}

bool Function_67() //Position: 0x16C6 / 5830
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_68(int iParam0) //Position: 0x16D3 / 5843
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_69() //Position: 0x16EF / 5871
{
	return Function_57() == 4294967295;
}

bool Function_70() //Position: 0x16FA / 5882
{
	return Function_71(2);
}

int Function_71(int iParam0) //Position: 0x1704 / 5892
{
	return Function_72(&Global_79349, iParam0);
}

int Function_72(var uParam0, int iParam1) //Position: 0x1713 / 5907
{
	return Function_11(uParam0->f_44, iParam1);
}

void Function_73(vector3 vParam0, float fParam3) //Position: 0x1722 / 5922
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_77(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_77(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_74(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_74(bool bParam0) //Position: 0x17D5 / 6101
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
	return Function_75(bVar0);
}

int Function_75(bool bParam0) //Position: 0x1810 / 6160
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
	Function_76(bVar0);
	return bVar0;
}

void Function_76(bool bParam0) //Position: 0x185E / 6238
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_77() //Position: 0x1871 / 6257
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_78(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x18A0 / 6304
{
	if (!IS_OBJECT_VALID(Local_274.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_274.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_274.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_79(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_274.f_104, &Local_274) + Vector(0.0f, 2.45f, 0.0f), 1, 7171, 1, 125, 0, 0, 0);
	Function_79(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_274.f_104, &Local_274 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_79(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x192A / 6442
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_80(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_80(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1975 / 6517
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
			Function_24(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_273;
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
					Function_24(iParam0);
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
			fVar14 = Function_81(iParam0->f_36);
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

var Function_81(float fParam0) //Position: 0x1BF5 / 7157
{
	return (fParam0 * 57.29578f);
}

var Function_82(int iParam0, var uParam1) //Position: 0x1C03 / 7171
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_274.f_96 != iParam0)
	{
		Local_274.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_46(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_83(int iParam0, var uParam1) //Position: 0x1C6A / 7274
{
	uParam1 = uParam1;
	if (Local_274.f_100 != iParam0)
	{
		Local_274.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("DM_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_84() //Position: 0x1CD8 / 7384
{
	int iVar0;
	
	iVar0 = Function_90(Global_83591.f_140, &vLocal_305, 0.0f, &Global_83591 + 276, 1);
	Function_85(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_85(bool bParam0, int iParam1) //Position: 0x1D06 / 7430
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_89(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_88((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_88((*iParam1)[iVar202], &iVar21))
		{
			if (Function_86((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_86(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1E15 / 7701
{
	float fVar0;
	
	if (!Function_87(bParam0))
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

bool Function_87(int iParam0) //Position: 0x1F3C / 7996
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_88(bool bParam0, int iParam1) //Position: 0x1F4E / 8014
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

var Function_89() //Position: 0x1FAA / 8106
{
	int iVar0;
	
	return iVar0;
}

var Function_90(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1FB2 / 8114
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_92(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_88((*uParam3)[iVar12], &iVar2))
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
		if (Function_88((*uParam3)[iVar12], &iVar2))
		{
			if (Function_91((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_91(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x20A0 / 8352
{
	if (!Function_87(bParam0))
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

var Function_92(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2231 / 8753
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_93()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_93() //Position: 0x229D / 8861
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_94(bool bParam0, bool bParam1) //Position: 0x22C4 / 8900
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_95() //Position: 0x22E4 / 8932
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_308)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000002:
						Function_96("DM_help", 4294967295);
						break;
					
					case 0x00000011:
						Function_96("TDM_help", 4294967295);
						break;
				}
				iLocal_308 = 1;
			}
		}
	}
	else
	{
		Function_4();
	}
	return;
}

void Function_96(char* cParam0, int iParam1) //Position: 0x2356 / 9046
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

int Function_97(int iParam0) //Position: 0x23ED / 9197
{
	int iVar0;
	
	if (!Function_108(*iParam0) || (Function_127(64) && Function_104()))
	{
		iParam0->f_4 = 0;
		Function_18(iParam0);
		if (!Function_108(*iParam0))
		{
		}
		if (Function_127(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_108(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 640);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_636)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_101(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_11((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_8(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_11((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_636)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_636)
				{
					if (!Function_11((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_11((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_100((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_99((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_636)
			{
				iParam0->f_644 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_644) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_18(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_98(3, iParam0->f_636))
			{
				if (iParam0->f_636 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_636);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_11((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_11((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_9(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_11((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_11((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_11((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_98(int iParam0, bool bParam1) //Position: 0x2774 / 10100
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_99(bool bParam0, bool bParam1) //Position: 0x2786 / 10118
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

void Function_100(bool bParam0, bool bParam1) //Position: 0x27DA / 10202
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

int Function_101(var uParam0, var uParam1, int iParam2) //Position: 0x282B / 10283
{
	return Function_102(Global_29006, uParam0, uParam1, iParam2);
}

int Function_102(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x283D / 10301
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_103(iParam0))
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

bool Function_103(int iParam0) //Position: 0x28D9 / 10457
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_104() //Position: 0x28EF / 10479
{
	return !Function_105();
}

bool Function_105() //Position: 0x28F9 / 10489
{
	if (Function_107())
	{
		return (Function_106() != 1 || Function_106() != 0);
	}
	return 0;
}

int Function_106() //Position: 0x2912 / 10514
{
	return Global_79349.f_16;
}

bool Function_107() //Position: 0x291E / 10526
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_108(int iParam0) //Position: 0x2927 / 10535
{
	if (!Function_103(iParam0))
	{
		return 1;
	}
	return Function_109(&(Global_29008[iParam0]), 4);
}

int Function_109(var uParam0, bool bParam1) //Position: 0x2943 / 10563
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_110(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x295F / 10591
{
	float fVar0;
	
	if (Function_125())
	{
		if (Function_124(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_120(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_114((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_111((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_114((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_111((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_111(int iParam0, var uParam1, int iParam2) //Position: 0x2A02 / 10754
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_113(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_112(iParam2);
	}
	return;
}

void Function_112(int iParam0) //Position: 0x2A27 / 10791
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_113(int iParam0) //Position: 0x2A3C / 10812
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2A51 / 10833
{
	int iVar0;
	bool bVar1;
	
	Function_119(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_118(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_115(StackVal, bVar1, bParam4);
		}
	}
}

void Function_115(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AC3 / 10947
{
	int iVar0;
	
	Function_119(iParam0);
	Function_117(bParam1);
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
	Function_116();
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

void Function_116() //Position: 0x2C3C / 11324
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_117(bool bParam0) //Position: 0x2C48 / 11336
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

void Function_118(int iParam0, int iParam1) //Position: 0x2C8E / 11406
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_119(iParam0);
	Function_117(iVar0);
	PRINTNL();
	Function_115(iParam0, iVar0, iParam1);
	return;
}

void Function_119(int iParam0) //Position: 0x2CB3 / 11443
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

float Function_120(int iParam0) //Position: 0x2CF9 / 11513
{
	return -Function_121(iParam0);
}

float Function_121(int iParam0) //Position: 0x2D05 / 11525
{
	if (Function_124(iParam0))
	{
		if (Function_123(iParam0))
		{
			return StackVal;
		}
		Function_122();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_122() //Position: 0x2DD6 / 11734
{
	if (!Function_125())
	{
	}
	return;
}

bool Function_123(int iParam0) //Position: 0x2DE3 / 11747
{
	return Function_11(*iParam0, 2);
}

bool Function_124(int iParam0) //Position: 0x2DF0 / 11760
{
	return Function_11(*iParam0, 1);
}

bool Function_125() //Position: 0x2DFD / 11773
{
	return NET_IS_IN_SESSION();
}

void Function_126(int iParam0, bool bParam1) //Position: 0x2E06 / 11782
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

bool Function_127(int iParam0) //Position: 0x2E2E / 11822
{
	return Function_11(StackVal, iParam0);
}

void Function_128() //Position: 0x2E41 / 11841
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_89());
	Function_129(StackVal, bVar0, "p_gen_chair");
	Function_129(StackVal, bVar0, "p_gen_package");
	Function_129(StackVal, bVar0, "p_gen_gun04");
	Function_129(StackVal, bVar0, "p_gen_riflewin");
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2ED9 / 11993
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_89(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, bParam2, bParam1, 1);
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

void Function_130(bool bParam0) //Position: 0x2F32 / 12082
{
	Function_126(16, bParam0);
	return;
}

void Function_131(var uParam0) //Position: 0x2F3F / 12095
{
	Function_126(8, uParam0);
	return;
}

bool Function_132() //Position: 0x2F4C / 12108
{
	Function_266(&iLocal_473, 0, 9, 30, 0, 0, 1);
	Function_266(&iLocal_473, 1, 9, 30, 2, 2, 1);
	Function_266(&iLocal_473, 2, 11, 0, 1, 2, 2);
	Function_266(&iLocal_473, 3, 11, 0, 1, 1, 0);
	Function_266(&iLocal_473, 4, 23, 0, 1, 0, 1);
	Function_263(&iLocal_473);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_261();
	ENABLE_CHILD_SECTOR("mp_esc_ffa02x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_esc_ffa02x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_254(&Global_83591 + 276, 0);
	Function_252(&Global_83591, 1, 22, 1, 1);
	Function_252(&Global_83591, 2, 1, 10, 1);
	Function_252(&Global_83591, 3, 9, 10, 1);
	Function_252(&Global_83591, 4, 15, 10, 1);
	Function_247(&Global_83591, 1, 19, 10, 1);
	Function_247(&Global_83591, 2, 2, 10, 1);
	Function_247(&Global_83591, 3, 17, 10, 1);
	Function_247(&Global_83591, 4, 10, 10, 1);
	Function_246(&Global_83591);
	Function_245(&Global_83591 + 276, 4);
	Function_244(0, 6);
	Function_244(1, 1);
	if (!Function_239(&uLocal_311))
	{
		return 0;
	}
	Function_231();
	Function_133();
	return 1;
}

void Function_133() //Position: 0x3068 / 12392
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 12502);
	uLocal_310 = Function_134("DLCPVP");
	return;
}

var Function_134(bool bParam0) //Position: 0x3086 / 12422
{
	bool bVar0;
	
	bVar0 = Function_135();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_135() //Position: 0x309A / 12442
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_136(var uParam0) //Position: 0x30D6 / 12502
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
			bVar11 = Function_71(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_230())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_106())
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
							Function_227(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_223(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_139(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_105() || Function_137(4096))
						{
							if (Function_94(131072, 1))
							{
							}
							if (Function_27(Var0, 131072, 1))
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
			if (bVar11 && !Function_137(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_137(int iParam0) //Position: 0x323A / 12858
{
	return Function_138(Global_79336, iParam0);
}

bool Function_138(var uParam0, bool bParam1) //Position: 0x3249 / 12873
{
	return (uParam0 && bParam1) == 0;
}

void Function_139(struct<29> Param0) //Position: 0x3256 / 12886
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_144(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_144(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_143(), 29, 1);
					Global_83823[29] = 1;
					Function_140(6002);
					Function_140(6005);
					Function_140(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_140(6001);
				Function_140(6004);
			}
			break;
	}
}

void Function_140(int iParam0) //Position: 0x3337 / 13111
{
	Function_141(iParam0, 1);
	return;
}

void Function_141(int iParam0, bool bParam1) //Position: 0x3343 / 13123
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_9(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_142((iVar0 % 32)));
	}
	else
	{
		Function_8(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_142((iVar0 % 32)));
	}
	return;
}

int Function_142(bool bParam0) //Position: 0x3399 / 13209
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_143() //Position: 0x33A5 / 13221
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_144(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x33BA / 13242
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_145(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_145(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x33E6 / 13286
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_222(uParam0, uParam2, uParam3);
			}
			Function_146(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_146(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_146(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_146(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x3463 / 13411
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_221(*uParam0);
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
					Function_219(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_164(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_153(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_152(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_147(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_147(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3531 / 13617
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_151(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_150(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_151(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_149(iParam0, 4))
	{
		Function_148(Function_151(iParam0), 0);
	}
}

void Function_148(var uParam0, int iParam1) //Position: 0x35E8 / 13800
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

bool Function_149(int iParam0, int iParam1) //Position: 0x360D / 13837
{
	return Function_11(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_150(int iParam0) //Position: 0x3621 / 13857
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_151(int iParam0) //Position: 0x3655 / 13909
{
	return Global_50170[iParam022].f_24;
}

var Function_152(int iParam0, int iParam1) //Position: 0x3664 / 13924
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_153(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3677 / 13943
{
	Function_161(*uParam0);
	Function_154(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_151(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_151(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_154(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x371C / 14108
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_160(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_151(iParam0));
	if ((bParam3 && Function_149(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_151(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_159(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_150(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_158(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_157(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_156(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_151(iParam0), &Var7, 0, 2, Function_149(iParam0, 4));
			if (!bParam3)
			{
				Function_155(iParam0, 4);
			}
		}
	}
}

void Function_155(int iParam0, int iParam1) //Position: 0x37D9 / 14297
{
	Function_9(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_156(int iParam0) //Position: 0x37ED / 14317
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_150(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_157(int iParam0) //Position: 0x380D / 14349
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_158(int iParam0) //Position: 0x383B / 14395
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_159(int iParam0) //Position: 0x386B / 14443
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_160(int iParam0) //Position: 0x389C / 14492
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

void Function_161(int iParam0) //Position: 0x3A1A / 14874
{
	Function_162(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3A30 / 14896
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_163();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_163() //Position: 0x3AA5 / 15013
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_164(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3AF2 / 15090
{
	struct<4> Var0;
	
	Function_218(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_150(*uParam0) };
	Function_213(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_212(*uParam0, 4);
	Function_165();
}

void Function_165() //Position: 0x3B50 / 15184
{
	if (!Function_107())
	{
		if (!Function_211(1, 3, 1, 1))
		{
			Function_199(1);
			Function_198(1, 8);
		}
	}
	else
	{
		Function_166(0);
	}
	return;
}

void Function_166(bool bParam0) //Position: 0x3B79 / 15225
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_196(2);
	if (bParam0)
	{
		Function_196(1);
	}
	else
	{
		Function_194(1);
	}
	Function_167();
	return;
}

void Function_167() //Position: 0x3C02 / 15362
{
	Function_192();
	Function_191();
	Function_191();
	Function_190();
	Function_190();
	Function_189();
	Function_189();
	Function_174(0);
	Function_174(0);
	if (!Function_107())
	{
		Function_172();
		Function_171();
		Function_170();
		Function_169();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_168();
	return;
}

void Function_168() //Position: 0x3C54 / 15444
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

void Function_169() //Position: 0x3D5A / 15706
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

void Function_170() //Position: 0x3D8D / 15757
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

void Function_171() //Position: 0x3F1B / 16155
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

void Function_172() //Position: 0x4176 / 16758
{
	Function_173(&Global_28260, 1, 0);
	return;
}

void Function_173(int iParam0, bool bParam1, int iParam2) //Position: 0x4184 / 16772
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
	
	bVar0 = Function_143();
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

struct<8> Function_174(int iParam0) //Position: 0x4375 / 17269
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
					iVar2 = ((Function_188((50 + iVar4)) + Function_188((183 + iVar4))) + Function_188((90 + iVar4)));
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
	Function_175(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_175(int iParam0, bool bParam1, bool bParam2) //Position: 0x441B / 17435
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
		Function_187(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_186(iParam0);
	if (bParam2)
	{
		Function_176(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_176(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x46B6 / 18102
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_185(390))), 32);
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
					bVar19 = (Function_184(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_184(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_182(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_180(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_178(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_177(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_89(), &Var9);
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

var Function_177(int iParam0) //Position: 0x4CE3 / 19683
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_178(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4CF4 / 19700
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_179("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_179("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_179("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_179(char* cParam0, bool bParam1) //Position: 0x4DE9 / 19945
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_180(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4E02 / 19970
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_98(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_181(Function_98(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_181(int iParam0, int iParam1) //Position: 0x4E67 / 20071
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_182(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4E79 / 20089
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
	if (((Function_183(iParam0) != 19 || Function_183(iParam0) != 17) || Function_183(iParam0) != 10) || Function_183(iParam0) != 9)
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

int Function_183(int iParam0) //Position: 0x4FA9 / 20393
{
	return Global_35278[iParam020].f_48;
}

float Function_184(int iParam0) //Position: 0x4FB8 / 20408
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_185(int iParam0) //Position: 0x4FF1 / 20465
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_186(int iParam0) //Position: 0x502E / 20526
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

int Function_187(int iParam0, bool bParam1, bool bParam2) //Position: 0x51C8 / 20936
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

int Function_188(bool bParam0) //Position: 0x540C / 21516
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_189() //Position: 0x544D / 21581
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
		iVar2 = ((Function_188((50 + iVar3) + 15) + Function_188((183 + iVar3) + 15)) + Function_188((90 + iVar3) + 15));
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
	Function_175(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_190() //Position: 0x54D6 / 21718
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
			iVar2 = ((Function_188((50 + iVar3) + 8) + Function_188((183 + iVar3) + 8)) + Function_188((90 + iVar3) + 8));
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
	Function_175(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_191() //Position: 0x556D / 21869
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
		iVar2 = ((Function_188((50 + iVar3)) + Function_188((183 + iVar3))) + Function_188((90 + iVar3)));
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
	Function_175(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_192() //Position: 0x55EC / 21996
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_193(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_175(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_193(int iParam0, bool bParam1, int iParam2) //Position: 0x5625 / 22053
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
	Function_187(iParam0, bParam1, 1);
	Function_186(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_176(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_194(int iParam0) //Position: 0x582F / 22575
{
	Function_195(&Global_79338, iParam0);
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0x583E / 22590
{
	Function_8(uParam0, iParam1);
	return;
}

void Function_196(int iParam0) //Position: 0x584B / 22603
{
	Function_197(&Global_79338, iParam0);
	return;
}

void Function_197(var uParam0, int iParam1) //Position: 0x585A / 22618
{
	Function_9(uParam0, iParam1);
	return;
}

void Function_198(var uParam0, int iParam1) //Position: 0x5867 / 22631
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_107())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_199(bool bParam0) //Position: 0x58A9 / 22697
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_200();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_167();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_8(&Global_63095, 1);
		Function_8(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_200() //Position: 0x58FA / 22778
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_210())
	{
		Function_207(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_207(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_202(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_202(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_201(StackVal, StackVal, vVar0))
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

bool Function_201(vector3 vParam0) //Position: 0x59B5 / 22965
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_202(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x59CD / 22989
{
	int iVar0;
	
	iVar0 = Function_205(uParam2, uParam3);
	if (Function_204(iVar0))
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
	Function_203();
	return StackVal, StackVal, Function_203();
}

vector3 Function_203() //Position: 0x5AB4 / 23220
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_204(int iParam0) //Position: 0x5ABD / 23229
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_205(bool bParam0, bool bParam1) //Position: 0x5AD3 / 23251
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
				fVar2 = Function_206(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_206(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_204(bVar0) && !bParam1)
	{
		bVar0 = Function_205(bParam0, 1);
	}
	return bVar0;
}

float Function_206(vector3 vParam0, vector3 vParam3) //Position: 0x5B9A / 23450
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_207(var uParam0, int iParam1) //Position: 0x5BB7 / 23479
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_209(Global_34573, &vVar4);
	if (!Function_208(Global_30640[0]))
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
	if (!Function_208(Global_30640[2]))
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
	if (!Function_208(Global_30640[1]))
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
	if (!Function_208(Global_30658[1]))
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
	if (!Function_208(Global_30658[3]))
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
	if (!Function_208(Global_30658[2]))
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
	if (!Function_208(Global_30658[4]))
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
	if (!Function_208(Global_30668[0]))
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
	if (!Function_208(Global_30668[1]))
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
	if (!Function_208(Global_30668[2]))
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
	if (!Function_208(Global_30679[0]))
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
	if (!Function_208(Global_30685[0]))
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
	if (!Function_208(Global_30685[1]))
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
	if (!Function_208(Global_30685[2]))
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
	if (!Function_208(Global_30693[0]))
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
	if (!Function_208(Global_30693[1]))
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
	if (!Function_208(Global_30693[2]))
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
	if (!Function_208(Global_30707[2]))
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
	if (!Function_208(Global_30707[3]))
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
	if (!Function_208(Global_30707[0]))
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
	if (!Function_208(Global_30717[0]))
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
	if (!Function_208(Global_30723[2]))
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
	if (!Function_208(Global_30723[1]))
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
	if (!Function_208(Global_30723[0]))
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
	if (!Function_208(Global_30679[1]))
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
	if (!Function_208(Global_30707[1]))
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
	if (Function_201(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_208(int iParam0) //Position: 0x63DC / 25564
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || !Function_11(uVar0, 0x10000000));
}

void Function_209(bool bParam0, int iParam1) //Position: 0x6417 / 25623
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_210() //Position: 0x6424 / 25636
{
	if (Function_11(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_211(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x643F / 25663
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

void Function_212(int iParam0, int iParam1) //Position: 0x64E3 / 25827
{
	Function_8(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_213(bool bParam0, bool bParam1, bool bParam2) //Position: 0x64F7 / 25847
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_77();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_217(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_216(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_215(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_214(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_217(), iVar1 + 1);
	return;
}

struct<16> Function_214(int iParam0) //Position: 0x6569 / 25961
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_215(int iParam0) //Position: 0x658A / 25994
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_216(int iParam0) //Position: 0x65AB / 26027
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_217() //Position: 0x65CC / 26060
{
	return "CQueue_Count";
}

void Function_218(bool bParam0, bool bParam1) //Position: 0x65E1 / 26081
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_163();
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

void Function_219(var uParam0, bool bParam1, bool bParam2) //Position: 0x672D / 26413
{
	Function_218(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_151(*uParam0), 1.0f, 0, 0);
	Function_220(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_213(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_165();
	return;
}

void Function_220(int iParam0, int iParam1) //Position: 0x6792 / 26514
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_160(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_151(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_159(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_150(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_156(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_151(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_151(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_151(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_221(int iParam0) //Position: 0x6814 / 26644
{
	return Global_50170[iParam022].f_12;
}

void Function_222(var uParam0, bool bParam1, bool bParam2) //Position: 0x6823 / 26659
{
	Function_161(*uParam0);
	if (!Function_149(*uParam0, 2))
	{
		Function_154(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_155(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_151(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_223(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x6860 / 26720
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_221(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_56(Param3) && Param3.f_12 != 29)
						{
							if (Function_138(Param3.f_40, 1048576))
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
					Function_225(230, 150, Function_226(), 4294967295);
					Function_140(6007);
					Function_140(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_224(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_147(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_224(var uParam0, bool bParam1, int iParam2) //Position: 0x6922 / 26914
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_225(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x693A / 26938
{
	Function_218(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_151(iParam0), 1.0f, 0, 0);
	Function_220(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_140(iParam3);
	}
	Function_213(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_165();
}

bool Function_226() //Position: 0x69A0 / 27040
{
	return "MP_TrickShot_Icon_128";
}

void Function_227(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x69BE / 27070
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_221(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_228(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_229(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_140(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_224(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_147(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_221(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_225(231, 100, Function_229(), 4294967295);
					Function_140(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_224(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_147(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_228(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6AE6 / 27366
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_150(uParam0) };
	Function_213(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_224(&uParam5, uParam8, uParam9);
	Function_147(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_154(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_140(iParam12);
	}
	Function_212(uParam0, 4);
	Function_165();
}

var Function_229() //Position: 0x6B5C / 27484
{
	return "MP_Revenge_Icon_128";
}

bool Function_230() //Position: 0x6B78 / 27512
{
	if (Function_137(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_231() //Position: 0x6BA2 / 27554
{
	Function_235(Local_0);
	Function_233(Local_0.f_1044);
	if (Function_70())
	{
		Function_232("MEX_SONG_04", "MEX_SONG_06", 0, 58, 58, 1);
	}
	else
	{
		Function_232("MEX_SONG_03", "MEX_SONG_04", 0, 58, 58, 1);
	}
	return;
}

void Function_232(char* cParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x6C06 / 27654
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

void Function_233(bool bParam0) //Position: 0x6C96 / 27798
{
	DECOR_SET_OBJECT(Function_234(), "LobbyGringoSet", bParam0);
	return;
}

var Function_234() //Position: 0x6CB6 / 27830
{
	return Global_83591.f_140;
}

void Function_235(var uParam0) //Position: 0x6CC2 / 27842
{
	if (Function_238())
	{
		Function_245(&Global_83591 + 276, 2);
	}
	Function_237(uParam0);
	Global_83591.f_4 = 2;
	Function_236();
	vLocal_305 = { StackVal, StackVal, Function_236() };
	return;
}

vector3 Function_236() //Position: 0x6CED / 27885
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_234();
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

void Function_237(var uParam0) //Position: 0x6D35 / 27957
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_238() //Position: 0x6D43 / 27971
{
	return Function_11(Global_79962, 1024);
}

bool Function_239(int iParam0) //Position: 0x6D53 / 27987
{
	if (!Function_243(iParam0, Global_30685[0]))
	{
		return 0;
	}
	Function_242(iParam0, "escalara", "villa01", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "villa01", 2, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "villa01", 4, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "blacksmith01", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "ncantina01", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "ncantina01", 2, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "ncantina01", 3, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "doctor01", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "gunsmith01", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "gunsmith01", 2, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "church01", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "church01", 2, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "generalhouse03", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "generalhouse03", 2, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "whorehouse01", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "whorehouse01", 2, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "villaPost01", 1, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "villaPost01", 2, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "villaPost01", 3, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "villaPost01", 4, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "villaPost01", 5, 1, 0, 1, 1);
	Function_242(iParam0, "escalara", "villaPost01", 6, 1, 0, 1, 1);
	Function_240(iParam0, "escalara", "villawall04", 1);
	Function_240(iParam0, "escalara", "villawall04", 2);
	Function_240(iParam0, "escalara", "villawall02", 3);
	Function_240(iParam0, "escalara", "villawall02", 4);
	Function_240(iParam0, "escalara", "bullring01", 1);
	Function_240(iParam0, "escalara", "bullring01", 2);
	Function_240(iParam0, "escalara", "bullring01", 3);
	Function_240(iParam0, "escalara", "bullring01", 4);
	return 1;
}

int Function_240(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x716B / 29035
{
	int iVar0;
	
	iVar0 = iParam0->f_636;
	if (!Function_241(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_9(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_241(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x719D / 29085
{
	if (iParam0->f_636 > 31)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_6365] = uParam1;
	(iParam0 + 12[iParam0->f_6365])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_6365])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_6365])->f_16 = 0;
	iParam0->f_636++;
	return 1;
}

int Function_242(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x71F9 / 29177
{
	int iVar0;
	
	iVar0 = iParam0->f_636;
	if (!Function_241(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_9(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_9(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_9(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_9(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_243(int iParam0, int iParam1) //Position: 0x726A / 29290
{
	int iVar0;
	
	if (!Function_103(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_636 = 0;
	iParam0->f_4 = 0;
	iParam0->f_640 = "";
	iVar0 = 0;
	while (iVar0 <= 31)
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

void Function_244(int iParam0, int iParam1) //Position: 0x72E0 / 29408
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_245(int iParam0, int iParam1) //Position: 0x72EE / 29422
{
	(iParam0 + 228)->f_220 = 0;
	Function_9(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_246(int iParam0) //Position: 0x7306 / 29446
{
	iParam0->f_844 = 0;
	return;
}

void Function_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7312 / 29458
{
	Function_248(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_248(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x732A / 29482
{
	Function_249(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_249(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7341 / 29505
{
	if (!Function_251(iParam1))
	{
		return;
	}
	Function_250(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_250(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7364 / 29540
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

bool Function_251(int iParam0) //Position: 0x738E / 29582
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_252(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x739E / 29598
{
	Function_253(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x73B6 / 29622
{
	Function_249(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_254(int iParam0, bool bParam1) //Position: 0x73CB / 29643
{
	Function_258(iParam0);
	Function_258(iParam0 + 228);
	if (bParam1)
	{
		Function_255(iParam0);
	}
	return;
}

void Function_255(int iParam0) //Position: 0x73E7 / 29671
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_256(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_256(var uParam0, int iParam1) //Position: 0x7407 / 29703
{
	Function_257(uParam0, iParam1, 0);
	return;
}

void Function_257(int iParam0, int iParam1, int iParam2) //Position: 0x7415 / 29717
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_258(int iParam0) //Position: 0x7426 / 29734
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_260(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_259(iParam0, 0.0f);
	return;
}

void Function_259(var uParam0, int iParam1) //Position: 0x7453 / 29779
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_260(var uParam0) //Position: 0x745F / 29791
{
	Function_250(uParam0, 4294967295, 0, 1);
	return;
}

void Function_261() //Position: 0x746D / 29805
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
	
	Function_262(4, 1);
	uVar0 = uVar0;
	Local_0 = CREATE_LAYOUT("Deathmatch_ESC_layout");
	Local_0.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_0, "playablespace", 2, -4337.83f, 30.38622f, 4378.315f, 0.0f, 0.0f, 0.0f, 307.607f, 133.5504f, 307.607f);
	Local_0.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_0", 3, -4335.921f, 19.07746f, 4479.539f, 0.0f, 236.0073f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	Local_0.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_1", 3, -4337.95f, 42.57038f, 4324.948f, 0.0f, -63.4115f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	Local_0.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_2", 3, -4300.848f, 18.0706f, 4459.596f, 0.0f, 123.5088f, 0.0f, 0.8253789f, 0.9907081f, 0.8253789f);
	Local_0.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_3", 3, -4280.566f, 18.22794f, 4465.846f, 0.0f, 135.1432f, 0.0f, 0.8526884f, 1.023488f, 0.8526884f);
	Local_0.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_4", 3, -4252.067f, 17.90539f, 4418.504f, 0.0f, 392.9163f, 0.0f, 2.26558f, 2.719391f, 2.26558f);
	Local_0.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_5", 3, -4279.006f, 22.74587f, 4381.741f, 0.0f, 390.7722f, 0.0f, 1.490163f, 1.788653f, 1.490163f);
	Local_0.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_6", 3, -4244.776f, 22.78407f, 4371.674f, 0.0f, 362.8424f, 0.0f, 0.9407431f, 0.8382427f, 0.9407431f);
	Local_0.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_7", 3, -4264.64f, 18.07059f, 4443.685f, 0.0f, 666.1685f, 0.0f, 1.507544f, 1.809515f, 1.507544f);
	Local_0.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_8", 3, -4260.016f, 24.95712f, 4331.824f, 0.0f, 275.3962f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	Local_0.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_9", 3, -4309.03f, 39.67f, 4311.39f, 0.0f, 2.030807f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	Local_0.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_10", 3, -4350.36f, 42.57038f, 4328.962f, 0.0f, -268.8958f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	Local_0.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_11", 3, -4309.188f, 23.11643f, 4397.214f, 0.0f, 391.8405f, 0.0f, 1.288239f, 0.3481335f, 1.288239f);
	Local_0.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_12", 3, -4311.848f, 31.70709f, 4374.23f, 0.0f, 349.3413f, 0.0f, 1.501884f, 0.5731589f, 1.501884f);
	Local_0.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_13", 3, -4329.582f, 27.64485f, 4411.813f, 0.0f, 308.4681f, 0.0f, 1.288239f, 0.3481335f, 1.288239f);
	Local_0.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_15", 3, -4367.036f, 31.99608f, 4450.394f, 0.0f, 123.1894f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	Local_0.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_16", 3, -4360.919f, 30.23645f, 4388.051f, 0.0f, 46.04944f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	Local_0.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_17", 3, -4382.39f, 38.52347f, 4355.896f, 0.0f, -33.03931f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	Local_0.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_18", 3, -4361.3f, 39.20758f, 4312.968f, 0.0f, 259.9011f, 0.0f, 0.6220732f, 0.3089861f, 0.6276346f);
	Local_0.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_19", 3, -4337.082f, 42.05303f, 4341.117f, 0.0f, -59.27691f, 0.0f, 1.031953f, 0.7509382f, 1.000302f);
	Local_0.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_20", 3, -4326.357f, 39.21354f, 4348.03f, 0.0f, 272.697f, 0.0f, 1.473096f, 0.8279111f, 1.473096f);
	Local_0.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_21", 3, -4371.937f, 33.15253f, 4296.968f, 0.0f, 90.00767f, 0.0f, 1.923391f, 1.080986f, 1.923391f);
	Local_0.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_22", 3, -4351.042f, 33.93618f, 4300.509f, 0.0f, 175.2746f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	Local_0.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_23", 3, -4312.156f, 34.5426f, 4299.196f, 0.0f, 272.9146f, 0.0f, 0.7891384f, 0.4435125f, 0.7891384f);
	Local_0.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_24", 3, -4328.213f, 22.48272f, 4461.841f, 0.0f, 212.8662f, 0.0f, 0.7263988f, 0.8719015f, 0.7263988f);
	Local_0.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_25", 3, -4318.88f, 23.52056f, 4399.396f, 0.0f, 391.8405f, 0.0f, 1.288239f, 0.3481335f, 1.288239f);
	Local_0.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_26", 3, -4298.25f, 23.09472f, 4398.522f, 0.0f, 302.0827f, 0.0f, 1.513376f, 1.816516f, 1.513376f);
	Local_0.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_27", 3, -4290.286f, 18.28778f, 4457.1f, 0.0f, 131.2531f, 0.0f, 0.5238062f, 0.5406335f, 0.5404987f);
	Local_0.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_28", 3, -4271.064f, 18.07059f, 4448.095f, 0.0f, 484.4667f, 0.0f, 1.507544f, 1.809515f, 1.507544f);
	Local_0.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_29", 3, -4263.438f, 21.92659f, 4398.127f, 0.0f, 181.6517f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	Local_0.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_30", 3, -4322.677f, 39.21352f, 4337.579f, 0.0f, 88.9016f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	Local_0.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_31", 3, -4298.537f, 26.73528f, 4387.033f, 0.0f, 119.8186f, 0.0f, 0.9709122f, 1.165393f, 0.9709122f);
	Local_0.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_32", 3, -4258.166f, 26.25237f, 4361.932f, 0.0f, 326.9444f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	Local_0.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_33", 3, -4309.515f, 36.35445f, 4284.558f, 0.0f, 33.44645f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	Local_0.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_34", 3, -4312.312f, 23.37056f, 4417.636f, 0.0f, 127.1442f, 0.0f, 0.9272344f, 0.5502081f, 0.9768387f);
	Local_0.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_35", 3, -4316.578f, 27.25433f, 4397.241f, 0.0f, 351.2562f, 0.0f, 1.288239f, 0.3481335f, 1.288239f);
	Local_0.f_296 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_36", 3, -4412.02f, 36.62922f, 4353.17f, 0.0f, 426.4858f, 0.0f, 1.501884f, 1.802721f, 1.501884f);
	Local_0.f_300 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_37", 3, -4358.554f, 30.09474f, 4372.247f, -31.05862f, 88.26597f, -31.61321f, 0.7802647f, 0.4385252f, 0.7802647f);
	Local_0.f_304 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_38", 3, -4359.812f, 40.42973f, 4368.776f, 0.0f, 98.11089f, 0.0f, 0.7114042f, 0.3998242f, 0.7114042f);
	Local_0.f_308 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_39", 3, -4377.92f, 34.81f, 4260.152f, 0.0f, 333.8404f, 0.0f, 1.501884f, 1.802721f, 1.501884f);
	Local_0.f_312 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_40", 3, -4405.673f, 34.78413f, 4416.313f, 0.0f, 129.1339f, 0.0f, 2.140898f, 1.20323f, 2.140898f);
	Local_0.f_316 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_41", 3, -4311.877f, 31.70709f, 4381.509f, 0.0f, 118.8577f, 0.0f, 1.501884f, 0.5731589f, 1.501884f);
	Local_0.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_42", 3, -4421.743f, 33.83559f, 4335.946f, 0.0f, 382.2401f, 0.0f, 1.501884f, 1.802721f, 1.501884f);
	Local_0.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_43", 3, -4332.854f, 22.34797f, 4457.568f, 0.0f, 447.988f, 0.0f, 0.7263988f, 0.8719015f, 0.7263988f);
	Local_0.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_44", 3, -4358.393f, 34.03831f, 4372.335f, 0.0f, 73.73163f, 0.0f, 0.7114042f, 0.3998242f, 0.7114042f);
	Local_0.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_45", 3, -4284.072f, 18.50686f, 4456.616f, 0.0f, 205.6215f, 0.0f, 0.7271153f, 0.7384764f, 0.7271153f);
	Local_0.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_46", 3, -4280.566f, 18.22794f, 4465.846f, 0.0f, 135.1432f, 0.0f, 0.8526884f, 1.023488f, 0.8526884f);
	Local_0.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_47", 3, -4370.318f, 39.21352f, 4339.844f, 0.0f, 360.3161f, 0.0f, 1.336139f, 0.7509382f, 1.336139f);
	Local_0.f_344 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_48", 3, -4261.677f, 18.44997f, 4453.227f, 0.0f, 305.2102f, 0.0f, 1.410503f, 1.693037f, 1.410503f);
	Local_0.f_348 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_49", 3, -4228.016f, 18.99342f, 4351.824f, 0.0f, 201.1676f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	Local_0.f_352 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_50", 3, -4243.849f, 22.27629f, 4349.88f, 0.0f, 356.5464f, 0.0f, 1.728941f, 2.075261f, 1.728941f);
	Local_0.f_356 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_51", 3, -4305.67f, 31.11509f, 4360.742f, 0.0f, 482.8779f, 0.0f, 2.106963f, 2.529002f, 2.106963f);
	Local_0.f_360 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_52", 3, -4294.658f, 29.80053f, 4384.946f, 0.0f, 570.1119f, 0.0f, 0.9570989f, 0.4023913f, 0.9570989f);
	Local_0.f_364 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_53", 3, -4276.169f, 30.1767f, 4351.824f, 0.0f, 690.9814f, 0.0f, 2.106963f, 2.529002f, 2.106963f);
	Local_0.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_54", 3, -4295.593f, 18.07059f, 4433.68f, 0.0f, 399.8997f, 0.0f, 0.8070184f, 0.9686699f, 0.8070184f);
	Local_0.f_372 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_14", 3, -4282.063f, 18.44485f, 4417.015f, 0.0f, 310.8465f, 0.0f, 0.9927493f, 1.191604f, 0.9927493f);
	*(&Local_0 + 376) = { -4380.016f, 38.92418f, 4343.824f };
	*(&Local_0 + 376 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_400 = CREATE_POINT_IN_LAYOUT(Local_0, "StandoffCenter", -4380.016f, 38.92418f, 4343.824f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 404) = { -4391.664f, 33.99272f, 4421.56f };
	*(&Local_0 + 404 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_428 = CREATE_POINT_IN_LAYOUT(Local_0, "Showdown_A", -4391.664f, 33.99272f, 4421.56f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 432) = { -4388.806f, 34.21125f, 4414.044f };
	*(&Local_0 + 432 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_456 = CREATE_POINT_IN_LAYOUT(Local_0, "Showdown_B", -4388.806f, 34.21125f, 4414.044f, 0.0f, 0.0f, 0.0f);
	Local_0.f_460 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_0, 8, 0);
	*(&Local_0 + 464[06]) = { -4351.683f, 28.36f, 4434.003f };
	*(&Local_0 + 464[06] + 12) = { 0.0f, 89.187f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_R1", -4351.683f, 28.36f, 4434.003f, 0.0f, 89.187f, 0.0f);
	DECOR_SET_INT(bVar1, "type", true);
	DECOR_SET_INT(bVar1, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_0.f_460);
	*(&Local_0 + 464[16]) = { -4276.056f, 18.10947f, 4446.201f };
	*(&Local_0 + 464[16] + 12) = { 0.0f, -142.8454f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_R2", -4276.056f, 18.10947f, 4446.201f, 0.0f, -142.8454f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_0.f_460);
	*(&Local_0 + 464[26]) = { -4368.843f, 39.21355f, 4331.823f };
	*(&Local_0 + 464[26] + 12) = { 0.0f, -89.54012f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_R3", -4368.843f, 39.21355f, 4331.823f, 0.0f, -89.54012f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_0.f_460);
	*(&Local_0 + 464[36]) = { -4312.29f, 39.21355f, 4337.047f };
	*(&Local_0 + 464[36] + 12) = { 0.0f, -280.2216f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_R4", -4312.29f, 39.21355f, 4337.047f, 0.0f, -280.2216f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_0.f_460);
	*(&Local_0 + 464[46]) = { -4273.056f, 26.12237f, 4365.163f };
	*(&Local_0 + 464[46] + 12) = { 3.194173f, 19.36797f, -2.377785f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_R5", -4273.056f, 26.12237f, 4365.163f, 3.194173f, 19.36797f, -2.377785f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_0.f_460);
	*(&Local_0 + 464[56]) = { -4324.0f, 22.08628f, 4458.719f };
	*(&Local_0 + 464[56] + 12) = { 0.0f, 124.2377f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_P1", -4324.0f, 22.08628f, 4458.719f, 0.0f, 124.2377f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_0.f_460);
	*(&Local_0 + 464[66]) = { -4269.715f, 21.54459f, 4395.782f };
	*(&Local_0 + 464[66] + 12) = { 0.0f, -363.8131f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_P2", -4269.715f, 21.54459f, 4395.782f, 0.0f, -363.8131f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_0.f_460);
	*(&Local_0 + 464[76]) = { -4303.501f, 31.13288f, 4370.713f };
	*(&Local_0 + 464[76] + 12) = { 0.0f, -240.5125f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_P3", -4303.501f, 31.13288f, 4370.713f, 0.0f, -240.5125f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_0.f_460);
	*(&Local_0 + 464[86]) = { -4354.371f, 29.32318f, 4410.313f };
	*(&Local_0 + 464[86] + 12) = { 0.3016659f, 360.5898f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_P4", -4354.371f, 29.32318f, 4410.313f, 0.3016659f, 360.5898f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_0.f_460);
	*(&Local_0 + 464[96]) = { -4331.126f, 42.04095f, 4343.463f };
	*(&Local_0 + 464[96] + 12) = { 0.0f, 0.3421888f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_P5", -4331.126f, 42.04095f, 4343.463f, 0.0f, 0.3421888f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_0.f_460);
	*(&Local_0 + 464[106]) = { -4397.75f, 38.08349f, 4350.09f };
	*(&Local_0 + 464[106] + 12) = { 0.0f, 175.9875f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_P6", -4397.75f, 38.08349f, 4350.09f, 0.0f, 175.9875f, 0.0f);
	DECOR_SET_INT(bVar11, "type", true);
	DECOR_SET_INT(bVar11, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_0.f_460);
	*(&Local_0 + 464[116]) = { -4335.51f, 33.93618f, 4297.921f };
	*(&Local_0 + 464[116] + 12) = { 0.0f, 178.6609f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_P7", -4335.51f, 33.93618f, 4297.921f, 0.0f, 178.6609f, 0.0f);
	DECOR_SET_INT(bVar12, "type", true);
	DECOR_SET_INT(bVar12, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_0.f_460);
	*(&Local_0 + 464[126]) = { -4346.284f, 29.85125f, 4369.894f };
	*(&Local_0 + 464[126] + 12) = { 0.0f, 4.516645f, -3.123522f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_B1", -4346.284f, 29.85125f, 4369.894f, 0.0f, 4.516645f, -3.123522f);
	DECOR_SET_INT(bVar13, "type", true);
	DECOR_SET_INT(bVar13, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_0.f_460);
	*(&Local_0 + 464[136]) = { -4326.126f, 27.56016f, 4405.646f };
	*(&Local_0 + 464[136] + 12) = { 0.0f, -20.65918f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_B2", -4326.126f, 27.56016f, 4405.646f, 0.0f, -20.65918f, 0.0f);
	DECOR_SET_INT(bVar14, "type", true);
	DECOR_SET_INT(bVar14, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_0.f_460);
	*(&Local_0 + 464[146]) = { -4342.128f, 42.04896f, 4330.824f };
	*(&Local_0 + 464[146] + 12) = { 0.0f, -89.44719f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_B3", -4342.128f, 42.04896f, 4330.824f, 0.0f, -89.44719f, 0.0f);
	DECOR_SET_INT(bVar15, "type", true);
	DECOR_SET_INT(bVar15, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_0.f_460);
	*(&Local_0 + 464[156]) = { -4250.359f, 18.89979f, 4456.971f };
	*(&Local_0 + 464[156] + 12) = { 0.0f, -16.77147f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_S1", -4250.359f, 18.89979f, 4456.971f, 0.0f, -16.77147f, 0.0f);
	DECOR_SET_INT(bVar16, "type", true);
	DECOR_SET_INT(bVar16, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_0.f_460);
	*(&Local_0 + 464[166]) = { -4287.868f, 18.09173f, 4470.783f };
	*(&Local_0 + 464[166] + 12) = { 0.0f, 178.6609f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_A1", -4287.868f, 18.09173f, 4470.783f, 0.0f, 178.6609f, 0.0f);
	DECOR_SET_INT(bVar17, "type", 2);
	DECOR_SET_INT(bVar17, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_0.f_460);
	*(&Local_0 + 464[176]) = { -4351.277f, 28.88631f, 4422.71f };
	*(&Local_0 + 464[176] + 12) = { -2.922175f, 178.6948f, -12.9261f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_A2", -4351.277f, 28.88631f, 4422.71f, -2.922175f, 178.6948f, -12.9261f);
	DECOR_SET_INT(bVar18, "type", 2);
	DECOR_SET_INT(bVar18, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_0.f_460);
	*(&Local_0 + 464[186]) = { -4321.917f, 39.22646f, 4330.236f };
	*(&Local_0 + 464[186] + 12) = { 0.0f, 88.56538f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_A3", -4321.917f, 39.22646f, 4330.236f, 0.0f, 88.56538f, 0.0f);
	DECOR_SET_INT(bVar19, "type", 2);
	DECOR_SET_INT(bVar19, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_0.f_460);
	*(&Local_0 + 464[196]) = { -4383.155f, 33.1928f, 4291.624f };
	*(&Local_0 + 464[196] + 12) = { 0.0f, 61.87643f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_A4", -4383.155f, 33.1928f, 4291.624f, 0.0f, 61.87643f, 0.0f);
	DECOR_SET_INT(bVar20, "type", 2);
	DECOR_SET_INT(bVar20, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_0.f_460);
	*(&Local_0 + 464[206]) = { -4371.916f, 33.59198f, 4422.974f };
	*(&Local_0 + 464[206] + 12) = { 14.23117f, 183.9467f, -8.408085f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_D1", -4371.916f, 33.59198f, 4422.974f, 14.23117f, 183.9467f, -8.408085f);
	DECOR_SET_INT(bVar21, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_0.f_460);
	*(&Local_0 + 464[216]) = { -4261.946f, 19.05947f, 4467.623f };
	*(&Local_0 + 464[216] + 12) = { 0.0f, -91.17104f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_D2", -4261.946f, 19.05947f, 4467.623f, 0.0f, -91.17104f, 0.0f);
	DECOR_SET_INT(bVar22, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_0.f_460);
	*(&Local_0 + 464[226]) = { -4255.197f, 22.14378f, 4372.217f };
	*(&Local_0 + 464[226] + 12) = { 0.0f, 57.41182f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_D3", -4255.197f, 22.14378f, 4372.217f, 0.0f, 57.41182f, 0.0f);
	DECOR_SET_INT(bVar23, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_0.f_460);
	*(&Local_0 + 464[236]) = { -4350.527f, 34.01736f, 4285.195f };
	*(&Local_0 + 464[236] + 12) = { 0.0f, -82.67724f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_D4", -4350.527f, 34.01736f, 4285.195f, 0.0f, -82.67724f, 0.0f);
	DECOR_SET_INT(bVar24, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_0.f_460);
	Local_0.f_1044 = CREATE_OBJECTSET_IN_LAYOUT(Function_89(), Local_0, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -4361.4f, 30.13115f, 4393.455f, 0.0f, 206.7822f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -4356.525f, 30.06641f, 4391.271f, 0.0f, 139.7325f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -4358.668f, 30.09315f, 4392.72f, 0.0f, -308.7896f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -4359.596f, 29.29251f, 4408.955f, 0.0f, 74.99266f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -4354.202f, 34.67133f, 4380.124f, 0.0f, -117.2347f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "Sit_Ground_Drink", "Sit_Ground_Drink", -4349.469f, 30.09648f, 4386.873f, 0.0f, 180.3056f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "sit_ground_smoke", "sit_ground_smoke", -4366.846f, 30.28511f, 4392.694f, 0.0f, -166.4392f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -4354.429f, 30.10313f, 4386.709f, 0.0f, 207.5786f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "smoking_stand", "smoking_stand", -4354.27f, 34.65978f, 4384.24f, 0.0f, 216.4554f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "smoking_stand1", "smoking_stand", -4348.983f, 29.32404f, 4402.456f, 0.0f, 0.0f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "smoking_stand2", "smoking_stand", -4358.622f, 29.3126f, 4411.92f, 0.0f, 175.8041f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "opium_pipe", "opium_pipe", -4357.344f, 34.66417f, 4384.367f, 0.0f, 166.3204f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -4358.89f, 30.13058f, 4390.013f, 0.0f, -167.647f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "repair_kneel", "repair_kneel", -4343.182f, 30.12568f, 4386.757f, 0.0f, -90.07611f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "knl_watertrough", "knl_watertrough", -4347.639f, 30.12677f, 4383.07f, 0.0f, 93.04971f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "Rand_Idle_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -4357.73f, 30.10422f, 4386.202f, 0.0f, 181.8209f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "Rand_Idle_NearWall_Shoulder_R1", "Rand_Idle_NearWall_Shoulder_R", -4351.457f, 29.32363f, 4410.468f, 0.0f, -180.0033f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "lean_fence_L", "lean_fence_L", -4346.644f, 29.31974f, 4402.457f, 0.0f, 270.1563f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "repair_kneel1", "repair_kneel", -4366.417f, 31.0971f, 4407.937f, 0.0f, 133.2904f, 0.0f), Local_0.f_1044);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "sit_ground_smoke1", "sit_ground_smoke", -4361.014f, 29.31027f, 4405.179f, 0.0f, 4.99003f, 0.0f), Local_0.f_1044);
	return;
}

void Function_262(int iParam0, int iParam1) //Position: 0x94E9 / 38121
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

void Function_263(int iParam0) //Position: 0x9532 / 38194
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_265("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_264(StackVal, 0);
	return;
}

void Function_264(var uParam0, int iParam1) //Position: 0x95A4 / 38308
{
	Function_119(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_118(StackVal, iParam1);
	}
	return;
}

bool Function_265(char* cParam0) //Position: 0x95D5 / 38357
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_266(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x95F4 / 38388
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_267() //Position: 0x9636 / 38454
{
	while (!IS_EXITFLAG_SET())
	{
		Function_95();
		if (Function_70())
		{
			Function_49(5121, 4745);
		}
		else
		{
			Function_49(3279, 1439);
		}
		WAIT(0);
	}
	return;
}

bool Function_268() //Position: 0x9668 / 38504
{
	return Function_127(2);
}

void Function_269() //Position: 0x9672 / 38514
{
	if (Function_268())
	{
		return;
	}
	Function_279();
	Function_277(&iLocal_301, Function_93(), 0, 0);
	while (!Function_271(&iLocal_301))
	{
		WAIT(0);
	}
	fLocal_273 = 5.0f;
	Function_95();
	Function_270();
	return;
}

void Function_270() //Position: 0x96A9 / 38569
{
	while (!Function_127(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_271(int iParam0) //Position: 0x96C4 / 38596
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_276();
	iVar1 = 0;
	if (!Function_15(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_275(iParam0[iVar03], 8);
		}
		else if (Function_274())
		{
			iVar1 = 1;
			Function_275(iParam0[iVar03], 8);
		}
		Function_275(iParam0[iVar03], 16);
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
				Function_275(iParam0[iVar03], 1);
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
							Function_275(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_275(iParam0[iVar03], 2);
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
							Function_275(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_275(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_275(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_275(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_275(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_275(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_275(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_275(iParam0[iVar03], 2);
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
	Function_272();
	return 1;
}

void Function_272() //Position: 0x9A3F / 39487
{
	if (!Function_273(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_273(int iParam0) //Position: 0x9A7F / 39551
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_274() //Position: 0x9A9B / 39579
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

void Function_275(var uParam0, int iParam1) //Position: 0x9AC6 / 39622
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_276() //Position: 0x9AD7 / 39639
{
	if (!Function_273(128))
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

var Function_277(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9B19 / 39705
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_278(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_275(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_278(var uParam0, int iParam1, int iParam2) //Position: 0x9B51 / 39761
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_15(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_275(uParam0[iVar03], 4);
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

void Function_279() //Position: 0x9C15 / 39957
{
	Local_274.f_96 = 4294967295;
	Local_274.f_100 = 4294967295;
	return;
}

