//Decompiled with MagicRDR v1.0
//Function Count : 162
//Statics Count : 650
//Natives Count : 183
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
	struct<1037> Local_139 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
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
	Function_151();
	if (Function_150())
	{
		Function_149();
	}
	else
	{
		if (Function_114())
		{
			Function_113(1);
		}
		else
		{
			Function_112(1);
		}
		Function_110();
		Function_109(0, 15);
		bVar0 = CREATE_WORLD_SECTOR(Local_139, "nArmadillo");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(0);
		}
		iVar1 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_108(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_107(64, 0);
					Function_110();
					iVar1 = 2;
				}
			}
			Function_91(&iLocal_621, 0.2f, 0.7f, 12, 1.0f, 1.0f, 0.0f, 0.0f);
			Function_78(&uLocal_399);
			Function_17();
			WAIT(0);
		}
	}
	Function_15(&uLocal_399);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_arm_ffa01x", 0);
	DISABLE_CHILD_SECTOR("mp_arm_ffa01x");
	Function_6();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x117 / 279
{
	Function_2(&Local_139 + 4);
	RELEASE_LAYOUT_REF(Local_139);
	return;
}

void Function_2(int iParam0) //Position: 0x129 / 297
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x14F / 335
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x27D / 637
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x297 / 663
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x2B4 / 692
{
	Function_14();
	Function_2(&bLocal_39);
	Function_7();
	return;
}

void Function_7() //Position: 0x2C5 / 709
{
	Function_8();
	return;
}

