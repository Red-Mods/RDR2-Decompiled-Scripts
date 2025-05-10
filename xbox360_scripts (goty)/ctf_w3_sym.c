//Decompiled with MagicRDR v1.0
//Function Count : 149
//Statics Count : 106
//Natives Count : 159
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
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_138();
	if (Function_136())
	{
		Function_135();
	}
	else
	{
		if (Function_101())
		{
			Function_100(1);
		}
		else
		{
			Function_98(1);
		}
		while (!IS_EXITFLAG_SET())
		{
			Function_22();
			WAIT(0);
		}
		Function_20(512);
		Function_16();
		Function_15(Global_83864.f_1284, 0, 1);
	}
	DISABLE_CHILD_SECTOR("mp_wld_base03x");
	Function_2();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x6F / 111
{
	RELEASE_LAYOUT_REF(Local_51);
	return;
}

void Function_2() //Position: 0x7A / 122
{
	Function_14();
	Function_10(&bLocal_39);
	Function_3();
	return;
}

void Function_3() //Position: 0x8B / 139
{
	Function_4();
	return;
}

void Function_4() //Position: 0x94 / 148
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x19D / 413
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

void Function_6(var uParam0, int iParam1) //Position: 0x1C5 / 453
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x1D8 / 472
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x1E7 / 487
{
	return Function_9(Global_76905.f_132, iParam0);
}

int Function_9(var uParam0, int iParam1) //Position: 0x1F8 / 504
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x205 / 517
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

void Function_11(var uParam0, int iParam1) //Position: 0x22B / 555
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

