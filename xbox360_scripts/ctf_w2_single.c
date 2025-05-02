//Decompiled with MagicRDR v1.0
//Function Count : 155
//Statics Count : 159
//Natives Count : 157
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
	struct<105> Local_11 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 5;
	var uLocal_133 = -1;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = -1;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = -1;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = -1;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = -1;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	fLocal_10 = 1.0f;
	Function_144();
	if (Function_142())
	{
		Function_140();
	}
	else
	{
		if (Function_111())
		{
			Function_110(1);
		}
		else
		{
			Function_108(1);
		}
		Function_107(0, 5);
		while (!IS_EXITFLAG_SET())
		{
			Function_91(&iLocal_130, 0,1f, 0,7f, 12, 1.0f, 1.0f, 1.0f, 0.0f);
			Function_15();
			WAIT(false);
		}
	}
	Function_6();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x5D / 93
{
	Function_2(&Local_50 + 4);
	RELEASE_LAYOUT_REF(Local_50);
	return;
}

void Function_2(int iParam0) //Position: 0x6F / 111
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

void Function_3(var uParam0, int iParam1) //Position: 0x95 / 149
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

void Function_4(var uParam0, int iParam1) //Position: 0x1C3 / 451
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x1DD / 477
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x1FA / 506
{
	Function_14();
	Function_2(&bLocal_38);
	Function_7();
	return;
}

void Function_7() //Position: 0x20B / 523
{
	Function_8();
	return;
}

void Function_8() //Position: 0x214 / 532
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x31D / 797
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

void Function_10(var uParam0, int iParam1) //Position: 0x345 / 837
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x358 / 856
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(bool bParam0) //Position: 0x367 / 871
{
	return Function_13(Global_76905.f_132, bParam0);
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x378 / 888
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x385 / 901
{
	if (iLocal_45)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_45 = 0;
	}
	return;
}

