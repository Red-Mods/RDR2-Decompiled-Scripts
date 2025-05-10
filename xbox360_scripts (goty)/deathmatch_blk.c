//Decompiled with MagicRDR v1.0
//Function Count : 283
//Statics Count : 393
//Natives Count : 249
//Parameters Count : 0

#region Local Var
	struct<609> Local_0 = { 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	iLocal_163 = 0;
	fLocal_164 = 1.0f;
	iLocal_199 = 0;
	iLocal_200 = 0;
	Function_272();
	if (Function_271())
	{
		Function_270();
	}
	else
	{
		if (Function_139())
		{
			Function_138(1);
		}
		else
		{
			Function_137(1);
		}
		bVar0 = CREATE_WORLD_SECTOR(Local_0, "blackwater");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(0);
		}
		iVar1 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_136(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_135(64, 0);
					Function_133();
					iVar1 = 10;
				}
			}
			Function_117(&iLocal_364, 0.2f, 0.7f, 12, 1.0f, 1.0f, 0.0f, 0.0f);
			Function_104(&uLocal_202);
			Function_29();
			Function_26();
			WAIT(0);
		}
		Function_24(512);
		Function_20();
		Function_19(Global_83864.f_1284, 0, 1);
	}
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_blk_base01x", 0);
	DISABLE_CHILD_SECTOR("mp_blk_base01x");
	Function_17(&uLocal_202);
	Function_16();
	Function_3();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xFF / 255
{
	Function_2(uLocal_201);
	return;
}

int Function_2(bool bParam0) //Position: 0x10B / 267
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x121 / 289
{
	Function_12(&iLocal_192);
	Function_5();
	Function_4();
	return;
}

void Function_4() //Position: 0x132 / 306
{
	if (iLocal_199)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_199 = 0;
	}
	return;
}

void Function_5() //Position: 0x171 / 369
{
	Function_6();
	return;
}

void Function_6() //Position: 0x17A / 378
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

void Function_7(int iParam0, bool bParam1, int iParam2) //Position: 0x283 / 643
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

void Function_8(var uParam0, int iParam1) //Position: 0x2AB / 683
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x2BE / 702
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_10(int iParam0) //Position: 0x2CD / 717
{
	return Function_11(Global_76905.f_132, iParam0);
}

bool Function_11(var uParam0, int iParam1) //Position: 0x2DE / 734
{
	return (uParam0 && iParam1) == 0;
}

void Function_12(int iParam0) //Position: 0x2EB / 747
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

void Function_13(var uParam0, int iParam1) //Position: 0x311 / 785
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

