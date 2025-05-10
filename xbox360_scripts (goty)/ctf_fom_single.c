//Decompiled with MagicRDR v1.0
//Function Count : 283
//Statics Count : 599
//Natives Count : 250
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
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	struct<669> Local_139 = { 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	iLocal_51 = 31;
	iLocal_52 = 33;
	iLocal_53 = 1;
	fLocal_54 = 2.0f;
	iLocal_56 = 0;
	iLocal_57 = 0;
	fLocal_84 = 60.0f;
	iLocal_131 = 0;
	iLocal_132 = 0;
	iLocal_133 = 0;
	iLocal_134 = 0;
	iLocal_135 = 0;
	iLocal_136 = 0;
	iLocal_137 = 0;
	iLocal_138 = 0;
	Function_272();
	if (Function_271())
	{
		Function_269();
	}
	else
	{
		if (Function_135())
		{
			Function_134(1);
		}
		else
		{
			Function_133(1);
		}
		Function_132(0, 4);
		Function_131();
		bVar0 = CREATE_WORLD_SECTOR(Local_139, "fortMercer");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(0);
		}
		iVar1 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_130(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_129(64, 0);
					Function_127();
					iVar1 = 2;
				}
			}
			Function_111(&iLocal_570, 0.15f, 0.7f, 12, 0.0f, 0.0f, 0.0f, 0.0f);
			Function_98(&uLocal_308);
			Function_22();
			Function_19();
			WAIT(0);
		}
	}
	Function_17(&uLocal_308);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_fom_base02x", 0);
	DISABLE_CHILD_SECTOR("mp_fom_base02x");
	Function_8();
	Function_3();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x11F / 287
{
	Function_2(uLocal_307);
	return;
}

int Function_2(bool bParam0) //Position: 0x12C / 300
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x142 / 322
{
	Function_4(&Local_139 + 4);
	RELEASE_LAYOUT_REF(Local_139);
	return;
}