void Function_15() //Position: 0x3C4 / 964
{
	Function_89();
	if (Function_88(1, 1))
	{
		Function_72(StackVal, StackVal, 6801, vLocal_47, 1, 6688);
	}
	else
	{
		if (!iLocal_46)
		{
			iLocal_46 = 1;
			Function_67(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_18(4089, 3025);
		Function_16();
	}
	return;
}

void Function_16() //Position: 0x40F / 1039
{
	if (IS_OBJECT_VALID(Local_11.f_104))
	{
		DESTROY_OBJECT(Local_11.f_104);
		Function_17(&Local_11);
	}
	return;
}

void Function_17(int iParam0) //Position: 0x42B / 1067
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

void Function_18(int iParam0, int iParam1) //Position: 0x451 / 1105
{
	Function_19(iParam0, iParam1, 3018);
	return;
}

void Function_19(var uParam0, var uParam1, int iParam2) //Position: 0x462 / 1122
{
	if (Function_12(0x4000000))
	{
		Function_28();
		Function_9(0x4000000, 0, 1);
	}
	if (Function_12(0x10000000))
	{
		Function_28();
		Function_9(0x10000000, 0, 1);
	}
	if (Function_12(2) != Function_12(0x2000000))
	{
		Function_28();
		Function_9(0x2000000, Function_12(2), 1);
	}
	if (Function_27())
	{
		Function_26(!Function_12(16));
	}
	if (Function_12(16))
	{
		Function_20(&uParam0, &uParam1, &iParam2);
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

void Function_20(var uParam0, var uParam1, int iParam2) //Position: 0x5FB / 1531
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

bool Function_21(bool bParam0, int iParam1, int iParam2) //Position: 0x773 / 1907
{
	var uVar0;
	
	return Function_22(bParam0, iParam1, &uVar0, iParam2);
}

int Function_22(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x784 / 1924
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

bool Function_23(bool bParam0, int iParam1, bool bParam2) //Position: 0x7E9 / 2025
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

var Function_24(int iParam0) //Position: 0x86A / 2154
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

bool Function_25(bool bParam0) //Position: 0xAF3 / 2803
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

void Function_26(bool bParam0) //Position: 0xB94 / 2964
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_9(16384, 0, 1);
	return;
}

bool Function_27() //Position: 0xBAE / 2990
{
	return Function_12(32768);
}

void Function_28() //Position: 0xBBB / 3003
{
	Function_9(32768, 1, 0);
	return;
}

int Function_29() //Position: 0xBCA / 3018
{
	return 1;
}

int Function_30(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xBD1 / 3025
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
	if (!Function_12(4))
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

bool Function_31() //Position: 0xCA8 / 3240
{
	return (Function_12(4096) || Function_12(4));
}

void Function_32(bool bParam0, bool bParam1) //Position: 0xCB9 / 3257
{
	if (Function_12(4))
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

bool Function_33(bool bParam0, int iParam1, bool bParam2) //Position: 0xCEC / 3308
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

var Function_34(int iParam0) //Position: 0xD6D / 3437
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HAD_FLAG";
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

var Function_35(int iParam0, bool bParam1) //Position: 0xDFC / 3580
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_36(bool bParam0) //Position: 0xE1C / 3612
{
	if (Function_38(bParam0, 1, 0) != 4294967295 && Function_37() != 4294967295)
	{
		return 0;
	}
	return Function_38(bParam0, 1, 0) != Function_37();
}

int Function_37() //Position: 0xE44 / 3652
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_38(GET_LOCAL_SLOT(), 1, 0);
}

int Function_38(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE5B / 3675
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

int Function_39(int iParam0, bool bParam1) //Position: 0xE9F / 3743
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

int Function_40(int iParam0) //Position: 0xF0D / 3853
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_41(int iParam0, int iParam1, int iParam2) //Position: 0xF26 / 3878
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_42(bool bParam0) //Position: 0xF3B / 3899
{
	return Function_43(0, bParam0);
}

int Function_43(int iParam0, bool bParam1) //Position: 0xF47 / 3911
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

var Function_44(int iParam0) //Position: 0xFAE / 4014
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_45(bool bParam0) //Position: 0xFBE / 4030
{
	return Function_39(12, bParam0);
}

int Function_46(int iParam0) //Position: 0xFCB / 4043
{
	return Function_39(11, iParam0);
}

void Function_47(bool bParam0, int iParam1, char* cParam2) //Position: 0xFD8 / 4056
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

int Function_48() //Position: 0xFF9 / 4089
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

void Function_49() //Position: 0x1095 / 4245
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

void Function_50(bool bParam0, bool bParam1) //Position: 0x10C0 / 4288
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
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), 0, 0);
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

void Function_51(int iParam0, int iParam1, bool bParam2) //Position: 0x115F / 4447
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

struct<16> Function_52(var uParam0, var uParam1) //Position: 0x1252 / 4690
{
	return StackVal, StackVal, StackVal, Function_53(Function_54(uParam0), uParam1);
}

struct<16> Function_53(bool bParam0, bool bParam1) //Position: 0x1264 / 4708
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

int Function_54(int iParam0) //Position: 0x1299 / 4761
{
	if (!Function_55())
	{
		return 0;
	}
	return StackVal;
}

bool Function_55() //Position: 0x12B2 / 4786
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_56(int iParam0) //Position: 0x12BF / 4799
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_57() //Position: 0x12DB / 4827
{
	return Function_37() == 4294967295;
}

bool Function_58() //Position: 0x12E6 / 4838
{
	return Function_59(2);
}

int Function_59(int iParam0) //Position: 0x12F0 / 4848
{
	return Function_60(&Global_79349, iParam0);
}

int Function_60(var uParam0, bool bParam1) //Position: 0x12FF / 4863
{
	return Function_13(uParam0->f_44, bParam1);
}

void Function_61() //Position: 0x130E / 4878
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

bool Function_62(bool bParam0) //Position: 0x134B / 4939
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

void Function_63(bool bParam0) //Position: 0x13CC / 5068
{
	if (bParam0 || Function_12(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_12(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_12(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_12(1048576) || Function_12(4)) || Function_88(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_9(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_64(int iParam0) //Position: 0x1455 / 5205
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_65(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1469 / 5225
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

int Function_66(bool bParam0, bool bParam1) //Position: 0x14AE / 5294
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

void Function_67(vector3 vParam0, var uParam3) //Position: 0x14E2 / 5346
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_71(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_71(), "TurretFinderVol", false, vParam0, 0.0f, 0.0f, 0.0f, uParam3, uParam3, uParam3);
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

int Function_68(bool bParam0) //Position: 0x1595 / 5525
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

int Function_69(bool bParam0) //Position: 0x15D0 / 5584
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

void Function_70(bool bParam0) //Position: 0x161E / 5662
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0,4f);
	return;
}

var Function_71() //Position: 0x1631 / 5681
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_72(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1660 / 5728
{
	if (!IS_OBJECT_VALID(Local_11.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_11.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_11.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_73(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11) + Vector(0.0f, 2,45f, 0.0f), 1, 6587, 1, 125, 0, 0, 0);
	Function_73(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11 + 48) + Vector(0.0f, 2,15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_73(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x16E3 / 5859
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_74(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_74(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) //Position: 0x172E / 5934
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
			Function_17(iParam0);
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

var Function_75(float fParam0) //Position: 0x19AD / 6573
{
	return (fParam0 * 57,29578f);
}

var Function_76(int iParam0, var uParam1) //Position: 0x19BB / 6587
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_11.f_96 != iParam0)
	{
		Local_11.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_77(int iParam0, var uParam1) //Position: 0x1A20 / 6688
{
	uParam1 = uParam1;
	if (Local_11.f_100 != iParam0)
	{
		Local_11.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_one_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0);
	}
	return "mp_lobby_summary";
}

var Function_78() //Position: 0x1A91 / 6801
{
	int iVar0;
	
	iVar0 = Function_84(Global_83591.f_140, &vLocal_47, 0.0f, &Global_83591 + 276, 1);
	Function_79(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_79(bool bParam0, int iParam1) //Position: 0x1ABE / 6846
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

bool Function_80(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1BCD / 7117
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

bool Function_81(int iParam0) //Position: 0x1CF4 / 7412
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_82(bool bParam0, int iParam1) //Position: 0x1D06 / 7430
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

var Function_83() //Position: 0x1D62 / 7522
{
	int iVar0;
	
	return iVar0;
}

var Function_84(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1D6A / 7530
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

bool Function_85(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1E58 / 7768
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

var Function_86(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1FEC / 8172
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_87()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_87() //Position: 0x2058 / 8280
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_88(bool bParam0, bool bParam1) //Position: 0x207F / 8319
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_89() //Position: 0x209F / 8351
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_45)
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
				iLocal_45 = 1;
			}
		}
	}
	else
	{
		Function_14();
	}
	return;
}

void Function_90(char* cParam0, bool bParam1) //Position: 0x2134 / 8500
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

void Function_91(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x21CB / 8651
{
	float fVar0;
	
	if (Function_106())
	{
		if (Function_105(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_101(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_95((iParam0 + 8[iParam0->f_1125])->f_12, 0, bParam3, 0, 0);
				Function_92((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_95((iParam0 + 8[iParam0->f_1125])->f_16, 0, bParam3, 0, 0);
				Function_92((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_92(int iParam0, var uParam1, int iParam2) //Position: 0x226E / 8814
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

void Function_93(int iParam0) //Position: 0x2293 / 8851
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_94(int iParam0) //Position: 0x22A8 / 8872
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_95(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x22BD / 8893
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
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_96(StackVal, bVar1, bParam4);
		}
	}
}

void Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x232F / 9007
{
	int iVar0;
	
	Function_100(bParam0);
	Function_98(bParam1);
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
	Function_97();
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

void Function_97() //Position: 0x24A8 / 9384
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_98(bool bParam0) //Position: 0x24B4 / 9396
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

void Function_99(int iParam0, int iParam1) //Position: 0x24FA / 9466
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_100(iParam0);
	Function_98(iVar0);
	PRINTNL();
	Function_96(iParam0, iVar0, iParam1);
	return;
}

void Function_100(int iParam0) //Position: 0x251F / 9503
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

float Function_101(int iParam0) //Position: 0x2565 / 9573
{
	return -Function_102(iParam0);
}

float Function_102(int iParam0) //Position: 0x2571 / 9585
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

void Function_103() //Position: 0x2642 / 9794
{
	if (!Function_106())
	{
	}
	return;
}

bool Function_104(int iParam0) //Position: 0x264F / 9807
{
	return Function_13(*iParam0, 2);
}

bool Function_105(int iParam0) //Position: 0x265C / 9820
{
	return Function_13(*iParam0, 1);
}

bool Function_106() //Position: 0x2669 / 9833
{
	return NET_IS_IN_SESSION();
}

void Function_107(int iParam0, int iParam1) //Position: 0x2672 / 9842
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_108(bool bParam0) //Position: 0x2693 / 9875
{
	Function_109(16, bParam0);
	return;
}

void Function_109(int iParam0, bool bParam1) //Position: 0x26A0 / 9888
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

void Function_110(var uParam0) //Position: 0x26C8 / 9928
{
	Function_109(8, uParam0);
	return;
}

bool Function_111() //Position: 0x26D5 / 9941
{
	Function_139(&iLocal_130, 0, 9, 30, 0, 0, 1);
	Function_139(&iLocal_130, 1, 9, 30, 2, 2, 2);
	Function_139(&iLocal_130, 2, 12, 0, 3, 3, 3);
	Function_139(&iLocal_130, 3, 12, 0, 1, 1, 0);
	Function_139(&iLocal_130, 4, 23, 0, 0, 0, 1);
	Function_137(&iLocal_130);
	Global_83591 = 4;
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_135();
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_131(Local_50))
	{
		return 0;
	}
	Function_130("FTR_SONG_05", "FTR_SONG_01", 0, 58, 58, 1);
	Function_128(Local_50.f_316);
	Function_121(&Global_83591 + 276, 0);
	Function_116(&Global_83591, 1, 22, 1, 1);
	Function_116(&Global_83591, 2, 6, 10, 1);
	Function_116(&Global_83591, 3, 19, 5, 1);
	Function_116(&Global_83591, 4, 9, 10, 1);
	Function_116(&Global_83591, 5, 24, 5, 1);
	Function_115(&Global_83591);
	Function_114(&Global_83591 + 276, 4);
	Function_113(0, 6);
	Function_113(1, 1);
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(23, false, false));
	Function_112(3, 0);
	return 1;
}

void Function_112(int iParam0, int iParam1) //Position: 0x27D9 / 10201
{
	Function_100(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_99(StackVal, iParam1);
	}
	return;
}

void Function_113(int iParam0, int iParam1) //Position: 0x280A / 10250
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x2818 / 10264
{
	(iParam0 + 228)->f_220 = 0;
	Function_11(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_115(int iParam0) //Position: 0x2830 / 10288
{
	iParam0->f_844 = 0;
	return;
}

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x283C / 10300
{
	Function_117(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2854 / 10324
{
	Function_118(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_118(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2869 / 10345
{
	if (!Function_120(iParam1))
	{
		return;
	}
	Function_119(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_119(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x288C / 10380
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

bool Function_120(int iParam0) //Position: 0x28B6 / 10422
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_121(int iParam0, bool bParam1) //Position: 0x28C6 / 10438
{
	Function_125(iParam0);
	Function_125(iParam0 + 228);
	if (bParam1)
	{
		Function_122(iParam0);
	}
	return;
}

void Function_122(int iParam0) //Position: 0x28E2 / 10466
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_123(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_123(var uParam0, int iParam1) //Position: 0x2902 / 10498
{
	Function_124(uParam0, iParam1, 0);
	return;
}

void Function_124(int iParam0, int iParam1, int iParam2) //Position: 0x2910 / 10512
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_125(int iParam0) //Position: 0x2921 / 10529
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_127(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_126(iParam0, 0.0f);
	return;
}

void Function_126(var uParam0, int iParam1) //Position: 0x294E / 10574
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_127(int iParam0) //Position: 0x295A / 10586
{
	Function_119(iParam0, 4294967295, 0, 1);
	return;
}

void Function_128(bool bParam0) //Position: 0x2968 / 10600
{
	DECOR_SET_OBJECT(Function_129(), "LobbyGringoSet", bParam0);
	return;
}

var Function_129() //Position: 0x2988 / 10632
{
	return Global_83591.f_140;
}

void Function_130(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x2994 / 10644
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

bool Function_131(int iParam0) //Position: 0x2A24 / 10788
{
	Function_134(iParam0);
	if (Function_133())
	{
		Function_114(&Global_83591 + 276, 2);
	}
	Function_132();
	vLocal_47 = { StackVal, StackVal, Function_132() };
	return 1;
}

vector3 Function_132() //Position: 0x2A48 / 10824
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_129();
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

bool Function_133() //Position: 0x2A90 / 10896
{
	return Function_13(Global_79962, 1024);
}

void Function_134(var uParam0) //Position: 0x2AA0 / 10912
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_135() //Position: 0x2AAE / 10926
{
	var uVar0;
	
	Function_136(4, 1);
	uVar0 = uVar0;
	Local_50 = CREATE_LAYOUT("CTF_W2_layout");
	Local_50.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_50, "playablespace", 2, -2335,99f, 47,24232f, 2079,99f, 0.0f, -11,00889f, 0.0f, 266,65f, 66,1619f, 266,65f);
	Local_50.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_50, "CapVol_A", 3, -2270,859f, 27,17852f, 2171,036f, 0.0f, -136,4271f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_50, "CapVol_B", 3, -2396,181f, 35,92011f, 1986,454f, 0.0f, 43,51147f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_A0", 3, -2332,874f, 37,36524f, 2192.0f, -0,2055086f, 189,5443f, 3,035466f, 1.0f, 1.0f, 1.0f);
	Local_50.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_A1", 3, -2304,887f, 27,80773f, 2196f, 0.0f, 195,7968f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_A2", 3, -2280f, 24,48661f, 2191,088f, 0.0f, 208,2237f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_A3", 3, -2250,787f, 23,849f, 2174,787f, 0.0f, 215,2264f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_A4", 3, -2228f, 23,59216f, 2148f, 0.0f, 232,0833f, 0.0f, 1.0f, 1,835308f, 1.0f);
	Local_50.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_A5", 3, -2207,833f, 24,32718f, 2112,168f, 0.0f, 246,0163f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_A6", 3, -2310,184f, 35,08755f, 2129,817f, -0,2378259f, 211,5534f, 3,125844f, 1.0f, 1.0f, 1.0f);
	Local_50.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_A7", 3, -2268,107f, 37,92381f, 2081,536f, -0,4297424f, -118,138f, 3,380346f, 1.0f, 1.0f, 1.0f);
	Local_50.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_B0", 3, -2456.0f, 32,12546f, 2038,619f, 0.0f, 66,96369f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_B1", 3, -2436.0f, 32,12547f, 2008.0f, 0.0f, -305,2913f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_B2", 3, -2414,125f, 38,52273f, 1988f, 0.0f, 41,86019f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_B3", 3, -2392f, 38,71532f, 1969,743f, 0.0f, -324,617f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_B4", 3, -2368.0f, 39,15295f, 1964f, 0.0f, 10,11973f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_B5", 3, -2347,23f, 43,32256f, 1967,23f, 0.0f, 12,40964f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_B6", 3, -2393,728f, 38,14899f, 2060f, 0.0f, 50,61577f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_50.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_50, "T_SpawnVol_B7", 3, -2334,032f, 43,88722f, 2025,968f, 0.0f, 45,88428f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_50 + 120) = { -2261,39f, 36,12157f, 2015,495f };
	*(&Local_50 + 120 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_50.f_144 = CREATE_POINT_IN_LAYOUT(Local_50, "Showdown_A", -2261,39f, 36,12157f, 2015,495f, 0.0f, 0.0f, 0.0f);
	*(&Local_50 + 148) = { -2271,564f, 38,23316f, 2003,263f };
	*(&Local_50 + 148 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_50.f_172 = CREATE_POINT_IN_LAYOUT(Local_50, "Showdown_B", -2271,564f, 38,23316f, 2003,263f, 0.0f, 0.0f, 0.0f);
	*(&Local_50 + 176) = { -2408.0f, 26,10197f, 2134,934f };
	*(&Local_50 + 176 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_50.f_200 = CREATE_POINT_IN_LAYOUT(Local_50, "FlagSpawn_0", -2408.0f, 26,10197f, 2134,934f, 0.0f, 0.0f, 0.0f);
	*(&Local_50 + 204) = { -2369,94f, 32,66752f, 2103,645f };
	*(&Local_50 + 204 + 12) = { 0.0f, 0.0f, 10,92514f };
	Local_50.f_228 = CREATE_POINT_IN_LAYOUT(Local_50, "FlagSpawn_1", -2369,94f, 32,66752f, 2103,645f, 0.0f, 0.0f, 10,92514f);
	*(&Local_50 + 232) = { -2336,069f, 46,95405f, 2080f };
	*(&Local_50 + 232 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_50.f_256 = CREATE_POINT_IN_LAYOUT(Local_50, "FlagSpawn_2", -2336,069f, 46,95405f, 2080f, 0.0f, 0.0f, 0.0f);
	*(&Local_50 + 260) = { -2292.0f, 39,15292f, 2054,162f };
	*(&Local_50 + 260 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_50.f_284 = CREATE_POINT_IN_LAYOUT(Local_50, "FlagSpawn_3", -2292.0f, 39,15292f, 2054,162f, 0.0f, 0.0f, 0.0f);
	*(&Local_50 + 288) = { -2266,024f, 34,20525f, 2024,892f };
	*(&Local_50 + 288 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_50.f_312 = CREATE_POINT_IN_LAYOUT(Local_50, "FlagSpawn_4", -2266,024f, 34,20525f, 2024,892f, 0.0f, 0.0f, 0.0f);
	Local_50.f_316 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Local_50, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -2329,421f, 42,95569f, 2064f, 0.0f, 89,11369f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -2330,507f, 42,79748f, 2068f, 0.0f, -120,2056f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -2333,939f, 43,16859f, 2068f, 0.0f, 0.0f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -2340.0f, 42,16467f, 2062,17f, 0.0f, 107,1811f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -2332.0f, 42,68205f, 2064,754f, 0.0f, 72,27363f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -2337,025f, 42,49449f, 2064f, 0.0f, -87,2289f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_dnd_rowdydrink2", "stand_dnd_rowdydrink", -2334,885f, 42,74658f, 2059,278f, 0.0f, 174,0249f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_dnd_rowdydrink3", "stand_dnd_rowdydrink", -2333,646f, 42,83784f, 2060,227f, 0.0f, 121,3735f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_dnd_rowdydrink4", "stand_dnd_rowdydrink", -2338,084f, 42,50056f, 2065,951f, 0.0f, 72,27363f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "stand_dnd_rowdydrink5", "stand_dnd_rowdydrink", -2334,064f, 43,09564f, 2069,722f, 0.0f, 218,437f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "smoking_stand_loose", "smoking_stand_loose", -2332.0f, 42,90055f, 2061,789f, 0.0f, 95,34389f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "smoking_stand_loose1", "smoking_stand_loose", -2329,397f, 42,26791f, 2066,307f, 0.0f, 0.0f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "smoking_stand_loose2", "smoking_stand_loose", -2334,863f, 42,73584f, 2065,149f, 0.0f, 0.0f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "smoking_stand_loose3", "smoking_stand_loose", -2334,359f, 43,28541f, 2071,356f, 0.0f, -31,4841f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "smoking_stand_loose4", "smoking_stand_loose", -2338,289f, 42,47051f, 2068,15f, 0.0f, 0.0f, 0.0f), Local_50.f_316);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_50, "smoking_stand_loose5", "smoking_stand_loose", -2336,805f, 42,34594f, 2061,349f, 0.0f, 39,28033f, 0.0f), Local_50.f_316);
	return;
}

void Function_136(int iParam0, int iParam1) //Position: 0x3606 / 13830
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

void Function_137(int iParam0) //Position: 0x364F / 13903
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_138("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], false));
	Function_112(StackVal, 0);
	return;
}

bool Function_138(char* cParam0) //Position: 0x36C1 / 14017
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x36E0 / 14048
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_140() //Position: 0x3722 / 14114
{
	while (!IS_EXITFLAG_SET())
	{
		Function_18(4089, 14144);
		WAIT(false);
	}
	return;
}

int Function_141(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x3740 / 14144
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
	if (!Function_12(4))
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

bool Function_142() //Position: 0x3843 / 14403
{
	return Function_143(2);
}

bool Function_143(int iParam0) //Position: 0x384D / 14413
{
	return Function_13(StackVal, iParam0);
}

void Function_144() //Position: 0x3860 / 14432
{
	if (Function_142())
	{
		return;
	}
	Function_154();
	Function_152(&bLocal_38, "MP_CTF", 10, 0);
	Function_152(&bLocal_38, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_146(&bLocal_38))
	{
		WAIT(false);
	}
	fLocal_10 = 5.0f;
	Function_89();
	Function_145();
	return;
}

void Function_145() //Position: 0x38C4 / 14532
{
	while (!Function_143(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_146(int iParam0) //Position: 0x38DF / 14559
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_151();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
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
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
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

void Function_147() //Position: 0x3C5A / 15450
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

bool Function_148(int iParam0) //Position: 0x3C9A / 15514
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x3CB6 / 15542
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

void Function_150(var uParam0, int iParam1) //Position: 0x3CE1 / 15585
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_151() //Position: 0x3CF2 / 15602
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

var Function_152(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3D34 / 15668
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_153(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_150(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_153(var uParam0, int iParam1, int iParam2) //Position: 0x3D6C / 15724
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
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

void Function_154() //Position: 0x3E30 / 15920
{
	Local_11.f_96 = 4294967295;
	Local_11.f_100 = 4294967295;
	return;
}