void Function_14(var uParam0, int iParam1) //Position: 0x43F / 1087
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x459 / 1113
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x476 / 1142
{
	Function_12(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_17(int iParam0) //Position: 0x488 / 1160
{
	Function_135(64, 0);
	Function_18(iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0x499 / 1177
{
	if (iParam0->f_640 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_640, 0);
		iParam0->f_640 = "";
	}
	return;
}

void Function_19(var uParam0, bool bParam1, bool bParam2) //Position: 0x4B9 / 1209
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_9(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_9(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_20() //Position: 0x4E6 / 1254
{
	Function_21(Function_23());
	return;
}

void Function_21(int iParam0) //Position: 0x4F2 / 1266
{
	if (!Function_22(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = iParam0;
	return;
}

bool Function_22(int iParam0) //Position: 0x51F / 1311
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_23() //Position: 0x536 / 1334
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_24(int iParam0) //Position: 0x550 / 1360
{
	Function_25(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x589 / 1417
{
	Function_8(uParam0, iParam1);
	return;
}

void Function_26() //Position: 0x596 / 1430
{
	Function_27(2);
	return;
}

void Function_27(int iParam0) //Position: 0x5A0 / 1440
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
			Function_28(iParam0);
		}
	}
	return;
}

void Function_28(var uParam0) //Position: 0x5D2 / 1490
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_29() //Position: 0x5E1 / 1505
{
	Function_102();
	if (Function_101(1, 1))
	{
		Function_85(StackVal, StackVal, 7599, vLocal_196, 1, 7491);
	}
	else
	{
		if (!iLocal_200)
		{
			iLocal_200 = 1;
			Function_80(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		if (Function_77())
		{
			Function_56(5348, 4972);
		}
		else
		{
			Function_56(3506, 1666);
		}
		Function_30();
	}
	return;
}

void Function_30() //Position: 0x640 / 1600
{
	if (IS_OBJECT_VALID(Local_165.f_104))
	{
		DESTROY_OBJECT(Local_165.f_104);
		Function_31(&Local_165);
	}
	return;
}

void Function_31(int iParam0) //Position: 0x65C / 1628
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

int Function_32(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x682 / 1666
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_47(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_46(bParam0);
	bVar2 = Function_45(bParam0);
	bVar3 = Function_42(bParam0);
	iVar4 = Function_41((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_39(bParam0, iVar4, 0);
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
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_37(38, bParam0));
		bVar0++;
		Function_33(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_33(bool bParam0, bool bParam1) //Position: 0x767 / 1895
{
	if (Function_10(4))
	{
		if (Function_34(bParam1, 1024, 1))
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

bool Function_34(bool bParam0, int iParam1, bool bParam2) //Position: 0x79A / 1946
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_101(iParam1, bParam2);
	}
	if (!Function_36(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_35(iParam1), 64);
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

var Function_35(int iParam0) //Position: 0x81B / 2075
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

bool Function_36(bool bParam0) //Position: 0xB34 / 2868
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

int Function_37(int iParam0, bool bParam1) //Position: 0xBD5 / 3029
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_38(iParam0);
	}
	if (!Function_36(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_38(int iParam0) //Position: 0xC43 / 3139
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

bool Function_39(bool bParam0, int iParam1, int iParam2) //Position: 0xC5C / 3164
{
	var uVar0;
	
	return Function_40(bParam0, iParam1, &uVar0, iParam2);
}

int Function_40(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xC6D / 3181
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

var Function_41(int iParam0, int iParam1, int iParam2) //Position: 0xCD2 / 3282
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_42(bool bParam0) //Position: 0xCE7 / 3303
{
	return Function_43(0, bParam0);
}

int Function_43(int iParam0, bool bParam1) //Position: 0xCF3 / 3315
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_44(iParam0);
	}
	if (!Function_36(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_44(int iParam0) //Position: 0xD5A / 3418
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_45(bool bParam0) //Position: 0xD6A / 3434
{
	return Function_37(12, bParam0);
}

int Function_46(int iParam0) //Position: 0xD77 / 3447
{
	return Function_37(11, iParam0);
}

void Function_47(bool bParam0, int iParam1, char* cParam2) //Position: 0xD84 / 3460
{
	if (bParam0)
	{
		if (Function_48())
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

bool Function_48() //Position: 0xDA5 / 3493
{
	return Function_10(32768);
}

int Function_49() //Position: 0xDB2 / 3506
{
	if (!Function_51(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_50();
	return 1;
}

void Function_50() //Position: 0xE46 / 3654
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

bool Function_51(bool bParam0) //Position: 0xE83 / 3715
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_48() || Function_55(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_48())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_52(Function_48());
	return 1;
}

void Function_52(bool bParam0) //Position: 0xF04 / 3844
{
	if (bParam0 || Function_10(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_10(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_10(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_10(1048576) || Function_10(4)) || Function_101(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_7(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_53(int iParam0) //Position: 0xF8D / 3981
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_54(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xFA1 / 4001
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

int Function_55(bool bParam0, bool bParam1) //Position: 0xFE6 / 4070
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

void Function_56(int iParam0, int iParam1) //Position: 0x101A / 4122
{
	Function_57(iParam0, iParam1, 4965);
	return;
}

void Function_57(var uParam0, var uParam1, int iParam2) //Position: 0x102B / 4139
{
	if (Function_10(0x4000000))
	{
		Function_60();
		Function_7(0x4000000, 0, 1);
	}
	if (Function_10(0x10000000))
	{
		Function_60();
		Function_7(0x10000000, 0, 1);
	}
	if (Function_10(2) != Function_10(0x2000000))
	{
		Function_60();
		Function_7(0x2000000, Function_10(2), 1);
	}
	if (Function_48())
	{
		Function_59(!Function_10(16));
	}
	if (Function_10(16))
	{
		Function_58(&uParam0, &uParam1, &iParam2);
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

void Function_58(var uParam0, var uParam1, int iParam2) //Position: 0x11C4 / 4548
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
			if (!Function_36(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_34(bVar1, 2048, 1))
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
				if (Function_39(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_39(bVar1, (4294966296 - bVar1), 1))
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

void Function_59(bool bParam0) //Position: 0x133C / 4924
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_7(16384, 0, 1);
	return;
}

void Function_60() //Position: 0x1356 / 4950
{
	Function_7(32768, 1, 0);
	return;
}

int Function_61() //Position: 0x1365 / 4965
{
	return 1;
}

int Function_62(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x136C / 4972
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_47(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_46(bParam0);
	bVar2 = Function_45(bParam0);
	bVar3 = Function_42(bParam0);
	iVar4 = Function_41((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_39(bParam0, iVar4, 0);
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
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_37(38, bParam0));
		bVar0++;
		Function_33(bVar0, bParam0);
	}
	if (Function_63(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_63(bool bParam0) //Position: 0x1461 / 5217
{
	if (Function_65(bParam0, 1, 0) != 4294967295 && Function_64() != 4294967295)
	{
		return 0;
	}
	return Function_65(bParam0, 1, 0) != Function_64();
}

int Function_64() //Position: 0x1489 / 5257
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_65(GET_LOCAL_SLOT(), 1, 0);
}

int Function_65(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14A0 / 5280
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_36(bParam0))
			{
				if (!Function_34(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_66() //Position: 0x14E4 / 5348
{
	if (!Function_51(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_67();
	Function_50();
	return 1;
}

void Function_67() //Position: 0x157B / 5499
{
	if (Function_77())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_76())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_68(0, 0);
		Function_68(1, 0);
	}
	return;
}

void Function_68(bool bParam0, bool bParam1) //Position: 0x15A6 / 5542
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_64())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_75(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_69(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_69(int iParam0, int iParam1, bool bParam2) //Position: 0x1645 / 5701
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_48())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_71(iParam1, 0) };
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
		if (Function_70())
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

bool Function_70() //Position: 0x1738 / 5944
{
	return (Function_10(4096) || Function_10(4));
}

struct<16> Function_71(var uParam0, var uParam1) //Position: 0x1749 / 5961
{
	return StackVal, StackVal, StackVal, Function_72(Function_73(uParam0), uParam1);
}

struct<16> Function_72(bool bParam0, bool bParam1) //Position: 0x175B / 5979
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

int Function_73(int iParam0) //Position: 0x1790 / 6032
{
	if (!Function_74())
	{
		return 0;
	}
	return StackVal;
}

bool Function_74() //Position: 0x17A9 / 6057
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_75(int iParam0) //Position: 0x17B6 / 6070
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_76() //Position: 0x17D2 / 6098
{
	return Function_64() == 4294967295;
}

bool Function_77() //Position: 0x17DD / 6109
{
	return Function_78(2);
}

int Function_78(int iParam0) //Position: 0x17E7 / 6119
{
	return Function_79(&Global_79349, iParam0);
}

int Function_79(var uParam0, int iParam1) //Position: 0x17F6 / 6134
{
	return Function_11(uParam0->f_44, iParam1);
}

void Function_80(vector3 vParam0, float fParam3) //Position: 0x1805 / 6149
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_84(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_84(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_81(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_81(bool bParam0) //Position: 0x18B8 / 6328
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
	return Function_82(bVar0);
}

int Function_82(bool bParam0) //Position: 0x18F3 / 6387
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
	Function_83(bVar0);
	return bVar0;
}

void Function_83(bool bParam0) //Position: 0x1941 / 6465
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_84() //Position: 0x1954 / 6484
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_85(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1983 / 6531
{
	if (!IS_OBJECT_VALID(Local_165.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_165.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_165.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_86(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_165.f_104, &Local_165) + Vector(0.0f, 2.45f, 0.0f), 1, 7390, 1, 125, 0, 0, 0);
	Function_86(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_165.f_104, &Local_165 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_86(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1A06 / 6662
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_87(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_87(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1A51 / 6737
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
			Function_31(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_164;
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
					Function_31(iParam0);
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
			fVar14 = Function_88(iParam0->f_36);
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

var Function_88(float fParam0) //Position: 0x1CD0 / 7376
{
	return (fParam0 * 57.29578f);
}

var Function_89(int iParam0, var uParam1) //Position: 0x1CDE / 7390
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_165.f_96 != iParam0)
	{
		Local_165.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_90(int iParam0, var uParam1) //Position: 0x1D43 / 7491
{
	uParam1 = uParam1;
	if (Local_165.f_100 != iParam0)
	{
		Local_165.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("DM_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_91() //Position: 0x1DAF / 7599
{
	int iVar0;
	
	iVar0 = Function_97(Global_83591.f_140, &vLocal_196, 0.0f, &Global_83591 + 276, 1);
	Function_92(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_92(bool bParam0, int iParam1) //Position: 0x1DDC / 7644
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_96(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_95((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_95((*iParam1)[iVar202], &iVar21))
		{
			if (Function_93((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_93(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1EEB / 7915
{
	float fVar0;
	
	if (!Function_94(bParam0))
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

bool Function_94(int iParam0) //Position: 0x2012 / 8210
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_95(bool bParam0, int iParam1) //Position: 0x2024 / 8228
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

var Function_96() //Position: 0x2080 / 8320
{
	int iVar0;
	
	return iVar0;
}

var Function_97(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2088 / 8328
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_99(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_95((*uParam3)[iVar12], &iVar2))
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
		if (Function_95((*uParam3)[iVar12], &iVar2))
		{
			if (Function_98((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_98(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2176 / 8566
{
	if (!Function_94(bParam0))
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

var Function_99(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2307 / 8967
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_100()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_100() //Position: 0x2373 / 9075
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_101(bool bParam0, bool bParam1) //Position: 0x239A / 9114
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_102() //Position: 0x23BA / 9146
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_199)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000002:
						Function_103("DM_help", 4294967295);
						break;
					
					case 0x00000011:
						Function_103("TDM_help", 4294967295);
						break;
				}
				iLocal_199 = 1;
			}
		}
	}
	else
	{
		Function_4();
	}
	return;
}

void Function_103(char* cParam0, int iParam1) //Position: 0x242A / 9258
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

int Function_104(int iParam0) //Position: 0x24C1 / 9409
{
	int iVar0;
	
	if (!Function_115(*iParam0) || (Function_136(64) && Function_111()))
	{
		iParam0->f_4 = 0;
		Function_18(iParam0);
		if (!Function_115(*iParam0))
		{
		}
		if (Function_136(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_115(*iParam0))
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
						(iParam0 + 12[Function_108(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
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
								Function_107((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_106((iParam0 + 12[StackVal5])->f_12, 1);
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
			while (iVar0 <= Function_105(3, iParam0->f_636))
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

int Function_105(int iParam0, bool bParam1) //Position: 0x2848 / 10312
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_106(bool bParam0, bool bParam1) //Position: 0x285A / 10330
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

void Function_107(bool bParam0, bool bParam1) //Position: 0x28AE / 10414
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

int Function_108(var uParam0, var uParam1, int iParam2) //Position: 0x28FF / 10495
{
	return Function_109(Global_29006, uParam0, uParam1, iParam2);
}

int Function_109(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2911 / 10513
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_110(iParam0))
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

bool Function_110(int iParam0) //Position: 0x29AD / 10669
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_111() //Position: 0x29C3 / 10691
{
	return !Function_112();
}

bool Function_112() //Position: 0x29CD / 10701
{
	if (Function_114())
	{
		return (Function_113() != 1 || Function_113() != 0);
	}
	return 0;
}

int Function_113() //Position: 0x29E6 / 10726
{
	return Global_79349.f_16;
}

bool Function_114() //Position: 0x29F2 / 10738
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_115(int iParam0) //Position: 0x29FB / 10747
{
	if (!Function_110(iParam0))
	{
		return 1;
	}
	return Function_116(&(Global_29008[iParam0]), 4);
}

int Function_116(var uParam0, bool bParam1) //Position: 0x2A17 / 10775
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_117(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2A33 / 10803
{
	float fVar0;
	
	if (Function_132())
	{
		if (Function_131(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_127(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_121((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_118((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_121((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_118((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_118(int iParam0, var uParam1, int iParam2) //Position: 0x2AD6 / 10966
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_120(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_119(iParam2);
	}
	return;
}

void Function_119(int iParam0) //Position: 0x2AFB / 11003
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_120(int iParam0) //Position: 0x2B10 / 11024
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_121(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2B25 / 11045
{
	int iVar0;
	bool bVar1;
	
	Function_126(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_125(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_122(StackVal, bVar1, bParam4);
		}
	}
}

void Function_122(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B97 / 11159
{
	int iVar0;
	
	Function_126(iParam0);
	Function_124(bParam1);
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
	Function_123();
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

void Function_123() //Position: 0x2D10 / 11536
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_124(bool bParam0) //Position: 0x2D1C / 11548
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

void Function_125(int iParam0, int iParam1) //Position: 0x2D62 / 11618
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_126(iParam0);
	Function_124(iVar0);
	PRINTNL();
	Function_122(iParam0, iVar0, iParam1);
	return;
}

void Function_126(int iParam0) //Position: 0x2D87 / 11655
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

float Function_127(int iParam0) //Position: 0x2DCD / 11725
{
	return -Function_128(iParam0);
}

float Function_128(int iParam0) //Position: 0x2DD9 / 11737
{
	if (Function_131(iParam0))
	{
		if (Function_130(iParam0))
		{
			return StackVal;
		}
		Function_129();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_129() //Position: 0x2EAA / 11946
{
	if (!Function_132())
	{
	}
	return;
}

bool Function_130(int iParam0) //Position: 0x2EB7 / 11959
{
	return Function_11(*iParam0, 2);
}

bool Function_131(int iParam0) //Position: 0x2EC4 / 11972
{
	return Function_11(*iParam0, 1);
}

bool Function_132() //Position: 0x2ED1 / 11985
{
	return NET_IS_IN_SESSION();
}

void Function_133() //Position: 0x2EDA / 11994
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_96());
	Function_134(bVar0, "milkcan", Local_0.f_116);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_134(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2F00 / 12032
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_96(), bParam0, 4294967295, 1);
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

void Function_135(int iParam0, bool bParam1) //Position: 0x2F59 / 12121
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

bool Function_136(int iParam0) //Position: 0x2F81 / 12161
{
	return Function_11(StackVal, iParam0);
}

void Function_137(bool bParam0) //Position: 0x2F94 / 12180
{
	Function_135(16, bParam0);
	return;
}

void Function_138(var uParam0) //Position: 0x2FA1 / 12193
{
	Function_135(8, uParam0);
	return;
}

bool Function_139() //Position: 0x2FAE / 12206
{
	Function_269(&iLocal_364, 0, 9, 30, 1, 1, 0);
	Function_269(&iLocal_364, 1, 9, 30, 2, 2, 2);
	Function_269(&iLocal_364, 2, 12, 0, 3, 3, 3);
	Function_269(&iLocal_364, 3, 12, 0, 0, 0, 1);
	Function_269(&iLocal_364, 4, 23, 0, 1, 1, 0);
	Function_266(&iLocal_364);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_264();
	ENABLE_CHILD_SECTOR("mp_blk_base01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_blk_base01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_263(512);
	Function_262(Global_83864.f_1284);
	Function_21(998);
	Function_19(Global_83864.f_1284, 0, 1);
	Function_255(&Global_83591 + 276, 0);
	Function_253(&Global_83591, 1, 22, 1, 1);
	Function_253(&Global_83591, 2, 0, 10, 1);
	Function_253(&Global_83591, 3, 8, 10, 1);
	Function_253(&Global_83591, 4, 15, 15, 1);
	Function_248(&Global_83591, 1, 19, 8, 1);
	Function_248(&Global_83591, 2, 2, 8, 1);
	Function_248(&Global_83591, 3, 16, 15, 1);
	Function_248(&Global_83591, 4, 11, 8, 1);
	Function_247(&Global_83591);
	Function_246(&Global_83591 + 276, 4);
	Function_245(0, 6);
	Function_245(1, 1);
	Function_237();
	Function_140();
	return 1;
}

void Function_140() //Position: 0x30E2 / 12514
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 12623);
	uLocal_201 = Function_141("DLCPVP");
	return;
}

var Function_141(bool bParam0) //Position: 0x30FF / 12543
{
	bool bVar0;
	
	bVar0 = Function_142();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_142() //Position: 0x3113 / 12563
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_143(var uParam0) //Position: 0x314F / 12623
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
			bVar11 = Function_78(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_236())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_113())
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
							Function_233(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_229(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_146(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_112() || Function_144(4096))
						{
							if (Function_101(131072, 1))
							{
							}
							if (Function_34(Var0, 131072, 1))
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
			if (bVar11 && !Function_144(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_144(int iParam0) //Position: 0x32B3 / 12979
{
	return Function_145(Global_79336, iParam0);
}

bool Function_145(var uParam0, bool bParam1) //Position: 0x32C2 / 12994
{
	return (uParam0 && bParam1) == 0;
}

void Function_146(struct<29> Param0) //Position: 0x32CF / 13007
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_151(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_151(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_150(), 29, 1);
					Global_83823[29] = 1;
					Function_147(6002);
					Function_147(6005);
					Function_147(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_147(6001);
				Function_147(6004);
			}
			break;
	}
}

void Function_147(int iParam0) //Position: 0x33B0 / 13232
{
	Function_148(iParam0, 1);
	return;
}

void Function_148(int iParam0, bool bParam1) //Position: 0x33BC / 13244
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_9(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_149((iVar0 % 32)));
	}
	else
	{
		Function_8(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_149((iVar0 % 32)));
	}
	return;
}

int Function_149(bool bParam0) //Position: 0x3412 / 13330
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_150() //Position: 0x341E / 13342
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_151(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x3433 / 13363
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_152(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_152(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x345F / 13407
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_228(uParam0, uParam2, uParam3);
			}
			Function_153(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_153(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_153(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_153(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x34DC / 13532
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_227(*uParam0);
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
					Function_225(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_171(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_160(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_159(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_154(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_154(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x35AA / 13738
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_158(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_157(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_158(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_156(iParam0, 4))
	{
		Function_155(Function_158(iParam0), 0);
	}
}

void Function_155(var uParam0, int iParam1) //Position: 0x3661 / 13921
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

bool Function_156(int iParam0, int iParam1) //Position: 0x3686 / 13958
{
	return Function_11(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_157(int iParam0) //Position: 0x369A / 13978
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_158(int iParam0) //Position: 0x36CE / 14030
{
	return Global_50170[iParam022].f_24;
}

var Function_159(int iParam0, int iParam1) //Position: 0x36DD / 14045
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_160(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x36F0 / 14064
{
	Function_168(*uParam0);
	Function_161(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_158(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_158(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_161(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3795 / 14229
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_167(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_158(iParam0));
	if ((bParam3 && Function_156(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_158(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_166(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_157(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_164(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_163(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_158(iParam0), &Var7, 0, 2, Function_156(iParam0, 4));
			if (!bParam3)
			{
				Function_162(iParam0, 4);
			}
		}
	}
}

void Function_162(int iParam0, int iParam1) //Position: 0x3852 / 14418
{
	Function_9(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_163(int iParam0) //Position: 0x3866 / 14438
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_157(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_164(int iParam0) //Position: 0x3886 / 14470
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_165(int iParam0) //Position: 0x38B4 / 14516
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_166(int iParam0) //Position: 0x38E4 / 14564
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_167(int iParam0) //Position: 0x3915 / 14613
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

void Function_168(int iParam0) //Position: 0x3A93 / 14995
{
	Function_169(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_169(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3AA9 / 15017
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_170();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_170() //Position: 0x3B1E / 15134
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_171(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3B6B / 15211
{
	struct<4> Var0;
	
	Function_224(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_157(*uParam0) };
	Function_219(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_218(*uParam0, 4);
	Function_172();
}

void Function_172() //Position: 0x3BC9 / 15305
{
	if (!Function_114())
	{
		if (!Function_217(1, 3, 1, 1))
		{
			Function_205(1);
			Function_204(1, 8);
		}
	}
	else
	{
		Function_173(0);
	}
	return;
}

void Function_173(bool bParam0) //Position: 0x3BF2 / 15346
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_202(2);
	if (bParam0)
	{
		Function_202(1);
	}
	else
	{
		Function_201(1);
	}
	Function_174();
	return;
}

void Function_174() //Position: 0x3C7B / 15483
{
	Function_199();
	Function_198();
	Function_198();
	Function_197();
	Function_197();
	Function_196();
	Function_196();
	Function_181(0);
	Function_181(0);
	if (!Function_114())
	{
		Function_179();
		Function_178();
		Function_177();
		Function_176();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_175();
	return;
}

void Function_175() //Position: 0x3CCD / 15565
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

void Function_176() //Position: 0x3DD3 / 15827
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

void Function_177() //Position: 0x3E06 / 15878
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

void Function_178() //Position: 0x3F94 / 16276
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

void Function_179() //Position: 0x4176 / 16758
{
	Function_180(&Global_28260, 1, 0);
	return;
}

void Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x4184 / 16772
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
	
	bVar0 = Function_150();
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

struct<8> Function_181(int iParam0) //Position: 0x4375 / 17269
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
					iVar2 = ((Function_195((50 + iVar4)) + Function_195((183 + iVar4))) + Function_195((90 + iVar4)));
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
	Function_182(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_182(int iParam0, bool bParam1, bool bParam2) //Position: 0x441B / 17435
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
		Function_194(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_193(iParam0);
	if (bParam2)
	{
		Function_183(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_183(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x46B6 / 18102
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_192(390))), 32);
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
					bVar19 = (Function_191(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_191(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_189(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_187(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_185(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_184(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_96(), &Var9);
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

var Function_184(int iParam0) //Position: 0x4CE3 / 19683
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_185(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4CF4 / 19700
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_186("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_186("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_186("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_186(char* cParam0, bool bParam1) //Position: 0x4DE9 / 19945
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_187(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4E02 / 19970
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_105(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_188(Function_105(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_188(int iParam0, int iParam1) //Position: 0x4E67 / 20071
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_189(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4E79 / 20089
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
	if (((Function_190(iParam0) != 19 || Function_190(iParam0) != 17) || Function_190(iParam0) != 10) || Function_190(iParam0) != 9)
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

int Function_190(int iParam0) //Position: 0x4FA9 / 20393
{
	return Global_35278[iParam020].f_48;
}

float Function_191(int iParam0) //Position: 0x4FB8 / 20408
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_192(int iParam0) //Position: 0x4FF1 / 20465
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_193(int iParam0) //Position: 0x502E / 20526
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

int Function_194(int iParam0, bool bParam1, bool bParam2) //Position: 0x51C8 / 20936
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

int Function_195(bool bParam0) //Position: 0x540C / 21516
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_196() //Position: 0x544D / 21581
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
		iVar2 = ((Function_195((50 + iVar3) + 15) + Function_195((183 + iVar3) + 15)) + Function_195((90 + iVar3) + 15));
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
	Function_182(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_197() //Position: 0x54D6 / 21718
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
			iVar2 = ((Function_195((50 + iVar3) + 8) + Function_195((183 + iVar3) + 8)) + Function_195((90 + iVar3) + 8));
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
	Function_182(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_198() //Position: 0x556D / 21869
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
		iVar2 = ((Function_195((50 + iVar3)) + Function_195((183 + iVar3))) + Function_195((90 + iVar3)));
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
	Function_182(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_199() //Position: 0x55EC / 21996
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_200(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_182(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_200(int iParam0, bool bParam1, int iParam2) //Position: 0x5625 / 22053
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
	Function_194(iParam0, bParam1, 1);
	Function_193(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_183(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_201(int iParam0) //Position: 0x582F / 22575
{
	Function_25(&Global_79338, iParam0);
	return;
}

void Function_202(int iParam0) //Position: 0x583E / 22590
{
	Function_203(&Global_79338, iParam0);
	return;
}

void Function_203(var uParam0, int iParam1) //Position: 0x584D / 22605
{
	Function_9(uParam0, iParam1);
	return;
}

void Function_204(var uParam0, int iParam1) //Position: 0x585A / 22618
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_114())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_205(bool bParam0) //Position: 0x589C / 22684
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_206();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_174();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_8(&Global_63095, 1);
		Function_8(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_206() //Position: 0x58ED / 22765
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_216())
	{
		Function_213(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_213(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_208(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_208(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_207(StackVal, StackVal, vVar0))
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

bool Function_207(vector3 vParam0) //Position: 0x59A8 / 22952
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_208(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x59C0 / 22976
{
	int iVar0;
	
	iVar0 = Function_211(uParam2, uParam3);
	if (Function_210(iVar0))
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
	Function_209();
	return StackVal, StackVal, Function_209();
}

vector3 Function_209() //Position: 0x5AA7 / 23207
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_210(int iParam0) //Position: 0x5AB0 / 23216
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_211(bool bParam0, bool bParam1) //Position: 0x5AC6 / 23238
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
				fVar2 = Function_212(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_212(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_210(bVar0) && !bParam1)
	{
		bVar0 = Function_211(bParam0, 1);
	}
	return bVar0;
}

float Function_212(vector3 vParam0, vector3 vParam3) //Position: 0x5B8D / 23437
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_213(var uParam0, int iParam1) //Position: 0x5BAA / 23466
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_215(Global_34573, &vVar4);
	if (!Function_214(Global_30640[0]))
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
	if (!Function_214(Global_30640[2]))
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
	if (!Function_214(Global_30640[1]))
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
	if (!Function_214(Global_30658[1]))
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
	if (!Function_214(Global_30658[3]))
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
	if (!Function_214(Global_30658[2]))
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
	if (!Function_214(Global_30658[4]))
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
	if (!Function_214(Global_30668[0]))
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
	if (!Function_214(Global_30668[1]))
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
	if (!Function_214(Global_30668[2]))
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
	if (!Function_214(Global_30679[0]))
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
	if (!Function_214(Global_30685[0]))
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
	if (!Function_214(Global_30685[1]))
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
	if (!Function_214(Global_30685[2]))
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
	if (!Function_214(Global_30693[0]))
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
	if (!Function_214(Global_30693[1]))
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
	if (!Function_214(Global_30693[2]))
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
	if (!Function_214(Global_30707[2]))
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
	if (!Function_214(Global_30707[3]))
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
	if (!Function_214(Global_30707[0]))
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
	if (!Function_214(Global_30717[0]))
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
	if (!Function_214(Global_30723[2]))
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
	if (!Function_214(Global_30723[1]))
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
	if (!Function_214(Global_30723[0]))
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
	if (!Function_214(Global_30679[1]))
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
	if (!Function_214(Global_30707[1]))
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
	if (Function_207(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_214(int iParam0) //Position: 0x63CF / 25551
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || !Function_11(uVar0, 0x10000000));
}

void Function_215(bool bParam0, int iParam1) //Position: 0x640A / 25610
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_216() //Position: 0x6417 / 25623
{
	if (Function_11(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_217(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x6432 / 25650
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

void Function_218(int iParam0, int iParam1) //Position: 0x64D6 / 25814
{
	Function_8(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_219(bool bParam0, bool bParam1, bool bParam2) //Position: 0x64EA / 25834
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_84();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_223(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_222(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_221(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_220(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_223(), iVar1 + 1);
	return;
}

struct<16> Function_220(int iParam0) //Position: 0x655C / 25948
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_221(int iParam0) //Position: 0x657D / 25981
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_222(int iParam0) //Position: 0x659E / 26014
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_223() //Position: 0x65BF / 26047
{
	return "CQueue_Count";
}

void Function_224(bool bParam0, bool bParam1) //Position: 0x65D4 / 26068
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_170();
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

void Function_225(var uParam0, bool bParam1, bool bParam2) //Position: 0x6720 / 26400
{
	Function_224(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_158(*uParam0), 1.0f, 0, 0);
	Function_226(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_219(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_172();
	return;
}

void Function_226(int iParam0, int iParam1) //Position: 0x6785 / 26501
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_167(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_158(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_166(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_157(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_163(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_158(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_158(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_158(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_227(int iParam0) //Position: 0x6807 / 26631
{
	return Global_50170[iParam022].f_12;
}

void Function_228(var uParam0, bool bParam1, bool bParam2) //Position: 0x6816 / 26646
{
	Function_168(*uParam0);
	if (!Function_156(*uParam0, 2))
	{
		Function_161(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_162(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_158(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_229(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x6853 / 26707
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_227(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_63(Param3) && Param3.f_12 != 29)
						{
							if (Function_145(Param3.f_40, 1048576))
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
					Function_231(230, 150, Function_232(), 4294967295);
					Function_147(6007);
					Function_147(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_230(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_154(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_230(var uParam0, bool bParam1, int iParam2) //Position: 0x6915 / 26901
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_231(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x692D / 26925
{
	Function_224(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_158(iParam0), 1.0f, 0, 0);
	Function_226(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_147(iParam3);
	}
	Function_219(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_172();
}

bool Function_232() //Position: 0x6993 / 27027
{
	return "MP_TrickShot_Icon_128";
}

void Function_233(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x69B1 / 27057
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_227(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_234(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_235(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_147(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_230(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_154(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_227(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_231(231, 100, Function_235(), 4294967295);
					Function_147(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_230(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_154(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_234(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6AD9 / 27353
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_157(uParam0) };
	Function_219(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_230(&uParam5, uParam8, uParam9);
	Function_154(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_161(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_147(iParam12);
	}
	Function_218(uParam0, 4);
	Function_172();
}

var Function_235() //Position: 0x6B4F / 27471
{
	return "MP_Revenge_Icon_128";
}

bool Function_236() //Position: 0x6B6B / 27499
{
	if (Function_144(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_237() //Position: 0x6B95 / 27541
{
	Function_241(Local_0);
	Function_239(Local_0.f_584);
	if (Function_77())
	{
		Function_238("NRT_SONG_01", "NRT_SONG_03", 0, 58, 58, 1);
	}
	else
	{
		Function_238("NRT_SONG_03", "NRT_SONG_01", 0, 58, 58, 1);
	}
	return;
}

void Function_238(char* cParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x6BF9 / 27641
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

void Function_239(bool bParam0) //Position: 0x6C89 / 27785
{
	DECOR_SET_OBJECT(Function_240(), "LobbyGringoSet", bParam0);
	return;
}

var Function_240() //Position: 0x6CA9 / 27817
{
	return Global_83591.f_140;
}

void Function_241(var uParam0) //Position: 0x6CB5 / 27829
{
	if (Function_244())
	{
		Function_246(&Global_83591 + 276, 2);
	}
	Function_243(uParam0);
	Global_83591.f_4 = 2;
	Function_242();
	vLocal_196 = { StackVal, StackVal, Function_242() };
	return;
}

vector3 Function_242() //Position: 0x6CDF / 27871
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_240();
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

void Function_243(var uParam0) //Position: 0x6D27 / 27943
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_244() //Position: 0x6D35 / 27957
{
	return Function_11(Global_79962, 1024);
}

void Function_245(int iParam0, int iParam1) //Position: 0x6D45 / 27973
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0x6D53 / 27987
{
	(iParam0 + 228)->f_220 = 0;
	Function_9(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_247(int iParam0) //Position: 0x6D6B / 28011
{
	iParam0->f_844 = 0;
	return;
}

void Function_248(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6D77 / 28023
{
	Function_249(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_249(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6D8F / 28047
{
	Function_250(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_250(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6DA6 / 28070
{
	if (!Function_252(iParam1))
	{
		return;
	}
	Function_251(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_251(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6DC9 / 28105
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

bool Function_252(int iParam0) //Position: 0x6DF3 / 28147
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_253(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6E03 / 28163
{
	Function_254(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_254(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x6E1B / 28187
{
	Function_250(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_255(int iParam0, bool bParam1) //Position: 0x6E30 / 28208
{
	Function_259(iParam0);
	Function_259(iParam0 + 228);
	if (bParam1)
	{
		Function_256(iParam0);
	}
	return;
}

void Function_256(int iParam0) //Position: 0x6E4C / 28236
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_257(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_257(var uParam0, int iParam1) //Position: 0x6E6C / 28268
{
	Function_258(uParam0, iParam1, 0);
	return;
}

void Function_258(int iParam0, int iParam1, int iParam2) //Position: 0x6E7A / 28282
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_259(int iParam0) //Position: 0x6E8B / 28299
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_261(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_260(iParam0, 0.0f);
	return;
}

void Function_260(var uParam0, int iParam1) //Position: 0x6EB8 / 28344
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_261(int iParam0) //Position: 0x6EC4 / 28356
{
	Function_251(iParam0, 4294967295, 0, 1);
	return;
}

void Function_262(int iParam0) //Position: 0x6ED2 / 28370
{
	if (!Function_22(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0), 64);
	return;
}

void Function_263(var uParam0) //Position: 0x6F01 / 28417
{
	Function_203(&Global_79336, uParam0);
	if (uParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_264() //Position: 0x6F5A / 28506
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
	
	Function_265(4, 1);
	uVar0 = uVar0;
	Local_0 = CREATE_LAYOUT("Deathmatch_BLK_layout");
	Local_0.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "playablespace", 3, 732.2814f, 78.30585f, 1301.061f, 0.0f, 87.94306f, 0.0f, 198.1995f, 39.9726f, 111.5278f);
	Local_0.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_0", 3, 675.7842f, 78.30585f, 1344.0f, 0.0f, 88.75424f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_1", 3, 812.2103f, 79.56858f, 1233.079f, 0.0f, -94.42254f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	Local_0.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_2", 3, 674.2471f, 78.30585f, 1228.0f, 0.0f, -5.333569f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	Local_0.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_3", 3, 780.5359f, 78.30585f, 1362.74f, 0.0f, 174.9852f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_4", 3, 736.9054f, 78.87982f, 1223.318f, 0.0f, 174.9852f, 0.0f, 1.23048f, 1.280189f, 1.23048f);
	Local_0.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_5", 3, 750.1956f, 78.30585f, 1365.805f, 0.0f, 271.4482f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	Local_0.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_6", 3, 750.1956f, 78.30585f, 1365.805f, 0.0f, 271.4482f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	Local_0.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_7", 3, 657.325f, 78.16015f, 1274.664f, 0.0f, 451.4027f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	Local_0.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_8", 3, 810.7064f, 78.471f, 1303.057f, 0.0f, 581.0511f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	Local_0.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_9", 3, 762.4905f, 78.38076f, 1224.0f, 0.0f, 643.3622f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	Local_0.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_10", 3, 710.264f, 78.30585f, 1354.88f, 0.0f, 623.3904f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	Local_0.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_11", 3, 697.2882f, 78.30585f, 1228.852f, 0.0f, 366.5947f, 0.0f, 1.097924f, 1.142277f, 1.097924f);
	Local_0.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_12", 3, 763.2208f, 78.30585f, 1352.237f, 0.0f, 536.5276f, 0.0f, 0.8312305f, 0.8648101f, 0.8312305f);
	Local_0.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_13", 3, 780.6464f, 78.30585f, 1228.0f, 0.0f, 357.1966f, 0.0f, 1.119613f, 1.164842f, 1.119613f);
	Local_0.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_14", 3, 680.5995f, 78.30585f, 1365.438f, 0.0f, 162.4858f, 0.0f, 1.119613f, 1.164842f, 1.119613f);
	Local_0.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_15", 3, 767.407f, 78.30585f, 1320.0f, 0.0f, 232.0695f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	Local_0.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_16", 3, 767.1066f, 78.30585f, 1280.0f, 0.0f, 179.3813f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	Local_0.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_17", 3, 710.1257f, 78.30585f, 1309.012f, 0.0f, 218.6833f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	Local_0.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_18", 3, 705.7951f, 78.30585f, 1267.145f, 0.0f, 127.6531f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	Local_0.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_19", 3, 672.7479f, 77.84531f, 1318.569f, 0.0f, 127.6531f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	Local_0.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_0, "SpawnVol_20", 3, 813.1932f, 78.471f, 1270.206f, 0.0f, -42.77343f, 0.0f, 0.8397177f, 0.8736401f, 0.8397177f);
	*(&Local_0 + 204) = { 708.5468f, 78.27846f, 1230.768f };
	*(&Local_0 + 204 + 12) = { 0.0f, 180.0f, 0.0f };
	Local_0.f_228 = CREATE_POINT_IN_LAYOUT(Local_0, "Showdown_A", 708.5468f, 78.27846f, 1230.768f, 0.0f, 180.0f, 0.0f);
	*(&Local_0 + 232) = { 708.5468f, 78.27846f, 1239.082f };
	*(&Local_0 + 232 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_256 = CREATE_POINT_IN_LAYOUT(Local_0, "Showdown_B", 708.5468f, 78.27846f, 1239.082f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 260) = { 735.7324f, 78.30585f, 1302.719f };
	*(&Local_0 + 260 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_284 = CREATE_POINT_IN_LAYOUT(Local_0, "StandoffCenter", 735.7324f, 78.30585f, 1302.719f, 0.0f, 0.0f, 0.0f);
	Local_0.f_288 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_0, 8, 0);
	*(&Local_0 + 292[06]) = { 681.4855f, 78.08309f, 1311.451f };
	*(&Local_0 + 292[06] + 12) = { 0.0f, 91.00717f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_D1", 681.4855f, 78.08309f, 1311.451f, 0.0f, 91.00717f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_0.f_288);
	*(&Local_0 + 292[16]) = { 794.9637f, 78.30591f, 1267.716f };
	*(&Local_0 + 292[16] + 12) = { 0.0f, -90.4975f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_0, "npickup_D2", 794.9637f, 78.30591f, 1267.716f, 0.0f, -90.4975f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_0.f_288);
	*(&Local_0 + 292[26]) = { 765.2485f, 78.30235f, 1288.333f };
	*(&Local_0 + 292[26] + 12) = { 0.0f, -89.16434f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_B1", 765.2485f, 78.30235f, 1288.333f, 0.0f, -89.16434f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_0.f_288);
	*(&Local_0 + 292[36]) = { 705.03f, 78.30585f, 1307.584f };
	*(&Local_0 + 292[36] + 12) = { 0.0f, 89.28339f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_B2", 705.03f, 78.30585f, 1307.584f, 0.0f, 89.28339f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_0.f_288);
	*(&Local_0 + 292[46]) = { 758.4585f, 78.42879f, 1329.049f };
	*(&Local_0 + 292[46] + 12) = { 0.0f, -359.8607f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_P1", 758.4585f, 78.42879f, 1329.049f, 0.0f, -359.8607f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_0.f_288);
	*(&Local_0 + 292[56]) = { 711.9711f, 78.46546f, 1261.454f };
	*(&Local_0 + 292[56] + 12) = { 0.0f, -180.636f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_P2", 711.9711f, 78.46546f, 1261.454f, 0.0f, -180.636f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_0.f_288);
	*(&Local_0 + 292[66]) = { 723.8386f, 78.45217f, 1329.112f };
	*(&Local_0 + 292[66] + 12) = { 0.0f, -0.8610804f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_S1", 723.8386f, 78.45217f, 1329.112f, 0.0f, -0.8610804f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_0.f_288);
	*(&Local_0 + 292[76]) = { 746.8428f, 78.39705f, 1261.197f };
	*(&Local_0 + 292[76] + 12) = { 0.0f, -178.8879f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_S2", 746.8428f, 78.39705f, 1261.197f, 0.0f, -178.8879f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_0.f_288);
	*(&Local_0 + 292[86]) = { 698.6893f, 78.41046f, 1343.111f };
	*(&Local_0 + 292[86] + 12) = { 0.0f, -179.904f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_R1", 698.6893f, 78.41046f, 1343.111f, 0.0f, -179.904f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_0.f_288);
	*(&Local_0 + 292[96]) = { 776.8415f, 78.50547f, 1244.391f };
	*(&Local_0 + 292[96] + 12) = { 0.0f, -0.5332201f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_R2", 776.8415f, 78.50547f, 1244.391f, 0.0f, -0.5332201f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_0.f_288);
	*(&Local_0 + 292[106]) = { 727.0134f, 78.46718f, 1279.58f };
	*(&Local_0 + 292[106] + 12) = { 0.0f, 90.77052f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_A1", 727.0134f, 78.46718f, 1279.58f, 0.0f, 90.77052f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_0.f_288);
	*(&Local_0 + 292[116]) = { 743.8985f, 78.44872f, 1313.778f };
	*(&Local_0 + 292[116] + 12) = { 0.0f, -91.07835f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_0, "nPickup_A2", 743.8985f, 78.44872f, 1313.778f, 0.0f, -91.07835f, 0.0f);
	DECOR_SET_INT(bVar12, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_0.f_288);
	Local_0.f_584 = CREATE_OBJECTSET_IN_LAYOUT(Function_96(), Local_0, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "rand_idle_stand", "rand_idle_stand", 742.6319f, 78.49428f, 1346.9f, 0.0f, 89.45083f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "rand_idle_stand1", "rand_idle_stand", 739.7031f, 78.31305f, 1319.16f, 0.0f, 492.1089f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "rand_idle_stand2", "rand_idle_stand", 727.5923f, 78.48113f, 1342.779f, 0.0f, 0.0f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", 728.0952f, 78.47964f, 1320.59f, 0.0f, -156.318f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", 729.0662f, 78.45217f, 1323.515f, 0.0f, 11.95855f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", 720.5508f, 78.48463f, 1330.886f, 0.0f, -218.7963f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "smoking_stand", "smoking_stand", 716.9537f, 78.30305f, 1336.585f, 0.0f, 50.42945f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "smoking_stand1", "smoking_stand", 731.0332f, 78.31273f, 1333.619f, 0.0f, -174.8718f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "smoking_stand2", "smoking_stand", 745.8621f, 78.4883f, 1343.611f, 0.0f, 0.0f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "smoking_stand3", "smoking_stand", 743.6122f, 78.43999f, 1312.595f, 0.0f, 77.95436f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "Sit_Ground_Drink", "Sit_Ground_Drink", 746.6511f, 78.4309f, 1328.991f, 0.0f, -179.2421f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "Sit_Ground_Drink1", "Sit_Ground_Drink", 720.8263f, 78.32368f, 1338.106f, 0.0f, -124.875f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "sit_ground_smoke", "sit_ground_smoke", 745.3375f, 78.3062f, 1338.504f, 0.0f, 86.7634f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "sit_ground_smoke1", "sit_ground_smoke", 726.8714f, 78.47739f, 1351.653f, 0.0f, -95.76814f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "lean_rail_nospawn", "lean_rail_nospawn", 740.0699f, 78.45702f, 1321.992f, 0.0f, 139.7575f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "Rand_Idle_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", 743.9324f, 78.43806f, 1322.522f, 0.0f, 88.42634f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "Rand_Idle_NearWall_Shoulder_R1", "Rand_Idle_NearWall_Shoulder_R", 727.6804f, 78.45217f, 1325.698f, 0.0f, -87.88843f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "Rand_Idle_NearWall_Shoulder_R2", "Rand_Idle_NearWall_Shoulder_R", 724.7184f, 78.48586f, 1343.946f, 0.0f, 0.0f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", 725.9174f, 78.31617f, 1337.702f, 0.0f, 40.48618f, 0.0f), Local_0.f_584);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_0, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", 735.7324f, 78.30585f, 1330.802f, 0.0f, 151.7734f, 0.0f), Local_0.f_584);
	Local_0.f_588 = CREATE_PROP_IN_LAYOUT(Local_0, "ntable33x0", "p_gen_table33x", 692.1818f, 82.23486f, 1229.355f, 0.0f, 90.0f, -90.0f, 1);
	Local_0.f_592 = CREATE_PROP_IN_LAYOUT(Local_0, "ntable33x1", "p_gen_table33x", 690.897f, 82.18892f, 1227.229f, 90.0f, 180.0f, 0.0f, 1);
	Local_0.f_596 = CREATE_PROP_IN_LAYOUT(Local_0, "ntable33x2", "p_gen_table33x", 687.1113f, 82.18892f, 1227.229f, 90.0f, 180.0f, 0.0f, 1);
	Local_0.f_600 = CREATE_PROP_IN_LAYOUT(Local_0, "ntable33x3", "p_gen_table33x", 692.1541f, 82.23486f, 1241.104f, 0.0f, 90.0f, -90.0f, 1);
	Local_0.f_604 = CREATE_PROP_IN_LAYOUT(Local_0, "ntable33x4", "p_gen_table33x", 690.1158f, 82.34863f, 1242.382f, 90.0f, 0.0f, 0.0f, 1);
	Local_0.f_608 = CREATE_PROP_IN_LAYOUT(Local_0, "ntable33x5", "p_gen_table33x", 686.3453f, 82.34863f, 1242.382f, 90.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_265(int iParam0, int iParam1) //Position: 0x833A / 33594
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

void Function_266(int iParam0) //Position: 0x8383 / 33667
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_268("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_267(StackVal, 0);
	return;
}

void Function_267(var uParam0, int iParam1) //Position: 0x83F5 / 33781
{
	Function_126(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_125(StackVal, iParam1);
	}
	return;
}

bool Function_268(char* cParam0) //Position: 0x8426 / 33830
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_269(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8445 / 33861
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_270() //Position: 0x8487 / 33927
{
	while (!IS_EXITFLAG_SET())
	{
		Function_102();
		if (Function_77())
		{
			Function_56(5348, 4972);
		}
		else
		{
			Function_56(3506, 1666);
		}
		WAIT(0);
	}
	return;
}

bool Function_271() //Position: 0x84B9 / 33977
{
	return Function_136(2);
}

void Function_272() //Position: 0x84C3 / 33987
{
	if (Function_271())
	{
		return;
	}
	Function_282();
	Function_280(&iLocal_192, Function_100(), 0, 0);
	while (!Function_274(&iLocal_192))
	{
		WAIT(0);
	}
	fLocal_164 = 5.0f;
	Function_102();
	Function_273();
	return;
}

void Function_273() //Position: 0x84F7 / 34039
{
	while (!Function_136(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_274(int iParam0) //Position: 0x8512 / 34066
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_279();
	iVar1 = 0;
	if (!Function_15(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_278(iParam0[iVar03], 8);
		}
		else if (Function_277())
		{
			iVar1 = 1;
			Function_278(iParam0[iVar03], 8);
		}
		Function_278(iParam0[iVar03], 16);
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
				Function_278(iParam0[iVar03], 1);
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
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
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
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_278(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_278(iParam0[iVar03], 2);
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
	Function_275();
	return 1;
}

void Function_275() //Position: 0x888D / 34957
{
	if (!Function_276(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_276(int iParam0) //Position: 0x88CD / 35021
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_277() //Position: 0x88E9 / 35049
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

void Function_278(var uParam0, int iParam1) //Position: 0x8914 / 35092
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_279() //Position: 0x8925 / 35109
{
	if (!Function_276(128))
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

var Function_280(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8967 / 35175
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_281(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_278(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_281(var uParam0, int iParam1, int iParam2) //Position: 0x899F / 35231
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_15(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_278(uParam0[iVar03], 4);
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

void Function_282() //Position: 0x8A63 / 35427
{
	Local_165.f_96 = 4294967295;
	Local_165.f_100 = 4294967295;
	return;
}