void Function_4(int iParam0) //Position: 0x154 / 340
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_5(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x17A / 378
{
	if (Function_7(uParam0[iParam13], 4))
	{
		if (Function_7(uParam0[iParam13], 1))
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
			Function_6(uParam0[iParam13], 1);
			Function_6(uParam0[iParam13], 2);
			Function_6(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0x2A8 / 680
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x2C2 / 706
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x2DF / 735
{
	Function_16();
	Function_4(&bLocal_39);
	Function_9();
	return;
}

void Function_9() //Position: 0x2F0 / 752
{
	Function_10();
	return;
}

void Function_10() //Position: 0x2F9 / 761
{
	if (Function_14(4194304))
	{
		Function_11(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_14(8388608))
	{
		Function_11(8388608, 0, 1);
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

void Function_11(int iParam0, bool bParam1, int iParam2) //Position: 0x402 / 1026
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_13(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_12(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x42A / 1066
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x43D / 1085
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_14(bool bParam0) //Position: 0x44C / 1100
{
	return Function_15(Global_76905.f_132, bParam0);
}

bool Function_15(var uParam0, bool bParam1) //Position: 0x45D / 1117
{
	return (uParam0 && bParam1) == 0;
}

void Function_16() //Position: 0x46A / 1130
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_17(int iParam0) //Position: 0x4A9 / 1193
{
	Function_129(64, 0);
	Function_18(iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0x4BA / 1210
{
	if (iParam0->f_1040 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_1040, 0);
		iParam0->f_1040 = "";
	}
	return;
}

void Function_19() //Position: 0x4DA / 1242
{
	Function_20(2);
	return;
}

void Function_20(int iParam0) //Position: 0x4E4 / 1252
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

void Function_21(var uParam0) //Position: 0x516 / 1302
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_22() //Position: 0x525 / 1317
{
	Function_96();
	if (Function_95(1, 1))
	{
		Function_79(StackVal, StackVal, 7397, vLocal_48, 1, 7284);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_74(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_25(4685, 3522);
		Function_23();
	}
	return;
}

void Function_23() //Position: 0x570 / 1392
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_24(&Local_12);
	}
	return;
}

void Function_24(int iParam0) //Position: 0x58C / 1420
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

void Function_25(int iParam0, int iParam1) //Position: 0x5B2 / 1458
{
	Function_26(iParam0, iParam1, 3515);
	return;
}

void Function_26(var uParam0, var uParam1, int iParam2) //Position: 0x5C3 / 1475
{
	if (Function_14(0x4000000))
	{
		Function_35();
		Function_11(0x4000000, 0, 1);
	}
	if (Function_14(0x10000000))
	{
		Function_35();
		Function_11(0x10000000, 0, 1);
	}
	if (Function_14(2) != Function_14(0x2000000))
	{
		Function_35();
		Function_11(0x2000000, Function_14(2), 1);
	}
	if (Function_34())
	{
		Function_33(!Function_14(16));
	}
	if (Function_14(16))
	{
		Function_27(&uParam0, &uParam1, &iParam2);
		if (Function_14(8192))
		{
			if (!Function_14(4194304))
			{
				Function_11(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_14(8388608))
			{
				Function_11(8388608, 1, 1);
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
			Function_10();
		}
		Function_11(16384, 1, 1);
	}
	else if (!Function_14(32))
	{
		Function_10();
	}
	Function_11(32768, 0, 1);
	return;
}

void Function_27(var uParam0, var uParam1, int iParam2) //Position: 0x75C / 1884
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_11(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_14(0x40000000);
	bVar3 = !Function_14(131072);
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
				if (Function_28(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_14(4))
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
			if (Function_28(bVar1, (4294966296 - bVar1), 1))
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

bool Function_28(bool bParam0, int iParam1, int iParam2) //Position: 0x8D4 / 2260
{
	var uVar0;
	
	return Function_29(bParam0, iParam1, &uVar0, iParam2);
}

int Function_29(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x8E5 / 2277
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

bool Function_30(bool bParam0, int iParam1, bool bParam2) //Position: 0x94A / 2378
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_95(iParam1, bParam2);
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

var Function_31(int iParam0) //Position: 0x9CB / 2507
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

bool Function_32(bool bParam0) //Position: 0xCE4 / 3300
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

void Function_33(bool bParam0) //Position: 0xD85 / 3461
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_11(16384, 0, 1);
	return;
}

bool Function_34() //Position: 0xD9F / 3487
{
	return Function_14(32768);
}

void Function_35() //Position: 0xDAC / 3500
{
	Function_11(32768, 1, 0);
	return;
}

int Function_36() //Position: 0xDBB / 3515
{
	return 1;
}

int Function_37(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xDC2 / 3522
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_54(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_53(bParam0);
	bVar2 = Function_52(bParam0);
	bVar3 = Function_49(bParam0);
	iVar4 = Function_48(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_28(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_46(34, bParam0));
		bVar0++;
	}
	if (Function_43(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_14(4))
	{
		if (Function_40(bParam0, 1, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "<SWAG_Y_RET>");
		}
	}
	else
	{
		Function_39(bVar0, bParam0);
	}
	if (Function_34() && Function_38())
	{
	}
	return 0;
}

bool Function_38() //Position: 0xE99 / 3737
{
	return (Function_14(4096) || Function_14(4));
}

void Function_39(bool bParam0, bool bParam1) //Position: 0xEAA / 3754
{
	if (Function_14(4))
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

bool Function_40(bool bParam0, int iParam1, bool bParam2) //Position: 0xEDD / 3805
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_42(iParam1, bParam2);
	}
	if (!Function_32(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_41(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_128 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_41(int iParam0) //Position: 0xF5E / 3934
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HAD_FLAG";
			break;
		
		case 0x00000002:
			return "nFRD_SPOON";
			break;
		
		case 0x00000004:
			return "FRD_IN_VOL";
			break;
		
		case 0x00000008:
			return "MP_TRANSIENT_BIT_FRD_IN_SPOONHOLDER_POSSE";
			break;
		
		case 0x00100000:
			return "IN_AIR";
			break;
		
		case 0x00200000:
			return "MOUNTED";
			break;
		
		case 0x00400000:
			return "KILLED BY BLINDFIRE";
			break;
		
		case 0x00800000:
			return "KILLED IN COVER";
			break;
	}
	return "UNKNOWN";
}

var Function_42(int iParam0, bool bParam1) //Position: 0x1050 / 4176
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_43(bool bParam0) //Position: 0x1070 / 4208
{
	if (Function_45(bParam0, 1, 0) != 4294967295 && Function_44() != 4294967295)
	{
		return 0;
	}
	return Function_45(bParam0, 1, 0) != Function_44();
}

int Function_44() //Position: 0x1098 / 4248
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_45(GET_LOCAL_SLOT(), 1, 0);
}

int Function_45(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10AF / 4271
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

int Function_46(int iParam0, bool bParam1) //Position: 0x10F3 / 4339
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_47(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_47(int iParam0) //Position: 0x1161 / 4449
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_48(int iParam0, int iParam1, int iParam2) //Position: 0x117A / 4474
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_49(bool bParam0) //Position: 0x118F / 4495
{
	return Function_50(0, bParam0);
}

int Function_50(int iParam0, bool bParam1) //Position: 0x119B / 4507
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_51(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_51(int iParam0) //Position: 0x1202 / 4610
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_52(bool bParam0) //Position: 0x1212 / 4626
{
	return Function_46(12, bParam0);
}

int Function_53(int iParam0) //Position: 0x121F / 4639
{
	return Function_46(11, iParam0);
}

void Function_54(bool bParam0, int iParam1, char* cParam2) //Position: 0x122C / 4652
{
	if (bParam0)
	{
		if (Function_34())
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

int Function_55() //Position: 0x124D / 4685
{
	if (!Function_69(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_68();
	Function_56();
	return 1;
}

void Function_56() //Position: 0x12E9 / 4841
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
		Function_57(0, 0);
		Function_57(1, 0);
	}
	return;
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x1314 / 4884
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_44())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_63(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_58(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_58(int iParam0, int iParam1, bool bParam2) //Position: 0x13B3 / 5043
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_34())
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
		if (Function_38())
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

struct<16> Function_59(var uParam0, var uParam1) //Position: 0x14A6 / 5286
{
	return StackVal, StackVal, StackVal, Function_60(Function_61(uParam0), uParam1);
}

struct<16> Function_60(bool bParam0, bool bParam1) //Position: 0x14B8 / 5304
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

int Function_61(int iParam0) //Position: 0x14ED / 5357
{
	if (!Function_62())
	{
		return 0;
	}
	return StackVal;
}

bool Function_62() //Position: 0x1506 / 5382
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_63(int iParam0) //Position: 0x1513 / 5395
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_64() //Position: 0x152F / 5423
{
	return Function_44() == 4294967295;
}

bool Function_65() //Position: 0x153A / 5434
{
	return Function_66(2);
}

int Function_66(int iParam0) //Position: 0x1544 / 5444
{
	return Function_67(&Global_79349, iParam0);
}

int Function_67(var uParam0, bool bParam1) //Position: 0x1553 / 5459
{
	return Function_15(uParam0->f_44, bParam1);
}

void Function_68() //Position: 0x1562 / 5474
{
	if (Function_14(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_11(8192, 1, 1);
	}
	else if (Function_14(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_11(8192, 1, 1);
	}
	else
	{
		Function_11(8192, 0, 1);
	}
	return;
}

bool Function_69(bool bParam0) //Position: 0x159F / 5535
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_34() || Function_73(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_71(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_34())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_70(Function_34());
	return 1;
}

void Function_70(bool bParam0) //Position: 0x1620 / 5664
{
	if (bParam0 || Function_14(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_14(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_14(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_14(1048576) || Function_14(4)) || Function_95(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_11(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_71(int iParam0) //Position: 0x16A9 / 5801
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_72(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x16BD / 5821
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

int Function_73(bool bParam0, bool bParam1) //Position: 0x1702 / 5890
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

void Function_74(vector3 vParam0, float fParam3) //Position: 0x1736 / 5942
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_78(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_78(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_75(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_75(bool bParam0) //Position: 0x17E9 / 6121
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
	return Function_76(bVar0);
}

int Function_76(bool bParam0) //Position: 0x1824 / 6180
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
	Function_77(bVar0);
	return bVar0;
}

void Function_77(bool bParam0) //Position: 0x1872 / 6258
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_78() //Position: 0x1885 / 6277
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_79(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x18B4 / 6324
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_80(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7183, 1, 125, 0, 0, 0);
	Function_80(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_80(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1937 / 6455
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_81(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_81(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1982 / 6530
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
			fVar14 = Function_82(iParam0->f_36);
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

var Function_82(float fParam0) //Position: 0x1C01 / 7169
{
	return (fParam0 * 57.29578f);
}

var Function_83(int iParam0, var uParam1) //Position: 0x1C0F / 7183
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_71(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_84(int iParam0, var uParam1) //Position: 0x1C74 / 7284
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_one_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_85() //Position: 0x1CE5 / 7397
{
	int iVar0;
	
	iVar0 = Function_91(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_86(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_86(bool bParam0, int iParam1) //Position: 0x1D12 / 7442
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_90(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_89((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_89((*iParam1)[iVar202], &iVar21))
		{
			if (Function_87((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_87(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1E21 / 7713
{
	float fVar0;
	
	if (!Function_88(bParam0))
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

bool Function_88(int iParam0) //Position: 0x1F48 / 8008
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_89(bool bParam0, int iParam1) //Position: 0x1F5A / 8026
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

var Function_90() //Position: 0x1FB6 / 8118
{
	int iVar0;
	
	return iVar0;
}

var Function_91(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1FBE / 8126
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_93(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_89((*uParam3)[iVar12], &iVar2))
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
		if (Function_89((*uParam3)[iVar12], &iVar2))
		{
			if (Function_92((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_92(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x20AC / 8364
{
	if (!Function_88(bParam0))
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

var Function_93(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x223D / 8765
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_94()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_94() //Position: 0x22A9 / 8873
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_95(bool bParam0, bool bParam1) //Position: 0x22D0 / 8912
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_96() //Position: 0x22F0 / 8944
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_46)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000009:
						Function_97("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_97("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_97("CTF_mul_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_16();
	}
	return;
}

void Function_97(char* cParam0, int iParam1) //Position: 0x2385 / 9093
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

int Function_98(int iParam0) //Position: 0x241C / 9244
{
	int iVar0;
	
	if (!Function_109(*iParam0) || (Function_130(64) && Function_105()))
	{
		iParam0->f_4 = 0;
		Function_18(iParam0);
		if (!Function_109(*iParam0))
		{
		}
		if (Function_130(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_109(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 1040);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_1036)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_102(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_15((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_12(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_15((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_1036)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_1036)
				{
					if (!Function_15((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_15((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_101((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_100((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_1036)
			{
				iParam0->f_1044 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_1044) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_18(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_99(3, iParam0->f_1036))
			{
				if (iParam0->f_1036 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_1036);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_15((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_15((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_13(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_15((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_15((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_15((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_99(int iParam0, bool bParam1) //Position: 0x27A3 / 10147
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_100(bool bParam0, bool bParam1) //Position: 0x27B5 / 10165
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

void Function_101(bool bParam0, bool bParam1) //Position: 0x2809 / 10249
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

int Function_102(var uParam0, var uParam1, int iParam2) //Position: 0x285A / 10330
{
	return Function_103(Global_29006, uParam0, uParam1, iParam2);
}

int Function_103(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x286C / 10348
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_104(iParam0))
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

bool Function_104(int iParam0) //Position: 0x2908 / 10504
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_105() //Position: 0x291E / 10526
{
	return !Function_106();
}

bool Function_106() //Position: 0x2928 / 10536
{
	if (Function_108())
	{
		return (Function_107() != 1 || Function_107() != 0);
	}
	return 0;
}

int Function_107() //Position: 0x2941 / 10561
{
	return Global_79349.f_16;
}

bool Function_108() //Position: 0x294D / 10573
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_109(int iParam0) //Position: 0x2956 / 10582
{
	if (!Function_104(iParam0))
	{
		return 1;
	}
	return Function_110(&(Global_29008[iParam0]), 4);
}

int Function_110(var uParam0, bool bParam1) //Position: 0x2972 / 10610
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_111(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x298E / 10638
{
	float fVar0;
	
	if (Function_126())
	{
		if (Function_125(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_121(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_115((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_112((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_115((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_112((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_112(int iParam0, var uParam1, int iParam2) //Position: 0x2A31 / 10801
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_114(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_113(iParam2);
	}
	return;
}

void Function_113(int iParam0) //Position: 0x2A56 / 10838
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_114(int iParam0) //Position: 0x2A6B / 10859
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2A80 / 10880
{
	int iVar0;
	bool bVar1;
	
	Function_120(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_119(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_116(StackVal, bVar1, bParam4);
		}
	}
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AF2 / 10994
{
	int iVar0;
	
	Function_120(iParam0);
	Function_118(bParam1);
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
	Function_117();
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

void Function_117() //Position: 0x2C6B / 11371
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_118(bool bParam0) //Position: 0x2C77 / 11383
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

void Function_119(int iParam0, int iParam1) //Position: 0x2CBD / 11453
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_120(iParam0);
	Function_118(iVar0);
	PRINTNL();
	Function_116(iParam0, iVar0, iParam1);
	return;
}

void Function_120(int iParam0) //Position: 0x2CE2 / 11490
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

float Function_121(int iParam0) //Position: 0x2D28 / 11560
{
	return -Function_122(iParam0);
}

float Function_122(int iParam0) //Position: 0x2D34 / 11572
{
	if (Function_125(iParam0))
	{
		if (Function_124(iParam0))
		{
			return StackVal;
		}
		Function_123();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_123() //Position: 0x2E05 / 11781
{
	if (!Function_126())
	{
	}
	return;
}

bool Function_124(int iParam0) //Position: 0x2E12 / 11794
{
	return Function_15(*iParam0, 2);
}

bool Function_125(int iParam0) //Position: 0x2E1F / 11807
{
	return Function_15(*iParam0, 1);
}

bool Function_126() //Position: 0x2E2C / 11820
{
	return NET_IS_IN_SESSION();
}

void Function_127() //Position: 0x2E35 / 11829
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_90());
	Function_128(bVar0, "bottle", Local_139.f_200);
	Function_128(bVar0, "mug0", Local_139.f_200);
	Function_128(bVar0, "glass", Local_139.f_200);
	Function_128(bVar0, "crate14", Local_139.f_200);
	Function_128(bVar0, "crate03", Local_139.f_200);
	Function_128(bVar0, "package", Local_139.f_200);
	Function_128(bVar0, "nlantern05", Local_139.f_200);
	Function_128(bVar0, "blanket", Local_139.f_200);
	Function_128(bVar0, "c_tes_blanket", Local_139.f_200);
	Function_128(bVar0, "p_gen_bucket02x", Local_139.f_200);
	Function_128(bVar0, "p_gen_bucket03x", Local_139.f_200);
	Function_128(bVar0, "p_gen_basin01x", Local_139.f_200);
	Function_128(bVar0, "p_gen_can01x", Local_139.f_200);
	Function_128(bVar0, "p_gen_can02x", Local_139.f_200);
	Function_128(bVar0, "jar0", Local_139.f_200);
	Function_128(bVar0, "book", Local_139.f_200);
	Function_128(bVar0, "spittoon", Local_139.f_200);
	Function_128(bVar0, "milkcan", Local_139.f_200);
	Function_128(bVar0, "jug0", Local_139.f_200);
	Function_128(bVar0, "broom", Local_139.f_200);
	Function_128(bVar0, "cratebreak", Local_139.f_200);
	Function_128(bVar0, "potclay", Local_139.f_200);
	Function_128(bVar0, "fom_gallows01_flag", Local_139.f_200);
	Function_128(bVar0, "fom_leftwing01_flag", Local_139.f_200);
	Function_128(bVar0, "rope", Local_139.f_200);
	Function_128(bVar0, "nlantern07", Local_139.f_200);
	Function_128(bVar0, "i_gen_blanket09x", Local_139.f_200);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3084 / 12420
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_90(), bParam0, 4294967295, 1);
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

void Function_129(int iParam0, bool bParam1) //Position: 0x30DD / 12509
{
	if (bParam1)
	{
		Function_13(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_12(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_130(int iParam0) //Position: 0x3105 / 12549
{
	return Function_15(StackVal, iParam0);
}

void Function_131() //Position: 0x3118 / 12568
{
	bool bVar0;
	vector3 vVar1;
	
	vVar1 = { -2645.675f, 67.455f, 3423.185f };
	bVar0 = LOCATE_PHYSINST_OF_TYPE(vVar1, 10.0f, "p_fom_crankSlatCombined01x", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar0));
	}
	return;
}

void Function_132(int iParam0, int iParam1) //Position: 0x316D / 12653
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_133(bool bParam0) //Position: 0x318E / 12686
{
	Function_129(16, bParam0);
	return;
}

void Function_134(var uParam0) //Position: 0x319B / 12699
{
	Function_129(8, uParam0);
	return;
}

bool Function_135() //Position: 0x31A8 / 12712
{
	Function_268(&iLocal_570, 0, 9, 30, 0, 0, 1);
	Function_268(&iLocal_570, 1, 9, 30, 2, 2, 1);
	Function_268(&iLocal_570, 2, 11, 0, 1, 2, 2);
	Function_268(&iLocal_570, 3, 11, 0, 1, 1, 0);
	Function_268(&iLocal_570, 4, 23, 0, 1, 0, 1);
	Function_265(&iLocal_570);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_263();
	ENABLE_CHILD_SECTOR("mp_fom_base02x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_fom_base02x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_259(Local_139))
	{
		return 0;
	}
	Function_258("FTR_SONG_09", "FTR_SONG_06", 0, 58, 58, 1);
	Function_256(Local_139.f_668);
	Function_249(&Global_83591 + 276, 0);
	Function_247(&Global_83591, 1, 22, 1, 1);
	Function_247(&Global_83591, 2, 0, 10, 1);
	Function_247(&Global_83591, 3, 9, 10, 1);
	Function_247(&Global_83591, 4, 16, 15, 1);
	Function_242(&Global_83591, 1, 24, 4, 1);
	Function_242(&Global_83591, 2, 1, 10, 1);
	Function_242(&Global_83591, 3, 18, 15, 1);
	Function_242(&Global_83591, 4, 13, 10, 1);
	Function_241(&Global_83591);
	Function_240(&Global_83591 + 276, 4);
	Function_239(0, 5);
	Function_239(1, 1);
	if (!Function_234(&uLocal_308))
	{
		return 0;
	}
	Function_136();
	return 1;
}

void Function_136() //Position: 0x32FA / 13050
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 13160);
	uLocal_307 = Function_137("DLCPVP");
	return;
}

var Function_137(bool bParam0) //Position: 0x3318 / 13080
{
	bool bVar0;
	
	bVar0 = Function_138();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_138() //Position: 0x332C / 13100
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_139(var uParam0) //Position: 0x3368 / 13160
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
			bVar11 = Function_66(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_233())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_107())
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
							Function_230(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_226(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_142(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_106() || Function_140(4096))
						{
							if (Function_95(131072, 1))
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
			if (bVar11 && !Function_140(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_140(int iParam0) //Position: 0x34CC / 13516
{
	return Function_141(Global_79336, iParam0);
}

bool Function_141(var uParam0, bool bParam1) //Position: 0x34DB / 13531
{
	return (uParam0 && bParam1) == 0;
}

void Function_142(struct<29> Param0) //Position: 0x34E8 / 13544
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_147(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_147(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_146(), 29, 1);
					Global_83823[29] = 1;
					Function_143(6002);
					Function_143(6005);
					Function_143(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_143(6001);
				Function_143(6004);
			}
			break;
	}
}

void Function_143(int iParam0) //Position: 0x35C9 / 13769
{
	Function_144(iParam0, 1);
	return;
}

void Function_144(int iParam0, bool bParam1) //Position: 0x35D5 / 13781
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_13(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_145((iVar0 % 32)));
	}
	else
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_145((iVar0 % 32)));
	}
	return;
}

int Function_145(bool bParam0) //Position: 0x362B / 13867
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_146() //Position: 0x3637 / 13879
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_147(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x364C / 13900
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_148(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_148(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x3678 / 13944
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_225(uParam0, uParam2, uParam3);
			}
			Function_149(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_149(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_149(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_149(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x36F5 / 14069
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_224(*uParam0);
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
					Function_222(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_167(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_156(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_155(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_150(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_150(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x37C3 / 14275
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_154(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_153(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_154(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_152(iParam0, 4))
	{
		Function_151(Function_154(iParam0), 0);
	}
}

void Function_151(var uParam0, int iParam1) //Position: 0x387A / 14458
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

bool Function_152(int iParam0, bool bParam1) //Position: 0x389F / 14495
{
	return Function_15(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_153(int iParam0) //Position: 0x38B3 / 14515
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_154(int iParam0) //Position: 0x38E7 / 14567
{
	return Global_50170[iParam022].f_24;
}

var Function_155(int iParam0, int iParam1) //Position: 0x38F6 / 14582
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_156(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3909 / 14601
{
	Function_164(*uParam0);
	Function_157(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_154(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_154(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_157(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x39AE / 14766
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_163(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_154(iParam0));
	if ((bParam3 && Function_152(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_154(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_162(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_153(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_161(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_160(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_159(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_154(iParam0), &Var7, 0, 2, Function_152(iParam0, 4));
			if (!bParam3)
			{
				Function_158(iParam0, 4);
			}
		}
	}
}

void Function_158(int iParam0, int iParam1) //Position: 0x3A6B / 14955
{
	Function_13(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_159(int iParam0) //Position: 0x3A7F / 14975
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_153(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_160(int iParam0) //Position: 0x3A9F / 15007
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_161(int iParam0) //Position: 0x3ACD / 15053
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_162(int iParam0) //Position: 0x3AFD / 15101
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_163(int iParam0) //Position: 0x3B2E / 15150
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

void Function_164(int iParam0) //Position: 0x3CAC / 15532
{
	Function_165(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3CC2 / 15554
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_166();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_166() //Position: 0x3D37 / 15671
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_167(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3D84 / 15748
{
	struct<4> Var0;
	
	Function_221(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_153(*uParam0) };
	Function_216(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_215(*uParam0, 4);
	Function_168();
}

void Function_168() //Position: 0x3DE2 / 15842
{
	if (!Function_108())
	{
		if (!Function_214(1, 3, 1, 1))
		{
			Function_202(1);
			Function_201(1, 8);
		}
	}
	else
	{
		Function_169(0);
	}
	return;
}

void Function_169(bool bParam0) //Position: 0x3E0B / 15883
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_199(2);
	if (bParam0)
	{
		Function_199(1);
	}
	else
	{
		Function_197(1);
	}
	Function_170();
	return;
}

void Function_170() //Position: 0x3E94 / 16020
{
	Function_195();
	Function_194();
	Function_194();
	Function_193();
	Function_193();
	Function_192();
	Function_192();
	Function_177(0);
	Function_177(0);
	if (!Function_108())
	{
		Function_175();
		Function_174();
		Function_173();
		Function_172();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_171();
	return;
}

void Function_171() //Position: 0x3EE6 / 16102
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

void Function_172() //Position: 0x3FEC / 16364
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

void Function_173() //Position: 0x401F / 16415
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

void Function_174() //Position: 0x41AD / 16813
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

void Function_175() //Position: 0x4361 / 17249
{
	Function_176(&Global_28260, 1, 0);
	return;
}

void Function_176(int iParam0, bool bParam1, int iParam2) //Position: 0x436F / 17263
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
	
	bVar0 = Function_146();
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

struct<8> Function_177(int iParam0) //Position: 0x4560 / 17760
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
					iVar2 = ((Function_191((50 + iVar4)) + Function_191((183 + iVar4))) + Function_191((90 + iVar4)));
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
	Function_178(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_178(int iParam0, bool bParam1, bool bParam2) //Position: 0x4606 / 17926
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
		Function_190(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_189(iParam0);
	if (bParam2)
	{
		Function_179(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_179(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x48A1 / 18593
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_188(390))), 32);
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
					bVar19 = (Function_187(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_187(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_185(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_183(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_180(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_90(), &Var9);
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

var Function_180(int iParam0) //Position: 0x4ECE / 20174
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_181(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4EDF / 20191
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_182(char* cParam0, bool bParam1) //Position: 0x4FD4 / 20436
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_183(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4FED / 20461
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_99(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_184(Function_99(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_184(int iParam0, int iParam1) //Position: 0x5052 / 20562
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_185(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5064 / 20580
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
	if (((Function_186(iParam0) != 19 || Function_186(iParam0) != 17) || Function_186(iParam0) != 10) || Function_186(iParam0) != 9)
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

int Function_186(int iParam0) //Position: 0x5194 / 20884
{
	return Global_35278[iParam020].f_48;
}

float Function_187(int iParam0) //Position: 0x51A3 / 20899
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_188(int iParam0) //Position: 0x51DC / 20956
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_189(int iParam0) //Position: 0x5219 / 21017
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

int Function_190(int iParam0, bool bParam1, bool bParam2) //Position: 0x53B3 / 21427
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

int Function_191(bool bParam0) //Position: 0x55F7 / 22007
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_192() //Position: 0x5638 / 22072
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
		iVar2 = ((Function_191((50 + iVar3) + 15) + Function_191((183 + iVar3) + 15)) + Function_191((90 + iVar3) + 15));
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
	Function_178(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_193() //Position: 0x56C1 / 22209
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
			iVar2 = ((Function_191((50 + iVar3) + 8) + Function_191((183 + iVar3) + 8)) + Function_191((90 + iVar3) + 8));
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
	Function_178(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_194() //Position: 0x5758 / 22360
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
		iVar2 = ((Function_191((50 + iVar3)) + Function_191((183 + iVar3))) + Function_191((90 + iVar3)));
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
	Function_178(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_195() //Position: 0x57D7 / 22487
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_196(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_178(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_196(int iParam0, bool bParam1, int iParam2) //Position: 0x5810 / 22544
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
	Function_190(iParam0, bParam1, 1);
	Function_189(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_179(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_197(int iParam0) //Position: 0x5A1A / 23066
{
	Function_198(&Global_79338, iParam0);
	return;
}

void Function_198(var uParam0, int iParam1) //Position: 0x5A29 / 23081
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_199(int iParam0) //Position: 0x5A36 / 23094
{
	Function_200(&Global_79338, iParam0);
	return;
}

void Function_200(var uParam0, int iParam1) //Position: 0x5A45 / 23109
{
	Function_13(uParam0, iParam1);
	return;
}

void Function_201(var uParam0, int iParam1) //Position: 0x5A52 / 23122
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_108())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_202(bool bParam0) //Position: 0x5A94 / 23188
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_203();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_170();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_12(&Global_63095, 1);
		Function_12(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_203() //Position: 0x5AE5 / 23269
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_213())
	{
		Function_210(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_210(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_205(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_205(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_204(StackVal, StackVal, vVar0))
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

bool Function_204(vector3 vParam0) //Position: 0x5BA0 / 23456
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_205(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5BB8 / 23480
{
	int iVar0;
	
	iVar0 = Function_208(uParam2, uParam3);
	if (Function_207(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_13(&Global_63095, 1);
			Function_12(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_13(&Global_63095, 2);
			Function_12(&Global_63095, 1);
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
		Function_13(&Global_63095, 2);
		Function_12(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_206();
	return StackVal, StackVal, Function_206();
}

vector3 Function_206() //Position: 0x5C9F / 23711
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_207(int iParam0) //Position: 0x5CA8 / 23720
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_208(bool bParam0, bool bParam1) //Position: 0x5CBE / 23742
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
				fVar2 = Function_209(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_209(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_207(bVar0) && !bParam1)
	{
		bVar0 = Function_208(bParam0, 1);
	}
	return bVar0;
}

float Function_209(vector3 vParam0, vector3 vParam3) //Position: 0x5D85 / 23941
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_210(var uParam0, int iParam1) //Position: 0x5DA2 / 23970
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_212(Global_34573, &vVar4);
	if (!Function_211(Global_30640[0]))
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
	if (!Function_211(Global_30640[2]))
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
	if (!Function_211(Global_30640[1]))
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
	if (!Function_211(Global_30658[1]))
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
	if (!Function_211(Global_30658[3]))
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
	if (!Function_211(Global_30658[2]))
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
	if (!Function_211(Global_30658[4]))
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
	if (!Function_211(Global_30668[0]))
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
	if (!Function_211(Global_30668[1]))
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
	if (!Function_211(Global_30668[2]))
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
	if (!Function_211(Global_30679[0]))
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
	if (!Function_211(Global_30685[0]))
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
	if (!Function_211(Global_30685[1]))
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
	if (!Function_211(Global_30685[2]))
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
	if (!Function_211(Global_30693[0]))
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
	if (!Function_211(Global_30693[1]))
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
	if (!Function_211(Global_30693[2]))
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
	if (!Function_211(Global_30707[2]))
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
	if (!Function_211(Global_30707[3]))
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
	if (!Function_211(Global_30707[0]))
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
	if (!Function_211(Global_30717[0]))
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
	if (!Function_211(Global_30723[2]))
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
	if (!Function_211(Global_30723[1]))
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
	if (!Function_211(Global_30723[0]))
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
	if (!Function_211(Global_30679[1]))
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
	if (!Function_211(Global_30707[1]))
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
	Function_13(&Global_63095, 2);
	Function_12(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_204(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_211(int iParam0) //Position: 0x65C7 / 26055
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_15(uVar0, 0x1000000) || Function_15(uVar0, 0x2000000)) || Function_15(uVar0, 0x4000000)) || !Function_15(uVar0, 0x10000000));
}

void Function_212(bool bParam0, int iParam1) //Position: 0x6602 / 26114
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_213() //Position: 0x660F / 26127
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_214(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x662A / 26154
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

void Function_215(int iParam0, int iParam1) //Position: 0x66CE / 26318
{
	Function_12(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_216(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66E2 / 26338
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_78();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_220(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_219(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_218(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_217(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_220(), iVar1 + 1);
	return;
}

struct<16> Function_217(int iParam0) //Position: 0x6754 / 26452
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_218(int iParam0) //Position: 0x6775 / 26485
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_219(int iParam0) //Position: 0x6796 / 26518
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_220() //Position: 0x67B7 / 26551
{
	return "CQueue_Count";
}

void Function_221(bool bParam0, bool bParam1) //Position: 0x67CC / 26572
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_166();
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

void Function_222(var uParam0, bool bParam1, bool bParam2) //Position: 0x6918 / 26904
{
	Function_221(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_154(*uParam0), 1.0f, 0, 0);
	Function_223(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_216(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_168();
	return;
}

void Function_223(int iParam0, int iParam1) //Position: 0x697D / 27005
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_163(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_154(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_162(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_153(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_159(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_154(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_154(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_154(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_224(int iParam0) //Position: 0x69FF / 27135
{
	return Global_50170[iParam022].f_12;
}

void Function_225(var uParam0, bool bParam1, bool bParam2) //Position: 0x6A0E / 27150
{
	Function_164(*uParam0);
	if (!Function_152(*uParam0, 2))
	{
		Function_157(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_158(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_154(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_226(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x6A4B / 27211
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_224(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_43(Param3) && Param3.f_12 != 29)
						{
							if (Function_141(Param3.f_40, 1048576))
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
					Function_228(230, 150, Function_229(), 4294967295);
					Function_143(6007);
					Function_143(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_227(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_150(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_227(var uParam0, bool bParam1, int iParam2) //Position: 0x6B0D / 27405
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_228(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6B25 / 27429
{
	Function_221(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_154(iParam0), 1.0f, 0, 0);
	Function_223(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_143(iParam3);
	}
	Function_216(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_168();
}

bool Function_229() //Position: 0x6B8B / 27531
{
	return "MP_TrickShot_Icon_128";
}

void Function_230(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x6BA9 / 27561
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_224(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_231(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_232(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_143(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_227(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_150(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_224(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_228(231, 100, Function_232(), 4294967295);
					Function_143(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_227(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_150(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_231(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6CD1 / 27857
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_153(uParam0) };
	Function_216(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_227(&uParam5, uParam8, uParam9);
	Function_150(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_157(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_143(iParam12);
	}
	Function_215(uParam0, 4);
	Function_168();
}

var Function_232() //Position: 0x6D47 / 27975
{
	return "MP_Revenge_Icon_128";
}

bool Function_233() //Position: 0x6D63 / 28003
{
	if (Function_140(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_234(bool bParam0) //Position: 0x6D8D / 28045
{
	if (!Function_238(bParam0, Global_30679[1]))
	{
		return 0;
	}
	Function_237(bParam0, "fortMercer", "guardTowerProps01", 7);
	Function_237(bParam0, "fortMercer", "guardTowerProps01", 8);
	Function_237(bParam0, "fortMercer", "corral", 1);
	Function_237(bParam0, "fortMercer", "corral", 2);
	Function_235(bParam0, "fortMercer", "corral", 3, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "corral", 4, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "corral", 5, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "corral", 6, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "corral", 7, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "corral", 9, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "guardTowerProps02", 8, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "guardTowerProps02", 9, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "guardTowerProps02", 10, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "guardTowerProps02", 11, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "guardTowerProps02", 12, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 1, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 2, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 12, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 13, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 22, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 14, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 16, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 17, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 23, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 15, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 6, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 5, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 21, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 10, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 7, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 8, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "nrightwing", 9, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "guardTowerProps01", 4, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "guardTowerProps01", 3, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 12, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 11, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 25, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 9, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 10, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 16, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 21, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 8, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 7, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 18, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 23, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 17, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 14, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 4, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 3, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 2, 1, 0, 1, 1);
	Function_235(bParam0, "fortMercer", "leftwing", 1, 1, 0, 1, 1);
	return 1;
}

int Function_235(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x74FF / 29951
{
	int iVar0;
	
	iVar0 = iParam0->f_1036;
	if (!Function_236(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_13(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_13(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_13(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_13(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_236(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7570 / 30064
{
	if (iParam0->f_1036 > 51)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_10365] = uParam1;
	(iParam0 + 12[iParam0->f_10365])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_10365])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_10365])->f_16 = 0;
	iParam0->f_1036++;
	return 1;
}

int Function_237(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x75CC / 30156
{
	int iVar0;
	
	iVar0 = iParam0->f_1036;
	if (!Function_236(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_13(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_238(int iParam0, int iParam1) //Position: 0x75FE / 30206
{
	int iVar0;
	
	if (!Function_104(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_1036 = 0;
	iParam0->f_4 = 0;
	iParam0->f_1040 = "";
	iVar0 = 0;
	while (iVar0 <= 51)
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

void Function_239(int iParam0, int iParam1) //Position: 0x7674 / 30324
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_240(int iParam0, int iParam1) //Position: 0x7682 / 30338
{
	(iParam0 + 228)->f_220 = 0;
	Function_13(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_241(int iParam0) //Position: 0x769A / 30362
{
	iParam0->f_844 = 0;
	return;
}

void Function_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x76A6 / 30374
{
	Function_243(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_243(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x76BE / 30398
{
	Function_244(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_244(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x76D5 / 30421
{
	if (!Function_246(iParam1))
	{
		return;
	}
	Function_245(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_245(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x76F8 / 30456
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

bool Function_246(int iParam0) //Position: 0x7722 / 30498
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7732 / 30514
{
	Function_248(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x774A / 30538
{
	Function_244(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_249(int iParam0, bool bParam1) //Position: 0x775F / 30559
{
	Function_253(iParam0);
	Function_253(iParam0 + 228);
	if (bParam1)
	{
		Function_250(iParam0);
	}
	return;
}

void Function_250(int iParam0) //Position: 0x777B / 30587
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_251(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_251(var uParam0, int iParam1) //Position: 0x779B / 30619
{
	Function_252(uParam0, iParam1, 0);
	return;
}

void Function_252(int iParam0, int iParam1, int iParam2) //Position: 0x77A9 / 30633
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_253(int iParam0) //Position: 0x77BA / 30650
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_255(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_254(iParam0, 0.0f);
	return;
}

void Function_254(var uParam0, int iParam1) //Position: 0x77E7 / 30695
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_255(int iParam0) //Position: 0x77F3 / 30707
{
	Function_245(iParam0, 4294967295, 0, 1);
	return;
}

void Function_256(bool bParam0) //Position: 0x7801 / 30721
{
	DECOR_SET_OBJECT(Function_257(), "LobbyGringoSet", bParam0);
	return;
}

var Function_257() //Position: 0x7821 / 30753
{
	return Global_83591.f_140;
}

void Function_258(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x782D / 30765
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = uParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = uParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], bParam2, 32);
		(&Global_83591 + 28[29])->f_32 = uParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

bool Function_259(int iParam0) //Position: 0x78BD / 30909
{
	Function_262(iParam0);
	if (Function_261())
	{
		Function_240(&Global_83591 + 276, 2);
	}
	Function_260();
	vLocal_48 = { StackVal, StackVal, Function_260() };
	return 1;
}

vector3 Function_260() //Position: 0x78E1 / 30945
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_257();
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

bool Function_261() //Position: 0x7929 / 31017
{
	return Function_15(Global_79962, 1024);
}

void Function_262(var uParam0) //Position: 0x7939 / 31033
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_263() //Position: 0x7947 / 31047
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
	
	Function_264(4, 1);
	uVar0 = uVar0;
	Local_139 = CREATE_LAYOUT("CTF_FOM_layout");
	Local_139.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_139, "playablespace", 2, -2671.913f, 67.26274f, 3456.0f, 0.0f, -34.6437f, 0.0f, 149.6223f, 55.09444f, 184.6095f);
	Local_139.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_A", 3, -2654.422f, 72.78912f, 3465.118f, 0.0f, -90.00069f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_B", 3, -2692.735f, 72.66026f, 3424.455f, 0.0f, 39.08755f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A0", 3, -2632.158f, 72.65479f, 3430.4f, 0.0f, -50.69034f, 0.0f, 1.531076f, 0.5542225f, 1.531076f);
	Local_139.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A1", 3, -2676.656f, 67.26274f, 3485.541f, 0.0f, 231.7962f, 0.0f, 2.402667f, 2.402667f, 2.402667f);
	Local_139.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A2", 3, -2689.704f, 67.26274f, 3517.704f, 0.0f, 157.7347f, 0.0f, 2.039389f, 2.039389f, 2.039389f);
	Local_139.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A3", 3, -2651.589f, 71.65486f, 3454.025f, 0.0f, 44.97683f, 0.0f, 1.244626f, 2.284272f, 1.244626f);
	Local_139.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A4", 3, -2680.511f, 72.87197f, 3504.037f, 0.0f, -177.8599f, 0.0f, 1.227974f, 0.06022431f, 1.227974f);
	Local_139.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A5", 3, -2646.687f, 67.45486f, 3422.944f, 0.0f, -15.20428f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_139.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A6", 3, -2641.388f, 67.26276f, 3440.0f, 0.0f, -107.4979f, 0.0f, 1.447852f, 1.447852f, 1.447852f);
	Local_139.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A7", 3, -2641.575f, 68.10937f, 3449.735f, 0.0f, -119.6995f, 0.0f, 1.244626f, 1.176519f, 1.244626f);
	Local_139.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A8", 3, -2671.241f, 71.96341f, 3467.241f, 0.0f, -209.4006f, 0.0f, 1.244626f, 1.176519f, 1.244626f);
	Local_139.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B0", 3, -2730.277f, 71.52462f, 3473.243f, -2.315984f, 133.3312f, 0.009903185f, 1.709656f, 0.446175f, 1.709656f);
	Local_139.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B1", 3, -2706.887f, 67.26276f, 3449.113f, 0.0f, 48.24023f, 0.0f, 1.378501f, 1.378501f, 1.378501f);
	Local_139.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B2", 3, -2650.069f, 67.26274f, 3409.931f, 0.0f, 4.887246f, 0.0f, 1.47779f, 1.47779f, 1.47779f);
	Local_139.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B3", 3, -2680.506f, 72.42626f, 3422.665f, 0.0f, 43.14525f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B4", 3, -2660.359f, 71.65488f, 3409.813f, 0.0f, 3.822544f, 0.0f, 1.236467f, 1.236467f, 1.236467f);
	Local_139.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B5", 3, -2704.124f, 74.54414f, 3442.647f, 0.0f, 152.3759f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_139.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B6", 3, -2664.43f, 67.26276f, 3412.0f, 0.0f, -18.29574f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_139.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B7", 3, -2701.934f, 67.26276f, 3458.066f, 0.0f, 40.06599f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B8", 3, -2699.75f, 67.26004f, 3424.973f, 0.0f, -7.867867f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_139.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_139, "v_clear_vol", 2, -2676.526f, 81.23542f, 3455.8f, 0.0f, -39.40821f, 0.0f, 95.94643f, 43.2052f, 148.4356f);
	*(&Local_139 + 204) = { -2670.213f, 74.837f, 3471.576f };
	*(&Local_139 + 204 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_228 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_A", -2670.213f, 74.837f, 3471.576f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 232) = { -2666.362f, 75.5001f, 3464.424f };
	*(&Local_139 + 232 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_256 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_B", -2666.362f, 75.5001f, 3464.424f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 260) = { -2640.0f, 67.26276f, 3408.0f };
	*(&Local_139 + 260 + 12) = { 0.0f, -41.53026f, 0.0f };
	Local_139.f_284 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_0", -2640.0f, 67.26276f, 3408.0f, 0.0f, -41.53026f, 0.0f);
	*(&Local_139 + 288) = { -2682.583f, 71.76676f, 3458.152f };
	*(&Local_139 + 288 + 12) = { 0.0f, -210.4174f, 0.0f };
	Local_139.f_312 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_1", -2682.583f, 71.76676f, 3458.152f, 0.0f, -210.4174f, 0.0f);
	*(&Local_139 + 316) = { -2668.693f, 70.19306f, 3442.331f };
	*(&Local_139 + 316 + 12) = { 0.0f, -300.0414f, 0.0f };
	Local_139.f_340 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_2", -2668.693f, 70.19306f, 3442.331f, 0.0f, -300.0414f, 0.0f);
	*(&Local_139 + 344) = { -2697.319f, 67.26273f, 3492.569f };
	*(&Local_139 + 344 + 12) = { 0.0f, -136.7899f, 0.0f };
	Local_139.f_368 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_3", -2697.319f, 67.26273f, 3492.569f, 0.0f, -136.7899f, 0.0f);
	Local_139.f_372 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 376[06]) = { -2679.643f, 71.65106f, 3453.564f };
	*(&Local_139 + 376[06] + 12) = { 0.0f, -24.25523f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D1", -2679.643f, 71.65106f, 3453.564f, 0.0f, -24.25523f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_139.f_372);
	*(&Local_139 + 376[16]) = { -2694.836f, 71.65486f, 3426.711f };
	*(&Local_139 + 376[16] + 12) = { 0.0f, -115.9924f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_B1", -2694.836f, 71.65486f, 3426.711f, 0.0f, -115.9924f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_139.f_372);
	*(&Local_139 + 376[26]) = { -2661.107f, 71.65479f, 3476.555f };
	*(&Local_139 + 376[26] + 12) = { 0.0f, 150.7464f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_B2", -2661.107f, 71.65479f, 3476.555f, 0.0f, 150.7464f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_139.f_372);
	*(&Local_139 + 376[36]) = { -2647.055f, 72.61739f, 3421.262f };
	*(&Local_139 + 376[36] + 12) = { 0.0f, -49.97094f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_R1", -2647.055f, 72.61739f, 3421.262f, 0.0f, -49.97094f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_139.f_372);
	*(&Local_139 + 376[46]) = { -2688.626f, 67.26276f, 3458.694f };
	*(&Local_139 + 376[46] + 12) = { 0.0f, -118.768f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_R2", -2688.626f, 67.26276f, 3458.694f, 0.0f, -118.768f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_139.f_372);
	*(&Local_139 + 376[56]) = { -2694.125f, 67.26273f, 3485.458f };
	*(&Local_139 + 376[56] + 12) = { 0.0f, 8.717326f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_P1", -2694.125f, 67.26273f, 3485.458f, 0.0f, 8.717326f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_139.f_372);
	*(&Local_139 + 376[66]) = { -2667.02f, 67.26273f, 3436.988f };
	*(&Local_139 + 376[66] + 12) = { 0.0f, -44.76667f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_P2", -2667.02f, 67.26273f, 3436.988f, 0.0f, -44.76667f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_139.f_372);
	*(&Local_139 + 376[76]) = { -2706.346f, 67.43688f, 3446.641f };
	*(&Local_139 + 376[76] + 12) = { 0.0f, -203.7659f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_P3", -2706.346f, 67.43688f, 3446.641f, 0.0f, -203.7659f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_139.f_372);
	*(&Local_139 + 376[86]) = { -2642.296f, 67.45f, 3454.118f };
	*(&Local_139 + 376[86] + 12) = { 0.0f, -120.122f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_P4", -2642.296f, 67.45f, 3454.118f, 0.0f, -120.122f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_139.f_372);
	*(&Local_139 + 376[96]) = { -2702.566f, 67.26273f, 3480.371f };
	*(&Local_139 + 376[96] + 12) = { 0.0f, -132.2595f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_A1", -2702.566f, 67.26273f, 3480.371f, 0.0f, -132.2595f, 0.0f);
	DECOR_SET_INT(bVar10, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_139.f_372);
	*(&Local_139 + 376[106]) = { -2659.103f, 67.26276f, 3432.56f };
	*(&Local_139 + 376[106] + 12) = { 0.0f, -50.25484f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_A2", -2659.103f, 67.26276f, 3432.56f, 0.0f, -50.25484f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_139.f_372);
	*(&Local_139 + 376[116]) = { -2691.229f, 67.26274f, 3466.958f };
	*(&Local_139 + 376[116] + 12) = { 0.0f, 57.65787f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_139, "nPickup_T1", -2691.229f, 67.26274f, 3466.958f, 0.0f, 57.65787f, 0.0f);
	DECOR_SET_INT(bVar12, "type", true);
	DECOR_SET_INT(bVar12, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_139.f_372);
	Local_139.f_668 = CREATE_OBJECTSET_IN_LAYOUT(Function_90(), Local_139, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -2677.585f, 71.65439f, 3459.133f, 0.0f, 18.38565f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -2678.162f, 71.654f, 3456.26f, 0.0f, -172.5233f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -2680.414f, 71.654f, 3455.539f, 0.0f, 217.448f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", -2680.825f, 71.654f, 3457.71f, 0.0f, -111.4147f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", -2679.491f, 71.654f, 3456.943f, 0.0f, 171.6611f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2683.506f, 71.654f, 3456.548f, 0.0f, -356.4494f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -2690.426f, 71.654f, 3449.951f, 0.0f, -128.9054f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "rand_idle_stand1", "rand_idle_stand", -2687.525f, 71.654f, 3445.884f, 0.0f, -97.63017f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand_loose", "smoking_stand_loose", -2682.497f, 71.654f, 3452.463f, 0.0f, 123.9893f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand", "smoking_stand", -2684.622f, 71.654f, 3443.94f, 0.0f, 119f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand1", "smoking_stand", -2675.869f, 71.654f, 3456.347f, 0.0f, 89.10627f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_yelling_mid", "stand_yelling_mid", -2682.705f, 71.654f, 3441.249f, 0.0f, 67.81016f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_yelling_mid1", "stand_yelling_mid", -2685.001f, 71.654f, 3440.205f, 0.0f, -117.2839f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -2685.72f, 71.654f, 3450.909f, 0.0f, 193.7507f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -2684.572f, 71.654f, 3453.68f, 0.0f, 109.5341f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand_loose1", "smoking_stand_loose", -2689.134f, 71.654f, 3447.523f, 0.0f, 259.774f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand2", "smoking_stand", -2687.261f, 71.654f, 3454.486f, 0.0f, -91.73917f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "nlean_rail", "nlean_rail", -2679.914f, 71.654f, 3453.368f, 0.0f, -26.87442f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "lean_rail1", "nlean_rail", -2684.845f, 71.654f, 3448.048f, 0.0f, -116.1825f, 0.0f), Local_139.f_668);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "lean_rail2", "nlean_rail", -2689.256f, 71.654f, 3454.331f, 0.0f, -207.6119f, 0.0f), Local_139.f_668);
	return;
}

void Function_264(int iParam0, int iParam1) //Position: 0x8C46 / 35910
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

void Function_265(int iParam0) //Position: 0x8C8F / 35983
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_267("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_266(StackVal, 0);
	return;
}

void Function_266(var uParam0, int iParam1) //Position: 0x8D01 / 36097
{
	Function_120(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_119(StackVal, iParam1);
	}
	return;
}

bool Function_267(char* cParam0) //Position: 0x8D32 / 36146
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8D51 / 36177
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_269() //Position: 0x8D93 / 36243
{
	while (!IS_EXITFLAG_SET())
	{
		Function_25(4685, 36273);
		WAIT(0);
	}
	return;
}

int Function_270(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x8DB1 / 36273
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_54(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_53(bParam0);
	bVar2 = Function_52(bParam0);
	bVar3 = Function_49(bParam0);
	iVar4 = Function_48(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_28(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_46(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_14(4))
	{
		if (Function_40(bParam0, 1, 1))
		{
			if (Function_43(bParam0))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
				bVar5 = " <SWAG_R_RET>";
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
				bVar5 = " <SWAG_B_RET>";
			}
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, bVar5);
		}
	}
	else
	{
		Function_39(bVar0, bParam0);
	}
	if (Function_43(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_34() && Function_38())
	{
	}
	return 0;
}

bool Function_271() //Position: 0x8EB4 / 36532
{
	return Function_130(2);
}

void Function_272() //Position: 0x8EBE / 36542
{
	if (Function_271())
	{
		return;
	}
	Function_282();
	Function_280(&bLocal_39, "MP_CTF", 10, 0);
	Function_280(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_274(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_96();
	Function_273();
	return;
}

void Function_273() //Position: 0x8F22 / 36642
{
	while (!Function_130(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_274(int iParam0) //Position: 0x8F3D / 36669
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_279();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
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
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_7(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_7(iParam0[03], 8) || iVar1));
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
		if (Function_7(iParam0[iVar03], 4))
		{
			if (!Function_7(iParam0[iVar03], 2))
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

void Function_275() //Position: 0x92B8 / 37560
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

bool Function_276(int iParam0) //Position: 0x92F8 / 37624
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_277() //Position: 0x9314 / 37652
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

void Function_278(var uParam0, int iParam1) //Position: 0x933F / 37695
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_279() //Position: 0x9350 / 37712
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

var Function_280(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9392 / 37778
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

var Function_281(var uParam0, int iParam1, int iParam2) //Position: 0x93CA / 37834
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
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

void Function_282() //Position: 0x948E / 38030
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