void Function_12(var uParam0, int iParam1) //Position: 0x359 / 857
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x373 / 883
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14() //Position: 0x390 / 912
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15(var uParam0, bool bParam1, bool bParam2) //Position: 0x3CF / 975
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_7(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_7(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_16() //Position: 0x3FC / 1020
{
	Function_17(Function_19());
	return;
}

void Function_17(int iParam0) //Position: 0x408 / 1032
{
	if (!Function_18(iParam0))
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

bool Function_18(int iParam0) //Position: 0x435 / 1077
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_19() //Position: 0x44C / 1100
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_20(int iParam0) //Position: 0x466 / 1126
{
	Function_21(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x49F / 1183
{
	Function_6(uParam0, iParam1);
	return;
}

void Function_22() //Position: 0x4AC / 1196
{
	Function_96();
	if (Function_95(1, 1))
	{
		Function_79(StackVal, StackVal, 7320, vLocal_48, 1, 7207);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_74(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_25(4608, 3401);
		Function_23();
	}
	return;
}

void Function_23() //Position: 0x4F7 / 1271
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_24(&Local_12);
	}
	return;
}

void Function_24(int iParam0) //Position: 0x513 / 1299
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

void Function_25(int iParam0, int iParam1) //Position: 0x539 / 1337
{
	Function_26(iParam0, iParam1, 3394);
	return;
}

void Function_26(var uParam0, var uParam1, int iParam2) //Position: 0x54A / 1354
{
	if (Function_8(0x4000000))
	{
		Function_35();
		Function_5(0x4000000, 0, 1);
	}
	if (Function_8(0x10000000))
	{
		Function_35();
		Function_5(0x10000000, 0, 1);
	}
	if (Function_8(2) != Function_8(0x2000000))
	{
		Function_35();
		Function_5(0x2000000, Function_8(2), 1);
	}
	if (Function_34())
	{
		Function_33(!Function_8(16));
	}
	if (Function_8(16))
	{
		Function_27(&uParam0, &uParam1, &iParam2);
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

void Function_27(var uParam0, var uParam1, int iParam2) //Position: 0x6E3 / 1763
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

bool Function_28(bool bParam0, int iParam1, int iParam2) //Position: 0x85B / 2139
{
	var uVar0;
	
	return Function_29(bParam0, iParam1, &uVar0, iParam2);
}

int Function_29(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x86C / 2156
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

bool Function_30(bool bParam0, int iParam1, bool bParam2) //Position: 0x8D1 / 2257
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

var Function_31(int iParam0) //Position: 0x952 / 2386
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

bool Function_32(bool bParam0) //Position: 0xC6B / 3179
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

void Function_33(bool bParam0) //Position: 0xD0C / 3340
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_5(16384, 0, 1);
	return;
}

bool Function_34() //Position: 0xD26 / 3366
{
	return Function_8(32768);
}

void Function_35() //Position: 0xD33 / 3379
{
	Function_5(32768, 1, 0);
	return;
}

int Function_36() //Position: 0xD42 / 3394
{
	return 1;
}

int Function_37(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xD49 / 3401
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_8(4))
	{
		if (Function_43(bParam0, 1, 1))
		{
			if (Function_40(bParam0))
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
	if (Function_40(bParam0))
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

bool Function_38() //Position: 0xE4C / 3660
{
	return (Function_8(4096) || Function_8(4));
}

void Function_39(bool bParam0, bool bParam1) //Position: 0xE5D / 3677
{
	if (Function_8(4))
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

bool Function_40(bool bParam0) //Position: 0xE90 / 3728
{
	if (Function_42(bParam0, 1, 0) != 4294967295 && Function_41() != 4294967295)
	{
		return 0;
	}
	return Function_42(bParam0, 1, 0) != Function_41();
}

int Function_41() //Position: 0xEB8 / 3768
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_42(GET_LOCAL_SLOT(), 1, 0);
}

int Function_42(bool bParam0, bool bParam1, bool bParam2) //Position: 0xECF / 3791
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

bool Function_43(bool bParam0, int iParam1, bool bParam2) //Position: 0xF13 / 3859
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_45(iParam1, bParam2);
	}
	if (!Function_32(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_44(iParam1), 64);
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

var Function_44(int iParam0) //Position: 0xF94 / 3988
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

var Function_45(int iParam0, bool bParam1) //Position: 0x1086 / 4230
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_46(int iParam0, bool bParam1) //Position: 0x10A6 / 4262
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

int Function_47(int iParam0) //Position: 0x1114 / 4372
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_48(int iParam0, int iParam1, int iParam2) //Position: 0x112D / 4397
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_49(int iParam0) //Position: 0x1142 / 4418
{
	return Function_50(0, iParam0);
}

int Function_50(int iParam0, bool bParam1) //Position: 0x114E / 4430
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

var Function_51(int iParam0) //Position: 0x11B5 / 4533
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_52(bool bParam0) //Position: 0x11C5 / 4549
{
	return Function_46(12, bParam0);
}

int Function_53(int iParam0) //Position: 0x11D2 / 4562
{
	return Function_46(11, iParam0);
}

void Function_54(bool bParam0, int iParam1, char* cParam2) //Position: 0x11DF / 4575
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

int Function_55() //Position: 0x1200 / 4608
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

void Function_56() //Position: 0x129C / 4764
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

void Function_57(bool bParam0, bool bParam1) //Position: 0x12C7 / 4807
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_41())
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

void Function_58(int iParam0, int iParam1, bool bParam2) //Position: 0x1366 / 4966
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

struct<16> Function_59(var uParam0, var uParam1) //Position: 0x1459 / 5209
{
	return StackVal, StackVal, StackVal, Function_60(Function_61(uParam0), uParam1);
}

struct<16> Function_60(bool bParam0, bool bParam1) //Position: 0x146B / 5227
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

int Function_61(int iParam0) //Position: 0x14A0 / 5280
{
	if (!Function_62())
	{
		return 0;
	}
	return StackVal;
}

bool Function_62() //Position: 0x14B9 / 5305
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_63(int iParam0) //Position: 0x14C6 / 5318
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_64() //Position: 0x14E2 / 5346
{
	return Function_41() == 4294967295;
}

bool Function_65() //Position: 0x14ED / 5357
{
	return Function_66(2);
}

int Function_66(int iParam0) //Position: 0x14F7 / 5367
{
	return Function_67(&Global_79349, iParam0);
}

int Function_67(var uParam0, int iParam1) //Position: 0x1506 / 5382
{
	return Function_9(uParam0->f_44, iParam1);
}

void Function_68() //Position: 0x1515 / 5397
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

bool Function_69(bool bParam0) //Position: 0x1552 / 5458
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

void Function_70(bool bParam0) //Position: 0x15D3 / 5587
{
	if (bParam0 || Function_8(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_8(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_8(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_8(1048576) || Function_8(4)) || Function_95(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_5(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_71(int iParam0) //Position: 0x165C / 5724
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_72(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1670 / 5744
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

int Function_73(bool bParam0, bool bParam1) //Position: 0x16B5 / 5813
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

void Function_74(vector3 vParam0, float fParam3) //Position: 0x16E9 / 5865
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

int Function_75(bool bParam0) //Position: 0x179C / 6044
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

int Function_76(bool bParam0) //Position: 0x17D7 / 6103
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

void Function_77(bool bParam0) //Position: 0x1825 / 6181
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_78() //Position: 0x1838 / 6200
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_79(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1867 / 6247
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_80(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7106, 1, 125, 0, 0, 0);
	Function_80(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_80(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x18EA / 6378
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_81(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_81(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1935 / 6453
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

var Function_82(float fParam0) //Position: 0x1BB4 / 7092
{
	return (fParam0 * 57.29578f);
}

var Function_83(int iParam0, var uParam1) //Position: 0x1BC2 / 7106
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

var Function_84(int iParam0, var uParam1) //Position: 0x1C27 / 7207
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_sym_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_85() //Position: 0x1C98 / 7320
{
	int iVar0;
	
	iVar0 = Function_91(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_86(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_86(bool bParam0, int iParam1) //Position: 0x1CC5 / 7365
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

bool Function_87(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1DD4 / 7636
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

bool Function_88(int iParam0) //Position: 0x1EFB / 7931
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_89(bool bParam0, int iParam1) //Position: 0x1F0D / 7949
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

var Function_90() //Position: 0x1F69 / 8041
{
	int iVar0;
	
	return iVar0;
}

var Function_91(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1F71 / 8049
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

bool Function_92(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x205F / 8287
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

var Function_93(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x21F0 / 8688
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

var Function_94() //Position: 0x225C / 8796
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_95(bool bParam0, bool bParam1) //Position: 0x2283 / 8835
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_96() //Position: 0x22A3 / 8867
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
		Function_14();
	}
	return;
}

void Function_97(char* cParam0, int iParam1) //Position: 0x2338 / 9016
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

void Function_98(bool bParam0) //Position: 0x23CF / 9167
{
	Function_99(16, bParam0);
	return;
}

void Function_99(int iParam0, bool bParam1) //Position: 0x23DC / 9180
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

void Function_100(var uParam0) //Position: 0x2404 / 9220
{
	Function_99(8, uParam0);
	return;
}

bool Function_101() //Position: 0x2411 / 9233
{
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(18, 30, 0));
	Function_129(0, 0);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_127();
	ENABLE_CHILD_SECTOR("mp_wld_base03x");
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_125(512);
	Function_124(Global_83864.f_1284);
	Function_17(977);
	Function_15(Global_83864.f_1284, 0, 1);
	if (!Function_119(Local_51))
	{
		return 0;
	}
	Function_112(&Global_83591 + 276, 0);
	Function_110(&Global_83591, 1, 22, 1, 1);
	Function_110(&Global_83591, 2, 6, 10, 1);
	Function_110(&Global_83591, 3, 10, 10, 1);
	Function_105(&Global_83591, 1, 20, 3, 1);
	Function_105(&Global_83591, 2, 6, 3, 1);
	Function_105(&Global_83591, 3, 17, 4, 1);
	Function_105(&Global_83591, 4, 11, 4, 1);
	Function_104(&Global_83591);
	Function_103(&Global_83591 + 276, 4);
	Function_102(0, 8);
	Function_102(1, 1);
	return 1;
}

void Function_102(int iParam0, int iParam1) //Position: 0x24F1 / 9457
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_103(int iParam0, int iParam1) //Position: 0x24FF / 9471
{
	(iParam0 + 228)->f_220 = 0;
	Function_7(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_104(int iParam0) //Position: 0x2517 / 9495
{
	iParam0->f_844 = 0;
	return;
}

void Function_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2523 / 9507
{
	Function_106(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_106(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x253B / 9531
{
	Function_107(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_107(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2552 / 9554
{
	if (!Function_109(iParam1))
	{
		return;
	}
	Function_108(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_108(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2575 / 9589
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

bool Function_109(int iParam0) //Position: 0x259F / 9631
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x25AF / 9647
{
	Function_111(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x25C7 / 9671
{
	Function_107(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_112(int iParam0, bool bParam1) //Position: 0x25DC / 9692
{
	Function_116(iParam0);
	Function_116(iParam0 + 228);
	if (bParam1)
	{
		Function_113(iParam0);
	}
	return;
}

void Function_113(int iParam0) //Position: 0x25F8 / 9720
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_114(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_114(var uParam0, int iParam1) //Position: 0x2618 / 9752
{
	Function_115(uParam0, iParam1, 0);
	return;
}

void Function_115(int iParam0, int iParam1, int iParam2) //Position: 0x2626 / 9766
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_116(int iParam0) //Position: 0x2637 / 9783
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_118(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_117(iParam0, 0.0f);
	return;
}

void Function_117(var uParam0, int iParam1) //Position: 0x2664 / 9828
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_118(int iParam0) //Position: 0x2670 / 9840
{
	Function_108(iParam0, 4294967295, 0, 1);
	return;
}

bool Function_119(int iParam0) //Position: 0x267E / 9854
{
	Function_123(iParam0);
	if (Function_122())
	{
		Function_103(&Global_83591 + 276, 2);
	}
	Function_120();
	vLocal_48 = { StackVal, StackVal, Function_120() };
	return 1;
}

vector3 Function_120() //Position: 0x26A2 / 9890
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_121();
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

var Function_121() //Position: 0x26EA / 9962
{
	return Global_83591.f_140;
}

bool Function_122() //Position: 0x26F6 / 9974
{
	return Function_9(Global_79962, 1024);
}

void Function_123(int iParam0) //Position: 0x2706 / 9990
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_124(int iParam0) //Position: 0x2714 / 10004
{
	if (!Function_18(iParam0))
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

void Function_125(int iParam0) //Position: 0x2743 / 10051
{
	Function_126(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_126(var uParam0, int iParam1) //Position: 0x279C / 10140
{
	Function_7(uParam0, iParam1);
	return;
}

void Function_127() //Position: 0x27A9 / 10153
{
	var uVar0;
	
	Function_128(4, 1);
	uVar0 = uVar0;
	Local_51 = CREATE_LAYOUT("CTF_W3_layout");
	Local_51.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_51, "playablespace", 2, -4694.522f, 27.1563f, 3703.61f, 0.0f, 31.30436f, 0.0f, 374.0028f, 149.5109f, 390.635f);
	Local_51.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_A", 3, -4784.264f, 7.86674f, 3734.016f, 0.0f, 57.93988f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_B", 3, -4625.929f, 2.75491f, 3760.43f, 0.0f, -433.2614f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A0", 3, -4808.583f, 7.68364f, 3720.416f, 0.5122566f, -66.69447f, 2.530928f, 1.0f, 1.0f, 1.0f);
	Local_51.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A1", 3, -4788.496f, 17.93942f, 3685.867f, 0.0f, 60.35131f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A2", 3, -4796.117f, 5.989085f, 3747.172f, 0.0f, 104.4092f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A3", 3, -4784.56f, 9.012883f, 3714.475f, 0.0f, 45.70412f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A4", 3, -4788.02f, 3.020419f, 3801.314f, 0.0f, 51.22998f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A5", 3, -4727.134f, 22.79074f, 3716.253f, 0.0f, -614.1061f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A6", 3, -4762.791f, 5.564948f, 3787.148f, 0.0f, 19.81328f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A7", 3, -4732.634f, 24.12945f, 3695.908f, 0.0f, -304.8735f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B0", 3, -4608.0f, 2.85172f, 3754.641f, 0.0f, -77.695f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B1", 3, -4612.045f, 25.86038f, 3713.775f, 24.47651f, -92.85612f, -24.00811f, 1.0f, 1.0f, 1.0f);
	Local_51.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B2", 3, -4630.636f, 3.670844f, 3780.286f, 0.0f, -57.59087f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B3", 3, -4641.669f, 3.632073f, 3751.767f, 0.0f, -395.8254f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B4", 3, -4670.994f, 4.612081f, 3819.842f, 0.0f, -417.7707f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B5", 3, -4675.953f, 24.99919f, 3720.205f, 0.0f, -121.976f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B6", 3, -4712.83f, 9.868514f, 3796.011f, 0.0f, -121.847f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B7", 3, -4672.02f, 26.1765f, 3700.011f, 0.0f, -73.64684f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_51 + 80) = { -4708.132f, 25.1657f, 3709.539f };
	*(&Local_51 + 80 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_104 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_A", -4708.132f, 25.1657f, 3709.539f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 108) = { -4692.243f, 25.48273f, 3709.764f };
	*(&Local_51 + 108 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_132 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_B", -4692.243f, 25.48273f, 3709.764f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 136) = { -4700.112f, 25.40348f, 3709.278f };
	*(&Local_51 + 136 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_160 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_0", -4700.112f, 25.40348f, 3709.278f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 164) = { -4719.854f, 37.57602f, 3751.649f };
	*(&Local_51 + 164 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_188 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_1", -4719.854f, 37.57602f, 3751.649f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 192) = { -4742.182f, 2.758449f, 3821.588f };
	*(&Local_51 + 192 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_216 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_2", -4742.182f, 2.758449f, 3821.588f, 0.0f, 0.0f, 0.0f);
	return;
}

void Function_128(int iParam0, int iParam1) //Position: 0x2D23 / 11555
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

void Function_129(var uParam0, int iParam1) //Position: 0x2D6C / 11628
{
	Function_134(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_130(StackVal, iParam1);
	}
	return;
}

void Function_130(int iParam0, int iParam1) //Position: 0x2D9D / 11677
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_134(iParam0);
	Function_133(iVar0);
	PRINTNL();
	Function_131(iParam0, iVar0, iParam1);
	return;
}

void Function_131(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DC2 / 11714
{
	int iVar0;
	
	Function_134(iParam0);
	Function_133(bParam1);
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
	Function_132();
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

void Function_132() //Position: 0x2F3B / 12091
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_133(bool bParam0) //Position: 0x2F47 / 12103
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

void Function_134(int iParam0) //Position: 0x2F8D / 12173
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

void Function_135() //Position: 0x2FD3 / 12243
{
	while (!IS_EXITFLAG_SET())
	{
		Function_25(4608, 3401);
		WAIT(0);
	}
	return;
}

bool Function_136() //Position: 0x2FF0 / 12272
{
	return Function_137(2);
}

bool Function_137(int iParam0) //Position: 0x2FFA / 12282
{
	return Function_9(StackVal, iParam0);
}

void Function_138() //Position: 0x300D / 12301
{
	if (Function_136())
	{
		return;
	}
	Function_148();
	Function_146(&bLocal_39, "MP_CTF", 10, 0);
	Function_146(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_140(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_96();
	Function_139();
	return;
}

void Function_139() //Position: 0x3071 / 12401
{
	while (!Function_137(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_140(int iParam0) //Position: 0x308C / 12428
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_145();
	iVar1 = 0;
	if (!Function_13(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_144(iParam0[iVar03], 8);
		}
		else if (Function_143())
		{
			iVar1 = 1;
			Function_144(iParam0[iVar03], 8);
		}
		Function_144(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_13(iParam0[03], 8) || iVar1));
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
				Function_144(iParam0[iVar03], 1);
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
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
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
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
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
	Function_141();
	return 1;
}

void Function_141() //Position: 0x3407 / 13319
{
	if (!Function_142(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_142(int iParam0) //Position: 0x3447 / 13383
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_143() //Position: 0x3463 / 13411
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

void Function_144(var uParam0, int iParam1) //Position: 0x348E / 13454
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_145() //Position: 0x349F / 13471
{
	if (!Function_142(128))
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

var Function_146(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x34E1 / 13537
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_147(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_144(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_147(var uParam0, int iParam1, int iParam2) //Position: 0x3519 / 13593
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_13(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_144(uParam0[iVar03], 4);
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

void Function_148() //Position: 0x35DD / 13789
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

