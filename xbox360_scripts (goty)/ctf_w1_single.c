//Decompiled with MagicRDR v1.0
//Function Count : 155
//Statics Count : 151
//Natives Count : 154
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
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 5;
	var uLocal_125 = -1;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
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
	var uLocal_150 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_144();
	if (Function_143())
	{
		Function_141();
	}
	else
	{
		if (Function_112())
		{
			Function_111(1);
		}
		else
		{
			Function_110(1);
		}
		Function_109(0, 5);
		iVar0 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_108(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					Function_107(64, 0);
					iVar0 = 10;
				}
			}
			Function_91(&iLocal_122, 0.15f, 0.7f, 12, 0.0f, 0.0f, 0.0f, 0.0f);
			Function_15();
			WAIT(0);
		}
	}
	Function_2();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x82 / 130
{
	RELEASE_LAYOUT_REF(Local_51);
	return;
}

void Function_2() //Position: 0x8D / 141
{
	Function_14();
	Function_10(&bLocal_39);
	Function_3();
	return;
}

void Function_3() //Position: 0x9E / 158
{
	Function_4();
	return;
}

void Function_4() //Position: 0xA7 / 167
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x1B0 / 432
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

void Function_6(var uParam0, int iParam1) //Position: 0x1D8 / 472
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x1EB / 491
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x1FA / 506
{
	return Function_9(Global_76905.f_132, iParam0);
}

int Function_9(var uParam0, int iParam1) //Position: 0x20B / 523
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x218 / 536
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

void Function_11(var uParam0, int iParam1) //Position: 0x23E / 574
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

void Function_12(var uParam0, int iParam1) //Position: 0x36C / 876
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x386 / 902
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14() //Position: 0x3A3 / 931
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15() //Position: 0x3E2 / 994
{
	Function_89();
	if (Function_88(1, 1))
	{
		Function_72(StackVal, StackVal, 7074, vLocal_48, 1, 6961);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_67(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_18(4362, 3199);
		Function_16();
	}
	return;
}

void Function_16() //Position: 0x42D / 1069
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_17(&Local_12);
	}
	return;
}

void Function_17(int iParam0) //Position: 0x449 / 1097
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

void Function_18(int iParam0, int iParam1) //Position: 0x46F / 1135
{
	Function_19(iParam0, iParam1, 3192);
	return;
}

