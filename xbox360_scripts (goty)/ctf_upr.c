//Decompiled with MagicRDR v1.0
//Function Count : 162
//Statics Count : 466
//Natives Count : 192
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
	struct<969> Local_139 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
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
	Function_157();
	if (Function_156())
	{
		Function_155();
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
		Function_111(0, 23);
		bVar0 = CREATE_WORLD_SECTOR(Local_139, "unionPacific");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(0);
		}
		iVar1 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_110(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_109(64, 0);
					Function_107();
					iVar1 = 2;
				}
			}
			Function_91(&iLocal_437, 0.2f, 0.6f, 12, 0.0f, 0.0f, 1.0f, 1.0f);
			Function_78(&uLocal_400);
			Function_17();
			WAIT(0);
		}
	}
	Function_15(&uLocal_400);
	Function_6();
	Function_1();
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_upr_ffa01x", 0);
	DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
	if (IS_ACTOR_VALID(bLocal_383))
	{
		TRAIN_DESTROY_TRAIN(iLocal_382);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x126 / 294
{
	Function_2(&Local_139 + 4);
	RELEASE_LAYOUT_REF(Local_139);
	return;
}

void Function_2(int iParam0) //Position: 0x138 / 312
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

void Function_3(var uParam0, int iParam1) //Position: 0x15E / 350
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

void Function_4(var uParam0, int iParam1) //Position: 0x28C / 652
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x2A6 / 678
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x2C3 / 707
{
	Function_14();
	Function_2(&bLocal_39);
	Function_7();
	return;
}

void Function_7() //Position: 0x2D4 / 724
{
	Function_8();
	return;
}

void Function_8() //Position: 0x2DD / 733
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x3E6 / 998
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

void Function_10(var uParam0, int iParam1) //Position: 0x40E / 1038
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x421 / 1057
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(bool bParam0) //Position: 0x430 / 1072
{
	return Function_13(Global_76905.f_132, bParam0);
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x441 / 1089
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x44E / 1102
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15(int iParam0) //Position: 0x48D / 1165
{
	Function_109(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x49E / 1182
{
	if (iParam0->f_140 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_140, 0);
		iParam0->f_140 = "";
	}
	return;
}

void Function_17() //Position: 0x4BB / 1211
{
	Function_76();
	if (Function_75(1, 1))
	{
		Function_59(StackVal, StackVal, 6502, vLocal_48, 1, 6389);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_54(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_20(4426, 3416);
		Function_18();
	}
	return;
}

void Function_18() //Position: 0x506 / 1286
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_19(&Local_12);
	}
	return;
}

void Function_19(int iParam0) //Position: 0x522 / 1314
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

void Function_20(int iParam0, int iParam1) //Position: 0x548 / 1352
{
	Function_21(iParam0, iParam1, 3409);
	return;
}

void Function_21(var uParam0, var uParam1, int iParam2) //Position: 0x559 / 1369
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

void Function_22(var uParam0, var uParam1, int iParam2) //Position: 0x6F2 / 1778
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

bool Function_23(bool bParam0, int iParam1, int iParam2) //Position: 0x86A / 2154
{
	var uVar0;
	
	return Function_24(bParam0, iParam1, &uVar0, iParam2);
}

int Function_24(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x87B / 2171
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

bool Function_25(bool bParam0, int iParam1, bool bParam2) //Position: 0x8E0 / 2272
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

var Function_26(int iParam0) //Position: 0x961 / 2401
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

bool Function_27(bool bParam0) //Position: 0xC7A / 3194
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

void Function_28(bool bParam0) //Position: 0xD1B / 3355
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_9(16384, 0, 1);
	return;
}

bool Function_29() //Position: 0xD35 / 3381
{
	return Function_12(32768);
}

void Function_30() //Position: 0xD42 / 3394
{
	Function_9(32768, 1, 0);
	return;
}

int Function_31() //Position: 0xD51 / 3409
{
	return 1;
}

int Function_32(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xD58 / 3416
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

var Function_33() //Position: 0xE19 / 3609
{
	return (Function_12(4096) || Function_12(4));
}

void Function_34(bool bParam0, bool bParam1) //Position: 0xE2A / 3626
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

bool Function_35(bool bParam0, int iParam1, bool bParam2) //Position: 0xE5D / 3677
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

var Function_36(int iParam0) //Position: 0xEDE / 3806
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

var Function_37(int iParam0, bool bParam1) //Position: 0xFD0 / 4048
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_38(int iParam0, bool bParam1) //Position: 0xFF0 / 4080
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

int Function_39(int iParam0) //Position: 0x105E / 4190
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_40(int iParam0, int iParam1, int iParam2) //Position: 0x1077 / 4215
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_41(int iParam0) //Position: 0x108C / 4236
{
	return Function_42(0, iParam0);
}

int Function_42(int iParam0, bool bParam1) //Position: 0x1098 / 4248
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

var Function_43(int iParam0) //Position: 0x10FF / 4351
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_44(bool bParam0) //Position: 0x110F / 4367
{
	return Function_38(12, bParam0);
}

int Function_45(int iParam0) //Position: 0x111C / 4380
{
	return Function_38(11, iParam0);
}

void Function_46(bool bParam0, int iParam1, char* cParam2) //Position: 0x1129 / 4393
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

int Function_47() //Position: 0x114A / 4426
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

void Function_48() //Position: 0x11E3 / 4579
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

bool Function_49(bool bParam0) //Position: 0x1220 / 4640
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

void Function_50(bool bParam0) //Position: 0x12A1 / 4769
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

struct<64> Function_51(int iParam0) //Position: 0x132A / 4906
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x133E / 4926
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

int Function_53(bool bParam0, bool bParam1) //Position: 0x1383 / 4995
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

void Function_54(vector3 vParam0, float fParam3) //Position: 0x13B7 / 5047
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

int Function_55(bool bParam0) //Position: 0x146A / 5226
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

int Function_56(bool bParam0) //Position: 0x14A5 / 5285
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

void Function_57(bool bParam0) //Position: 0x14F3 / 5363
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_58() //Position: 0x1506 / 5382
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_59(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1535 / 5429
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_60(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 6288, 1, 125, 0, 0, 0);
	Function_60(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_60(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x15B8 / 5560
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_61(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_61(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1603 / 5635
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

var Function_62(float fParam0) //Position: 0x1882 / 6274
{
	return (fParam0 * 57.29578f);
}

var Function_63(int iParam0, var uParam1) //Position: 0x1890 / 6288
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

var Function_64(int iParam0, var uParam1) //Position: 0x18F5 / 6389
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_mul_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_65() //Position: 0x1966 / 6502
{
	int iVar0;
	
	iVar0 = Function_71(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_66(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_66(bool bParam0, int iParam1) //Position: 0x1993 / 6547
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

bool Function_67(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1AA2 / 6818
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

bool Function_68(int iParam0) //Position: 0x1BC9 / 7113
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_69(bool bParam0, int iParam1) //Position: 0x1BDB / 7131
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

var Function_70() //Position: 0x1C37 / 7223
{
	int iVar0;
	
	return iVar0;
}

var Function_71(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1C3F / 7231
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

bool Function_72(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1D2D / 7469
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

var Function_73(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1EBE / 7870
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

var Function_74() //Position: 0x1F2A / 7978
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_75(bool bParam0, bool bParam1) //Position: 0x1F51 / 8017
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_76() //Position: 0x1F71 / 8049
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

void Function_77(char* cParam0, int iParam1) //Position: 0x2006 / 8198
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

int Function_78(int iParam0) //Position: 0x209D / 8349
{
	int iVar0;
	
	if (!Function_89(*iParam0) || (Function_110(64) && Function_85()))
	{
		iParam0->f_4 = 0;
		Function_16(iParam0);
		if (!Function_89(*iParam0))
		{
		}
		if (Function_110(64))
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
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 140);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_136)
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
			if (StackVal > iParam0->f_136)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_136)
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
			if (StackVal > iParam0->f_136)
			{
				iParam0->f_144 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_144) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_16(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_79(3, iParam0->f_136))
			{
				if (iParam0->f_136 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_136);
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

int Function_79(int iParam0, int iParam1) //Position: 0x241A / 9242
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_80(bool bParam0, bool bParam1) //Position: 0x242C / 9260
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

void Function_81(bool bParam0, bool bParam1) //Position: 0x2480 / 9344
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

int Function_82(var uParam0, var uParam1, int iParam2) //Position: 0x24D1 / 9425
{
	return Function_83(Global_29006, uParam0, uParam1, iParam2);
}

int Function_83(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x24E3 / 9443
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

bool Function_84(int iParam0) //Position: 0x257F / 9599
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_85() //Position: 0x2595 / 9621
{
	return !Function_86();
}

bool Function_86() //Position: 0x259F / 9631
{
	if (Function_88())
	{
		return (Function_87() != 1 || Function_87() != 0);
	}
	return 0;
}

int Function_87() //Position: 0x25B8 / 9656
{
	return Global_79349.f_16;
}

bool Function_88() //Position: 0x25C4 / 9668
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_89(int iParam0) //Position: 0x25CD / 9677
{
	if (!Function_84(iParam0))
	{
		return 1;
	}
	return Function_90(&(Global_29008[iParam0]), 4);
}

int Function_90(var uParam0, bool bParam1) //Position: 0x25E9 / 9705
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_91(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2605 / 9733
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

void Function_92(int iParam0, var uParam1, int iParam2) //Position: 0x26A8 / 9896
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

void Function_93(int iParam0) //Position: 0x26CD / 9933
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_94(int iParam0) //Position: 0x26E2 / 9954
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x26F7 / 9975
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

void Function_96(int iParam0, bool bParam1, bool bParam2) //Position: 0x2769 / 10089
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

void Function_97() //Position: 0x28E2 / 10466
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_98(bool bParam0) //Position: 0x28EE / 10478
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

void Function_99(int iParam0, int iParam1) //Position: 0x2934 / 10548
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_100(iParam0);
	Function_98(iVar0);
	PRINTNL();
	Function_96(iParam0, iVar0, iParam1);
	return;
}

void Function_100(int iParam0) //Position: 0x2959 / 10585
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

float Function_101(int iParam0) //Position: 0x299F / 10655
{
	return -Function_102(iParam0);
}

float Function_102(int iParam0) //Position: 0x29AB / 10667
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

void Function_103() //Position: 0x2A7C / 10876
{
	if (!Function_106())
	{
	}
	return;
}

bool Function_104(int iParam0) //Position: 0x2A89 / 10889
{
	return Function_13(*iParam0, 2);
}

bool Function_105(int iParam0) //Position: 0x2A96 / 10902
{
	return Function_13(*iParam0, 1);
}

bool Function_106() //Position: 0x2AA3 / 10915
{
	return NET_IS_IN_SESSION();
}

void Function_107() //Position: 0x2AAC / 10924
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_70());
	Function_108(bVar0, "bottle", Local_139.f_92);
	Function_108(bVar0, "crate14", Local_139.f_92);
	Function_108(bVar0, "p_gen_crate03x", Local_139.f_92);
	Function_108(bVar0, "package", Local_139.f_92);
	Function_108(bVar0, "nlantern05", Local_139.f_92);
	Function_108(bVar0, "p_gen_bucket02x", Local_139.f_92);
	Function_108(bVar0, "np_gen_can", Local_139.f_92);
	Function_108(bVar0, "p_gen_bedrollclosed01x", Local_139.f_92);
	Function_108(bVar0, "spittoon", Local_139.f_92);
	Function_108(bVar0, "milkcan", Local_139.f_92);
	Function_108(bVar0, "jug", Local_139.f_92);
	Function_108(bVar0, "broom", Local_139.f_92);
	Function_108(bVar0, "stool", Local_139.f_92);
	Function_108(bVar0, "boots", Local_139.f_92);
	Function_108(bVar0, "chairbroken", Local_139.f_92);
	Function_108(bVar0, "kettle", Local_139.f_92);
	Function_108(bVar0, "sawhorse", Local_139.f_92);
	Function_108(bVar0, "debrisboard", Local_139.f_92);
	Function_108(bVar0, "p_gen_woodplane01x", Local_139.f_92);
	Function_108(bVar0, "pot", Local_139.f_92);
	Function_108(bVar0, "cauldron", Local_139.f_92);
	Function_108(bVar0, "p_gen_lumber07x", Local_139.f_92);
	Function_108(bVar0, "saw", Local_139.f_92);
	Function_108(bVar0, "p_gen_woodboard01x", Local_139.f_92);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_108(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2CBE / 11454
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), bParam0, 4294967295, 1);
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

void Function_109(int iParam0, bool bParam1) //Position: 0x2D17 / 11543
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

bool Function_110(int iParam0) //Position: 0x2D3F / 11583
{
	return Function_13(StackVal, iParam0);
}

void Function_111(int iParam0, int iParam1) //Position: 0x2D52 / 11602
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_112(bool bParam0) //Position: 0x2D73 / 11635
{
	Function_109(16, bParam0);
	return;
}

void Function_113(var uParam0) //Position: 0x2D80 / 11648
{
	Function_109(8, uParam0);
	return;
}

bool Function_114() //Position: 0x2D8D / 11661
{
	var uVar0;
	
	Function_154(&iLocal_437, 0, 9, 30, 0, 0, 1);
	Function_154(&iLocal_437, 1, 9, 30, 3, 3, 3);
	Function_154(&iLocal_437, 2, 12, 0, 2, 2, 1);
	Function_154(&iLocal_437, 3, 12, 0, 1, 1, 0);
	Function_154(&iLocal_437, 4, 23, 0, 0, 0, 1);
	Function_151(&iLocal_437);
	Function_150(&iLocal_384, 1166, 2, 0);
	Function_150(&iLocal_384, 1167, 2, 0);
	Function_150(&iLocal_384, 1160, 2, 0);
	Function_150(&iLocal_384, 1164, 2, 0);
	Function_150(&iLocal_384, 1162, 2, 0);
	while (!Function_144(&iLocal_384))
	{
		WAIT(0);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_142();
	ENABLE_CHILD_SECTOR("mp_upr_ffa01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_upr_ffa01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_138(Local_139))
	{
		return 0;
	}
	Function_137("NRT_SONG_05", "NRT_SONG_01", 0, 58, 58, 1);
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	iLocal_382 = TRAIN_CREATE_NEW_TRAIN(5, "rail_upr__rrtrack_01x", 0);
	if (iLocal_382 > 0)
	{
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_382, 1166);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_382, 1167);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_382, 1160);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_382, 1164);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_382, 1162);
		bLocal_383 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_382, 0));
		UNK_0xF1A53C41(&uVar0, &Local_139 + 940 + 12, 1, 0);
		if (IS_ACTOR_VALID(bLocal_383))
		{
			TRAIN_SET_POSITION_DIRECTION(iLocal_382, &Local_139 + 940, &uVar0);
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iLocal_382, 4294967295, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to createtrain for UPR curve!");
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_135(Local_139.f_968);
	Function_128(&Global_83591 + 276, 0);
	Function_126(&Global_83591, 1, 22, 1, 1);
	Function_126(&Global_83591, 2, 0, 10, 1);
	Function_126(&Global_83591, 3, 17, 10, 1);
	Function_126(&Global_83591, 4, 25, 8, 1);
	Function_121(&Global_83591, 1, 3, 10, 1);
	Function_121(&Global_83591, 2, 18, 10, 1);
	Function_120(&Global_83591);
	Function_119(&Global_83591 + 276, 4);
	if (!Function_115(&uLocal_400))
	{
		return 0;
	}
	return 1;
}

bool Function_115(int iParam0) //Position: 0x2FCA / 12234
{
	if (!Function_118(iParam0, Global_30723[2]))
	{
		return 0;
	}
	Function_116(iParam0, "unionPacific", "nfactory01", 1);
	Function_116(iParam0, "unionPacific", "nfactory01", 2);
	Function_116(iParam0, "unionPacific", "nfactory01", 3);
	Function_116(iParam0, "unionPacific", "repairStructure01", 1);
	Function_116(iParam0, "unionPacific", "repairStructure01", 2);
	Function_116(iParam0, "unionPacific", "repairStructure01", 3);
	return 1;
}

int Function_116(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x30C6 / 12486
{
	int iVar0;
	
	iVar0 = iParam0->f_136;
	if (!Function_117(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_11(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_117(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x30F7 / 12535
{
	if (iParam0->f_136 > 6)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_1365] = uParam1;
	(iParam0 + 12[iParam0->f_1365])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_1365])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_1365])->f_16 = 0;
	iParam0->f_136++;
	return 1;
}

bool Function_118(int iParam0, int iParam1) //Position: 0x314B / 12619
{
	int iVar0;
	
	if (!Function_84(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_136 = 0;
	iParam0->f_4 = 0;
	iParam0->f_140 = "";
	iVar0 = 0;
	while (iVar0 <= 6)
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

void Function_119(int iParam0, int iParam1) //Position: 0x31BE / 12734
{
	(iParam0 + 228)->f_220 = 0;
	Function_11(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_120(int iParam0) //Position: 0x31D6 / 12758
{
	iParam0->f_844 = 0;
	return;
}

void Function_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x31E2 / 12770
{
	Function_122(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_122(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x31FA / 12794
{
	Function_123(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_123(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3211 / 12817
{
	if (!Function_125(iParam1))
	{
		return;
	}
	Function_124(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_124(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3234 / 12852
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

bool Function_125(int iParam0) //Position: 0x325E / 12894
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x326E / 12910
{
	Function_127(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_127(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3286 / 12934
{
	Function_123(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_128(int iParam0, bool bParam1) //Position: 0x329B / 12955
{
	Function_132(iParam0);
	Function_132(iParam0 + 228);
	if (bParam1)
	{
		Function_129(iParam0);
	}
	return;
}

void Function_129(int iParam0) //Position: 0x32B7 / 12983
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_130(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x32D7 / 13015
{
	Function_131(uParam0, iParam1, 0);
	return;
}

void Function_131(int iParam0, int iParam1, int iParam2) //Position: 0x32E5 / 13029
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_132(int iParam0) //Position: 0x32F6 / 13046
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_134(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_133(iParam0, 0.0f);
	return;
}

void Function_133(var uParam0, int iParam1) //Position: 0x3323 / 13091
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_134(int iParam0) //Position: 0x332F / 13103
{
	Function_124(iParam0, 4294967295, 0, 1);
	return;
}

void Function_135(bool bParam0) //Position: 0x333D / 13117
{
	DECOR_SET_OBJECT(Function_136(), "LobbyGringoSet", bParam0);
	return;
}

var Function_136() //Position: 0x335D / 13149
{
	return Global_83591.f_140;
}

void Function_137(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3369 / 13161
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

bool Function_138(int iParam0) //Position: 0x33F9 / 13305
{
	Function_141(iParam0);
	if (Function_140())
	{
		Function_119(&Global_83591 + 276, 2);
	}
	Function_139();
	vLocal_48 = { StackVal, StackVal, Function_139() };
	return 1;
}

vector3 Function_139() //Position: 0x341D / 13341
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_136();
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

bool Function_140() //Position: 0x3465 / 13413
{
	return Function_13(Global_79962, 1024);
}

void Function_141(var uParam0) //Position: 0x3475 / 13429
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_142() //Position: 0x3483 / 13443
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
	
	Function_143(4, 1);
	uVar0 = uVar0;
	Local_139 = CREATE_LAYOUT("CTF_FFA_UPR_layout");
	Local_139.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_139, "v_clear_vol", 2, -241.5022f, 84.25098f, 2105.339f, 0.0f, 0.0f, 0.0f, 223.4538f, 30.69769f, 107.183f);
	Local_139.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_139, "playablespace", 3, -241.5794f, 85.2767f, 2100.484f, 0.0f, 2.712623f, 0.0f, 122.9632f, 24.25337f, 79.83437f);
	Local_139.f_124 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "CapVols_set");
	(*&Local_139 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_1", 3, -316.8836f, 84.33276f, 2093.064f, 0.0f, 90.62952f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_124, (*&Local_139 + 100)[0]);
	(*&Local_139 + 100)[1] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_2", 3, -248.1506f, 84.14603f, 2074.548f, 0.0f, 1.930339f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_124, (*&Local_139 + 100)[1]);
	(*&Local_139 + 100)[2] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_3", 3, -260.2298f, 84.35342f, 2135.21f, 0.0f, 1.470659f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_124, (*&Local_139 + 100)[2]);
	(*&Local_139 + 100)[3] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_4", 3, -186.2378f, 83.32544f, 2069.596f, 0.0f, 42.078f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_124, (*&Local_139 + 100)[3]);
	(*&Local_139 + 100)[4] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_5", 3, -196.0117f, 83.87431f, 2131.045f, 0.0f, 179.0169f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_124, (*&Local_139 + 100)[4]);
	Local_139.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_16", 3, -297.4714f, 84.23399f, 2102.786f, 0.0f, -1.473733f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_15", 3, -288.9043f, 84.23399f, 2075.768f, 0.0f, 11.74316f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_14", 3, -266.6794f, 84.26377f, 2078.336f, 0.0f, 87.16321f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_13", 3, -233.6795f, 83.92953f, 2080.694f, 0.0f, -88.78166f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_12", 3, -226.1823f, 83.66486f, 2101.712f, 0.0f, 51.62983f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_11", 3, -230.2132f, 84.12883f, 2126.336f, 0.0f, -129.4532f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_10", 3, -242.6289f, 83.32901f, 2140f, 0.0f, -90.69182f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_9", 3, -275.9999f, 83.91253f, 2144.198f, 0.0f, 165.3605f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_8", 3, -303.9999f, 82.21853f, 2142.206f, 0.0f, 187.1727f, 0.0f, 2.631907f, 7.711853f, 2.631907f);
	Local_139.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_7", 3, -326.0576f, 83.49762f, 2131.323f, 0.0f, 133.362f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_6", 3, -273.1986f, 84.35152f, 2127.516f, 0.0f, -179.6494f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_5", 3, -296.9942f, 84.35147f, 2088.143f, 0.0f, 59.67917f, 0.0f, 2.229749f, 6.533473f, 2.229749f);
	Local_139.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_4", 3, -273.6002f, 84.3515f, 2115.419f, 0.0f, 89.23226f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_3", 3, -252.6808f, 84.35153f, 2115.128f, 0.0f, -90.90222f, 0.0f, 2.060968f, 6.038922f, 2.060968f);
	Local_139.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_2", 3, -245.175f, 84.35153f, 2095.275f, 0.0f, -89.08141f, 0.0f, 2.344498f, 6.869704f, 2.344498f);
	Local_139.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_1", 3, -325.75f, 84.32941f, 2104.132f, 0.0f, 142.1321f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_0", 3, -314.805f, 84.41656f, 2076.0f, 0.0f, -13.12449f, 0.0f, 1.786804f, 3.633499f, 1.786804f);
	Local_139.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_17", 3, -214.5573f, 83.75115f, 2073.231f, 0.0f, -1.473733f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_18", 3, -200.4808f, 83.39896f, 2077.706f, 0.0f, -40.40644f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_19", 3, -191.3609f, 83.5276f, 2060.411f, 0.0f, -1.473733f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_20", 3, -192f, 83.32544f, 2100.0f, 0.0f, -1.473733f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_21", 3, -206.9363f, 85.33327f, 2136f, 0.0f, 182.7163f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_22", 3, -155.977f, 83.32333f, 2101.643f, 0.0f, -139.6617f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_23", 3, -190.2698f, 83.32544f, 2088.293f, 0.0f, -1.473733f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_24", 3, -163.3175f, 83.77805f, 2065.355f, 0.0f, -1.473733f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_25", 3, -165.2614f, 83.64028f, 2113.49f, 0.0f, -66.05114f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_26", 3, -300.2829f, 84.63981f, 2061.43f, 0.0f, -1.473733f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_27", 3, -187.7333f, 83.66798f, 2122.197f, 0.0f, -135.1549f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_28", 3, -156.966f, 83.50543f, 2084.126f, 0.0f, -40.30092f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	Local_139.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_29", 3, -173.55f, 83.75339f, 2124.924f, 0.0f, -125.6805f, 0.0f, 2.081588f, 4.150502f, 2.081588f);
	*(&Local_139 + 248) = { -285.9283f, 84.3819f, 2074.795f };
	*(&Local_139 + 248 + 12) = { 0.0f, -128.2285f, 0.0f };
	Local_139.f_272 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_A", -285.9283f, 84.3819f, 2074.795f, 0.0f, -128.2285f, 0.0f);
	*(&Local_139 + 276) = { -292.1121f, 84.60413f, 2069.98f };
	*(&Local_139 + 276 + 12) = { 0.0f, 52.31951f, 0.0f };
	Local_139.f_300 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_B", -292.1121f, 84.60413f, 2069.98f, 0.0f, 52.31951f, 0.0f);
	*(&Local_139 + 304) = { -268.4771f, 84.23435f, 2078.81f };
	*(&Local_139 + 304 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_328 = CREATE_POINT_IN_LAYOUT(Local_139, "StandoffCenter", -268.4771f, 84.23435f, 2078.81f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_0", -284.4876f, 84.35153f, 2100.0f, 0.0f, -89.27299f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_1", -272.0f, 84.58089f, 2096.159f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_2", -265.8506f, 84.35147f, 2105.851f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_3", -288f, 84.35147f, 2124.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 332) = { -261.5779f, 84.33182f, 2114.875f };
	*(&Local_139 + 332 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_356 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_4", -261.5779f, 84.33182f, 2114.875f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 360) = { -303.9999f, 84.35147f, 2128.631f };
	*(&Local_139 + 360 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_384 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_5", -303.9999f, 84.35147f, 2128.631f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 388) = { -283.7374f, 84.30769f, 2114.789f };
	*(&Local_139 + 388 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_412 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_6", -283.7374f, 84.30769f, 2114.789f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 416) = { -238.2319f, 84.10855f, 2102.638f };
	*(&Local_139 + 416 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_440 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_7", -238.2319f, 84.10855f, 2102.638f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 444) = { -237.8678f, 84.35046f, 2120.373f };
	*(&Local_139 + 444 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_468 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_8", -237.8678f, 84.35046f, 2120.373f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 472) = { -220f, 83.32544f, 2104.0f };
	*(&Local_139 + 472 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_496 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_9", -220f, 83.32544f, 2104.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 500) = { -232f, 83.63419f, 2137.105f };
	*(&Local_139 + 500 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_524 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_10", -232f, 83.63419f, 2137.105f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 528) = { -208f, 83.32578f, 2095.289f };
	*(&Local_139 + 528 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_552 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_11", -208f, 83.32578f, 2095.289f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 556) = { -207.0396f, 83.31874f, 2074.453f };
	*(&Local_139 + 556 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_580 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_12", -207.0396f, 83.31874f, 2074.453f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 584) = { -167.7684f, 83.3252f, 2134.617f };
	*(&Local_139 + 584 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_608 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_13", -167.7684f, 83.3252f, 2134.617f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 612) = { -225.0271f, 83.94764f, 2092.58f };
	*(&Local_139 + 612 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_636 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_14", -225.0271f, 83.94764f, 2092.58f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 640) = { -167.5521f, 83.5874f, 2092.639f };
	*(&Local_139 + 640 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_664 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_15", -167.5521f, 83.5874f, 2092.639f, 0.0f, 0.0f, 0.0f);
	Local_139.f_668 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 672[06]) = { -269.9326f, 84.35149f, 2100.463f };
	*(&Local_139 + 672[06] + 12) = { 0.0f, -0.8159984f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D1", -269.9326f, 84.35149f, 2100.463f, 0.0f, -0.8159984f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_139.f_668);
	*(&Local_139 + 672[16]) = { -204.8254f, 83.32549f, 2101.611f };
	*(&Local_139 + 672[16] + 12) = { 0.0f, -137.3432f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B1", -204.8254f, 83.32549f, 2101.611f, 0.0f, -137.3432f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_139.f_668);
	*(&Local_139 + 672[26]) = { -261.7299f, 85.12721f, 2123.228f };
	*(&Local_139 + 672[26] + 12) = { 0.0f, -179.8524f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B2", -261.7299f, 85.12721f, 2123.228f, 0.0f, -179.8524f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_139.f_668);
	*(&Local_139 + 672[36]) = { -297.4786f, 84.35147f, 2085.076f };
	*(&Local_139 + 672[36] + 12) = { 0.0f, -0.5082616f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P1", -297.4786f, 84.35147f, 2085.076f, 0.0f, -0.5082616f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_139.f_668);
	*(&Local_139 + 672[46]) = { -296.8163f, 84.35149f, 2128.139f };
	*(&Local_139 + 672[46] + 12) = { 0.0f, -61.64834f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P2", -296.8163f, 84.35149f, 2128.139f, 0.0f, -61.64834f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_139.f_668);
	*(&Local_139 + 672[56]) = { -243.6803f, 84.35148f, 2125.581f };
	*(&Local_139 + 672[56] + 12) = { 0.0f, -89.36001f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P3", -243.6803f, 84.35148f, 2125.581f, 0.0f, -89.36001f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_139.f_668);
	*(&Local_139 + 672[66]) = { -255.6441f, 84.61989f, 2093.853f };
	*(&Local_139 + 672[66] + 12) = { 0.0f, -271.4762f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P4", -255.6441f, 84.61989f, 2093.853f, 0.0f, -271.4762f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_139.f_668);
	*(&Local_139 + 672[76]) = { -200.5022f, 83.32547f, 2083.459f };
	*(&Local_139 + 672[76] + 12) = { 0.0f, -542.1815f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P5", -200.5022f, 83.32547f, 2083.459f, 0.0f, -542.1815f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_139.f_668);
	*(&Local_139 + 672[86]) = { -181.7833f, 83.66752f, 2114.811f };
	*(&Local_139 + 672[86] + 12) = { 0.0f, -268.0482f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P6", -181.7833f, 83.66752f, 2114.811f, 0.0f, -268.0482f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_139.f_668);
	*(&Local_139 + 672[96]) = { -312.2364f, 84.35147f, 2131.491f };
	*(&Local_139 + 672[96] + 12) = { 0.0f, -332.1739f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A1", -312.2364f, 84.35147f, 2131.491f, 0.0f, -332.1739f, 0.0f);
	DECOR_SET_INT(bVar10, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_139.f_668);
	*(&Local_139 + 672[106]) = { -246.1035f, 84.35151f, 2109.9f };
	*(&Local_139 + 672[106] + 12) = { 0.0f, -179.7552f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A2", -246.1035f, 84.35151f, 2109.9f, 0.0f, -179.7552f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_139.f_668);
	*(&Local_139 + 940) = { -232.9754f, 84.11607f, 2114.923f };
	*(&Local_139 + 940 + 12) = { 0.0f, 269.1284f, 0.0f };
	Local_139.f_964 = CREATE_POINT_IN_LAYOUT(Local_139, "f_carspawn1", -232.9754f, 84.11607f, 2114.923f, 0.0f, 269.1284f, 0.0f);
	Local_139.f_968 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), Local_139, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand3", "smoking_stand", -298.6332f, 84.32938f, 2132.0f, 0.0f, 74.24701f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand", "smoking_stand", -302.9257f, 84.32941f, 2131.319f, 0.0f, 85.53125f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_dnd_rowdydrink2", "stand_dnd_rowdydrink", -303.4368f, 84.33514f, 2130.466f, 0.0f, -240.4274f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand_loose", "smoking_stand_loose", -305.2578f, 84.32941f, 2128.851f, 0.0f, -151.9608f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_dnd_rowdydrink3", "stand_dnd_rowdydrink", -307.1403f, 84.32941f, 2130.459f, 0.0f, -193.7396f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -309.5937f, 84.32941f, 2133.33f, 0.0f, -68.27383f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_fiddle_w_fiddle2", "stand_fiddle_w_fiddle", -307.9366f, 84.32941f, 2132.0f, 0.0f, -82.01376f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -310.8121f, 84.32936f, 2128.0f, 0.0f, -84.88094f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand4", "smoking_stand", -302.9257f, 84.32941f, 2131.319f, 0.0f, 85.53125f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_stirringpot_w_any", "stand_stirringpot_w_any", -307.6281f, 84.329f, 2119.976f, 0.0f, 87.223f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "lean_table", "lean_table", -306.0982f, 84.35149f, 2127.514f, 0.0f, -6.017395f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -298.0682f, 84.3515f, 2126.068f, 0.0f, -220.8979f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_fiddle_w_fiddle1", "stand_fiddle_w_fiddle", -310.9259f, 84.35149f, 2123.696f, 0.0f, -127.0933f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand1", "smoking_stand", -303.6776f, 84.32731f, 2133.453f, 0.0f, 28.47769f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -305.4127f, 84.32683f, 2134.119f, 0.0f, -15.97797f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand2", "smoking_stand", -309.369f, 84.33086f, 2131.135f, 0.0f, -83.28706f, 0.0f), Local_139.f_968);
	return;
}

void Function_143(int iParam0, int iParam1) //Position: 0x4D37 / 19767
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

bool Function_144(int iParam0) //Position: 0x4D80 / 19840
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_149();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_148(iParam0[iVar03], 8);
		}
		else if (Function_147())
		{
			iVar1 = 1;
			Function_148(iParam0[iVar03], 8);
		}
		Function_148(iParam0[iVar03], 16);
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
				Function_148(iParam0[iVar03], 1);
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
							Function_148(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_148(iParam0[iVar03], 2);
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
							Function_148(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_148(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_148(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_148(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_148(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_148(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_148(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_148(iParam0[iVar03], 2);
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
	Function_145();
	return 1;
}

void Function_145() //Position: 0x50FB / 20731
{
	if (!Function_146(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_146(int iParam0) //Position: 0x513B / 20795
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_147() //Position: 0x5157 / 20823
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

void Function_148(var uParam0, int iParam1) //Position: 0x5182 / 20866
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_149() //Position: 0x5193 / 20883
{
	if (!Function_146(128))
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

var Function_150(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x51D5 / 20949
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_148(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_148(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_151(int iParam0) //Position: 0x52A5 / 21157
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_153("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_152(StackVal, 0);
	return;
}

void Function_152(var uParam0, int iParam1) //Position: 0x5317 / 21271
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

bool Function_153(char* cParam0) //Position: 0x5348 / 21320
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5367 / 21351
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_155() //Position: 0x53A9 / 21417
{
	while (!IS_EXITFLAG_SET())
	{
		Function_20(4426, 3416);
		WAIT(0);
	}
	return;
}

bool Function_156() //Position: 0x53C6 / 21446
{
	return Function_110(2);
}

void Function_157() //Position: 0x53D0 / 21456
{
	if (Function_156())
	{
		return;
	}
	Function_161();
	Function_159(&bLocal_39, "MP_CTF", 10, 0);
	Function_159(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_144(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_76();
	Function_158();
	return;
}

void Function_158() //Position: 0x5434 / 21556
{
	while (!Function_110(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

var Function_159(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x544F / 21583
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
		Function_148(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_160(var uParam0, int iParam1, int iParam2) //Position: 0x5487 / 21639
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_148(uParam0[iVar03], 4);
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

void Function_161() //Position: 0x554B / 21835
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