void Function_8() //Position: 0x2CE / 718
{
	if (Function_12(4194304))
	{
		Function_9(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_12(8388608))
	{
		Function_9(8388608, 0, 1);
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x3D7 / 983
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_11(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_10(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x3FF / 1023
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x412 / 1042
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(bool bParam0) //Position: 0x421 / 1057
{
	return Function_13(Global_76905.f_132, bParam0);
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x432 / 1074
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x43F / 1087
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15(int iParam0) //Position: 0x47E / 1150
{
	Function_107(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x48F / 1167
{
	if (iParam0->f_880 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_880, 0);
		iParam0->f_880 = "";
	}
	return;
}

void Function_17() //Position: 0x4AF / 1199
{
	Function_76();
	if (Function_75(1, 1))
	{
		Function_59(StackVal, StackVal, 6490, vLocal_48, 1, 6377);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_54(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_20(4414, 3404);
		Function_18();
	}
	return;
}

void Function_18() //Position: 0x4FA / 1274
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_19(&Local_12);
	}
	return;
}

void Function_19(int iParam0) //Position: 0x516 / 1302
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

void Function_20(int iParam0, int iParam1) //Position: 0x53C / 1340
{
	Function_21(iParam0, iParam1, 3397);
	return;
}

void Function_21(var uParam0, var uParam1, int iParam2) //Position: 0x54D / 1357
{
	if (Function_12(0x4000000))
	{
		Function_30();
		Function_9(0x4000000, 0, 1);
	}
	if (Function_12(0x10000000))
	{
		Function_30();
		Function_9(0x10000000, 0, 1);
	}
	if (Function_12(2) != Function_12(0x2000000))
	{
		Function_30();
		Function_9(0x2000000, Function_12(2), 1);
	}
	if (Function_29())
	{
		Function_28(!Function_12(16));
	}
	if (Function_12(16))
	{
		Function_22(&uParam0, &uParam1, &iParam2);
		if (Function_12(8192))
		{
			if (!Function_12(4194304))
			{
				Function_9(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_12(8388608))
			{
				Function_9(8388608, 1, 1);
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
			Function_8();
		}
		Function_9(16384, 1, 1);
	}
	else if (!Function_12(32))
	{
		Function_8();
	}
	Function_9(32768, 0, 1);
	return;
}

void Function_22(var uParam0, var uParam1, int iParam2) //Position: 0x6E6 / 1766
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_9(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_12(0x40000000);
	bVar3 = !Function_12(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_27(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_25(bVar1, 2048, 1))
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
				if (Function_23(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_12(4))
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
			if (Function_23(bVar1, (4294966296 - bVar1), 1))
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

bool Function_23(bool bParam0, int iParam1, int iParam2) //Position: 0x85E / 2142
{
	var uVar0;
	
	return Function_24(bParam0, iParam1, &uVar0, iParam2);
}

int Function_24(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x86F / 2159
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

bool Function_25(bool bParam0, int iParam1, bool bParam2) //Position: 0x8D4 / 2260
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_75(iParam1, bParam2);
	}
	if (!Function_27(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_26(iParam1), 64);
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

var Function_26(int iParam0) //Position: 0x955 / 2389
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

bool Function_27(bool bParam0) //Position: 0xC6E / 3182
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

void Function_28(bool bParam0) //Position: 0xD0F / 3343
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_9(16384, 0, 1);
	return;
}

bool Function_29() //Position: 0xD29 / 3369
{
	return Function_12(32768);
}

void Function_30() //Position: 0xD36 / 3382
{
	Function_9(32768, 1, 0);
	return;
}

int Function_31() //Position: 0xD45 / 3397
{
	return 1;
}

int Function_32(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xD4C / 3404
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_46(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_45(bParam0);
	bVar2 = Function_44(bParam0);
	bVar3 = Function_41(bParam0);
	iVar4 = Function_40(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_23(bParam0, iVar4, 0);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_38(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_12(4))
	{
		if (Function_35(bParam0, 1, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "<SWAG_Y_RET>");
		}
	}
	else
	{
		Function_34(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	if (Function_29() && Function_33())
	{
	}
	return 0;
}

var Function_33() //Position: 0xE0D / 3597
{
	return (Function_12(4096) || Function_12(4));
}

void Function_34(bool bParam0, bool bParam1) //Position: 0xE1E / 3614
{
	if (Function_12(4))
	{
		if (Function_25(bParam1, 1024, 1))
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

bool Function_35(bool bParam0, int iParam1, bool bParam2) //Position: 0xE51 / 3665
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_37(iParam1, bParam2);
	}
	if (!Function_27(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_36(iParam1), 64);
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

var Function_36(int iParam0) //Position: 0xED2 / 3794
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

var Function_37(int iParam0, bool bParam1) //Position: 0xFC4 / 4036
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_38(int iParam0, bool bParam1) //Position: 0xFE4 / 4068
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_39(iParam0);
	}
	if (!Function_27(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_39(int iParam0) //Position: 0x1052 / 4178
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_40(int iParam0, int iParam1, int iParam2) //Position: 0x106B / 4203
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_41(int iParam0) //Position: 0x1080 / 4224
{
	return Function_42(0, iParam0);
}

int Function_42(int iParam0, bool bParam1) //Position: 0x108C / 4236
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_43(iParam0);
	}
	if (!Function_27(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_43(int iParam0) //Position: 0x10F3 / 4339
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_44(bool bParam0) //Position: 0x1103 / 4355
{
	return Function_38(12, bParam0);
}

int Function_45(int iParam0) //Position: 0x1110 / 4368
{
	return Function_38(11, iParam0);
}

void Function_46(bool bParam0, int iParam1, char* cParam2) //Position: 0x111D / 4381
{
	if (bParam0)
	{
		if (Function_29())
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

int Function_47() //Position: 0x113E / 4414
{
	if (!Function_49(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_48();
	return 1;
}

void Function_48() //Position: 0x11D7 / 4567
{
	if (Function_12(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_9(8192, 1, 1);
	}
	else if (Function_12(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_9(8192, 1, 1);
	}
	else
	{
		Function_9(8192, 0, 1);
	}
	return;
}

bool Function_49(bool bParam0) //Position: 0x1214 / 4628
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_29() || Function_53(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_29())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_50(Function_29());
	return 1;
}

void Function_50(bool bParam0) //Position: 0x1295 / 4757
{
	if (bParam0 || Function_12(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_12(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_12(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_12(1048576) || Function_12(4)) || Function_75(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_9(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_51(int iParam0) //Position: 0x131E / 4894
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1332 / 4914
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

int Function_53(bool bParam0, bool bParam1) //Position: 0x1377 / 4983
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

void Function_54(vector3 vParam0, float fParam3) //Position: 0x13AB / 5035
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_58(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_58(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_55(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_55(bool bParam0) //Position: 0x145E / 5214
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
	return Function_56(bVar0);
}

int Function_56(bool bParam0) //Position: 0x1499 / 5273
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
	Function_57(bVar0);
	return bVar0;
}

void Function_57(bool bParam0) //Position: 0x14E7 / 5351
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_58() //Position: 0x14FA / 5370
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_59(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1529 / 5417
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_60(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 6276, 1, 125, 0, 0, 0);
	Function_60(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_60(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x15AC / 5548
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_61(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_61(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x15F7 / 5623
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
			Function_19(iParam0);
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
			fVar14 = Function_62(iParam0->f_36);
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

var Function_62(float fParam0) //Position: 0x1876 / 6262
{
	return (fParam0 * 57.29578f);
}

var Function_63(int iParam0, var uParam1) //Position: 0x1884 / 6276
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_64(int iParam0, var uParam1) //Position: 0x18E9 / 6377
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_mul_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_65() //Position: 0x195A / 6490
{
	int iVar0;
	
	iVar0 = Function_71(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_66(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_66(bool bParam0, int iParam1) //Position: 0x1987 / 6535
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_70(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_69((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_69((*iParam1)[iVar202], &iVar21))
		{
			if (Function_67((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_67(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1A96 / 6806
{
	float fVar0;
	
	if (!Function_68(bParam0))
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

bool Function_68(int iParam0) //Position: 0x1BBD / 7101
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_69(bool bParam0, int iParam1) //Position: 0x1BCF / 7119
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

var Function_70() //Position: 0x1C2B / 7211
{
	int iVar0;
	
	return iVar0;
}

var Function_71(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1C33 / 7219
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_73(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_69((*uParam3)[iVar12], &iVar2))
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
		if (Function_69((*uParam3)[iVar12], &iVar2))
		{
			if (Function_72((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_72(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1D21 / 7457
{
	if (!Function_68(bParam0))
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

var Function_73(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1EB2 / 7858
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_74()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_74() //Position: 0x1F1E / 7966
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_75(bool bParam0, bool bParam1) //Position: 0x1F45 / 8005
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_76() //Position: 0x1F65 / 8037
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
						Function_77("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_77("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_77("CTF_mul_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_14();
	}
	return;
}

void Function_77(char* cParam0, int iParam1) //Position: 0x1FFA / 8186
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

int Function_78(int iParam0) //Position: 0x2091 / 8337
{
	int iVar0;
	
	if (!Function_89(*iParam0) || (Function_108(64) && Function_85()))
	{
		iParam0->f_4 = 0;
		Function_16(iParam0);
		if (!Function_89(*iParam0))
		{
		}
		if (Function_108(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_89(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 880);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_876)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_82(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_13((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_10(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_13((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_876)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_876)
				{
					if (!Function_13((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_13((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_81((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_80((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_876)
			{
				iParam0->f_884 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_884) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_16(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_79(3, iParam0->f_876))
			{
				if (iParam0->f_876 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_876);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_13((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_13((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_11(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_13((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_13((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_13((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_79(int iParam0, int iParam1) //Position: 0x2418 / 9240
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_80(bool bParam0, bool bParam1) //Position: 0x242A / 9258
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

void Function_81(bool bParam0, bool bParam1) //Position: 0x247E / 9342
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

int Function_82(var uParam0, var uParam1, int iParam2) //Position: 0x24CF / 9423
{
	return Function_83(Global_29006, uParam0, uParam1, iParam2);
}

int Function_83(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x24E1 / 9441
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_84(iParam0))
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

bool Function_84(int iParam0) //Position: 0x257D / 9597
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_85() //Position: 0x2593 / 9619
{
	return !Function_86();
}

bool Function_86() //Position: 0x259D / 9629
{
	if (Function_88())
	{
		return (Function_87() != 1 || Function_87() != 0);
	}
	return 0;
}

int Function_87() //Position: 0x25B6 / 9654
{
	return Global_79349.f_16;
}

bool Function_88() //Position: 0x25C2 / 9666
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_89(int iParam0) //Position: 0x25CB / 9675
{
	if (!Function_84(iParam0))
	{
		return 1;
	}
	return Function_90(&(Global_29008[iParam0]), 4);
}

int Function_90(var uParam0, bool bParam1) //Position: 0x25E7 / 9703
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_91(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2603 / 9731
{
	float fVar0;
	
	if (Function_106())
	{
		if (Function_105(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_101(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_95((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_92((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_95((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_92((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_92(int iParam0, var uParam1, int iParam2) //Position: 0x26A6 / 9894
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_94(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_93(iParam2);
	}
	return;
}

void Function_93(int iParam0) //Position: 0x26CB / 9931
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_94(int iParam0) //Position: 0x26E0 / 9952
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x26F5 / 9973
{
	int iVar0;
	bool bVar1;
	
	Function_100(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_99(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_96(StackVal, bVar1, bParam4);
		}
	}
}

void Function_96(int iParam0, bool bParam1, bool bParam2) //Position: 0x2767 / 10087
{
	int iVar0;
	
	Function_100(iParam0);
	Function_98(bParam1);
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
	Function_97();
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

void Function_97() //Position: 0x28E0 / 10464
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_98(bool bParam0) //Position: 0x28EC / 10476
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

void Function_99(int iParam0, int iParam1) //Position: 0x2932 / 10546
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_100(iParam0);
	Function_98(iVar0);
	PRINTNL();
	Function_96(iParam0, iVar0, iParam1);
	return;
}

void Function_100(int iParam0) //Position: 0x2957 / 10583
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

float Function_101(int iParam0) //Position: 0x299D / 10653
{
	return -Function_102(iParam0);
}

float Function_102(int iParam0) //Position: 0x29A9 / 10665
{
	if (Function_105(iParam0))
	{
		if (Function_104(iParam0))
		{
			return StackVal;
		}
		Function_103();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_103() //Position: 0x2A7A / 10874
{
	if (!Function_106())
	{
	}
	return;
}

bool Function_104(int iParam0) //Position: 0x2A87 / 10887
{
	return Function_13(*iParam0, 2);
}

bool Function_105(int iParam0) //Position: 0x2A94 / 10900
{
	return Function_13(*iParam0, 1);
}

bool Function_106() //Position: 0x2AA1 / 10913
{
	return NET_IS_IN_SESSION();
}

void Function_107(int iParam0, bool bParam1) //Position: 0x2AAA / 10922
{
	if (bParam1)
	{
		Function_11(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_10(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_108(int iParam0) //Position: 0x2AD2 / 10962
{
	return Function_13(StackVal, iParam0);
}

void Function_109(int iParam0, var uParam1) //Position: 0x2AE5 / 10981
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = uParam1;
	return;
}

void Function_110() //Position: 0x2B06 / 11014
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_70());
	Function_111(bVar0, "bottle", Local_139.f_156);
	Function_111(bVar0, "mug0", Local_139.f_156);
	Function_111(bVar0, "glass", Local_139.f_156);
	Function_111(bVar0, "crate14", Local_139.f_156);
	Function_111(bVar0, "package", Local_139.f_156);
	Function_111(bVar0, "nlantern05", Local_139.f_156);
	Function_111(bVar0, "arm_gunsmith01_flag", Local_139.f_156);
	Function_111(bVar0, "c_gen_blanket15", Local_139.f_156);
	Function_111(bVar0, "arm_fs01_flag", Local_139.f_156);
	Function_111(bVar0, "c_tes_blanket", Local_139.f_156);
	Function_111(bVar0, "p_gen_bucket02x", Local_139.f_156);
	Function_111(bVar0, "p_gen_bucket03x", Local_139.f_156);
	Function_111(bVar0, "p_gen_wagonwheel01x", Local_139.f_156);
	Function_111(bVar0, "p_gen_basin01x", Local_139.f_156);
	Function_111(bVar0, "p_gen_can01x", Local_139.f_156);
	Function_111(bVar0, "p_gen_can02x", Local_139.f_156);
	Function_111(bVar0, "jar0", Local_139.f_156);
	Function_111(bVar0, "book", Local_139.f_156);
	Function_111(bVar0, "p_gen_hatbox01x", Local_139.f_156);
	Function_111(bVar0, "spittoon", Local_139.f_156);
	Function_111(bVar0, "milkcan", Local_139.f_156);
	Function_111(bVar0, "jug0", Local_139.f_156);
	Function_111(bVar0, "broom", Local_139.f_156);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_111(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2D15 / 11541
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, cParam2, cParam1, 1);
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

void Function_112(bool bParam0) //Position: 0x2D6E / 11630
{
	Function_107(16, bParam0);
	return;
}

void Function_113(var uParam0) //Position: 0x2D7B / 11643
{
	Function_107(8, uParam0);
	return;
}

bool Function_114() //Position: 0x2D88 / 11656
{
	Function_148(&iLocal_621, 0, 9, 30, 1, 1, 0);
	Function_148(&iLocal_621, 1, 9, 30, 2, 2, 2);
	Function_148(&iLocal_621, 2, 12, 0, 3, 3, 3);
	Function_148(&iLocal_621, 3, 12, 0, 0, 0, 1);
	Function_148(&iLocal_621, 4, 23, 0, 1, 1, 0);
	Function_145(&iLocal_621);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_143();
	ENABLE_CHILD_SECTOR("mp_arm_ffa01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_arm_ffa01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_139(Local_139))
	{
		return 0;
	}
	Function_137(Local_139.f_1036);
	Function_136("FTR_SONG_07", "FTR_SONG_08", 0, 58, 58, 1);
	Function_129(&Global_83591 + 276, 0);
	Function_127(&Global_83591, 1, 22, 1, 1);
	Function_127(&Global_83591, 2, 5, 10, 1);
	Function_127(&Global_83591, 3, 8, 10, 1);
	Function_127(&Global_83591, 4, 17, 10, 1);
	Function_122(&Global_83591, 1, 24, 4, 1);
	Function_122(&Global_83591, 2, 7, 10, 1);
	Function_122(&Global_83591, 3, 18, 15, 1);
	Function_122(&Global_83591, 4, 10, 10, 1);
	Function_121(&Global_83591);
	Function_120(&Global_83591 + 276, 4);
	if (!Function_115(&uLocal_399))
	{
		return 0;
	}
	return 1;
}

bool Function_115(int iParam0) //Position: 0x2ECB / 11979
{
	if (!Function_119(iParam0, Global_30640[0]))
	{
		return 0;
	}
	Function_118(iParam0, "narmadillo", "trainstation01", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "trainstation01", 2, 1, 0, 1, 1);
	Function_116(iParam0, "narmadillo", "ncattlePen", 1);
	Function_116(iParam0, "narmadillo", "ncattlePen", 2);
	Function_116(iParam0, "narmadillo", "ncattlePen", 3);
	Function_116(iParam0, "narmadillo", "blacksmith01", 1);
	Function_116(iParam0, "narmadillo", "blacksmith01", 2);
	Function_116(iParam0, "narmadillo", "stable", 1);
	Function_116(iParam0, "narmadillo", "stable", 2);
	Function_116(iParam0, "narmadillo", "stable", 3);
	Function_116(iParam0, "narmadillo", "stable", 4);
	Function_118(iParam0, "narmadillo", "saloon01", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 3, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 4, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 5, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 6, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 7, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 8, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 9, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 13, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "saloon01", 14, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "freightstation01", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "freightstation01", 2, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "freightstation01", 3, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "generalStore", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "generalStore", 2, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "generalStore", 3, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "generalStore", 9, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "ruinedBank", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "ruinedBank", 2, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "ruinedBank", 3, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "ruinedBank", 4, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "schoolhouse", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "schoolhouse", 2, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "schoolhouse", 3, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "sheriffsOffice01", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "sheriffsOffice01", 2, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "sheriffsOffice01", 3, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "doctorsOffice01", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "gunsmith01", 1, 1, 0, 1, 1);
	Function_118(iParam0, "narmadillo", "gunsmith01", 2, 1, 0, 1, 1);
	Function_116(iParam0, "narmadillo", "corralPens01", 1);
	return 1;
}

int Function_116(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x34C3 / 13507
{
	int iVar0;
	
	iVar0 = iParam0->f_876;
	if (!Function_117(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_11(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_117(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x34F5 / 13557
{
	if (iParam0->f_876 > 43)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_8765] = uParam1;
	(iParam0 + 12[iParam0->f_8765])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_8765])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_8765])->f_16 = 0;
	iParam0->f_876++;
	return 1;
}

int Function_118(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3551 / 13649
{
	int iVar0;
	
	iVar0 = iParam0->f_876;
	if (!Function_117(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_11(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_11(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_11(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_11(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_119(int iParam0, int iParam1) //Position: 0x35C2 / 13762
{
	int iVar0;
	
	if (!Function_84(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_876 = 0;
	iParam0->f_4 = 0;
	iParam0->f_880 = "";
	iVar0 = 0;
	while (iVar0 <= 43)
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

void Function_120(int iParam0, int iParam1) //Position: 0x3638 / 13880
{
	(iParam0 + 228)->f_220 = 0;
	Function_11(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_121(int iParam0) //Position: 0x3650 / 13904
{
	iParam0->f_844 = 0;
	return;
}

void Function_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x365C / 13916
{
	Function_123(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_123(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3674 / 13940
{
	Function_124(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_124(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x368B / 13963
{
	if (!Function_126(iParam1))
	{
		return;
	}
	Function_125(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_125(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x36AE / 13998
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

bool Function_126(int iParam0) //Position: 0x36D8 / 14040
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x36E8 / 14056
{
	Function_128(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3700 / 14080
{
	Function_124(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_129(int iParam0, bool bParam1) //Position: 0x3715 / 14101
{
	Function_133(iParam0);
	Function_133(iParam0 + 228);
	if (bParam1)
	{
		Function_130(iParam0);
	}
	return;
}

void Function_130(int iParam0) //Position: 0x3731 / 14129
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_131(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_131(var uParam0, int iParam1) //Position: 0x3751 / 14161
{
	Function_132(uParam0, iParam1, 0);
	return;
}

void Function_132(int iParam0, int iParam1, int iParam2) //Position: 0x375F / 14175
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_133(int iParam0) //Position: 0x3770 / 14192
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_135(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_134(iParam0, 0.0f);
	return;
}

void Function_134(var uParam0, int iParam1) //Position: 0x379D / 14237
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_135(bool bParam0) //Position: 0x37A9 / 14249
{
	Function_125(bParam0, 4294967295, 0, 1);
	return;
}

void Function_136(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x37B7 / 14263
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

void Function_137(bool bParam0) //Position: 0x3847 / 14407
{
	DECOR_SET_OBJECT(Function_138(), "LobbyGringoSet", bParam0);
	return;
}

var Function_138() //Position: 0x3867 / 14439
{
	return Global_83591.f_140;
}

bool Function_139(int iParam0) //Position: 0x3873 / 14451
{
	Function_142(iParam0);
	if (Function_141())
	{
		Function_120(&Global_83591 + 276, 2);
	}
	Function_140();
	vLocal_48 = { StackVal, StackVal, Function_140() };
	return 1;
}

vector3 Function_140() //Position: 0x3897 / 14487
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_138();
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

bool Function_141() //Position: 0x38DF / 14559
{
	return Function_13(Global_79962, 1024);
}

void Function_142(var uParam0) //Position: 0x38EF / 14575
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_143() //Position: 0x38FD / 14589
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
	
	Function_144(4, 1);
	uVar0 = uVar0;
	Local_139 = CREATE_LAYOUT("CTF_FFA_ARM_layout");
	Local_139.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_139, "playablespace", 3, -2150.254f, 16.32323f, 2596f, 0.0f, -24.893f, 0.0f, 139.8057f, 60.03657f, 108.5866f);
	Local_139.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_139, "v_clear_vol", 2, -2146.545f, 17.9805f, 2594.436f, 0.0f, 0.0f, 0.0f, 197.3179f, 26.10113f, 174.0406f);
	Local_139.f_184 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "CapVols_set");
	(*&Local_139 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_0", 3, -2181.658f, 16.40263f, 2612.566f, 0.0f, 90.94981f, 0.0f, 1.115991f, 1.115991f, 1.115991f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[0]);
	(*&Local_139 + 160)[1] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_1", 3, -2182.75f, 16.24631f, 2563.99f, 0.0f, 2.171721f, 0.0f, 1.5f, 1.5f, 1.5f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[1]);
	(*&Local_139 + 160)[2] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_2", 3, -2133.864f, 16.60214f, 2556f, 0.0f, 0.1541835f, 0.0f, 1.5f, 1.5f, 1.5f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[2]);
	(*&Local_139 + 160)[3] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_3", 3, -2103.996f, 16.44941f, 2610.787f, 0.0f, -89.76627f, 0.0f, 1.5f, 1.5f, 1.5f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[3]);
	(*&Local_139 + 160)[4] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_4", 3, -2145.24f, 16.40352f, 2604.102f, 0.0f, 1.384377f, 0.0f, 1.5f, 1.5f, 1.5f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[4]);
	Local_139.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_0", 3, -2162.351f, 16.34795f, 2521.649f, 0.0f, 0.05228467f, 0.0f, 1.541307f, 1.975699f, 1.541307f);
	Local_139.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_1", 3, -2144.51f, 16.41612f, 2535.491f, 0.0f, 89.83507f, 0.0f, 1.530316f, 1.96161f, 1.530316f);
	Local_139.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_2", 3, -2127.331f, 16.28618f, 2545.701f, 0.0f, 10.13893f, 0.0f, 1.377995f, 1.766359f, 1.377995f);
	Local_139.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_3", 3, -2106.168f, 16.06273f, 2554.168f, 0.0f, -41.25896f, 0.0f, 1.725682f, 2.212037f, 1.725682f);
	Local_139.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_4", 3, -2084.015f, 15.81276f, 2584.698f, 0.0f, -68.6739f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	Local_139.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_5", 3, -2076.0f, 16.44941f, 2604.0f, 0.0f, -61.70661f, 0.0f, 1.365822f, 1.750756f, 1.365822f);
	Local_139.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_6", 3, -2075.648f, 16.20653f, 2625.021f, 0.0f, -88.64908f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	Local_139.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_7", 3, -2058.058f, 18.93071f, 2646.03f, 0.0f, -135.7061f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	Local_139.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_8", 3, -2104.0f, 16.00696f, 2653.806f, 0.0f, -179.9427f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	Local_139.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_9", 3, -2148f, 16.44941f, 2654.184f, 0.0f, 180.8005f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	Local_139.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_10", 3, -2190.656f, 16.40293f, 2640.169f, 0.0f, 145.4984f, 0.0f, 1.260149f, 1.615301f, 1.260149f);
	Local_139.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_11", 3, -2215.472f, 16.35969f, 2603.036f, 0.0f, 89.57423f, 0.0f, 1.62741f, 2.086068f, 1.62741f);
	Local_139.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_12", 3, -2211.47f, 16.38527f, 2572.32f, 0.0f, 108.963f, 0.0f, 1.647036f, 2.111226f, 1.647036f);
	Local_139.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_13", 3, -2206.753f, 16.16532f, 2557.132f, 0.0f, 99.86391f, 0.0f, 1.469378f, 1.883498f, 1.469378f);
	Local_139.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_14", 3, -2200f, 16.33816f, 2544f, 0.0f, 54.41577f, 0.0f, 1.631281f, 2.09103f, 1.631281f);
	Local_139.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_15", 3, -2193.606f, 16.26402f, 2558.866f, 0.0f, 4.191174f, 0.0f, 1.43347f, 1.837469f, 1.43347f);
	Local_139.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_16", 3, -2173.271f, 16.53027f, 2543.441f, 0.0f, 91.57569f, 0.0f, 1.392081f, 1.784416f, 1.392081f);
	Local_139.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_17", 3, -2144.488f, 17.16976f, 2540.982f, 0.0f, 88.11962f, 0.0f, 0.5674518f, 0.7273786f, 0.5674518f);
	Local_139.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_18", 3, -2132.972f, 17.10097f, 2545.113f, 0.0f, 0.05228467f, 0.0f, 0.6450346f, 0.8268269f, 0.6450346f);
	Local_139.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_19", 3, -2154.693f, 16.63584f, 2559.684f, 0.0f, 9.831319f, 0.0f, 0.7560618f, 0.9691452f, 0.7560618f);
	Local_139.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_20", 3, -2146.118f, 16.63344f, 2557.882f, 0.0f, 32.38064f, 0.0f, 0.7341444f, 0.9410508f, 0.7341444f);
	Local_139.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_21", 3, -2168.56f, 16.56466f, 2567.37f, 0.0f, 0.05228467f, 0.0f, 0.6201649f, 0.794948f, 0.6201649f);
	Local_139.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_22", 3, -2168.176f, 19.57925f, 2571.821f, 0.0f, -90.63197f, 0.0f, 0.6679758f, 0.8562336f, 0.6679758f);
	Local_139.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_23", 3, -2192.557f, 16.28598f, 2584.385f, 0.0f, 184.3442f, 0.0f, 1.309373f, 1.109926f, 1.309373f);
	Local_139.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_24", 3, -2195.589f, 16.96554f, 2599.106f, 0.0f, 0.05228467f, 0.0f, 0.832998f, 1.067765f, 0.832998f);
	Local_139.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_25", 3, -2191.433f, 16.95088f, 2610.71f, 0.0f, -179.1462f, 0.0f, 0.6917561f, 0.886716f, 0.6917561f);
	Local_139.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_26", 3, -2169.84f, 23.18498f, 2599.075f, 0.0f, -21.72225f, 0.0f, 2.004817f, 1.027978f, 2.004817f);
	Local_139.f_296 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_27", 3, -2172.555f, 17.77105f, 2586.546f, 0.0f, 44.38098f, 0.0f, 0.9536543f, 1.222426f, 0.9536543f);
	Local_139.f_300 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_28", 3, -2164.84f, 20.08108f, 2626.043f, 0.0f, 145.3537f, 0.0f, 1.67631f, 1.157992f, 1.67631f);
	Local_139.f_304 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_29", 3, -2163.903f, 16.909f, 2631.824f, 0.0f, -177.5938f, 0.0f, 0.7694689f, 0.9863309f, 0.7694689f);
	Local_139.f_308 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_30", 3, -2151.13f, 19.92347f, 2620.697f, 0.0f, -122.5687f, 0.0f, 0.5488666f, 0.7035555f, 0.5488666f);
	Local_139.f_312 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_31", 3, -2148.094f, 16.77384f, 2625.596f, 0.0f, 135.4297f, 0.0f, 0.8150952f, 1.044816f, 0.8150952f);
	Local_139.f_316 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_32", 3, -2147.7f, 23.13179f, 2625.398f, 0.0f, -160.6307f, 0.0f, 1.69531f, 0.9904884f, 1.69531f);
	Local_139.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_33", 3, -2142.998f, 19.90847f, 2626.977f, 0.0f, 123.1965f, 0.0f, 0.5276877f, 0.6343777f, 0.5276877f);
	Local_139.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_34", 3, -2132.26f, 16.612f, 2625.073f, 0.0f, 144.4726f, 0.0f, 1.152722f, 0.6717942f, 1.152722f);
	Local_139.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_35", 3, -2130.606f, 16.612f, 2635.028f, 0.0f, -195.8209f, 0.0f, 1.046924f, 1.341982f, 1.046924f);
	Local_139.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_36", 3, -2069.162f, 19.4371f, 2648.539f, 0.0f, -135.8927f, 0.0f, 0.5835289f, 0.7479869f, 0.5835289f);
	Local_139.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_37", 3, -2086.002f, 16.96188f, 2603.537f, 0.0f, -65.40534f, 0.0f, 0.8166552f, 1.046816f, 0.8166552f);
	Local_139.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_38", 3, -2113.162f, 16.64206f, 2584.0f, 0.0f, -89.32012f, 0.0f, 2.004817f, 2.569842f, 2.004817f);
	Local_139.f_344 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_39", 3, -2111.177f, 22.16126f, 2598.696f, 0.0f, -71.9375f, 0.0f, 1.42253f, 1.230905f, 1.42253f);
	Local_139.f_348 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_40", 3, -2139.998f, 16.86635f, 2595.645f, 0.0f, 3.167136f, 0.0f, 0.6586115f, 0.8442301f, 0.6586115f);
	Local_139.f_352 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_41", 3, -2137.175f, 19.8104f, 2601.857f, 0.0f, 0.05228467f, 0.0f, 0.7612693f, 0.7421482f, 0.7612693f);
	Local_139.f_356 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_42", 3, -2157.85f, 19.98677f, 2597.38f, 0.0f, -86.46044f, 0.0f, 1.040894f, 1.334253f, 1.040894f);
	Local_139.f_360 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_43", 3, -2156.172f, 16.8559f, 2588.128f, 0.0f, -85.06738f, 0.0f, 0.66022f, 0.8462921f, 0.66022f);
	Local_139.f_364 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_44", 3, -2159.597f, 16.87441f, 2595.465f, 0.0f, 168.6162f, 0.0f, 0.4739502f, 0.6075251f, 0.4739502f);
	*(&Local_139 + 368) = { -2151.191f, 16.46191f, 2568.472f };
	*(&Local_139 + 368 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_392 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_A", -2151.191f, 16.46191f, 2568.472f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 396) = { -2151.191f, 16.46191f, 2576.389f };
	*(&Local_139 + 396 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_420 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_B", -2151.191f, 16.46191f, 2576.389f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 424) = { -2150.959f, 16.462f, 2573.736f };
	*(&Local_139 + 424 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_448 = CREATE_POINT_IN_LAYOUT(Local_139, "StandoffCenter", -2150.959f, 16.462f, 2573.736f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_0", -2190.858f, 16.36099f, 2529.46f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_1", -2161.941f, 16.23006f, 2534.06f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_2", -2129.935f, 16.06275f, 2526.065f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_3", -2089.766f, 16.06271f, 2568.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_4", -2067.963f, 16.18932f, 2626.349f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_5", -2124.0f, 16.44941f, 2649.884f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_6", -2170.259f, 16.78321f, 2648.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_7", -2206.101f, 15.9035f, 2641.997f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_8", -2209.986f, 16.28456f, 2587.725f, 0.0f, -180.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_9", -2217.783f, 16.53606f, 2547.187f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_10", -2164f, 16.62463f, 2560.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_11", -2158.549f, 16.44941f, 2628f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_12", -2124f, 16.09741f, 2610.958f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_13", -2182.254f, 16.28539f, 2594.054f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_14", -2151.191f, 16.46191f, 2572.252f, 0.03234909f, -3.149359f, -0.7200789f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_15", -2170.708f, 16.87441f, 2599.717f, 0.0f, 0.0f, 0.0f);
	Local_139.f_452 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 456[06]) = { -2177.027f, 16.51933f, 2587.987f };
	*(&Local_139 + 456[06] + 12) = { 0.0f, -91.14231f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D1", -2177.027f, 16.51933f, 2587.987f, 0.0f, -91.14231f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_139.f_452);
	*(&Local_139 + 456[16]) = { -2127.258f, 16.60432f, 2620.044f };
	*(&Local_139 + 456[16] + 12) = { 0.0f, 179.965f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D2", -2127.258f, 16.60432f, 2620.044f, 0.0f, 179.965f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_139.f_452);
	*(&Local_139 + 456[26]) = { -2135.445f, 16.66118f, 2571.632f };
	*(&Local_139 + 456[26] + 12) = { 0.0f, 359.1321f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D3", -2135.445f, 16.66118f, 2571.632f, 0.0f, 359.1321f, 0.0f);
	DECOR_SET_INT(bVar3, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_139.f_452);
	*(&Local_139 + 456[36]) = { -2210.677f, 16.23945f, 2629.782f };
	*(&Local_139 + 456[36] + 12) = { 0.0f, -1.028162f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S1", -2210.677f, 16.23945f, 2629.782f, 0.0f, -1.028162f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_139.f_452);
	*(&Local_139 + 456[46]) = { -2131.126f, 16.39277f, 2542.057f };
	*(&Local_139 + 456[46] + 12) = { 0.0f, -181.7314f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S2", -2131.126f, 16.39277f, 2542.057f, 0.0f, -181.7314f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_139.f_452);
	*(&Local_139 + 456[56]) = { -2136.797f, 16.90394f, 2595.126f };
	*(&Local_139 + 456[56] + 12) = { 0.0f, -1.583606f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S3", -2136.797f, 16.90394f, 2595.126f, 0.0f, -1.583606f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_139.f_452);
	*(&Local_139 + 456[66]) = { -2170.927f, 16.56469f, 2572.401f };
	*(&Local_139 + 456[66] + 12) = { 0.0f, 179.5375f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B1", -2170.927f, 16.56469f, 2572.401f, 0.0f, 179.5375f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_139.f_452);
	*(&Local_139 + 456[76]) = { -2125.378f, 16.66795f, 2630.19f };
	*(&Local_139 + 456[76] + 12) = { 0.0f, -89.83778f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B2", -2125.378f, 16.66795f, 2630.19f, 0.0f, -89.83778f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_139.f_452);
	*(&Local_139 + 456[86]) = { -2196f, 16.18368f, 2553.017f };
	*(&Local_139 + 456[86] + 12) = { 0.0f, 182.9987f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R1", -2196f, 16.18368f, 2553.017f, 0.0f, 182.9987f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_139.f_452);
	*(&Local_139 + 456[96]) = { -2141.742f, 16.47363f, 2542.585f };
	*(&Local_139 + 456[96] + 12) = { 0.0f, 88.70501f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R2", -2141.742f, 16.47363f, 2542.585f, 0.0f, 88.70501f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_139.f_452);
	*(&Local_139 + 456[106]) = { -2070.603f, 18.79698f, 2641.397f };
	*(&Local_139 + 456[106] + 12) = { 0.0f, 133.23f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R3", -2070.603f, 18.79698f, 2641.397f, 0.0f, 133.23f, 0.0f);
	DECOR_SET_INT(bVar11, "type", true);
	DECOR_SET_INT(bVar11, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_139.f_452);
	*(&Local_139 + 456[116]) = { -2166.628f, 16.913f, 2626.439f };
	*(&Local_139 + 456[116] + 12) = { 0.0f, 180.0616f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R4", -2166.628f, 16.913f, 2626.439f, 0.0f, 180.0616f, 0.0f);
	DECOR_SET_INT(bVar12, "type", true);
	DECOR_SET_INT(bVar12, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_139.f_452);
	*(&Local_139 + 456[126]) = { -2204.197f, 15.958f, 2567.81f };
	*(&Local_139 + 456[126] + 12) = { 0.0f, 57.48061f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P1", -2204.197f, 15.958f, 2567.81f, 0.0f, 57.48061f, 0.0f);
	DECOR_SET_INT(bVar13, "type", true);
	DECOR_SET_INT(bVar13, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_139.f_452);
	*(&Local_139 + 456[136]) = { -2172.0f, 16.56468f, 2578.081f };
	*(&Local_139 + 456[136] + 12) = { 0.0f, 0.586736f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P2", -2172.0f, 16.56468f, 2578.081f, 0.0f, 0.586736f, 0.0f);
	DECOR_SET_INT(bVar14, "type", true);
	DECOR_SET_INT(bVar14, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_139.f_452);
	*(&Local_139 + 456[146]) = { -2158.288f, 16.64128f, 2556f };
	*(&Local_139 + 456[146] + 12) = { 0.0f, -89.7421f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P3", -2158.288f, 16.64128f, 2556f, 0.0f, -89.7421f, 0.0f);
	DECOR_SET_INT(bVar15, "type", true);
	DECOR_SET_INT(bVar15, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_139.f_452);
	*(&Local_139 + 456[156]) = { -2129.482f, 16.40952f, 2557.619f };
	*(&Local_139 + 456[156] + 12) = { 0.0f, 89.2361f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P4", -2129.482f, 16.40952f, 2557.619f, 0.0f, 89.2361f, 0.0f);
	DECOR_SET_INT(bVar16, "type", true);
	DECOR_SET_INT(bVar16, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_139.f_452);
	*(&Local_139 + 456[166]) = { -2111.906f, 17.02981f, 2601.281f };
	*(&Local_139 + 456[166] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P5", -2111.906f, 17.02981f, 2601.281f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar17, "type", true);
	DECOR_SET_INT(bVar17, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_139.f_452);
	*(&Local_139 + 456[176]) = { -2087.171f, 17.07358f, 2600.231f };
	*(&Local_139 + 456[176] + 12) = { 0.0f, 25.20911f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P6", -2087.171f, 17.07358f, 2600.231f, 0.0f, 25.20911f, 0.0f);
	DECOR_SET_INT(bVar18, "type", true);
	DECOR_SET_INT(bVar18, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_139.f_452);
	*(&Local_139 + 456[186]) = { -2116.262f, 16.38715f, 2625.962f };
	*(&Local_139 + 456[186] + 12) = { 0.0f, -89.74337f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P7", -2116.262f, 16.38715f, 2625.962f, 0.0f, -89.74337f, 0.0f);
	DECOR_SET_INT(bVar19, "type", true);
	DECOR_SET_INT(bVar19, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_139.f_452);
	*(&Local_139 + 456[196]) = { -2160.629f, 16.44941f, 2624.231f };
	*(&Local_139 + 456[196] + 12) = { 0.0f, 90.76518f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P8", -2160.629f, 16.44941f, 2624.231f, 0.0f, 90.76518f, 0.0f);
	DECOR_SET_INT(bVar20, "type", true);
	DECOR_SET_INT(bVar20, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_139.f_452);
	*(&Local_139 + 456[206]) = { -2202.604f, 16.499f, 2610.422f };
	*(&Local_139 + 456[206] + 12) = { 0.0f, -87.95204f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P9", -2202.604f, 16.499f, 2610.422f, 0.0f, -87.95204f, 0.0f);
	DECOR_SET_INT(bVar21, "type", true);
	DECOR_SET_INT(bVar21, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_139.f_452);
	*(&Local_139 + 456[216]) = { -2193.234f, 16.57414f, 2595.001f };
	*(&Local_139 + 456[216] + 12) = { 0.0f, -174.347f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A1", -2193.234f, 16.57414f, 2595.001f, 0.0f, -174.347f, 0.0f);
	DECOR_SET_INT(bVar22, "TYPE", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_139.f_452);
	*(&Local_139 + 456[226]) = { -2095.388f, 16.89004f, 2631.514f };
	*(&Local_139 + 456[226] + 12) = { 13.03147f, -149.7585f, 3.375002f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A2", -2095.388f, 16.89004f, 2631.514f, 13.03147f, -149.7585f, 3.375002f);
	DECOR_SET_INT(bVar23, "TYPE", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_139.f_452);
	*(&Local_139 + 456[236]) = { -2121.144f, 16.60294f, 2593.03f };
	*(&Local_139 + 456[236] + 12) = { 0.0f, -449.4661f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A3", -2121.144f, 16.60294f, 2593.03f, 0.0f, -449.4661f, 0.0f);
	DECOR_SET_INT(bVar24, "TYPE", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_139.f_452);
	Local_139.f_1036 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), Local_139, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand", "smoking_stand", -2152.593f, 16.44941f, 2575.259f, 0.0f, -97.28159f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand1", "smoking_stand", -2158.838f, 16.57014f, 2565.314f, 0.0f, -209.5068f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand2", "smoking_stand", -2144.351f, 16.60254f, 2568.241f, 0.0f, 112.6558f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_chopwood_w_any", "stand_chopwood_w_any", -2145.777f, 16.44941f, 2579.104f, 0.0f, -52.8862f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "repair_kneel", "repair_kneel", -2142.03f, 16.46156f, 2573.172f, 0.0f, -89.6236f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "rand_idle_stand", "rand_idle_stand", -2162.88f, 16.62463f, 2564.0f, 0.0f, -157.3595f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "rand_idle_stand1", "rand_idle_stand", -2152.235f, 16.55283f, 2565.279f, 0.0f, -175.3769f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sharpen_axe", "sharpen_axe", -2155.889f, 16.51797f, 2565.408f, 0.0f, 150.0f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "drink_from_barrel", "drink_from_barrel", -2165.785f, 16.50934f, 2567.38f, 0.0f, 52.26007f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "rand_idle_stand2", "rand_idle_stand", -2164.281f, 16.46638f, 2573.677f, 0.0f, -88.73591f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "knl_watertrough", "knl_watertrough", -2158.693f, 16.44941f, 2576.211f, 0.0f, 180.0f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2150.452f, 16.44941f, 2576.049f, 0.0f, 58.75054f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -2154.418f, 16.44941f, 2573.157f, 0.0f, -86.69936f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "opium_pipe", "opium_pipe", -2153.774f, 16.44941f, 2574.763f, 0.0f, -49.96101f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -2152.548f, 16.44941f, 2571.379f, 0.0f, -166.9231f, 0.0f), Local_139.f_1036);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_yelling_mid", "stand_yelling_mid", -2149.583f, 16.45459f, 2574.785f, 0.0f, 75.47908f, 0.0f), Local_139.f_1036);
	return;
}

void Function_144(int iParam0, int iParam1) //Position: 0x5970 / 22896
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

void Function_145(int iParam0) //Position: 0x59B9 / 22969
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_147("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_146(StackVal, 0);
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x5A2B / 23083
{
	Function_100(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_99(StackVal, iParam1);
	}
	return;
}

bool Function_147(char* cParam0) //Position: 0x5A5C / 23132
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5A7B / 23163
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_149() //Position: 0x5ABD / 23229
{
	while (!IS_EXITFLAG_SET())
	{
		Function_20(4414, 3404);
		WAIT(0);
	}
	return;
}

bool Function_150() //Position: 0x5ADA / 23258
{
	return Function_108(2);
}

void Function_151() //Position: 0x5AE4 / 23268
{
	if (Function_150())
	{
		return;
	}
	Function_161();
	Function_159(&bLocal_39, "MP_CTF", 10, 0);
	Function_159(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_153(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_76();
	Function_152();
	return;
}

void Function_152() //Position: 0x5B48 / 23368
{
	while (!Function_108(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_153(int iParam0) //Position: 0x5B63 / 23395
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_158();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_157(iParam0[iVar03], 8);
		}
		else if (Function_156())
		{
			iVar1 = 1;
			Function_157(iParam0[iVar03], 8);
		}
		Function_157(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_157(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_157(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_157(iParam0[iVar03], 2);
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
							Function_157(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_157(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_157(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_157(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_157(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_157(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_157(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_157(iParam0[iVar03], 2);
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
	Function_154();
	return 1;
}

void Function_154() //Position: 0x5EDE / 24286
{
	if (!Function_155(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_155(int iParam0) //Position: 0x5F1E / 24350
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_156() //Position: 0x5F3A / 24378
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

void Function_157(var uParam0, int iParam1) //Position: 0x5F65 / 24421
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_158() //Position: 0x5F76 / 24438
{
	if (!Function_155(128))
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

var Function_159(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5FB8 / 24504
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_160(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_157(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_160(var uParam0, int iParam1, int iParam2) //Position: 0x5FF0 / 24560
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_157(uParam0[iVar03], 4);
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

void Function_161() //Position: 0x60B4 / 24756
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