void Function_19(var uParam0, var uParam1, int iParam2) //Position: 0x480 / 1152
{
	if (Function_8(0x4000000))
	{
		Function_28();
		Function_5(0x4000000, 0, 1);
	}
	if (Function_8(0x10000000))
	{
		Function_28();
		Function_5(0x10000000, 0, 1);
	}
	if (Function_8(2) != Function_8(0x2000000))
	{
		Function_28();
		Function_5(0x2000000, Function_8(2), 1);
	}
	if (Function_27())
	{
		Function_26(!Function_8(16));
	}
	if (Function_8(16))
	{
		Function_20(&uParam0, &uParam1, &iParam2);
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

void Function_20(var uParam0, var uParam1, int iParam2) //Position: 0x619 / 1561
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
			if (!Function_25(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_23(bVar1, 2048, 1))
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
				if (Function_21(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_21(bVar1, (4294966296 - bVar1), 1))
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

bool Function_21(bool bParam0, int iParam1, int iParam2) //Position: 0x791 / 1937
{
	var uVar0;
	
	return Function_22(bParam0, iParam1, &uVar0, iParam2);
}

int Function_22(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x7A2 / 1954
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

bool Function_23(bool bParam0, int iParam1, bool bParam2) //Position: 0x807 / 2055
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_88(iParam1, bParam2);
	}
	if (!Function_25(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_24(iParam1), 64);
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

var Function_24(int iParam0) //Position: 0x888 / 2184
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

bool Function_25(bool bParam0) //Position: 0xBA1 / 2977
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

void Function_26(bool bParam0) //Position: 0xC42 / 3138
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_5(16384, 0, 1);
	return;
}

bool Function_27() //Position: 0xC5C / 3164
{
	return Function_8(32768);
}

void Function_28() //Position: 0xC69 / 3177
{
	Function_5(32768, 1, 0);
	return;
}

int Function_29() //Position: 0xC78 / 3192
{
	return 1;
}

int Function_30(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xC7F / 3199
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
	iVar4 = Function_41(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_21(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_39(34, bParam0));
		bVar0++;
	}
	if (Function_36(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_8(4))
	{
		if (Function_33(bParam0, 1, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "<SWAG_Y_RET>");
		}
	}
	else
	{
		Function_32(bVar0, bParam0);
	}
	if (Function_27() && Function_31())
	{
	}
	return 0;
}

bool Function_31() //Position: 0xD56 / 3414
{
	return (Function_8(4096) || Function_8(4));
}

void Function_32(bool bParam0, bool bParam1) //Position: 0xD67 / 3431
{
	if (Function_8(4))
	{
		if (Function_23(bParam1, 1024, 1))
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

bool Function_33(bool bParam0, int iParam1, bool bParam2) //Position: 0xD9A / 3482
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_35(iParam1, bParam2);
	}
	if (!Function_25(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_34(iParam1), 64);
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

var Function_34(int iParam0) //Position: 0xE1B / 3611
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

var Function_35(int iParam0, bool bParam1) //Position: 0xF0D / 3853
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_36(bool bParam0) //Position: 0xF2D / 3885
{
	if (Function_38(bParam0, 1, 0) != 4294967295 && Function_37() != 4294967295)
	{
		return 0;
	}
	return Function_38(bParam0, 1, 0) != Function_37();
}

int Function_37() //Position: 0xF55 / 3925
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_38(GET_LOCAL_SLOT(), 1, 0);
}

int Function_38(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF6C / 3948
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_25(bParam0))
			{
				if (!Function_23(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_39(int iParam0, bool bParam1) //Position: 0xFB0 / 4016
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_40(iParam0);
	}
	if (!Function_25(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_40(int iParam0) //Position: 0x101E / 4126
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_41(int iParam0, int iParam1, int iParam2) //Position: 0x1037 / 4151
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_42(bool bParam0) //Position: 0x104C / 4172
{
	return Function_43(0, bParam0);
}

int Function_43(int iParam0, bool bParam1) //Position: 0x1058 / 4184
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_44(iParam0);
	}
	if (!Function_25(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_44(int iParam0) //Position: 0x10BF / 4287
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_45(bool bParam0) //Position: 0x10CF / 4303
{
	return Function_39(12, bParam0);
}

int Function_46(int iParam0) //Position: 0x10DC / 4316
{
	return Function_39(11, iParam0);
}

void Function_47(bool bParam0, int iParam1, char* cParam2) //Position: 0x10E9 / 4329
{
	if (bParam0)
	{
		if (Function_27())
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

int Function_48() //Position: 0x110A / 4362
{
	if (!Function_62(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_61();
	Function_49();
	return 1;
}

void Function_49() //Position: 0x11A6 / 4518
{
	if (Function_58())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_57())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_50(0, 0);
		Function_50(1, 0);
	}
	return;
}

void Function_50(bool bParam0, bool bParam1) //Position: 0x11D1 / 4561
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_37())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_56(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_51(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_51(int iParam0, int iParam1, bool bParam2) //Position: 0x1270 / 4720
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_27())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_52(iParam1, 0) };
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
		if (Function_31())
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

struct<16> Function_52(var uParam0, var uParam1) //Position: 0x1363 / 4963
{
	return StackVal, StackVal, StackVal, Function_53(Function_54(uParam0), uParam1);
}

struct<16> Function_53(bool bParam0, bool bParam1) //Position: 0x1375 / 4981
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

int Function_54(int iParam0) //Position: 0x13AA / 5034
{
	if (!Function_55())
	{
		return 0;
	}
	return StackVal;
}

bool Function_55() //Position: 0x13C3 / 5059
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_56(int iParam0) //Position: 0x13D0 / 5072
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_57() //Position: 0x13EC / 5100
{
	return Function_37() == 4294967295;
}

bool Function_58() //Position: 0x13F7 / 5111
{
	return Function_59(2);
}

int Function_59(int iParam0) //Position: 0x1401 / 5121
{
	return Function_60(&Global_79349, iParam0);
}

int Function_60(var uParam0, int iParam1) //Position: 0x1410 / 5136
{
	return Function_9(uParam0->f_44, iParam1);
}

void Function_61() //Position: 0x141F / 5151
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

bool Function_62(bool bParam0) //Position: 0x145C / 5212
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_27() || Function_66(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_27())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_63(Function_27());
	return 1;
}

void Function_63(bool bParam0) //Position: 0x14DD / 5341
{
	if (bParam0 || Function_8(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_8(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_8(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_8(1048576) || Function_8(4)) || Function_88(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_5(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_64(int iParam0) //Position: 0x1566 / 5478
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_65(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x157A / 5498
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

int Function_66(bool bParam0, bool bParam1) //Position: 0x15BF / 5567
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

void Function_67(vector3 vParam0, float fParam3) //Position: 0x15F3 / 5619
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_71(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_71(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_68(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_68(bool bParam0) //Position: 0x16A6 / 5798
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
	return Function_69(bVar0);
}

int Function_69(bool bParam0) //Position: 0x16E1 / 5857
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
	Function_70(bVar0);
	return bVar0;
}

void Function_70(bool bParam0) //Position: 0x172F / 5935
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_71() //Position: 0x1742 / 5954
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_72(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1771 / 6001
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_73(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 6860, 1, 125, 0, 0, 0);
	Function_73(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_73(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x17F4 / 6132
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_74(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_74(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x183F / 6207
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
			Function_17(iParam0);
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
					Function_17(iParam0);
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
			fVar14 = Function_75(iParam0->f_36);
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

var Function_75(float fParam0) //Position: 0x1ABE / 6846
{
	return (fParam0 * 57.29578f);
}

var Function_76(int iParam0, var uParam1) //Position: 0x1ACC / 6860
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_77(int iParam0, var uParam1) //Position: 0x1B31 / 6961
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_one_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_78() //Position: 0x1BA2 / 7074
{
	int iVar0;
	
	iVar0 = Function_84(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_79(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_79(bool bParam0, int iParam1) //Position: 0x1BCF / 7119
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_83(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_82((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_82((*iParam1)[iVar202], &iVar21))
		{
			if (Function_80((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_80(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1CDE / 7390
{
	float fVar0;
	
	if (!Function_81(bParam0))
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

bool Function_81(int iParam0) //Position: 0x1E05 / 7685
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_82(bool bParam0, int iParam1) //Position: 0x1E17 / 7703
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

var Function_83() //Position: 0x1E73 / 7795
{
	int iVar0;
	
	return iVar0;
}

var Function_84(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1E7B / 7803
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_86(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_82((*uParam3)[iVar12], &iVar2))
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
		if (Function_82((*uParam3)[iVar12], &iVar2))
		{
			if (Function_85((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_85(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1F69 / 8041
{
	if (!Function_81(bParam0))
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

var Function_86(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x20FA / 8442
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_87()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_87() //Position: 0x2166 / 8550
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_88(bool bParam0, bool bParam1) //Position: 0x218D / 8589
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_89() //Position: 0x21AD / 8621
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
						Function_90("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_90("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_90("CTF_mul_help", 4294967295);
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

void Function_90(char* cParam0, bool bParam1) //Position: 0x2242 / 8770
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

void Function_91(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x22D9 / 8921
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

void Function_92(int iParam0, var uParam1, int iParam2) //Position: 0x237C / 9084
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

void Function_93(int iParam0) //Position: 0x23A1 / 9121
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_94(int iParam0) //Position: 0x23B6 / 9142
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x23CB / 9163
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

void Function_96(int iParam0, bool bParam1, bool bParam2) //Position: 0x243D / 9277
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

void Function_97() //Position: 0x25B6 / 9654
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_98(bool bParam0) //Position: 0x25C2 / 9666
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

void Function_99(int iParam0, int iParam1) //Position: 0x2608 / 9736
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_100(iParam0);
	Function_98(iVar0);
	PRINTNL();
	Function_96(iParam0, iVar0, iParam1);
	return;
}

void Function_100(int iParam0) //Position: 0x262D / 9773
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

float Function_101(int iParam0) //Position: 0x2673 / 9843
{
	return -Function_102(iParam0);
}

float Function_102(int iParam0) //Position: 0x267F / 9855
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

void Function_103() //Position: 0x2750 / 10064
{
	if (!Function_106())
	{
	}
	return;
}

bool Function_104(int iParam0) //Position: 0x275D / 10077
{
	return Function_9(*iParam0, 2);
}

bool Function_105(int iParam0) //Position: 0x276A / 10090
{
	return Function_9(*iParam0, 1);
}

bool Function_106() //Position: 0x2777 / 10103
{
	return NET_IS_IN_SESSION();
}

void Function_107(int iParam0, bool bParam1) //Position: 0x2780 / 10112
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

bool Function_108(int iParam0) //Position: 0x27A8 / 10152
{
	return Function_9(StackVal, iParam0);
}

void Function_109(int iParam0, int iParam1) //Position: 0x27BB / 10171
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_110(bool bParam0) //Position: 0x27DC / 10204
{
	Function_107(16, bParam0);
	return;
}

void Function_111(var uParam0) //Position: 0x27E9 / 10217
{
	Function_107(8, uParam0);
	return;
}

bool Function_112() //Position: 0x27F6 / 10230
{
	Function_140(&iLocal_122, 0, 9, 30, 0, 0, 1);
	Function_140(&iLocal_122, 1, 17, 30, 2, 2, 1);
	Function_140(&iLocal_122, 2, 11, 0, 1, 2, 2);
	Function_140(&iLocal_122, 3, 5, 0, 1, 1, 0);
	Function_140(&iLocal_122, 4, 23, 0, 1, 0, 1);
	Function_137(&iLocal_122);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_135();
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_130(Local_51))
	{
		return 0;
	}
	Function_123(&Global_83591 + 276, 0);
	Function_121(&Global_83591, 1, 22, 1, 1);
	Function_121(&Global_83591, 2, 5, 10, 1);
	Function_121(&Global_83591, 3, 16, 15, 1);
	Function_121(&Global_83591, 4, 29, 15, 1);
	Function_116(&Global_83591, 1, 20, 3, 1);
	Function_116(&Global_83591, 2, 6, 3, 1);
	Function_116(&Global_83591, 3, 17, 4, 1);
	Function_116(&Global_83591, 4, 10, 2, 1);
	Function_115(&Global_83591);
	Function_114(&Global_83591 + 276, 4);
	Function_113(0, 6);
	Function_113(1, 1);
	return 1;
}

void Function_113(int iParam0, int iParam1) //Position: 0x28DC / 10460
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x28EA / 10474
{
	(iParam0 + 228)->f_220 = 0;
	Function_7(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_115(int iParam0) //Position: 0x2902 / 10498
{
	iParam0->f_844 = 0;
	return;
}

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x290E / 10510
{
	Function_117(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_117(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2926 / 10534
{
	Function_118(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_118(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x293D / 10557
{
	if (!Function_120(iParam1))
	{
		return;
	}
	Function_119(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_119(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2960 / 10592
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

bool Function_120(int iParam0) //Position: 0x298A / 10634
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x299A / 10650
{
	Function_122(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x29B2 / 10674
{
	Function_118(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_123(int iParam0, bool bParam1) //Position: 0x29C7 / 10695
{
	Function_127(iParam0);
	Function_127(iParam0 + 228);
	if (bParam1)
	{
		Function_124(iParam0);
	}
	return;
}

void Function_124(int iParam0) //Position: 0x29E3 / 10723
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_125(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_125(var uParam0, int iParam1) //Position: 0x2A03 / 10755
{
	Function_126(uParam0, iParam1, 0);
	return;
}

void Function_126(int iParam0, int iParam1, int iParam2) //Position: 0x2A11 / 10769
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_127(int iParam0) //Position: 0x2A22 / 10786
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_129(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_128(iParam0, 0.0f);
	return;
}

void Function_128(var uParam0, int iParam1) //Position: 0x2A4F / 10831
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_129(int iParam0) //Position: 0x2A5B / 10843
{
	Function_119(iParam0, 4294967295, 0, 1);
	return;
}

bool Function_130(int iParam0) //Position: 0x2A69 / 10857
{
	Function_134(iParam0);
	if (Function_133())
	{
		Function_114(&Global_83591 + 276, 2);
	}
	Function_131();
	vLocal_48 = { StackVal, StackVal, Function_131() };
	return 1;
}

vector3 Function_131() //Position: 0x2A8D / 10893
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_132();
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

var Function_132() //Position: 0x2AD5 / 10965
{
	return Global_83591.f_140;
}

bool Function_133() //Position: 0x2AE1 / 10977
{
	return Function_9(Global_79962, 1024);
}

void Function_134(var uParam0) //Position: 0x2AF1 / 10993
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_135() //Position: 0x2AFF / 11007
{
	var uVar0;
	
	Function_136(4, 1);
	uVar0 = uVar0;
	Local_51 = CREATE_LAYOUT("CTF_W1_layout");
	Local_51.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_51, "playablespace", 2, -179.9999f, 72.28235f, 2368f, 0.0f, 0.0f, 0.0f, 263.3884f, 56.151f, 195.6908f);
	Local_51.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_A", 3, -116.4776f, 73.31632f, 2380.212f, 0.0f, -96.62164f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_B", 3, -267.9999f, 74.53131f, 2368f, 0.0f, -279.1931f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A0", 3, -142.6706f, 72.49208f, 2443.844f, -0.3072416f, -131.2713f, 3.232313f, 1.0f, 1.0f, 1.0f);
	Local_51.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A1", 3, -126.0177f, 72.57052f, 2426.018f, 0.0f, 252.2395f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A2", 3, -109.6486f, 74.2888f, 2397.649f, 0.0f, 223.5973f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A3", 3, -99.17336f, 73.0788f, 2375.174f, 0.0f, 279.4048f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A4", 3, -87.55994f, 74.89173f, 2338.921f, 0.0f, 278.2899f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A5", 3, -92.24354f, 75.0791f, 2315.045f, 0.0f, -60.55194f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A6", 3, -138.3715f, 74.29022f, 2334.372f, 0.0f, -75.98244f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A7", 3, -162.3491f, 74.29022f, 2390.349f, 0.0f, -99.3815f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A8", 3, -209.2902f, 71.83298f, 2451.623f, 0.0f, -192.5708f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B0", 3, -234.6428f, 72.24386f, 2314.209f, 0.0f, 68.90094f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B1", 3, -256.354f, 74.13859f, 2327.983f, 0.0f, 59.90348f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B2", 3, -275.9999f, 75.29413f, 2356.0f, 0.0f, 71.26437f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B3", 3, -283.9999f, 75.29413f, 2372.0f, 0.0f, -271.2978f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B4", 3, -275.9999f, 72.28235f, 2408.0f, 0.0f, -260.9861f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B5", 3, -259.9999f, 72.28235f, 2432.0f, 0.0f, 96.85114f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B6", 3, -192.8701f, 73.62467f, 2330.203f, 0.0f, 67.07783f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B7", 3, -229.9667f, 73.28625f, 2401.967f, 0.0f, 88.76688f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B8", 3, -128.3707f, 80.88659f, 2243.999f, 0.0f, -3.281874f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_51 + 88) = { -183.9999f, 72.20656f, 2376.555f };
	*(&Local_51 + 88 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_112 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_A", -183.9999f, 72.20656f, 2376.555f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 116) = { -195.9999f, 72.28235f, 2380.0f };
	*(&Local_51 + 116 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_140 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_B", -195.9999f, 72.28235f, 2380.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 144) = { -141.3191f, 74.65159f, 2293.313f };
	*(&Local_51 + 144 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_168 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_0", -141.3191f, 74.65159f, 2293.313f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 172) = { -167.7773f, 72.29002f, 2340.872f };
	*(&Local_51 + 172 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_196 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_1", -167.7773f, 72.29002f, 2340.872f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 200) = { -179.9999f, 72.28235f, 2368f };
	*(&Local_51 + 200 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_224 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_2", -179.9999f, 72.28235f, 2368f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 228) = { -200.7154f, 72.28235f, 2392.716f };
	*(&Local_51 + 228 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_252 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_3", -200.7154f, 72.28235f, 2392.716f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 256) = { -199.9999f, 72.28235f, 2428.0f };
	*(&Local_51 + 256 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_280 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_4", -199.9999f, 72.28235f, 2428.0f, 0.0f, 0.0f, 0.0f);
	return;
}

void Function_136(int iParam0, int iParam1) //Position: 0x315C / 12636
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

void Function_137(int iParam0) //Position: 0x31A5 / 12709
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_139("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_138(StackVal, 0);
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x3217 / 12823
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

bool Function_139(char* cParam0) //Position: 0x3248 / 12872
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x3267 / 12903
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_141() //Position: 0x32A9 / 12969
{
	while (!IS_EXITFLAG_SET())
	{
		Function_18(4362, 12999);
		WAIT(0);
	}
	return;
}

int Function_142(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x32C7 / 12999
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_47(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_46(bParam0);
	bVar2 = Function_45(bParam0);
	bVar3 = Function_42(bParam0);
	iVar4 = Function_41(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_21(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_39(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_8(4))
	{
		if (Function_33(bParam0, 1, 1))
		{
			if (Function_36(bParam0))
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
		Function_32(bVar0, bParam0);
	}
	if (Function_36(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_27() && Function_31())
	{
	}
	return 0;
}

bool Function_143() //Position: 0x33CA / 13258
{
	return Function_108(2);
}

void Function_144() //Position: 0x33D4 / 13268
{
	if (Function_143())
	{
		return;
	}
	Function_154();
	Function_152(&bLocal_39, "MP_CTF", 10, 0);
	Function_152(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_146(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_89();
	Function_145();
	return;
}

void Function_145() //Position: 0x3438 / 13368
{
	while (!Function_108(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_146(int iParam0) //Position: 0x3453 / 13395
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_151();
	iVar1 = 0;
	if (!Function_13(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_150(iParam0[iVar03], 8);
		}
		else if (Function_149())
		{
			iVar1 = 1;
			Function_150(iParam0[iVar03], 8);
		}
		Function_150(iParam0[iVar03], 16);
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
				Function_150(iParam0[iVar03], 1);
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
							Function_150(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_150(iParam0[iVar03], 2);
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
							Function_150(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_150(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_150(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_150(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_150(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_150(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_150(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_150(iParam0[iVar03], 2);
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
	Function_147();
	return 1;
}

void Function_147() //Position: 0x37CE / 14286
{
	if (!Function_148(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_148(int iParam0) //Position: 0x380E / 14350
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x382A / 14378
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

void Function_150(var uParam0, int iParam1) //Position: 0x3855 / 14421
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_151() //Position: 0x3866 / 14438
{
	if (!Function_148(128))
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

var Function_152(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x38A8 / 14504
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_153(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_150(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_153(var uParam0, int iParam1, int iParam2) //Position: 0x38E0 / 14560
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_13(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_150(uParam0[iVar03], 4);
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

void Function_154() //Position: 0x39A4 / 14756
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

